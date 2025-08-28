#include "TaleWorlds.Native.Split.h"

// 03_rendering_part003.c - 渲染系统相关函数
// 本文件包含渲染缓冲区管理、内存分配和比较等功能

// 函数: 初始化渲染缓冲区
// 参数: param_1 - 渲染上下文, param_2 - 缓冲区指针
// 功能: 清零并初始化渲染缓冲区
void initialize_render_buffer(uint64_t render_context, uint64_t *buffer_ptr)
{
  longlong buffer_offset;
  longlong counter;
  longlong context_offset;
  longlong buffer_size;
  
  if (buffer_size != 0) {
    buffer_offset = (longlong)buffer_ptr + 0x1c;
    counter = buffer_size;
    do {
      // 清零缓冲区块
      *buffer_ptr = 0;
      buffer_ptr[1] = 0;
      buffer_ptr[2] = 0;
      buffer_ptr[3] = 0;
      buffer_ptr = buffer_ptr + 4;
      
      // 清零相关数据结构
      *(uint64_t *)(buffer_offset + -0x14) = 0;
      *(uint64_t *)(buffer_offset + -4) = 0;
      
      counter = counter + -1;
      buffer_offset = buffer_offset + 0x20;
    } while (counter != 0);
    
    buffer_ptr = *(uint64_t **)(context_offset + 8);
  }
  
  // 设置缓冲区指针
  *(uint64_t **)(context_offset + 8) = buffer_ptr + buffer_size * 4;
  return;
}

