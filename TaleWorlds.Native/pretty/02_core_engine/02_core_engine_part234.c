#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part234.c - 核心引擎高级排序算法模块
// 本文件包含5个高度优化的排序和数据分区函数
// 主要用于游戏引擎中的高效数据处理

/**
 * 16字节元素快速排序函数
 * 
 * 这是一个优化的快速排序实现，专门处理16字节大小的元素
 * 使用插入排序优化小数组，递归深度优化，以及三数取中法选择基准点
 * 
 * @param data_array 指向16字节数组起始位置的指针
 * @param end_ptr 指向数组结束位置的指针
 * @param depth 当前递归深度，用于优化递归调用
 * @param sort_flags 排序标志位，控制排序行为
 */
void quick_sort_16byte_elements(undefined1 (*data_array) [16], undefined1 (*end_ptr) [16], 
                              longlong depth, undefined1 sort_flags)
{
  bool comparison_result;
  undefined8 temp_data_8bytes;
  longlong element_count;
  undefined1 (*current_ptr) [16];
  int compare_value;
  undefined1 (*insertion_ptr) [16];
  undefined1 (*prev_ptr) [16];
  undefined1 (*next_ptr) [16];
  undefined1 temp_buffer_8bytes[8];
  undefined1 current_element[16];
  undefined1 comparison_element[16];
  
  // 计算数组中的元素数量（每个元素16字节）
  element_count = (longlong)end_ptr - (longlong)data_array;
  do {
    element_count = element_count >> 4;  // 除以16得到元素个数
    
    // 小数组优化：使用插入排序处理小于33个元素的数组
    if (element_count < 0x21) {
small_array_sort:
      // 插入排序实现
      if (((1 < element_count) && (data_array != end_ptr)) && 
          (insertion_ptr = data_array + 1, insertion_ptr != end_ptr)) {
        next_ptr = data_array + 2;
        do {
          // 读取当前元素
          current_element = *insertion_ptr;
          compare_value = current_element._8_4_;
          
          // 比较主键（第一个8字节中的后4字节）
          if (compare_value == *(int *)(*data_array + 8)) {
            // 主键相等时比较次键（第二个8字节中的后4字节）
            comparison_result = current_element._12_4_ < *(int *)(*data_array + 0xc);
          }
          else {
            comparison_result = *(int *)(*data_array + 8) < compare_value;
          }
          
          current_ptr = insertion_ptr;
          if (comparison_result) {
            // 当前元素小于基准元素，需要插入到前面
            comparison_element = current_element;
            func_0x00018018a000(temp_buffer_8bytes);  // 内存管理函数调用
            
            // 移动元素为新元素腾出空间
            memmove((longlong)next_ptr - ((longlong)insertion_ptr - (longlong)data_array), data_array);
          }
          
          // 向前查找合适的插入位置
          while( true ) {
            if (compare_value == *(int *)(current_ptr[-1] + 8)) {
              comparison_result = current_element._12_4_ < *(int *)(current_ptr[-1] + 0xc);
            }
            else {
              comparison_result = *(int *)(current_ptr[-1] + 8) < compare_value;
            }
            if (!comparison_result) break;
            
            // 交换元素位置
            temp_data_8bytes = *(undefined8 *)(current_ptr[-1] + 8);
            *(undefined8 *)*current_ptr = *(undefined8 *)current_ptr[-1];
            *(undefined8 *)(*current_ptr + 8) = temp_data_8bytes;
            current_ptr = current_ptr + -1;
          }
          *current_ptr = current_element;
          insertion_ptr = insertion_ptr + 1;
          next_ptr = next_ptr + 1;
        } while (insertion_ptr != end_ptr);
      }
      return;
    }
    
    // 递归深度优化：防止栈溢出
    if (depth < 1) {
      if (0x20 < element_count) {
        // 使用堆排序处理大数组
        FUN_180204700(data_array, end_ptr, sort_flags);
        if ((longlong)end_ptr - (longlong)data_array >> 4 < 2) {
          return;
        }
        
        // 递归处理剩余元素
        end_ptr = end_ptr + -1;
        do {
          current_element = *end_ptr;
          temp_data_8bytes = *(undefined8 *)(*data_array + 8);
          *(undefined8 *)*end_ptr = *(undefined8 *)*data_array;
          *(undefined8 *)(*end_ptr + 8) = temp_data_8bytes;
          
          // 递归调用排序函数
          FUN_180204870(data_array, 0, (longlong)end_ptr - (longlong)data_array >> 4, 
                        current_element, sort_flags);
          end_ptr = end_ptr + -1;
        } while (1 < (longlong)end_ptr + (0x10 - (longlong)data_array) >> 4);
        return;
      }
      goto small_array_sort;
    }
    
    // 选择基准点（三数取中法）
    FUN_180204420(current_element, data_array, end_ptr, sort_flags);
    insertion_ptr = (undefined1 (*) [16])current_element._0_8_;
    temp_data_8bytes = current_element._8_8_;
    depth = (depth >> 1) + (depth >> 2);  // 优化递归深度
    
    // 选择较小的子数组优先处理（优化栈空间使用）
    if ((longlong)(current_element._0_8_ - (longlong)data_array & 0xfffffffffffffff0U) <
        (longlong)((longlong)end_ptr - current_element._8_8_ & 0xfffffffffffffff0U)) {
      // 递归处理左子数组
      FUN_1802041f0(data_array, current_element._0_8_, depth, sort_flags);
      insertion_ptr = end_ptr;
      data_array = (undefined1 (*) [16])temp_data_8bytes;
    }
    else {
      // 递归处理右子数组
      FUN_1802041f0(current_element._8_8_, end_ptr, depth, sort_flags);
    }
    
    element_count = (longlong)insertion_ptr - (longlong)data_array;
    end_ptr = insertion_ptr;
  } while( true );
}

