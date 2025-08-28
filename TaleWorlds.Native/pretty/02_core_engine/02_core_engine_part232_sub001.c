#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 02_core_engine_part232_sub001.c - 13 个函数
// 核心引擎模块第232部分子文件001 - 浮点数排序和统计计算模块

// 函数: void process_statistics_and_sort_data(longlong context_ptr)
// 功能: 处理统计数据并对数据进行排序
// 参数: context_ptr - 上下文指针，包含数据缓冲区和统计信息
void process_statistics_and_sort_data(longlong context_ptr)

{
  float temp_float1;
  float temp_float2;
  int temp_int;
  float *float_ptr1;
  float *float_ptr2;
  float *float_ptr3;
  float *float_ptr4;
  int8_t temp_array1 [16];
  int8_t temp_array2 [16];
  int8_t temp_array3 [16];
  int8_t temp_array4 [16];
  int8_t temp_array5 [16];
  int8_t temp_array6 [16];
  double temp_double1;
  double temp_double2;
  double temp_double3;
  double temp_double4;
  double temp_double5;
  longlong temp_long1;
  ulonglong temp_ulong1;
  ulonglong temp_ulong2;
  uint temp_uint1;
  uint temp_uint2;
  float *float_ptr5;
  longlong temp_long2;
  longlong temp_long3;
  float *float_ptr6;
  ulonglong temp_ulong3;
  ulonglong temp_ulong4;
  double temp_double6;
  double temp_double7;
  double temp_double8;
  double temp_double9;
  double temp_double10;
  double temp_double11;
  double temp_double12;
  double temp_double13;
  
  // 获取数据缓冲区指针
  float_ptr6 = *(float **)(context_ptr + 0x70);
  temp_ulong2 = 0;
  float_ptr1 = *(float **)(context_ptr + 0x68);
  temp_uint2 = 0;
  
  // 第一个缓冲区排序处理
  if (float_ptr1 != float_ptr6) {
    temp_long3 = (longlong)float_ptr6 - (longlong)float_ptr1 >> 2;
    temp_ulong4 = temp_ulong2;
    temp_uint1 = temp_uint2;
    
    // 计算排序深度
    for (temp_long1 = temp_long3; temp_long1 != 0; temp_long1 = temp_long1 >> 1) {
      temp_uint1 = (int)temp_ulong4 + 1;
      temp_ulong4 = (ulonglong)temp_uint1;
    }
    
    // 执行排序操作
    perform_sort_operation(float_ptr1,float_ptr6,(longlong)(int)(temp_uint1 - 1) * 2,0);
    
    // 根据数据量选择排序算法
    if (temp_long3 < 0x1d) {
      insertion_sort(float_ptr1,float_ptr6);
    }
    else {
      float_ptr5 = float_ptr1 + 0x1c;
      insertion_sort(float_ptr1);
      
      // 插入排序优化
      for (; float_ptr5 != float_ptr6; float_ptr5 = float_ptr5 + 1) {
        temp_float2 = *float_ptr5;
        temp_float1 = float_ptr5[-1];
        float_ptr1 = float_ptr5;
        
        // 向后移动元素直到找到合适位置
        while (temp_float2 < temp_float1) {
          *float_ptr1 = temp_float1;
          temp_float1 = float_ptr1[-2];
          float_ptr1 = float_ptr1 + -1;
        }
        *float_ptr1 = temp_float2;
      }
    }
  }
  
  // 第二个缓冲区排序处理
  float_ptr6 = *(float **)(context_ptr + 0x90);
  float_ptr1 = *(float **)(context_ptr + 0x88);
  if (float_ptr1 != float_ptr6) {
    temp_long3 = (longlong)float_ptr6 - (longlong)float_ptr1 >> 2;
    temp_ulong4 = temp_ulong2;
    
    for (temp_long1 = temp_long3; temp_long1 != 0; temp_long1 = temp_long1 >> 1) {
      temp_uint2 = (int)temp_ulong4 + 1;
      temp_ulong4 = (ulonglong)temp_uint2;
    }
    
    perform_sort_operation(float_ptr1,float_ptr6,(longlong)(int)(temp_uint2 - 1) * 2,0);
    
    if (temp_long3 < 0x1d) {
      insertion_sort(float_ptr1,float_ptr6);
    }
    else {
      float_ptr5 = float_ptr1 + 0x1c;
      insertion_sort(float_ptr1);
      
      for (; float_ptr5 != float_ptr6; float_ptr5 = float_ptr5 + 1) {
        temp_float2 = *float_ptr5;
        temp_float1 = float_ptr5[-1];
        float_ptr1 = float_ptr5;
        
        while (temp_float2 < temp_float1) {
          *float_ptr1 = temp_float1;
          temp_float1 = float_ptr1[-2];
          float_ptr1 = float_ptr1 + -1;
        }
        *float_ptr1 = temp_float2;
      }
    }
  }
  
  // 统计第一个缓冲区的数据
  float_ptr6 = *(float **)(context_ptr + 0x68);
  temp_double7 = 0.0;
  temp_double13 = 0.0;
  temp_double6 = 0.0;
  temp_ulong4 = *(longlong *)(context_ptr + 0x70) - (longlong)float_ptr6 >> 2;
  temp_double8 = 0.0;
  temp_double2 = 0.0;
  temp_double11 = 0.0;
  temp_double4 = 0.0;
  
  if (temp_ulong4 != 0) {
    // 计算统计分位点
    temp_array1._8_8_ = 0;
    temp_array1._0_8_ = temp_ulong4;
    temp_long1 = calculate_quantile_position(ZEXT816(0x47ae147ae147ae15) * temp_array1,8);
    
    temp_array2._8_8_ = 0;
    temp_array2._0_8_ = temp_ulong4 * 0xf;
    temp_long3 = calculate_quantile_position(ZEXT816(0x47ae147ae147ae15) * temp_array2,8);
    
    temp_array3._8_8_ = 0;
    temp_array3._0_8_ = temp_ulong4 * 0x1e;
    temp_long2 = calculate_quantile_position(ZEXT816(0x47ae147ae147ae15) * temp_array3,8);
    
    temp_ulong1 = temp_ulong2;
    temp_ulong3 = temp_ulong2;
    temp_double13 = 0.0;
    temp_double2 = 0.0;
    temp_double4 = 0.0;
    
    // 遍历数据收集统计信息
    do {
      if ((longlong)temp_ulong1 < (longlong)(int)((temp_ulong4 - temp_long1 >> 1) + temp_long1 >> 6)) {
        temp_double6 = temp_double6 + 1.0;
        temp_double13 = temp_double13 + (double)*float_ptr6;
      }
      if ((longlong)temp_ulong1 < (longlong)(int)((temp_ulong4 * 0xf - temp_long3 >> 1) + temp_long3 >> 6)) {
        temp_double2 = temp_double2 + 1.0;
        temp_double8 = temp_double8 + (double)*float_ptr6;
      }
      if ((longlong)temp_ulong1 < (longlong)(int)((temp_ulong4 * 0x1e - temp_long2 >> 1) + temp_long2 >> 6)) {
        temp_double4 = temp_double4 + 1.0;
        temp_double11 = temp_double11 + (double)*float_ptr6;
      }
      
      temp_uint2 = (int)temp_ulong3 + 1;
      temp_ulong3 = (ulonglong)temp_uint2;
      temp_ulong1 = temp_ulong1 + 1;
      float_ptr6 = float_ptr6 + 1;
    } while ((ulonglong)(longlong)(int)temp_uint2 < temp_ulong4);
  }
  
  // 更新统计信息
  temp_int = *(int *)(context_ptr + 0xdc);
  temp_double3 = 0.0;
  temp_double5 = 1.0 / (double)temp_int;
  temp_double1 = 0.0;
  temp_double12 = (double)(temp_int + -1);
  temp_double9 = 0.0;
  
  // 计算移动平均值
  *(double *)(context_ptr + 0xf0) =
       ((1.0 / temp_double6) * temp_double13 + temp_double12 * *(double *)(context_ptr + 0xf0)) * temp_double5;
  temp_double13 = 0.0;
  *(double *)(context_ptr + 0xf8) = (temp_double12 * *(double *)(context_ptr + 0xf8) + temp_double8 / temp_double2) * temp_double5;
  *(double *)(context_ptr + 0x100) = (temp_double12 * *(double *)(context_ptr + 0x100) + temp_double11 / temp_double4) * temp_double5;
  
  // 统计第二个缓冲区的数据
  float_ptr6 = *(float **)(context_ptr + 0x88);
  temp_ulong4 = *(longlong *)(context_ptr + 0x90) - (longlong)float_ptr6 >> 2;
  
  if (temp_ulong4 != 0) {
    // 计算第二个缓冲区的统计分位点
    temp_array4._8_8_ = 0;
    temp_array4._0_8_ = temp_ulong4;
    temp_long1 = calculate_quantile_position(ZEXT816(0x47ae147ae147ae15) * temp_array4,8);
    
    temp_array5._8_8_ = 0;
    temp_array5._0_8_ = temp_ulong4 * 0xf;
    temp_long3 = calculate_quantile_position(ZEXT816(0x47ae147ae147ae15) * temp_array5,8);
    
    temp_array6._8_8_ = 0;
    temp_array6._0_8_ = temp_ulong4 * 0x1e;
    temp_long2 = calculate_quantile_position(ZEXT816(0x47ae147ae147ae15) * temp_array6,8);
    
    temp_ulong1 = temp_ulong2;
    temp_double1 = 0.0;
    temp_double3 = 0.0;
    
    do {
      if ((longlong)temp_ulong2 < (longlong)(int)((temp_ulong4 - temp_long1 >> 1) + temp_long1 >> 6)) {
        temp_double7 = temp_double7 + (double)*float_ptr6;
      }
      if ((longlong)temp_ulong2 < (longlong)(int)((temp_ulong4 * 0xf - temp_long3 >> 1) + temp_long3 >> 6)) {
        temp_double1 = temp_double1 + 1.0;
        temp_double9 = temp_double9 + (double)*float_ptr6;
      }
      if ((longlong)temp_ulong2 < (longlong)(int)((temp_ulong4 * 0x1e - temp_long2 >> 1) + temp_long2 >> 6)) {
        temp_double3 = temp_double3 + 1.0;
        temp_double13 = temp_double13 + (double)*float_ptr6;
      }
      
      temp_uint2 = (int)temp_ulong1 + 1;
      temp_ulong1 = (ulonglong)temp_uint2;
      temp_ulong2 = temp_ulong2 + 1;
      float_ptr6 = float_ptr6 + 1;
    } while ((ulonglong)(longlong)(int)temp_uint2 < temp_ulong4);
  }
  
  // 更新统计计数器和最终结果
  *(int *)(context_ptr + 0xdc) = temp_int + 1;
  *(double *)(context_ptr + 0x108) =
       (temp_double12 * *(double *)(context_ptr + 0x108) + (1.0 / temp_double6) * temp_double7) * temp_double5;
  *(double *)(context_ptr + 0x110) = (temp_double12 * *(double *)(context_ptr + 0x110) + temp_double9 / temp_double1) * temp_double5;
  *(double *)(context_ptr + 0x118) = (temp_double12 * *(double *)(context_ptr + 0x118) + temp_double13 / temp_double3) * temp_double5;
  *(double *)(context_ptr + 0xe0) =
       (temp_double12 * *(double *)(context_ptr + 0xe0) + *(double *)(context_ptr + 0xc0)) * temp_double5;
  *(double *)(context_ptr + 0xe8) =
       (temp_double12 * *(double *)(context_ptr + 0xe8) + *(double *)(context_ptr + 0xb8)) * temp_double5;
  return;
}


