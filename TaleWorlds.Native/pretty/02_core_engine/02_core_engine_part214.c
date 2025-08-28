#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part214.c - 核心引擎排序算法模块

/**
 * 快速排序算法实现
 * 对数组进行快速排序，使用递归分区策略
 * 
 * @param array_start 数组起始指针
 * @param array_end 数组结束指针  
 * @param depth 递归深度限制
 */
void quick_sort_implementation(uint64_t *array_start, uint64_t *array_end, int64_t depth)
{
  uint64_t pivot_value;
  uint64_t temp_value;
  char comparison_result;
  uint64_t array_size;
  int64_t element_count;
  uint64_t *left_ptr;
  uint64_t *right_ptr;
  int64_t left_index;
  int64_t right_index;
  uint64_t *partition_ptr;
  int64_t heap_parent;
  int64_t heap_child;
  bool is_heap_leaf;
  uint32_t temp_low;
  uint32_t temp_high;
  
  array_size = (int64_t)array_end - (int64_t)array_start;
  do {
    // 小数组或深度限制处理
    if (((int64_t)(array_size & 0xfffffffffffffff8) < 0xe1) || (depth < 1)) {
      if (depth != 0) {
        return;
      }
      // 堆排序构建阶段
      element_count = (int64_t)array_end - (int64_t)array_start >> 3;
      if (1 < element_count) {
        // 构建最大堆
        heap_parent = (element_count + -2 >> 1) + 1;
        heap_child = heap_parent * 2 + 2;
        do {
          pivot_value = array_start[heap_parent + -1];
          heap_parent = heap_parent + -1;
          heap_child = heap_child + -2;
          left_index = heap_parent;
          // 堆化过程
          for (right_index = heap_child; right_index < element_count; right_index = right_index * 2 + 2) {
            comparison_result = compare_elements(array_start[right_index], array_start[right_index + -1]);
            if (comparison_result != '\0') {
              right_index = right_index + -1;
            }
            *(uint32_t *)(array_start + left_index) = *(uint32_t *)(array_start + right_index);
            *(uint32_t *)((int64_t)array_start + left_index * 8 + 4) =
                 *(uint32_t *)((int64_t)array_start + right_index * 8 + 4);
            left_index = right_index;
          }
          if (right_index == element_count) {
            *(uint32_t *)(array_start + left_index) = *(uint32_t *)(array_start + right_index + -1);
            *(uint32_t *)((int64_t)array_start + left_index * 8 + 4) =
                 *(uint32_t *)((int64_t)array_start + right_index * 8 + -4);
            left_index = right_index + -1;
          }
          // 上浮过程
          while (heap_parent < left_index) {
            right_index = left_index + -1 >> 1;
            comparison_result = compare_elements(array_start[right_index], pivot_value);
            if (comparison_result == '\0') break;
            *(uint32_t *)(array_start + left_index) = *(uint32_t *)(array_start + right_index);
            *(uint32_t *)((int64_t)array_start + left_index * 8 + 4) =
                 *(uint32_t *)((int64_t)array_start + right_index * 8 + 4);
            left_index = right_index;
          }
          temp_low = (uint32_t)pivot_value;
          temp_high = (uint32_t)((uint64_t)pivot_value >> 0x20);
          *(uint32_t *)(array_start + left_index) = temp_low;
          *(uint32_t *)((int64_t)array_start + left_index * 8 + 4) = temp_high;
        } while (heap_parent != 0);
      }
      // 堆排序提取阶段
      if (1 < element_count) {
        array_end = array_end + -1;
        do {
          pivot_value = *array_end;
          element_count = element_count + -1;
          heap_child = 0;
          heap_parent = 2;
          *(uint32_t *)array_end = *(uint32_t *)array_start;
          *(uint32_t *)((int64_t)array_end + 4) = *(uint32_t *)((int64_t)array_start + 4);
          is_heap_leaf = element_count == 2;
          left_index = heap_child;
          if (2 < element_count) {
            do {
              comparison_result = compare_elements(array_start[heap_parent], array_start[heap_parent + -1]);
              heap_child = heap_parent;
              if (comparison_result != '\0') {
                heap_child = heap_parent + -1;
              }
              *(uint32_t *)(array_start + left_index) = *(uint32_t *)(array_start + heap_child);
              *(uint32_t *)((int64_t)array_start + left_index * 8 + 4) =
                   *(uint32_t *)((int64_t)array_start + heap_child * 8 + 4);
              heap_parent = heap_child * 2 + 2;
              is_heap_leaf = heap_parent == element_count;
              left_index = heap_child;
            } while (heap_parent < element_count);
          }
          if (is_heap_leaf) {
            *(uint32_t *)(array_start + heap_child) = *(uint32_t *)(array_start + heap_parent + -1);
            *(uint32_t *)((int64_t)array_start + heap_child * 8 + 4) =
                 *(uint32_t *)((int64_t)array_start + heap_parent * 8 + -4);
            heap_child = heap_parent + -1;
          }
          // 堆化修复
          while (0 < heap_child) {
            element_count = heap_child + -1 >> 1;
            comparison_result = compare_elements(array_start[element_count], pivot_value);
            if (comparison_result == '\0') break;
            *(uint32_t *)(array_start + heap_child) = *(uint32_t *)(array_start + element_count);
            *(uint32_t *)((int64_t)array_start + heap_child * 8 + 4) =
                 *(uint32_t *)((int64_t)array_start + element_count * 8 + 4);
            heap_child = element_count;
          }
          array_end = array_end + -1;
          *(int *)((int64_t)array_start + heap_child * 8 + 4) = (int)((uint64_t)pivot_value >> 0x20);
          *(int *)(array_start + heap_child) = (int)pivot_value;
          element_count = (8 - (int64_t)array_start) + (int64_t)array_end >> 3;
        } while (1 < element_count);
      }
      return;
    }
    // 快速排序分区选择
    partition_ptr = array_end + -1;
    element_count = (int64_t)array_end - (int64_t)array_start >> 3;
    if (element_count < 0) {
      element_count = element_count + 1;
    }
    // 三数取中选择枢轴
    left_ptr = array_start + (element_count >> 1);
    comparison_result = compare_elements(*array_start, array_start[element_count >> 1]);
    if (comparison_result == '\0') {
      comparison_result = compare_elements(*array_start, *partition_ptr);
      right_ptr = array_start;
      if (comparison_result == '\0') {
        comparison_result = compare_elements(*left_ptr, *partition_ptr);
        goto partition_selected;
      }
    }
    else {
      comparison_result = compare_elements(*left_ptr, *partition_ptr);
      right_ptr = left_ptr;
      if (comparison_result == '\0') {
        comparison_result = compare_elements(*array_start, *partition_ptr);
        left_ptr = array_start;
partition_selected:
        right_ptr = left_ptr;
        if (comparison_result != '\0') {
          right_ptr = partition_ptr;
        }
      }
    }
    pivot_value = *right_ptr;
    left_ptr = array_start;
    partition_ptr = array_end;
    // 分区过程
    while( true ) {
      // 找到左边大于枢轴的元素
      while (comparison_result = compare_elements(*left_ptr, pivot_value), comparison_result != '\0') {
        left_ptr = left_ptr + 1;
      }
      // 找到右边小于枢轴的元素
      comparison_result = compare_elements(pivot_value, partition_ptr[-1]);
      right_ptr = partition_ptr;
      while (partition_ptr = right_ptr + -1, comparison_result != '\0') {
        comparison_result = compare_elements(pivot_value, right_ptr[-2]);
        right_ptr = partition_ptr;
      }
      if (partition_ptr <= left_ptr) break;
      // 交换元素
      temp_value = *left_ptr;
      *(uint32_t *)left_ptr = *(uint32_t *)partition_ptr;
      *(uint32_t *)((int64_t)left_ptr + 4) = *(uint32_t *)((int64_t)right_ptr + -4);
      temp_low = (uint32_t)temp_value;
      *(uint32_t *)partition_ptr = temp_low;
      left_ptr = left_ptr + 1;
      *(int *)((int64_t)right_ptr + -4) = (int)((uint64_t)temp_value >> 0x20);
    }
    // 递归排序右半部分
    depth = depth + -1;
    quick_sort_implementation(left_ptr, array_end, depth);
    array_size = (int64_t)left_ptr - (int64_t)array_start;
    array_end = left_ptr;
  } while( true );
}