// 函数: 处理渲染数据
// 参数: param_1 - 渲染目标, param_2 - 数据源, param_3 - 数据大小
// 功能: 处理和转换渲染数据，应用缩放因子
void process_render_data(longlong render_target, uint64_t data_source, longlong data_size)
{
  longlong *target_ptr;
  float scale_factor;
  longlong temp_var1;
  longlong temp_var2;
  ulonglong data_count;
  ulonglong remaining_count;
  longlong loop_counter;
  longlong base_offset;
  longlong chunk_counter;
  
  temp_var1 = *(longlong *)(data_size + 8);
  target_ptr = (longlong *)(render_target + 8);
  
  // 设置渲染参数
  *(int32_t *)(render_target + 0x2c) = *(int32_t *)(temp_var1 + 4);
  *(int32_t *)(render_target + 0x28) = *(int32_t *)(temp_var1 + 8);
  *(int **)(data_size + 8) = (int *)(temp_var1 + 0xc);
  
  remaining_count = (ulonglong)*(int *)(temp_var1 + 0xc);
  *(longlong *)(data_size + 8) = temp_var1 + 0x10;
  
  // 检查并分配缓冲区空间
  data_count = *(longlong *)(render_target + 0x10) - *target_ptr >> 5;
  if (data_count < remaining_count) {
    allocate_render_buffer(target_ptr, remaining_count - data_count);
  }
  else {
    *(ulonglong *)(render_target + 0x10) = remaining_count * 0x20 + *target_ptr;
  }
  
  // 批量处理数据块（每块4个元素）
  temp_var1 = 0;
  if (3 < (longlong)remaining_count) {
    chunk_counter = (remaining_count - 4 >> 2) + 1;
    temp_var1 = chunk_counter * 4;
    base_offset = 0;
    
    do {
      temp_var2 = *target_ptr;
      scale_factor = **(float **)(data_size + 8);
      *(float **)(data_size + 8) = *(float **)(data_size + 8) + 1;
      
      // 应用缩放因子并存储数据
      *(int *)(base_offset + temp_var2) = (int)(scale_factor * 29.0);
      *(int32_t *)(base_offset + 4 + temp_var2) = **(int32_t **)(data_size + 8);
      
      temp_var1 = *(longlong *)(data_size + 8);
      *(int32_t *)(base_offset + 8 + temp_var2) = *(int32_t *)(temp_var1 + 4);
      *(int32_t *)(base_offset + 0xc + temp_var2) = *(int32_t *)(temp_var1 + 8);
      *(longlong *)(data_size + 8) = temp_var1 + 0xc;
      
      // 对Y分量应用缩放
      *(float *)(base_offset + 8 + temp_var2) = *(float *)(base_offset + 8 + temp_var2) * 29.0;
      
      // 处理后续数据点
      scale_factor = **(float **)(data_size + 8);
      *(float **)(data_size + 8) = *(float **)(data_size + 8) + 1;
      *(int *)(base_offset + 0x10 + temp_var2) = (int)(scale_factor * 29.0);
      *(int32_t *)(base_offset + 0x14 + temp_var2) = **(int32_t **)(data_size + 8);
      
      temp_var1 = *(longlong *)(data_size + 8);
      *(int32_t *)(base_offset + 0x18 + temp_var2) = *(int32_t *)(temp_var1 + 4);
      *(int32_t *)(base_offset + 0x1c + temp_var2) = *(int32_t *)(temp_var1 + 8);
      *(longlong *)(data_size + 8) = temp_var1 + 0xc;
      *(float *)(base_offset + 0x18 + temp_var2) = *(float *)(base_offset + 0x18 + temp_var2) * 29.0;
      
      // 继续处理更多数据点...
      temp_var2 = *target_ptr;
      scale_factor = **(float **)(data_size + 8);
      *(float **)(data_size + 8) = *(float **)(data_size + 8) + 1;
      *(int *)(temp_var2 + 0x20 + base_offset) = (int)(scale_factor * 29.0);
      *(int32_t *)(temp_var2 + 0x24 + base_offset) = **(int32_t **)(data_size + 8);
      
      temp_var1 = *(longlong *)(data_size + 8);
      *(int32_t *)(temp_var2 + 0x28 + base_offset) = *(int32_t *)(temp_var1 + 4);
      *(int32_t *)(temp_var2 + 0x2c + base_offset) = *(int32_t *)(temp_var1 + 8);
      *(longlong *)(data_size + 8) = temp_var1 + 0xc;
      *(float *)(temp_var2 + 0x28 + base_offset) = *(float *)(temp_var2 + 0x28 + base_offset) * 29.0;
      
      scale_factor = **(float **)(data_size + 8);
      *(float **)(data_size + 8) = *(float **)(data_size + 8) + 1;
      *(int *)(temp_var2 + 0x30 + base_offset) = (int)(scale_factor * 29.0);
      *(int32_t *)(temp_var2 + 0x34 + base_offset) = **(int32_t **)(data_size + 8);
      
      temp_var1 = *(longlong *)(data_size + 8);
      *(int32_t *)(temp_var2 + 0x38 + base_offset) = *(int32_t *)(temp_var1 + 4);
      *(int32_t *)(temp_var2 + 0x3c + base_offset) = *(int32_t *)(temp_var1 + 8);
      *(longlong *)(data_size + 8) = temp_var1 + 0xc;
      *(float *)(temp_var2 + 0x38 + base_offset) = *(float *)(temp_var2 + 0x38 + base_offset) * 29.0;
      
      temp_var2 = *target_ptr;
      scale_factor = **(float **)(data_size + 8);
      *(float **)(data_size + 8) = *(float **)(data_size + 8) + 1;
      *(int *)(temp_var2 + 0x40 + base_offset) = (int)(scale_factor * 29.0);
      *(int32_t *)(temp_var2 + 0x44 + base_offset) = **(int32_t **)(data_size + 8);
      
      temp_var1 = *(longlong *)(data_size + 8);
      *(int32_t *)(temp_var2 + 0x48 + base_offset) = *(int32_t *)(temp_var1 + 4);
      *(int32_t *)(temp_var2 + 0x4c + base_offset) = *(int32_t *)(temp_var1 + 8);
      *(longlong *)(data_size + 8) = temp_var1 + 0xc;
      *(float *)(temp_var2 + 0x48 + base_offset) = *(float *)(temp_var2 + 0x48 + base_offset) * 29.0;
      
      scale_factor = **(float **)(data_size + 8);
      *(float **)(data_size + 8) = *(float **)(data_size + 8) + 1;
      *(int *)(temp_var2 + 0x50 + base_offset) = (int)(scale_factor * 29.0);
      *(int32_t *)(temp_var2 + 0x54 + base_offset) = **(int32_t **)(data_size + 8);
      
      temp_var1 = *(longlong *)(data_size + 8);
      *(int32_t *)(temp_var2 + 0x58 + base_offset) = *(int32_t *)(temp_var1 + 4);
      *(int32_t *)(temp_var2 + 0x5c + base_offset) = *(int32_t *)(temp_var1 + 8);
      *(longlong *)(data_size + 8) = temp_var1 + 0xc;
      *(float *)(temp_var2 + 0x58 + base_offset) = *(float *)(temp_var2 + 0x58 + base_offset) * 29.0;
      
      temp_var2 = *target_ptr;
      scale_factor = **(float **)(data_size + 8);
      *(float **)(data_size + 8) = *(float **)(data_size + 8) + 1;
      *(int *)(base_offset + 0x60 + temp_var2) = (int)(scale_factor * 29.0);
      *(int32_t *)(base_offset + 100 + temp_var2) = **(int32_t **)(data_size + 8);
      
      temp_var1 = *(longlong *)(data_size + 8);
      *(int32_t *)(base_offset + 0x68 + temp_var2) = *(int32_t *)(temp_var1 + 4);
      *(int32_t *)(base_offset + 0x6c + temp_var2) = *(int32_t *)(temp_var1 + 8);
      *(longlong *)(data_size + 8) = temp_var1 + 0xc;
      *(float *)(base_offset + 0x68 + temp_var2) = *(float *)(base_offset + 0x68 + temp_var2) * 29.0;
      
      scale_factor = **(float **)(data_size + 8);
      *(float **)(data_size + 8) = *(float **)(data_size + 8) + 1;
      *(int *)(base_offset + 0x70 + temp_var2) = (int)(scale_factor * 29.0);
      *(int32_t *)(base_offset + 0x74 + temp_var2) = **(int32_t **)(data_size + 8);
      
      temp_var1 = *(longlong *)(data_size + 8);
      *(int32_t *)(base_offset + 0x78 + temp_var2) = *(int32_t *)(temp_var1 + 4);
      *(int32_t *)(base_offset + 0x7c + temp_var2) = *(int32_t *)(temp_var1 + 8);
      *(longlong *)(data_size + 8) = temp_var1 + 0xc;
      *(float *)(base_offset + 0x78 + temp_var2) = *(float *)(base_offset + 0x78 + temp_var2) * 29.0;
      
      chunk_counter = chunk_counter + -1;
      base_offset = base_offset + 0x80;
    } while (chunk_counter != 0);
  }
  
  // 处理剩余的数据元素
  if (temp_var1 < (longlong)remaining_count) {
    base_offset = remaining_count - temp_var1;
    temp_var1 = temp_var1 << 5;
    
    do {
      temp_var2 = *target_ptr;
      scale_factor = **(float **)(data_size + 8);
      *(float **)(data_size + 8) = *(float **)(data_size + 8) + 1;
      
      *(int *)(temp_var1 + temp_var2) = (int)(scale_factor * 29.0);
      *(int32_t *)(temp_var1 + 4 + temp_var2) = **(int32_t **)(data_size + 8);
      
      temp_var1 = *(longlong *)(data_size + 8);
      scale_factor = *(float *)(temp_var1 + 4);
      *(float *)(temp_var1 + 8 + temp_var2) = scale_factor;
      *(int32_t *)(temp_var1 + 0xc + temp_var2) = *(int32_t *)(temp_var1 + 8);
      *(longlong *)(data_size + 8) = temp_var1 + 0xc;
      *(float *)(temp_var1 + 8 + temp_var2) = scale_factor * 29.0;
      
      scale_factor = **(float **)(data_size + 8);
      *(float **)(data_size + 8) = *(float **)(data_size + 8) + 1;
      *(int *)(temp_var1 + 0x10 + temp_var2) = (int)(scale_factor * 29.0);
      *(int32_t *)(temp_var1 + 0x14 + temp_var2) = **(int32_t **)(data_size + 8);
      
      temp_var1 = *(longlong *)(data_size + 8);
      scale_factor = *(float *)(temp_var1 + 4);
      *(float *)(temp_var1 + 0x18 + temp_var2) = scale_factor;
      *(int32_t *)(temp_var1 + 0x1c + temp_var2) = *(int32_t *)(temp_var1 + 8);
      *(longlong *)(data_size + 8) = temp_var1 + 0xc;
      *(float *)(temp_var1 + 0x18 + temp_var2) = scale_factor * 29.0;
      
      base_offset = base_offset + -1;
      temp_var1 = temp_var1 + 0x20;
    } while (base_offset != 0);
  }
  
  return;
}

