#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part238.c - 核心引擎内存管理和资源处理模块 (9个函数)

// 全局变量声明
extern uint64_t _DAT_180c86920;    // 引擎全局数据结构指针
extern uint64_t _DAT_180c8ed18;    // 内存池标识符
extern uint64_t _DAT_180c86890;    // 资源管理器数据指针
extern uint64_t _DAT_180c86870;    // 渲染配置数据指针
extern int8_t UNK_180a0fec0;      // 格式化字符串常量

/**
 * 处理引擎资源管理器初始化和配置
 * 初始化资源管理器的各项参数，设置默认值，处理资源分配
 * 
 * @param engine_context 引擎上下文指针
 * @param resource_manager 资源管理器指针
 */
void initialize_engine_resource_manager(uint64_t engine_context, longlong *resource_manager)

{
  uint *status_flag_ptr;
  longlong resource_offset;
  longlong *resource_ptr;
  int resource_count;
  longlong temp_value;
  ulonglong loop_counter;
  ulonglong config_offset;
  uint item_count;
  ulonglong total_items;
  longlong *stack_resource_ptr;
  uint64_t stack_config_1;
  longlong *stack_resource_ptr2;
  uint64_t stack_config_2;
  uint64_t stack_config_3;
  uint64_t stack_config_4;
  uint64_t stack_config_5;
  int32_t stack_config_6;
  int32_t stack_config_7;
  int32_t stack_config_8;
  int32_t stack_config_9;
  int32_t stack_config_10;
  int32_t stack_config_11;
  int32_t stack_config_12;
  int32_t stack_config_13;
  longlong stack_config_14;
  uint64_t stack_config_15;
  uint64_t stack_config_16;
  int32_t stack_config_17;
  uint64_t stack_config_18;
  
  loop_counter = 0;
  stack_config_18 = 0xfffffffffffffffe;
  stack_config_17 = 3;
  stack_config_16 = 0;
  stack_config_15 = 0;
  stack_config_14 = 0;
  stack_resource_ptr2 = (longlong *)0x0;
  stack_config_2 = 0;
  stack_resource_ptr = (longlong *)0x0;
  
  // 初始化资源管理器
  if (resource_manager != (longlong *)0x0) {
    (**(code **)(*resource_manager + 0x28))(resource_manager);
  }
  resource_ptr = resource_manager;
  
  // 处理栈资源管理器
  if (stack_resource_ptr != (longlong *)0x0) {
    temp_value = *stack_resource_ptr;
    stack_resource_ptr = resource_manager;
    (**(code **)(temp_value + 0x38))();
    resource_ptr = stack_resource_ptr;
  }
  stack_resource_ptr = resource_ptr;
  resource_ptr = stack_resource_ptr2;
  stack_config_2 = 0;
  stack_resource_ptr2 = (longlong *)0x0;
  
  // 清理资源管理器
  if (resource_ptr != (longlong *)0x0) {
    (**(code **)(*resource_ptr + 0x38))();
  }
  
  // 设置默认配置参数
  stack_config_3 = 0x3f800000;    // 1.0f
  stack_config_4 = 0;
  stack_config_5 = 0x3f80000000000000;  // 1.0
  stack_config_6 = 0;
  stack_config_7 = 0;
  stack_config_8 = 0;
  stack_config_9 = 0x3f800000;    // 1.0f
  stack_config_10 = 0;
  stack_config_11 = 0;
  stack_config_12 = 0;
  stack_config_13 = 0;
  stack_config_14 = 0x3f800000;    // 1.0f
  
  // 调用资源管理配置函数
  FUN_180209470(&stack_resource_ptr);
  temp_value = _DAT_180c86920;
  config_offset = loop_counter;
  total_items = loop_counter;
  
  // 配置资源管理器状态
  if (resource_manager[8] - resource_manager[7] >> 4 != 0) {
    do {
      *(char *)(*(longlong *)(config_offset + resource_manager[7]) + 0xf5) = 
        (*(int *)(temp_value + 0xe00) != 0) + -1;
      item_count = (int)total_items + 1;
      config_offset = config_offset + 0x10;
      total_items = (ulonglong)item_count;
    } while ((ulonglong)(longlong)(int)item_count < 
             (ulonglong)(resource_manager[8] - resource_manager[7] >> 4));
  }
  
  // 执行资源管理器处理
  FUN_180209720(engine_context, &stack_resource_ptr);
  
  // 处理资源管理器数据
  if ((stack_resource_ptr != (longlong *)0x0) &&
     (resource_count = (int)(stack_resource_ptr[8] - stack_resource_ptr[7] >> 4), 
      temp_value = (longlong)resource_count, 0 < resource_count)) {
    do {
      status_flag_ptr = (uint *)(*(longlong *)(loop_counter + stack_resource_ptr[7]) + 0x100);
      *status_flag_ptr = *status_flag_ptr & 0xfffff7ff;
      resource_offset = *(longlong *)(loop_counter + stack_resource_ptr[7]);
      *(uint64_t *)(resource_offset + 0x108) = 0xffffffffffffffff;
      *(int32_t *)(resource_offset + 0x110) = 0xffffffff;
      loop_counter = loop_counter + 0x10;
      temp_value = temp_value + -1;
    } while (temp_value != 0);
  }
  
  // 清理栈资源
  if (stack_config_14 == 0) {
    if (stack_resource_ptr2 != (longlong *)0x0) {
      (**(code **)(*stack_resource_ptr2 + 0x38))();
    }
    if (stack_resource_ptr != (longlong *)0x0) {
      (**(code **)(*stack_resource_ptr + 0x38))();
    }
    return;
  }
  
  // 错误处理
  FUN_18064e900();
}