// 警告：移除不可达代码块 (多个位置)


/**
 * 快速排序的优化版本
 * 使用不同的参数传递方式，提高排序效率
 * 
 * @param array_start 数组起始指针
 * @param array_end 数组结束指针
 * @param depth 递归深度限制
 * @param register_value 寄存器传递的额外参数
 */
void optimized_quick_sort(uint64_t *array_start, uint64_t *array_end, int64_t depth, int64_t register_value)
{
  uint64_t pivot_value;
  uint64_t temp_value;
  char comparison_result;
  int64_t base_register;
  uint64_t array_size;
  int64_t element_count;
  uint64_t *left_ptr;
  uint64_t *right_ptr;
  int64_t left_index;
  int64_t right_index;
  uint64_t *partition_ptr;
  int64_t heap_parent;
  int64_t heap_child;
  bool is_heap_leaf;
  uint32_t temp_low;
  uint32_t temp_high;
  
  array_size = base_register - (int64_t)array_start;
  do {
    // 小数组优化处理
    if (((int64_t)(array_size & 0xfffffffffffffff8) < 0xe1) || (depth < 1)) {
      if (depth != 0) {
        return;
      }
      // 堆排序实现
      element_count = (int64_t)array_end - (int64_t)array_start >> 3;
      if (1 < element_count) {
        heap_parent = (element_count + -2 >> 1) + 1;
        heap_child = heap_parent * 2 + 2;
        do {
          pivot_value = array_start[heap_parent + -1];
          heap_parent = heap_parent + -1;
          heap_child = heap_child + -2;
          left_index = heap_parent;
          // 堆化过程
          for (right_index = heap_child; right_index < element_count; right_index = right_index * 2 + 2) {
            comparison_result = compare_elements(array_start[right_index], array_start[right_index + -1]);
            if (comparison_result != '\0') {
              right_index = right_index + -1;
            }
            *(uint32_t *)(array_start + left_index) = *(uint32_t *)(array_start + right_index);
            *(uint32_t *)((int64_t)array_start + left_index * 8 + 4) =
                 *(uint32_t *)((int64_t)array_start + right_index * 8 + 4);
            left_index = right_index;
          }
          if (right_index == element_count) {
            *(uint32_t *)(array_start + left_index) = *(uint32_t *)(array_start + right_index + -1);
            *(uint32_t *)((int64_t)array_start + left_index * 8 + 4) =
                 *(uint32_t *)((int64_t)array_start + right_index * 8 + -4);
            left_index = right_index + -1;
          }
          // 上浮调整
          while (heap_parent < left_index) {
            right_index = left_index + -1 >> 1;
            comparison_result = compare_elements(array_start[right_index], pivot_value);
            if (comparison_result == '\0') break;
            *(uint32_t *)(array_start + left_index) = *(uint32_t *)(array_start + right_index);
            *(uint32_t *)((int64_t)array_start + left_index * 8 + 4) =
                 *(uint32_t *)((int64_t)array_start + right_index * 8 + 4);
            left_index = right_index;
          }
          temp_low = (uint32_t)pivot_value;
          temp_high = (uint32_t)((uint64_t)pivot_value >> 0x20);
          *(uint32_t *)(array_start + left_index) = temp_low;
          *(uint32_t *)((int64_t)array_start + left_index * 8 + 4) = temp_high;
        } while (heap_parent != 0);
      }
      // 堆排序提取
      if (1 < element_count) {
        array_end = array_end + -1;
        do {
          pivot_value = *array_end;
          element_count = element_count + -1;
          heap_child = 0;
          heap_parent = 2;
          *(uint32_t *)array_end = *(uint32_t *)array_start;
          *(uint32_t *)((int64_t)array_end + 4) = *(uint32_t *)((int64_t)array_start + 4);
          is_heap_leaf = element_count == 2;
          left_index = heap_child;
          if (2 < element_count) {
            do {
              comparison_result = compare_elements(array_start[heap_parent], array_start[heap_parent + -1]);
              heap_child = heap_parent;
              if (comparison_result != '\0') {
                heap_child = heap_parent + -1;
              }
              *(uint32_t *)(array_start + left_index) = *(uint32_t *)(array_start + heap_child);
              *(uint32_t *)((int64_t)array_start + left_index * 8 + 4) =
                   *(uint32_t *)((int64_t)array_start + heap_child * 8 + 4);
              heap_parent = heap_child * 2 + 2;
              is_heap_leaf = heap_parent == element_count;
              left_index = heap_child;
            } while (heap_parent < element_count);
          }
          if (is_heap_leaf) {
            *(uint32_t *)(array_start + heap_child) = *(uint32_t *)(array_start + heap_parent + -1);
            *(uint32_t *)((int64_t)array_start + heap_child * 8 + 4) =
                 *(uint32_t *)((int64_t)array_start + heap_parent * 8 + -4);
            heap_child = heap_parent + -1;
          }
          // 堆修复
          while (0 < heap_child) {
            element_count = heap_child + -1 >> 1;
            comparison_result = compare_elements(array_start[element_count], pivot_value);
            if (comparison_result == '\0') break;
            *(uint32_t *)(array_start + heap_child) = *(uint32_t *)(array_start + element_count);
            *(uint32_t *)((int64_t)array_start + heap_child * 8 + 4) =
                 *(uint32_t *)((int64_t)array_start + element_count * 8 + 4);
            heap_child = element_count;
          }
          array_end = array_end + -1;
          *(int *)((int64_t)array_start + heap_child * 8 + 4) = (int)((uint64_t)pivot_value >> 0x20);
          *(int *)(array_start + heap_child) = (int)pivot_value;
          element_count = (8 - (int64_t)array_start) + (int64_t)array_end >> 3;
        } while (1 < element_count);
      }
      return;
    }
    // 分区策略
    partition_ptr = array_end + -1;
    element_count = (int64_t)array_end - (int64_t)array_start >> 3;
    if (element_count < 0) {
      element_count = element_count + 1;
    }
    // 三数取中法选择枢轴
    left_ptr = array_start + (element_count >> 1);
    comparison_result = compare_elements(*array_start, array_start[element_count >> 1]);
    if (comparison_result == '\0') {
      comparison_result = compare_elements(*array_start, *partition_ptr);
      right_ptr = array_start;
      if (comparison_result == '\0') {
        comparison_result = compare_elements(*left_ptr, *partition_ptr);
        goto pivot_selected;
      }
    }
    else {
      comparison_result = compare_elements(*left_ptr, *partition_ptr);
      right_ptr = left_ptr;
      if (comparison_result == '\0') {
        comparison_result = compare_elements(*array_start, *partition_ptr);
        left_ptr = array_start;
pivot_selected:
        right_ptr = left_ptr;
        if (comparison_result != '\0') {
          right_ptr = partition_ptr;
        }
      }
    }
    pivot_value = *right_ptr;
    left_ptr = array_start;
    partition_ptr = array_end;
    // 执行分区
    while( true ) {
      while (comparison_result = compare_elements(*left_ptr, pivot_value), comparison_result != '\0') {
        left_ptr = left_ptr + 1;
      }
      comparison_result = compare_elements(pivot_value, partition_ptr[-1]);
      right_ptr = partition_ptr;
      while (partition_ptr = right_ptr + -1, comparison_result != '\0') {
        comparison_result = compare_elements(pivot_value, right_ptr[-2]);
        right_ptr = partition_ptr;
      }
      if (partition_ptr <= left_ptr) break;
      // 元素交换
      temp_value = *left_ptr;
      *(uint32_t *)left_ptr = *(uint32_t *)partition_ptr;
      *(uint32_t *)((int64_t)left_ptr + 4) = *(uint32_t *)((int64_t)right_ptr + -4);
      temp_low = (uint32_t)temp_value;
      *(uint32_t *)partition_ptr = temp_low;
      left_ptr = left_ptr + 1;
      *(int *)((int64_t)right_ptr + -4) = (int)((uint64_t)temp_value >> 0x20);
    }
    // 递归处理
    depth = depth + -1;
    quick_sort_implementation(left_ptr, array_end, depth);
    array_size = (int64_t)left_ptr - (int64_t)array_start;
    array_end = left_ptr;
  } while( true );
}