// 函数: void update_statistics_with_sorting(void)
// 功能: 更新统计数据并进行排序处理
// 注意: 此函数使用寄存器变量，是简化实现
void update_statistics_with_sorting(void)

{
  float temp_float1;
  float temp_float2;
  int temp_int;
  float *float_ptr1;
  float *float_ptr2;
  float *float_ptr3;
  int8_t temp_array1 [16];
  int8_t temp_array2 [16];
  int8_t temp_array3 [16];
  int8_t temp_array4 [16];
  int8_t temp_array5 [16];
  int8_t temp_array6 [16];
  double temp_double1;
  longlong context_ptr;
  longlong temp_long1;
  ulonglong temp_ulong1;
  uint temp_uint1;
  float *float_ptr4;
  float *float_ptr5;
  longlong temp_long2;
  float *buffer_start;
  uint64_t stack_ptr;
  longlong temp_long3;
  ulonglong index_counter;
  float *buffer_end;
  ulonglong temp_ulong2;
  ulonglong temp_ulong3;
  longlong context_offset;
  double temp_double2;
  double temp_double3;
  double temp_double4;
  double temp_double5;
  double temp_double6;
  double temp_double7;
  double temp_double8;
  double temp_double9;
  int32_t xmm_register_a;
  int32_t xmm_register_b;
  int32_t xmm_register_c;
  int32_t xmm_register_d;
  double temp_double10;
  double temp_double11;
  
  // 设置栈帧和寄存器状态
  *(uint64_t *)(context_ptr + 8) = stack_ptr;
  *(int32_t *)(context_ptr + -0x38) = xmm_register_a;
  *(int32_t *)(context_ptr + -0x34) = xmm_register_b;
  *(int32_t *)(context_ptr + -0x30) = xmm_register_c;
  *(int32_t *)(context_ptr + -0x2c) = xmm_register_d;
  temp_uint1 = (uint)index_counter;
  
  // 第一个缓冲区排序
  if (buffer_end != buffer_start) {
    temp_long3 = (longlong)buffer_start - (longlong)buffer_end >> 2;
    
    // 计算排序深度
    for (temp_long1 = temp_long3; temp_long1 != 0; temp_long1 = temp_long1 >> 1) {
    }
    
    perform_sort_operation();
    
    if (temp_long3 < 0x1d) {
      insertion_sort();
    }
    else {
      float_ptr4 = buffer_end + 0x1c;
      insertion_sort();
      
      // 插入排序实现
      for (; float_ptr4 != buffer_start; float_ptr4 = float_ptr4 + 1) {
        temp_float2 = *float_ptr4;
        temp_float1 = float_ptr4[-1];
        float_ptr1 = float_ptr4;
        
        while (temp_float2 < temp_float1) {
          *float_ptr1 = temp_float1;
          temp_float1 = float_ptr1[-2];
          float_ptr1 = float_ptr1 + -1;
        }
        *float_ptr1 = temp_float2;
      }
    }
  }
  
  // 第二个缓冲区处理
  float_ptr4 = *(float **)(context_offset + 0x90);
  float_ptr1 = *(float **)(context_offset + 0x88);
  
  if (float_ptr1 != float_ptr4) {
    temp_ulong2 = index_counter & 0xffffffff;
    temp_long3 = (longlong)float_ptr4 - (longlong)float_ptr1 >> 2;
    
    for (temp_long1 = temp_long3; temp_long1 != 0; temp_long1 = temp_long1 >> 1) {
      temp_uint1 = (int)temp_ulong2 + 1;
      temp_ulong2 = (ulonglong)temp_uint1;
    }
    
    perform_sort_operation(float_ptr1,float_ptr4,(longlong)(int)(temp_uint1 - 1) * 2,0);
    
    if (temp_long3 < 0x1d) {
      insertion_sort(float_ptr1,float_ptr4);
    }
    else {
      float_ptr5 = float_ptr1 + 0x1c;
      insertion_sort(float_ptr1);
      
      for (; float_ptr5 != float_ptr4; float_ptr5 = float_ptr5 + 1) {
        temp_float2 = *float_ptr5;
        temp_float1 = float_ptr5[-1];
        float_ptr1 = float_ptr5;
        
        while (temp_float2 < temp_float1) {
          *float_ptr1 = temp_float1;
          temp_float1 = float_ptr1[-2];
          float_ptr1 = float_ptr1 + -1;
        }
        *float_ptr1 = temp_float2;
      }
    }
  }
  
  // 统计数据处理
  float_ptr4 = *(float **)(context_offset + 0x68);
  temp_double2 = 0.0;
  temp_double6 = 0.0;
  temp_double1 = 0.0;
  temp_ulong3 = *(longlong *)(context_offset + 0x70) - (longlong)float_ptr4 >> 2;
  temp_double3 = 0.0;
  temp_double8 = 0.0;
  temp_double5 = 0.0;
  temp_double1 = 0.0;
  temp_ulong2 = index_counter & 0xffffffff;
  
  if (temp_ulong3 != 0) {
    // 计算统计分位点
    temp_array1._8_8_ = 0;
    temp_array1._0_8_ = temp_ulong3;
    temp_long1 = calculate_quantile_position(ZEXT816(0x47ae147ae147ae15) * temp_array1,8);
    
    temp_array2._8_8_ = 0;
    temp_array2._0_8_ = temp_ulong3 * 0xf;
    temp_long3 = calculate_quantile_position(ZEXT816(0x47ae147ae147ae15) * temp_array2,8);
    
    temp_array3._8_8_ = 0;
    temp_array3._0_8_ = temp_ulong3 * 0x1e;
    temp_long2 = calculate_quantile_position(ZEXT816(0x47ae147ae147ae15) * temp_array3,8);
    
    temp_ulong1 = index_counter;
    temp_double1 = 0.0;
    
    do {
      if ((longlong)temp_ulong1 < (longlong)(int)((temp_ulong3 - temp_long1 >> 1) + temp_long1 >> 6)) {
        temp_double1 = temp_double1 + 1.0;
        temp_double6 = temp_double6 + (double)*float_ptr4;
      }
      if ((longlong)temp_ulong1 < (longlong)(int)((temp_ulong3 * 0xf - temp_long3 >> 1) + temp_long3 >> 6)) {
        temp_double8 = temp_double8 + 1.0;
        temp_double3 = temp_double3 + (double)*float_ptr4;
      }
      if ((longlong)temp_ulong1 < (longlong)(int)((temp_ulong3 * 0x1e - temp_long2 >> 1) + temp_long2 >> 6)) {
        temp_double1 = temp_double1 + 1.0;
        temp_double5 = temp_double5 + (double)*float_ptr4;
      }
      
      temp_uint1 = (int)temp_ulong2 + 1;
      temp_ulong2 = (ulonglong)temp_uint1;
      temp_ulong1 = temp_ulong1 + 1;
      float_ptr4 = float_ptr4 + 1;
    } while ((ulonglong)(longlong)(int)temp_uint1 < temp_ulong3);
  }
  
  // 更新统计结果
  temp_int = *(int *)(context_offset + 0xdc);
  temp_double9 = 0.0;
  temp_double11 = 1.0 / (double)temp_int;
  temp_double7 = 0.0;
  temp_double10 = (double)(temp_int + -1);
  temp_double4 = 0.0;
  
  *(double *)(context_offset + 0xf0) =
       ((1.0 / temp_double1) * temp_double6 + temp_double10 * *(double *)(context_offset + 0xf0)) * temp_double11;
  temp_double6 = 0.0;
  *(double *)(context_offset + 0xf8) =
       (temp_double10 * *(double *)(context_offset + 0xf8) + temp_double3 / temp_double8) * temp_double11;
  *(double *)(context_offset + 0x100) =
       (temp_double10 * *(double *)(context_offset + 0x100) + temp_double5 / temp_double1) * temp_double11;
  
  // 处理第二个缓冲区的统计数据
  float_ptr4 = *(float **)(context_offset + 0x88);
  temp_ulong2 = *(longlong *)(context_offset + 0x90) - (longlong)float_ptr4 >> 2;
  
  if (temp_ulong2 != 0) {
    // 计算第二个缓冲区的统计分位点
    temp_array4._8_8_ = 0;
    temp_array4._0_8_ = temp_ulong2;
    temp_long1 = calculate_quantile_position(ZEXT816(0x47ae147ae147ae15) * temp_array4,8);
    
    temp_array5._8_8_ = 0;
    temp_array5._0_8_ = temp_ulong2 * 0xf;
    temp_long3 = calculate_quantile_position(ZEXT816(0x47ae147ae147ae15) * temp_array5,8);
    
    temp_array6._8_8_ = 0;
    temp_array6._0_8_ = temp_ulong2 * 0x1e;
    temp_long2 = calculate_quantile_position(ZEXT816(0x47ae147ae147ae15) * temp_array6,8);
    
    temp_ulong3 = index_counter;
    
    do {
      if ((longlong)index_counter < (longlong)(int)((temp_ulong2 - temp_long1 >> 1) + temp_long1 >> 6)) {
        temp_double2 = temp_double2 + (double)*float_ptr4;
      }
      if ((longlong)index_counter < (longlong)(int)((temp_ulong2 * 0xf - temp_long3 >> 1) + temp_long3 >> 6)) {
        temp_double7 = temp_double7 + 1.0;
        temp_double4 = temp_double4 + (double)*float_ptr4;
      }
      if ((longlong)index_counter < (longlong)(int)((temp_ulong2 * 0x1e - temp_long2 >> 1) + temp_long2 >> 6)) {
        temp_double9 = temp_double9 + 1.0;
        temp_double6 = temp_double6 + (double)*float_ptr4;
      }
      
      temp_uint1 = (int)temp_ulong3 + 1;
      temp_ulong3 = (ulonglong)temp_uint1;
      index_counter = index_counter + 1;
      float_ptr4 = float_ptr4 + 1;
    } while ((ulonglong)(longlong)(int)temp_uint1 < temp_ulong2);
  }
  
  // 最终统计更新
  *(int *)(context_offset + 0xdc) = temp_int + 1;
  *(double *)(context_offset + 0x108) =
       (temp_double10 * *(double *)(context_offset + 0x108) + (1.0 / temp_double1) * temp_double2) * temp_double11;
  *(double *)(context_offset + 0x110) =
       (temp_double10 * *(double *)(context_offset + 0x110) + temp_double4 / temp_double7) * temp_double11;
  *(double *)(context_offset + 0x118) =
       (temp_double10 * *(double *)(context_offset + 0x118) + temp_double6 / temp_double9) * temp_double11;
  *(double *)(context_offset + 0xe0) =
       (temp_double10 * *(double *)(context_offset + 0xe0) + *(double *)(context_offset + 0xc0)) * temp_double11;
  *(double *)(context_offset + 0xe8) =
       (temp_double10 * *(double *)(context_offset + 0xe8) + *(double *)(context_offset + 0xb8)) * temp_double11;
  return;
}