// WARNING: Removing unreachable block (ram,0x0001802081ca)
// WARNING: Removing unreachable block (ram,0x0001802081e9)
// 函数调用映射说明 (简化实现标注):
// FUN_180209470 -> configure_resource_manager (简化实现)
// FUN_180209720 -> process_resource_manager_advanced (简化实现)
// FUN_18064e900 -> handle_resource_manager_error (简化实现)
// FUN_1800b3590 -> create_resource_processor (简化实现)
// FUN_180208400 -> initialize_resource_processor (简化实现)
// FUN_180080810 -> process_resource_data (简化实现)
// FUN_1801efdb0 -> lookup_resource_data (简化实现)
// FUN_1801ef300 -> validate_resource_data (简化实现)
// FUN_1801ef620 -> process_resource_data (简化实现)
// FUN_180626f80 -> log_resource_error (简化实现)
// FUN_18062b1e0 -> allocate_resource_memory (简化实现)
// FUN_18062b420 -> allocate_resource_chunk (简化实现)
// FUN_180208f20 -> process_resource_float_data (简化实现)
// SUB168 -> calculate_resource_count (简化实现)
// handle_batch_cleanup_failure -> handle_resource_cleanup_failure (简化实现)
// handle_memory_allocation_error -> handle_resource_cleanup_failure (简化实现)

// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 处理高级引擎资源管理器和配置系统
 * 执行复杂的资源管理操作，包括初始化、配置和状态更新
 * 
 * @param engine_context 引擎上下文指针
 * @param primary_manager 主资源管理器指针
 * @param config_data 配置数据
 * @param secondary_manager 次要资源管理器指针
 * @param config_params 配置参数数组
 */
void process_engine_resource_manager_advanced(uint64_t engine_context, longlong *primary_manager, 
                                            uint64_t config_data, longlong *secondary_manager,
                                            uint64_t *config_params)

{
  uint *status_flag_ptr;
  longlong resource_offset;
  longlong *resource_manager_ptr;
  int resource_count;
  longlong temp_value;
  ulonglong loop_counter;
  ulonglong config_offset;
  uint item_count;
  ulonglong total_items;
  longlong *stack_resource_ptr;
  uint64_t stack_config_1;
  longlong *stack_resource_ptr2;
  uint64_t stack_config_2;
  uint64_t stack_config_3;
  uint64_t stack_config_4;
  uint64_t stack_config_5;
  int32_t stack_config_6;
  int32_t stack_config_7;
  int32_t stack_config_8;
  int32_t stack_config_9;
  int32_t stack_config_10;
  int32_t stack_config_11;
  int32_t stack_config_12;
  int32_t stack_config_13;
  longlong stack_config_14;
  uint64_t stack_config_15;
  uint64_t stack_config_16;
  int32_t stack_config_17;
  uint64_t stack_config_18;
  
  loop_counter = 0;
  stack_config_18 = 0xfffffffffffffffe;
  stack_config_17 = 3;
  stack_config_16 = 0;
  stack_config_15 = 0;
  stack_config_14 = 0;
  stack_resource_ptr2 = (longlong *)0x0;
  stack_config_2 = 0;
  stack_resource_ptr = (longlong *)0x0;
  
  // 初始化主资源管理器
  if (primary_manager != (longlong *)0x0) {
    (**(code **)(*primary_manager + 0x28))(primary_manager);
  }
  resource_manager_ptr = primary_manager;
  
  // 处理栈资源管理器
  if (stack_resource_ptr != (longlong *)0x0) {
    temp_value = *stack_resource_ptr;
    stack_resource_ptr = primary_manager;
    (**(code **)(temp_value + 0x38))();
    resource_manager_ptr = stack_resource_ptr;
  }
  stack_resource_ptr = resource_manager_ptr;
  resource_manager_ptr = stack_resource_ptr2;
  stack_config_2 = config_data;
  stack_resource_ptr2 = (longlong *)0x0;
  
  // 清理次要资源管理器
  if (resource_manager_ptr != (longlong *)0x0) {
    (**(code **)(*resource_manager_ptr + 0x38))();
  }
  
  // 设置配置参数
  stack_config_3 = *config_params;
  stack_config_4 = config_params[1];
  stack_config_5 = config_params[2];
  stack_config_6 = config_params[3];
  stack_config_7 = *(int32_t *)(config_params + 4);
  stack_config_8 = *(int32_t *)((longlong)config_params + 0x24);
  stack_config_9 = *(int32_t *)(config_params + 5);
  stack_config_10 = *(int32_t *)((longlong)config_params + 0x2c);
  stack_config_11 = *(int32_t *)(config_params + 6);
  stack_config_12 = *(int32_t *)((longlong)config_params + 0x34);
  stack_config_13 = *(int32_t *)(config_params + 7);
  stack_config_1 = *(int32_t *)((longlong)config_params + 0x3c);
  
  // 调用资源管理配置函数
  configure_resource_manager(&stack_resource_ptr);
  temp_value = _DAT_180c86920;
  config_offset = loop_counter;
  total_items = loop_counter;
  
  // 配置主资源管理器状态
  if (primary_manager[8] - primary_manager[7] >> 4 != 0) {
    do {
      *(char *)(*(longlong *)(config_offset + primary_manager[7]) + 0xf5) = 
        (*(int *)(temp_value + 0xe00) != 0) + -1;
      item_count = (int)total_items + 1;
      config_offset = config_offset + 0x10;
      total_items = (ulonglong)item_count;
    } while ((ulonglong)(longlong)(int)item_count < 
             (ulonglong)(primary_manager[8] - primary_manager[7] >> 4));
  }
  
  // 执行高级资源管理器处理
  process_resource_manager_advanced(engine_context, &stack_resource_ptr);
  
  // 处理资源管理器数据
  if ((stack_resource_ptr != (longlong *)0x0) &&
     (resource_count = (int)(stack_resource_ptr[8] - stack_resource_ptr[7] >> 4), 
      temp_value = (longlong)resource_count, 0 < resource_count)) {
    do {
      status_flag_ptr = (uint *)(*(longlong *)(loop_counter + stack_resource_ptr[7]) + 0x100);
      *status_flag_ptr = *status_flag_ptr & 0xfffff7ff;
      resource_offset = *(longlong *)(loop_counter + stack_resource_ptr[7]);
      *(uint64_t *)(resource_offset + 0x108) = 0xffffffffffffffff;
      *(int32_t *)(resource_offset + 0x110) = 0xffffffff;
      loop_counter = loop_counter + 0x10;
      temp_value = temp_value + -1;
    } while (temp_value != 0);
  }
  
  // 清理资源
  if (stack_config_14 == 0) {
    if (stack_resource_ptr2 != (longlong *)0x0) {
      (**(code **)(*stack_resource_ptr2 + 0x38))();
    }
    if (stack_resource_ptr != (longlong *)0x0) {
      (**(code **)(*stack_resource_ptr + 0x38))();
    }
    return;
  }
  
  // 错误处理
  handle_resource_manager_error();
}





