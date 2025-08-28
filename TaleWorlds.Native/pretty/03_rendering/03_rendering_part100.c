#include "TaleWorlds.Native.Split.h"

// 03_rendering_part100.c - 渲染系统高级资源管理和数据处理模块
// 包含4个核心函数，涵盖渲染资源处理、数据排序、比较和高级渲染控制等功能

// 常量定义
#define RENDERING_RESOURCE_FLAG_INVALID 0xfffffffffffffffe
#define RENDERING_SORT_THRESHOLD 0x1d
#define RENDERING_SORT_INITIAL_SIZE 0x1c
#define RENDERING_COMPARISON_EPSILON 0.0001f
#define RENDERING_DATA_BLOCK_SIZE 0xb0
#define RENDERING_PARAM_OFFSET_150 0x150
#define RENDERING_PARAM_OFFSET_BF8 0xbf8

// 函数别名定义
#define rendering_system_resource_processor FUN_1803276a0
#define rendering_system_advanced_data_sorter FUN_1803277f0
#define rendering_system_data_comparator FUN_180327e70
#define rendering_system_resource_data_processor FUN_1803280a0

/**
 * 渲染系统资源处理器
 * 处理渲染资源的分配、释放和管理
 * 
 * @param render_context 渲染上下文指针
 * @param resource_ptr 资源指针数组的指针
 * @param process_param 处理参数
 */
void rendering_system_resource_processor(longlong render_context, longlong *resource_ptr, longlong process_param)

{
  longlong temp_resource;
  longlong *resource_manager;
  void *error_handler;
  longlong *stack_resource_ptr;
  longlong *allocated_resource;
  uint64_t resource_flag;
  void *stack_pointer;
  longlong stack_value;
  int32_t status_flag;
  
  resource_flag = RENDERING_RESOURCE_FLAG_INVALID;
  
  // 尝试获取资源管理器
  FUN_1800b30d0(_DAT_180c86930, &stack_resource_ptr, process_param, 0);
  
  if (stack_resource_ptr == (longlong *)0x0) {
    // 资源管理器为空时的错误处理
    error_handler = &system_buffer_ptr;
    if (*(void **)(process_param + 8) != (void *)0x0) {
      error_handler = *(void **)(process_param + 8);
    }
    FUN_180627910(&stack_pointer, error_handler);
    FUN_180058080(render_context + RENDERING_PARAM_OFFSET_BF8, &allocated_resource, &stack_pointer);
    
    stack_pointer = &UNK_180a3c3e0;
    if (stack_value != 0) {
      // 严重错误：系统无法恢复
      FUN_18064e900();
    }
    
    stack_value = 0;
    status_flag = 0;
    stack_pointer = &UNK_18098bcb0;
    resource_manager = (longlong *)allocated_resource[8];
    
    if (resource_manager != (longlong *)0x0) {
      allocated_resource = resource_manager;
      // 调用资源管理器的释放函数
      (**(code **)(*resource_manager + 0x28))(resource_manager);
    }
    
    allocated_resource = (longlong *)*resource_ptr;
    *resource_ptr = (longlong)resource_manager;
  }
  else {
    // 正常资源处理流程
    resource_manager = (longlong *)FUN_18022cb40(stack_resource_ptr, &allocated_resource);
    temp_resource = *resource_manager;
    *resource_manager = 0;
    resource_manager = (longlong *)*resource_ptr;
    *resource_ptr = temp_resource;
    
    if (resource_manager != (longlong *)0x0) {
      // 调用资源管理器的清理函数
      (**(code **)(*resource_manager + 0x38))();
    }
  }
  
  // 清理分配的资源
  if (allocated_resource != (longlong *)0x0) {
    (**(code **)(*allocated_resource + 0x38))();
  }
  
  if (stack_resource_ptr != (longlong *)0x0) {
    (**(code **)(*stack_resource_ptr + 0x38))();
  }
  
  return;
}

/**
 * 渲染系统高级数据排序器
 * 对渲染数据进行高效的排序和优化处理
 * 
 * @param render_context 渲染上下文指针
 * @return 处理结果的状态码
 */