/**
 * 数据分区和基准点选择函数
 * 
 * 这个函数实现了高级的分区算法，用于快速排序中的基准点选择
 * 使用多路比较和优化的数据移动策略
 * 
 * @param pivot_info 输出参数，存储选择的基准点信息
 * @param start_ptr 分区起始指针
 * @param end_ptr 分区结束指针
 * @return 返回基准点信息的指针
 */
undefined8 * select_pivot_element(undefined8 *pivot_info, undefined8 *start_ptr, undefined8 *end_ptr)
{
  int left_compare_value;
  int right_compare_value;
  bool comparison_result;
  undefined8 temp_data_1;
  undefined8 temp_data_2;
  undefined8 temp_data_3;
  undefined8 *left_ptr;
  undefined8 *right_ptr;
  undefined8 *middle_ptr;
  undefined8 *pivot_candidate;
  undefined8 *scan_ptr;
  undefined8 *compare_ptr;
  undefined8 *swap_ptr;
  longlong partition_size;
  longlong block_size;
  undefined8 *temp_ptr;
  
  // 选择中间候选点（使用位移操作优化计算）
  pivot_candidate = start_ptr + ((longlong)end_ptr - (longlong)start_ptr >> 5) * 2;
  partition_size = (longlong)end_ptr + (-0x10 - (longlong)start_ptr) >> 4;
  
  // 小分区优化：使用简单的三数取中法
  if (partition_size < 0x29) {
    func_0x000180204980(start_ptr, pivot_candidate, end_ptr + -2);
  }
  else {
    // 大分区：使用多路采样优化
    block_size = partition_size + 1 >> 3;
    partition_size = block_size * 0x10;
    
    // 对多个采样点进行排序
    func_0x000180204980(start_ptr, start_ptr + block_size * 2, start_ptr + block_size * 4);
    func_0x000180204980((longlong)pivot_candidate - partition_size, pivot_candidate, 
                        partition_size + (longlong)pivot_candidate);
    
    partition_size = (longlong)end_ptr + (-0x10 - partition_size);
    func_0x000180204980(end_ptr + block_size * -4 + -2, partition_size, end_ptr + -2);
    func_0x000180204980(start_ptr + block_size * 2, pivot_candidate, partition_size);
  }
  
  right_ptr = pivot_candidate + 2;
  
  // 在左半部分查找合适的基准点
  if (start_ptr < pivot_candidate) {
    while( true ) {
      left_compare_value = *(int *)(pivot_candidate + -1);
      right_compare_value = *(int *)(pivot_candidate + 1);
      
      // 比较键值
      if (left_compare_value == right_compare_value) {
        comparison_result = *(int *)((longlong)pivot_candidate + -4) < 
                           *(int *)((longlong)pivot_candidate + 0xc);
      }
      else {
        comparison_result = right_compare_value < left_compare_value;
      }
      if (comparison_result) break;
      
      // 反向比较
      if (right_compare_value == left_compare_value) {
        comparison_result = *(int *)((longlong)pivot_candidate + 0xc) < 
                           *(int *)((longlong)pivot_candidate + -4);
      }
      else {
        comparison_result = left_compare_value < right_compare_value;
      }
      if ((comparison_result) || (pivot_candidate = pivot_candidate + -2, 
                                pivot_candidate <= start_ptr)) break;
    }
  }
  
  // 在右半部分查找合适的基准点
  left_ptr = right_ptr;
  scan_ptr = pivot_candidate;
  if (right_ptr < end_ptr) {
    left_compare_value = *(int *)(pivot_candidate + 1);
    while( true ) {
      right_compare_value = *(int *)(right_ptr + 1);
      if (right_compare_value == left_compare_value) {
        comparison_result = *(int *)((longlong)right_ptr + 0xc) < 
                           *(int *)((longlong)pivot_candidate + 0xc);
      }
      else {
        comparison_result = left_compare_value < right_compare_value;
      }
      left_ptr = right_ptr;
      if (comparison_result) break;
      
      if (left_compare_value == right_compare_value) {
        comparison_result = *(int *)((longlong)pivot_candidate + 0xc) < 
                           *(int *)((longlong)right_ptr + 0xc);
      }
      else {
        comparison_result = right_compare_value < left_compare_value;
      }
      if ((comparison_result) || (right_ptr = right_ptr + 2, left_ptr = right_ptr, 
                                end_ptr <= right_ptr)) break;
    }
  }
  
main_partition_loop:
  do {
    temp_ptr = pivot_candidate;
    if (end_ptr <= right_ptr) {
final_partition_phase:
      // 最终分区阶段：整理分区结果
      for (; start_ptr < pivot_candidate; pivot_candidate = pivot_candidate + -2) {
        middle_ptr = temp_ptr + -2;
        left_compare_value = *(int *)(temp_ptr + -1);
        right_compare_value = *(int *)(scan_ptr + 1);
        
        if (left_compare_value == right_compare_value) {
          comparison_result = *(int *)((longlong)temp_ptr + -4) < 
                             *(int *)((longlong)scan_ptr + 0xc);
        }
        else {
          comparison_result = right_compare_value < left_compare_value;
        }
        
        compare_ptr = scan_ptr;
        if (!comparison_result) {
          if (right_compare_value == left_compare_value) {
            comparison_result = *(int *)((longlong)scan_ptr + 0xc) < 
                               *(int *)((longlong)temp_ptr + -4);
          }
          else {
            comparison_result = left_compare_value < right_compare_value;
          }
          if (comparison_result) break;
          
          compare_ptr = scan_ptr + -2;
          if (compare_ptr != middle_ptr) {
            // 交换元素
            temp_data_1 = temp_ptr[-1];
            temp_data_2 = *compare_ptr;
            temp_data_3 = scan_ptr[-1];
            *compare_ptr = *middle_ptr;
            scan_ptr[-1] = temp_data_1;
            *middle_ptr = temp_data_2;
            temp_ptr[-1] = temp_data_3;
          }
        }
        scan_ptr = compare_ptr;
        temp_ptr = middle_ptr;
      }
      
      // 处理边界条件
      if (pivot_candidate == start_ptr) {
        if (right_ptr == end_ptr) {
          *pivot_info = scan_ptr;
          pivot_info[1] = left_ptr;
          return pivot_info;
        }
        
        if (left_ptr != right_ptr) {
          temp_data_1 = left_ptr[1];
          temp_data_2 = *scan_ptr;
          temp_data_3 = scan_ptr[1];
          *scan_ptr = *left_ptr;
          scan_ptr[1] = temp_data_1;
          *left_ptr = temp_data_2;
          left_ptr[1] = temp_data_3;
        }
        
        temp_data_1 = right_ptr[1];
        temp_data_2 = *scan_ptr;
        temp_data_3 = scan_ptr[1];
        *scan_ptr = *right_ptr;
        scan_ptr[1] = temp_data_1;
        *right_ptr = temp_data_2;
        right_ptr[1] = temp_data_3;
        
        right_ptr = right_ptr + 2;
        left_ptr = left_ptr + 2;
        scan_ptr = scan_ptr + 2;
      }
      else {
        temp_ptr = pivot_candidate + -2;
        if (right_ptr == end_ptr) {
          middle_ptr = scan_ptr + -2;
          if (temp_ptr != middle_ptr) {
            temp_data_1 = scan_ptr[-1];
            temp_data_2 = *temp_ptr;
            temp_data_3 = pivot_candidate[-1];
            *temp_ptr = *middle_ptr;
            pivot_candidate[-1] = temp_data_1;
            *middle_ptr = temp_data_2;
            scan_ptr[-1] = temp_data_3;
          }
          
          temp_data_1 = left_ptr[-1];
          temp_data_2 = *middle_ptr;
          temp_data_3 = scan_ptr[-1];
          *middle_ptr = left_ptr[-2];
          scan_ptr[-1] = temp_data_1;
          left_ptr[-2] = temp_data_2;
          left_ptr[-1] = temp_data_3;
          
          left_ptr = left_ptr + -2;
          pivot_candidate = temp_ptr;
          scan_ptr = middle_ptr;
        }
        else {
          temp_data_1 = *right_ptr;
          temp_data_2 = right_ptr[1];
          temp_data_3 = pivot_candidate[-1];
          *right_ptr = *temp_ptr;
          right_ptr[1] = temp_data_3;
          right_ptr = right_ptr + 2;
          *temp_ptr = temp_data_1;
          pivot_candidate[-1] = temp_data_2;
          pivot_candidate = temp_ptr;
        }
      }
      goto main_partition_loop;
    }
    
    // 主比较循环
    left_compare_value = *(int *)(scan_ptr + 1);
    right_compare_value = *(int *)(right_ptr + 1);
    if (left_compare_value == right_compare_value) {
      comparison_result = *(int *)((longlong)scan_ptr + 0xc) < 
                         *(int *)((longlong)right_ptr + 0xc);
    }
    else {
      comparison_result = right_compare_value < left_compare_value;
    }
    
    middle_ptr = left_ptr;
    if (!comparison_result) {
      if (right_compare_value == left_compare_value) {
        comparison_result = *(int *)((longlong)right_ptr + 0xc) < 
                           *(int *)((longlong)scan_ptr + 0xc);
      }
      else {
        comparison_result = left_compare_value < right_compare_value;
      }
      if (comparison_result) goto final_partition_phase;
      
      middle_ptr = left_ptr + 2;
      if (left_ptr != right_ptr) {
        temp_data_1 = right_ptr[1];
        temp_data_2 = *left_ptr;
        temp_data_3 = left_ptr[1];
        *left_ptr = *right_ptr;
        left_ptr[1] = temp_data_1;
        *right_ptr = temp_data_2;
        right_ptr[1] = temp_data_3;
      }
    }
    right_ptr = right_ptr + 2;
    left_ptr = middle_ptr;
  } while( true );
}

