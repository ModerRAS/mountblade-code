#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part065.c - 核心引擎排序和搜索算法模块
// 本文件包含各种排序、搜索和数据处理算法

// 函数: void insertion_sort_int_array(int *array_start, int *array_end, uint64_t *comparison_context)
// 功能: 对整数数组进行插入排序
// 参数: array_start - 数组起始指针, array_end - 数组结束指针, comparison_context - 比较上下文
void insertion_sort_int_array(int *array_start, int *array_end, uint64_t *comparison_context)

{
  int current_value;
  int compare_value;
  uint64_t *left_node;
  uint64_t *right_node;
  uint64_t *middle_node;
  int *current_ptr;
  int *search_ptr;
  int *insert_ptr;
  
  insert_ptr = array_start + 1;
  do {
    if (insert_ptr == array_end) {
      return;
    }
    current_value = *insert_ptr;
    search_ptr = insert_ptr;
    current_ptr = insert_ptr;
    while (current_ptr != array_start) {
      middle_node = (uint64_t *)comparison_context[2];
      current_ptr = current_ptr + -1;
      compare_value = *current_ptr;
      left_node = middle_node;
      right_node = comparison_context;
      if (middle_node == (uint64_t *)0x0) {
LAB_18009d31f:
        right_node = comparison_context;
      }
      else {
        do {
          if (*(int *)(left_node + 4) < compare_value) {
            left_node = (uint64_t *)*left_node;
          }
          else {
            right_node = left_node;
            left_node = (uint64_t *)left_node[1];
          }
        } while (left_node != (uint64_t *)0x0);
        if ((right_node == comparison_context) || (compare_value < *(int *)(right_node + 4))) goto LAB_18009d31f;
      }
      left_node = comparison_context;
      if (middle_node == (uint64_t *)0x0) {
LAB_18009d358:
        left_node = comparison_context;
      }
      else {
        do {
          if (*(int *)(middle_node + 4) < current_value) {
            middle_node = (uint64_t *)*middle_node;
          }
          else {
            left_node = middle_node;
            middle_node = (uint64_t *)middle_node[1];
          }
        } while (middle_node != (uint64_t *)0x0);
        if ((left_node == comparison_context) || (current_value < *(int *)(left_node + 4))) goto LAB_18009d358;
      }
      if (*(float *)((int64_t)left_node + 0x24) <= *(float *)((int64_t)right_node + 0x24)) break;
      *search_ptr = compare_value;
      search_ptr = search_ptr + -1;
    }
    insert_ptr = insert_ptr + 1;
    *search_ptr = current_value;
  } while( true );
}



// 函数: void optimized_insertion_sort_int(uint64_t param_1, uint64_t param_2, uint64_t *comparison_context)
// 功能: 优化的整数数组插入排序算法
// 参数: param_1 - 起始参数, param_2 - 结束参数, comparison_context - 比较上下文
void optimized_insertion_sort_int(uint64_t param_1, uint64_t param_2, uint64_t *comparison_context)

{
  int current_value;
  int compare_value;
  uint64_t *left_node;
  uint64_t *right_node;
  uint64_t *middle_node;
  int *base_ptr;
  int *current_ptr;
  int *insert_ptr;
  int *start_ptr;
  int *end_ptr;
  
  do {
    current_value = *start_ptr;
    current_ptr = start_ptr;
    insert_ptr = start_ptr;
    while (current_ptr != base_ptr) {
      middle_node = (uint64_t *)comparison_context[2];
      current_ptr = current_ptr + -1;
      compare_value = *current_ptr;
      left_node = middle_node;
      right_node = comparison_context;
      if (middle_node == (uint64_t *)0x0) {
LAB_18009d31f:
        right_node = comparison_context;
      }
      else {
        do {
          if (*(int *)(left_node + 4) < compare_value) {
            left_node = (uint64_t *)*left_node;
          }
          else {
            right_node = left_node;
            left_node = (uint64_t *)left_node[1];
          }
        } while (left_node != (uint64_t *)0x0);
        if ((right_node == comparison_context) || (compare_value < *(int *)(right_node + 4))) goto LAB_18009d31f;
      }
      left_node = comparison_context;
      if (middle_node == (uint64_t *)0x0) {
LAB_18009d358:
        left_node = comparison_context;
      }
      else {
        do {
          if (*(int *)(middle_node + 4) < current_value) {
            middle_node = (uint64_t *)*middle_node;
          }
          else {
            left_node = middle_node;
            middle_node = (uint64_t *)middle_node[1];
          }
        } while (middle_node != (uint64_t *)0x0);
        if ((left_node == comparison_context) || (current_value < *(int *)(left_node + 4))) goto LAB_18009d358;
      }
      if (*(float *)((int64_t)left_node + 0x24) <= *(float *)((int64_t)right_node + 0x24)) break;
      *insert_ptr = compare_value;
      insert_ptr = insert_ptr + -1;
    }
    start_ptr = start_ptr + 1;
    *insert_ptr = current_value;
    if (start_ptr == end_ptr) {
      return;
    }
  } while( true );
}



// 函数: void initialize_sort_helper(void)
// 功能: 初始化排序辅助函数
void initialize_sort_helper(void)

{
  return;
}



// 函数: void cleanup_sort_helper(void)
// 功能: 清理排序辅助函数
void cleanup_sort_helper(void)

