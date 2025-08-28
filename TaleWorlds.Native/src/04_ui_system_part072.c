#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part072.c - UI系统向量和矩阵计算模块
// 
// 本模块包含8个核心函数，主要功能：
// - 向量点积和矩阵变换计算
// - UI控件变换矩阵处理
// - 内存分配和尺寸调整
// - UI系统状态管理和数据缓存
// - 批量处理和性能优化

/**
 * @brief UI系统向量点积计算器 - 优化版本
 * 
 * 计算两个向量的点积结果，支持批量处理和循环展开优化。
 * 主要用于UI控件的变换计算和位置更新。
 * 
 * @param result_x 输出参数：X坐标累加结果
 * @param result_y 输出参数：Y坐标累加结果  
 * @param data_end 数据结束位置的指针
 * 
 * 技术说明：
 * - 使用循环展开技术提高性能
 * - 支持批量数据处理
 * - 优化内存访问模式
 * - 处理边界情况
 */
void UISystem_VectorDotProduct_Optimized(float *result_x, float *result_y, longlong data_end)
{
  longlong remaining_elements;
  float *vector_ptr;
  float *temp_ptr1;
  float *temp_ptr2;
  float *base_data_ptr;
  longlong offset_x;
  longlong offset_y;
  longlong element_count;
  longlong current_position;
  longlong start_offset;
  longlong data_base;
  
  // 初始化指针和偏移量
  base_data_ptr = (float *)(data_base + 4 + start_offset * 4);
  offset_x = data_base - data_base;
  offset_y = data_base - data_base;
  element_count = ((data_end - start_offset) - 4U >> 2) + 1;
  current_position = start_offset + element_count * 4;
  
  // 主循环：处理4个元素的块（循环展开优化）
  do {
    // 第一个元素：使用前一个元素的值
    *result_x = *(float *)((longlong)base_data_ptr + offset_x + -4) * base_data_ptr[-1] + *result_x;
    *result_y = *(float *)((longlong)base_data_ptr + offset_y + -4) * base_data_ptr[-1] + *result_y;
    
    // 第二个元素：使用当前元素的值
    *result_x = *(float *)(offset_x + (longlong)base_data_ptr) * *base_data_ptr + *result_x;
    *result_y = *(float *)((longlong)base_data_ptr + offset_y) * *base_data_ptr + *result_y;
    
    // 第三个元素：使用下一个元素的值
    *result_x = *(float *)((longlong)base_data_ptr + offset_x + 4) * base_data_ptr[1] + *result_x;
    *result_y = *(float *)((longlong)base_data_ptr + offset_y + 4) * base_data_ptr[1] + *result_y;
    
    // 第四个元素：使用下两个元素的值
    *result_x = *(float *)((longlong)base_data_ptr + offset_x + 8) * base_data_ptr[2] + *result_x;
    temp_ptr2 = (float *)((longlong)base_data_ptr + offset_y + 8);
    temp_ptr1 = base_data_ptr + 2;
    base_data_ptr = base_data_ptr + 4;
    *result_y = *temp_ptr2 * *temp_ptr1 + *result_y;
    
    element_count = element_count + -1;
  } while (element_count != 0);
  
  // 处理剩余元素（边界情况）
  if (current_position < data_end) {
    base_data_ptr = (float *)(data_base + current_position * 4);
    data_end = data_end - current_position;
    do {
      *result_x = *(float *)((data_base - data_base) + (longlong)base_data_ptr) * *base_data_ptr + *result_x;
      temp_ptr1 = (float *)((longlong)base_data_ptr + (data_base - data_base));
      float element_value = *base_data_ptr;
      base_data_ptr = base_data_ptr + 1;
      *result_y = *temp_ptr1 * element_value + *result_y;
      data_end = data_end + -1;
    } while (data_end != 0);
  }
  return;
}





/**
 * @brief UI系统向量点积计算器 - 简化版本
 * 
 * 计算两个向量的点积结果，简化版本，用于边界情况处理。
 * 主要用于UI控件的简单变换计算。
 * 
 * @param result_x 输出参数：X坐标累加结果
 * @param result_y 输出参数：Y坐标累加结果  
 * @param data_end 数据结束位置的指针
 * 
 * 技术说明：
 * - 简化版本，处理剩余元素
 * - 优化的内存访问模式
 * - 边界条件检查
 */
void UISystem_VectorDotProduct_Simplified(float *result_x, float *result_y, longlong data_end)
{
  float *vector_ptr;
  float element_value;
  float *data_ptr;
  longlong data_base;
  longlong start_offset;
  longlong end_offset;
  
  // 检查边界条件
  if (start_offset < data_end) {
    data_ptr = (float *)(data_base + start_offset * 4);
    data_end = data_end - start_offset;
    do {
      // 计算X坐标贡献
      *result_x = *(float *)((end_offset - data_base) + (longlong)data_ptr) * *data_ptr + *result_x;
      
      // 计算Y坐标贡献
      vector_ptr = (float *)((longlong)data_ptr + (data_base - data_base));
      element_value = *data_ptr;
      data_ptr = data_ptr + 1;
      *result_y = *vector_ptr * element_value + *result_y;
      
      data_end = data_end + -1;
    } while (data_end != 0);
  }
  return;
}