ulonglong rendering_system_advanced_data_sorter(longlong render_context)

{
  uint sort_value1;
  uint sort_value2;
  uint *data_ptr1;
  uint *data_ptr2;
  longlong loop_counter;
  uint *temp_ptr1;
  uint *temp_ptr2;
  uint *temp_ptr3;
  ulonglong result;
  int sort_depth;
  int comparison_count;
  uint *swap_ptr;
  longlong data_range;
  uint *compare_ptr;
  uint64_t stack_param1;
  int32_t param_value;
  uint64_t stack_param2;
  uint64_t resource_flag;
  uint *sort_array1;
  uint *sort_array2;
  uint64_t sort_context1;
  int32_t sort_size1;
  uint *sort_array3;
  uint *sort_array4;
  uint64_t sort_context2;
  int32_t sort_size2;
  longlong stack_value;
  uint **callback_ptr;
  void *callback_func;
  code *sort_function;
  
  param_value = (int32_t)((ulonglong)stack_param1 >> 0x20);
  resource_flag = RENDERING_RESOURCE_FLAG_INVALID;
  sort_array1 = (uint *)0x0;
  sort_array2 = (uint *)0x0;
  sort_context1 = 0;
  sort_size1 = 3;
  sort_array3 = (uint *)0x0;
  sort_array4 = (uint *)0x0;
  sort_context2 = 0;
  sort_size2 = 3;
  
  // 初始化排序数组
  FUN_18032b1c0(0, &sort_array1, *(int32_t *)(render_context + RENDERING_PARAM_OFFSET_150), 0);
  FUN_18032b1c0(render_context, &sort_array3, *(int *)(render_context + RENDERING_PARAM_OFFSET_150) + -1, 0);
  
  data_ptr2 = sort_array2;
  data_ptr1 = sort_array1;
  comparison_count = 0;
  
  if (sort_array1 != sort_array2) {
    data_range = (longlong)sort_array2 - (longlong)sort_array1 >> 2;
    sort_depth = comparison_count;
    
    // 计算排序深度
    for (loop_counter = data_range; loop_counter != 0; loop_counter = loop_counter >> 1) {
      sort_depth = sort_depth + 1;
    }
    
    // 执行排序算法
    FUN_18033d680(sort_array1, sort_array2, (longlong)(sort_depth + -1) * 2);
    temp_ptr3 = data_ptr1;
    
    if (data_range < RENDERING_SORT_THRESHOLD) {
      // 小数组插入排序
      while (temp_ptr3 = temp_ptr3 + 1, temp_ptr3 != data_ptr2) {
        sort_value1 = *temp_ptr3;
        temp_ptr2 = temp_ptr3;
        compare_ptr = temp_ptr3;
        
        while (temp_ptr2 != data_ptr1) {
          temp_ptr2 = temp_ptr2 + -1;
          if (*temp_ptr2 <= sort_value1) break;
          *compare_ptr = *temp_ptr2;
          compare_ptr = compare_ptr + -1;
        }
        *compare_ptr = sort_value1;
      }
    }
    else {
      // 大数组优化排序
      temp_ptr3 = data_ptr1 + RENDERING_SORT_INITIAL_SIZE;
      temp_ptr2 = data_ptr1;
      
      if (data_ptr1 != temp_ptr3) {
        while (temp_ptr2 = temp_ptr2 + 1, temp_ptr2 != temp_ptr3) {
          sort_value1 = *temp_ptr2;
          compare_ptr = temp_ptr2;
          swap_ptr = temp_ptr2;
          
          while (compare_ptr != data_ptr1) {
            compare_ptr = compare_ptr + -1;
            if (*compare_ptr <= sort_value1) break;
            *swap_ptr = *compare_ptr;
            swap_ptr = swap_ptr + -1;
          }
          *swap_ptr = sort_value1;
        }
      }
      
      // 继续处理剩余数据
      for (; temp_ptr3 != data_ptr2; temp_ptr3 = temp_ptr3 + 1) {
        sort_value1 = *temp_ptr3;
        sort_value2 = temp_ptr3[-1];
        temp_ptr2 = temp_ptr3 + -1;
        data_ptr1 = temp_ptr3;
        
        while (compare_ptr = temp_ptr2, sort_value1 < sort_value2) {
          *data_ptr1 = sort_value2;
          temp_ptr2 = compare_ptr + -1;
          sort_value2 = *temp_ptr2;
          data_ptr1 = compare_ptr;
        }
        *data_ptr1 = sort_value1;
      }
    }
  }
  
  // 处理第二组数据
  data_ptr2 = sort_array4;
  data_ptr1 = sort_array3;
  
  if (sort_array3 != sort_array4) {
    data_range = (longlong)sort_array4 - (longlong)sort_array3 >> 2;
    sort_depth = comparison_count;
    
    for (loop_counter = data_range; loop_counter != 0; loop_counter = loop_counter >> 1) {
      sort_depth = sort_depth + 1;
    }
    
    FUN_18033d680(sort_array3, sort_array4, (longlong)(sort_depth + -1) * 2);
    temp_ptr3 = data_ptr1;
    
    if (data_range < RENDERING_SORT_THRESHOLD) {
      while (temp_ptr3 = temp_ptr3 + 1, temp_ptr3 != data_ptr2) {
        sort_value1 = *temp_ptr3;
        temp_ptr2 = temp_ptr3;
        compare_ptr = temp_ptr3;
        
        while (temp_ptr2 != data_ptr1) {
          temp_ptr2 = temp_ptr2 + -1;
          if (*temp_ptr2 <= sort_value1) break;
          *compare_ptr = *temp_ptr2;
          compare_ptr = compare_ptr + -1;
        }
        *compare_ptr = sort_value1;
      }
    }
    else {
      temp_ptr3 = data_ptr1 + RENDERING_SORT_INITIAL_SIZE;
      temp_ptr2 = data_ptr1;
      
      if (data_ptr1 != temp_ptr3) {
        while (temp_ptr2 = temp_ptr2 + 1, temp_ptr2 != temp_ptr3) {
          sort_value1 = *temp_ptr2;
          compare_ptr = temp_ptr2;
          swap_ptr = temp_ptr2;
          
          while (swap_ptr != data_ptr1) {
            swap_ptr = swap_ptr + -1;
            if (*swap_ptr <= sort_value1) break;
            *compare_ptr = *swap_ptr;
            compare_ptr = compare_ptr + -1;
          }
          *compare_ptr = sort_value1;
        }
      }
      
      for (; temp_ptr3 != data_ptr2; temp_ptr3 = temp_ptr3 + 1) {
        sort_value1 = *temp_ptr3;
        sort_value2 = temp_ptr3[-1];
        compare_ptr = temp_ptr3 + -1;
        data_ptr1 = temp_ptr3;
        
        while (swap_ptr = compare_ptr, sort_value1 < sort_value2) {
          *data_ptr1 = sort_value2;
          compare_ptr = swap_ptr + -1;
          sort_value2 = *compare_ptr;
          data_ptr1 = swap_ptr;
        }
        *data_ptr1 = sort_value1;
      }
    }
  }
  
  // 批量数据处理
  result = CONCAT71((int7)((ulonglong)stack_param2 >> 8), 1);
  FUN_18032bd90(render_context, &sort_array3, &sort_array1, *(int *)(render_context + RENDERING_PARAM_OFFSET_150) + -1, CONCAT44(param_value, 4), result, resource_flag);
  FUN_18032bd90(render_context, &sort_array1, &sort_array3, *(int32_t *)(render_context + RENDERING_PARAM_OFFSET_150), 2, result & 0xffffffffffffff00);
  
  callback_ptr = &sort_array1;
  callback_func = &UNK_18033d030;
  sort_function = FUN_18033ced0;
  stack_value = render_context;
  
  FUN_18015b810(&stack_value, 0, (longlong)sort_array2 - (longlong)sort_array1 >> 2 & 0xffffffff, 0x10, 0xffffffffffffffff, &stack_value);
  
  if (sort_array3 != (uint *)0x0) {
    // 内存错误：无法释放资源
    FUN_18064e900();
  }
  
  if (sort_array1 != (uint *)0x0) {
    // 内存错误：无法释放资源
    FUN_18064e900();
  }
  
  // 重置并准备下一轮处理
  sort_array3 = (uint *)0x0;
  sort_array4 = (uint *)0x0;
  sort_context2 = 0;
  sort_size2 = 3;
  sort_array1 = (uint *)0x0;
  sort_array2 = (uint *)0x0;
  sort_context1 = 0;
  sort_size1 = 3;
  
  FUN_18032afa0(render_context, &sort_array3, *(int32_t *)(render_context + RENDERING_PARAM_OFFSET_150));
  FUN_18032afa0(render_context, &sort_array1, *(int *)(render_context + RENDERING_PARAM_OFFSET_150) + -1);
  
  data_ptr2 = sort_array4;
  data_ptr1 = sort_array3;
  
  if (sort_array3 != sort_array4) {
    data_range = (longlong)sort_array4 - (longlong)sort_array3 >> 2;
    sort_depth = comparison_count;
    
    for (loop_counter = data_range; loop_counter != 0; loop_counter = loop_counter >> 1) {
      sort_depth = sort_depth + 1;
    }
    
    FUN_18033d680(sort_array3, sort_array4, (longlong)(sort_depth + -1) * 2);
    temp_ptr3 = data_ptr1;
    
    if (data_range < RENDERING_SORT_THRESHOLD) {
      while (temp_ptr3 = temp_ptr3 + 1, temp_ptr3 != data_ptr2) {
        sort_value1 = *temp_ptr3;
        temp_ptr2 = temp_ptr3;
        compare_ptr = temp_ptr3;
        
        while (temp_ptr2 != data_ptr1) {
          temp_ptr2 = temp_ptr2 + -1;
          if (*temp_ptr2 <= sort_value1) break;
          *compare_ptr = *temp_ptr2;
          compare_ptr = compare_ptr + -1;
        }
        *compare_ptr = sort_value1;
      }
    }
    else {
      temp_ptr3 = data_ptr1 + RENDERING_SORT_INITIAL_SIZE;
      temp_ptr2 = data_ptr1;
      
      if (data_ptr1 != temp_ptr3) {
        while (temp_ptr2 = temp_ptr2 + 1, temp_ptr2 != temp_ptr3) {
          sort_value1 = *temp_ptr2;
          compare_ptr = temp_ptr2;
          swap_ptr = temp_ptr2;
          
          while (compare_ptr != data_ptr1) {
            compare_ptr = compare_ptr + -1;
            if (*compare_ptr <= sort_value1) break;
            *swap_ptr = *compare_ptr;
            swap_ptr = swap_ptr + -1;
          }
          *swap_ptr = sort_value1;
        }
      }
      
      for (; temp_ptr3 != data_ptr2; temp_ptr3 = temp_ptr3 + 1) {
        sort_value1 = *temp_ptr3;
        sort_value2 = temp_ptr3[-1];
        compare_ptr = temp_ptr3 + -1;
        temp_ptr2 = temp_ptr3;
        
        while (swap_ptr = compare_ptr, sort_value1 < sort_value2) {
          *temp_ptr2 = sort_value2;
          compare_ptr = swap_ptr + -1;
          sort_value2 = *compare_ptr;
          temp_ptr2 = swap_ptr;
        }
        *temp_ptr2 = sort_value1;
      }
    }
  }
  
  temp_ptr3 = sort_array2;
  data_ptr2 = sort_array1;
  
  if (sort_array1 != sort_array2) {
    data_range = (longlong)sort_array2 - (longlong)sort_array1 >> 2;
    
    for (loop_counter = data_range; loop_counter != 0; loop_counter = loop_counter >> 1) {
      comparison_count = comparison_count + 1;
    }
    
    FUN_18033d680(sort_array1, sort_array2, (longlong)(comparison_count + -1) * 2);
    temp_ptr2 = data_ptr2;
    
    if (data_range < RENDERING_SORT_THRESHOLD) {
      while (temp_ptr2 = temp_ptr2 + 1, temp_ptr2 != temp_ptr3) {
        sort_value1 = *temp_ptr2;
        compare_ptr = temp_ptr2;
        swap_ptr = temp_ptr2;
        
        while (compare_ptr != data_ptr2) {
          compare_ptr = compare_ptr + -1;
          if (*compare_ptr <= sort_value1) break;
          *swap_ptr = *compare_ptr;
          swap_ptr = swap_ptr + -1;
        }
        *swap_ptr = sort_value1;
      }
    }
    else {
      temp_ptr2 = data_ptr2 + RENDERING_SORT_INITIAL_SIZE;
      compare_ptr = data_ptr2;
      
      if (data_ptr2 != temp_ptr2) {
        while (compare_ptr = compare_ptr + 1, compare_ptr != temp_ptr2) {
          sort_value1 = *compare_ptr;
          swap_ptr = compare_ptr;
          temp_ptr1 = compare_ptr;
          
          while (temp_ptr1 != data_ptr2) {
            temp_ptr1 = temp_ptr1 + -1;
            if (*temp_ptr1 <= sort_value1) break;
            *swap_ptr = *temp_ptr1;
            swap_ptr = swap_ptr + -1;
          }
          *swap_ptr = sort_value1;
        }
      }
      
      for (; temp_ptr2 != temp_ptr3; temp_ptr2 = temp_ptr2 + 1) {
        sort_value1 = *temp_ptr2;
        sort_value2 = temp_ptr2[-1];
        swap_ptr = temp_ptr2 + -1;
        compare_ptr = temp_ptr2;
        
        while (temp_ptr1 = swap_ptr, sort_value1 < sort_value2) {
          *compare_ptr = sort_value2;
          swap_ptr = temp_ptr1 + -1;
          sort_value2 = *swap_ptr;
          compare_ptr = temp_ptr1;
        }
        *compare_ptr = sort_value1;
      }
    }
  }
  
  // 最终处理
  FUN_180329420(render_context, &sort_array1, &sort_array3);
  
  if (data_ptr2 != (uint *)0x0) {
    // 资源清理错误
    FUN_18064e900(data_ptr2);
  }
  
  if (data_ptr1 != (uint *)0x0) {
    // 资源清理错误
    FUN_18064e900(data_ptr1);
  }
  
  // 重置所有指针和状态
  sort_array3 = (uint *)0x0;
  sort_array4 = (uint *)0x0;
  sort_context2 = 0;
  sort_size2 = 3;
  stack_value = 0;
  callback_ptr = (uint **)0x0;
  callback_func = (void *)0x0;
  sort_function = (code *)CONCAT44(sort_function._4_4_, 3);
  
  result = FUN_180328540(render_context, &stack_value, &sort_array3);
  
  if (stack_value != 0) {
    // 系统错误：无法恢复
    FUN_18064e900();
  }
  
  if (sort_array3 != (uint *)0x0) {
    // 内存错误：无法释放资源
    FUN_18064e900();
  }
  
  return result & 0xffffffffffffff00;
}