{
  return;
}



// 函数: void quick_sort_64bit(uint64_t *array_start, int64_t array_end, int64_t depth, uint64_t sort_context)
// 功能: 64位快速排序算法
// 参数: array_start - 数组起始指针, array_end - 数组结束位置, depth - 递归深度, sort_context - 排序上下文
void quick_sort_64bit(uint64_t *array_start, int64_t array_end, int64_t depth, uint64_t sort_context)

{
  uint64_t first_element;
  uint64_t last_element;
  char comparison_result;
  uint64_t array_size;
  int64_t middle_index;
  uint64_t middle_element;
  uint64_t pivot_element;
  uint64_t selected_pivot;
  uint64_t stack_context;
  
  array_size = array_end - (int64_t)array_start;
  do {
    if (((int64_t)(array_size & 0xfffffffffffffff8) < 0xe1) || (depth < 1)) {
      if (depth == 0) {
        final_sort_64bit(array_start, array_end, array_end, sort_context);
      }
      return;
    }
    middle_index = array_end - (int64_t)array_start >> 3;
    if (middle_index < 0) {
      middle_index = middle_index + 1;
    }
    first_element = *array_start;
    last_element = *(uint64_t *)(array_end + -8);
    middle_element = array_start[middle_index >> 1];
    stack_context = sort_context;
    comparison_result = compare_elements_64bit(&stack_context, first_element, middle_element);
    if (comparison_result == '\0') {
      comparison_result = compare_elements_64bit(&stack_context, first_element, last_element);
      selected_pivot = first_element;
      if (comparison_result == '\0') {
        comparison_result = compare_elements_64bit(&stack_context, middle_element, last_element);
        goto LAB_18009d46c;
      }
    }
    else {
      comparison_result = compare_elements_64bit(&stack_context, middle_element, last_element);
      selected_pivot = middle_element;
      if (comparison_result == '\0') {
        comparison_result = compare_elements_64bit(&stack_context, first_element, last_element);
        middle_element = first_element;
LAB_18009d46c:
        selected_pivot = middle_element;
        if (comparison_result != '\0') {
          selected_pivot = last_element;
        }
      }
    }
    stack_context = selected_pivot;
    middle_index = partition_64bit(array_start, array_end, &stack_context, sort_context);
    depth = depth + -1;
    quick_sort_64bit(middle_index, array_end, depth, sort_context);
    array_size = middle_index - (int64_t)array_start;
    array_end = middle_index;
  } while( true );
}



// 函数: void quick_sort_64bit_optimized(uint64_t *array_start, int64_t array_end, int64_t depth, uint64_t sort_context)
// 功能: 优化的64位快速排序算法
// 参数: array_start - 数组起始指针, array_end - 数组结束位置, depth - 递归深度, sort_context - 排序上下文
void quick_sort_64bit_optimized(uint64_t *array_start, int64_t array_end, int64_t depth, uint64_t sort_context)

{
  uint64_t first_element;
  uint64_t last_element;
  char comparison_result;
  int64_t current_position;
  uint64_t array_size;
  int64_t middle_index;
  uint64_t middle_element;
  uint64_t pivot_element;
  uint64_t selected_pivot;
  uint64_t stack_param;
  
  array_size = current_position - (int64_t)array_start;
  do {
    if (((int64_t)(array_size & 0xfffffffffffffff8) < 0xe1) || (depth < 1)) {
      if (depth == 0) {
        final_sort_64bit(array_start, array_end, array_end, sort_context);
      }
      return;
    }
    middle_index = array_end - (int64_t)array_start >> 3;
    if (middle_index < 0) {
      middle_index = middle_index + 1;
    }
    first_element = *array_start;
    last_element = *(uint64_t *)(array_end + -8);
    middle_element = array_start[middle_index >> 1];
    stack_param = sort_context;
    comparison_result = compare_elements_64bit(&stack_param, first_element, middle_element);
    if (comparison_result == '\0') {
      comparison_result = compare_elements_64bit(&param_param, first_element, last_element);
      selected_pivot = first_element;
      if (comparison_result == '\0') {
        comparison_result = compare_elements_64bit(&param_param, middle_element, last_element);
        goto LAB_18009d46c;
      }
    }
    else {
      comparison_result = compare_elements_64bit(&param_param, middle_element, last_element);
      selected_pivot = middle_element;
      if (comparison_result == '\0') {
        comparison_result = compare_elements_64bit(&param_param, first_element, last_element);
        middle_element = first_element;
LAB_18009d46c:
        selected_pivot = middle_element;
        if (comparison_result != '\0') {
          selected_pivot = last_element;
        }
      }
    }
    stack_param = selected_pivot;
    middle_index = partition_64bit(array_start, array_end, &param_param, sort_context);
    depth = depth + -1;
    quick_sort_64bit(middle_index, array_end, depth, sort_context);
    array_size = middle_index - (int64_t)array_start;
    array_end = middle_index;
  } while( true );
}



// 函数: void iterative_quick_sort_64bit(void)
// 功能: 迭代式64位快速排序算法
void iterative_quick_sort_64bit(void)