/**
 * 创建和初始化引擎资源处理器
 * 创建资源处理器并设置初始状态
 * 
 * @param engine_context 引擎上下文指针
 * @param resource_data 资源数据指针
 * @param process_flag 处理标志
 */
void create_engine_resource_processor(uint64_t engine_context, uint64_t resource_data, int8_t process_flag)

{
  uint64_t resource_handle;
  uint64_t *resource_ptr;
  longlong *temp_resource_ptr;
  
  // 创建资源处理器
  resource_ptr = (uint64_t *)create_resource_processor(engine_context, &temp_resource_ptr, resource_data, 0);
  resource_handle = *resource_ptr;
  
  // 清理临时资源
  if (temp_resource_ptr != (longlong *)0x0) {
    (**(code **)(*temp_resource_ptr + 0x38))();
  }
  
  // 初始化资源处理器
  initialize_resource_processor(engine_context, resource_handle, process_flag);
  return;
}





/**
 * 初始化资源处理器并设置参数
 * 设置资源处理器的各种参数和状态标志
 * 
 * @param processor_ptr 处理器指针
 * @param resource_manager 资源管理器指针
 * @param process_flag 处理标志
 * @param config_param 配置参数
 */
void initialize_resource_processor(longlong processor_ptr, longlong *resource_manager, 
                                 int8_t process_flag, uint64_t config_param)

{
  longlong *old_resource_manager;
  
  // 处理现有资源
  if (*(longlong *)(processor_ptr + 0x38) != 0) {
    process_resource_data(processor_ptr + 0x20, processor_ptr + 0x38, process_flag, config_param, 0xfffffffffffffffe);
    *(int32_t *)(processor_ptr + 0x28) = *(int32_t *)(processor_ptr + 0x848);
    *(int32_t *)(processor_ptr + 0x2c) = 0x3f800000;
    *(int8_t *)(processor_ptr + 0x30) = *(int8_t *)(processor_ptr + 0x40);
  }
  
  // 初始化新的资源管理器
  if (resource_manager != (longlong *)0x0) {
    (**(code **)(*resource_manager + 0x28))(resource_manager);
  }
  
  // 切换资源管理器
  old_resource_manager = *(longlong **)(processor_ptr + 0x38);
  *(longlong **)(processor_ptr + 0x38) = resource_manager;
  if (old_resource_manager != (longlong *)0x0) {
    (**(code **)(*old_resource_manager + 0x38))();
  }
  
  // 设置处理器状态
  *(int8_t *)(processor_ptr + 0x40) = process_flag;
  *(int32_t *)(processor_ptr + 0x848) = 0;
  *(int8_t *)(processor_ptr + 0x41) = 0;
  return;
}





/**
 * 处理资源管理器清理和状态重置
 * 遍历资源管理器并清理所有资源状态
 * 
 * @param resource_manager_ptr 资源管理器指针
 */
void cleanup_resource_manager_state(longlong *resource_manager_ptr)

{
  uint *status_flag_ptr;
  longlong resource_offset;
  ulonglong outer_counter;
  uint inner_item_count;
  ulonglong inner_counter;
  ulonglong resource_count;
  longlong base_address;
  ulonglong item_index;
  ulonglong chunk_offset;
  
  base_address = *resource_manager_ptr;
  item_index = 0;
  resource_count = calculate_resource_count(resource_manager_ptr);
  outer_counter = item_index;
  chunk_offset = item_index;
  
  // 检查是否有资源需要处理
  if (resource_count >> 6 == resource_count >> 0x3f) {
    *(int8_t *)((longlong)resource_manager_ptr + 0x41) = 1;
    return;
  }
  
  // 遍历资源块
  do {
    base_address = *(longlong *)(chunk_offset + base_address);
    resource_offset = *(longlong *)(base_address + 0x38);
    inner_counter = item_index;
    resource_count = item_index;
    
    // 处理资源块中的每个资源
    if (*(longlong *)(base_address + 0x40) - resource_offset >> 4 != 0) {
      do {
        status_flag_ptr = (uint *)(*(longlong *)(resource_count + resource_offset) + 0x100);
        *status_flag_ptr = *status_flag_ptr & 0xfffff7ff;
        resource_offset = *(longlong *)(resource_count + *(longlong *)(base_address + 0x38));
        *(uint64_t *)(resource_offset + 0x108) = 0xffffffffffffffff;
        *(int32_t *)(resource_offset + 0x110) = 0xffffffff;
        
        // 检查资源是否已被清理
        if (*(longlong *)(*(longlong *)(resource_count + *(longlong *)(base_address + 0x38)) + 0x2d0) != 0) {
          // 资源清理失败
          handle_resource_cleanup_failure();
        }
        
        inner_item_count = (int)inner_counter + 1;
        *(uint64_t *)(*(longlong *)(resource_count + *(longlong *)(base_address + 0x38)) + 0x2d0) = 0;
        resource_offset = *(longlong *)(base_address + 0x38);
        inner_counter = (ulonglong)inner_item_count;
        resource_count = resource_count + 0x10;
      } while ((ulonglong)(longlong)(int)inner_item_count <
               (ulonglong)(*(longlong *)(base_address + 0x40) - resource_offset >> 4));
    }
    
    base_address = *resource_manager_ptr;
    inner_item_count = (int)outer_counter + 1;
    resource_count = calculate_resource_count(resource_manager_ptr);
    outer_counter = (ulonglong)inner_item_count;
    chunk_offset = chunk_offset + 0x78;
  } while ((ulonglong)(longlong)(int)inner_item_count < (ulonglong)((resource_count >> 6) - (resource_count >> 0x3f)));
  
  // 标记清理完成
  *(int8_t *)((longlong)resource_manager_ptr + 0x41) = 1;
  return;
}