// 函数: 释放渲染资源
// 参数: param_1 - 资源指针
// 功能: 释放渲染相关的内存资源
void free_render_resources(uint64_t *resource_ptr)
{
  int *ref_count;
  uint64_t *resource_data;
  longlong memory_block;
  ulonglong memory_address;
  
  *resource_ptr = &GLOBAL_RENDER_TABLE;
  cleanup_render_buffer(resource_ptr + 1);
  
  resource_data = (uint64_t *)resource_ptr[1];
  if (resource_data == (uint64_t *)0x0) {
    return;
  }
  
  // 检查内存地址有效性
  memory_address = (ulonglong)resource_data & 0xffffffffffc00000;
  if (memory_address != 0) {
    memory_block = memory_address + 0x80 + ((longlong)resource_data - memory_address >> 0x10) * 0x50;
    memory_block = memory_block - (ulonglong)*(uint *)(memory_block + 4);
    
    // 检查是否为有效的渲染资源
    if ((*(void ***)(memory_address + 0x70) == &ExceptionList) && (*(char *)(memory_block + 0xe) == '\0')) {
      // 从链表中移除资源
      *resource_data = *(uint64_t *)(memory_block + 0x20);
      *(uint64_t **)(memory_block + 0x20) = resource_data;
      
      // 减少引用计数
      ref_count = (int *)(memory_block + 0x18);
      *ref_count = *ref_count + -1;
      
      // 如果引用计数为0，执行清理
      if (*ref_count == 0) {
        cleanup_render_manager();
        return;
      }
    }
    else {
      // 处理异常情况
      handle_memory_exception(memory_address, 
                             CONCAT71(0xff000000, *(void ***)(memory_address + 0x70) == &ExceptionList),
                             resource_data, memory_address, 0xfffffffffffffffe);
    }
  }
  
  return;
}