{
  uint64_t first_element;
  uint64_t last_element;
  char comparison_result;
  int64_t partition_index;
  uint64_t middle_element;
  int64_t recursion_depth;
  uint64_t *array_start;
  int64_t array_end;
  uint64_t stack_param;
  
  do {
    if (recursion_depth < 1) break;
    partition_index = array_end - (int64_t)array_start >> 3;
    if (partition_index < 0) {
      partition_index = partition_index + 1;
    }
    first_element = *array_start;
    last_element = *(uint64_t *)(array_end + -8);
    middle_element = array_start[partition_index >> 1];
    comparison_result = compare_elements_64bit(&param_param, first_element, middle_element);
    if (comparison_result == '\0') {
      comparison_result = compare_elements_64bit(&param_param, first_element, last_element);
      stack_param = first_element;
      if (comparison_result == '\0') {
        comparison_result = compare_elements_64bit(&param_param, middle_element, last_element);
        goto LAB_18009d46c;
      }
    }
    else {
      comparison_result = compare_elements_64bit(&param_param, middle_element, last_element);
      stack_param = middle_element;
      if (comparison_result == '\0') {
        comparison_result = compare_elements_64bit(&param_param, first_element, last_element);
        middle_element = first_element;
LAB_18009d46c:
        stack_param = middle_element;
        if (comparison_result != '\0') {
          stack_param = last_element;
        }
      }
    }
    partition_index = partition_64bit();
    recursion_depth = recursion_depth + -1;
    quick_sort_64bit(partition_index, array_end, recursion_depth);
    array_end = partition_index;
  } while (0xe0 < (int64_t)(partition_index - (int64_t)array_start & 0xfffffffffffffff8U));
  if (recursion_depth == 0) {
    final_sort_64bit();
  }
  return;
}



// 函数: void conditional_final_sort_64bit(void)
// 功能: 条件性最终排序64位数据
void conditional_final_sort_64bit(void)

{
  int64_t recursion_depth;
  
  if (recursion_depth == 0) {
    final_sort_64bit();
  }
  return;
}



// 函数: void direct_final_sort_64bit(void)
// 功能: 直接最终排序64位数据
void direct_final_sort_64bit(void)

{
  final_sort_64bit();
  return;
}



// 函数: void quick_sort_32bit(int32_t *array_start, int64_t array_end, int64_t depth, uint64_t sort_context)
// 功能: 32位快速排序算法
// 参数: array_start - 数组起始指针, array_end - 数组结束位置, depth - 递归深度, sort_context - 排序上下文
void quick_sort_32bit(int32_t *array_start, int64_t array_end, int64_t depth, uint64_t sort_context)

{
  int32_t first_element;
  int32_t last_element;
  char comparison_result;
  uint64_t array_size;
  int64_t middle_index;
  int32_t middle_element;
  int32_t selected_pivot;
  uint64_t stack_context;
  
  array_size = array_end - (int64_t)array_start;
  do {
    if (((int64_t)(array_size & 0xfffffffffffffffc) < 0x71) || (depth < 1)) {
      if (depth == 0) {
        final_sort_32bit(array_start, array_end, array_end, sort_context);
      }
      return;
    }
    middle_index = array_end - (int64_t)array_start >> 2;
    if (middle_index < 0) {
      middle_index = middle_index + 1;
    }
    first_element = *array_start;
    last_element = *(int32_t *)(array_end + -4);
    middle_element = array_start[middle_index >> 1];
    stack_context = sort_context;
    comparison_result = compare_elements_32bit(&stack_context, first_element, middle_element);
    if (comparison_result == '\0') {
      comparison_result = compare_elements_32bit(&stack_context, first_element, last_element);
      selected_pivot = first_element;
      if (comparison_result == '\0') {
        comparison_result = compare_elements_32bit(&stack_context, middle_element, last_element);
        goto LAB_18009d5b5;
      }
    }
    else {
      comparison_result = compare_elements_32bit(&stack_context, middle_element, last_element);
      selected_pivot = middle_element;
      if (comparison_result == '\0') {
        comparison_result = compare_elements_32bit(&stack_context, first_element, last_element);
        middle_element = first_element;
LAB_18009d5b5:
        selected_pivot = middle_element;
        if (comparison_result != '\0') {
          selected_pivot = last_element;
        }
      }
    }
    stack_context = CONCAT44(stack_context._4_4_, selected_pivot);
    middle_index = partition_32bit(array_start, array_end, &stack_context, sort_context);
    depth = depth + -1;
    quick_sort_32bit(middle_index, array_end, depth);
    array_size = middle_index - (int64_t)array_start;
    array_end = middle_index;
  } while( true );
}



// 函数: void quick_sort_32bit_optimized(int32_t *array_start, int64_t array_end, int64_t depth, uint64_t sort_context)
// 功能: 优化的32位快速排序算法
// 参数: array_start - 数组起始指针, array_end - 数组结束位置, depth - 递归深度, sort_context - 排序上下文
void quick_sort_32bit_optimized(int32_t *array_start, int64_t array_end, int64_t depth, uint64_t sort_context)