/**
 * 优化的数据分区函数（使用R10寄存器）
 * 
 * 这是select_pivot_element的优化版本，使用不同的寄存器分配策略
 * 在某些处理器架构上可能有更好的性能表现
 * 
 * @param pivot_info 输出参数，存储选择的基准点信息
 * @param start_ptr 分区起始指针
 * @param end_ptr 分区结束指针
 * @param r10_register 寄存器R10的值，用于优化计算
 * @return 返回基准点信息的指针
 */
undefined8 * optimized_pivot_selection(undefined8 *pivot_info, undefined8 *start_ptr, 
                                      undefined8 *end_ptr, longlong r10_register)
{
  int left_compare_value;
  int right_compare_value;
  bool comparison_result;
  undefined8 temp_data_1;
  undefined8 temp_data_2;
  undefined8 temp_data_3;
  undefined8 *left_ptr;
  undefined8 *right_ptr;
  undefined8 *middle_ptr;
  undefined8 *pivot_candidate;
  undefined8 *scan_ptr;
  undefined8 *compare_ptr;
  undefined8 *swap_ptr;
  longlong partition_size;
  longlong block_size;
  undefined8 *temp_ptr;
  
  // 使用R10寄存器优化基准点选择
  pivot_candidate = start_ptr + (r10_register - (longlong)start_ptr >> 5) * 2;
  partition_size = (longlong)end_ptr + (-0x10 - (longlong)start_ptr) >> 4;
  
  // 小分区优化处理
  if (partition_size < 0x29) {
    func_0x000180204980(start_ptr, pivot_candidate, end_ptr + -2);
  }
  else {
    // 大分区多路采样
    block_size = partition_size + 1 >> 3;
    partition_size = block_size * 0x10;
    
    func_0x000180204980(start_ptr, start_ptr + block_size * 2, start_ptr + block_size * 4);
    func_0x000180204980((longlong)pivot_candidate - partition_size, pivot_candidate, 
                        partition_size + (longlong)pivot_candidate);
    
    partition_size = (longlong)end_ptr + (-0x10 - partition_size);
    func_0x000180204980(end_ptr + block_size * -4 + -2, partition_size, end_ptr + -2);
    func_0x000180204980(start_ptr + block_size * 2, pivot_candidate, partition_size);
  }
  
  right_ptr = pivot_candidate + 2;
  
  // 左半部分基准点搜索
  if (start_ptr < pivot_candidate) {
    while( true ) {
      left_compare_value = *(int *)(pivot_candidate + -1);
      right_compare_value = *(int *)(pivot_candidate + 1);
      
      if (left_compare_value == right_compare_value) {
        comparison_result = *(int *)((longlong)pivot_candidate + -4) < 
                           *(int *)((longlong)pivot_candidate + 0xc);
      }
      else {
        comparison_result = right_compare_value < left_compare_value;
      }
      if (comparison_result) break;
      
      if (right_compare_value == left_compare_value) {
        comparison_result = *(int *)((longlong)pivot_candidate + 0xc) < 
                           *(int *)((longlong)pivot_candidate + -4);
      }
      else {
        comparison_result = left_compare_value < right_compare_value;
      }
      if ((comparison_result) || (pivot_candidate = pivot_candidate + -2, 
                                pivot_candidate <= start_ptr)) break;
    }
  }
  
  // 右半部分基准点搜索
  left_ptr = right_ptr;
  scan_ptr = pivot_candidate;
  if (right_ptr < end_ptr) {
    left_compare_value = *(int *)(pivot_candidate + 1);
    while( true ) {
      right_compare_value = *(int *)(right_ptr + 1);
      if (right_compare_value == left_compare_value) {
        comparison_result = *(int *)((longlong)right_ptr + 0xc) < 
                           *(int *)((longlong)pivot_candidate + 0xc);
      }
      else {
        comparison_result = left_compare_value < right_compare_value;
      }
      left_ptr = right_ptr;
      if (comparison_result) break;
      
      if (left_compare_value == right_compare_value) {
        comparison_result = *(int *)((longlong)pivot_candidate + 0xc) < 
                           *(int *)((longlong)right_ptr + 0xc);
      }
      else {
        comparison_result = right_compare_value < left_compare_value;
      }
      if ((comparison_result) || (right_ptr = right_ptr + 2, left_ptr = right_ptr, 
                                end_ptr <= right_ptr)) break;
    }
  }
  
optimized_main_loop:
  do {
    temp_ptr = pivot_candidate;
    if (end_ptr <= right_ptr) {
optimized_final_phase:
      // 最终分区整理阶段
      for (; start_ptr < pivot_candidate; pivot_candidate = pivot_candidate + -2) {
        middle_ptr = temp_ptr + -2;
        left_compare_value = *(int *)(temp_ptr + -1);
        right_compare_value = *(int *)(scan_ptr + 1);
        
        if (left_compare_value == right_compare_value) {
          comparison_result = *(int *)((longlong)temp_ptr + -4) < 
                             *(int *)((longlong)scan_ptr + 0xc);
        }
        else {
          comparison_result = right_compare_value < left_compare_value;
        }
        
        compare_ptr = scan_ptr;
        if (!comparison_result) {
          if (right_compare_value == left_compare_value) {
            comparison_result = *(int *)((longlong)scan_ptr + 0xc) < 
                               *(int *)((longlong)temp_ptr + -4);
          }
          else {
            comparison_result = left_compare_value < right_compare_value;
          }
          if (comparison_result) break;
          
          compare_ptr = scan_ptr + -2;
          if (compare_ptr != middle_ptr) {
            temp_data_1 = temp_ptr[-1];
            temp_data_2 = *compare_ptr;
            temp_data_3 = scan_ptr[-1];
            *compare_ptr = *middle_ptr;
            scan_ptr[-1] = temp_data_1;
            *middle_ptr = temp_data_2;
            temp_ptr[-1] = temp_data_3;
          }
        }
        scan_ptr = compare_ptr;
        temp_ptr = middle_ptr;
      }
      
      // 边界条件处理
      if (pivot_candidate == start_ptr) {
        if (right_ptr == end_ptr) {
          *pivot_info = scan_ptr;
          pivot_info[1] = left_ptr;
          return pivot_info;
        }
        
        if (left_ptr != right_ptr) {
          temp_data_1 = left_ptr[1];
          temp_data_2 = *scan_ptr;
          temp_data_3 = scan_ptr[1];
          *scan_ptr = *left_ptr;
          scan_ptr[1] = temp_data_1;
          *left_ptr = temp_data_2;
          left_ptr[1] = temp_data_3;
        }
        
        temp_data_1 = right_ptr[1];
        temp_data_2 = *scan_ptr;
        temp_data_3 = scan_ptr[1];
        *scan_ptr = *right_ptr;
        scan_ptr[1] = temp_data_1;
        *right_ptr = temp_data_2;
        right_ptr[1] = temp_data_3;
        
        right_ptr = right_ptr + 2;
        left_ptr = left_ptr + 2;
        scan_ptr = scan_ptr + 2;
      }
      else {
        temp_ptr = pivot_candidate + -2;
        if (right_ptr == end_ptr) {
          middle_ptr = scan_ptr + -2;
          if (temp_ptr != middle_ptr) {
            temp_data_1 = scan_ptr[-1];
            temp_data_2 = *temp_ptr;
            temp_data_3 = pivot_candidate[-1];
            *temp_ptr = *middle_ptr;
            pivot_candidate[-1] = temp_data_1;
            *middle_ptr = temp_data_2;
            scan_ptr[-1] = temp_data_3;
          }
          
          temp_data_1 = left_ptr[-1];
          temp_data_2 = *middle_ptr;
          temp_data_3 = scan_ptr[-1];
          *middle_ptr = left_ptr[-2];
          scan_ptr[-1] = temp_data_1;
          left_ptr[-2] = temp_data_2;
          left_ptr[-1] = temp_data_3;
          
          left_ptr = left_ptr + -2;
          pivot_candidate = temp_ptr;
          scan_ptr = middle_ptr;
        }
        else {
          temp_data_1 = *right_ptr;
          temp_data_2 = right_ptr[1];
          temp_data_3 = pivot_candidate[-1];
          *right_ptr = *temp_ptr;
          right_ptr[1] = temp_data_3;
          right_ptr = right_ptr + 2;
          *temp_ptr = temp_data_1;
          pivot_candidate[-1] = temp_data_2;
          pivot_candidate = temp_ptr;
        }
      }
      goto optimized_main_loop;
    }
    
    // 主比较循环（优化版本）
    left_compare_value = *(int *)(scan_ptr + 1);
    right_compare_value = *(int *)(right_ptr + 1);
    if (left_compare_value == right_compare_value) {
      comparison_result = *(int *)((longlong)scan_ptr + 0xc) < 
                         *(int *)((longlong)right_ptr + 0xc);
    }
    else {
      comparison_result = right_compare_value < left_compare_value;
    }
    
    middle_ptr = left_ptr;
    if (!comparison_result) {
      if (right_compare_value == left_compare_value) {
        comparison_result = *(int *)((longlong)right_ptr + 0xc) < 
                           *(int *)((longlong)scan_ptr + 0xc);
      }
      else {
        comparison_result = left_compare_value < right_compare_value;
      }
      if (comparison_result) goto optimized_final_phase;
      
      middle_ptr = left_ptr + 2;
      if (left_ptr != right_ptr) {
        temp_data_1 = right_ptr[1];
        temp_data_2 = *left_ptr;
        temp_data_3 = left_ptr[1];
        *left_ptr = *right_ptr;
        left_ptr[1] = temp_data_1;
        *right_ptr = temp_data_2;
        right_ptr[1] = temp_data_3;
      }
    }
    right_ptr = right_ptr + 2;
    left_ptr = middle_ptr;
  } while( true );
}

