#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part215.c - 堆排序相关实现

/**
 * 堆排序函数 - 对数组进行堆排序
 * @param array 待排序的数组
 * @param begin 数组起始位置
 * @param end 数组结束位置
 */
void heap_sort_array(undefined8 *array, undefined8 *begin, undefined8 *end)
{
  undefined8 temp_value;
  char comparison_result;
  longlong array_size;
  longlong heap_size;
  longlong parent_index;
  longlong child_index;
  longlong swap_index;
  undefined8 *current_ptr;
  longlong index;
  bool is_leaf;
  undefined4 temp_low;
  undefined4 temp_high;
  undefined4 stack_temp_20;
  undefined4 stack_temp_24;
  
  array_size = (longlong)begin - (longlong)array >> 3;
  if (1 < array_size) {
    parent_index = (array_size + -2 >> 1) + 1;
    heap_size = parent_index * 2 + 2;
    do {
      temp_value = array[parent_index + -1];
      parent_index = parent_index + -1;
      heap_size = heap_size + -2;
      index = parent_index;
      for (child_index = heap_size; child_index < array_size; child_index = child_index * 2 + 2) {
        comparison_result = func_0x00018018e0d0(array[child_index], array[child_index + -1]);
        if (comparison_result != '\0') {
          child_index = child_index + -1;
        }
        *(undefined4 *)(array + index) = *(undefined4 *)(array + child_index);
        *(undefined4 *)((longlong)array + index * 8 + 4) =
             *(undefined4 *)((longlong)array + child_index * 8 + 4);
        index = child_index;
      }
      if (child_index == array_size) {
        *(undefined4 *)(array + index) = *(undefined4 *)(array + child_index + -1);
        *(undefined4 *)((longlong)array + index * 8 + 4) =
             *(undefined4 *)((longlong)array + child_index * 8 + -4);
        index = child_index + -1;
      }
      while (parent_index < index) {
        child_index = index + -1 >> 1;
        comparison_result = func_0x00018018e0d0(array[child_index], temp_value);
        if (comparison_result == '\0') break;
        *(undefined4 *)(array + index) = *(undefined4 *)(array + child_index);
        *(undefined4 *)((longlong)array + index * 8 + 4) =
             *(undefined4 *)((longlong)array + child_index * 8 + 4);
        index = child_index;
      }
      stack_temp_20 = (undefined4)temp_value;
      stack_temp_24 = (undefined4)((ulonglong)temp_value >> 0x20);
      *(undefined4 *)(array + index) = stack_temp_20;
      *(undefined4 *)((longlong)array + index * 8 + 4) = stack_temp_24;
    } while (parent_index != 0);
  }
  current_ptr = begin;
  if (begin < end) {
    do {
      comparison_result = func_0x00018018e0d0(*current_ptr, *array);
      if (comparison_result != '\0') {
        temp_value = *current_ptr;
        heap_size = 0;
        parent_index = 2;
        *(undefined4 *)current_ptr = *(undefined4 *)array;
        *(undefined4 *)((longlong)current_ptr + 4) = *(undefined4 *)((longlong)array + 4);
        is_leaf = array_size == 2;
        index = heap_size;
        if (2 < array_size) {
          do {
            comparison_result = func_0x00018018e0d0(array[parent_index], array[parent_index + -1]);
            heap_size = parent_index;
            if (comparison_result != '\0') {
              heap_size = parent_index + -1;
            }
            *(undefined4 *)(array + index) = *(undefined4 *)(array + heap_size);
            *(undefined4 *)((longlong)array + index * 8 + 4) =
                 *(undefined4 *)((longlong)array + heap_size * 8 + 4);
            parent_index = heap_size * 2 + 2;
            is_leaf = parent_index == array_size;
            index = heap_size;
          } while (parent_index < array_size);
        }
        if (is_leaf) {
          *(undefined4 *)(array + heap_size) = *(undefined4 *)(array + parent_index + -1);
          *(undefined4 *)((longlong)array + heap_size * 8 + 4) =
               *(undefined4 *)((longlong)array + parent_index * 8 + -4);
          heap_size = parent_index + -1;
        }
        while (0 < heap_size) {
          parent_index = heap_size + -1 >> 1;
          comparison_result = func_0x00018018e0d0(array[parent_index], temp_value);
          if (comparison_result == '\0') break;
          *(undefined4 *)(array + heap_size) = *(undefined4 *)(array + parent_index);
          *(undefined4 *)((longlong)array + heap_size * 8 + 4) =
               *(undefined4 *)((longlong)array + parent_index * 8 + 4);
          heap_size = parent_index;
        }
        stack_temp_20 = (undefined4)temp_value;
        stack_temp_24 = (undefined4)((ulonglong)temp_value >> 0x20);
        *(undefined4 *)(array + heap_size) = stack_temp_20;
        *(undefined4 *)((longlong)array + heap_size * 8 + 4) = stack_temp_24;
      }
      current_ptr = current_ptr + 1;
    } while (current_ptr < end);
  }
  if (1 < array_size) {
    begin = begin + -1;
    do {
      temp_value = *begin;
      array_size = array_size + -1;
      heap_size = 0;
      parent_index = 2;
      *(undefined4 *)begin = *(undefined4 *)array;
      *(undefined4 *)((longlong)begin + 4) = *(undefined4 *)((longlong)array + 4);
      is_leaf = array_size == 2;
      index = heap_size;
      if (2 < array_size) {
        do {
          comparison_result = func_0x00018018e0d0(array[parent_index], array[parent_index + -1]);
          heap_size = parent_index;
          if (comparison_result != '\0') {
            heap_size = parent_index + -1;
          }
          *(undefined4 *)(array + index) = *(undefined4 *)(array + heap_size);
          *(undefined4 *)((longlong)array + index * 8 + 4) =
               *(undefined4 *)((longlong)array + heap_size * 8 + 4);
          parent_index = heap_size * 2 + 2;
          is_leaf = parent_index == array_size;
          index = heap_size;
        } while (parent_index < array_size);
      }
      if (is_leaf) {
        *(undefined4 *)(array + heap_size) = *(undefined4 *)(array + parent_index + -1);
        *(undefined4 *)((longlong)array + heap_size * 8 + 4) =
             *(undefined4 *)((longlong)array + parent_index * 8 + -4);
        heap_size = parent_index + -1;
      }
      while (0 < heap_size) {
        array_size = heap_size + -1 >> 1;
        comparison_result = func_0x00018018e0d0(array[array_size], temp_value);
        if (comparison_result == '\0') break;
        *(undefined4 *)(array + heap_size) = *(undefined4 *)(array + array_size);
        *(undefined4 *)((longlong)array + heap_size * 8 + 4) =
             *(undefined4 *)((longlong)array + array_size * 8 + 4);
        heap_size = array_size;
      }
      temp_high = (undefined4)((ulonglong)temp_value >> 0x20);
      begin = begin + -1;
      temp_low = (undefined4)temp_value;
      *(undefined4 *)((longlong)array + heap_size * 8 + 4) = temp_high;
      *(undefined4 *)(array + heap_size) = temp_low;
      array_size = (8 - (longlong)array) + (longlong)begin >> 3;
    } while (1 < array_size);
  }
  return;
}