{
  int32_t first_element;
  int32_t last_element;
  char comparison_result;
  int64_t current_position;
  uint64_t array_size;
  int64_t middle_index;
  int32_t middle_element;
  int32_t selected_pivot;
  uint64_t stack_param;
  
  array_size = current_position - (int64_t)array_start;
  do {
    if (((int64_t)(array_size & 0xfffffffffffffffc) < 0x71) || (depth < 1)) {
      if (depth == 0) {
        final_sort_32bit(array_start, array_end, array_end, sort_context);
      }
      return;
    }
    middle_index = array_end - (int64_t)array_start >> 2;
    if (middle_index < 0) {
      middle_index = middle_index + 1;
    }
    first_element = *array_start;
    last_element = *(int32_t *)(array_end + -4);
    middle_element = array_start[middle_index >> 1];
    stack_param = sort_context;
    comparison_result = compare_elements_32bit(&param_param, first_element, middle_element);
    if (comparison_result == '\0') {
      comparison_result = compare_elements_32bit(&param_param, first_element, last_element);
      selected_pivot = first_element;
      if (comparison_result == '\0') {
        comparison_result = compare_elements_32bit(&param_param, middle_element, last_element);
        goto LAB_18009d5b5;
      }
    }
    else {
      comparison_result = compare_elements_32bit(&param_param, middle_element, last_element);
      selected_pivot = middle_element;
      if (comparison_result == '\0') {
        comparison_result = compare_elements_32bit(&param_param, first_element, last_element);
        middle_element = first_element;
LAB_18009d5b5:
        selected_pivot = middle_element;
        if (comparison_result != '\0') {
          selected_pivot = last_element;
        }
      }
    }
    stack_param = CONCAT44(stack_param._4_4_, selected_pivot);
    middle_index = partition_32bit(array_start, array_end, &param_param, sort_context);
    depth = depth + -1;
    quick_sort_32bit(middle_index, array_end, depth);
    array_size = middle_index - (int64_t)array_start;
    array_end = middle_index;
  } while( true );
}



// 函数: void iterative_quick_sort_32bit(void)
// 功能: 迭代式32位快速排序算法
void iterative_quick_sort_32bit(void)

{
  int32_t first_element;
  int32_t last_element;
  char comparison_result;
  int64_t partition_index;
  uint64_t context_param;
  int32_t middle_element;
  int32_t selected_pivot;
  int64_t recursion_depth;
  int32_t *array_start;
  int64_t array_end;
  uint64_t stack_param;
  
  do {
    if (recursion_depth < 1) break;
    partition_index = array_end - (int64_t)array_start >> 2;
    if (partition_index < 0) {
      partition_index = partition_index + 1;
    }
    first_element = *array_start;
    last_element = *(int32_t *)(array_end + -4);
    middle_element = array_start[partition_index >> 1];
    stack_param._4_4_ = (int)((uint64_t)context_param >> 0x20);
    comparison_result = compare_elements_32bit(&param_param, first_element, middle_element);
    if (comparison_result == '\0') {
      comparison_result = compare_elements_32bit(&param_param, first_element, last_element);
      selected_pivot = first_element;
      if (comparison_result == '\0') {
        comparison_result = compare_elements_32bit(&param_param, middle_element, last_element);
        goto LAB_18009d5b5;
      }
    }
    else {
      comparison_result = compare_elements_32bit(&param_param, middle_element, last_element);
      selected_pivot = middle_element;
      if (comparison_result == '\0') {
        comparison_result = compare_elements_32bit(&param_param, first_element, last_element);
        middle_element = first_element;
LAB_18009d5b5:
        selected_pivot = middle_element;
        if (comparison_result != '\0') {
          selected_pivot = last_element;
        }
      }
    }
    stack_param = CONCAT44(stack_param._4_4_, selected_pivot);
    partition_index = partition_32bit();
    recursion_depth = recursion_depth + -1;
    quick_sort_32bit(partition_index, array_end, recursion_depth);
    array_end = partition_index;
  } while (0x70 < (int64_t)(partition_index - (int64_t)array_start & 0xfffffffffffffffcU));
  if (recursion_depth == 0) {
    final_sort_32bit();
  }
  return;
}



// 函数: void conditional_final_sort_32bit(void)
// 功能: 条件性最终排序32位数据
void conditional_final_sort_32bit(void)

{
  int64_t recursion_depth;
  
  if (recursion_depth == 0) {
    final_sort_32bit();
  }
  return;
}



// 函数: void direct_final_sort_32bit(void)
// 功能: 直接最终排序32位数据
void direct_final_sort_32bit(void)

{
  final_sort_32bit();
  return;
}



// 函数: void quick_sort_double(int64_t *array_start, int64_t *array_end, int64_t depth, int8_t sort_flag)
// 功能: 双精度浮点数快速排序算法
// 参数: array_start - 数组起始指针, array_end - 数组结束指针, depth - 递归深度, sort_flag - 排序标志
void quick_sort_double(int64_t *array_start, int64_t *array_end, int64_t depth, int8_t sort_flag)