/**
 * 使用R11寄存器的优化分区排序函数
 * 
 * 这是一个高度优化的排序函数，使用R11寄存器进行特殊优化
 * 适用于特定场景下的高性能排序需求
 * 
 * @param base_ptr 基础指针
 * @param size_param 大小参数
 * @param r11_register R11寄存器值，用于优化计算
 * @param r10_register R10寄存器值，用于范围计算
 * @param rsi_register RSI寄存器值，用于结束位置
 * @param rbp_register RBP寄存器值，用于起始位置
 * @param r15_register R15寄存器值，用于结果存储
 */
void optimized_partition_sort(undefined8 base_ptr, longlong size_param, longlong r11_register,
                             undefined8 *r10_register, undefined8 *rsi_register, 
                             undefined8 *rbp_register, undefined8 *r15_register)
{
  longlong block_size;
  int left_compare_value;
  int right_compare_value;
  bool comparison_result;
  undefined8 temp_data_1;
  undefined8 temp_data_2;
  undefined8 temp_data_3;
  undefined8 *left_ptr;
  undefined8 *right_ptr;
  undefined8 *middle_ptr;
  undefined8 *pivot_candidate;
  undefined8 *scan_ptr;
  undefined8 *compare_ptr;
  undefined8 *swap_ptr;
  undefined8 *temp_ptr;
  longlong partition_size;
  longlong block_offset;
  
  // 使用R11寄存器进行块大小计算
  block_size = r11_register >> 3;
  block_offset = block_size * 0x10;
  partition_size = block_offset + size_param;
  
  // 多路分区初始化
  func_0x000180204980(base_ptr, partition_size, block_size * 0x20 + size_param);
  func_0x000180204980((longlong)r10_register - block_offset, r10_register, 
                      block_offset + (longlong)r10_register);
  
  block_offset = (longlong)rsi_register + (-0x10 - block_offset);
  func_0x000180204980(rsi_register + block_size * -4 + -2, block_offset, rsi_register + -2);
  func_0x000180204980(partition_size, r10_register, block_offset);
  
  right_ptr = r10_register + 2;
  
  // 左半部分搜索
  if (rbp_register < r10_register) {
    while( true ) {
      left_compare_value = *(int *)(r10_register + -1);
      right_compare_value = *(int *)(r10_register + 1);
      
      if (left_compare_value == right_compare_value) {
        comparison_result = *(int *)((longlong)r10_register + -4) < 
                           *(int *)((longlong)r10_register + 0xc);
      }
      else {
        comparison_result = right_compare_value < left_compare_value;
      }
      if (comparison_result) break;
      
      if (right_compare_value == left_compare_value) {
        comparison_result = *(int *)((longlong)r10_register + 0xc) < 
                           *(int *)((longlong)r10_register + -4);
      }
      else {
        comparison_result = left_compare_value < right_compare_value;
      }
      if ((comparison_result) || (r10_register = r10_register + -2, 
                                r10_register <= rbp_register)) break;
    }
  }
  
  // 右半部分搜索
  left_ptr = right_ptr;
  scan_ptr = r10_register;
  if (right_ptr < rsi_register) {
    left_compare_value = *(int *)(r10_register + 1);
    while( true ) {
      right_compare_value = *(int *)(right_ptr + 1);
      if (right_compare_value == left_compare_value) {
        comparison_result = *(int *)((longlong)right_ptr + 0xc) < 
                           *(int *)((longlong)r10_register + 0xc);
      }
      else {
        comparison_result = left_compare_value < right_compare_value;
      }
      left_ptr = right_ptr;
      if (comparison_result) break;
      
      if (left_compare_value == right_compare_value) {
        comparison_result = *(int *)((longlong)r10_register + 0xc) < 
                           *(int *)((longlong)right_ptr + 0xc);
      }
      else {
        comparison_result = right_compare_value < left_compare_value;
      }
      if ((comparison_result) || (right_ptr = right_ptr + 2, left_ptr = right_ptr, 
                                rsi_register <= right_ptr)) break;
    }
  }
  
r11_optimized_loop:
  do {
    temp_ptr = r10_register;
    if (rsi_register <= right_ptr) {
r11_final_phase:
      // 最终分区处理
      for (; rbp_register < r10_register; r10_register = r10_register + -2) {
        middle_ptr = temp_ptr + -2;
        left_compare_value = *(int *)(temp_ptr + -1);
        right_compare_value = *(int *)(scan_ptr + 1);
        
        if (left_compare_value == right_compare_value) {
          comparison_result = *(int *)((longlong)temp_ptr + -4) < 
                             *(int *)((longlong)scan_ptr + 0xc);
        }
        else {
          comparison_result = right_compare_value < left_compare_value;
        }
        
        compare_ptr = scan_ptr;
        if (!comparison_result) {
          if (right_compare_value == left_compare_value) {
            comparison_result = *(int *)((longlong)scan_ptr + 0xc) < 
                               *(int *)((longlong)temp_ptr + -4);
          }
          else {
            comparison_result = left_compare_value < right_compare_value;
          }
          if (comparison_result) break;
          
          compare_ptr = scan_ptr + -2;
          if (compare_ptr != middle_ptr) {
            temp_data_1 = temp_ptr[-1];
            temp_data_2 = *compare_ptr;
            temp_data_3 = scan_ptr[-1];
            *compare_ptr = *middle_ptr;
            scan_ptr[-1] = temp_data_1;
            *middle_ptr = temp_data_2;
            temp_ptr[-1] = temp_data_3;
          }
        }
        scan_ptr = compare_ptr;
        temp_ptr = middle_ptr;
      }
      
      // 边界条件处理
      if (r10_register == rbp_register) {
        if (right_ptr == rsi_register) {
          *r15_register = scan_ptr;
          r15_register[1] = left_ptr;
          return;
        }
        
        if (left_ptr != right_ptr) {
          temp_data_1 = left_ptr[1];
          temp_data_2 = *scan_ptr;
          temp_data_3 = scan_ptr[1];
          *scan_ptr = *left_ptr;
          scan_ptr[1] = temp_data_1;
          *left_ptr = temp_data_2;
          left_ptr[1] = temp_data_3;
        }
        
        temp_data_1 = right_ptr[1];
        temp_data_2 = *scan_ptr;
        temp_data_3 = scan_ptr[1];
        *scan_ptr = *right_ptr;
        scan_ptr[1] = temp_data_1;
        *right_ptr = temp_data_2;
        right_ptr[1] = temp_data_3;
        
        right_ptr = right_ptr + 2;
        left_ptr = left_ptr + 2;
        scan_ptr = scan_ptr + 2;
      }
      else {
        temp_ptr = r10_register + -2;
        if (right_ptr == rsi_register) {
          middle_ptr = scan_ptr + -2;
          if (temp_ptr != middle_ptr) {
            temp_data_1 = scan_ptr[-1];
            temp_data_2 = *temp_ptr;
            temp_data_3 = r10_register[-1];
            *temp_ptr = *middle_ptr;
            r10_register[-1] = temp_data_1;
            *middle_ptr = temp_data_2;
            scan_ptr[-1] = temp_data_3;
          }
          
          temp_data_1 = left_ptr[-1];
          temp_data_2 = *middle_ptr;
          temp_data_3 = scan_ptr[-1];
          *middle_ptr = left_ptr[-2];
          scan_ptr[-1] = temp_data_1;
          left_ptr[-2] = temp_data_2;
          left_ptr[-1] = temp_data_3;
          
          left_ptr = left_ptr + -2;
          r10_register = temp_ptr;
          scan_ptr = middle_ptr;
        }
        else {
          temp_data_1 = *right_ptr;
          temp_data_2 = right_ptr[1];
          temp_data_3 = r10_register[-1];
          *right_ptr = *temp_ptr;
          right_ptr[1] = temp_data_3;
          right_ptr = right_ptr + 2;
          *temp_ptr = temp_data_1;
          r10_register[-1] = temp_data_2;
          r10_register = temp_ptr;
        }
      }
      goto r11_optimized_loop;
    }
    
    // 主比较循环（R11优化版本）
    left_compare_value = *(int *)(scan_ptr + 1);
    right_compare_value = *(int *)(right_ptr + 1);
    if (left_compare_value == right_compare_value) {
      comparison_result = *(int *)((longlong)scan_ptr + 0xc) < 
                         *(int *)((longlong)right_ptr + 0xc);
    }
    else {
      comparison_result = right_compare_value < left_compare_value;
    }
    
    middle_ptr = left_ptr;
    if (!comparison_result) {
      if (right_compare_value == left_compare_value) {
        comparison_result = *(int *)((longlong)right_ptr + 0xc) < 
                           *(int *)((longlong)scan_ptr + 0xc);
      }
      else {
        comparison_result = left_compare_value < right_compare_value;
      }
      if (comparison_result) goto r11_final_phase;
      
      middle_ptr = left_ptr + 2;
      if (left_ptr != right_ptr) {
        temp_data_1 = right_ptr[1];
        temp_data_2 = *left_ptr;
        temp_data_3 = left_ptr[1];
        *left_ptr = *right_ptr;
        left_ptr[1] = temp_data_1;
        *right_ptr = temp_data_2;
        right_ptr[1] = temp_data_3;
      }
    }
    right_ptr = right_ptr + 2;
    left_ptr = middle_ptr;
  } while( true );
}