// 函数: void calculate_weighted_statistics(uint64_t context_ptr,double weight1,double weight2,int sample_count)
// 功能: 计算加权统计数据
// 参数: context_ptr - 上下文指针，weight1/weight2 - 权重因子，sample_count - 样本数量
void calculate_weighted_statistics(uint64_t context_ptr,double weight1,double weight2,int sample_count)

{
  int temp_int;
  int8_t temp_array1 [16];
  int8_t temp_array2 [16];
  int8_t temp_array3 [16];
  int8_t temp_array4 [16];
  int8_t temp_array5 [16];
  int8_t temp_array6 [16];
  int8_t temp_array7 [16];
  int8_t temp_array8 [16];
  int8_t temp_array9 [16];
  int8_t temp_array10 [16];
  int8_t temp_array11 [16];
  int8_t temp_array12 [16];
  int8_t temp_array13 [16];
  ulonglong temp_ulong1;
  longlong temp_long1;
  longlong temp_long2;
  longlong temp_long3;
  uint temp_uint1;
  ulonglong index_counter;
  ulonglong data_count;
  float *data_ptr;
  float *float_ptr1;
  ulonglong buffer_size;
  longlong context_offset;
  double base_value1;
  double base_value2;
  double temp_double1;
  double weighted_value1;
  double temp_double2;
  double weighted_value2;
  double weighted_value3;
  double temp_double3;
  double temp_double4;
  double temp_double5;
  double temp_double6;
  ulonglong temp_ulong2;
  
  // 计算加权统计分位点
  temp_array1._8_8_ = 0;
  temp_array1._0_8_ = data_count;
  temp_array8._8_8_ = 0;
  temp_array8._0_8_ = buffer_size;
  temp_long1 = calculate_weighted_quantile(temp_array1 * temp_array8,8);
  
  temp_array2._8_8_ = 0;
  temp_array2._0_8_ = data_count;
  temp_array9._8_8_ = 0;
  temp_array9._0_8_ = buffer_size * 0xf;
  temp_long2 = calculate_weighted_quantile(temp_array2 * temp_array9,8);
  
  temp_array3._8_8_ = 0;
  temp_array3._0_8_ = data_count;
  temp_array10._8_8_ = 0;
  temp_array10._0_8_ = buffer_size * 0x1e;
  temp_long3 = calculate_weighted_quantile(temp_array3 * temp_array10,8);
  
  temp_ulong1 = index_counter;
  
  // 遍历数据计算加权统计
  do {
    if ((longlong)temp_ulong1 < (longlong)(int)((buffer_size - temp_long1 >> 1) + temp_long1 >> 6)) {
      weight1 = weight1 + weight2;
      weighted_value1 = weighted_value1 + (double)*data_ptr;
    }
    if ((longlong)temp_ulong1 < (longlong)(int)((buffer_size * 0xf - temp_long2 >> 1) + temp_long2 >> 6)) {
      weighted_value2 = weighted_value2 + weight2;
      base_value2 = base_value2 + (double)*data_ptr;
    }
    if ((longlong)temp_ulong1 < (longlong)(int)((buffer_size * 0x1e - temp_long3 >> 1) + temp_long3 >> 6)) {
      weighted_value3 = weighted_value3 + weight2;
      weighted_value1 = weighted_value1 + (double)*data_ptr;
    }
    
    sample_count = sample_count + 1;
    temp_ulong1 = temp_ulong1 + 1;
    data_ptr = data_ptr + 1;
  } while ((ulonglong)(longlong)sample_count < buffer_size);
  
  // 计算最终加权统计结果
  temp_int = *(int *)(context_offset + 0xdc);
  temp_double6 = weight2 / (double)temp_int;
  temp_double5 = (double)(temp_int + -1);
  
  *(double *)(context_offset + 0xf0) =
       ((weight2 / weight1) * weighted_value1 + temp_double5 * *(double *)(context_offset + 0xf0)) * temp_double6;
  *(double *)(context_offset + 0xf8) =
       (temp_double5 * *(double *)(context_offset + 0xf8) + base_value2 / weighted_value2) * temp_double6;
  *(double *)(context_offset + 0x100) =
       (temp_double5 * *(double *)(context_offset + 0x100) + weighted_value1 / weighted_value3) * temp_double6;
  
  // 处理第二个缓冲区的加权统计
  float_ptr1 = *(float **)(context_offset + 0x88);
  temp_ulong1 = *(longlong *)(context_offset + 0x90) - (longlong)float_ptr1 >> 2;
  temp_double1 = base_value1;
  temp_double2 = base_value1;
  temp_double3 = base_value1;
  temp_double4 = base_value1;
  
  if (temp_ulong1 != 0) {
    // 计算第二个缓冲区的加权分位点
    temp_array4._8_8_ = 0;
    temp_array4._0_8_ = data_count;
    temp_array11._8_8_ = 0;
    temp_array11._0_8_ = temp_ulong1;
    temp_long1 = calculate_weighted_quantile(temp_array4 * temp_array11,8);
    
    temp_array5._8_8_ = 0;
    temp_array5._0_8_ = data_count;
    temp_array12._8_8_ = 0;
    temp_array12._0_8_ = temp_ulong1 * 0xf;
    temp_long2 = calculate_weighted_quantile(temp_array5 * temp_array12,8);
    
    temp_array6._8_8_ = 0;
    temp_array6._0_8_ = data_count;
    temp_array13._8_8_ = 0;
    temp_array13._0_8_ = temp_ulong1 * 0x1e;
    temp_long3 = calculate_weighted_quantile(temp_array6 * temp_array13,8);
    
    temp_ulong2 = index_counter;
    
    do {
      if ((longlong)index_counter < (longlong)(int)((temp_ulong1 - temp_long1 >> 1) + temp_long1 >> 6)) {
        base_value1 = base_value1 + (double)*float_ptr1;
      }
      if ((longlong)index_counter < (longlong)(int)((temp_ulong1 * 0xf - temp_long2 >> 1) + temp_long2 >> 6)) {
        temp_double3 = temp_double3 + weight2;
        temp_double1 = temp_double1 + (double)*float_ptr1;
      }
      if ((longlong)index_counter < (longlong)(int)((temp_ulong1 * 0x1e - temp_long3 >> 1) + temp_long3 >> 6)) {
        temp_double4 = temp_double4 + weight2;
        temp_double2 = temp_double2 + (double)*float_ptr1;
      }
      
      temp_uint1 = (int)temp_ulong2 + 1;
      temp_ulong2 = (ulonglong)temp_uint1;
      index_counter = index_counter + 1;
      float_ptr1 = float_ptr1 + 1;
    } while ((ulonglong)(longlong)(int)temp_uint1 < temp_ulong1);
  }
  
  // 更新最终加权统计结果
  *(int *)(context_offset + 0xdc) = temp_int + 1;
  *(double *)(context_offset + 0x108) =
       (temp_double5 * *(double *)(context_offset + 0x108) + (weight2 / weight1) * base_value1) * temp_double6;
  *(double *)(context_offset + 0x110) =
       (temp_double5 * *(double *)(context_offset + 0x110) + temp_double1 / temp_double3) * temp_double6;
  *(double *)(context_offset + 0x118) =
       (temp_double5 * *(double *)(context_offset + 0x118) + temp_double2 / temp_double4) * temp_double6;
  *(double *)(context_offset + 0xe0) =
       (temp_double5 * *(double *)(context_offset + 0xe0) + *(double *)(context_offset + 0xc0)) * temp_double6;
  *(double *)(context_offset + 0xe8) =
       (temp_double5 * *(double *)(context_offset + 0xe8) + *(double *)(context_offset + 0xb8)) * temp_double6;
  return;
}