/**
 * 堆排序函数变体 - 对指定范围的数组进行堆排序
 * @param array 待排序的数组
 * @param range_start 范围起始位置
 * @param range_end 范围结束位置
 */
void heap_sort_range(undefined8 *array, undefined8 *range_start, undefined8 *range_end)
{
  undefined8 temp_value;
  char comparison_result;
  longlong index;
  longlong child_index;
  longlong heap_size;
  longlong parent_index;
  undefined8 *current_ptr;
  longlong range_size;
  longlong array_size;
  bool is_leaf;
  undefined4 stack_temp_68;
  undefined4 stack_temp_6c;
  undefined4 stack_temp_78;
  undefined4 stack_temp_7c;
  
  array_size = range_size - (longlong)array >> 3;
  current_ptr = range_start;
  if (1 < array_size) {
    parent_index = (array_size + -2 >> 1) + 1;
    heap_size = parent_index * 2 + 2;
    do {
      temp_value = array[parent_index + -1];
      parent_index = parent_index + -1;
      heap_size = heap_size + -2;
      index = parent_index;
      for (child_index = heap_size; child_index < array_size; child_index = child_index * 2 + 2) {
        comparison_result = func_0x00018018e0d0(array[child_index], array[child_index + -1]);
        if (comparison_result != '\0') {
          child_index = child_index + -1;
        }
        *(undefined4 *)(array + index) = *(undefined4 *)(array + child_index);
        *(undefined4 *)((longlong)array + index * 8 + 4) =
             *(undefined4 *)((longlong)array + child_index * 8 + 4);
        index = child_index;
      }
      if (child_index == array_size) {
        *(undefined4 *)(array + index) = *(undefined4 *)(array + child_index + -1);
        *(undefined4 *)((longlong)array + index * 8 + 4) =
             *(undefined4 *)((longlong)array + child_index * 8 + -4);
        index = child_index + -1;
      }
      while (parent_index < index) {
        child_index = index + -1 >> 1;
        comparison_result = func_0x00018018e0d0(array[child_index], temp_value);
        if (comparison_result == '\0') break;
        *(undefined4 *)(array + index) = *(undefined4 *)(array + child_index);
        *(undefined4 *)((longlong)array + index * 8 + 4) =
             *(undefined4 *)((longlong)array + child_index * 8 + 4);
        index = child_index;
      }
      stack_temp_78 = (undefined4)temp_value;
      stack_temp_7c = (undefined4)((ulonglong)temp_value >> 0x20);
      *(undefined4 *)(array + index) = stack_temp_78;
      *(undefined4 *)((longlong)array + index * 8 + 4) = stack_temp_7c;
      range_start = _uStack0000000000000068;
      current_ptr = _uStack0000000000000068;
    } while (parent_index != 0);
  }
  for (; range_start < range_end; range_start = range_start + 1) {
    comparison_result = func_0x00018018e0d0(*range_start, *array);
    if (comparison_result != '\0') {
      temp_value = *range_start;
      heap_size = 0;
      parent_index = 2;
      *(undefined4 *)range_start = *(undefined4 *)array;
      *(undefined4 *)((longlong)range_start + 4) = *(undefined4 *)((longlong)array + 4);
      is_leaf = array_size == 2;
      index = heap_size;
      if (2 < array_size) {
        do {
          comparison_result = func_0x00018018e0d0(array[parent_index], array[parent_index + -1]);
          heap_size = parent_index;
          if (comparison_result != '\0') {
            heap_size = parent_index + -1;
          }
          *(undefined4 *)(array + index) = *(undefined4 *)(array + heap_size);
          *(undefined4 *)((longlong)array + index * 8 + 4) =
               *(undefined4 *)((longlong)array + heap_size * 8 + 4);
          parent_index = heap_size * 2 + 2;
          is_leaf = parent_index == array_size;
          index = heap_size;
        } while (parent_index < array_size);
      }
      if (is_leaf) {
        *(undefined4 *)(array + heap_size) = *(undefined4 *)(array + parent_index + -1);
        *(undefined4 *)((longlong)array + heap_size * 8 + 4) =
             *(undefined4 *)((longlong)array + parent_index * 8 + -4);
        heap_size = parent_index + -1;
      }
      while (0 < heap_size) {
        parent_index = heap_size + -1 >> 1;
        comparison_result = func_0x00018018e0d0(array[parent_index], temp_value);
        if (comparison_result == '\0') break;
        *(undefined4 *)(array + heap_size) = *(undefined4 *)(array + parent_index);
        *(undefined4 *)((longlong)array + heap_size * 8 + 4) =
             *(undefined4 *)((longlong)array + parent_index * 8 + 4);
        heap_size = parent_index;
      }
      stack_temp_78 = (undefined4)temp_value;
      stack_temp_7c = (undefined4)((ulonglong)temp_value >> 0x20);
      *(undefined4 *)(array + heap_size) = stack_temp_78;
      *(undefined4 *)((longlong)array + heap_size * 8 + 4) = stack_temp_7c;
    }
    current_ptr = _uStack0000000000000068;
  }
  if (1 < array_size) {
    current_ptr = current_ptr + -1;
    do {
      temp_value = *current_ptr;
      array_size = array_size + -1;
      heap_size = 0;
      parent_index = 2;
      *(undefined4 *)current_ptr = *(undefined4 *)array;
      *(undefined4 *)((longlong)current_ptr + 4) = *(undefined4 *)((longlong)array + 4);
      is_leaf = array_size == 2;
      index = heap_size;
      if (2 < array_size) {
        do {
          comparison_result = func_0x00018018e0d0(array[parent_index], array[parent_index + -1]);
          heap_size = parent_index;
          if (comparison_result != '\0') {
            heap_size = parent_index + -1;
          }
          *(undefined4 *)(array + index) = *(undefined4 *)(array + heap_size);
          *(undefined4 *)((longlong)array + index * 8 + 4) =
               *(undefined4 *)((longlong)array + heap_size * 8 + 4);
          parent_index = heap_size * 2 + 2;
          is_leaf = parent_index == array_size;
          index = heap_size;
        } while (parent_index < array_size);
      }
      if (is_leaf) {
        *(undefined4 *)(array + heap_size) = *(undefined4 *)(array + parent_index + -1);
        *(undefined4 *)((longlong)array + heap_size * 8 + 4) =
             *(undefined4 *)((longlong)array + parent_index * 8 + -4);
        heap_size = parent_index + -1;
      }
      while (0 < heap_size) {
        array_size = heap_size + -1 >> 1;
        comparison_result = func_0x00018018e0d0(array[array_size], temp_value);
        if (comparison_result == '\0') break;
        *(undefined4 *)(array + heap_size) = *(undefined4 *)(array + array_size);
        *(undefined4 *)((longlong)array + heap_size * 8 + 4) =
             *(undefined4 *)((longlong)array + array_size * 8 + 4);
        heap_size = array_size;
      }
      stack_temp_6c = (undefined4)((ulonglong)temp_value >> 0x20);
      current_ptr = current_ptr + -1;
      stack_temp_68 = (undefined4)temp_value;
      *(undefined4 *)((longlong)array + heap_size * 8 + 4) = stack_temp_6c;
      *(undefined4 *)(array + heap_size) = stack_temp_68;
      array_size = (8 - (longlong)array) + (longlong)current_ptr >> 3;
    } while (1 < array_size);
  }
  return;
}