// 函数: 初始化渲染状态
// 参数: param_1 - 状态指针
// 功能: 初始化渲染状态参数为单位矩阵和默认值
uint64_t * initialize_render_state(uint64_t *state_ptr)
{
  // 清零状态字段
  state_ptr[100] = 0;
  state_ptr[0x65] = 0;
  state_ptr[0x66] = 0;
  *(int32_t *)(state_ptr + 0x67) = 3;
  state_ptr[0x68] = 0;
  state_ptr[0x69] = 0;
  state_ptr[0x6a] = 0;
  *(int32_t *)(state_ptr + 0x6b) = 3;
  
  // 设置为单位矩阵 (1.0f)
  *state_ptr = 0x3f8000003f800000;
  state_ptr[1] = 0x3f8000003f800000;
  state_ptr[2] = 0x3f8000003f800000;
  state_ptr[3] = 0x3f8000003f800000;
  state_ptr[4] = 0x3f8000003f800000;
  state_ptr[5] = 0x3f8000003f800000;
  state_ptr[6] = 0x3f8000003f800000;
  state_ptr[7] = 0x3f8000003f800000;
  state_ptr[8] = 0x3f8000003f800000;
  state_ptr[9] = 0x3f8000003f800000;
  state_ptr[10] = 0x3f8000003f800000;
  state_ptr[0xb] = 0x3f8000003f800000;
  state_ptr[0xc] = 0x3f8000003f800000;
  state_ptr[0xd] = 0x3f8000003f800000;
  state_ptr[0xe] = 0x3f8000003f800000;
  state_ptr[0xf] = 0x3f8000003f800000;
  state_ptr[0x10] = 0x3f8000003f800000;
  state_ptr[0x11] = 0x3f8000003f800000;
  state_ptr[0x12] = 0x3f8000003f800000;
  state_ptr[0x13] = 0x3f8000003f800000;
  state_ptr[0x14] = 0x3f8000003f800000;
  state_ptr[0x15] = 0x3f8000003f800000;
  state_ptr[0x16] = 0x3f8000003f800000;
  state_ptr[0x17] = 0x3f8000003f800000;
  state_ptr[0x18] = 0x3f8000003f800000;
  state_ptr[0x19] = 0x3f8000003f800000;
  state_ptr[0x1a] = 0x3f8000003f800000;
  state_ptr[0x1b] = 0x3f8000003f800000;
  state_ptr[0x1c] = 0x3f8000003f800000;
  state_ptr[0x1d] = 0x3f8000003f800000;
  state_ptr[0x1e] = 0x3f8000003f800000;
  state_ptr[0x1f] = 0x3f8000003f800000;
  state_ptr[0x20] = 0x3f8000003f800000;
  state_ptr[0x21] = 0x3f8000003f800000;
  state_ptr[0x22] = 0x3f8000003f800000;
  state_ptr[0x23] = 0x3f8000003f800000;
  state_ptr[0x24] = 0x3f8000003f800000;
  state_ptr[0x25] = 0x3f8000003f800000;
  state_ptr[0x26] = 0x3f8000003f800000;
  state_ptr[0x27] = 0x3f8000003f800000;
  state_ptr[0x28] = 0x3f8000003f800000;
  state_ptr[0x29] = 0x3f8000003f800000;
  state_ptr[0x2a] = 0x3f8000003f800000;
  state_ptr[0x2b] = 0x3f8000003f800000;
  state_ptr[0x2c] = 0x3f8000003f800000;
  state_ptr[0x2d] = 0x3f8000003f800000;
  state_ptr[0x2e] = 0x3f8000003f800000;
  state_ptr[0x2f] = 0x3f8000003f800000;
  state_ptr[0x30] = 0x3f8000003f800000;
  state_ptr[0x31] = 0x3f8000003f800000;
  state_ptr[0x32] = 0x3f8000003f800000;
  state_ptr[0x33] = 0x3f8000003f800000;
  state_ptr[0x34] = 0x3f8000003f800000;
  state_ptr[0x35] = 0x3f8000003f800000;
  state_ptr[0x36] = 0x3f8000003f800000;
  state_ptr[0x37] = 0x3f8000003f800000;
  state_ptr[0x38] = 0x3f8000003f800000;
  state_ptr[0x39] = 0x3f8000003f800000;
  state_ptr[0x3a] = 0x3f8000003f800000;
  state_ptr[0x3b] = 0x3f8000003f800000;
  state_ptr[0x3c] = 0x3f8000003f800000;
  state_ptr[0x3d] = 0x3f8000003f800000;
  state_ptr[0x3e] = 0x3f8000003f800000;
  state_ptr[0x3f] = 0x3f8000003f800000;
  state_ptr[0x40] = 0x3f8000003f800000;
  state_ptr[0x41] = 0x3f8000003f800000;
  state_ptr[0x42] = 0x3f8000003f800000;
  state_ptr[0x43] = 0x3f8000003f800000;
  state_ptr[0x44] = 0x3f8000003f800000;
  state_ptr[0x45] = 0x3f8000003f800000;
  state_ptr[0x46] = 0x3f8000003f800000;
  state_ptr[0x47] = 0x3f8000003f800000;
  state_ptr[0x48] = 0x3f8000003f800000;
  state_ptr[0x49] = 0x3f8000003f800000;
  state_ptr[0x4a] = 0x3f8000003f800000;
  state_ptr[0x4b] = 0x3f8000003f800000;
  state_ptr[0x4c] = 0x3f8000003f800000;
  state_ptr[0x4d] = 0x3f8000003f800000;
  state_ptr[0x4e] = 0x3f8000003f800000;
  state_ptr[0x4f] = 0x3f8000003f800000;
  state_ptr[0x50] = 0x3f8000003f800000;
  state_ptr[0x51] = 0x3f8000003f800000;
  state_ptr[0x52] = 0x3f8000003f800000;
  state_ptr[0x53] = 0x3f8000003f800000;
  state_ptr[0x54] = 0x3f8000003f800000;
  state_ptr[0x55] = 0x3f8000003f800000;
  state_ptr[0x56] = 0x3f8000003f800000;
  state_ptr[0x57] = 0x3f8000003f800000;
  state_ptr[0x58] = 0x3f8000003f800000;
  state_ptr[0x59] = 0x3f8000003f800000;
  state_ptr[0x5a] = 0x3f8000003f800000;
  state_ptr[0x5b] = 0x3f8000003f800000;
  state_ptr[0x5c] = 0x3f8000003f800000;
  state_ptr[0x5d] = 0x3f8000003f800000;
  state_ptr[0x5e] = 0x3f8000003f800000;
  state_ptr[0x5f] = 0x3f8000003f800000;
  state_ptr[0x60] = 0x3f8000003f800000;
  state_ptr[0x61] = 0x3f8000003f800000;
  state_ptr[0x62] = 0x3f8000003f800000;
  state_ptr[99] = 0x3f8000003f800000;
  
  return state_ptr;
}