{
  int64_t *temp_ptr;
  double first_value;
  double middle_value;
  double last_value;
  double selected_value;
  double compare_value;
  uint64_t array_size;
  int64_t middle_index;
  int64_t first_index;
  int64_t *left_ptr;
  int64_t *right_ptr;
  int64_t pivot_index;
  
  array_size = (int64_t)array_end - (int64_t)array_start;
  while ((0xe0 < (int64_t)(array_size & 0xfffffffffffffff8) && (0 < depth))) {
    middle_index = (int64_t)array_end - (int64_t)array_start >> 3;
    if (middle_index < 0) {
      middle_index = middle_index + 1;
    }
    first_index = *array_start;
    first_value = *(double *)(first_index + 0x40);
    middle_index = array_start[middle_index >> 1];
    middle_value = *(double *)(middle_index + 0x40);
    last_value = *(double *)(array_end[-1] + 0x40);
    pivot_index = first_index;
    selected_value = middle_value;
    if (middle_value < first_value) {
      pivot_index = middle_index;
      middle_index = first_index;
      selected_value = first_value;
      first_value = middle_value;
    }
    if ((first_value <= last_value) && (pivot_index = middle_index, last_value < selected_value)) {
      pivot_index = array_end[-1];
    }
    middle_value = *(double *)(pivot_index + 0x40);
    right_ptr = array_end;
    left_ptr = array_start;
    while( true ) {
      while (middle_value < *(double *)(first_index + 0x40)) {
        temp_ptr = left_ptr + 1;
        left_ptr = left_ptr + 1;
        first_index = *temp_ptr;
      }
      temp_ptr = right_ptr + -1;
      right_ptr = right_ptr + -1;
      if (*(double *)(*temp_ptr + 0x40) <= middle_value && middle_value != *(double *)(*temp_ptr + 0x40)) {
        do {
          temp_ptr = right_ptr + -1;
          right_ptr = right_ptr + -1;
        } while (*(double *)(*temp_ptr + 0x40) <= middle_value && middle_value != *(double *)(*temp_ptr + 0x40));
      }
      if (right_ptr <= left_ptr) break;
      middle_index = *left_ptr;
      *left_ptr = *right_ptr;
      left_ptr = left_ptr + 1;
      *right_ptr = middle_index;
      first_index = *left_ptr;
    }
    depth = depth + -1;
    quick_sort_double(left_ptr, array_end, depth, sort_flag);
    array_size = (int64_t)left_ptr - (int64_t)array_start;
    array_end = left_ptr;
  }
  if (depth == 0) {
    final_sort_double(array_start, array_end, array_end, sort_flag);
  }
  return;
}



// 函数: void quick_sort_double_optimized(int64_t *array_start, int64_t *array_end, int64_t depth, int8_t sort_flag)
// 功能: 优化的双精度浮点数快速排序算法
// 参数: array_start - 数组起始指针, array_end - 数组结束指针, depth - 递归深度, sort_flag - 排序标志
void quick_sort_double_optimized(int64_t *array_start, int64_t *array_end, int64_t depth, int8_t sort_flag)

{
  int64_t *temp_ptr;
  double first_value;
  double middle_value;
  double last_value;
  double selected_value;
  double compare_value;
  int64_t current_position;
  uint64_t array_size;
  int64_t middle_index;
  int64_t first_index;
  int64_t *left_ptr;
  int64_t *right_ptr;
  int64_t pivot_index;
  
  array_size = current_position - (int64_t)array_start;
  while ((0xe0 < (int64_t)(array_size & 0xfffffffffffffff8) && (0 < depth))) {
    middle_index = (int64_t)array_end - (int64_t)array_start >> 3;
    if (middle_index < 0) {
      middle_index = middle_index + 1;
    }
    first_index = *array_start;
    first_value = *(double *)(first_index + 0x40);
    middle_index = array_start[middle_index >> 1];
    middle_value = *(double *)(middle_index + 0x40);
    last_value = *(double *)(array_end[-1] + 0x40);
    pivot_index = first_index;
    selected_value = middle_value;
    if (middle_value < first_value) {
      pivot_index = middle_index;
      middle_index = first_index;
      selected_value = first_value;
      first_value = middle_value;
    }
    if ((first_value <= last_value) && (pivot_index = middle_index, last_value < selected_value)) {
      pivot_index = array_end[-1];
    }
    middle_value = *(double *)(pivot_index + 0x40);
    right_ptr = array_end;
    left_ptr = array_start;
    while( true ) {
      while (middle_value < *(double *)(first_index + 0x40)) {
        temp_ptr = left_ptr + 1;
        left_ptr = left_ptr + 1;
        first_index = *temp_ptr;
      }
      temp_ptr = right_ptr + -1;
      right_ptr = right_ptr + -1;
      if (*(double *)(*temp_ptr + 0x40) <= middle_value && middle_value != *(double *)(*temp_ptr + 0x40)) {
        do {
          temp_ptr = right_ptr + -1;
          right_ptr = right_ptr + -1;
        } while (*(double *)(*temp_ptr + 0x40) <= middle_value && middle_value != *(double *)(*temp_ptr + 0x40));
      }
      if (right_ptr <= left_ptr) break;
      middle_index = *left_ptr;
      *left_ptr = *right_ptr;
      left_ptr = left_ptr + 1;
      *right_ptr = middle_index;
      first_index = *left_ptr;
    }
    depth = depth + -1;
    quick_sort_double(left_ptr, array_end, depth, sort_flag);
    array_size = (int64_t)left_ptr - (int64_t)array_start;
    array_end = left_ptr;
  }
  if (depth == 0) {
    final_sort_double(array_start, array_end, array_end, sort_flag);
  }
  return;
}



// 函数: void iterative_quick_sort_double(uint64_t sort_context)
// 功能: 迭代式双精度浮点数快速排序算法
// 参数: sort_context - 排序上下文
void iterative_quick_sort_double(uint64_t sort_context)