// 函数: void update_moving_statistics(uint64_t param1,uint64_t param2,double weight,double value)
// 功能: 更新移动统计数据
// 参数: param1/param2 - 上下文参数，weight - 权重，value - 数值
void update_moving_statistics(uint64_t param1,uint64_t param2,double weight,double value)

{
  int8_t temp_array1 [16];
  int8_t temp_array2 [16];
  int8_t temp_array3 [16];
  int8_t temp_array4 [16];
  int8_t temp_array5 [16];
  int8_t temp_array6 [16];
  longlong temp_long1;
  longlong temp_long2;
  longlong temp_long3;
  int temp_int;
  uint temp_uint1;
  ulonglong index_counter;
  ulonglong data_count;
  float *data_ptr;
  ulonglong buffer_size;
  longlong context_offset;
  double base_value1;
  double base_value2;
  double moving_value1;
  double moving_value2;
  double moving_value3;
  double moving_value4;
  int32_t xmm_register_a;
  int32_t xmm_register_b;
  double moving_value5;
  ulonglong temp_ulong1;
  
  // 计算移动统计分位点
  temp_array1._8_8_ = 0;
  temp_array1._0_8_ = data_count;
  temp_array4._8_8_ = 0;
  temp_array4._0_8_ = buffer_size;
  temp_long1 = calculate_moving_quantile(temp_array1 * temp_array4,8);
  
  temp_array2._8_8_ = 0;
  temp_array2._0_8_ = data_count;
  temp_array5._8_8_ = 0;
  temp_array5._0_8_ = buffer_size * 0xf;
  temp_long2 = calculate_moving_quantile(temp_array2 * temp_array5,8);
  
  temp_array3._8_8_ = 0;
  temp_array3._0_8_ = data_count;
  temp_array6._8_8_ = 0;
  temp_array6._0_8_ = buffer_size * 0x1e;
  temp_long3 = calculate_moving_quantile(temp_array3 * temp_array6,8);
  
  temp_ulong1 = index_counter;
  
  // 遍历数据计算移动统计
  do {
    if ((longlong)index_counter < (longlong)(int)((buffer_size - temp_long1 >> 1) + temp_long1 >> 6)) {
      value = value + (double)*data_ptr;
    }
    if ((longlong)index_counter < (longlong)(int)((buffer_size * 0xf - temp_long2 >> 1) + temp_long2 >> 6)) {
      moving_value1 = moving_value1 + weight;
      base_value2 = base_value2 + (double)*data_ptr;
    }
    if ((longlong)index_counter < (longlong)(int)((buffer_size * 0x1e - temp_long3 >> 1) + temp_long3 >> 6)) {
      moving_value2 = moving_value2 + weight;
      base_value1 = base_value1 + (double)*data_ptr;
    }
    
    temp_uint1 = (int)temp_ulong1 + 1;
    temp_ulong1 = (ulonglong)temp_uint1;
    index_counter = index_counter + 1;
    data_ptr = data_ptr + 1;
  } while ((ulonglong)(longlong)(int)temp_uint1 < buffer_size);
  
  // 更新移动统计结果
  *(int *)(context_offset + 0xdc) = temp_int + 1;
  *(double *)(context_offset + 0x108) =
       (moving_value4 * *(double *)(context_offset + 0x108) + moving_value5 * value) *
       (double)CONCAT44(xmm_register_b,xmm_register_a);
  *(double *)(context_offset + 0x110) =
       (moving_value4 * *(double *)(context_offset + 0x110) + base_value2 / moving_value1) *
       (double)CONCAT44(xmm_register_b,xmm_register_a);
  *(double *)(context_offset + 0x118) =
       (moving_value4 * *(double *)(context_offset + 0x118) + base_value1 / moving_value2) *
       (double)CONCAT44(xmm_register_b,xmm_register_a);
  *(double *)(context_offset + 0xe0) =
       (moving_value4 * *(double *)(context_offset + 0xe0) + *(double *)(context_offset + 0xc0)) *
       (double)CONCAT44(xmm_register_b,xmm_register_a);
  *(double *)(context_offset + 0xe8) =
       (moving_value4 * *(double *)(context_offset + 0xe8) + *(double *)(context_offset + 0xb8)) *
       (double)CONCAT44(xmm_register_b,xmm_register_a);
  return;
}