/**
 * 批量处理资源管理器状态清理
 * 遍历多个资源管理器并执行状态清理操作
 */
void batch_cleanup_resource_managers(void)

{
  uint *status_flag_ptr;
  longlong resource_offset;
  longlong resource_base;
  int process_counter;
  uint item_count;
  ulonglong resource_index;
  ulonglong chunk_offset;
  longlong manager_array;
  ulonglong manager_index;
  longlong *manager_ptr;
  ulonglong current_index;
  
  current_index = manager_index & 0xffffffff;
  do {
    resource_base = *(longlong *)(current_index + manager_array);
    resource_index = manager_index & 0xffffffff;
    resource_offset = *(longlong *)(resource_base + 0x38);
    chunk_offset = manager_index;
    
    // 处理资源管理器中的资源
    if (*(longlong *)(resource_base + 0x40) - resource_offset >> 4 != 0) {
      do {
        status_flag_ptr = (uint *)(*(longlong *)(chunk_offset + resource_offset) + 0x100);
        *status_flag_ptr = *status_flag_ptr & 0xfffff7ff;
        resource_offset = *(longlong *)(chunk_offset + *(longlong *)(resource_base + 0x38));
        *(uint64_t *)(resource_offset + 0x108) = 0xffffffffffffffff;
        *(int32_t *)(resource_offset + 0x110) = 0xffffffff;
        
        // 检查资源状态
        if (*(longlong *)(*(longlong *)(chunk_offset + *(longlong *)(resource_base + 0x38)) + 0x2d0) != 0) {
          // 资源清理失败
          handle_batch_cleanup_failure();
        }
        
        item_count = (int)resource_index + 1;
        resource_index = (ulonglong)item_count;
        *(ulonglong *)(*(longlong *)(chunk_offset + *(longlong *)(resource_base + 0x38)) + 0x2d0) = manager_index;
        resource_offset = *(longlong *)(resource_base + 0x38);
        chunk_offset = chunk_offset + 0x10;
      } while ((ulonglong)(longlong)(int)item_count <
               (ulonglong)(*(longlong *)(resource_base + 0x40) - resource_offset >> 4));
    }
    
    manager_array = *manager_ptr;
    process_counter = process_counter + 1;
    current_index = current_index + 0x78;
    resource_base = calculate_batch_resource_count(manager_ptr, manager_array);
  } while ((ulonglong)(longlong)process_counter < (ulonglong)((resource_base >> 6) - (resource_base >> 0x3f)));
  
  // 标记批量清理完成
  *(int8_t *)((longlong)manager_ptr + 0x41) = 1;
  return;
}





/**
 * 设置资源管理器完成状态
 * 简单的状态设置函数
 * 
 * @param manager_ptr 资源管理器指针
 */
void set_resource_manager_complete(longlong manager_ptr)

{
  *(int8_t *)(manager_ptr + 0x41) = 1;
  return;
}





/**
 * 更新资源管理器时间参数
 * 处理时间相关的资源管理器参数更新
 * 
 * @param manager_ptr 资源管理器指针
 * @param time_delta 时间增量
 */
void update_resource_manager_time(longlong manager_ptr, float time_delta)

{
  longlong *resource_manager;
  float accumulated_time;
  float threshold_time;
  
  // 处理主要资源的时间更新
  if (*(longlong *)(manager_ptr + 0x38) != 0) {
    accumulated_time = time_delta + *(float *)(manager_ptr + 0x848);
    *(float *)(manager_ptr + 0x848) = accumulated_time;
    threshold_time = (float)*(int *)(*(longlong *)(*(longlong *)(manager_ptr + 0x38) + 0xc0) + -0x28) *
            0.033333335;
    if (threshold_time < accumulated_time) {
      if (*(char *)(manager_ptr + 0x40) == '\0') {
        *(float *)(manager_ptr + 0x848) = threshold_time;
      }
      else {
        accumulated_time = accumulated_time - threshold_time;
        if (accumulated_time <= 0.0) {
          accumulated_time = 0.0;
        }
        *(float *)(manager_ptr + 0x848) = accumulated_time;
      }
    }
  }
  
  // 处理次要资源的时间更新
  if (*(longlong *)(manager_ptr + 0x20) != 0) {
    accumulated_time = time_delta + *(float *)(manager_ptr + 0x28);
    *(float *)(manager_ptr + 0x28) = accumulated_time;
    threshold_time = (float)*(int *)(*(longlong *)(*(longlong *)(manager_ptr + 0x20) + 0xc0) + -0x28) *
            0.033333335;
    if (threshold_time < accumulated_time) {
      if (*(char *)(manager_ptr + 0x30) == '\0') {
        *(float *)(manager_ptr + 0x28) = threshold_time;
      }
      else {
        accumulated_time = accumulated_time - threshold_time;
        if (accumulated_time <= 0.0) {
          accumulated_time = 0.0;
        }
        *(float *)(manager_ptr + 0x28) = accumulated_time;
      }
    }
    accumulated_time = *(float *)(manager_ptr + 0x2c) - time_delta * 5.0;
    *(float *)(manager_ptr + 0x2c) = accumulated_time;
    if (accumulated_time <= 0.0) {
      resource_manager = *(longlong **)(manager_ptr + 0x20);
      *(uint64_t *)(manager_ptr + 0x20) = 0;
      if (resource_manager != (longlong *)0x0) {
        (**(code **)(*resource_manager + 0x38))();
      }
      *(int32_t *)(manager_ptr + 0x2c) = 0;
    }
  }
  return;
}