{
  int64_t *temp_ptr;
  double first_value;
  double middle_value;
  double last_value;
  double selected_value;
  double compare_value;
  int64_t middle_index;
  int64_t first_index;
  int64_t *left_ptr;
  int64_t *swap_ptr;
  int8_t sort_flag;
  int64_t recursion_depth;
  int64_t *array_start;
  int64_t *array_end;
  int64_t *partition_ptr;
  int64_t pivot_index;
  
  do {
    partition_ptr = array_end;
    if (recursion_depth < 1) break;
    middle_index = (int64_t)array_end - (int64_t)array_start >> 3;
    if (middle_index < 0) {
      middle_index = middle_index + 1;
    }
    first_index = *array_start;
    first_value = *(double *)(first_index + 0x40);
    middle_index = array_start[middle_index >> 1];
    middle_value = *(double *)(middle_index + 0x40);
    last_value = *(double *)(array_end[-1] + 0x40);
    pivot_index = first_index;
    selected_value = middle_value;
    if (middle_value < first_value) {
      pivot_index = middle_index;
      middle_index = first_index;
      selected_value = first_value;
      first_value = middle_value;
    }
    if ((first_value <= last_value) && (pivot_index = middle_index, last_value < selected_value)) {
      pivot_index = array_end[-1];
    }
    middle_value = *(double *)(pivot_index + 0x40);
    swap_ptr = array_end;
    left_ptr = array_start;
    while( true ) {
      while (middle_value < *(double *)(first_index + 0x40)) {
        temp_ptr = left_ptr + 1;
        left_ptr = left_ptr + 1;
        first_index = *temp_ptr;
      }
      temp_ptr = swap_ptr + -1;
      swap_ptr = swap_ptr + -1;
      if (*(double *)(*temp_ptr + 0x40) <= middle_value && middle_value != *(double *)(*temp_ptr + 0x40)) {
        do {
          temp_ptr = swap_ptr + -1;
          swap_ptr = swap_ptr + -1;
        } while (*(double *)(*temp_ptr + 0x40) <= middle_value && middle_value != *(double *)(*temp_ptr + 0x40));
      }
      if (swap_ptr <= left_ptr) break;
      middle_index = *left_ptr;
      *left_ptr = *swap_ptr;
      left_ptr = left_ptr + 1;
      *swap_ptr = middle_index;
      first_index = *left_ptr;
    }
    recursion_depth = recursion_depth + -1;
    sort_context = quick_sort_double(left_ptr, array_end, recursion_depth, sort_flag);
    array_end = left_ptr;
  } while (0xe0 < (int64_t)((int64_t)left_ptr - (int64_t)array_start & 0xfffffffffffffff8U));
  if (recursion_depth == 0) {
    final_sort_double(sort_context, left_ptr, left_ptr, sort_flag);
  }
  return;
}



// 函数: void conditional_final_sort_double(void)
// 功能: 条件性最终排序双精度浮点数
void conditional_final_sort_double(void)

{
  int64_t recursion_depth;
  
  if (recursion_depth == 0) {
    final_sort_double();
  }
  return;
}



// 函数: void direct_final_sort_double(void)
// 功能: 直接最终排序双精度浮点数
void direct_final_sort_double(void)

{
  final_sort_double();
  return;
}

// WARNING: Removing unreachable block (ram,0x00018009e099)
// WARNING: Removing unreachable block (ram,0x00018009e0a6)
// WARNING: Removing unreachable block (ram,0x00018009e0b0)
// WARNING: Removing unreachable block (ram,0x00018009e0c3)
// WARNING: Removing unreachable block (ram,0x00018009e0d6)
// WARNING: Removing unreachable block (ram,0x00018009e0e0)
// WARNING: Removing unreachable block (ram,0x00018009e0f0)
// WARNING: Removing unreachable block (ram,0x00018009e0f4)
// WARNING: Removing unreachable block (ram,0x00018009e10c)
// WARNING: Removing unreachable block (ram,0x00018009e10e)
// WARNING: Removing unreachable block (ram,0x00018009e11b)
// WARNING: Removing unreachable block (ram,0x00018009e120)
// WARNING: Removing unreachable block (ram,0x00018009e132)
// WARNING: Removing unreachable block (ram,0x00018009e140)
// WARNING: Removing unreachable block (ram,0x00018009e146)



// 函数: void quick_sort_float(float *array_start, float *array_end, int64_t depth)
// 功能: 单精度浮点数快速排序算法
// 参数: array_start - 数组起始指针, array_end - 数组结束指针, depth - 递归深度
void quick_sort_float(float *array_start, float *array_end, int64_t depth)

