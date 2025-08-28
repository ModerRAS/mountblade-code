#include "TaleWorlds.Native.Split.h"

// 03_rendering_part368_sub002_sub002.c - 渲染系统高级边界处理和三角形优化模块
// 
// 本文件包含3个核心函数：
// 1. render_context_match_and_process - 渲染上下文匹配和处理函数
// 2. render_bounding_box_calculate_triangles - 边界框计算和三角形处理函数  
// 3. render_array_optimize_and_cleanup - 数组优化和清理函数
//
// 主要功能：
// - 渲染上下文查找和匹配
// - 边界框计算（使用SIMD指令优化）
// - 三角形数据处理和优化
// - 内存管理和数组操作
// - 浮点数精度比较和容差处理

// 渲染上下文匹配和处理函数
// 参数：param_1 - 渲染上下文指针，param_2 - 上下文数组指针
// 功能：在上下文数组中查找匹配的渲染上下文，并执行相应的处理操作
void render_context_match_and_process(longlong *render_context, longlong *context_array)
{
  longlong *context_ptr;
  int index;
  ulonglong array_size;
  longlong context_id;
  longlong *stack_context;
  int32_t process_result;
  
  // 获取当前上下文ID
  context_id = *(longlong *)(render_context + 0x18);
  context_ptr = (longlong *)context_array[0xb93];  // 获取上下文数组起始位置
  index = 0;
  array_size = context_array[0xb94] - (longlong)context_ptr >> 3;  // 计算数组大小
  
  // 在数组中查找匹配的上下文
  if (array_size != 0) {
    do {
      if (*context_ptr == context_id) goto context_found;  // 找到匹配的上下文
      index = index + 1;
      context_ptr = context_ptr + 1;
    } while ((ulonglong)(longlong)index < array_size);
  }
  
  // 未找到匹配项，添加新的上下文
  add_render_context(context_array + 0xb93, &context_id);
  
context_found:
  // 执行渲染处理操作
  process_result = (**(code **)(*context_array + 8))(context_array);
  stack_context = context_array;
  // 调用渲染处理函数
  (**(code **)(g_render_dispatch_table + 0x210))(*(int32_t *)(render_context + 0x50), &stack_context);
  return;
}