/**
 * 简化的排序函数
 * 
 * 这是一个简化版本的排序函数，用于处理特定的数据范围
 * 使用优化的比较和交换策略
 * 
 * @param base_ptr 基础指针
 * @param range_param 范围参数
 * @param end_param 结束参数
 * @param r10_register R10寄存器值，用于优化计算
 * @param rsi_register RSI寄存器值，用于结束位置
 * @param rbp_register RBP寄存器值，用于起始位置
 * @param r15_register R15寄存器值，用于结果存储
 */
void simplified_sort_function(undefined8 base_ptr, undefined4 range_param, longlong end_param,
                             undefined8 *r10_register, undefined8 *rsi_register, 
                             undefined8 *rbp_register, undefined8 *r15_register)
{
  int left_compare_value;
  int right_compare_value;
  bool comparison_result;
  undefined8 temp_data_1;
  undefined8 temp_data_2;
  undefined8 temp_data_3;
  undefined8 *left_ptr;
  undefined8 *right_ptr;
  undefined8 *middle_ptr;
  undefined8 *pivot_candidate;
  undefined8 *scan_ptr;
  undefined8 *compare_ptr;
  undefined8 *swap_ptr;
  undefined8 *temp_ptr;
  
  // 简化的初始化处理
  func_0x000180204980(base_ptr, range_param, end_param + -0x10);
  
  right_ptr = r10_register + 2;
  
  // 左半部分搜索（简化版本）
  if (rbp_register < r10_register) {
    while( true ) {
      left_compare_value = *(int *)(r10_register + -1);
      right_compare_value = *(int *)(r10_register + 1);
      
      if (left_compare_value == right_compare_value) {
        comparison_result = *(int *)((longlong)r10_register + -4) < 
                           *(int *)((longlong)r10_register + 0xc);
      }
      else {
        comparison_result = right_compare_value < left_compare_value;
      }
      if (comparison_result) break;
      
      if (right_compare_value == left_compare_value) {
        comparison_result = *(int *)((longlong)r10_register + 0xc) < 
                           *(int *)((longlong)r10_register + -4);
      }
      else {
        comparison_result = left_compare_value < right_compare_value;
      }
      if ((comparison_result) || (r10_register = r10_register + -2, 
                                r10_register <= rbp_register)) break;
    }
  }
  
  // 右半部分搜索（简化版本）
  left_ptr = right_ptr;
  scan_ptr = r10_register;
  if (right_ptr < rsi_register) {
    left_compare_value = *(int *)(r10_register + 1);
    while( true ) {
      right_compare_value = *(int *)(right_ptr + 1);
      if (right_compare_value == left_compare_value) {
        comparison_result = *(int *)((longlong)right_ptr + 0xc) < 
                           *(int *)((longlong)r10_register + 0xc);
      }
      else {
        comparison_result = left_compare_value < right_compare_value;
      }
      left_ptr = right_ptr;
      if (comparison_result) break;
      
      if (left_compare_value == right_compare_value) {
        comparison_result = *(int *)((longlong)r10_register + 0xc) < 
                           *(int *)((longlong)right_ptr + 0xc);
      }
      else {
        comparison_result = right_compare_value < left_compare_value;
      }
      if ((comparison_result) || (right_ptr = right_ptr + 2, left_ptr = right_ptr, 
                                rsi_register <= right_ptr)) break;
    }
  }
  
simplified_main_loop:
  do {
    temp_ptr = r10_register;
    if (rsi_register <= right_ptr) {
simplified_final_phase:
      // 最终分区处理（简化版本）
      for (; rbp_register < r10_register; r10_register = r10_register + -2) {
        middle_ptr = temp_ptr + -2;
        left_compare_value = *(int *)(temp_ptr + -1);
        right_compare_value = *(int *)(scan_ptr + 1);
        
        if (left_compare_value == right_compare_value) {
          comparison_result = *(int *)((longlong)temp_ptr + -4) < 
                             *(int *)((longlong)scan_ptr + 0xc);
        }
        else {
          comparison_result = right_compare_value < left_compare_value;
        }
        
        compare_ptr = scan_ptr;
        if (!comparison_result) {
          if (right_compare_value == left_compare_value) {
            comparison_result = *(int *)((longlong)scan_ptr + 0xc) < 
                               *(int *)((longlong)temp_ptr + -4);
          }
          else {
            comparison_result = left_compare_value < right_compare_value;
          }
          if (comparison_result) break;
          
          compare_ptr = scan_ptr + -2;
          if (compare_ptr != middle_ptr) {
            temp_data_1 = temp_ptr[-1];
            temp_data_2 = *compare_ptr;
            temp_data_3 = scan_ptr[-1];
            *compare_ptr = *middle_ptr;
            scan_ptr[-1] = temp_data_1;
            *middle_ptr = temp_data_2;
            temp_ptr[-1] = temp_data_3;
          }
        }
        scan_ptr = compare_ptr;
        temp_ptr = middle_ptr;
      }
      
      // 边界条件处理（简化版本）
      if (r10_register == rbp_register) {
        if (right_ptr == rsi_register) {
          *r15_register = scan_ptr;
          r15_register[1] = left_ptr;
          return;
        }
        
        if (left_ptr != right_ptr) {
          temp_data_1 = left_ptr[1];
          temp_data_2 = *scan_ptr;
          temp_data_3 = scan_ptr[1];
          *scan_ptr = *left_ptr;
          scan_ptr[1] = temp_data_1;
          *left_ptr = temp_data_2;
          left_ptr[1] = temp_data_3;
        }
        
        temp_data_1 = right_ptr[1];
        temp_data_2 = *scan_ptr;
        temp_data_3 = scan_ptr[1];
        *scan_ptr = *right_ptr;
        scan_ptr[1] = temp_data_1;
        *right_ptr = temp_data_2;
        right_ptr[1] = temp_data_3;
        
        right_ptr = right_ptr + 2;
        left_ptr = left_ptr + 2;
        scan_ptr = scan_ptr + 2;
      }
      else {
        temp_ptr = r10_register + -2;
        if (right_ptr == rsi_register) {
          middle_ptr = scan_ptr + -2;
          if (temp_ptr != middle_ptr) {
            temp_data_1 = scan_ptr[-1];
            temp_data_2 = *temp_ptr;
            temp_data_3 = r10_register[-1];
            *temp_ptr = *middle_ptr;
            r10_register[-1] = temp_data_1;
            *middle_ptr = temp_data_2;
            scan_ptr[-1] = temp_data_3;
          }
          
          temp_data_1 = left_ptr[-1];
          temp_data_2 = *middle_ptr;
          temp_data_3 = scan_ptr[-1];
          *middle_ptr = left_ptr[-2];
          scan_ptr[-1] = temp_data_1;
          left_ptr[-2] = temp_data_2;
          left_ptr[-1] = temp_data_3;
          
          left_ptr = left_ptr + -2;
          r10_register = temp_ptr;
          scan_ptr = middle_ptr;
        }
        else {
          temp_data_1 = *right_ptr;
          temp_data_2 = right_ptr[1];
          temp_data_3 = r10_register[-1];
          *right_ptr = *temp_ptr;
          right_ptr[1] = temp_data_3;
          right_ptr = right_ptr + 2;
          *temp_ptr = temp_data_1;
          r10_register[-1] = temp_data_2;
          r10_register = temp_ptr;
        }
      }
      goto simplified_main_loop;
    }
    
    // 主比较循环（简化版本）
    left_compare_value = *(int *)(scan_ptr + 1);
    right_compare_value = *(int *)(right_ptr + 1);
    if (left_compare_value == right_compare_value) {
      comparison_result = *(int *)((longlong)scan_ptr + 0xc) < 
                         *(int *)((longlong)right_ptr + 0xc);
    }
    else {
      comparison_result = right_compare_value < left_compare_value;
    }
    
    middle_ptr = left_ptr;
    if (!comparison_result) {
      if (right_compare_value == left_compare_value) {
        comparison_result = *(int *)((longlong)right_ptr + 0xc) < 
                           *(int *)((longlong)scan_ptr + 0xc);
      }
      else {
        comparison_result = left_compare_value < right_compare_value;
      }
      if (comparison_result) goto simplified_final_phase;
      
      middle_ptr = left_ptr + 2;
      if (left_ptr != right_ptr) {
        temp_data_1 = right_ptr[1];
        temp_data_2 = *left_ptr;
        temp_data_3 = left_ptr[1];
        *left_ptr = *right_ptr;
        left_ptr[1] = temp_data_1;
        *right_ptr = temp_data_2;
        right_ptr[1] = temp_data_3;
      }
    }
    right_ptr = right_ptr + 2;
    left_ptr = middle_ptr;
  } while( true );
}