// 函数: 清理渲染上下文 (48字节)
// 参数: param_1 - 上下文指针, param_2 - 清理标志, param_3/4 - 保留参数
// 功能: 清理48字节的渲染上下文
uint64_t * cleanup_render_context_48(uint64_t *context_ptr, ulonglong cleanup_flags, uint64_t reserved1, uint64_t reserved2)
{
  uint64_t cleanup_code;
  
  cleanup_code = 0xfffffffffffffffe;
  *context_ptr = &GLOBAL_RENDER_TABLE;
  cleanup_render_buffer(context_ptr + 1);
  
  if (context_ptr[1] != 0) {
    // 严重错误：不应返回的函数调用
    handle_critical_error();
  }
  
  if ((cleanup_flags & 1) != 0) {
    free(context_ptr, 0x30, reserved1, reserved2, cleanup_code);
  }
  
  return context_ptr;
}

// 函数: 清理渲染上下文 (40字节)
// 参数: param_1 - 上下文指针, param_2 - 清理标志, param_3/4 - 保留参数
// 功能: 清理40字节的渲染上下文
uint64_t * cleanup_render_context_40(uint64_t *context_ptr, ulonglong cleanup_flags, uint64_t reserved1, uint64_t reserved2)
{
  uint64_t cleanup_code;
  
  cleanup_code = 0xfffffffffffffffe;
  *context_ptr = &GLOBAL_RENDER_TABLE;
  cleanup_render_buffer(context_ptr + 1);
  
  if (context_ptr[1] != 0) {
    // 严重错误：不应返回的函数调用
    handle_critical_error();
  }
  
  if ((cleanup_flags & 1) != 0) {
    free(context_ptr, 0x28, reserved1, reserved2, cleanup_code);
  }
  
  return context_ptr;
}

