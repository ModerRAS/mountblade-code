#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part232_sub002.c - 核心引擎模块第232部分子002代码

// 函数: 快速排序实现
// 功能: 对浮点数数组进行快速排序
// 参数:
//   param_1: 未使用的参数
//   param_2: 待排序的浮点数数组指针
void quick_sort_float_array(int32_t param_1, float *param_2)
{
  float pivot_value;
  float temp_value;
  longlong middle_index;
  float *left_ptr;
  float *right_ptr;
  int8_t temp_byte;
  longlong array_size;
  float *array_start;
  float left_value;
  float right_value;
  
  do {
    right_ptr = param_2;
    if (array_size < 1) break;
    middle_index = (longlong)param_2 - (longlong)array_start >> 2;
    if (middle_index < 0) {
      middle_index = middle_index + 1;
    }
    pivot_value = *array_start;
    left_value = param_2[-1];
    temp_value = array_start[middle_index >> 1];
    right_value = pivot_value;
    if (pivot_value < temp_value) {
      right_value = temp_value;
      temp_value = pivot_value;
    }
    left_ptr = param_2;
    right_ptr = array_start;
    if ((left_value <= right_value) && (right_value = temp_value, temp_value < left_value)) {
      right_value = left_value;
    }
    while( true ) {
      while (pivot_value < right_value) {
        pivot_value = right_ptr[1];
        right_ptr = right_ptr + 1;
      }
      left_ptr = left_ptr + -1;
      left_value = *left_ptr;
      while (right_value < left_value) {
        left_ptr = left_ptr + -1;
        left_value = *left_ptr;
      }
      if (left_ptr <= right_ptr) break;
      left_value = *right_ptr;
      *right_ptr = *left_ptr;
      *left_ptr = left_value;
      pivot_value = right_ptr[1];
      right_ptr = right_ptr + 1;
    }
    array_size = array_size + -1;
    param_1 = partition_array(right_ptr, param_2, array_size, temp_byte);
    param_2 = right_ptr;
  } while (0x70 < (longlong)((longlong)right_ptr - (longlong)array_start & 0xfffffffffffffffcU));
  if (array_size == 0) {
    finalize_sorting(param_1, right_ptr, right_ptr, temp_byte);
  }
  return;
}