// 边界框计算和三角形处理函数（使用SIMD优化）
// 参数：param_1 - 标志位，param_2 - 输出数组，param_3 - 顶点数据，param_4 - 边界框输出
//       param_5, param_6 - 最小/最大边界输出
// 功能：计算顶点集合的边界框，处理三角形数据，优化渲染性能
ulonglong *render_bounding_box_calculate_triangles(
  uint64_t flags, 
  ulonglong *output_array, 
  float *vertex_data, 
  float *bounding_box_output,
  uint64_t *min_bound_output, 
  uint64_t *max_bound_output)
{
  uint vertex_count_x;
  uint vertex_count_y;
  float temp_float;
  uint *vertex_ptr;
  uint64_t *temp_ptr1;
  int8_t simd_min_x[16];    // SIMD寄存器变量
  int8_t simd_min_y[16];    // SIMD寄存器变量
  int8_t simd_max_x[16];    // SIMD寄存器变量
  int8_t simd_max_y[16];    // SIMD寄存器变量
  int8_t simd_temp1[12];    // SIMD临时变量
  int8_t simd_temp2[12];    // SIMD临时变量
  int8_t simd_temp3[12];    // SIMD临时变量
  int8_t simd_temp4[12];    // SIMD临时变量
  int32_t temp_uint1;
  int32_t temp_uint2;
  int32_t temp_uint3;
  uint64_t temp_ulong1;
  char compare_result;
  float *float_ptr1;
  float *float_ptr2;
  float *float_ptr3;
  float *float_ptr4;
  longlong *long_ptr1;
  float *float_ptr5;
  float *float_ptr6;
  float *float_ptr7;
  uint *uint_ptr1;
  int32_t *uint_ptr2;
  int loop_counter;
  longlong temp_long1;
  uint64_t temp_ulong2;
  uint64_t temp_ulong3;
  uint64_t temp_ulong4;
  ulonglong vertex_array_size;
  uint8_t temp_undefined7;
  int32_t *uint_ptr3;
  int32_t *uint_ptr4;
  float *float_ptr8;
  uint64_t *temp_ptr2;
  float float_val1;
  int32_t simd_result1;
  int32_t simd_result2;
  int32_t simd_result3;
  int32_t simd_result4;
  float min_x_val;
  float max_x_val;
  float min_y_val;
  float max_y_val;
  float center_x;
  float center_y;
  int8_t simd_batch1[16];
  int8_t simd_batch2[16];
  int8_t simd_batch3[16];
  int8_t simd_batch4[16];
  int8_t simd_batch5[16];
  int8_t simd_batch6[16];
  int8_t simd_batch7[16];
  int8_t simd_batch8[16];
  float temp_float1;
  int8_t simd_min_batch[16];
  int8_t simd_temp_batch[16];
  int8_t simd_max_batch[16];
  float temp_float2;
  int8_t simd_center1[16];
  float temp_float3;
  int8_t simd_final[16];
  int8_t simd_result[16];
  int8_t simd_output1[16];
  int8_t simd_output2[16];
  int8_t simd_output3[16];
  int8_t simd_output4[16];
  int8_t simd_output5[16];
  int8_t simd_output6[16];
  int8_t simd_output7[16];
  int8_t simd_output8[16];
  uint64_t stack_bound_x;
  float *stack_vertex_ptr1;
  float *stack_vertex_ptr2;
  float stack_float1;
  float stack_float2;
  float stack_float3;
  float stack_float4;
  longlong stack_long1;
  uint64_t stack_ulong1;
  uint64_t stack_ulong2;
  uint64_t stack_ulong3;
  float stack_float5;
  float *stack_ptr1;
  float *stack_ptr2;
  float *stack_ptr3;
  float *stack_ptr4;
  int32_t stack_uint1;
  float *stack_ptr5;
  float *stack_ptr6;
  float *stack_ptr7;
  int32_t stack_uint2;
  int32_t stack_uint3;
  float stack_float6;
  float stack_float7;
  float stack_float8;
  float stack_float9;
  float stack_float10;
  float stack_float11;
  float *stack_ptr8;
  uint64_t stack_ulong4;
  int8_t simd_temp_array1[16];
  int8_t simd_temp_array2[16];
  
  // 初始化栈变量
  stack_ulong4 = 0xfffffffffffffffe;
  vertex_ptr = *(uint **)vertex_data;
  vertex_count_x = *vertex_ptr;
  simd_final = ZEXT416(vertex_count_x);
  vertex_count_y = vertex_ptr[1];
  simd_center1 = ZEXT416(vertex_count_y);
  simd_output8 = ZEXT416(vertex_count_x);
  simd_output5 = ZEXT416(vertex_count_y);
  
  // 计算顶点数组大小
  vertex_array_size = *(longlong *)(vertex_data + 2) - (longlong)vertex_ptr >> 3;
  loop_counter = 0;
  
  // 使用SIMD指令批量处理顶点数据（优化性能）
  if (7 < vertex_array_size) {
    // 初始化SIMD寄存器
    simd_output1._0_8_ = CONCAT44(vertex_count_x, vertex_count_x);
    simd_output1._8_4_ = vertex_count_x;
    simd_output1._12_4_ = vertex_count_x;
    simd_output7._8_4_ = vertex_count_x;
    simd_output7._0_8_ = simd_output1._0_8_;
    simd_output7._12_4_ = vertex_count_x;
    simd_min_batch._0_8_ = CONCAT44(vertex_count_y, vertex_count_y);
    simd_min_batch._8_4_ = vertex_count_y;
    simd_min_batch._12_4_ = vertex_count_y;
    simd_output8._8_4_ = vertex_count_y;
    simd_output8._0_8_ = simd_min_batch._0_8_;
    simd_output8._12_4_ = vertex_count_y;
    simd_output6._8_4_ = vertex_count_x;
    simd_output6._0_8_ = simd_output1._0_8_;
    simd_output6._12_4_ = vertex_count_x;
    simd_output2._8_4_ = vertex_count_y;
    simd_output2._0_8_ = simd_min_batch._0_8_;
    simd_output2._12_4_ = vertex_count_y;
    simd_output4._8_4_ = vertex_count_x;
    simd_output4._0_8_ = simd_output1._0_8_;
    simd_output4._12_4_ = vertex_count_x;
    simd_max_batch._8_4_ = vertex_count_y;
    simd_max_batch._0_8_ = simd_min_batch._0_8_;
    simd_max_batch._12_4_ = vertex_count_y;
    
    uint_ptr1 = vertex_ptr + 4;
    
    // SIMD批量处理循环（每次处理8个顶点）
    do {
      simd_batch1._4_4_ = *uint_ptr1;
      simd_batch1._0_4_ = uint_ptr1[-4];
      simd_batch1._8_4_ = *uint_ptr1;
      simd_batch1._12_4_ = uint_ptr1[2];
      simd_temp_array1._8_8_ = simd_batch1._8_8_;
      simd_temp_array1._4_4_ = uint_ptr1[-2];
      simd_temp_array1._0_4_ = uint_ptr1[-4];
      simd_output1 = minps(simd_output1, simd_temp_array1);  // 计算最小值
      
      simd_temp1._4_4_ = uint_ptr1[-1];
      simd_temp1._0_4_ = uint_ptr1[-3];
      simd_temp1._8_4_ = uint_ptr1[1];
      simd_temp1._12_4_ = uint_ptr1[3];
      simd_min_batch = minps(simd_min_batch, simd_temp1);      // 计算最小值
      
      simd_output4 = maxps(simd_output4, simd_temp_array1);  // 计算最大值
      
      simd_temp2._4_4_ = uint_ptr1[-1];
      simd_temp2._0_4_ = uint_ptr1[-3];
      simd_temp2._8_4_ = uint_ptr1[1];
      simd_temp2._12_4_ = uint_ptr1[3];
      simd_max_batch = maxps(simd_max_batch, simd_temp2);      // 计算最大值
      
      simd_batch2._4_4_ = uint_ptr1[8];
      simd_batch2._0_4_ = uint_ptr1[4];
      simd_batch2._8_4_ = uint_ptr1[8];
      simd_batch2._12_4_ = uint_ptr1[10];
      simd_temp_array2._8_8_ = simd_batch2._8_8_;
      simd_temp_array2._4_4_ = uint_ptr1[6];
      simd_temp_array2._0_4_ = uint_ptr1[4];
      simd_output7 = minps(simd_output7, simd_temp_array2);    // 计算最小值
      
      simd_temp3._4_4_ = uint_ptr1[7];
      simd_temp3._0_4_ = uint_ptr1[5];
      simd_temp3._8_4_ = uint_ptr1[9];
      simd_temp3._12_4_ = uint_ptr1[0xb];
      simd_output8 = minps(simd_output8, simd_temp3);          // 计算最小值
      
      simd_output6 = maxps(simd_output6, simd_temp_array2);  // 计算最大值
      
      simd_temp4._4_4_ = uint_ptr1[7];
      simd_temp4._0_4_ = uint_ptr1[5];
      simd_temp4._8_4_ = uint_ptr1[9];
      simd_temp4._12_4_ = uint_ptr1[0xb];
      simd_output2 = maxps(simd_output2, simd_temp4);          // 计算最大值
      
      loop_counter = loop_counter + 8;
      uint_ptr1 = uint_ptr1 + 0x10;
    } while ((ulonglong)(longlong)loop_counter < vertex_array_size - ((uint)vertex_array_size & 7));
    
    // 合并SIMD计算结果
    simd_final = maxps(simd_max_batch, simd_output2);
    simd_temp1._4_8_ = simd_output2._8_8_;
    simd_temp1._0_4_ = simd_final._4_4_;
    simd_output3._0_8_ = simd_temp1._0_8_ << 0x20;
    simd_output3._8_4_ = simd_final._8_4_;
    simd_output3._12_4_ = simd_final._12_4_;
    simd_output5._8_8_ = simd_output3._8_8_;
    simd_output5._0_8_ = simd_final._8_8_;
    simd_output5 = maxps(simd_output5, simd_final);
    if (simd_output5._0_4_ <= simd_output5._4_4_) {
      simd_output5._0_4_ = simd_output5._4_4_;
    }
    
    simd_output8 = maxps(simd_output4, simd_output6);
    simd_temp2._4_8_ = simd_temp_array2._8_8_;
    simd_temp2._0_4_ = simd_output8._4_4_;
    simd_batch3._0_8_ = simd_temp2._0_8_ << 0x20;
    simd_batch3._8_4_ = simd_output8._8_4_;
    simd_batch3._12_4_ = simd_output8._12_4_;
    simd_batch4._8_8_ = simd_batch3._8_8_;
    simd_batch4._0_8_ = simd_output8._8_8_;
    simd_output8 = maxps(simd_batch4, simd_output8);
    if (simd_output8._0_4_ <= simd_output8._4_4_) {
      simd_output8._0_4_ = simd_output8._4_4_;
    }
    
    simd_output2 = minps(simd_min_batch, simd_output8);
    simd_temp3._4_8_ = simd_final._8_8_;
    simd_temp3._0_4_ = simd_output2._4_4_;
    simd_center1._0_8_ = simd_temp3._0_8_ << 0x20;
    simd_center1._8_4_ = simd_output2._8_4_;
    simd_center1._12_4_ = simd_output2._12_4_;
    simd_result._8_8_ = simd_center1._8_8_;
    simd_result._0_8_ = simd_output2._8_8_;
    simd_center1 = minps(simd_result, simd_output2);
    if (simd_center1._4_4_ <= simd_center1._0_4_) {
      simd_center1._0_4_ = simd_center1._4_4_;
    }
    
    simd_final = minps(simd_output1, simd_output7);
    simd_temp4._4_8_ = simd_output2._8_8_;
    simd_temp4._0_4_ = simd_final._4_4_;
    simd_temp_batch._0_8_ = simd_temp4._0_8_ << 0x20;
    simd_temp_batch._8_4_ = simd_final._8_4_;
    simd_temp_batch._12_4_ = simd_final._12_4_;
    simd_batch5._8_8_ = simd_temp_batch._8_8_;
    simd_batch5._0_8_ = simd_final._8_8_;
    simd_final = minps(simd_batch5, simd_final);
    if (simd_final._4_4_ <= simd_final._0_4_) {
      simd_final._0_4_ = simd_final._4_4_;
    }
  }
  
  // 提取计算结果
  max_x_val = simd_output5._0_4_;
  max_y_val = simd_output8._0_4_;
  min_y_val = simd_center1._0_4_;
  min_x_val = simd_final._0_4_;
  
  // 处理剩余的顶点（如果SIMD批量处理后还有剩余）
  if ((ulonglong)(longlong)loop_counter < vertex_array_size) {
    float_ptr1 = (float *)(vertex_ptr + (longlong)loop_counter * 2);
    do {
      max_y_val = *float_ptr1;
      min_x_val = max_y_val;
      if (simd_final._0_4_ <= max_y_val) {
        min_x_val = simd_final._0_4_;
      }
      simd_final = ZEXT416((uint)min_x_val);
      max_x_val = float_ptr1[1];
      min_y_val = max_x_val;
      if (simd_center1._0_4_ <= max_x_val) {
        min_y_val = simd_center1._0_4_;
      }
      simd_center1 = ZEXT416((uint)min_y_val);
      if (max_y_val <= simd_output8._0_4_) {
        max_y_val = simd_output8._0_4_;
      }
      simd_output8 = ZEXT416((uint)max_y_val);
      if (max_x_val <= simd_output5._0_4_) {
        max_x_val = simd_output5._0_4_;
      }
      simd_output5 = ZEXT416((uint)max_x_val);
      loop_counter = loop_counter + 1;
      float_ptr1 = float_ptr1 + 2;
    } while ((ulonglong)(longlong)loop_counter < vertex_array_size);
  }
  
  // 计算边界框参数
  stack_bound_x = CONCAT44(min_y_val, min_x_val);
  *min_bound_output = stack_bound_x;
  stack_bound_x = CONCAT44(max_x_val, max_y_val);
  *max_bound_output = stack_bound_x;
  
  // 计算边界框尺寸和中心点
  stack_float11 = max_x_val - min_y_val;
  if (max_x_val - min_y_val <= max_y_val - min_x_val) {
    stack_float11 = max_y_val - min_x_val;
  }
  stack_float10 = (max_y_val + min_x_val) * 0.5;      // 中心点X坐标
  stack_float9 = (max_x_val + min_y_val) * 0.5;      // 中心点Y坐标
  stack_float8 = stack_float11 + stack_float11;      // 双倍尺寸
  stack_float6 = stack_float10 - stack_float8;       // 调整后的X坐标
  stack_float11 = stack_float9 - stack_float11;      // 调整后的Y坐标
  stack_float9 = stack_float8 + stack_float9;        // 扩展后的Y坐标
  stack_float8 = stack_float8 + stack_float10;       // 扩展后的X坐标
  
  // 初始化输出数组
  *output_array = 0;
  output_array[1] = 0;
  output_array[2] = 0;
  *(int32_t *)(output_array + 3) = 3;
  stack_uint3 = 1;
  stack_ptr5 = (float *)0x0;
  stack_ptr6 = (float *)0x0;
  stack_ptr7 = (float *)0x0;
  stack_uint2 = 3;
  
  temp_ulong2 = CONCAT44(stack_float11, stack_float6);
  temp_ulong4 = CONCAT44(stack_float9, stack_float10);
  temp_ulong3 = CONCAT44(stack_float11, stack_float8);
  stack_float5 = (float)((uint)stack_float5 & 0xffffff00);
  
  // 设置边界框输出参数
  *bounding_box_output = stack_float6;
  bounding_box_output[1] = stack_float11;
  bounding_box_output[2] = stack_float10;
  bounding_box_output[3] = stack_float9;
  *(uint64_t *)(bounding_box_output + 4) = temp_ulong3;
  bounding_box_output[6] = stack_float5;
  
  temp_ptr2 = (uint64_t *)output_array[1];
  stack_vertex_ptr1 = vertex_data;
  stack_ulong1 = temp_ulong2;
  stack_ulong2 = temp_ulong4;
  stack_ulong3 = temp_ulong3;
  stack_float7 = stack_float11;
  
  // 处理输出数组内存分配
  if (temp_ptr2 < (uint64_t *)output_array[2]) {
    output_array[1] = (longlong)temp_ptr2 + 0x1c;
    temp_ulong1 = *(uint64_t *)(bounding_box_output + 2);
    *temp_ptr2 = *(uint64_t *)bounding_box_output;
    temp_ptr2[1] = temp_ulong1;
    temp_ptr2[2] = *(uint64_t *)(bounding_box_output + 4);
    *(float *)(temp_ptr2 + 3) = bounding_box_output[6];
    goto triangle_processing_start;
  }
  
  // 动态扩容逻辑
  stack_bound_x = (longlong)((longlong)temp_ptr2 - *output_array) / 0x1c;
  if (stack_bound_x == 0) {
    stack_bound_x = 1;
memory_alloc_loop:
    float_ptr1 = (float *)allocate_render_memory(g_global_memory_pool, stack_bound_x * 0x1c, (char)output_array[3]);
    temp_ptr2 = (uint64_t *)output_array[1];
  }
  else {
    stack_bound_x = stack_bound_x * 2;
    if (stack_bound_x != 0) goto memory_alloc_loop;
    float_ptr1 = (float *)0x0;
  }
  
  // 内存拷贝和数据迁移
  temp_ptr1 = (uint64_t *)*output_array;
  if (temp_ptr1 != temp_ptr2) {
    memmove(float_ptr1, temp_ptr1, (longlong)temp_ptr2 - (longlong)temp_ptr1);
  }
  
  max_y_val = bounding_box_output[1];
  max_x_val = bounding_box_output[2];
  min_y_val = bounding_box_output[3];
  *float_ptr1 = *bounding_box_output;
  float_ptr1[1] = max_y_val;
  float_ptr1[2] = max_x_val;
  float_ptr1[3] = min_y_val;
  *(uint64_t *)(float_ptr1 + 4) = *(uint64_t *)(bounding_box_output + 4);
  float_ptr1[6] = bounding_box_output[6];
  
  if (*output_array != 0) {
    free_render_memory();
  }
  
  *output_array = (ulonglong)float_ptr1;
  output_array[1] = (ulonglong)(float_ptr1 + 7);
  output_array[2] = (ulonglong)(float_ptr1 + stack_bound_x * 7);
  
triangle_processing_start:
  float_ptr1 = *(float **)stack_vertex_ptr1;
  stack_ptr8 = *(float **)(stack_vertex_ptr1 + 2);
  
  // 三角形处理主循环
  if (float_ptr1 != stack_ptr8) {
    do {
      float *stack_ptr9 = (float *)0x0;
      float *stack_ptr10 = (float *)0x0;
      float *temp_vertex1 = (float *)0x0;
      float *stack_ptr11 = (float *)0x0;
      stack_uint1 = 3;
      float *current_vertex = (float *)*output_array;
      float *end_vertex = (float *)output_array[1];
      float *temp_vertex2 = (float *)0x0;
      float *temp_vertex3 = (float *)0x0;
      
      if (current_vertex != end_vertex) {
        stack_vertex_ptr2 = current_vertex + 5;
        do {
          max_y_val = stack_vertex_ptr2[-4];
          max_x_val = *current_vertex;
          temp_float3 = max_x_val * max_x_val + max_y_val * max_y_val;
          min_y_val = stack_vertex_ptr2[-2];
          min_x_val = stack_vertex_ptr2[-3];
          temp_float2 = min_x_val * min_x_val + min_y_val * min_y_val;
          stack_float5 = *stack_vertex_ptr2;
          temp_float = stack_vertex_ptr2[-1];
          temp_float1 = temp_float * temp_float + stack_float5 * stack_float5;
          
          // 计算三角形重心坐标
          stack_float6 = ((stack_float5 - min_y_val) * temp_float3 + temp_float2 * (max_y_val - stack_float5) +
                         (min_y_val - max_y_val) * temp_float1) /
                        (max_x_val * (stack_float5 - min_y_val) + min_x_val * (max_y_val - stack_float5) +
                         temp_float * (min_y_val - max_y_val)) * 0.5;
          
          temp_float1 = (((temp_float - min_x_val) * temp_float3 + temp_float2 * (max_x_val - temp_float) +
                         (min_x_val - max_x_val) * temp_float1) /
                        (max_y_val * (temp_float - min_x_val) + min_y_val * (max_x_val - temp_float) +
                         stack_float5 * (min_x_val - max_x_val))) * 0.5;
          
          // 计算距离平方
          stack_float5 = (stack_float6 - temp_float) * (stack_float6 - temp_float) + 
                        (temp_float1 - stack_float5) * (temp_float1 - stack_float5);
          min_y_val = (stack_float6 - min_x_val) * (stack_float6 - min_x_val) + 
                     (temp_float1 - min_y_val) * (temp_float1 - min_y_val);
          max_x_val = (stack_float6 - max_x_val) * (stack_float6 - max_x_val) + 
                     (temp_float1 - max_x_val) * (temp_float1 - max_x_val);
          
          // 找到最小距离
          if (min_y_val <= max_x_val) {
            if (min_y_val <= stack_float5) {
              stack_float5 = min_y_val;
            }
          }
          else if (max_x_val <= stack_float5) {
            stack_float5 = max_x_val;
          }
          
          // 检查是否在容差范围内
          if ((stack_float6 - *float_ptr1) * (stack_float6 - *float_ptr1) +
              (temp_float1 - float_ptr1[1]) * (temp_float1 - float_ptr1[1]) <= stack_float5 + 0.001) {
            *(int8_t *)(stack_vertex_ptr2 + 1) = 1;
            stack_float1 = (float)*(uint64_t *)current_vertex;
            stack_float2 = (float)((ulonglong)*(uint64_t *)current_vertex >> 0x20);
            stack_float3 = (float)*(uint64_t *)(stack_vertex_ptr2 + -3);
            stack_float4 = (float)((ulonglong)*(uint64_t *)(stack_vertex_ptr2 + -3) >> 0x20);
            temp_undefined7 = (uint8_t)((ulonglong)current_vertex >> 8);
            
            if (temp_vertex2 < temp_vertex1) {
              *temp_vertex2 = stack_float1;
              temp_vertex2[1] = stack_float2;
              temp_vertex2[2] = stack_float3;
              temp_vertex2[3] = stack_float4;
              temp_vertex2[4] = 0.0;
              temp_vertex3 = temp_vertex3;
            }
            else {
              stack_long1 = ((longlong)temp_vertex2 - (longlong)temp_vertex3) / 0x14;
              if (stack_long1 == 0) {
                stack_long1 = 1;
vertex_alloc_loop1:
                temp_vertex3 = (float *)allocate_render_memory(g_global_memory_pool, stack_long1 * 0x14, CONCAT71(temp_undefined7, 3));
              }
              else {
                stack_long1 = stack_long1 * 2;
                if (stack_long1 != 0) goto vertex_alloc_loop1;
                temp_vertex3 = (float *)0x0;
              }
              
              stack_vertex_ptr1 = temp_vertex3;
              if (temp_vertex3 != temp_vertex2) {
                memmove(temp_vertex3, temp_vertex3, (longlong)temp_vertex2 - (longlong)temp_vertex3);
              }
              
              *temp_vertex3 = stack_float1;
              temp_vertex3[1] = stack_float2;
              temp_vertex3[2] = stack_float3;
              temp_vertex3[3] = stack_float4;
              temp_vertex3[4] = 0.0;
              
              if (temp_vertex3 != (float *)0x0) {
                free_render_memory(temp_vertex3);
              }
              temp_vertex1 = temp_vertex3 + stack_long1 * 5;
              stack_ptr9 = temp_vertex3;
              stack_ptr11 = temp_vertex1;
              temp_vertex2 = temp_vertex3;
            }
            
            temp_vertex3 = temp_vertex2 + 5;
            stack_float1 = (float)*(uint64_t *)(stack_vertex_ptr2 + -3);
            stack_float2 = (float)((ulonglong)*(uint64_t *)(stack_vertex_ptr2 + -3) >> 0x20);
            stack_float3 = (float)*(uint64_t *)(stack_vertex_ptr2 + -1);
            stack_float4 = (float)((ulonglong)*(uint64_t *)(stack_vertex_ptr2 + -1) >> 0x20);
            
            if (temp_vertex3 < temp_vertex1) {
              float_ptr8 = temp_vertex2 + 10;
              *temp_vertex3 = stack_float1;
              temp_vertex2[6] = stack_float2;
              temp_vertex2[7] = stack_float3;
              temp_vertex2[8] = stack_float4;
              temp_vertex2[9] = 0.0;
              temp_vertex2 = temp_vertex3;
            }
            else {
              stack_long1 = ((longlong)temp_vertex3 - (longlong)temp_vertex3) / 0x14;
              stack_ptr10 = temp_vertex3;
              if (stack_long1 == 0) {
                stack_long1 = 1;
vertex_alloc_loop2:
                temp_vertex2 = (float *)allocate_render_memory(g_global_memory_pool, stack_long1 * 0x14, CONCAT71(temp_undefined7, 3));
              }
              else {
                stack_long1 = stack_long1 * 2;
                if (stack_long1 != 0) goto vertex_alloc_loop2;
                temp_vertex2 = (float *)0x0;
              }
              
              stack_vertex_ptr1 = temp_vertex2;
              if (temp_vertex3 != temp_vertex3) {
                memmove(temp_vertex2, temp_vertex3, (longlong)temp_vertex3 - (longlong)temp_vertex3);
              }
              
              *temp_vertex2 = stack_float1;
              temp_vertex2[1] = stack_float2;
              temp_vertex2[2] = stack_float3;
              temp_vertex2[3] = stack_float4;
              temp_vertex2[4] = 0.0;
              float_ptr8 = temp_vertex2 + 5;
              
              if (temp_vertex3 != (float *)0x0) {
                free_render_memory(temp_vertex3);
              }
              temp_vertex1 = temp_vertex2 + stack_long1 * 5;
              stack_ptr9 = temp_vertex2;
              stack_ptr11 = temp_vertex1;
            }
            
            stack_float1 = (float)*(uint64_t *)(stack_vertex_ptr2 + -1);
            stack_float2 = (float)((ulonglong)*(uint64_t *)(stack_vertex_ptr2 + -1) >> 0x20);
            stack_float3 = (float)*(uint64_t *)current_vertex;
            stack_float4 = (float)((ulonglong)*(uint64_t *)current_vertex >> 0x20);
            
            if (float_ptr8 < temp_vertex1) {
              *float_ptr8 = stack_float1;
              float_ptr8[1] = stack_float2;
              float_ptr8[2] = stack_float3;
              float_ptr8[3] = stack_float4;
              float_ptr8[4] = 0.0;
              temp_vertex3 = temp_vertex2;
            }
            else {
              stack_long1 = ((longlong)float_ptr8 - (longlong)temp_vertex2) / 0x14;
              stack_ptr10 = float_ptr8;
              if (stack_long1 == 0) {
                stack_long1 = 1;
vertex_alloc_loop3:
                temp_vertex3 = (float *)allocate_render_memory(g_global_memory_pool, stack_long1 * 0x14, CONCAT71(temp_undefined7, 3));
              }
              else {
                stack_long1 = stack_long1 * 2;
                if (stack_long1 != 0) goto vertex_alloc_loop3;
                temp_vertex3 = (float *)0x0;
              }
              
              stack_vertex_ptr1 = temp_vertex3;
              if (temp_vertex2 != float_ptr8) {
                memmove(temp_vertex3, temp_vertex2, (longlong)float_ptr8 - (longlong)temp_vertex2);
              }
              
              *temp_vertex3 = stack_float1;
              temp_vertex3[1] = stack_float2;
              temp_vertex3[2] = stack_float3;
              temp_vertex3[3] = stack_float4;
              temp_vertex3[4] = 0.0;
              
              if (temp_vertex2 != (float *)0x0) {
                free_render_memory(temp_vertex2);
              }
              temp_vertex1 = temp_vertex3 + stack_long1 * 5;
              stack_ptr9 = temp_vertex3;
              stack_ptr11 = temp_vertex1;
              float_ptr8 = temp_vertex3;
            }
            
            temp_vertex2 = float_ptr8 + 5;
            stack_ptr10 = temp_vertex2;
          }
          
          current_vertex = current_vertex + 7;
          stack_vertex_ptr2 = stack_vertex_ptr2 + 7;
        } while (current_vertex != end_vertex);
        end_vertex = (float *)output_array[1];
      }
      
      // 顶点去重和优化处理
      temp_vertex1 = (float *)*output_array;
      current_vertex = temp_vertex3;
      if (temp_vertex1 != end_vertex) {
        do {
          if (*(char *)(temp_vertex1 + 6) != '\0') break;
          temp_vertex1 = temp_vertex1 + 7;
        } while (temp_vertex1 != end_vertex);
        temp_vertex3 = temp_vertex1;
        if (temp_vertex1 != end_vertex) {
          while (float_ptr8 = temp_vertex3, temp_vertex3 = float_ptr8 + 7, temp_vertex3 != end_vertex) {
            if (*(char *)(float_ptr8 + 0xd) == '\0') {
              max_y_val = float_ptr8[8];
              max_x_val = float_ptr8[9];
              min_y_val = float_ptr8[10];
              *temp_vertex1 = *temp_vertex3;
              temp_vertex1[1] = max_y_val;
              temp_vertex1[2] = max_x_val;
              temp_vertex1[3] = min_y_val;
              *(uint64_t *)(temp_vertex1 + 4) = *(uint64_t *)(float_ptr8 + 0xb);
              temp_vertex1[6] = float_ptr8[0xd];
              temp_vertex1 = temp_vertex1 + 7;
            }
          }
          
          if (temp_vertex1 != end_vertex) {
            temp_vertex3 = (float *)output_array[1];
            if (end_vertex != temp_vertex3) {
              memmove(temp_vertex1, end_vertex, (longlong)temp_vertex3 - (longlong)end_vertex);
            }
            output_array[1] = (ulonglong)(temp_vertex3 + (((longlong)end_vertex - (longlong)temp_vertex1) / 0x1c) * -7);
          }
        }
      }
      
      // 三角形相似性检测和合并
      while (end_vertex = current_vertex, temp_vertex1 = temp_vertex3, end_vertex != temp_vertex2) {
        for (temp_vertex1 = end_vertex + 5; current_vertex = end_vertex + 5, temp_vertex1 != temp_vertex2; temp_vertex1 = temp_vertex1 + 5) {
          if ((0.001 <= ABS(*end_vertex - *temp_vertex1)) || (0.001 <= ABS(end_vertex[1] - temp_vertex1[1]))) {
            max_y_val = temp_vertex1[2];
triangle_compare_check:
            if ((ABS(*end_vertex - max_y_val) < 0.001) &&
               (((ABS(end_vertex[1] - temp_vertex1[3]) < 0.001 && (ABS(end_vertex[2] - *temp_vertex1) < 0.001)) &&
                (ABS(end_vertex[3] - temp_vertex1[1]) < 0.001)))) goto triangle_match_found;
          }
          else {
            max_y_val = temp_vertex1[2];
            if ((0.001 <= ABS(end_vertex[2] - max_y_val)) || (0.001 <= ABS(end_vertex[3] - temp_vertex1[3])))
            goto triangle_compare_check;
triangle_match_found:
            *(int8_t *)(end_vertex + 4) = 1;
            *(int8_t *)(temp_vertex1 + 4) = 1;
          }
        }
      }
      
      // 清理未使用的顶点
      for (; (temp_vertex1 != temp_vertex2 && (*(char *)(temp_vertex1 + 4) == '\0')); temp_vertex1 = temp_vertex1 + 5) {
      }
      current_vertex = temp_vertex1;
      temp_vertex1 = temp_vertex3;
      if (temp_vertex1 != temp_vertex2) {
        while (temp_vertex3 = current_vertex, current_vertex = temp_vertex3 + 5, current_vertex != temp_vertex2) {
          if (*(char *)(temp_vertex3 + 9) == '\0') {
            max_y_val = temp_vertex3[6];
            max_x_val = temp_vertex3[7];
            min_y_val = temp_vertex3[8];
            *temp_vertex1 = *current_vertex;
            temp_vertex1[1] = max_y_val;
            temp_vertex1[2] = max_x_val;
            temp_vertex1[3] = min_y_val;
            temp_vertex1[4] = temp_vertex3[9];
            temp_vertex1 = temp_vertex1 + 5;
          }
        }
        
        if (temp_vertex1 != temp_vertex2) {
          temp_long1 = SUB168(SEXT816(-0x6666666666666667) * SEXT816((longlong)temp_vertex2 - (longlong)temp_vertex1), 8);
          stack_ptr10 = temp_vertex2 + ((temp_long1 >> 3) - (temp_long1 >> 0x3f)) * 5;
          temp_vertex2 = stack_ptr10;
        }
      }
      
      // 将处理后的顶点添加到输出数组
      for (; temp_vertex1 != temp_vertex2; temp_vertex1 = temp_vertex1 + 5) {
        stack_ulong1 = *(uint64_t *)temp_vertex1;
        stack_ulong2 = *(uint64_t *)(temp_vertex1 + 2);
        stack_ulong3 = *(uint64_t *)float_ptr1;
        stack_vertex_ptr2 = (float *)0x0;
        uint_ptr4 = (int32_t *)output_array[1];
        
        if (uint_ptr4 < (int32_t *)output_array[2]) {
          output_array[1] = (ulonglong)(uint_ptr4 + 7);
          stack_ulong1._4_4_ = (float)((ulonglong)stack_ulong1 >> 0x20);
          stack_ulong2._4_4_ = (float)((ulonglong)stack_ulong2 >> 0x20);
          *uint_ptr4 = (float)stack_ulong1;
          uint_ptr4[1] = stack_ulong1._4_4_;
          uint_ptr4[2] = (float)stack_ulong2;
          uint_ptr4[3] = stack_ulong2._4_4_;
          *(uint64_t *)(uint_ptr4 + 4) = stack_ulong3;
          uint_ptr4[6] = 0;
        }
        else {
          stack_bound_x = (longlong)((longlong)uint_ptr4 - *output_array) / 0x1c;
          if (stack_bound_x == 0) {
            stack_bound_x = 1;
output_alloc_loop:
            stack_vertex_ptr1 = (float *)allocate_render_memory(g_global_memory_pool, stack_bound_x * 0x1c, (char)output_array[3]);
            uint_ptr4 = (int32_t *)output_array[1];
          }
          else {
            stack_bound_x = stack_bound_x * 2;
            if (stack_bound_x != 0) goto output_alloc_loop;
            stack_vertex_ptr1 = (float *)0x0;
          }
          
          uint_ptr3 = (int32_t *)*output_array;
          if (uint_ptr3 != uint_ptr4) {
            memmove(stack_vertex_ptr1, uint_ptr3, (longlong)uint_ptr4 - (longlong)uint_ptr3);
          }
          
          *stack_vertex_ptr1 = (float)stack_ulong1;
          stack_vertex_ptr1[1] = stack_ulong1._4_4_;
          stack_vertex_ptr1[2] = (float)stack_ulong2;
          stack_vertex_ptr1[3] = stack_ulong2._4_4_;
          *(uint64_t *)(stack_vertex_ptr1 + 4) = stack_ulong3;
          stack_vertex_ptr1[6] = SUB84(stack_vertex_ptr2, 0);
          
          if (*output_array != 0) {
            free_render_memory();
          }
          
          *output_array = (ulonglong)stack_vertex_ptr1;
          output_array[1] = (ulonglong)(stack_vertex_ptr1 + 7);
          output_array[2] = (ulonglong)(stack_vertex_ptr1 + stack_bound_x * 7);
        }
      }
      
      if (temp_vertex3 != (float *)0x0) {
        free_render_memory(temp_vertex3);
      }
      
      float_ptr1 = float_ptr1 + 2;
    } while (float_ptr1 != stack_ptr8);
    
    temp_ulong2 = CONCAT44(stack_float7, stack_float6);
    temp_ulong4 = CONCAT44(stack_float9, stack_float10);
    temp_ulong3 = CONCAT44(stack_float11, stack_float8);
  }
  
  // 最终数据处理和优化
  uint_ptr4 = (int32_t *)output_array[1];
  uint_ptr3 = (int32_t *)*output_array;
  stack_ulong1 = temp_ulong2;
  stack_ulong2 = temp_ulong4;
  stack_ulong3 = temp_ulong3;
  
  long_ptr1 = (longlong *)render_optimize_function(&stack_vertex_ptr1, &stack_ulong1);
  temp_long1 = *long_ptr1;
  
  if (uint_ptr3 != uint_ptr4) {
    while ((compare_result = render_compare_function(uint_ptr3, temp_long1), compare_result == '\0' &&
           (compare_result = render_compare_function(simd_result1, temp_long1 + 8), compare_result == '\0'))) {
      compare_result = render_compare_function(simd_result2, temp_long1 + 0x10);
      if ((compare_result != '\0') || (uint_ptr3 = uint_ptr3 + 7, uint_ptr3 == uint_ptr4)) break;
    }
    
    if ((uint_ptr3 != uint_ptr4) && (uint_ptr2 = uint_ptr3 + 7, uint_ptr2 != uint_ptr4)) {
      do {
        compare_result = render_compare_function(uint_ptr2, &stack_ulong1);
        if ((compare_result == '\0') &&
           ((compare_result = render_compare_function(simd_result3, &stack_ulong2), compare_result == '\0' &&
            (compare_result = render_compare_function(simd_result4, &stack_ulong3), compare_result == '\0')))) {
          temp_uint1 = uint_ptr2[1];
          temp_uint2 = uint_ptr2[2];
          temp_uint3 = uint_ptr2[3];
          *uint_ptr3 = *uint_ptr2;
          uint_ptr3[1] = temp_uint1;
          uint_ptr3[2] = temp_uint2;
          uint_ptr3[3] = temp_uint3;
          *(uint64_t *)(uint_ptr3 + 4) = *(uint64_t *)(uint_ptr2 + 4);
          uint_ptr3[6] = uint_ptr2[6];
          uint_ptr3 = uint_ptr3 + 7;
        }
        uint_ptr2 = uint_ptr2 + 7;
      } while (uint_ptr2 != uint_ptr4);
    }
  }
  
  // 调用数组优化函数
  render_array_optimize_and_cleanup(output_array, uint_ptr3, uint_ptr4);
  
  temp_ptr2 = (uint64_t *)*output_array;
  temp_ptr1 = (uint64_t *)output_array[1];
  current_vertex = stack_ptr5;
  temp_vertex1 = stack_ptr6;
  float_ptr1 = stack_ptr7;
  
  do {
    stack_ptr6 = temp_vertex1;
    if (temp_ptr2 == temp_ptr1) {
      if (current_vertex != (float *)0x0) {
        free_render_memory(current_vertex);
      }
      return output_array;
    }
    
    stack_float1 = (float)*temp_ptr2;
    stack_float2 = (float)((ulonglong)*temp_ptr2 >> 0x20);
    stack_float3 = (float)temp_ptr2[1];
    stack_float4 = (float)((ulonglong)temp_ptr2[1] >> 0x20);
    
    if (temp_vertex1 < float_ptr1) {
      *temp_vertex1 = stack_float1;
      temp_vertex1[1] = stack_float2;
      temp_vertex1[2] = stack_float3;
      temp_vertex1[3] = stack_float4;
      temp_vertex1[4] = 0.0;
      end_vertex = current_vertex;
    }
    else {
      temp_long1 = ((longlong)temp_vertex1 - (longlong)current_vertex) / 0x14;
      if (temp_long1 == 0) {
        temp_long1 = 1;
final_alloc_loop1:
        end_vertex = (float *)allocate_render_memory(g_global_memory_pool, temp_long1 * 0x14, 3);
      }
      else {
        temp_long1 = temp_long1 * 2;
        if (temp_long1 != 0) goto final_alloc_loop1;
        end_vertex = (float *)0x0;
      }
      
      stack_vertex_ptr1 = end_vertex;
      if (current_vertex != temp_vertex1) {
        memmove(end_vertex, current_vertex, (longlong)temp_vertex1 - (longlong)current_vertex);
      }
      
      *end_vertex = stack_float1;
      end_vertex[1] = stack_float2;
      end_vertex[2] = stack_float3;
      end_vertex[3] = stack_float4;
      end_vertex[4] = 0.0;
      
      if (current_vertex != (float *)0x0) {
        free_render_memory(current_vertex);
      }
      
      float_ptr1 = end_vertex + temp_long1 * 5;
      stack_ptr5 = end_vertex;
      stack_ptr7 = float_ptr1;
      temp_vertex1 = end_vertex;
    }
    
    current_vertex = temp_vertex1 + 5;
    stack_float1 = (float)temp_ptr2[1];
    stack_float2 = (float)((ulonglong)temp_ptr2[1] >> 0x20);
    stack_float3 = (float)temp_ptr2[2];
    stack_float4 = (float)((ulonglong)temp_ptr2[2] >> 0x20);
    
    if (current_vertex < float_ptr1) {
      temp_vertex2 = temp_vertex1 + 10;
      *current_vertex = stack_float1;
      temp_vertex1[6] = stack_float2;
      temp_vertex1[7] = stack_float3;
      temp_vertex1[8] = stack_float4;
      temp_vertex1[9] = 0.0;
      temp_vertex1 = end_vertex;
    }
    else {
      temp_long1 = ((longlong)current_vertex - (longlong)end_vertex) / 0x14;
      stack_ptr10 = current_vertex;
      if (temp_long1 == 0) {
        temp_long1 = 1;
final_alloc_loop2:
        temp_vertex1 = (float *)allocate_render_memory(g_global_memory_pool, temp_long1 * 0x14, 3);
      }
      else {
        temp_long1 = temp_long1 * 2;
        if (temp_long1 != 0) goto final_alloc_loop2;
        temp_vertex1 = (float *)0x0;
      }
      
      stack_vertex_ptr1 = temp_vertex1;
      if (end_vertex != current_vertex) {
        memmove(temp_vertex1, end_vertex, (longlong)current_vertex - (longlong)end_vertex);
      }
      
      *temp_vertex1 = stack_float1;
      temp_vertex1[1] = stack_float2;
      temp_vertex1[2] = stack_float3;
      temp_vertex1[3] = stack_float4;
      temp_vertex1[4] = 0.0;
      temp_vertex2 = temp_vertex1 + 5;
      
      if (end_vertex != (float *)0x0) {
        free_render_memory(end_vertex);
      }
      
      float_ptr1 = temp_vertex1 + temp_long1 * 5;
      stack_ptr5 = temp_vertex1;
      stack_ptr7 = float_ptr1;
    }
    
    stack_float1 = (float)temp_ptr2[2];
    stack_float2 = (float)((ulonglong)temp_ptr2[2] >> 0x20);
    stack_float3 = (float)*temp_ptr2;
    stack_float4 = (float)((ulonglong)*temp_ptr2 >> 0x20);
    
    if (temp_vertex2 < float_ptr1) {
      *temp_vertex2 = stack_float1;
      temp_vertex2[1] = stack_float2;
      temp_vertex2[2] = stack_float3;
      temp_vertex2[3] = stack_float4;
      temp_vertex2[4] = 0.0;
      current_vertex = temp_vertex1;
    }
    else {
      stack_vertex_ptr1 = (float *)((longlong)temp_vertex2 - (longlong)temp_vertex1);
      stack_ptr10 = temp_vertex2;
      if ((longlong)stack_vertex_ptr1 / 0x14 == 0) {
        temp_long1 = 1;
final_alloc_loop3:
        current_vertex = (float *)allocate_render_memory(g_global_memory_pool, temp_long1 * 0x14, 3);
      }
      else {
        temp_long1 = ((longlong)stack_vertex_ptr1 / 0x14) * 2;
        if (temp_long1 != 0) goto final_alloc_loop3;
        current_vertex = (float *)0x0;
      }
      
      if (temp_vertex1 != temp_vertex2) {
        memmove(current_vertex, temp_vertex1, stack_vertex_ptr1);
      }
      
      *current_vertex = stack_float1;
      current_vertex[1] = stack_float2;
      current_vertex[2] = stack_float3;
      current_vertex[3] = stack_float4;
      current_vertex[4] = 0.0;
      
      if (temp_vertex1 != (float *)0x0) {
        free_render_memory(temp_vertex1);
      }
      
      float_ptr1 = current_vertex + temp_long1 * 5;
      stack_ptr5 = current_vertex;
      stack_ptr7 = float_ptr1;
      temp_vertex2 = current_vertex;
    }
    
    temp_vertex1 = temp_vertex2 + 5;
    temp_ptr2 = (uint64_t *)((longlong)temp_ptr2 + 0x1c);
  } while( true );
}

// 数组优化和清理函数
// 参数：param_1 - 数组指针，param_2 - 起始位置，param_3 - 结束位置
// 功能：优化数组结构，清理无用数据，压缩内存占用
longlong render_array_optimize_and_cleanup(longlong *array_ptr, longlong start_pos, longlong end_pos)
{
  longlong array_size;
  
  if (start_pos != end_pos) {
    array_size = *(longlong *)(array_ptr + 8);
    if (end_pos != array_size) {
      memmove(start_pos, end_pos, array_size - end_pos);
    }
    *(longlong *)(array_ptr + 8) = array_size + ((end_pos - start_pos) / 0x1c) * -0x1c;
  }
  return start_pos;
}

// 全局变量声明
uint64_t g_render_dispatch_table = 0x180c8a9c0;  // 渲染分发表
uint64_t g_global_memory_pool = 0x180c8ed18;     // 全局内存池

// 辅助函数声明
void add_render_context(longlong *array_ptr, longlong *context_id);
float *allocate_render_memory(uint64_t memory_pool, longlong size, char flags);
void free_render_memory(void *ptr);
char render_compare_function(int32_t *ptr1, uint64_t *ptr2);
longlong *render_optimize_function(float **ptr1, uint64_t *ptr2);