{
  float first_value;
  float last_value;
  uint64_t array_size;
  int64_t middle_index;
  int64_t heap_index;
  float *left_ptr;
  int64_t left_index;
  int64_t right_index;
  float *right_ptr;
  int64_t heap_size;
  int64_t heap_parent;
  int64_t pivot_index;
  bool heap_complete;
  float pivot_value;
  float middle_value;
  
  array_size = (int64_t)array_end - (int64_t)array_start;
  while ((0x70 < (int64_t)(array_size & 0xfffffffffffffffc) && (0 < depth))) {
    middle_index = (int64_t)array_end - (int64_t)array_start >> 2;
    if (middle_index < 0) {
      middle_index = middle_index + 1;
    }
    pivot_value = *array_start;
    first_value = array_end[-1];
    last_value = array_start[middle_index >> 1];
    middle_value = pivot_value;
    if (pivot_value < last_value) {
      middle_value = last_value;
      last_value = pivot_value;
    }
    right_ptr = array_end;
    left_ptr = array_start;
    if ((first_value <= middle_value) && (middle_value = last_value, last_value < first_value)) {
      middle_value = first_value;
    }
    while( true ) {
      while (pivot_value < middle_value) {
        pivot_value = left_ptr[1];
        left_ptr = left_ptr + 1;
      }
      right_ptr = right_ptr + -1;
      first_value = *right_ptr;
      while (middle_value < first_value) {
        right_ptr = right_ptr + -1;
        first_value = *right_ptr;
      }
      if (right_ptr <= left_ptr) break;
      first_value = *left_ptr;
      *left_ptr = *right_ptr;
      *right_ptr = first_value;
      pivot_value = left_ptr[1];
      left_ptr = left_ptr + 1;
    }
    depth = depth + -1;
    quick_sort_float(left_ptr, array_end, depth);
    array_size = (int64_t)left_ptr - (int64_t)array_start;
    array_end = left_ptr;
  }
  if (depth != 0) {
    return;
  }
  middle_index = (int64_t)array_end - (int64_t)array_start >> 2;
  if (1 < middle_index) {
    heap_parent = (middle_index + -2 >> 1) + 1;
    heap_size = heap_parent * 2 + 2;
    do {
      first_value = array_start[heap_parent + -1];
      heap_parent = heap_parent + -1;
      heap_size = heap_size + -2;
      left_index = heap_parent;
      right_index = heap_size;
      while (right_index < middle_index) {
        left_index = right_index + -1;
        if (array_start[right_index + -1] < array_start[right_index] || array_start[right_index + -1] == array_start[right_index]) {
          left_index = right_index;
        }
        array_start[left_index] = array_start[left_index];
        left_index = left_index;
        right_index = left_index * 2 + 2;
      }
      if (right_index == middle_index) {
        array_start[left_index] = array_start[right_index + -1];
        left_index = right_index + -1;
      }
      while (heap_parent < left_index) {
        right_index = left_index + -1 >> 1;
        if (first_value <= array_start[right_index]) break;
        array_start[left_index] = array_start[right_index];
        left_index = right_index;
      }
      array_start[left_index] = first_value;
    } while (heap_parent != 0);
  }
  if (1 < middle_index) {
    array_end = array_end + -1;
    do {
      first_value = *array_end;
      middle_index = middle_index + -1;
      heap_parent = 2;
      *array_end = *array_start;
      heap_complete = middle_index == 2;
      left_index = 0;
      heap_size = 0;
      if (2 < middle_index) {
        do {
          heap_size = heap_parent + -1;
          if (array_start[heap_parent + -1] < array_start[heap_parent] || array_start[heap_parent + -1] == array_start[heap_parent]) {
            heap_size = heap_parent;
          }
          heap_parent = heap_size * 2 + 2;
          array_start[left_index] = array_start[heap_size];
          heap_complete = heap_parent == middle_index;
          left_index = heap_size;
        } while (heap_parent < middle_index);
      }
      if (heap_complete) {
        array_start[heap_size] = array_start[heap_parent + -1];
        heap_size = heap_parent + -1;
      }
      while (0 < heap_size) {
        middle_index = heap_size + -1 >> 1;
        if (first_value <= array_start[middle_index]) break;
        array_start[heap_size] = array_start[middle_index];
        heap_size = middle_index;
      }
      array_end = array_end + -1;
      array_start[heap_size] = first_value;
      middle_index = (4 - (int64_t)array_start) + (int64_t)array_end >> 2;
    } while (1 < middle_index);
  }
  return;
}

// WARNING: Removing unreachable block (ram,0x00018009e099)
// WARNING: Removing unreachable block (ram,0x00018009e0a6)
// WARNING: Removing unreachable block (ram,0x00018009e0b0)
// WARNING: Removing unreachable block (ram,0x00018009e0c3)
// WARNING: Removing unreachable block (ram,0x00018009e0d6)
// WARNING: Removing unreachable block (ram,0x00018009e0e0)
// WARNING: Removing unreachable block (ram,0x00018009e0f0)
// WARNING: Removing unreachable block (ram,0x00018009e0f4)
// WARNING: Removing unreachable block (ram,0x00018009e10c)
// WARNING: Removing unreachable block (ram,0x00018009e10e)
// WARNING: Removing unreachable block (ram,0x00018009e11b)
// WARNING: Removing unreachable block (ram,0x00018009e120)
// WARNING: Removing unreachable block (ram,0x00018009e132)
// WARNING: Removing unreachable block (ram,0x00018009e140)
// WARNING: Removing unreachable block (ram,0x00018009e146)



// 函数: void quick_sort_float_optimized(float *array_start, float *array_end, int64_t depth)
// 功能: 优化的单精度浮点数快速排序算法
// 参数: array_start - 数组起始指针, array_end - 数组结束指针, depth - 递归深度
void quick_sort_float_optimized(float *array_start, float *array_end, int64_t depth)