// 警告: 以下全局变量可能与较小符号重叠地址


// 函数: void execute_performance_analysis(longlong context_ptr)
// 功能: 执行性能分析
// 参数: context_ptr - 上下文指针
void execute_performance_analysis(longlong context_ptr)

{
  uint64_t temp_ulong1;
  int32_t temp_uint1;
  int32_t *uint_ptr1;
  void *ptr1;
  void *stack_ptr1;
  int32_t *stack_ptr2;
  int32_t stack_value1;
  uint64_t stack_value2;
  int8_t temp_array1 [32];
  uint64_t stack_value3;
  
  stack_value3 = 0xfffffffffffffffe;
  ptr1 = &performance_table_entry;
  
  // 根据上下文状态选择性能表
  if (*(char *)(context_ptr + 0xd9) != '\0') {
    ptr1 = &alternate_performance_table;
  }
  
  initialize_performance_table(temp_array1,ptr1);
  temp_ulong1 = *(uint64_t *)(context_ptr + 0xe8);
  stack_ptr1 = &performance_data_array;
  stack_value2 = 0;
  stack_ptr2 = (int32_t *)0x0;
  stack_value1 = 0;
  uint_ptr1 = (int32_t *)allocate_table_entry(_DAT_180c8ed18,0x10,0x13);
  
  *(int8_t *)uint_ptr1 = 0;
  stack_ptr2 = uint_ptr1;
  temp_uint1 = get_table_entry_hash(uint_ptr1);
  stack_value2 = CONCAT44(stack_value2._4_4_,temp_uint1);
  
  // 设置表项内容
  *uint_ptr1 = 0x74746162;  // "batt"
  uint_ptr1[1] = 0x6d5f656c;  // "le_m"
  uint_ptr1[2] = 0x5f6e6961;  // "ain_"
  uint_ptr1[3] = 0x737066;   // "fps"
  stack_value1 = 0xf;
  
  // 执行性能分析
  analyze_performance_data(0x74746162,temp_array1,&stack_ptr1,(int)temp_ulong1);
  stack_ptr1 = &performance_data_array;
                    // 警告: 子函数不返回
  free_table_entry(uint_ptr1);
}


// 函数: void optimized_quicksort(float *array_start,float *array_end,longlong depth,int8_t sort_flag)
// 功能: 优化的快速排序算法
// 参数: array_start - 数组起始指针，array_end - 数组结束指针，depth - 递归深度，sort_flag - 排序标志
void optimized_quicksort(float *array_start,float *array_end,longlong depth,int8_t sort_flag)

{
  float pivot1;
  float pivot2;
  ulonglong array_size;
  longlong middle_index;
  float *left_ptr;
  float *right_ptr;
  float temp_float1;
  float temp_float2;
  
  array_size = (longlong)array_end - (longlong)array_start;
  
  // 当数组足够大且递归深度大于0时使用快速排序
  while ((0x70 < (longlong)(array_size & 0xfffffffffffffffc) && (0 < depth))) {
    middle_index = (longlong)array_end - (longlong)array_start >> 2;
    if (middle_index < 0) {
      middle_index = middle_index + 1;
    }
    
    // 选择三个候选 pivot 点
    temp_float1 = *array_start;
    pivot2 = array_end[-1];
    pivot1 = array_start[middle_index >> 1];
    temp_float2 = temp_float1;
    
    // 选择中位数作为 pivot
    if (temp_float1 < pivot1) {
      temp_float2 = pivot1;
      pivot1 = temp_float1;
    }
    
    left_ptr = array_end;
    right_ptr = array_start;
    
    if ((pivot2 <= temp_float2) && (temp_float2 = pivot1, pivot1 < pivot2)) {
      temp_float2 = pivot2;
    }
    
    // 三路快速排序分区
    while( true ) {
      while (temp_float1 < temp_float2) {
        temp_float1 = right_ptr[1];
        right_ptr = right_ptr + 1;
      }
      
      left_ptr = left_ptr + -1;
      pivot2 = *left_ptr;
      
      while (temp_float2 < pivot2) {
        left_ptr = left_ptr + -1;
        pivot2 = *left_ptr;
      }
      
      if (left_ptr <= right_ptr) break;
      
      pivot2 = *right_ptr;
      *right_ptr = *left_ptr;
      *left_ptr = pivot2;
      temp_float1 = right_ptr[1];
      right_ptr = right_ptr + 1;
    }
    
    // 递归排序右半部分
    depth = depth + -1;
    optimized_quicksort(right_ptr,array_end,depth,sort_flag);
    array_size = (longlong)right_ptr - (longlong)array_start;
    array_end = right_ptr;
  }
  
  // 当递归深度用完时使用插入排序
  if (depth == 0) {
    final_insertion_sort(array_start,array_end,array_end,sort_flag);
  }
  return;
}


// 函数: void alternative_quicksort(float *array_start,float *array_end,longlong depth,int8_t sort_flag)
// 功能: 替代的快速排序实现
// 参数: array_start - 数组起始指针，array_end - 数组结束指针，depth - 递归深度，sort_flag - 排序标志
void alternative_quicksort(float *array_start,float *array_end,longlong depth,int8_t sort_flag)

{
  float pivot1;
  float pivot2;
  longlong array_base;
  ulonglong array_size;
  longlong middle_index;
  float *left_ptr;
  float *right_ptr;
  float temp_float1;
  float temp_float2;
  
  array_size = array_base - (longlong)array_start;
  
  while ((0x70 < (longlong)(array_size & 0xfffffffffffffffc) && (0 < depth))) {
    middle_index = (longlong)array_end - (longlong)array_start >> 2;
    if (middle_index < 0) {
      middle_index = middle_index + 1;
    }
    
    temp_float1 = *array_start;
    pivot2 = array_end[-1];
    pivot1 = array_start[middle_index >> 1];
    temp_float2 = temp_float1;
    
    if (temp_float1 < pivot1) {
      temp_float2 = pivot1;
      pivot1 = temp_float1;
    }
    
    left_ptr = array_end;
    right_ptr = array_start;
    
    if ((pivot2 <= temp_float2) && (temp_float2 = pivot1, pivot1 < pivot2)) {
      temp_float2 = pivot2;
    }
    
    while( true ) {
      while (temp_float1 < temp_float2) {
        temp_float1 = right_ptr[1];
        right_ptr = right_ptr + 1;
      }
      
      left_ptr = left_ptr + -1;
      pivot2 = *left_ptr;
      
      while (temp_float2 < pivot2) {
        left_ptr = left_ptr + -1;
        pivot2 = *left_ptr;
      }
      
      if (left_ptr <= right_ptr) break;
      
      pivot2 = *right_ptr;
      *right_ptr = *left_ptr;
      *left_ptr = pivot2;
      temp_float1 = right_ptr[1];
      right_ptr = right_ptr + 1;
    }
    
    depth = depth + -1;
    optimized_quicksort(right_ptr,array_end,depth,sort_flag);
    array_size = (longlong)right_ptr - (longlong)array_start;
    array_end = right_ptr;
  }
  
  if (depth == 0) {
    final_insertion_sort(array_start,array_end,array_end,sort_flag);
  }
  return;
}