// 函数调用映射说明 (简化实现标注):
// FUN_180209470 -> configure_resource_manager (简化实现)
// FUN_180209720 -> process_resource_manager_advanced (简化实现)
// FUN_18064e900 -> handle_resource_manager_error (简化实现)
// FUN_1800b3590 -> create_resource_processor (简化实现)
// FUN_180208400 -> initialize_resource_processor (简化实现)
// FUN_180080810 -> process_resource_data (简化实现)
// FUN_1801efdb0 -> lookup_resource_data (简化实现)
// FUN_1801ef300 -> validate_resource_data (简化实现)
// FUN_1801ef620 -> process_resource_data (简化实现)
// FUN_180626f80 -> log_resource_error (简化实现)
// FUN_18062b1e0 -> allocate_resource_memory (简化实现)
// FUN_18062b420 -> allocate_resource_chunk (简化实现)
// FUN_180208f20 -> process_resource_float_data (简化实现)
// SUB168 -> calculate_resource_count (简化实现)
// handle_batch_cleanup_failure -> handle_resource_cleanup_failure (简化实现)
// handle_memory_allocation_error -> handle_resource_cleanup_failure (简化实现)

// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 处理资源管理器的高级数据操作
 * 执行复杂的资源数据管理和优化操作
 * 
 * @param resource_manager 资源管理器指针
 * @param data_flags 数据标志
 * @param float_data 浮点数据数组
 * @param data_count 数据数量
 */
void process_resource_manager_advanced_data(longlong *resource_manager, ulonglong data_flags, 
                                         float *float_data, int data_count)