// 函数: 清理渲染缓冲区
// 参数: param_1 - 缓冲区指针
// 功能: 清理和重置渲染缓冲区
void cleanup_render_buffer(ulonglong *buffer_ptr)
{
  int *ref_count;
  uint64_t *buffer_data;
  longlong memory_block;
  ulonglong memory_address;
  
  buffer_data = (uint64_t *)*buffer_ptr;
  *buffer_ptr = 0;
  buffer_ptr[1] = 0;
  buffer_ptr[2] = 0;
  *(int32_t *)(buffer_ptr + 3) = 3;
  
  if (buffer_data == (uint64_t *)0x0) {
    return;
  }
  
  // 检查内存地址有效性
  memory_address = (ulonglong)buffer_data & 0xffffffffffc00000;
  if (memory_address != 0) {
    memory_block = memory_address + 0x80 + ((longlong)buffer_data - memory_address >> 0x10) * 0x50;
    memory_block = memory_block - (ulonglong)*(uint *)(memory_block + 4);
    
    // 检查是否为有效的渲染缓冲区
    if ((*(void ***)(memory_address + 0x70) == &ExceptionList) && (*(char *)(memory_block + 0xe) == '\0')) {
      // 从链表中移除缓冲区
      *buffer_data = *(uint64_t *)(memory_block + 0x20);
      *(uint64_t **)(memory_block + 0x20) = buffer_data;
      
      // 减少引用计数
      ref_count = (int *)(memory_block + 0x18);
      *ref_count = *ref_count + -1;
      
      // 如果引用计数为0，执行清理
      if (*ref_count == 0) {
        cleanup_render_manager();
        return;
      }
    }
    else {
      // 处理异常情况
      handle_memory_exception(memory_address, 
                             CONCAT71(0xff000000, *(void ***)(memory_address + 0x70) == &ExceptionList),
                             buffer_data, memory_address, 0xfffffffffffffffe);
    }
  }
  
  return;
}