// 函数: void iterative_quicksort(int32_t depth_param,float *array_end)
// 功能: 迭代式快速排序
// 参数: depth_param - 深度参数，array_end - 数组结束指针
void iterative_quicksort(int32_t depth_param,float *array_end)

{
  float pivot1;
  float pivot2;
  longlong temp_long1;
  float *left_ptr;
  float *right_ptr;
  int8_t sort_flag;
  longlong array_base;
  float *array_start;
  float temp_float1;
  float temp_float2;
  
  do {
    right_ptr = array_end;
    if (array_base < 1) break;
    
    temp_long1 = (longlong)array_end - (longlong)array_start >> 2;
    if (temp_long1 < 0) {
      temp_long1 = temp_long1 + 1;
    }
    
    temp_float1 = *array_start;
    pivot2 = array_end[-1];
    pivot1 = array_start[temp_long1 >> 1];
    temp_float2 = temp_float1;
    
    if (temp_float1 < pivot1) {
      temp_float2 = pivot1;
      pivot1 = temp_float1;
    }
    
    left_ptr = array_end;
    right_ptr = array_start;
    
    if ((pivot2 <= temp_float2) && (temp_float2 = pivot1, pivot1 < pivot2)) {
      temp_float2 = pivot2;
    }
    
    while( true ) {
      while (temp_float1 < temp_float2) {
        temp_float1 = right_ptr[1];
        right_ptr = right_ptr + 1;
      }
      
      left_ptr = left_ptr + -1;
      pivot2 = *left_ptr;
      
      while (temp_float2 < pivot2) {
        left_ptr = left_ptr + -1;
        pivot2 = *left_ptr;
      }
      
      if (left_ptr <= right_ptr) break;
      
      pivot2 = *right_ptr;
      *right_ptr = *left_ptr;
      *left_ptr = pivot2;
      temp_float1 = right_ptr[1];
      right_ptr = right_ptr + 1;
    }
    
    array_base = array_base + -1;
    depth_param = optimized_quicksort(right_ptr,array_end,array_base,sort_flag);
    array_end = right_ptr;
  } while (0x70 < (longlong)((longlong)right_ptr - (longlong)array_start & 0xfffffffffffffffcU));
  
  if (array_base == 0) {
    final_insertion_sort(depth_param,right_ptr,right_ptr,sort_flag);
  }
  return;
}


// 函数: void conditional_insertion_sort(void)
// 功能: 条件插入排序
void conditional_insertion_sort(void)

{
  longlong array_base;
  
  if (array_base == 0) {
    final_insertion_sort();
  }
  return;
}


// 函数: void direct_insertion_sort(void)
// 功能: 直接插入排序
void direct_insertion_sort(void)

{
  final_insertion_sort();
  return;
}


// 函数: void hybrid_quicksort(float *array_start,float *array_end,longlong depth,int8_t sort_flag)
// 功能: 混合快速排序算法
// 参数: array_start - 数组起始指针，array_end - 数组结束指针，depth - 递归深度，sort_flag - 排序标志
void hybrid_quicksort(float *array_start,float *array_end,longlong depth,int8_t sort_flag)

{
  float pivot1;
  float pivot2;
  ulonglong array_size;
  longlong middle_index;
  float *left_ptr;
  float *right_ptr;
  float temp_float1;
  float temp_float2;
  
  array_size = (longlong)array_end - (longlong)array_start;
  
  while ((0x70 < (longlong)(array_size & 0xfffffffffffffffc) && (0 < depth))) {
    middle_index = (longlong)array_end - (longlong)array_start >> 2;
    if (middle_index < 0) {
      middle_index = middle_index + 1;
    }
    
    temp_float1 = *array_start;
    pivot2 = array_end[-1];
    pivot1 = array_start[middle_index >> 1];
    temp_float2 = temp_float1;
    
    if (temp_float1 < pivot1) {
      temp_float2 = pivot1;
      pivot1 = temp_float1;
    }
    
    left_ptr = array_end;
    right_ptr = array_start;
    
    if ((pivot2 <= temp_float2) && (temp_float2 = pivot1, pivot1 < pivot2)) {
      temp_float2 = pivot2;
    }
    
    while( true ) {
      while (temp_float1 < temp_float2) {
        temp_float1 = right_ptr[1];
        right_ptr = right_ptr + 1;
      }
      
      left_ptr = left_ptr + -1;
      pivot2 = *left_ptr;
      
      while (temp_float2 < pivot2) {
        left_ptr = left_ptr + -1;
        pivot2 = *left_ptr;
      }
      
      if (left_ptr <= right_ptr) break;
      
      pivot2 = *right_ptr;
      *right_ptr = *left_ptr;
      *left_ptr = pivot2;
      temp_float1 = right_ptr[1];
      right_ptr = right_ptr + 1;
    }
    
    depth = depth + -1;
    hybrid_quicksort(right_ptr,array_end,depth,sort_flag);
    array_size = (longlong)right_ptr - (longlong)array_start;
    array_end = right_ptr;
  }
  
  if (depth == 0) {
    enhanced_final_sort(array_start,array_end,array_end,sort_flag);
  }
  return;
}


// 函数: void alternative_hybrid_quicksort(float *array_start,float *array_end,longlong depth,int8_t sort_flag)
// 功能: 替代的混合快速排序实现
// 参数: array_start - 数组起始指针，array_end - 数组结束指针，depth - 递归深度，sort_flag - 排序标志
void alternative_hybrid_quicksort(float *array_start,float *array_end,longlong depth,int8_t sort_flag)

{
  float pivot1;
  float pivot2;
  longlong array_base;
  ulonglong array_size;
  longlong middle_index;
  float *left_ptr;
  float *right_ptr;
  float temp_float1;
  float temp_float2;
  
  array_size = array_base - (longlong)array_start;
  
  while ((0x70 < (longlong)(array_size & 0xfffffffffffffffc) && (0 < depth))) {
    middle_index = (longlong)array_end - (longlong)array_start >> 2;
    if (middle_index < 0) {
      middle_index = middle_index + 1;
    }
    
    temp_float1 = *array_start;
    pivot2 = array_end[-1];
    pivot1 = array_start[middle_index >> 1];
    temp_float2 = temp_float1;
    
    if (temp_float1 < pivot1) {
      temp_float2 = pivot1;
      pivot1 = temp_float1;
    }
    
    left_ptr = array_end;
    right_ptr = array_start;
    
    if ((pivot2 <= temp_float2) && (temp_float2 = pivot1, pivot1 < pivot2)) {
      temp_float2 = pivot2;
    }
    
    while( true ) {
      while (temp_float1 < temp_float2) {
        temp_float1 = right_ptr[1];
        right_ptr = right_ptr + 1;
      }
      
      left_ptr = left_ptr + -1;
      pivot2 = *left_ptr;
      
      while (temp_float2 < pivot2) {
        left_ptr = left_ptr + -1;
        pivot2 = *left_ptr;
      }
      
      if (left_ptr <= right_ptr) break;
      
      pivot2 = *right_ptr;
      *right_ptr = *left_ptr;
      *left_ptr = pivot2;
      temp_float1 = right_ptr[1];
      right_ptr = right_ptr + 1;
    }
    
    depth = depth + -1;
    hybrid_quicksort(right_ptr,array_end,depth,sort_flag);
    array_size = (longlong)right_ptr - (longlong)array_start;
    array_end = right_ptr;
  }
  
  if (depth == 0) {
    enhanced_final_sort(array_start,array_end,array_end,sort_flag);
  }
  return;
}