/**
 * 堆排序优化函数 - 优化的堆排序实现
 * 该函数使用寄存器变量优化性能
 */
void heap_sort_optimized(void)
{
  undefined8 temp_value;
  char comparison_result;
  longlong base_address;
  longlong index;
  longlong child_index;
  longlong heap_size;
  longlong parent_index;
  undefined4 *heap_root;
  undefined8 *current_ptr;
  longlong heap_capacity;
  longlong current_size;
  bool is_leaf;
  undefined4 stack_temp_68;
  undefined4 stack_temp_6c;
  
  current_ptr = (undefined8 *)(base_address + -8);
  do {
    temp_value = *current_ptr;
    current_size = heap_capacity + -1;
    heap_size = 0;
    child_index = 2;
    *(undefined4 *)current_ptr = *heap_root;
    *(undefined4 *)((longlong)current_ptr + 4) = heap_root[1];
    is_leaf = current_size == 2;
    index = heap_size;
    _uStack0000000000000068 = temp_value;
    if (2 < current_size) {
      do {
        comparison_result = func_0x00018018e0d0(*(undefined8 *)(heap_root + child_index * 2),
                                    *(undefined8 *)(heap_root + child_index * 2 + -2));
        heap_size = child_index;
        if (comparison_result != '\0') {
          heap_size = child_index + -1;
        }
        heap_root[index * 2] = heap_root[heap_size * 2];
        heap_root[index * 2 + 1] = heap_root[heap_size * 2 + 1];
        child_index = heap_size * 2 + 2;
        is_leaf = child_index == current_size;
        index = heap_size;
      } while (child_index < current_size);
    }
    if (is_leaf) {
      heap_root[heap_size * 2] = heap_root[child_index * 2 + -2];
      heap_root[heap_size * 2 + 1] = heap_root[child_index * 2 + -1];
      heap_size = child_index + -1;
    }
    while (0 < heap_size) {
      child_index = heap_size + -1 >> 1;
      comparison_result = func_0x00018018e0d0(*(undefined8 *)(heap_root + child_index * 2), temp_value);
      if (comparison_result == '\0') break;
      heap_root[heap_size * 2] = heap_root[child_index * 2];
      heap_root[heap_size * 2 + 1] = heap_root[child_index * 2 + 1];
      heap_size = child_index;
    }
    current_ptr = current_ptr + -1;
    heap_root[heap_size * 2 + 1] = stack_temp_6c;
    heap_root[heap_size * 2] = stack_temp_68;
    heap_capacity = (8 - (longlong)heap_root) + (longlong)current_ptr >> 3;
    if (heap_capacity < 2) {
      return;
    }
  } while( true );
}