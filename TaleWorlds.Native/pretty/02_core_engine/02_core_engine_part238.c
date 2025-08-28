#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part238.c - 核心引擎内存管理和资源处理模块 (9个函数)

// 全局变量声明
extern undefined8 _DAT_180c86920;    // 引擎全局数据结构指针
extern undefined8 _DAT_180c8ed18;    // 内存池标识符
extern undefined8 _DAT_180c86890;    // 资源管理器数据指针
extern undefined8 _DAT_180c86870;    // 渲染配置数据指针
extern undefined1 UNK_180a0fec0;      // 格式化字符串常量

/**
 * 处理引擎资源管理器初始化和配置
 * 初始化资源管理器的各项参数，设置默认值，处理资源分配
 * 
 * @param engine_context 引擎上下文指针
 * @param resource_manager 资源管理器指针
 */
void initialize_engine_resource_manager(undefined8 engine_context, longlong *resource_manager)

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
  undefined8 stack_config_1;
  longlong *stack_resource_ptr2;
  undefined8 stack_config_2;
  undefined8 stack_config_3;
  undefined8 stack_config_4;
  undefined8 stack_config_5;
  undefined4 stack_config_6;
  undefined4 stack_config_7;
  undefined4 stack_config_8;
  undefined4 stack_config_9;
  undefined4 stack_config_10;
  undefined4 stack_config_11;
  undefined4 stack_config_12;
  undefined4 stack_config_13;
  longlong stack_config_14;
  undefined8 stack_config_15;
  undefined8 stack_config_16;
  undefined4 stack_config_17;
  undefined8 stack_config_18;
  
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
      *(undefined8 *)(resource_offset + 0x108) = 0xffffffffffffffff;
      *(undefined4 *)(resource_offset + 0x110) = 0xffffffff;
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
void process_engine_resource_manager_advanced(undefined8 engine_context, longlong *primary_manager, 
                                            undefined8 config_data, longlong *secondary_manager,
                                            undefined8 *config_params)

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
  undefined8 stack_config_1;
  longlong *stack_resource_ptr2;
  undefined8 stack_config_2;
  undefined8 stack_config_3;
  undefined8 stack_config_4;
  undefined8 stack_config_5;
  undefined4 stack_config_6;
  undefined4 stack_config_7;
  undefined4 stack_config_8;
  undefined4 stack_config_9;
  undefined4 stack_config_10;
  undefined4 stack_config_11;
  undefined4 stack_config_12;
  undefined4 stack_config_13;
  longlong stack_config_14;
  undefined8 stack_config_15;
  undefined8 stack_config_16;
  undefined4 stack_config_17;
  undefined8 stack_config_18;
  
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
  stack_config_7 = *(undefined4 *)(config_params + 4);
  stack_config_8 = *(undefined4 *)((longlong)config_params + 0x24);
  stack_config_9 = *(undefined4 *)(config_params + 5);
  stack_config_10 = *(undefined4 *)((longlong)config_params + 0x2c);
  stack_config_11 = *(undefined4 *)(config_params + 6);
  stack_config_12 = *(undefined4 *)((longlong)config_params + 0x34);
  stack_config_13 = *(undefined4 *)(config_params + 7);
  stack_config_1 = *(undefined4 *)((longlong)config_params + 0x3c);
  
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
      *(undefined8 *)(resource_offset + 0x108) = 0xffffffffffffffff;
      *(undefined4 *)(resource_offset + 0x110) = 0xffffffff;
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
void create_engine_resource_processor(undefined8 engine_context, undefined8 resource_data, undefined1 process_flag)

{
  undefined8 resource_handle;
  undefined8 *resource_ptr;
  longlong *temp_resource_ptr;
  
  // 创建资源处理器
  resource_ptr = (undefined8 *)create_resource_processor(engine_context, &temp_resource_ptr, resource_data, 0);
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
                                 undefined1 process_flag, undefined8 config_param)