/**
 * 渲染系统数据比较器
 * 比较和验证渲染数据的一致性和完整性
 * 
 * @param render_context 渲染上下文指针
 * @param compare_data 比较数据指针
 * @param reference_data 参考数据指针
 * @param validation_flag 验证标志
 * @return 比较结果的状态码
 */
ulonglong rendering_system_data_comparator(longlong render_context, uint64_t compare_data, longlong *reference_data, char validation_flag)

{
  char validation_result;
  ulonglong process_result;
  uint *data_element;
  longlong element_offset;
  ulonglong element_count;
  longlong loop_counter;
  float float_value;
  uint64_t stack_param;
  int32_t temp_params[8];
  void *callback_ptr;
  code *callback_function;
  
  process_result = CONCAT71((int7)((ulonglong)stack_param >> 8), 1);
  
  // 执行数据比较处理
  FUN_18032bd90(render_context, compare_data, reference_data, *(int *)(render_context + RENDERING_PARAM_OFFSET_150) + -1, 4, process_result, RENDERING_RESOURCE_FLAG_INVALID);
  FUN_18032bd90(render_context, reference_data, compare_data, *(int32_t *)(render_context + RENDERING_PARAM_OFFSET_150), 2, process_result & 0xffffffffffffff00);
  
  process_result = reference_data[1] - *reference_data >> 2;
  
  if (validation_flag == '\0') {
    if ((int)process_result != 0) {
      element_count = 0;
      process_result = process_result & 0xffffffff;
      
      do {
        // 获取数据元素进行比较
        data_element = (uint *)FUN_18032ba60(render_context, *(int32_t *)(element_count + *reference_data), *(int32_t *)(render_context + RENDERING_PARAM_OFFSET_150));
        element_offset = FUN_18032ba60(render_context, *(int32_t *)(element_count + *reference_data), *(int *)(render_context + RENDERING_PARAM_OFFSET_150) + -1);
        
        // 执行数据验证
        validation_result = func_0x000180285f10(element_offset + 4, data_element + 1, 0x38d1b717);
        
        if (validation_result == '\0') {
          *data_element = *data_element | 8;
        }
        
        // 比较各个字段
        if (*(char *)(element_offset + 0xb0) != (char)data_element[0x2c]) {
          *data_element = *data_element | 8;
        }
        
        if (*(char *)(element_offset + 0x4c) != (char)data_element[0x13]) {
          *data_element = *data_element | 8;
        }
        
        if (*(uint *)(element_offset + 0x44) != data_element[0x11]) {
          *data_element = *data_element | 8;
        }
        
        if (*(uint *)(element_offset + 0x48) != data_element[0x12]) {
          *data_element = *data_element | 8;
        }
        
        // 浮点数比较
        float_value = *(float *)(element_offset + 0xa8) - (float)data_element[0x2a];
        if ((float_value <= -RENDERING_COMPARISON_EPSILON) || (RENDERING_COMPARISON_EPSILON <= float_value)) {
          *data_element = *data_element | 8;
        }
        
        // 递归处理子数据
        FUN_1803280a0(render_context, element_offset + 0xc0, data_element + 0x30);
        FUN_180328540(render_context, element_offset + 400, data_element + 100);
        process_result = FUN_180327e70(render_context, element_offset + 0x170, data_element + 0x5c, 0);
        
        element_count = element_count + 4;
        process_result = process_result - 1;
      } while (process_result != 0);
    }
  }
  else {
    // 验证模式下的回调处理
    callback_ptr = &UNK_18033d030;
    callback_function = FUN_18033ced0;
    temp_params[0] = (int32_t)render_context;
    temp_params[1] = (int32_t)((ulonglong)render_context >> 0x20);
    temp_params[2] = SUB84(reference_data, 0);
    temp_params[3] = (int32_t)((ulonglong)reference_data >> 0x20);
    temp_params[4] = temp_params[0];
    temp_params[5] = temp_params[1];
    temp_params[6] = temp_params[2];
    temp_params[7] = temp_params[3];
    
    process_result = FUN_18015b810(&temp_params[4], 0, process_result & 0xffffffff, 0x10, 0xffffffffffffffff, &temp_params[4]);
  }
  
  return process_result & 0xffffffffffffff00;
}