// 函数: void FUN_180202180(longlong param_1)
// 功能: 处理浮点数数组排序和统计计算
// 原始实现: 处理浮点数数组的快速排序和移动平均统计计算
// 简化实现: 保留原始的排序算法和统计计算逻辑
void process_float_array_sorting_and_statistics(longlong param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  int8_t auVar5 [16];
  int8_t auVar6 [16];
  int8_t auVar7 [16];
  int8_t auVar8 [16];
  int8_t auVar9 [16];
  int8_t auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  float *pfVar21;
  longlong lVar22;
  longlong lVar23;
  float *pfVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  
  // 处理第一个浮点数数组的排序
  pfVar24 = *(float **)(param_1 + 0x70);
  uVar18 = 0;
  pfVar4 = *(float **)(param_1 + 0x68);
  uVar20 = 0;
  if (pfVar4 != pfVar24) {
    lVar23 = (longlong)pfVar24 - (longlong)pfVar4 >> 2;
    uVar26 = uVar18;
    uVar19 = uVar20;
    for (lVar16 = lVar23; lVar16 != 0; lVar16 = lVar16 >> 1) {
      uVar19 = (int)uVar26 + 1;
      uVar26 = (ulonglong)uVar19;
    }
    FUN_180202d20(pfVar4,pfVar24,(longlong)(int)(uVar19 - 1) * 2,0);
    if (lVar23 < 0x1d) {
      func_0x00018009d8a0(pfVar4,pfVar24);
    }
    else {
      pfVar21 = pfVar4 + 0x1c;
      func_0x00018009d8a0(pfVar4);
      for (; pfVar21 != pfVar24; pfVar21 = pfVar21 + 1) {
        fVar2 = *pfVar21;
        fVar1 = pfVar21[-1];
        pfVar4 = pfVar21;
        while (fVar2 < fVar1) {
          *pfVar4 = fVar1;
          fVar1 = pfVar4[-2];
          pfVar4 = pfVar4 + -1;
        }
        *pfVar4 = fVar2;
      }
    }
  }
  
  // 处理第二个浮点数数组的排序
  pfVar24 = *(float **)(param_1 + 0x90);
  pfVar4 = *(float **)(param_1 + 0x88);
  if (pfVar4 != pfVar24) {
    lVar23 = (longlong)pfVar24 - (longlong)pfVar4 >> 2;
    uVar26 = uVar18;
    for (lVar16 = lVar23; lVar16 != 0; lVar16 = lVar16 >> 1) {
      uVar20 = (int)uVar26 + 1;
      uVar26 = (ulonglong)uVar20;
    }
    FUN_180202d20(pfVar4,pfVar24,(longlong)(int)(uVar20 - 1) * 2,0);
    if (lVar23 < 0x1d) {
      func_0x00018009d8a0(pfVar4,pfVar24);
    }
    else {
      pfVar21 = pfVar4 + 0x1c;
      func_0x00018009d8a0(pfVar4);
      for (; pfVar21 != pfVar24; pfVar21 = pfVar21 + 1) {
        fVar2 = *pfVar21;
        fVar1 = pfVar21[-1];
        pfVar4 = pfVar21;
        while (fVar2 < fVar1) {
          *pfVar4 = fVar1;
          fVar1 = pfVar4[-2];
          pfVar4 = pfVar4 + -1;
        }
        *pfVar4 = fVar2;
      }
    }
  }
  
  // 计算第一个数组的统计信息
  pfVar24 = *(float **)(param_1 + 0x68);
  dVar28 = 0.0;
  dVar32 = 0.0;
  dVar27 = 0.0;
  uVar26 = *(longlong *)(param_1 + 0x70) - (longlong)pfVar24 >> 2;
  dVar29 = 0.0;
  dVar12 = 0.0;
  dVar31 = 0.0;
  dVar14 = 0.0;
  if (uVar26 != 0) {
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar26;
    lVar16 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar5,8);
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar26 * 0xf;
    lVar23 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar6,8);
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar26 * 0x1e;
    lVar22 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar7,8);
    uVar17 = uVar18;
    uVar25 = uVar18;
    dVar32 = 0.0;
    dVar12 = 0.0;
    dVar14 = 0.0;
    do {
      if ((longlong)uVar17 < (longlong)(int)((uVar26 - lVar16 >> 1) + lVar16 >> 6)) {
        dVar27 = dVar27 + 1.0;
        dVar32 = dVar32 + (double)*pfVar24;
      }
      if ((longlong)uVar17 < (longlong)(int)((uVar26 * 0xf - lVar23 >> 1) + lVar23 >> 6)) {
        dVar12 = dVar12 + 1.0;
        dVar29 = dVar29 + (double)*pfVar24;
      }
      if ((longlong)uVar17 < (longlong)(int)((uVar26 * 0x1e - lVar22 >> 1) + lVar22 >> 6)) {
        dVar14 = dVar14 + 1.0;
        dVar31 = dVar31 + (double)*pfVar24;
      }
      uVar20 = (int)uVar25 + 1;
      uVar25 = (ulonglong)uVar20;
      uVar17 = uVar17 + 1;
      pfVar24 = pfVar24 + 1;
    } while ((ulonglong)(longlong)(int)uVar20 < uVar26);
  }
  
  // 更新移动平均统计值
  iVar3 = *(int *)(param_1 + 0xdc);
  dVar13 = 0.0;
  dVar15 = 1.0 / (double)iVar3;
  dVar11 = 0.0;
  dVar33 = (double)(iVar3 + -1);
  dVar30 = 0.0;
  *(double *)(param_1 + 0xf0) =
       ((1.0 / dVar27) * dVar32 + dVar33 * *(double *)(param_1 + 0xf0)) * dVar15;
  dVar32 = 0.0;
  *(double *)(param_1 + 0xf8) = (dVar33 * *(double *)(param_1 + 0xf8) + dVar29 / dVar12) * dVar15;
  *(double *)(param_1 + 0x100) = (dVar33 * *(double *)(param_1 + 0x100) + dVar31 / dVar14) * dVar15;
  
  // 计算第二个数组的统计信息
  pfVar24 = *(float **)(param_1 + 0x88);
  uVar26 = *(longlong *)(param_1 + 0x90) - (longlong)pfVar24 >> 2;
  if (uVar26 != 0) {
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar26;
    lVar16 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar8,8);
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar26 * 0xf;
    lVar23 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar9,8);
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar26 * 0x1e;
    lVar22 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar10,8);
    uVar17 = uVar18;
    dVar11 = 0.0;
    dVar13 = 0.0;
    do {
      if ((longlong)uVar18 < (longlong)(int)((uVar26 - lVar16 >> 1) + lVar16 >> 6)) {
        dVar28 = dVar28 + (double)*pfVar24;
      }
      if ((longlong)uVar18 < (longlong)(int)((uVar26 * 0xf - lVar23 >> 1) + lVar23 >> 6)) {
        dVar11 = dVar11 + 1.0;
        dVar30 = dVar30 + (double)*pfVar24;
      }
      if ((longlong)uVar18 < (longlong)(int)((uVar26 * 0x1e - lVar22 >> 1) + lVar22 >> 6)) {
        dVar13 = dVar13 + 1.0;
        dVar32 = dVar32 + (double)*pfVar24;
      }
      uVar20 = (int)uVar17 + 1;
      uVar17 = (ulonglong)uVar20;
      uVar18 = uVar18 + 1;
      pfVar24 = pfVar24 + 1;
    } while ((ulonglong)(longlong)(int)uVar20 < uVar26);
  }
  
  // 更新最终的统计结果
  *(int *)(param_1 + 0xdc) = iVar3 + 1;
  *(double *)(param_1 + 0x108) =
       (dVar33 * *(double *)(param_1 + 0x108) + (1.0 / dVar27) * dVar28) * dVar15;
  *(double *)(param_1 + 0x110) = (dVar33 * *(double *)(param_1 + 0x110) + dVar30 / dVar11) * dVar15;
  *(double *)(param_1 + 0x118) = (dVar33 * *(double *)(param_1 + 0x118) + dVar32 / dVar13) * dVar15;
  *(double *)(param_1 + 0xe0) =
       (dVar33 * *(double *)(param_1 + 0xe0) + *(double *)(param_1 + 0xc0)) * dVar15;
  *(double *)(param_1 + 0xe8) =
       (dVar33 * *(double *)(param_1 + 0xe8) + *(double *)(param_1 + 0xb8)) * dVar15;
  return;
}