{
  longlong *old_resource_manager;
  
  // 处理现有资源
  if (*(longlong *)(processor_ptr + 0x38) != 0) {
    process_resource_data(processor_ptr + 0x20, processor_ptr + 0x38, process_flag, config_param, 0xfffffffffffffffe);
    *(undefined4 *)(processor_ptr + 0x28) = *(undefined4 *)(processor_ptr + 0x848);
    *(undefined4 *)(processor_ptr + 0x2c) = 0x3f800000;
    *(undefined1 *)(processor_ptr + 0x30) = *(undefined1 *)(processor_ptr + 0x40);
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
  *(undefined1 *)(processor_ptr + 0x40) = process_flag;
  *(undefined4 *)(processor_ptr + 0x848) = 0;
  *(undefined1 *)(processor_ptr + 0x41) = 0;
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
    *(undefined1 *)((longlong)resource_manager_ptr + 0x41) = 1;
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
        *(undefined8 *)(resource_offset + 0x108) = 0xffffffffffffffff;
        *(undefined4 *)(resource_offset + 0x110) = 0xffffffff;
        
        // 检查资源是否已被清理
        if (*(longlong *)(*(longlong *)(resource_count + *(longlong *)(base_address + 0x38)) + 0x2d0) != 0) {
          // 资源清理失败
          handle_resource_cleanup_failure();
        }
        
        inner_item_count = (int)inner_counter + 1;
        *(undefined8 *)(*(longlong *)(resource_count + *(longlong *)(base_address + 0x38)) + 0x2d0) = 0;
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
  *(undefined1 *)((longlong)resource_manager_ptr + 0x41) = 1;
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
        *(undefined8 *)(resource_offset + 0x108) = 0xffffffffffffffff;
        *(undefined4 *)(resource_offset + 0x110) = 0xffffffff;
        
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
  *(undefined1 *)((longlong)manager_ptr + 0x41) = 1;
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
  *(undefined1 *)(manager_ptr + 0x41) = 1;
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
      *(undefined8 *)(manager_ptr + 0x20) = 0;
      if (resource_manager != (longlong *)0x0) {
        (**(code **)(*resource_manager + 0x38))();
      }
      *(undefined4 *)(manager_ptr + 0x2c) = 0;
    }
  }
  return;
}



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
  undefined4 temp_uint1;
  undefined4 temp_uint2;
  undefined8 temp_ullong;
  char temp_char;
  byte temp_byte;
  undefined8 *ptr_ullong;
  longlong temp_long1;
  float *ptr_float;
  longlong temp_long2;
  longlong resource_base;
  ulonglong data_offset;
  float *float_ptr;
  int temp_int;
  char *char_ptr;
  longlong temp_long3;
  undefined4 temp_uint3;
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
  undefined8 xmm0_out1;
  undefined8 xmm0_out2;
  float normalization_factor;
  ulonglong stack_data;
  uint stack_uint1;
  uint stack_uint2;
  longlong stack_long1;
  longlong stack_long2;
  longlong stack_long3;
  
  if (((*(char *)((longlong)param_1 + 0x41) != '\0') ||
      (lVar11 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(param_1[1] - *param_1),8) +
                (param_1[1] - *param_1), lVar11 >> 6 == lVar11 >> 0x3f)) ||
     ((lVar11 = param_1[7], lVar11 == 0 &&
      ((param_4 < 1 && (*(float *)((longlong)param_1 + 0x2c) <= 0.0)))))) {
    lVar11 = *param_1;
    uVar22 = 0;
    lVar20 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(param_1[1] - lVar11),8) +
             (param_1[1] - lVar11);
    uVar24 = uVar22;
    uVar25 = uVar22;
    if (lVar20 >> 6 != lVar20 >> 0x3f) {
      do {
        lVar20 = *(longlong *)(lVar11 + uVar25);
        uVar12 = uVar22;
        uVar23 = uVar22;
        if (*(longlong *)(lVar20 + 0x40) - *(longlong *)(lVar20 + 0x38) >> 4 != 0) {
          do {
            if (((*(byte *)(*(longlong *)(lVar20 + 0x38) + 8 + uVar12) & 1) != 0) &&
               (lVar16 = *(longlong *)(*(longlong *)(lVar20 + 0x38) + uVar12),
               (*(uint *)(lVar16 + 0x100) & 0x800) != 0)) {
              *(undefined4 *)(*(longlong *)(lVar16 + 0x2d0) + 0x10) = 0;
              *(undefined4 *)(*(longlong *)(lVar16 + 0x2d0) + 0xc) = 0;
              *(undefined4 *)(*(longlong *)(lVar16 + 0x2d0) + 0x14) = 0;
              *(undefined4 *)(*(longlong *)(lVar16 + 0x2d0) + 0x18) = 0;
              lVar20 = *(longlong *)(lVar11 + uVar25);
            }
            uVar19 = (int)uVar23 + 1;
            uVar12 = uVar12 + 0x10;
            uVar23 = (ulonglong)uVar19;
          } while ((ulonglong)(longlong)(int)uVar19 <
                   (ulonglong)(*(longlong *)(lVar20 + 0x40) - *(longlong *)(lVar20 + 0x38) >> 4));
        }
        lVar11 = *param_1;
        uVar19 = (int)uVar24 + 1;
        lVar20 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(param_1[1] - lVar11),8) +
                 (param_1[1] - lVar11);
        uVar24 = (ulonglong)uVar19;
        uVar25 = uVar25 + 0x78;
      } while ((ulonglong)(longlong)(int)uVar19 < (ulonglong)((lVar20 >> 6) - (lVar20 >> 0x3f)));
    }
  }
  else {
    fVar30 = 1.0;
    uVar25 = 0;
    uStackX_10 = param_2 & 0xffffffff00000000;
    uVar24 = uVar25;
    if (lVar11 != 0) {
      fVar29 = 1.0 - *(float *)((longlong)param_1 + 0x2c);
      FUN_180208f20(fVar29,lVar11,&uStackX_10,(longlong)param_1 + 0x44,fVar29);
      uVar24 = uStackX_10 & 0xffffffff;
    }
    if (param_1[4] != 0) {
      FUN_180208f20(param_1,param_1[4],&uStackX_10,(longlong)param_1 + 0x44,
                    *(undefined4 *)((longlong)param_1 + 0x2c));
      uVar24 = uStackX_10 & 0xffffffff;
    }
    uVar22 = uVar25;
    if (0 < (longlong)param_4) {
      do {
        iVar14 = (int)uVar24;
        if (0xff < iVar14) break;
        bVar28 = false;
        pfVar9 = (float *)(param_1 + 9);
        uVar12 = uVar25;
        do {
          if (iVar14 <= (int)uVar12) {
            if (!bVar28) {
              uVar24 = (ulonglong)(iVar14 + 1);
              *(float *)((longlong)param_1 + (longlong)iVar14 * 8 + 0x44) = *param_3;
              *(float *)(param_1 + (longlong)iVar14 + 9) = param_3[1];
            }
            break;
          }
          if (pfVar9[-1] == *param_3) {
            fVar29 = param_3[1];
            fVar1 = *pfVar9;
            *pfVar9 = fVar29 + fVar1;
            if (fVar30 < fVar29 + fVar1) {
              *pfVar9 = 1.0;
            }
            bVar28 = true;
          }
          uVar12 = (ulonglong)((int)uVar12 + 1);
          pfVar9 = pfVar9 + 2;
        } while (!bVar28);
        uVar22 = uVar22 + 1;
        param_3 = param_3 + 2;
      } while ((longlong)uVar22 < (longlong)param_4);
      uStackX_10 = CONCAT44(uStackX_10._4_4_,(int)uVar24);
    }
    iVar14 = (int)uVar24;
    if (0 < iVar14) {
      if (0x80 < iVar14) {
        if (1 < iVar14) {
          lVar11 = (longlong)(iVar14 + -1);
          uVar24 = (ulonglong)(iVar14 - 1);
          do {
            uVar22 = uVar25;
            if (3 < lVar11) {
              puVar7 = (undefined8 *)((longlong)param_1 + 0x44);
              lVar20 = (lVar11 - 4U >> 2) + 1;
              uVar22 = lVar20 * 4;
              do {
                fVar30 = *(float *)((longlong)puVar7 + 0xc);
                if (*(float *)((longlong)puVar7 + 4) <= fVar30 &&
                    fVar30 != *(float *)((longlong)puVar7 + 4)) {
                  uVar4 = puVar7[1];
                  puVar7[1] = *puVar7;
                  fVar30 = *(float *)((longlong)puVar7 + 0xc);
                  *puVar7 = uVar4;
                }
                if (fVar30 < *(float *)((longlong)puVar7 + 0x14)) {
                  uVar4 = puVar7[1];
                  puVar7[1] = puVar7[2];
                  puVar7[2] = uVar4;
                }
                if (*(float *)((longlong)puVar7 + 0x14) <= *(float *)((longlong)puVar7 + 0x1c) &&
                    *(float *)((longlong)puVar7 + 0x1c) != *(float *)((longlong)puVar7 + 0x14)) {
                  uVar4 = puVar7[2];
                  puVar7[2] = puVar7[3];
                  puVar7[3] = uVar4;
                }
                if (*(float *)((longlong)puVar7 + 0x1c) <= *(float *)((longlong)puVar7 + 0x24) &&
                    *(float *)((longlong)puVar7 + 0x24) != *(float *)((longlong)puVar7 + 0x1c)) {
                  uVar4 = puVar7[3];
                  puVar7[3] = puVar7[4];
                  puVar7[4] = uVar4;
                }
                puVar7 = puVar7 + 4;
                lVar20 = lVar20 + -1;
              } while (lVar20 != 0);
            }
            if ((longlong)uVar22 < lVar11) {
              puVar7 = (undefined8 *)((longlong)param_1 + uVar22 * 8 + 0x44);
              lVar20 = lVar11 - uVar22;
              do {
                if (*(float *)((longlong)puVar7 + 4) <= *(float *)((longlong)puVar7 + 0xc) &&
                    *(float *)((longlong)puVar7 + 0xc) != *(float *)((longlong)puVar7 + 4)) {
                  uVar4 = *puVar7;
                  *puVar7 = puVar7[1];
                  puVar7[1] = uVar4;
                }
                puVar7 = puVar7 + 1;
                lVar20 = lVar20 + -1;
              } while (lVar20 != 0);
            }
            lVar11 = lVar11 + -1;
            uVar24 = uVar24 - 1;
          } while (uVar24 != 0);
        }
        uVar24 = 0x80;
        uStackX_10 = CONCAT44(uStackX_10._4_4_,0x80);
      }
      *(int *)((longlong)param_1 + 0x844) = (int)uVar24;
      lVar11 = *param_1;
      uStack_64 = 0;
      lVar20 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(param_1[1] - lVar11),8) +
               (param_1[1] - lVar11);
      if (lVar20 >> 6 != lVar20 >> 0x3f) {
        lStack_58 = 0;
        uVar22 = uVar25;
        do {
          lVar20 = *(longlong *)(lVar11 + 0x58 + lStack_58);
          lVar10 = *(longlong *)(lVar11 + 0x60 + lStack_58) - lVar20;
          uStack_68 = 0;
          lVar16 = lVar10 >> 0x3f;
          uVar19 = (uint)uVar22;
          if (lVar10 / 0xc + lVar16 != lVar16) {
            lStack_48 = 0;
            lStack_60 = 0;
            uVar22 = uVar25;
            do {
              lVar16 = *(longlong *)(*(longlong *)(lVar11 + lStack_58) + 0x38);
              uVar19 = (uint)uVar22;
              if ((*(byte *)(lStack_60 + 8 + lVar16) & 1) != 0) {
                iVar14 = *(int *)(lVar20 + lStack_48);
                lVar10 = *(longlong *)(lStack_60 + lVar16);
                bVar6 = 0;
                if (iVar14 == -1) {
                  lVar8 = *(longlong *)(lVar11 + 0x10 + lStack_58);
                  if (lVar8 == 0) {
                    lVar16 = FUN_1801efdb0(lVar16,lVar10);
                    uVar19 = uStack_68;
                    if ((lVar16 == 0) || (iVar21 = *(int *)(lVar16 + 0x18), iVar21 == 0))
                    goto LAB_180208aa2;
                    uVar17 = *(undefined4 *)(lVar16 + 0x2c);
                  }
                  else {
                    cVar5 = FUN_1801ef300(lVar16,lVar10,lVar8);
                    if (cVar5 == '\0') {
                      FUN_180626f80(&UNK_180a0fec0);
                      iVar14 = *(int *)(lVar20 + lStack_48);
                      uVar19 = uStack_68;
                      goto LAB_180208aa2;
                    }
                    lVar16 = FUN_1801ef620(extraout_XMM0_Qa,lVar10,lVar8);
                    uVar17 = *(undefined4 *)(lVar16 + 0x2c);
                    lVar16 = FUN_1801efdb0(extraout_XMM0_Qa_00,lVar8);
                    iVar21 = *(int *)(lVar16 + 0x18);
                  }
                  uVar2 = *(undefined4 *)(lVar16 + 0x24);
                  uVar3 = *(undefined4 *)(lVar16 + 0x28);
                  *(int *)(lVar20 + 4 + lStack_48) = iVar21;
                  *(undefined4 *)(lVar20 + 8 + lStack_48) = *(undefined4 *)(lVar16 + 0x1c);
                  *(byte *)(lVar10 + 0xfe) = *(byte *)(lVar10 + 0xfe) & 0xf7;
                  *(uint *)(lVar10 + 0x100) = *(uint *)(lVar10 + 0x100) | 0x800;
                  uVar4 = _DAT_180c8ed18;
                  *(undefined4 *)(lVar10 + 0x10c) = uVar2;
                  if (lVar8 == 0) {
                    bVar6 = 8;
                  }
                  *(undefined4 *)(lVar10 + 0x110) = uVar3;
                  *(byte *)(lVar10 + 0xfe) = *(byte *)(lVar10 + 0xfe) | bVar6;
                  *(undefined4 *)(lVar10 + 0x108) = uVar17;
                  puVar7 = (undefined8 *)FUN_18062b1e0(uVar4,0x20,8,3);
                  *puVar7 = 0;
                  *(undefined4 *)(puVar7 + 1) = 0;
                  *(undefined4 *)((longlong)puVar7 + 0xc) = 0xffffffff;
                  puVar7[2] = 0;
                  *(undefined4 *)(puVar7 + 3) = 0;
                  *(undefined8 **)(lVar10 + 0x2d0) = puVar7;
                  *(undefined4 *)(lVar20 + lStack_48) = 0;
                }
                else {
LAB_180208aa2:
                  if (iVar14 < 0) goto LAB_180208d4a;
                }
                puVar18 = (uint *)((longlong)*(int *)(_DAT_180c86890 + 0x9c8) * 0x488 +
                                  _DAT_180c86890 + 0xb8);
                if ((int)uVar24 == 0) {
                  uVar26 = 0xffffffff;
                }
                else {
                  LOCK();
                  uVar26 = *puVar18;
                  *puVar18 = *puVar18 + (int)uVar24;
                  UNLOCK();
                  uVar22 = (ulonglong)(uVar26 >> 0xb);
                  uVar24 = (ulonglong)(((uint)uStackX_10 - 1) + uVar26 >> 0xb);
                  if (uVar22 <= uVar24) {
                    pcVar15 = (char *)((longlong)puVar18 + uVar22 + 0x408);
                    lVar16 = (uVar24 - uVar22) + 1;
                    puVar27 = puVar18 + (ulonglong)(uVar26 >> 0xb) * 2 + 2;
                    do {
                      iVar14 = (int)uVar22;
                      if (*(longlong *)puVar27 == 0) {
                        lVar8 = FUN_18062b420(_DAT_180c8ed18,0x4000,0x25);
                        LOCK();
                        bVar28 = *(longlong *)(puVar18 + (longlong)iVar14 * 2 + 2) == 0;
                        if (bVar28) {
                          *(longlong *)(puVar18 + (longlong)iVar14 * 2 + 2) = lVar8;
                        }
                        UNLOCK();
                        if (bVar28) {
                          uVar19 = iVar14 * 0x800;
                          iVar21 = uVar19 + 0x800;
                          for (; (int)uVar19 < iVar21; uVar19 = uVar19 + 1) {
                            *(undefined8 *)
                             (*(longlong *)(puVar18 + (ulonglong)(uVar19 >> 0xb) * 2 + 2) +
                             (longlong)(int)(uVar19 + (uVar19 >> 0xb) * -0x800) * 8) = 0;
                          }
                          LOCK();
                          *(undefined1 *)((longlong)iVar14 + 0x408 + (longlong)puVar18) = 0;
                          UNLOCK();
                        }
                        else {
                          if (lVar8 != 0) {
                    // WARNING: Subroutine does not return
                            FUN_18064e900();
                          }
                          do {
                          } while (*pcVar15 != '\0');
                        }
                      }
                      else {
                        do {
                        } while (*pcVar15 != '\0');
                      }
                      uVar22 = (ulonglong)(iVar14 + 1);
                      puVar27 = puVar27 + 2;
                      pcVar15 = pcVar15 + 1;
                      lVar16 = lVar16 + -1;
                    } while (lVar16 != 0);
                  }
                  uVar24 = (ulonglong)(uint)uStackX_10;
                }
                *(undefined4 *)(*(longlong *)(lVar10 + 0x2d0) + 0x10) =
                     *(undefined4 *)(lVar20 + 8 + lStack_48);
                *(int *)(*(longlong *)(lVar10 + 0x2d0) + 0x14) = (int)uVar24;
                *(uint *)(*(longlong *)(lVar10 + 0x2d0) + 0x18) = uVar26;
                *(undefined4 *)(*(longlong *)(lVar10 + 0x2d0) + 0xc) =
                     *(undefined4 *)(_DAT_180c86870 + 0x224);
                uVar19 = uStack_68;
                if (0 < (int)uVar24) {
                  pfVar9 = (float *)(param_1 + 9);
                  do {
                    pfVar13 = (float *)(*(longlong *)(puVar18 + (ulonglong)(uVar26 >> 0xb) * 2 + 2)
                                       + (ulonglong)(uVar26 + (uVar26 >> 0xb) * -0x800) * 8);
                    *pfVar13 = (float)(int)pfVar9[-1];
                    pfVar13[1] = *pfVar9;
                    uVar24 = uVar24 - 1;
                    pfVar9 = pfVar9 + 2;
                    uVar26 = uVar26 + 1;
                  } while (uVar24 != 0);
                  uVar24 = uStackX_10 & 0xffffffff;
                }
              }
LAB_180208d4a:
              lVar20 = *(longlong *)(lVar11 + 0x58 + lStack_58);
              uStack_68 = uVar19 + 1;
              uVar22 = (ulonglong)uStack_68;
              lStack_60 = lStack_60 + 0x10;
              lStack_48 = lStack_48 + 0xc;
              uVar19 = uStack_64;
            } while ((ulonglong)(longlong)(int)uStack_68 <
                     (ulonglong)((*(longlong *)(lVar11 + 0x60 + lStack_58) - lVar20) / 0xc));
          }
          lVar11 = *param_1;
          uStack_64 = uVar19 + 1;
          uVar22 = (ulonglong)uStack_64;
          lStack_58 = lStack_58 + 0x78;
          lVar20 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(param_1[1] - lVar11),8) +
                   (param_1[1] - lVar11);
          if ((ulonglong)((lVar20 >> 6) - (lVar20 >> 0x3f)) <= (ulonglong)(longlong)(int)uStack_64)
          {
            return;
          }
        } while( true );
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