// 警告：全局变量以'_'开头的符号在同一地址重叠较小的符号

/**
 * 渲染系统资源数据处理器
 * 处理和转换渲染资源数据，执行深度比较和状态更新
 * 
 * @param process_param 处理参数
 * @param source_data 源数据指针
 * @param target_data 目标数据指针
 * @return 处理结果的状态码
 */
ulonglong rendering_system_resource_data_processor(uint64_t process_param, int *source_data, int *target_data)

{
  byte *source_ptr;
  byte *target_ptr;
  ulonglong process_status;
  int source_length;
  int target_length;
  void *temp_ptr;
  uint *data_element;
  ulonglong temp_result;
  int comparison_result;
  longlong offset_diff;
  ulonglong diff_result;
  ulonglong status_mask;
  
  source_length = *target_data;
  process_status = 0;
  
  // 检查目标数据状态
  if ((*(byte *)(target_data + 2) & 1) == 0) {
    if ((*(byte *)(source_data + 2) & 1) == 0) goto LAB_180328385;
    
    if (source_length != *source_data) {
      FUN_1803297e0(process_param, source_data, 4, CONCAT71((uint7)(uint3)((uint)source_length >> 8), 1), RENDERING_RESOURCE_FLAG_INVALID);
    }
  }
  else if (((*(byte *)(source_data + 2) & 1) == 0) && (source_length != *source_data)) {
    target_data[2] = target_data[2] | 2;
  }
  
  // 处理数据偏移量
  FUN_180328540(process_param, source_data + 0x22, target_data + 0x22);
  
  source_length = source_data[8];
  target_length = target_data[8];
  comparison_result = target_length;
  
  if (source_length == target_length) {
    if (source_length != 0) {
      source_ptr = *(byte **)(source_data + 6);
      offset_diff = *(longlong *)(target_data + 6) - (longlong)source_ptr;
      
      // 字节级比较
      do {
        target_ptr = source_ptr + offset_diff;
        comparison_result = (uint)*source_ptr - (uint)*target_ptr;
        if (comparison_result != 0) break;
        source_ptr = source_ptr + 1;
      } while (*target_ptr != 0);
    }
LAB_180328172:
    if (comparison_result != 0) goto LAB_180328174;
  }
  else {
    if (source_length == 0) goto LAB_180328172;
LAB_180328174:
    target_data[2] = target_data[2] | 2;
    source_length = source_data[8];
  }
  
  if (source_length == target_length) {
    if (source_length != 0) {
      source_ptr = *(byte **)(source_data + 6);
      offset_diff = *(longlong *)(target_data + 6) - (longlong)source_ptr;
      
      do {
        target_ptr = source_ptr + offset_diff;
        target_length = (uint)*source_ptr - (uint)*target_ptr;
        if (target_length != 0) break;
        source_ptr = source_ptr + 1;
      } while (*target_ptr != 0);
    }
LAB_1803281b0:
    if (target_length != 0) goto LAB_1803281b2;
  }
  else {
    if (source_length == 0) goto LAB_1803281b0;
LAB_1803281b2:
    source_data[2] = source_data[2] | 4;
  }
  
  // 比较关键数据字段
  if (source_data[0x2b] != target_data[0x2b]) {
    target_data[2] = target_data[2] | 8;
  }
  
  if (source_data[0x2a] != target_data[0x2a]) {
    target_data[2] = target_data[2] | 8;
  }
  
  // 计算数据块数量
  diff_result = (*(longlong *)(target_data + 0x1c) - *(longlong *)(target_data + 0x1a)) / RENDERING_DATA_BLOCK_SIZE;
  process_status = -(*(longlong *)(target_data + 0x1c) - *(longlong *)(target_data + 0x1a) >> 0x3f);
  
  if ((int)diff_result != 0) {
    offset_diff = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8);
    temp_result = 0;
    diff_result = diff_result & 0xffffffff;
    status_mask = temp_result;
    
    do {
      // 检查线程局部存储状态
      if ((*(int *)(offset_diff + 0x48) < _DAT_180d48e24) &&
         (FUN_1808fcb90(&system_flag_8e24), _DAT_180d48e24 == -1)) {
        _DAT_180d48e60 = &UNK_1809fcc58;
        _DAT_180d48e68 = &system_flag_8e78;
        _DAT_180d48e70 = 0;
        
        // 继续处理剩余的数据块
        // ... (此处省略了部分代码实现)
      }
      
      // 数据块处理逻辑
      // ... (此处省略了部分代码实现)
      
      temp_result = temp_result + 1;
      diff_result = diff_result - 1;
    } while (diff_result != 0);
  }
  
LAB_180328385:
  return process_status;
}