{
  float first_value;
  float last_value;
  int64_t current_position;
  uint64_t array_size;
  int64_t middle_index;
  int64_t heap_index;
  float *left_ptr;
  int64_t left_index;
  int64_t right_index;
  float *right_ptr;
  int64_t heap_size;
  int64_t heap_parent;
  int64_t pivot_index;
  bool heap_complete;
  float pivot_value;
  float middle_value;
  
  array_size = current_position - (int64_t)array_start;
  while ((0x70 < (int64_t)(array_size & 0xfffffffffffffffc) && (0 < depth))) {
    middle_index = (int64_t)array_end - (int64_t)array_start >> 2;
    if (middle_index < 0) {
      middle_index = middle_index + 1;
    }
    pivot_value = *array_start;
    first_value = array_end[-1];
    last_value = array_start[middle_index >> 1];
    middle_value = pivot_value;
    if (pivot_value < last_value) {
      middle_value = last_value;
      last_value = pivot_value;
    }
    right_ptr = array_end;
    left_ptr = array_start;
    if ((first_value <= middle_value) && (middle_value = last_value, last_value < first_value)) {
      middle_value = first_value;
    }
    while( true ) {
      while (pivot_value < middle_value) {
        pivot_value = left_ptr[1];
        left_ptr = left_ptr + 1;
      }
      right_ptr = right_ptr + -1;
      first_value = *right_ptr;
      while (middle_value < first_value) {
        right_ptr = right_ptr + -1;
        first_value = *right_ptr;
      }
      if (right_ptr <= left_ptr) break;
      first_value = *left_ptr;
      *left_ptr = *right_ptr;
      *right_ptr = first_value;
      pivot_value = left_ptr[1];
      left_ptr = left_ptr + 1;
    }
    depth = depth + -1;
    quick_sort_float(left_ptr, array_end, depth);
    array_size = (int64_t)left_ptr - (int64_t)array_start;
    array_end = left_ptr;
  }
  if (depth != 0) {
    return;
  }
  middle_index = (int64_t)array_end - (int64_t)array_start >> 2;
  if (1 < middle_index) {
    heap_parent = (middle_index + -2 >> 1) + 1;
    heap_size = heap_parent * 2 + 2;
    do {
      first_value = array_start[heap_parent + -1];
      heap_parent = heap_parent + -1;
      heap_size = heap_size + -2;
      left_index = heap_parent;
      right_index = heap_size;
      while (right_index < middle_index) {
        left_index = right_index + -1;
        if (array_start[right_index + -1] < array_start[right_index] || array_start[right_index + -1] == array_start[right_index]) {
          left_index = right_index;
        }
        array_start[left_index] = array_start[left_index];
        left_index = left_index;
        right_index = left_index * 2 + 2;
      }
      if (right_index == middle_index) {
        array_start[left_index] = array_start[right_index + -1];
        left_index = right_index + -1;
      }
      while (heap_parent < left_index) {
        right_index = left_index + -1 >> 1;
        if (first_value <= array_start[right_index]) break;
        array_start[left_index] = array_start[right_index];
        left_index = right_index;
      }
      array_start[left_index] = first_value;
    } while (heap_parent != 0);
  }
  if (1 < middle_index) {
    array_end = array_end + -1;
    do {
      first_value = *array_end;
      middle_index = middle_index + -1;
      heap_parent = 2;
      *array_end = *array_start;
      heap_complete = middle_index == 2;
      left_index = 0;
      heap_size = 0;
      if (2 < middle_index) {
        do {
          heap_size = heap_parent + -1;
          if (array_start[heap_parent + -1] < array_start[heap_parent] || array_start[heap_parent + -1] == array_start[heap_parent]) {
            heap_size = heap_parent;
          }
          heap_parent = heap_size * 2 + 2;
          array_start[left_index] = array_start[heap_size];
          heap_complete = heap_parent == middle_index;
          left_index = heap_size;
        } while (heap_parent < middle_index);
      }
      if (heap_complete) {
        array_start[heap_size] = array_start[heap_parent + -1];
        heap_size = heap_parent + -1;
      }
      while (0 < heap_size) {
        middle_index = heap_size + -1 >> 1;
        if (first_value <= array_start[middle_index]) break;
        array_start[heap_size] = array_start[middle_index];
        heap_size = middle_index;
      }
      array_end = array_end + -1;
      array_start[heap_size] = first_value;
      middle_index = (4 - (int64_t)array_start) + (int64_t)array_end >> 2;
    } while (1 < middle_index);
  }
  return;
}

// WARNING: Removing unreachable block (ram,0x00018009e099)
// WARNING: Removing unreachable block (ram,0x00018009e0a6)
// WARNING: Removing unreachable block (ram,0x00018009e0b0)
// WARNING: Removing unreachable block (ram,0x00018009e0c3)
// WARNING: Removing unreachable block (ram,0x00018009e0d6)
// WARNING: Removing unreachable block (ram,0x00018009e0e0)
// WARNING: Removing unreachable block (ram,0x00018009e0f0)
// WARNING: Removing unreachable block (ram,0x00018009e0f4)
// WARNING: Removing unreachable block (ram,0x00018009e10c)
// WARNING: Removing unreachable block (ram,0x00018009e10e)
// WARNING: Removing unreachable block (ram,0x00018009e11b)
// WARNING: Removing unreachable block (ram,0x00018009e120)
// WARNING: Removing unreachable block (ram,0x00018009e132)
// WARNING: Removing unreachable block (ram,0x00018009e140)
// WARNING: Removing unreachable block (ram,0x00018009e146)