// 警告：移除不可达代码块 (多个位置)


/**
 * 混合排序算法实现
 * 结合快速排序和堆排序的优势，提供最优性能
 * 使用寄存器变量提高效率
 */
void hybrid_sort_implementation(void)
{
  uint64_t pivot_value;
  uint64_t temp_value;
  char comparison_result;
  int64_t element_count;
  uint64_t *left_ptr;
  uint64_t *right_ptr;
  uint64_t *array_base;
  uint64_t *array_end;
  int64_t left_index;
  int64_t right_index;
  uint64_t *partition_ptr;
  int64_t heap_parent;
  int64_t heap_child;
  int64_t recursion_depth;
  bool is_heap_leaf;
  uint32_t temp_low;
  uint32_t temp_high;
  
  do {
    // 递归深度检查
    partition_ptr = array_base;
    if (recursion_depth < 1) break;
    partition_ptr = array_base + -1;
    element_count = (int64_tarray_base - (int64_t)array_end >> 3;
    if (element_count < 0) {
      element_count = element_count + 1;
    }
    // 枢轴选择策略
    left_ptr = array_end + (element_count >> 1);
    comparison_result = compare_elements(*array_end, array_end[element_count >> 1]);
    if (comparison_result == '\0') {
      comparison_result = compare_elements(*array_end, *partition_ptr);
      right_ptr = array_end;
      if (comparison_result == '\0') {
        comparison_result = compare_elements(*left_ptr, *partition_ptr);
        goto pivot_chosen;
      }
    }
    else {
      comparison_result = compare_elements(*left_ptr, *partition_ptr);
      right_ptr = left_ptr;
      if (comparison_result == '\0') {
        comparison_result = compare_elements(*array_end, *partition_ptr);
        left_ptr = array_end;
pivot_chosen:
        right_ptr = left_ptr;
        if (comparison_result != '\0') {
          right_ptr = partition_ptr;
        }
      }
    }
    pivot_value = *right_ptr;
    left_ptr = array_end;
    partition_ptr = array_base;
    // 分区执行
    while( true ) {
      while (comparison_result = compare_elements(*left_ptr, pivot_value), comparison_result != '\0') {
        left_ptr = left_ptr + 1;
      }
      comparison_result = compare_elements(pivot_value, partition_ptr[-1]);
      right_ptr = partition_ptr;
      while (partition_ptr = right_ptr + -1, comparison_result != '\0') {
        comparison_result = compare_elements(pivot_value, right_ptr[-2]);
        right_ptr = partition_ptr;
      }
      if (partition_ptr <= left_ptr) break;
      // 交换元素
      temp_value = *left_ptr;
      *(uint32_t *)left_ptr = *(uint32_t *)partition_ptr;
      *(uint32_t *)((int64_t)left_ptr + 4) = *(uint32_t *)((int64_t)right_ptr + -4);
      temp_low = (uint32_t)temp_value;
      *(uint32_t *)partition_ptr = temp_low;
      left_ptr = left_ptr + 1;
      *(int *)((int64_t)right_ptr + -4) = (int)((uint64_t)temp_value >> 0x20);
    }
    recursion_depth = recursion_depth + -1;
    quick_sort_implementation(left_ptr, array_base, recursion_depth);
    array_base = left_ptr;
  } while (0xe0 < (int64_t)((int64_t)left_ptr - (int64_t)array_end & 0xfffffffffffffff8U));
  
  // 堆排序回退
  if (recursion_depth != 0) {
    return;
  }
  element_count = (int64_t)left_ptr - (int64_t)array_end >> 3;
  if (1 < element_count) {
    heap_parent = (element_count + -2 >> 1) + 1;
    heap_child = heap_parent * 2 + 2;
    do {
      pivot_value = array_end[heap_parent + -1];
      heap_parent = heap_parent + -1;
      heap_child = heap_child + -2;
      left_index = heap_parent;
      // 堆化
      for (right_index = heap_child; right_index < element_count; right_index = right_index * 2 + 2) {
        comparison_result = compare_elements(array_end[right_index], array_end[right_index + -1]);
        if (comparison_result != '\0') {
          right_index = right_index + -1;
        }
        *(uint32_t *)(array_end + left_index) = *(uint32_t *)(array_end + right_index);
        *(uint32_t *)((int64_t)array_end + left_index * 8 + 4) =
             *(uint32_t *)((int64_t)array_end + right_index * 8 + 4);
        left_index = right_index;
      }
      if (right_index == element_count) {
        *(uint32_t *)(array_end + left_index) = *(uint32_t *)(array_end + right_index + -1);
        *(uint32_t *)((int64_t)array_end + left_index * 8 + 4) =
             *(uint32_t *)((int64_t)array_end + right_index * 8 + -4);
        left_index = right_index + -1;
      }
      // 上浮
      while (heap_parent < left_index) {
        right_index = left_index + -1 >> 1;
        comparison_result = compare_elements(array_end[right_index], pivot_value);
        if (comparison_result == '\0') break;
        *(uint32_t *)(array_end + left_index) = *(uint32_t *)(array_end + right_index);
        *(uint32_t *)((int64_t)array_end + left_index * 8 + 4) =
             *(uint32_t *)((int64_t)array_end + right_index * 8 + 4);
        left_index = right_index;
      }
      temp_low = (uint32_t)pivot_value;
      temp_high = (uint32_t)((uint64_t)pivot_value >> 0x20);
      *(uint32_t *)(array_end + left_index) = temp_low;
      *(uint32_t *)((int64_t)array_end + left_index * 8 + 4) = temp_high;
    } while (heap_parent != 0);
  }
  // 堆提取
  if (1 < element_count) {
    partition_ptr = partition_ptr + -1;
    do {
      pivot_value = *partition_ptr;
      element_count = element_count + -1;
      heap_child = 0;
      heap_parent = 2;
      *(uint32_t *)partition_ptr = *(uint32_t *)array_end;
      *(uint32_t *)((int64_t)partition_ptr + 4) = *(uint32_t *)((int64_t)array_end + 4);
      is_heap_leaf = element_count == 2;
      left_index = heap_child;
      if (2 < element_count) {
        do {
          comparison_result = compare_elements(array_end[heap_parent], array_end[heap_parent + -1]);
          heap_child = heap_parent;
          if (comparison_result != '\0') {
            heap_child = heap_parent + -1;
          }
          *(uint32_t *)(array_end + left_index) = *(uint32_t *)(array_end + heap_child);
          *(uint32_t *)((int64_t)array_end + left_index * 8 + 4) =
               *(uint32_t *)((int64_t)array_end + heap_child * 8 + 4);
          heap_parent = heap_child * 2 + 2;
          is_heap_leaf = heap_parent == element_count;
          left_index = heap_child;
        } while (heap_parent < element_count);
      }
      if (is_heap_leaf) {
        *(uint32_t *)(array_end + heap_child) = *(uint32_t *)(array_end + heap_parent + -1);
        *(uint32_t *)((int64_t)array_end + heap_child * 8 + 4) =
             *(uint32_t *)((int64_t)array_end + heap_parent * 8 + -4);
        heap_child = heap_parent + -1;
      }
      // 堆修复
      while (0 < heap_child) {
        element_count = heap_child + -1 >> 1;
        comparison_result = compare_elements(array_end[element_count], pivot_value);
        if (comparison_result == '\0') break;
        *(uint32_t *)(array_end + heap_child) = *(uint32_t *)(array_end + element_count);
        *(uint32_t *)((int64_t)array_end + heap_child * 8 + 4) =
             *(uint32_t *)((int64_t)array_end + element_count * 8 + 4);
        heap_child = element_count;
      }
      partition_ptr = partition_ptr + -1;
      *(int *)((int64_t)array_end + heap_child * 8 + 4) = (int)((uint64_t)pivot_value >> 0x20);
      *(int *)(array_end + heap_child) = (int)pivot_value;
      element_count = (8 - (int64_t)array_end) + (int64_t)partition_ptr >> 3;
    } while (1 < element_count);
  }
  return;
}


// 警告：移除不可达代码块 (多个位置)


/**
 * 寄存器优化的堆排序实现
 * 使用寄存器变量减少内存访问，提高性能
 */
void register_optimized_heap_sort(void)
{
  uint64_t pivot_value;
  char comparison_result;
  int64_t base_register;
  int64_t left_index;
  int64_t right_index;
  uint64_t register_ninth;
  int64_t heap_parent;
  uint32_t *array_base;
  int64_t element_count;
  uint64_t *partition_ptr;
  int64_t recursion_depth;
  int64_t heap_child;
  bool is_heap_leaf;
  uint32_t temp_low;
  uint32_t temp_high;
  
  if (recursion_depth != 0) {
    return;
  }
  element_count = base_register - (int64_t)array_base >> 3;
  temp_low = register_ninth;
  if (1 < element_count) {
    heap_parent = (element_count + -2 >> 1) + 1;
    heap_child = heap_parent * 2 + 2;
    do {
      pivot_value = *(uint64_t *)(array_base + heap_parent * 2 + -2);
      heap_parent = heap_parent + -1;
      heap_child = heap_child + -2;
      temp_low = pivot_value;
      left_index = heap_parent;
      // 堆化过程
      for (right_index = heap_child; right_index < element_count; right_index = right_index * 2 + 2) {
        comparison_result = compare_elements(*(uint64_t *)(array_base + right_index * 2),
                                    *(uint64_t *)(array_base + right_index * 2 + -2));
        if (comparison_result != '\0') {
          right_index = right_index + -1;
        }
        array_base[left_index * 2] = array_base[right_index * 2];
        array_base[left_index * 2 + 1] = array_base[right_index * 2 + 1];
        left_index = right_index;
      }
      if (right_index == element_count) {
        array_base[left_index * 2] = array_base[right_index * 2 + -2];
        array_base[left_index * 2 + 1] = array_base[right_index * 2 + -1];
        left_index = right_index + -1;
      }
      // 上浮调整
      while (heap_parent < left_index) {
        right_index = left_index + -1 >> 1;
        comparison_result = compare_elements(*(uint64_t *)(array_base + right_index * 2), pivot_value);
        if (comparison_result == '\0') break;
        array_base[left_index * 2] = array_base[right_index * 2];
        array_base[left_index * 2 + 1] = array_base[right_index * 2 + 1];
        left_index = right_index;
      }
      array_base[left_index * 2] = temp_low;
      array_base[left_index * 2 + 1] = temp_high;
    } while (heap_parent != 0);
  }
  // 堆提取阶段
  if (1 < element_count) {
    partition_ptr = (uint64_t *)(base_register + -8);
    do {
      pivot_value = *partition_ptr;
      element_count = element_count + -1;
      heap_child = 0;
      heap_parent = 2;
      *(uint32_t *)partition_ptr = *array_base;
      *(uint32_t *)((int64_t)partition_ptr + 4) = array_base[1];
      is_heap_leaf = element_count == 2;
      left_index = heap_child;
      if (2 < element_count) {
        do {
          comparison_result = compare_elements(*(uint64_t *)(array_base + heap_parent * 2),
                                      *(uint64_t *)(array_base + heap_parent * 2 + -2));
          heap_child = heap_parent;
          if (comparison_result != '\0') {
            heap_child = heap_parent + -1;
          }
          array_base[left_index * 2] = array_base[heap_child * 2];
          array_base[left_index * 2 + 1] = array_base[heap_child * 2 + 1];
          heap_parent = heap_child * 2 + 2;
          is_heap_leaf = heap_parent == element_count;
          left_index = heap_child;
        } while (heap_parent < element_count);
      }
      if (is_heap_leaf) {
        array_base[heap_child * 2] = array_base[heap_parent * 2 + -2];
        array_base[heap_child * 2 + 1] = array_base[heap_parent * 2 + -1];
        heap_child = heap_parent + -1;
      }
      // 堆修复
      while (0 < heap_child) {
        element_count = heap_child + -1 >> 1;
        comparison_result = compare_elements(*(uint64_t *)(array_base + element_count * 2), pivot_value);
        if (comparison_result == '\0') break;
        array_base[heap_child * 2] = array_base[element_count * 2];
        array_base[heap_child * 2 + 1] = array_base[element_count * 2 + 1];
        heap_child = element_count;
      }
      partition_ptr = partition_ptr + -1;
      array_base[heap_child * 2 + 1] = (int)((uint64_t)pivot_value >> 0x20);
      array_base[heap_child * 2] = (int)pivot_value;
      element_count = (8 - (int64_t)array_base) + (int64_t)partition_ptr >> 3;
    } while (1 < element_count);
  }
  return;
}


// 警告：移除不可达代码块 (多个位置)


/**
 * 通用堆排序实现
 * 标准的堆排序算法，适用于各种数据类型
 */
void generic_heap_sort(void)
{
  uint64_t pivot_value;
  char comparison_result;
  int64_t base_register;
  int64_t left_index;
  int64_t right_index;
  uint64_t register_ninth;
  int64_t heap_parent;
  uint32_t *array_base;
  int64_t element_count;
  int64_t heap_child;
  uint64_t *partition_ptr;
  bool is_heap_leaf;
  uint32_t temp_low;
  uint32_t temp_high;
  
  element_count = base_register - (int64_t)array_base >> 3;
  temp_low = register_ninth;
  if (1 < element_count) {
    heap_parent = (element_count + -2 >> 1) + 1;
    heap_child = heap_parent * 2 + 2;
    do {
      pivot_value = *(uint64_t *)(array_base + heap_parent * 2 + -2);
      heap_parent = heap_parent + -1;
      heap_child = heap_child + -2;
      temp_low = pivot_value;
      left_index = heap_parent;
      // 堆构建
      for (right_index = heap_child; right_index < element_count; right_index = right_index * 2 + 2) {
        comparison_result = compare_elements(*(uint64_t *)(array_base + right_index * 2),
                                    *(uint64_t *)(array_base + right_index * 2 + -2));
        if (comparison_result != '\0') {
          right_index = right_index + -1;
        }
        array_base[left_index * 2] = array_base[right_index * 2];
        array_base[left_index * 2 + 1] = array_base[right_index * 2 + 1];
        left_index = right_index;
      }
      if (right_index == element_count) {
        array_base[left_index * 2] = array_base[right_index * 2 + -2];
        array_base[left_index * 2 + 1] = array_base[right_index * 2 + -1];
        left_index = right_index + -1;
      }
      // 上浮
      while (heap_parent < left_index) {
        right_index = left_index + -1 >> 1;
        comparison_result = compare_elements(*(uint64_t *)(array_base + right_index * 2), pivot_value);
        if (comparison_result == '\0') break;
        array_base[left_index * 2] = array_base[right_index * 2];
        array_base[left_index * 2 + 1] = array_base[right_index * 2 + 1];
        left_index = right_index;
      }
      array_base[left_index * 2] = temp_low;
      array_base[left_index * 2 + 1] = temp_high;
    } while (heap_parent != 0);
  }
  // 堆排序
  if (1 < element_count) {
    partition_ptr = (uint64_t *)(base_register + -8);
    do {
      pivot_value = *partition_ptr;
      element_count = element_count + -1;
      heap_child = 0;
      heap_parent = 2;
      *(uint32_t *)partition_ptr = *array_base;
      *(uint32_t *)((int64_t)partition_ptr + 4) = array_base[1];
      is_heap_leaf = element_count == 2;
      left_index = heap_child;
      if (2 < element_count) {
        do {
          comparison_result = compare_elements(*(uint64_t *)(array_base + heap_parent * 2),
                                      *(uint64_t *)(array_base + heap_parent * 2 + -2));
          heap_child = heap_parent;
          if (comparison_result != '\0') {
            heap_child = heap_parent + -1;
          }
          array_base[left_index * 2] = array_base[heap_child * 2];
          array_base[left_index * 2 + 1] = array_base[heap_child * 2 + 1];
          heap_parent = heap_child * 2 + 2;
          is_heap_leaf = heap_parent == element_count;
          left_index = heap_child;
        } while (heap_parent < element_count);
      }
      if (is_heap_leaf) {
        array_base[heap_child * 2] = array_base[heap_parent * 2 + -2];
        array_base[heap_child * 2 + 1] = array_base[heap_parent * 2 + -1];
        heap_child = heap_parent + -1;
      }
      // 堆修复
      while (0 < heap_child) {
        element_count = heap_child + -1 >> 1;
        comparison_result = compare_elements(*(uint64_t *)(array_base + element_count * 2), pivot_value);
        if (comparison_result == '\0') break;
        array_base[heap_child * 2] = array_base[element_count * 2];
        array_base[heap_child * 2 + 1] = array_base[element_count * 2 + 1];
        heap_child = element_count;
      }
      partition_ptr = partition_ptr + -1;
      array_base[heap_child * 2 + 1] = (int)((uint64_t)pivot_value >> 0x20);
      array_base[heap_child * 2] = (int)pivot_value;
      element_count = (8 - (int64_t)array_base) + (int64_t)partition_ptr >> 3;
    } while (1 < element_count);
  }
  return;
}


// 警告：移除不可达代码块 (多个位置)


/**
 * 高级排序算法
 * 结合多种排序策略的自适应排序算法
 * 
 * @param range_start 排序范围起始
 * @param range_end 排序范围结束
 * @param iteration_count 迭代次数
 * @param sort_flag 排序标志位
 */
void advanced_sort_algorithm(int64_t range_start, int64_t range_end, int64_t iteration_count, uint8_t sort_flag)
{
  char compare_result;
  int64_t range_size;
  int64_t middle_point;
  uint64_t sentinel_value;
  uint8_t temp_buffer[848];
  
  sentinel_value = 0xfffffffffffffffe;
  range_size = range_end - range_start;
  do {
    // 小范围或迭代限制检查
    if ((range_size < 0x5f28) || (iteration_count < 1)) {
      if (iteration_count == 0) {
        final_sort_pass(range_start, range_end, range_end, sort_flag, sentinel_value);
      }
      return;
    }
    // 计算分区点
    range_size = ((range_end - range_start) / 0x690) * 0x348 + range_start;
    compare_result = calculate_partition(range_end - range_start, range_start, range_size);
    if (compare_result == '\0') {
      compare_result = calculate_partition();
      middle_point = range_start;
      if (compare_result == '\0') {
        compare_result = calculate_partition();
        goto partition_decided;
      }
    }
    else {
      compare_result = calculate_partition();
      middle_point = range_size;
      if (compare_result == '\0') {
        compare_result = calculate_partition();
        range_size = range_start;
partition_decided:
        middle_point = range_size;
        if (compare_result != '\0') {
          middle_point = range_end + -0x348;
        }
      }
    }
    // 缓存优化处理
    optimize_cache_access(temp_buffer, middle_point);
    middle_point = calculate_optimal_range(range_start, range_end, temp_buffer);
    cleanup_temp_buffer(temp_buffer);
    iteration_count = iteration_count + -1;
    advanced_sort_algorithm(middle_point, range_end, iteration_count, sort_flag);
    range_size = middle_point - range_start;
    range_end = middle_point;
  } while( true );
}