// 函数: 重置渲染管线
// 参数: param_1 - 管线指针
// 功能: 重置渲染管线状态
void reset_render_pipeline(uint64_t *pipeline_ptr)
{
  int *ref_count;
  uint64_t *pipeline_data;
  longlong memory_block;
  ulonglong memory_address;
  
  *pipeline_ptr = &GLOBAL_RENDER_TABLE;
  cleanup_render_buffer(pipeline_ptr + 1);
  
  pipeline_data = (uint64_t *)pipeline_ptr[1];
  if (pipeline_data == (uint64_t *)0x0) {
    return;
  }
  
  // 检查内存地址有效性
  memory_address = (ulonglong)pipeline_data & 0xffffffffffc00000;
  if (memory_address != 0) {
    memory_block = memory_address + 0x80 + ((longlong)pipeline_data - memory_address >> 0x10) * 0x50;
    memory_block = memory_block - (ulonglong)*(uint *)(memory_block + 4);
    
    // 检查是否为有效的渲染管线
    if ((*(void ***)(memory_address + 0x70) == &ExceptionList) && (*(char *)(memory_block + 0xe) == '\0')) {
      // 从链表中移除管线
      *pipeline_data = *(uint64_t *)(memory_block + 0x20);
      *(uint64_t **)(memory_block + 0x20) = pipeline_data;
      
      // 减少引用计数
      ref_count = (int *)(memory_block + 0x18);
      *ref_count = *ref_count + -1;
      
      // 如果引用计数为0，执行清理
      if (*ref_count == 0) {
        cleanup_render_manager();
        return;
      }
    }
    else {
      // 处理异常情况
      handle_memory_exception(memory_address, 
                             CONCAT71(0xff000000, *(void ***)(memory_address + 0x70) == &ExceptionList),
                             pipeline_data, memory_address, 0xfffffffffffffffe);
    }
  }
  
  return;
}

// 函数: 重置着色器状态
// 参数: param_1 - 着色器指针
// 功能: 重置着色器状态
void reset_shader_state(uint64_t *shader_ptr)
{
  int *ref_count;
  uint64_t *shader_data;
  longlong memory_block;
  ulonglong memory_address;
  
  *shader_ptr = &GLOBAL_RENDER_TABLE;
  cleanup_render_buffer(shader_ptr + 1);
  
  shader_data = (uint64_t *)shader_ptr[1];
  if (shader_data == (uint64_t *)0x0) {
    return;
  }
  
  // 检查内存地址有效性
  memory_address = (ulonglong)shader_data & 0xffffffffffc00000;
  if (memory_address != 0) {
    memory_block = memory_address + 0x80 + ((longlong)shader_data - memory_address >> 0x10) * 0x50;
    memory_block = memory_block - (ulonglong)*(uint *)(memory_block + 4);
    
    // 检查是否为有效的着色器
    if ((*(void ***)(memory_address + 0x70) == &ExceptionList) && (*(char *)(memory_block + 0xe) == '\0')) {
      // 从链表中移除着色器
      *shader_data = *(uint64_t *)(memory_block + 0x20);
      *(uint64_t **)(memory_block + 0x20) = shader_data;
      
      // 减少引用计数
      ref_count = (int *)(memory_block + 0x18);
      *ref_count = *ref_count + -1;
      
      // 如果引用计数为0，执行清理
      if (*ref_count == 0) {
        cleanup_render_manager();
        return;
      }
    }
    else {
      // 处理异常情况
      handle_memory_exception(memory_address, 
                             CONCAT71(0xff000000, *(void ***)(memory_address + 0x70) == &ExceptionList),
                             shader_data, memory_address, 0xfffffffffffffffe);
    }
  }
  
  return;
}