// 函数: void FUN_1802021bc(void)
// 功能: 处理浮点数数组排序和统计计算的变种版本
// 原始实现: 类似于第一个函数，但使用不同的寄存器和参数传递方式
// 简化实现: 保留原始的排序算法和统计计算逻辑
void process_float_array_sorting_and_statistics_variant(void)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  int8_t auVar5 [16];
  int8_t auVar6 [16];
  int8_t auVar7 [16];
  int8_t auVar8 [16];
  int8_t auVar9 [16];
  int8_t auVar10 [16];
  double dVar11;
  longlong in_RAX;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  float *pfVar15;
  float *pfVar16;
  longlong lVar17;
  float *unaff_RBX;
  uint64_t unaff_RBP;
  longlong lVar18;
  ulonglong unaff_RSI;
  float *unaff_RDI;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong unaff_R14;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  int32_t unaff_XMM8_Da;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM8_Dd;
  double dVar30;
  double dVar31;
  
  // 保存寄存器状态
  *(uint64_t *)(in_RAX + 8) = unaff_RBP;
  *(int32_t *)(in_RAX + -0x38) = unaff_XMM8_Da;
  *(int32_t *)(in_RAX + -0x34) = unaff_XMM8_Db;
  *(int32_t *)(in_RAX + -0x30) = unaff_XMM8_Dc;
  *(int32_t *)(in_RAX + -0x2c) = unaff_XMM8_Dd;
  uVar14 = (uint)unaff_RSI;
  
  // 处理第一个浮点数数组的排序
  if (unaff_RDI != unaff_RBX) {
    lVar18 = (longlong)unaff_RBX - (longlong)unaff_RDI >> 2;
    for (lVar12 = lVar18; lVar12 != 0; lVar12 = lVar12 >> 1) {
    }
    FUN_180202d20();
    if (lVar18 < 0x1d) {
      func_0x00018009d8a0();
    }
    else {
      pfVar15 = unaff_RDI + 0x1c;
      func_0x00018009d8a0();
      for (; pfVar15 != unaff_RBX; pfVar15 = pfVar15 + 1) {
        fVar2 = *pfVar15;
        fVar1 = pfVar15[-1];
        pfVar4 = pfVar15;
        while (fVar2 < fVar1) {
          *pfVar4 = fVar1;
          fVar1 = pfVar4[-2];
          pfVar4 = pfVar4 + -1;
        }
        *pfVar4 = fVar2;
      }
    }
  }
  
  // 处理第二个浮点数数组的排序
  pfVar15 = *(float **)(unaff_R14 + 0x90);
  pfVar4 = *(float **)(unaff_R14 + 0x88);
  if (pfVar4 != pfVar15) {
    uVar19 = unaff_RSI & 0xffffffff;
    lVar18 = (longlong)pfVar15 - (longlong)pfVar4 >> 2;
    for (lVar12 = lVar18; lVar12 != 0; lVar12 = lVar12 >> 1) {
      uVar14 = (int)uVar19 + 1;
      uVar19 = (ulonglong)uVar14;
    }
    FUN_180202d20(pfVar4,pfVar15,(longlong)(int)(uVar14 - 1) * 2,0);
    if (lVar18 < 0x1d) {
      func_0x00018009d8a0(pfVar4,pfVar15);
    }
    else {
      pfVar16 = pfVar4 + 0x1c;
      func_0x00018009d8a0(pfVar4);
      for (; pfVar16 != pfVar15; pfVar16 = pfVar16 + 1) {
        fVar2 = *pfVar16;
        fVar1 = pfVar16[-1];
        pfVar4 = pfVar16;
        while (fVar2 < fVar1) {
          *pfVar4 = fVar1;
          fVar1 = pfVar4[-2];
          pfVar4 = pfVar4 + -1;
        }
        *pfVar4 = fVar2;
      }
    }
  }
  
  // 计算第一个数组的统计信息
  pfVar15 = *(float **)(unaff_R14 + 0x68);
  dVar22 = 0.0;
  dVar26 = 0.0;
  dVar21 = 0.0;
  uVar20 = *(longlong *)(unaff_R14 + 0x70) - (longlong)pfVar15 >> 2;
  dVar23 = 0.0;
  dVar28 = 0.0;
  dVar25 = 0.0;
  dVar11 = 0.0;
  uVar19 = unaff_RSI & 0xffffffff;
  if (uVar20 != 0) {
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar20;
    lVar12 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar5,8);
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar20 * 0xf;
    lVar18 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar6,8);
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar20 * 0x1e;
    lVar17 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar7,8);
    uVar13 = unaff_RSI;
    dVar11 = 0.0;
    do {
      if ((longlong)uVar13 < (longlong)(int)((uVar20 - lVar12 >> 1) + lVar12 >> 6)) {
        dVar21 = dVar21 + 1.0;
        dVar26 = dVar26 + (double)*pfVar15;
      }
      if ((longlong)uVar13 < (longlong)(int)((uVar20 * 0xf - lVar18 >> 1) + lVar18 >> 6)) {
        dVar28 = dVar28 + 1.0;
        dVar23 = dVar23 + (double)*pfVar15;
      }
      if ((longlong)uVar13 < (longlong)(int)((uVar20 * 0x1e - lVar17 >> 1) + lVar17 >> 6)) {
        dVar11 = dVar11 + 1.0;
        dVar25 = dVar25 + (double)*pfVar15;
      }
      uVar14 = (int)uVar19 + 1;
      uVar19 = (ulonglong)uVar14;
      uVar13 = uVar13 + 1;
      pfVar15 = pfVar15 + 1;
    } while ((ulonglong)(longlong)(int)uVar14 < uVar20);
  }
  
  // 更新移动平均统计值
  iVar3 = *(int *)(unaff_R14 + 0xdc);
  dVar29 = 0.0;
  dVar31 = 1.0 / (double)iVar3;
  dVar27 = 0.0;
  dVar30 = (double)(iVar3 + -1);
  dVar24 = 0.0;
  *(double *)(unaff_R14 + 0xf0) =
       ((1.0 / dVar21) * dVar26 + dVar30 * *(double *)(unaff_R14 + 0xf0)) * dVar31;
  dVar26 = 0.0;
  *(double *)(unaff_R14 + 0xf8) =
       (dVar30 * *(double *)(unaff_R14 + 0xf8) + dVar23 / dVar28) * dVar31;
  *(double *)(unaff_R14 + 0x100) =
       (dVar30 * *(double *)(unaff_R14 + 0x100) + dVar25 / dVar11) * dVar31;
  
  // 计算第二个数组的统计信息
  pfVar15 = *(float **)(unaff_R14 + 0x88);
  uVar19 = *(longlong *)(unaff_R14 + 0x90) - (longlong)pfVar15 >> 2;
  if (uVar19 != 0) {
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar19;
    lVar12 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar8,8);
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar19 * 0xf;
    lVar18 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar9,8);
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar19 * 0x1e;
    lVar17 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar10,8);
    uVar20 = unaff_RSI;
    do {
      if ((longlong)unaff_RSI < (longlong)(int)((uVar19 - lVar12 >> 1) + lVar12 >> 6)) {
        dVar22 = dVar22 + (double)*pfVar15;
      }
      if ((longlong)unaff_RSI < (longlong)(int)((uVar19 * 0xf - lVar18 >> 1) + lVar18 >> 6)) {
        dVar27 = dVar27 + 1.0;
        dVar24 = dVar24 + (double)*pfVar15;
      }
      if ((longlong)unaff_RSI < (longlong)(int)((uVar19 * 0x1e - lVar17 >> 1) + lVar17 >> 6)) {
        dVar29 = dVar29 + 1.0;
        dVar26 = dVar26 + (double)*pfVar15;
      }
      uVar14 = (int)uVar20 + 1;
      uVar20 = (ulonglong)uVar14;
      unaff_RSI = unaff_RSI + 1;
      pfVar15 = pfVar15 + 1;
    } while ((ulonglong)(longlong)(int)uVar14 < uVar19);
  }
  
  // 更新最终的统计结果
  *(int *)(unaff_R14 + 0xdc) = iVar3 + 1;
  *(double *)(unaff_R14 + 0x108) =
       (dVar30 * *(double *)(unaff_R14 + 0x108) + (1.0 / dVar21) * dVar22) * dVar31;
  *(double *)(unaff_R14 + 0x110) =
       (dVar30 * *(double *)(unaff_R14 + 0x110) + dVar24 / dVar27) * dVar31;
  *(double *)(unaff_R14 + 0x118) =
       (dVar30 * *(double *)(unaff_R14 + 0x118) + dVar26 / dVar29) * dVar31;
  *(double *)(unaff_R14 + 0xe0) =
       (dVar30 * *(double *)(unaff_R14 + 0xe0) + *(double *)(unaff_R14 + 0xc0)) * dVar31;
  *(double *)(unaff_R14 + 0xe8) =
       (dVar30 * *(double *)(unaff_R14 + 0xe8) + *(double *)(unaff_R14 + 0xb8)) * dVar31;
  return;
}