{
  float temp_float;
  int32_t temp_uint1;
  int32_t temp_uint2;
  uint64_t temp_ullong;
  char temp_char;
  byte temp_byte;
  uint64_t *ptr_ullong;
  longlong temp_long1;
  float *ptr_float;
  longlong temp_long2;
  longlong resource_base;
  ulonglong data_offset;
  float *float_ptr;
  int temp_int;
  char *char_ptr;
  longlong temp_long3;
  int32_t temp_uint3;
  uint *ptr_uint;
  uint temp_uint4;
  longlong temp_long4;
  int temp_int2;
  ulonglong ullong_counter1;
  ulonglong ullong_counter2;
  ulonglong ullong_counter3;
  ulonglong ullong_counter4;
  uint temp_uint5;
  uint *ptr_uint2;
  bool bool_flag;
  float max_float;
  uint64_t xmm0_out1;
  uint64_t xmm0_out2;
  float normalization_factor;
  ulonglong stack_data;
  uint stack_uint1;
  uint stack_uint2;
  longlong stack_long1;
  longlong stack_long2;
  longlong stack_long3;
  
  if (((*(char *)((longlong)resource_manager + 0x41) != '\0') ||
      (resource_base = SUB168(SEXT816(-0x7777777777777777) * SEXT816(resource_manager[1] - *resource_manager),8) +
                (resource_manager[1] - *resource_manager), resource_base >> 6 == resource_base >> 0x3f)) ||
     ((resource_base = resource_manager[7], resource_base == 0 &&
      ((data_count < 1 && (*(float *)((longlong)resource_manager + 0x2c) <= 0.0)))))) {
    resource_base = *resource_manager;
    ullong_counter1 = 0;
    temp_long4 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(resource_manager[1] - resource_base),8) +
             (resource_manager[1] - resource_base);
    ullong_counter3 = ullong_counter1;
    ullong_counter4 = ullong_counter1;
    if (temp_long4 >> 6 != temp_long4 >> 0x3f) {
      do {
        temp_long4 = *(longlong *)(resource_base + ullong_counter4);
        data_offset = ullong_counter1;
        ullong_counter2 = ullong_counter1;
        if (*(longlong *)(temp_long4 + 0x40) - *(longlong *)(temp_long4 + 0x38) >> 4 != 0) {
          do {
            if (((*(byte *)(*(longlong *)(temp_long4 + 0x38) + 8 + data_offset) & 1) != 0) &&
               (temp_long3 = *(longlong *)(*(longlong *)(temp_long4 + 0x38) + data_offset),
               (*(uint *)(temp_long3 + 0x100) & 0x800) != 0)) {
              *(int32_t *)(*(longlong *)(temp_long3 + 0x2d0) + 0x10) = 0;
              *(int32_t *)(*(longlong *)(temp_long3 + 0x2d0) + 0xc) = 0;
              *(int32_t *)(*(longlong *)(temp_long3 + 0x2d0) + 0x14) = 0;
              *(int32_t *)(*(longlong *)(temp_long3 + 0x2d0) + 0x18) = 0;
              temp_long4 = *(longlong *)(resource_base + ullong_counter4);
            }
            temp_uint4 = (int)ullong_counter2 + 1;
            data_offset = data_offset + 0x10;
            ullong_counter2 = (ulonglong)temp_uint4;
          } while ((ulonglong)(longlong)(int)temp_uint4 <
                   (ulonglong)(*(longlong *)(temp_long4 + 0x40) - *(longlong *)(temp_long4 + 0x38) >> 4));
        }
        resource_base = *resource_manager;
        temp_uint4 = (int)ullong_counter3 + 1;
        temp_long4 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(resource_manager[1] - resource_base),8) +
                 (resource_manager[1] - resource_base);
        ullong_counter3 = (ulonglong)temp_uint4;
        ullong_counter4 = ullong_counter4 + 0x78;
      } while ((ulonglong)(longlong)(int)temp_uint4 < (ulonglong)((temp_long4 >> 6) - (temp_long4 >> 0x3f)));
    }
  }
  else {
    normalization_factor = 1.0;
    ullong_counter4 = 0;
    stack_data = data_flags & 0xffffffff00000000;
    ullong_counter3 = ullong_counter4;
    if (resource_base != 0) {
      max_float = 1.0 - *(float *)((longlong)resource_manager + 0x2c);
      process_resource_float_data(max_float, resource_base, &stack_data, (longlong)resource_manager + 0x44, max_float);
      ullong_counter3 = stack_data & 0xffffffff;
    }
    if (resource_manager[4] != 0) {
      process_resource_float_data(resource_manager, resource_manager[4], &stack_data, (longlong)resource_manager + 0x44,
                    *(int32_t *)((longlong)resource_manager + 0x2c));
      ullong_counter3 = stack_data & 0xffffffff;
    }
    ullong_counter1 = ullong_counter4;
    if (0 < (longlong)data_count) {
      do {
        temp_int = (int)ullong_counter3;
        if (0xff < temp_int) break;
        bool_flag = false;
        ptr_float = (float *)(resource_manager + 9);
        data_offset = ullong_counter4;
        do {
          if (temp_int <= (int)data_offset) {
            if (!bool_flag) {
              ullong_counter3 = (ulonglong)(temp_int + 1);
              *(float *)((longlong)resource_manager + (longlong)temp_int * 8 + 0x44) = *float_data;
              *(float *)(resource_manager + (longlong)temp_int + 9) = float_data[1];
            }
            break;
          }
          if (ptr_float[-1] == *float_data) {
            max_float = float_data[1];
            temp_float = *ptr_float;
            *ptr_float = max_float + temp_float;
            if (normalization_factor < max_float + temp_float) {
              *ptr_float = 1.0;
            }
            bool_flag = true;
          }
          data_offset = (ulonglong)((int)data_offset + 1);
          ptr_float = ptr_float + 2;
        } while (!bool_flag);
        ullong_counter1 = ullong_counter1 + 1;
        float_data = float_data + 2;
      } while ((longlong)ullong_counter1 < (longlong)data_count);
      stack_data = CONCAT44(stack_data._4_4_,(int)ullong_counter3);
    }
    temp_int = (int)ullong_counter3;
    if (0 < temp_int) {
      if (0x80 < temp_int) {
        if (1 < temp_int) {
          resource_base = (longlong)(temp_int + -1);
          ullong_counter3 = (ulonglong)(temp_int - 1);
          do {
            ullong_counter1 = ullong_counter4;
            if (3 < resource_base) {
              ptr_ullong = (uint64_t *)((longlong)resource_manager + 0x44);
              temp_long4 = (resource_base - 4U >> 2) + 1;
              ullong_counter1 = temp_long4 * 4;
              do {
                normalization_factor = *(float *)((longlong)ptr_ullong + 0xc);
                if (*(float *)((longlong)ptr_ullong + 4) <= normalization_factor &&
                    normalization_factor != *(float *)((longlong)ptr_ullong + 4)) {
                  temp_ullong = ptr_ullong[1];
                  ptr_ullong[1] = *ptr_ullong;
                  normalization_factor = *(float *)((longlong)ptr_ullong + 0xc);
                  *ptr_ullong = temp_ullong;
                }
                if (normalization_factor < *(float *)((longlong)ptr_ullong + 0x14)) {
                  temp_ullong = ptr_ullong[1];
                  ptr_ullong[1] = ptr_ullong[2];
                  ptr_ullong[2] = temp_ullong;
                }
                if (*(float *)((longlong)ptr_ullong + 0x14) <= *(float *)((longlong)ptr_ullong + 0x1c) &&
                    *(float *)((longlong)ptr_ullong + 0x1c) != *(float *)((longlong)ptr_ullong + 0x14)) {
                  temp_ullong = ptr_ullong[2];
                  ptr_ullong[2] = ptr_ullong[3];
                  ptr_ullong[3] = temp_ullong;
                }
                if (*(float *)((longlong)ptr_ullong + 0x1c) <= *(float *)((longlong)ptr_ullong + 0x24) &&
                    *(float *)((longlong)ptr_ullong + 0x24) != *(float *)((longlong)ptr_ullong + 0x1c)) {
                  temp_ullong = ptr_ullong[3];
                  ptr_ullong[3] = ptr_ullong[4];
                  ptr_ullong[4] = temp_ullong;
                }
                ptr_ullong = ptr_ullong + 4;
                temp_long4 = temp_long4 + -1;
              } while (temp_long4 != 0);
            }
            if ((longlong)ullong_counter1 < resource_base) {
              ptr_ullong = (uint64_t *)((longlong)resource_manager + ullong_counter1 * 8 + 0x44);
              temp_long4 = resource_base - ullong_counter1;
              do {
                if (*(float *)((longlong)ptr_ullong + 4) <= *(float *)((longlong)ptr_ullong + 0xc) &&
                    *(float *)((longlong)ptr_ullong + 0xc) != *(float *)((longlong)ptr_ullong + 4)) {
                  temp_ullong = *ptr_ullong;
                  *ptr_ullong = ptr_ullong[1];
                  ptr_ullong[1] = temp_ullong;
                }
                ptr_ullong = ptr_ullong + 1;
                temp_long4 = temp_long4 + -1;
              } while (temp_long4 != 0);
            }
            resource_base = resource_base + -1;
            ullong_counter3 = ullong_counter3 - 1;
          } while (ullong_counter3 != 0);
        }
        ullong_counter3 = 0x80;
        stack_data = CONCAT44(stack_data._4_4_,0x80);
      }
      *(int *)((longlong)resource_manager + 0x844) = (int)ullong_counter3;
      resource_base = *resource_manager;
      stack_uint2 = 0;
      temp_long4 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(resource_manager[1] - resource_base),8) +
               (resource_manager[1] - resource_base);
      if (temp_long4 >> 6 != temp_long4 >> 0x3f) {
        stack_long2 = 0;
        ullong_counter1 = ullong_counter4;
        do {
          temp_long4 = *(longlong *)(resource_base + 0x58 + stack_long2);
          temp_long2 = *(longlong *)(resource_base + 0x60 + stack_long2) - temp_long4;
          stack_uint1 = 0;
          temp_long3 = temp_long2 >> 0x3f;
          temp_uint4 = (uint)ullong_counter1;
          if (temp_long2 / 0xc + temp_long3 != temp_long3) {
            stack_long3 = 0;
            stack_long1 = 0;
            ullong_counter1 = ullong_counter4;
            do {
              temp_long3 = *(longlong *)(*(longlong *)(resource_base + stack_long2) + 0x38);
              temp_uint4 = (uint)ullong_counter1;
              if ((*(byte *)(stack_long1 + 8 + temp_long3) & 1) != 0) {
                temp_int = *(int *)(temp_long4 + stack_long3);
                temp_long2 = *(longlong *)(stack_long1 + temp_long3);
                temp_byte = 0;
                if (temp_int == -1) {
                  temp_long1 = *(longlong *)(resource_base + 0x10 + stack_long2);
                  if (temp_long1 == 0) {
                    temp_long3 = lookup_resource_data(temp_long3, temp_long2);
                    temp_uint4 = stack_uint1;
                    if ((temp_long3 == 0) || (temp_int2 = *(int *)(temp_long3 + 0x18), temp_int2 == 0))
                    goto resource_skip_label;
                    temp_uint3 = *(int32_t *)(temp_long3 + 0x2c);
                  }
                  else {
                    temp_char = validate_resource_data(temp_long3, temp_long2, temp_long1);
                    if (temp_char == '\0') {
                      log_resource_error(&UNK_180a0fec0);
                      temp_int = *(int *)(temp_long4 + stack_long3);
                      temp_uint4 = stack_uint1;
                      goto resource_skip_label;
                    }
                    temp_long3 = process_resource_data(xmm0_out1, temp_long2, temp_long1);
                    temp_uint3 = *(int32_t *)(temp_long3 + 0x2c);
                    temp_long3 = lookup_resource_data(xmm0_out2, temp_long1);
                    temp_int2 = *(int *)(temp_long3 + 0x18);
                  }
                  temp_uint1 = *(int32_t *)(temp_long3 + 0x24);
                  temp_uint2 = *(int32_t *)(temp_long3 + 0x28);
                  *(int *)(temp_long4 + 4 + stack_long3) = temp_int2;
                  *(int32_t *)(temp_long4 + 8 + stack_long3) = *(int32_t *)(temp_long3 + 0x1c);
                  *(byte *)(temp_long2 + 0xfe) = *(byte *)(temp_long2 + 0xfe) & 0xf7;
                  *(uint *)(temp_long2 + 0x100) = *(uint *)(temp_long2 + 0x100) | 0x800;
                  temp_ullong = _DAT_180c8ed18;
                  *(int32_t *)(temp_long2 + 0x10c) = temp_uint1;
                  if (temp_long1 == 0) {
                    temp_byte = 8;
                  }
                  *(int32_t *)(temp_long2 + 0x110) = temp_uint2;
                  *(byte *)(temp_long2 + 0xfe) = *(byte *)(temp_long2 + 0xfe) | temp_byte;
                  *(int32_t *)(temp_long2 + 0x108) = temp_uint3;
                  ptr_ullong = (uint64_t *)allocate_resource_memory(temp_ullong, 0x20, 8, 3);
                  *ptr_ullong = 0;
                  *(int32_t *)(ptr_ullong + 1) = 0;
                  *(int32_t *)((longlong)ptr_ullong + 0xc) = 0xffffffff;
                  ptr_ullong[2] = 0;
                  *(int32_t *)(ptr_ullong + 3) = 0;
                  *(uint64_t **)(temp_long2 + 0x2d0) = ptr_ullong;
                  *(int32_t *)(temp_long4 + stack_long3) = 0;
                }
                else {
resource_skip_label:
                  if (temp_int < 0) goto resource_complete_label;
                }
                ptr_uint = (uint *)((longlong)*(int *)(_DAT_180c86890 + 0x9c8) * 0x488 +
                                  _DAT_180c86890 + 0xb8);
                if ((int)ullong_counter3 == 0) {
                  temp_uint5 = 0xffffffff;
                }
                else {
                  LOCK();
                  temp_uint5 = *ptr_uint;
                  *ptr_uint = *ptr_uint + (int)ullong_counter3;
                  UNLOCK();
                  ullong_counter1 = (ulonglong)(temp_uint5 >> 0xb);
                  ullong_counter3 = (ulonglong)(((uint)stack_data - 1) + temp_uint5 >> 0xb);
                  if (ullong_counter1 <= ullong_counter3) {
                    char_ptr = (char *)((longlong)ptr_uint + ullong_counter1 + 0x408);
                    temp_long3 = (ullong_counter3 - ullong_counter1) + 1;
                    ptr_uint2 = ptr_uint + (ulonglong)(temp_uint5 >> 0xb) * 2 + 2;
                    do {
                      temp_int = (int)ullong_counter1;
                      if (*(longlong *)ptr_uint2 == 0) {
                        temp_long1 = allocate_resource_chunk(_DAT_180c8ed18, 0x4000, 0x25);
                        LOCK();
                        bool_flag = *(longlong *)(ptr_uint + (longlong)temp_int * 2 + 2) == 0;
                        if (bool_flag) {
                          *(longlong *)(ptr_uint + (longlong)temp_int * 2 + 2) = temp_long1;
                        }
                        UNLOCK();
                        if (bool_flag) {
                          temp_uint4 = temp_int * 0x800;
                          temp_int2 = temp_uint4 + 0x800;
                          for (; (int)temp_uint4 < temp_int2; temp_uint4 = temp_uint4 + 1) {
                            *(uint64_t *)
                             (*(longlong *)(ptr_uint + (ulonglong)(temp_uint4 >> 0xb) * 2 + 2) +
                             (longlong)(int)(temp_uint4 + (temp_uint4 >> 0xb) * -0x800) * 8) = 0;
                          }
                          LOCK();
                          *(int8_t *)((longlong)temp_int + 0x408 + (longlong)ptr_uint) = 0;
                          UNLOCK();
                        }
                        else {
                          if (temp_long1 != 0) {
                            // 内存分配失败
                            handle_memory_allocation_error();
                          }
                          do {
                          } while (*char_ptr != '\0');
                        }
                      }
                      else {
                        do {
                        } while (*char_ptr != '\0');
                      }
                      ullong_counter1 = (ulonglong)(temp_int + 1);
                      ptr_uint2 = ptr_uint2 + 2;
                      char_ptr = char_ptr + 1;
                      temp_long3 = temp_long3 + -1;
                    } while (temp_long3 != 0);
                  }
                  ullong_counter3 = (ulonglong)(uint)stack_data;
                }
                *(int32_t *)(*(longlong *)(temp_long2 + 0x2d0) + 0x10) =
                     *(int32_t *)(temp_long4 + 8 + stack_long3);
                *(int *)(*(longlong *)(temp_long2 + 0x2d0) + 0x14) = (int)ullong_counter3;
                *(uint *)(*(longlong *)(temp_long2 + 0x2d0) + 0x18) = temp_uint5;
                *(int32_t *)(*(longlong *)(temp_long2 + 0x2d0) + 0xc) =
                     *(int32_t *)(_DAT_180c86870 + 0x224);
                temp_uint4 = stack_uint1;
                if (0 < (int)ullong_counter3) {
                  ptr_float = (float *)(resource_manager + 9);
                  do {
                    float_ptr = (float *)(*(longlong *)(ptr_uint + (ulonglong)(temp_uint5 >> 0xb) * 2 + 2)
                                       + (ulonglong)(temp_uint5 + (temp_uint5 >> 0xb) * -0x800) * 8);
                    *float_ptr = (float)(int)ptr_float[-1];
                    float_ptr[1] = *ptr_float;
                    ullong_counter3 = ullong_counter3 - 1;
                    ptr_float = ptr_float + 2;
                    temp_uint5 = temp_uint5 + 1;
                  } while (ullong_counter3 != 0);
                  ullong_counter3 = stack_data & 0xffffffff;
                }
              }
resource_complete_label:
              temp_long4 = *(longlong *)(resource_base + 0x58 + stack_long2);
              stack_uint1 = temp_uint4 + 1;
              ullong_counter1 = (ulonglong)stack_uint1;
              stack_long1 = stack_long1 + 0x10;
              stack_long3 = stack_long3 + 0xc;
              temp_uint4 = stack_uint2;
            } while ((ulonglong)(longlong)(int)stack_uint1 <
                     (ulonglong)((*(longlong *)(resource_base + 0x60 + stack_long2) - temp_long4) / 0xc));
          }
          resource_base = *resource_manager;
          stack_uint2 = temp_uint4 + 1;
          ullong_counter1 = (ulonglong)stack_uint2;
          stack_long2 = stack_long2 + 0x78;
          temp_long4 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(resource_manager[1] - resource_base),8) +
                   (resource_manager[1] - resource_base);
          if ((ulonglong)((temp_long4 >> 6) - (temp_long4 >> 0x3f)) <= (ulonglong)(longlong)(int)stack_uint2)
          {
            return;
          }
        } while( true );
      }
    }
  }
  return;
}



// 函数调用映射说明 (简化实现标注):
// FUN_180209470 -> configure_resource_manager (简化实现)
// FUN_180209720 -> process_resource_manager_advanced (简化实现)
// FUN_18064e900 -> handle_resource_manager_error (简化实现)
// FUN_1800b3590 -> create_resource_processor (简化实现)
// FUN_180208400 -> initialize_resource_processor (简化实现)
// FUN_180080810 -> process_resource_data (简化实现)
// FUN_1801efdb0 -> lookup_resource_data (简化实现)
// FUN_1801ef300 -> validate_resource_data (简化实现)
// FUN_1801ef620 -> process_resource_data (简化实现)
// FUN_180626f80 -> log_resource_error (简化实现)
// FUN_18062b1e0 -> allocate_resource_memory (简化实现)
// FUN_18062b420 -> allocate_resource_chunk (简化实现)
// FUN_180208f20 -> process_resource_float_data (简化实现)
// SUB168 -> calculate_resource_count (简化实现)
// handle_batch_cleanup_failure -> handle_resource_cleanup_failure (简化实现)
// handle_memory_allocation_error -> handle_resource_cleanup_failure (简化实现)

// WARNING: Globals starting with '_' overlap smaller symbols at the same address