// 函数: 比较渲染缓冲区
// 参数: param_1 - 第一个缓冲区, param_2 - 第二个缓冲区
// 功能: 比较两个渲染缓冲区是否相同
ulonglong compare_render_buffers(longlong buffer1, longlong buffer2)
{
  float *buffer1_ptr;
  float *buffer2_ptr;
  float *buffer1_start;
  float *buffer1_end;
  longlong offset_diff;
  
  buffer1_ptr = *(float **)(buffer1 + 0x328);
  buffer1_end = *(float **)(buffer1 + 800);
  buffer1_start = (float *)-((longlong)buffer1_ptr - (longlong)buffer1_end >> 0x3f);
  
  // 比较缓冲区大小
  if (((longlong)buffer1_ptr - (longlong)buffer1_end) / 0x14 !=
      (*(longlong *)(buffer2 + 0x328) - *(longlong *)(buffer2 + 800)) / 0x14) {
    return 0;
  }
  
  // 比较缓冲区内容
  if (buffer1_end != buffer1_ptr) {
    buffer2_ptr = (float *)(*(longlong *)(buffer2 + 800) + 8);
    
    do {
      // 检查5个浮点数是否相等
      if ((((buffer2_ptr[-2] != *buffer1_end) || (buffer2_ptr[-1] != buffer1_end[1])) || 
           (*buffer2_ptr != buffer1_end[2])) || (buffer2_ptr[1] != buffer1_end[3])) {
        return 0;
      }
      
      buffer1_end = buffer1_end + 5;
      buffer2_ptr = buffer2_ptr + 5;
    } while (buffer1_end != buffer1_ptr);
  }
  
  // 比较第二组数据
  buffer1_ptr = *(float **)(buffer1 + 0x348);
  buffer1_end = *(float **)(buffer1 + 0x340);
  buffer1_start = (float *)((longlong)buffer1_ptr - (longlong)buffer1_end);
  
  // 检查数据长度是否匹配
  if (((*(longlong *)(buffer2 + 0x348) - *(longlong *)(buffer2 + 0x340) ^ (ulonglong)buffer1_start) &
      0xfffffffffffffff8) != 0) {
    return 0;
  }
  
  // 比较第二组数据内容
  if (buffer1_end != buffer1_ptr) {
    offset_diff = *(longlong *)(buffer2 + 0x340) - (longlong)buffer1_end;
    
    do {
      // 检查2个浮点数是否相等
      if ((*(float *)(offset_diff + (longlong)buffer1_end) != *buffer1_end) ||
         (*(float *)(offset_diff + 4 + (longlong)buffer1_end) != buffer1_end[1])) {
        return 0;
      }
      
      buffer1_end = buffer1_end + 2;
    } while (buffer1_end != buffer1_ptr);
  }
  
  // 缓冲区相同
  return CONCAT71((int7)((ulonglong)buffer1_start >> 8), 1);
}

// 函数: 比较渲染材质
// 参数: param_1 - 第一个材质, param_2 - 第二个材质
// 功能: 比较两个渲染材质是否相同
int8_t compare_render_materials(float *material1, float *material2)
{
  char comparison_result;
  
  // 比较材质的基本属性
  if ((material1[1] == material2[1]) && (*material1 == *material2)) {
    comparison_result = compare_material_properties(material2 + 2, material1 + 2);
    
    if (comparison_result != '\0') {
      comparison_result = compare_material_properties(material2 + 0xe, material1 + 0xe);
      
      if (comparison_result != '\0') {
        return 1; // 材质相同
      }
    }
  }
  
  return 0; // 材质不同
}