/**
 * @brief UI系统矩阵乘法计算器
 * 
 * 执行4x4矩阵的乘法运算，支持批量处理和循环展开优化。
 * 主要用于UI控件的变换矩阵计算和3D投影。
 * 
 * @param matrix_a 输入矩阵A的指针
 * @param matrix_b_offset 矩阵B的偏移量
 * @param result_matrix 输出结果矩阵
 * @param element_count 矩阵元素数量
 * 
 * 技术说明：
 * - 实现4x4矩阵乘法
 * - 使用循环展开技术优化性能
 * - 处理边界情况
 * - 支持批量矩阵运算
 */
void UISystem_MatrixMultiplier(float *matrix_a, longlong matrix_b_offset, float *result_matrix, int element_count)
{
  float *matrix_b_ptr;
  float *matrix_c_ptr;
  float element_a0;
  float element_a1;
  float element_a2;
  float element_a3;
  float element_b0;
  float element_b1;
  float element_b2;
  float element_b3;
  uint block_count;
  int remaining_elements;
  int processed_elements;
  ulonglong iteration_count;
  float *matrix_a_ptr;
  float result_00;
  float result_01;
  float result_02;
  float result_03;
  float result_10;
  float result_11;
  float result_12;
  float result_13;
  
  // 初始化结果矩阵元素
  result_00 = *result_matrix;
  result_01 = result_matrix[1];
  result_02 = result_matrix[2];
  result_03 = result_matrix[3];
  processed_elements = 0;
  result_10 = 0.0;
  result_11 = 0.0;
  result_12 = 0.0;
  result_13 = 0.0;
  
  // 主循环：处理4x4块的矩阵乘法
  if (0 < element_count + -3) {
    block_count = (element_count - 4U >> 2) + 1;
    iteration_count = (ulonglong)block_count;
    processed_elements = block_count * 4;
    matrix_a_ptr = matrix_a;
    do {
      // 获取矩阵A的当前行元素
      element_a0 = *matrix_a_ptr;
      element_a1 = matrix_a_ptr[1];
      element_a2 = matrix_a_ptr[2];
      element_a3 = matrix_a_ptr[3];
      
      // 获取矩阵B的对应元素
      matrix_b_ptr = (float *)((matrix_b_offset - (longlong)matrix_a) + (longlong)matrix_a_ptr);
      element_b0 = matrix_b_ptr[2];
      matrix_c_ptr = (float *)((matrix_b_offset - (longlong)matrix_a) + 0xc + (longlong)matrix_a_ptr);
      element_b1 = matrix_c_ptr[1];
      
      matrix_a_ptr = matrix_a_ptr + 4;
      
      // 计算第一行结果
      result_00 = result_00 + element_a0 * *matrix_b_ptr + element_b0 * element_a2;
      result_01 = result_01 + element_a0 * matrix_b_ptr[1] + matrix_b_ptr[3] * element_a2;
      result_02 = result_02 + element_a0 * element_b0 + element_b1 * element_a2;
      result_03 = result_03 + element_a0 * matrix_b_ptr[3] + matrix_c_ptr[2] * element_a2;
      
      // 计算第二行结果
      result_10 = result_10 + matrix_b_ptr[1] * element_a1 + element_a3 * *matrix_c_ptr;
      result_11 = result_11 + element_b0 * element_a1 + element_a3 * element_b1;
      result_12 = result_12 + *matrix_c_ptr * element_a1 + element_a3 * matrix_c_ptr[2];
      result_13 = result_13 + element_b1 * element_a1 + element_a3 * matrix_c_ptr[3];
      
      iteration_count = iteration_count - 1;
    } while (iteration_count != 0);
  }
  
  // 处理剩余元素
  if (processed_elements < element_count) {
    remaining_elements = processed_elements + 1;
    element_a0 = matrix_a[processed_elements];
    matrix_a_ptr = (float *)(matrix_b_offset + (longlong)processed_elements * 4);
    result_00 = result_00 + element_a0 * *matrix_a_ptr;
    result_01 = result_01 + element_a0 * matrix_a_ptr[1];
    result_02 = result_02 + element_a0 * matrix_a_ptr[2];
    result_03 = result_03 + element_a0 * matrix_a_ptr[3];
    
    if (remaining_elements < element_count) {
      processed_elements = processed_elements + 2;
      element_a0 = matrix_a[remaining_elements];
      matrix_a_ptr = (float *)(matrix_b_offset + (longlong)remaining_elements * 4);
      result_10 = result_10 + element_a0 * *matrix_a_ptr;
      result_11 = result_11 + element_a0 * matrix_a_ptr[1];
      result_12 = result_12 + element_a0 * matrix_a_ptr[2];
      result_13 = result_13 + element_a0 * matrix_a_ptr[3];
      
      if (processed_elements < element_count) {
        element_a0 = matrix_a[processed_elements];
        matrix_a_ptr = (float *)(matrix_b_offset + (longlong)processed_elements * 4);
        result_00 = result_00 + element_a0 * *matrix_a_ptr;
        result_01 = result_01 + element_a0 * matrix_a_ptr[1];
        result_02 = result_02 + element_a0 * matrix_a_ptr[2];
        result_03 = result_03 + element_a0 * matrix_a_ptr[3];
      }
    }
  }
  
  // 合并结果
  *result_matrix = result_10 + result_00;
  result_matrix[1] = result_11 + result_01;
  result_matrix[2] = result_12 + result_02;
  result_matrix[3] = result_13 + result_03;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/**
 * @brief UI系统内存分配器
 * 
 * 根据不同的分辨率和屏幕尺寸，动态调整UI控件的内存分配。
 * 支持多种分辨率模式：48000、16000等。
 * 
 * @param context_ptr 上下文指针
 * @param param2 参数2
 * @param param3 参数3
 * @param param4 参数4
 * @param width 宽度参数
 * @param height 高度参数
 * 
 * 技术说明：
 * - 支持多种分辨率模式
 * - 动态调整内存分配
 * - 错误处理和安全检查
 * - 使用栈保护机制
 */
void UISystem_MemoryAllocator(undefined8 context_ptr, undefined8 param2, undefined8 param3, undefined8 param4,
                              int width, int height)
{
  int resolution_mode;
  undefined8 stack_param3;
  undefined8 stack_param4;
  undefined8 stack_context;
  longlong memory_size;
  ulonglong stack_protector;
  
  // 栈保护机制
  stack_protector = _DAT_180bf00a8 ^ (ulonglong)&stack_param3;
  stack_param3 = param3;
  stack_param4 = param4;
  stack_context = context_ptr;
  
  // 错误检查：宽度不能为0
  if (width == 0) {
    // WARNING: Subroutine does not return
    FUN_1808fc050(0);
  }
  
  // 根据分辨率模式调整尺寸
  if (resolution_mode == 48000) {
    // 高分辨率模式：双倍尺寸
    width = width * 2;
    height = height * 2;
  }
  else if (resolution_mode == 16000) {
    // 中等分辨率模式：2/3尺寸
    width = (width * 2) / 3;
    height = height * 2;
    // 精确的除法计算，处理负数情况
    height = height / 3 + (height >> 0x1f) +
             (int)(((longlong)height / 3 + ((longlong)height >> 0x3f) & 0xffffffffU) >> 0x1f);
  }
  
  // 计算所需内存大小（每个元素4字节）
  memory_size = (longlong)width * 4;
  
  // WARNING: Subroutine does not return
  FUN_1808fd200(memory_size, height, 0xffffffffffffff0);
}





/**
 * @brief UI系统状态管理器 - 主要版本
 * 
 * 管理UI系统的状态更新、数据缓存和性能统计。
 * 支持批量处理、循环缓冲区和动态调整。
 * 
 * @param ui_context UI系统上下文指针
 * @param param2 参数2
 * @param param3 参数3
 * @param process_flags 处理标志
 * @param process_count 处理数量
 * @param param6 参数6
 * @param param7 参数7
 * @param param8 参数8
 * @param param9 参数9
 * @param param10 参数10
 * @param param11 参数11
 * @param result_data 输出结果数据
 * 
 * 技术说明：
 * - 实现循环缓冲区管理
 * - 支持批量数据处理
 * - 动态性能调整
 * - 内存优化和缓存管理
 */
void UISystem_StateManager_Main(longlong ui_context, undefined8 param2, longlong param3, uint process_flags, int process_count,
                                undefined4 param6, undefined4 param7, undefined4 param8, int param9,
                                undefined4 param10, undefined8 param11, undefined8 *result_data)
{
  ulonglong loop_counter;
  undefined8 *data_ptr;
  undefined8 data_value;
  int temp_var;
  longlong buffer_offset;
  longlong remaining_count;
  float *float_ptr;
  ulonglong processed_count;
  int batch_size;
  int remaining_items;
  int current_batch;
  int cache_index;
  ulonglong iteration_index;
  uint max_process_count;
  int buffer_head;
  bool has_more_data;
  float current_value;
  float min_value;
  float sum_value;
  ulonglong sample_count;
  
  // 主要处理循环
  if (param3 != 0) {
    buffer_head = *(int *)(ui_context + 0x1d1c);
    max_process_count = (param9 * 0x5f) / 0x32;
    if ((int)(process_flags & 0xfffffffe) <= (int)max_process_count) {
      max_process_count = process_flags & 0xfffffffe;
    }
    batch_size = max_process_count - buffer_head;
    if (0 < batch_size) {
      param9 = param9 / 0x32;
      do {
        current_batch = param9;
        if (batch_size <= param9) {
          current_batch = batch_size;
        }
        FUN_180707df0(ui_context, param2, param3, current_batch, buffer_head, param6, param7, param8, param10, param11);
        buffer_head = buffer_head + param9;
        batch_size = batch_size - param9;
      } while (0 < batch_size);
    }
    *(uint *)(ui_context + 0x1d1c) = max_process_count - process_count;
  }
  
  // 初始化结果数据
  *(undefined4 *)result_data = 0;
  buffer_head = *(int *)(ui_context + 0x2054);
  batch_size = *(int *)(ui_context + 0x2050);
  temp_var = batch_size - buffer_head;
  current_batch = temp_var + 100;
  if (-1 < temp_var) {
    current_batch = temp_var;
  }
  
  iteration_index = 0;
  temp_var = 0;
  
  // 缓冲区管理
  if (((*(int *)(ui_context + 8) / 0x32 < process_count) && (buffer_head != batch_size)) &&
     (buffer_head = buffer_head + 1, buffer_head == 100)) {
    buffer_head = 0;
  }
  
  // 数据采样和统计
  remaining_items = 1;
  cache_index = buffer_head + -1;
  if (buffer_head != batch_size) {
    cache_index = buffer_head;
  }
  if (cache_index < 0) {
    cache_index = 99;
  }
  
  processed_count = (ulonglong)cache_index;
  buffer_offset = processed_count * 0x38;
  
  // 从缓存中读取数据
  data_ptr = (undefined8 *)(buffer_offset + 0x206c + ui_context);
  data_value = data_ptr[1];
  *result_data = *data_ptr;
  result_data[1] = data_value;
  
  data_ptr = (undefined8 *)(buffer_offset + 0x207c + ui_context);
  data_value = data_ptr[1];
  result_data[2] = *data_ptr;
  result_data[3] = data_value;
  
  data_ptr = (undefined8 *)(buffer_offset + 0x208c + ui_context);
  data_value = data_ptr[1];
  result_data[4] = *data_ptr;
  result_data[5] = data_value;
  result_data[6] = *(undefined8 *)(buffer_offset + 0x209c + ui_context);
  
  // 性能统计计算
  sum_value = *(float *)((longlong)result_data + 4);
  sample_count = iteration_index;
  min_value = sum_value;
  
  do {
    has_more_data = processed_count != 99;
    loop_counter = processed_count + 1;
    processed_count = iteration_index;
    if (has_more_data) {
      processed_count = loop_counter;
    }
    current_value = min_value;
    if (processed_count == (longlong)*(int *)(ui_context + 0x2050)) break;
    
    remaining_items = remaining_items + 1;
    max_process_count = (int)sample_count + 1;
    sample_count = (ulonglong)max_process_count;
    
    current_value = *(float *)(processed_count * 0x38 + 0x2070 + ui_context);
    sum_value = sum_value + current_value;
    if (current_value <= min_value) {
      current_value = min_value;
    }
    min_value = current_value;
  } while ((int)max_process_count < 3);
  
  // 计算平均值和调整值
  min_value = sum_value / (float)remaining_items;
  if (sum_value / (float)remaining_items <= current_value - 0.2) {
    min_value = current_value - 0.2;
  }
  *(float *)((longlong)result_data + 4) = min_value;
  
  // 更新统计计数器
  *(int *)(ui_context + 0x2058) = *(int *)(ui_context + 0x2058) + process_count / (*(int *)(ui_context + 8) / 400);
  buffer_head = *(int *)(ui_context + 0x2058);
  batch_size = *(int *)(ui_context + 0x2054);
  
  // 批量处理优化
  if (7 < buffer_head) {
    do {
      buffer_head = buffer_head + -8;
      batch_size = batch_size + 1;
    } while (7 < buffer_head);
    *(int *)(ui_context + 0x2054) = batch_size;
    *(int *)(ui_context + 0x2058) = buffer_head;
  }
  
  // 缓冲区溢出处理
  if (99 < batch_size) {
    *(int *)(ui_context + 0x2054) = batch_size + -100;
  }
  
  // 数据聚合计算
  sum_value = 0.0;
  buffer_head = current_batch + -1;
  if (current_batch + -1 < 1) {
    buffer_head = temp_var;
  }
  buffer_offset = (longlong)(100 - buffer_head);
  
  // 批量数据计算（4个元素一组）
  if (3 < buffer_offset) {
    float_ptr = (float *)(ui_context + 0x1eb4);
    remaining_count = (buffer_offset - 4U >> 2) + 1;
    temp_var = (int)remaining_count * 4;
    iteration_index = remaining_count * 4;
    do {
      sum_value = sum_value + float_ptr[-1] + *float_ptr + float_ptr[1] + float_ptr[2];
      float_ptr = float_ptr + 4;
      remaining_count = remaining_count + -1;
    } while (remaining_count != 0);
  }
  
  // 处理剩余数据
  if ((longlong)iteration_index < buffer_offset) {
    buffer_offset = buffer_offset - iteration_index;
    float_ptr = (float *)(ui_context + 0x1eb0 + iteration_index * 4);
    temp_var = temp_var + (int)buffer_offset;
    do {
      sum_value = sum_value + *float_ptr;
      float_ptr = float_ptr + 1;
      buffer_offset = buffer_offset + -1;
    } while (buffer_offset != 0);
  }
  
  buffer_offset = (longlong)temp_var;
  
  // 补充数据计算
  if (buffer_offset < 100) {
    if (3 < 100 - buffer_offset) {
      float_ptr = (float *)(ui_context + 0x1d24 + buffer_offset * 4);
      remaining_count = (0x60U - buffer_offset >> 2) + 1;
      buffer_offset = buffer_offset + remaining_count * 4;
      do {
        sum_value = sum_value + float_ptr[-1] + *float_ptr + float_ptr[1] + float_ptr[2];
        float_ptr = float_ptr + 4;
        remaining_count = remaining_count + -1;
      } while (remaining_count != 0);
    }
    
    if (buffer_offset < 100) {
      remaining_count = 100 - buffer_offset;
      float_ptr = (float *)(ui_context + 0x1d20 + buffer_offset * 4);
      do {
        sum_value = sum_value + *float_ptr;
        float_ptr = float_ptr + 1;
        remaining_count = remaining_count + -1;
      } while (remaining_count != 0);
    }
  }
  
  // 最终结果计算
  *(float *)((longlong)result_data + 0x14) =
       (1.0 - sum_value) * *(float *)(ui_context + 0x2040) + sum_value * *(float *)(ui_context + 0x2044);
  return;
}





// 函数: void FUN_180707988(int param_1,undefined8 param_2,undefined8 param_3,int param_4)
void FUN_180707988(int param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int in_EAX;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  float *pfVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  undefined8 unaff_RBX;
  longlong unaff_RBP;
  int iVar11;
  int iVar12;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  int iVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong in_R11;
  int unaff_R12D;
  undefined8 unaff_R14;
  bool bVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uStack0000000000000028;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000038;
  undefined4 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  int in_stack_000000a0;
  undefined4 in_stack_000000a8;
  undefined4 in_stack_000000b0;
  undefined4 in_stack_000000b8;
  undefined4 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 *in_stack_000000d8;
  ulonglong uVar16;
  
  *(undefined8 *)(in_R11 + 8) = unaff_RBX;
  *(undefined8 *)(in_R11 + 0x10) = unaff_RSI;
  *(undefined8 *)(in_R11 + -0x28) = unaff_R14;
  iVar11 = (int)((ulonglong)((longlong)in_EAX * (longlong)(param_1 * 0x5f)) >> 0x20);
  iVar11 = (iVar11 >> 4) - (iVar11 >> 0x1f);
  if (param_4 <= iVar11) {
    iVar11 = param_4;
  }
  iVar9 = iVar11 - *(int *)(unaff_RBP + 0x1d1c);
  if (0 < iVar9) {
    *(undefined8 *)(in_R11 + 0x18) = unaff_RDI;
    do {
      uStack0000000000000048 = in_stack_000000d0;
      uStack0000000000000040 = in_stack_000000c8;
      uStack0000000000000038 = in_stack_000000b8;
      uStack0000000000000030 = in_stack_000000b0;
      uStack0000000000000028 = in_stack_000000a8;
      FUN_180707df0();
      iVar9 = iVar9 - param_1 / 0x32;
      unaff_R12D = in_stack_000000a0;
    } while (0 < iVar9);
  }
  *(int *)(unaff_RBP + 0x1d1c) = iVar11 - unaff_R12D;
  *(undefined4 *)in_stack_000000d8 = 0;
  iVar11 = *(int *)(unaff_RBP + 0x2054);
  iVar9 = *(int *)(unaff_RBP + 0x2050);
  iVar4 = iVar9 - iVar11;
  iVar12 = iVar4 + 100;
  if (-1 < iVar4) {
    iVar12 = iVar4;
  }
  uVar14 = 0;
  iVar4 = 0;
  if (((*(int *)(unaff_RBP + 8) / 0x32 < unaff_R12D) && (iVar11 != iVar9)) &&
     (iVar11 = iVar11 + 1, iVar11 == 100)) {
    iVar11 = 0;
  }
  iVar10 = 1;
  iVar13 = iVar11 + -1;
  if (iVar11 != iVar9) {
    iVar13 = iVar11;
  }
  if (iVar13 < 0) {
    iVar13 = 99;
  }
  uVar8 = (ulonglong)iVar13;
  lVar5 = uVar8 * 0x38;
  puVar2 = (undefined8 *)(lVar5 + 0x206c + unaff_RBP);
  uVar3 = puVar2[1];
  *in_stack_000000d8 = *puVar2;
  in_stack_000000d8[1] = uVar3;
  puVar2 = (undefined8 *)(lVar5 + 0x207c + unaff_RBP);
  uVar3 = puVar2[1];
  in_stack_000000d8[2] = *puVar2;
  in_stack_000000d8[3] = uVar3;
  puVar2 = (undefined8 *)(lVar5 + 0x208c + unaff_RBP);
  uVar3 = puVar2[1];
  in_stack_000000d8[4] = *puVar2;
  in_stack_000000d8[5] = uVar3;
  in_stack_000000d8[6] = *(undefined8 *)(lVar5 + 0x209c + unaff_RBP);
  fVar20 = *(float *)((longlong)in_stack_000000d8 + 4);
  uVar16 = uVar14;
  fVar18 = fVar20;
  do {
    bVar17 = uVar8 != 99;
    uVar1 = uVar8 + 1;
    uVar8 = uVar14;
    if (bVar17) {
      uVar8 = uVar1;
    }
    fVar19 = fVar18;
    if (uVar8 == (longlong)*(int *)(unaff_RBP + 0x2050)) break;
    iVar10 = iVar10 + 1;
    uVar15 = (int)uVar16 + 1;
    uVar16 = (ulonglong)uVar15;
    fVar19 = *(float *)(uVar8 * 0x38 + 0x2070 + unaff_RBP);
    fVar20 = fVar20 + fVar19;
    if (fVar19 <= fVar18) {
      fVar19 = fVar18;
    }
    fVar18 = fVar19;
  } while ((int)uVar15 < 3);
  fVar18 = fVar20 / (float)iVar10;
  if (fVar20 / (float)iVar10 <= fVar19 - 0.2) {
    fVar18 = fVar19 - 0.2;
  }
  *(float *)((longlong)in_stack_000000d8 + 4) = fVar18;
  *(int *)(unaff_RBP + 0x2058) =
       *(int *)(unaff_RBP + 0x2058) + unaff_R12D / (*(int *)(unaff_RBP + 8) / 400);
  iVar11 = *(int *)(unaff_RBP + 0x2058);
  iVar9 = *(int *)(unaff_RBP + 0x2054);
  if (7 < iVar11) {
    do {
      iVar11 = iVar11 + -8;
      iVar9 = iVar9 + 1;
    } while (7 < iVar11);
    *(int *)(unaff_RBP + 0x2054) = iVar9;
    *(int *)(unaff_RBP + 0x2058) = iVar11;
  }
  if (99 < iVar9) {
    *(int *)(unaff_RBP + 0x2054) = iVar9 + -100;
  }
  fVar20 = 0.0;
  iVar11 = iVar12 + -1;
  if (iVar12 + -1 < 1) {
    iVar11 = iVar4;
  }
  lVar5 = (longlong)(100 - iVar11);
  if (3 < lVar5) {
    pfVar7 = (float *)(unaff_RBP + 0x1eb4);
    lVar6 = (lVar5 - 4U >> 2) + 1;
    iVar4 = (int)lVar6 * 4;
    uVar14 = lVar6 * 4;
    do {
      fVar20 = fVar20 + pfVar7[-1] + *pfVar7 + pfVar7[1] + pfVar7[2];
      pfVar7 = pfVar7 + 4;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  if ((longlong)uVar14 < lVar5) {
    lVar5 = lVar5 - uVar14;
    pfVar7 = (float *)(unaff_RBP + 0x1eb0 + uVar14 * 4);
    iVar4 = iVar4 + (int)lVar5;
    do {
      fVar20 = fVar20 + *pfVar7;
      pfVar7 = pfVar7 + 1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  lVar5 = (longlong)iVar4;
  if (lVar5 < 100) {
    if (3 < 100 - lVar5) {
      pfVar7 = (float *)(unaff_RBP + 0x1d24 + lVar5 * 4);
      lVar6 = (0x60U - lVar5 >> 2) + 1;
      lVar5 = lVar5 + lVar6 * 4;
      do {
        fVar20 = fVar20 + pfVar7[-1] + *pfVar7 + pfVar7[1] + pfVar7[2];
        pfVar7 = pfVar7 + 4;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    if (lVar5 < 100) {
      lVar6 = 100 - lVar5;
      pfVar7 = (float *)(unaff_RBP + 0x1d20 + lVar5 * 4);
      do {
        fVar20 = fVar20 + *pfVar7;
        pfVar7 = pfVar7 + 1;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
  }
  *(float *)((longlong)in_stack_000000d8 + 0x14) =
       (1.0 - fVar20) * *(float *)(unaff_RBP + 0x2040) + fVar20 * *(float *)(unaff_RBP + 0x2044);
  return;
}





// 函数: void FUN_1807079df(undefined8 param_1,int param_2)
void FUN_1807079df(undefined8 param_1,int param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  float *pfVar8;
  int iVar9;
  ulonglong uVar10;
  int unaff_EBX;
  int iVar11;
  longlong unaff_RBP;
  int iVar12;
  undefined8 unaff_RDI;
  int iVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong in_R11;
  bool bVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uStack0000000000000028;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000038;
  int in_stack_00000098;
  int in_stack_000000a0;
  undefined4 in_stack_000000a8;
  undefined4 in_stack_000000b0;
  undefined4 in_stack_000000b8;
  undefined8 *in_stack_000000d8;
  ulonglong uVar16;
  
  *(undefined8 *)(in_R11 + 0x18) = unaff_RDI;
  do {
    uStack0000000000000038 = in_stack_000000b8;
    uStack0000000000000030 = in_stack_000000b0;
    uStack0000000000000028 = in_stack_000000a8;
    FUN_180707df0();
    unaff_EBX = unaff_EBX - ((param_2 >> 4) - (param_2 >> 0x1f));
  } while (0 < unaff_EBX);
  *(int *)(unaff_RBP + 0x1d1c) = in_stack_00000098 - in_stack_000000a0;
  *(undefined4 *)in_stack_000000d8 = 0;
  iVar9 = *(int *)(unaff_RBP + 0x2054);
  iVar5 = *(int *)(unaff_RBP + 0x2050);
  iVar4 = iVar5 - iVar9;
  iVar12 = iVar4 + 100;
  if (-1 < iVar4) {
    iVar12 = iVar4;
  }
  uVar14 = 0;
  iVar4 = 0;
  if (((*(int *)(unaff_RBP + 8) / 0x32 < in_stack_000000a0) && (iVar9 != iVar5)) &&
     (iVar9 = iVar9 + 1, iVar9 == 100)) {
    iVar9 = 0;
  }
  iVar11 = 1;
  iVar13 = iVar9 + -1;
  if (iVar9 != iVar5) {
    iVar13 = iVar9;
  }
  if (iVar13 < 0) {
    iVar13 = 99;
  }
  uVar10 = (ulonglong)iVar13;
  lVar6 = uVar10 * 0x38;
  puVar2 = (undefined8 *)(lVar6 + 0x206c + unaff_RBP);
  uVar3 = puVar2[1];
  *in_stack_000000d8 = *puVar2;
  in_stack_000000d8[1] = uVar3;
  puVar2 = (undefined8 *)(lVar6 + 0x207c + unaff_RBP);
  uVar3 = puVar2[1];
  in_stack_000000d8[2] = *puVar2;
  in_stack_000000d8[3] = uVar3;
  puVar2 = (undefined8 *)(lVar6 + 0x208c + unaff_RBP);
  uVar3 = puVar2[1];
  in_stack_000000d8[4] = *puVar2;
  in_stack_000000d8[5] = uVar3;
  in_stack_000000d8[6] = *(undefined8 *)(lVar6 + 0x209c + unaff_RBP);
  fVar20 = *(float *)((longlong)in_stack_000000d8 + 4);
  uVar16 = uVar14;
  fVar18 = fVar20;
  do {
    bVar17 = uVar10 != 99;
    uVar1 = uVar10 + 1;
    uVar10 = uVar14;
    if (bVar17) {
      uVar10 = uVar1;
    }
    fVar19 = fVar18;
    if (uVar10 == (longlong)*(int *)(unaff_RBP + 0x2050)) break;
    iVar11 = iVar11 + 1;
    uVar15 = (int)uVar16 + 1;
    uVar16 = (ulonglong)uVar15;
    fVar19 = *(float *)(uVar10 * 0x38 + 0x2070 + unaff_RBP);
    fVar20 = fVar20 + fVar19;
    if (fVar19 <= fVar18) {
      fVar19 = fVar18;
    }
    fVar18 = fVar19;
  } while ((int)uVar15 < 3);
  fVar18 = fVar20 / (float)iVar11;
  if (fVar20 / (float)iVar11 <= fVar19 - 0.2) {
    fVar18 = fVar19 - 0.2;
  }
  *(float *)((longlong)in_stack_000000d8 + 4) = fVar18;
  *(int *)(unaff_RBP + 0x2058) =
       *(int *)(unaff_RBP + 0x2058) + in_stack_000000a0 / (*(int *)(unaff_RBP + 8) / 400);
  iVar9 = *(int *)(unaff_RBP + 0x2058);
  iVar5 = *(int *)(unaff_RBP + 0x2054);
  if (7 < iVar9) {
    do {
      iVar9 = iVar9 + -8;
      iVar5 = iVar5 + 1;
    } while (7 < iVar9);
    *(int *)(unaff_RBP + 0x2054) = iVar5;
    *(int *)(unaff_RBP + 0x2058) = iVar9;
  }
  if (99 < iVar5) {
    *(int *)(unaff_RBP + 0x2054) = iVar5 + -100;
  }
  fVar20 = 0.0;
  iVar9 = iVar12 + -1;
  if (iVar12 + -1 < 1) {
    iVar9 = iVar4;
  }
  lVar6 = (longlong)(100 - iVar9);
  if (3 < lVar6) {
    pfVar8 = (float *)(unaff_RBP + 0x1eb4);
    lVar7 = (lVar6 - 4U >> 2) + 1;
    iVar4 = (int)lVar7 * 4;
    uVar14 = lVar7 * 4;
    do {
      fVar20 = fVar20 + pfVar8[-1] + *pfVar8 + pfVar8[1] + pfVar8[2];
      pfVar8 = pfVar8 + 4;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  if ((longlong)uVar14 < lVar6) {
    lVar6 = lVar6 - uVar14;
    pfVar8 = (float *)(unaff_RBP + 0x1eb0 + uVar14 * 4);
    iVar4 = iVar4 + (int)lVar6;
    do {
      fVar20 = fVar20 + *pfVar8;
      pfVar8 = pfVar8 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  lVar6 = (longlong)iVar4;
  if (lVar6 < 100) {
    if (3 < 100 - lVar6) {
      pfVar8 = (float *)(unaff_RBP + 0x1d24 + lVar6 * 4);
      lVar7 = (0x60U - lVar6 >> 2) + 1;
      lVar6 = lVar6 + lVar7 * 4;
      do {
        fVar20 = fVar20 + pfVar8[-1] + *pfVar8 + pfVar8[1] + pfVar8[2];
        pfVar8 = pfVar8 + 4;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    if (lVar6 < 100) {
      lVar7 = 100 - lVar6;
      pfVar8 = (float *)(unaff_RBP + 0x1d20 + lVar6 * 4);
      do {
        fVar20 = fVar20 + *pfVar8;
        pfVar8 = pfVar8 + 1;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
  }
  *(float *)((longlong)in_stack_000000d8 + 0x14) =
       (1.0 - fVar20) * *(float *)(unaff_RBP + 0x2040) + fVar20 * *(float *)(unaff_RBP + 0x2044);
  return;
}





// 函数: void FUN_180707a56(void)
void FUN_180707a56(void)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  float *pfVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  longlong unaff_RBP;
  int unaff_ESI;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  uint uVar15;
  int unaff_R12D;
  bool bVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 *in_stack_000000d8;
  ulonglong uVar16;
  
  *(int *)(unaff_RBP + 0x1d1c) = unaff_ESI - unaff_R12D;
  *(undefined4 *)in_stack_000000d8 = 0;
  iVar9 = *(int *)(unaff_RBP + 0x2054);
  iVar5 = *(int *)(unaff_RBP + 0x2050);
  iVar4 = iVar5 - iVar9;
  iVar12 = iVar4 + 100;
  if (-1 < iVar4) {
    iVar12 = iVar4;
  }
  uVar14 = 0;
  iVar4 = 0;
  if (((*(int *)(unaff_RBP + 8) / 0x32 < unaff_R12D) && (iVar9 != iVar5)) &&
     (iVar9 = iVar9 + 1, iVar9 == 100)) {
    iVar9 = 0;
  }
  iVar11 = 1;
  iVar13 = iVar9 + -1;
  if (iVar9 != iVar5) {
    iVar13 = iVar9;
  }
  if (iVar13 < 0) {
    iVar13 = 99;
  }
  uVar10 = (ulonglong)iVar13;
  lVar6 = uVar10 * 0x38;
  puVar2 = (undefined8 *)(lVar6 + 0x206c + unaff_RBP);
  uVar3 = puVar2[1];
  *in_stack_000000d8 = *puVar2;
  in_stack_000000d8[1] = uVar3;
  puVar2 = (undefined8 *)(lVar6 + 0x207c + unaff_RBP);
  uVar3 = puVar2[1];
  in_stack_000000d8[2] = *puVar2;
  in_stack_000000d8[3] = uVar3;
  puVar2 = (undefined8 *)(lVar6 + 0x208c + unaff_RBP);
  uVar3 = puVar2[1];
  in_stack_000000d8[4] = *puVar2;
  in_stack_000000d8[5] = uVar3;
  in_stack_000000d8[6] = *(undefined8 *)(lVar6 + 0x209c + unaff_RBP);
  fVar20 = *(float *)((longlong)in_stack_000000d8 + 4);
  uVar16 = uVar14;
  fVar18 = fVar20;
  do {
    bVar17 = uVar10 != 99;
    uVar1 = uVar10 + 1;
    uVar10 = uVar14;
    if (bVar17) {
      uVar10 = uVar1;
    }
    fVar19 = fVar18;
    if (uVar10 == (longlong)*(int *)(unaff_RBP + 0x2050)) break;
    iVar11 = iVar11 + 1;
    uVar15 = (int)uVar16 + 1;
    uVar16 = (ulonglong)uVar15;
    fVar19 = *(float *)(uVar10 * 0x38 + 0x2070 + unaff_RBP);
    fVar20 = fVar20 + fVar19;
    if (fVar19 <= fVar18) {
      fVar19 = fVar18;
    }
    fVar18 = fVar19;
  } while ((int)uVar15 < 3);
  fVar18 = fVar20 / (float)iVar11;
  if (fVar20 / (float)iVar11 <= fVar19 - 0.2) {
    fVar18 = fVar19 - 0.2;
  }
  *(float *)((longlong)in_stack_000000d8 + 4) = fVar18;
  *(int *)(unaff_RBP + 0x2058) =
       *(int *)(unaff_RBP + 0x2058) + unaff_R12D / (*(int *)(unaff_RBP + 8) / 400);
  iVar9 = *(int *)(unaff_RBP + 0x2058);
  iVar5 = *(int *)(unaff_RBP + 0x2054);
  if (7 < iVar9) {
    do {
      iVar9 = iVar9 + -8;
      iVar5 = iVar5 + 1;
    } while (7 < iVar9);
    *(int *)(unaff_RBP + 0x2054) = iVar5;
    *(int *)(unaff_RBP + 0x2058) = iVar9;
  }
  if (99 < iVar5) {
    *(int *)(unaff_RBP + 0x2054) = iVar5 + -100;
  }
  fVar20 = 0.0;
  iVar9 = iVar12 + -1;
  if (iVar12 + -1 < 1) {
    iVar9 = iVar4;
  }
  lVar6 = (longlong)(100 - iVar9);
  if (3 < lVar6) {
    pfVar8 = (float *)(unaff_RBP + 0x1eb4);
    lVar7 = (lVar6 - 4U >> 2) + 1;
    iVar4 = (int)lVar7 * 4;
    uVar14 = lVar7 * 4;
    do {
      fVar20 = fVar20 + pfVar8[-1] + *pfVar8 + pfVar8[1] + pfVar8[2];
      pfVar8 = pfVar8 + 4;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  if ((longlong)uVar14 < lVar6) {
    lVar6 = lVar6 - uVar14;
    pfVar8 = (float *)(unaff_RBP + 0x1eb0 + uVar14 * 4);
    iVar4 = iVar4 + (int)lVar6;
    do {
      fVar20 = fVar20 + *pfVar8;
      pfVar8 = pfVar8 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  lVar6 = (longlong)iVar4;
  if (lVar6 < 100) {
    if (3 < 100 - lVar6) {
      pfVar8 = (float *)(unaff_RBP + 0x1d24 + lVar6 * 4);
      lVar7 = (0x60U - lVar6 >> 2) + 1;
      lVar6 = lVar6 + lVar7 * 4;
      do {
        fVar20 = fVar20 + pfVar8[-1] + *pfVar8 + pfVar8[1] + pfVar8[2];
        pfVar8 = pfVar8 + 4;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    if (lVar6 < 100) {
      lVar7 = 100 - lVar6;
      pfVar8 = (float *)(unaff_RBP + 0x1d20 + lVar6 * 4);
      do {
        fVar20 = fVar20 + *pfVar8;
        pfVar8 = pfVar8 + 1;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
  }
  *(float *)((longlong)in_stack_000000d8 + 0x14) =
       (1.0 - fVar20) * *(float *)(unaff_RBP + 0x2040) + fVar20 * *(float *)(unaff_RBP + 0x2044);
  return;
}





