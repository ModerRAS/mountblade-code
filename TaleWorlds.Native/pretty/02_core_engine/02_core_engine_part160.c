#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part160.c - 核心引擎模块第160部分
// 本文件包含17个函数，主要涉及资源管理、数据处理和系统操作

/**
 * 处理引擎状态更新和回调执行
 * @param engine_context 引擎上下文指针
 * @param state_offset 状态偏移量
 * @param callback_param1 回调参数1
 * @param callback_param2 回调参数2
 */
void process_engine_state_update(undefined8 *engine_context, longlong state_offset, undefined8 callback_param1, undefined8 callback_param_2)

{
  longlong *callback_ptr;
  longlong callback_params[3];
  undefined8 cleanup_param1;
  undefined8 cleanup_param2;
  code *cleanup_func1;
  code *cleanup_func2;
  
  // 检查状态是否允许更新
  if (*(int *)(state_offset + 0x380) != 2) {
    *(int *)*engine_context = *(int *)*engine_context + 1;
    callback_ptr = (longlong *)engine_context[1];
    
    // 执行主回调函数
    if (*callback_ptr != 0) {
      callback_params[0] = state_offset;
      execute_callback_chain(*callback_ptr, callback_params, callback_param1, callback_param2, 0xfffffffffffffffe);
      callback_ptr = (longlong *)engine_context[1];
    }
    
    // 执行清理回调
    if ((char)callback_ptr[2] != '\0') {
      cleanup_param1 = 0;
      cleanup_param2 = 0;
      cleanup_func1 = (code *)0x0;
      cleanup_func2 = _guard_check_icall;
      execute_cleanup_function();
      if (cleanup_func1 != (code *)0x0) {
        (*cleanup_func1)(&cleanup_param1, 0, 0);
      }
    }
  }
  return;
}



/**
 * 释放引擎资源并清理内存
 * @param resource_ptr 资源指针
 * @param flags 释放标志位
 * @return 返回资源指针
 */
undefined8 * release_engine_resources(undefined8 *resource_ptr, ulonglong flags)
{
  // 设置资源指针指向全局资源管理器
  *resource_ptr = &global_resource_manager;
  
  // 根据标志位决定是否释放内存
  if ((flags & 1) != 0) {
    free(resource_ptr, 8);
  }
  
  return resource_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 处理引擎数据统计和计算
 * @param context_ptr 引擎上下文指针
 */
void process_engine_data_statistics(longlong context_ptr)
{
  int *counter_ptr;
  ushort width;
  ushort height;
  int data_value;
  uint *result_ptr;
  uint valid_count;
  ulonglong sum;
  uint total_count;
  ulonglong index;
  ulonglong max_items;
  ulonglong temp_sum;
  longlong data_buffer;
  undefined8 *temp_array;
  
  // 获取数据缓冲区和结果指针
  data_buffer = *(longlong *)(context_ptr + 0x98d8);
  result_ptr = *(uint **)(context_ptr + 0x9650);
  
  if (data_buffer != 0) {
    // 获取宽度和高度信息
    width = *(ushort *)(data_buffer + 0x32c);
    height = *(ushort *)(data_buffer + 0x32e);
    
    // 初始化统计变量
    temp_sum = 0;
    // 获取数据数组
    get_data_array(*(undefined8 *)(global_data_table + 0x1cd8), data_buffer, 0, 0, &temp_array, 0);
    
    total_count = 0;
    max_items = (longlong)(int)((uint)height * (uint)width);
    index = temp_sum;
    temp_sum = temp_sum;
    valid_count = total_count;
    
    // 遍历数据数组进行统计
    if (0 < max_items) {
      do {
        data_value = *(int *)((longlong)temp_array + index * 4);
        sum = (ulonglong)(uint)((int)temp_sum + data_value);
        if (data_value == 0) {
          sum = temp_sum;
        }
        total_count = (uint)sum;
        valid_count = (uint)temp_sum + 1;
        if (data_value == 0) {
          valid_count = (uint)temp_sum;
        }
        index = index + 1;
        temp_sum = sum;
        temp_sum = (ulonglong)valid_count;
      } while ((longlong)index < max_items);
    }
    
    // 保存统计结果
    *result_ptr = valid_count;
    result_ptr[1] = total_count;
    
    // 清理临时数组
    if (temp_array != (undefined8 *)0x0) {
      temp_sum = (ulonglong)temp_array & 0xffffffffffc00000;
      if (temp_sum != 0) {
        data_buffer = temp_sum + 0x80 + ((longlong)temp_array - temp_sum >> 0x10) * 0x50;
        data_buffer = data_buffer - (ulonglong)*(uint *)(data_buffer + 4);
        if ((*(void ***)(temp_sum + 0x70) == &ExceptionList) && (*(char *)(data_buffer + 0xe) == '\0')) {
          // 标准清理流程
          *temp_array = *(undefined8 *)(data_buffer + 0x20);
          *(undefined8 **)(data_buffer + 0x20) = temp_array;
          counter_ptr = (int *)(data_buffer + 0x18);
          *counter_ptr = *counter_ptr + -1;
          if (*counter_ptr == 0) {
            cleanup_memory_pool();
            return;
          }
        }
        else {
          // 异常清理流程
          cleanup_memory_block(temp_sum, CONCAT71(0xff000000,
                                                 *(void ***)(temp_sum + 0x70) == &ExceptionList),
                              temp_array, temp_sum, 0xfffffffffffffffe);
        }
      }
      return;
    }
  }
  return;
}





/**
 * 处理引擎数据统计的变体版本
 * @param context_ptr 引擎上下文指针
 * @param data_ptr 数据指针
 */
void process_engine_data_statistics_variant(longlong context_ptr, longlong data_ptr)
{
  int *counter_ptr;
  ushort height;
  int data_value;
  int width;
  uint sum_result;
  ulonglong temp_sum;
  uint *result_ptr;
  uint valid_count;
  ulonglong index;
  ulonglong max_items;
  longlong total_items;
  undefined8 temp_param;
  undefined8 *data_array;
  
  // 获取高度信息
  height = *(ushort *)(data_ptr + 0x32e);
  temp_sum = 0;
  temp_param = 0;
  // 获取数据数组
  get_data_array(*(undefined8 *)(context_ptr + 0x1cd8));
  
  valid_count = 0;
  total_items = (longlong)(int)((uint)height * width);
  index = temp_sum;
  temp_sum = temp_sum;
  sum_result = valid_count;
  
  // 遍历数据数组进行统计
  if (0 < total_items) {
    do {
      data_value = *(int *)((longlong)data_array + index * 4);
      temp_sum = (ulonglong)(uint)((int)temp_sum + data_value);
      if (data_value == 0) {
        temp_sum = temp_sum;
      }
      sum_result = (uint)temp_sum;
      valid_count = (uint)temp_sum + 1;
      if (data_value == 0) {
        valid_count = (uint)temp_sum;
      }
      index = index + 1;
      temp_sum = temp_sum;
      temp_sum = (ulonglong)valid_count;
    } while ((longlong)index < total_items);
  }
  
  // 保存统计结果
  *result_ptr = valid_count;
  result_ptr[1] = sum_result;
  
  // 清理数据数组
  if (data_array == (undefined8 *)0x0) {
    return;
  }
  
  temp_sum = (ulonglong)data_array & 0xffffffffffc00000;
  if (temp_sum != 0) {
    total_items = temp_sum + 0x80 + ((longlong)data_array - temp_sum >> 0x10) * 0x50;
    total_items = total_items - (ulonglong)*(uint *)(total_items + 4);
    if ((*(void ***)(temp_sum + 0x70) == &ExceptionList) && (*(char *)(total_items + 0xe) == '\0')) {
      // 标准清理流程
      *data_array = *(undefined8 *)(total_items + 0x20);
      *(undefined8 **)(total_items + 0x20) = data_array;
      counter_ptr = (int *)(total_items + 0x18);
      *counter_ptr = *counter_ptr + -1;
      if (*counter_ptr == 0) {
        cleanup_memory_pool();
        return;
      }
    }
    else {
      // 异常清理流程
      cleanup_memory_block(temp_sum, CONCAT71(0xff000000, *(void ***)(temp_sum + 0x70) == &ExceptionList),
                          data_array, temp_sum, 0xfffffffffffffffe);
    }
  }
  return;
}





/**
 * 处理数据累加和统计计算
 * @param param1 参数1（未使用）
 * @param initial_value 初始值
 * @param param3 参数3（未使用）
 * @param data_array 数据数组指针
 */
void process_data_accumulation(undefined8 param1, uint initial_value, undefined8 param3, undefined8 *data_array)
{
  int *counter_ptr;
  int data_value;
  uint accumulated_value;
  longlong memory_block;
  uint *result_ptr;
  uint item_count;
  ulonglong index;
  longlong max_items;
  
  index = (ulonglong)item_count;
  
  // 遍历数据数组进行累加计算
  do {
    data_value = *(int *)((longlong)data_array + index * 4);
    accumulated_value = initial_value + data_value;
    if (data_value == 0) {
      accumulated_value = initial_value;
    }
    initial_value = accumulated_value;
    accumulated_value = item_count + 1;
    if (data_value == 0) {
      accumulated_value = item_count;
    }
    item_count = accumulated_value;
    index = index + 1;
  } while ((longlong)index < max_items);
  
  // 保存计算结果
  *result_ptr = item_count;
  result_ptr[1] = initial_value;
  
  // 清理数据数组
  if (data_array != (undefined8 *)0x0) {
    index = (ulonglong)data_array & 0xffffffffffc00000;
    if (index != 0) {
      memory_block = index + 0x80 + ((longlong)data_array - index >> 0x10) * 0x50;
      memory_block = memory_block - (ulonglong)*(uint *)(memory_block + 4);
      if ((*(void ***)(index + 0x70) == &ExceptionList) && (*(char *)(memory_block + 0xe) == '\0')) {
        // 标准清理流程
        *data_array = *(undefined8 *)(memory_block + 0x20);
        *(undefined8 **)(memory_block + 0x20) = data_array;
        counter_ptr = (int *)(memory_block + 0x18);
        *counter_ptr = *counter_ptr + -1;
        if (*counter_ptr == 0) {
          cleanup_memory_pool();
          return;
        }
      }
      else {
        // 异常清理流程
        cleanup_memory_block(index, CONCAT71(0xff000000, *(void ***)(index + 0x70) == &ExceptionList),
                            data_array, index, 0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}





/**
 * 清理内存资源
 */
void cleanup_memory_resources(void)
{
  int *counter_ptr;
  longlong memory_block;
  undefined8 *resource_ptr;
  ulonglong base_address;
  
  // 获取资源的基础地址
  base_address = (ulonglong)resource_ptr & 0xffffffffffc00000;
  if (base_address != 0) {
    // 计算内存块位置
    memory_block = base_address + 0x80 + ((longlong)resource_ptr - base_address >> 0x10) * 0x50;
    memory_block = memory_block - (ulonglong)*(uint *)(memory_block + 4);
    
    if ((*(void ***)(base_address + 0x70) == &ExceptionList) && (*(char *)(memory_block + 0xe) == '\0')) {
      // 标准清理流程
      *resource_ptr = *(undefined8 *)(memory_block + 0x20);
      *(undefined8 **)(memory_block + 0x20) = resource_ptr;
      counter_ptr = (int *)(memory_block + 0x18);
      *counter_ptr = *counter_ptr + -1;
      if (*counter_ptr == 0) {
        cleanup_memory_pool();
        return;
      }
    }
    else {
      // 异常清理流程
      cleanup_memory_block(base_address, CONCAT71(0xff000000, *(void ***)(base_address + 0x70) == &ExceptionList),
                          resource_ptr, base_address, 0xfffffffffffffffe);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 初始化引擎上下文并执行回调
 * @param context_ptr 引擎上下文指针
 * @param callback_data 回调数据指针
 */
void initialize_engine_context(longlong context_ptr, undefined1 *callback_data)
{
  longlong *callback_chain;
  code *callback_func;
  undefined8 *context_data;
  code *resource_callback;
  undefined1 cleanup_buffer1 [16];
  code *cleanup_func1;
  code *cleanup_func2;
  longlong context_param;
  undefined1 cleanup_buffer2 [16];
  code *resource_cleanup1;
  code *resource_cleanup2;
  longlong context_handle;
  undefined1 *resource_data [2];
  code *resource_handler1;
  code *resource_handler2;
  undefined1 cleanup_buffer3 [16];
  code *final_cleanup1;
  code *final_cleanup2;
  undefined8 cleanup_flags;
  undefined1 *resource_ptr;
  
  cleanup_flags = 0xfffffffffffffffe;
  
  // 检查是否已经初始化
  if (*(longlong *)(context_ptr + 0xc0) == 0) {
    // 分配上下文数据
    context_data = (undefined8 *)allocate_memory_block(global_memory_pool, 0x60, 8, 3);
    
    // 初始化上下文数据结构
    initialize_context_data(context_data);
    
    // 设置上下文数据指针
    *(undefined8 **)(context_ptr + 0xc0) = context_data;
    
    // 设置清理函数
    final_cleanup1 = (code *)&engine_cleanup_handler;
    final_cleanup2 = _guard_check_icall;
    
    // 获取回调链
    callback_chain = *(longlong **)(*(longlong *)(context_ptr + 0xa8) + 0x88);
    callback_func = *(code **)(*callback_chain + 0x70);
    
    // 初始化清理函数指针
    cleanup_func1 = (code *)0x0;
    cleanup_func2 = _guard_check_icall;
    
    // 设置回调数据
    if (cleanup_buffer1 != callback_data) {
      resource_callback = *(code **)(callback_data + 0x10);
      if (resource_callback != (code *)0x0) {
        (*resource_callback)(cleanup_buffer1, callback_data, 1);
        resource_callback = *(code **)(callback_data + 0x10);
      }
      cleanup_func2 = *(code **)(callback_data + 0x18);
      cleanup_func1 = resource_callback;
    }
    
    // 初始化资源清理
    resource_cleanup1 = (code *)0x0;
    resource_cleanup2 = _guard_check_icall;
    context_param = context_ptr;
    
    // 复制回调数据
    copy_callback_data(cleanup_buffer2, cleanup_buffer1);
    context_handle = context_param;
    
    // 设置资源处理器
    resource_handler1 = engine_resource_handler1;
    resource_handler2 = engine_resource_handler2;
    
    // 分配资源数据
    resource_data[0] = (undefined1 *)allocate_memory_block(global_memory_pool, 0x28, 8, memory_allocation_flags);
    initialize_resource_data(resource_data[0]);
    resource_ptr = resource_data[0];
    
    // 复制资源数据
    if (resource_data[0] != cleanup_buffer2) {
      copy_callback_data(resource_data[0], cleanup_buffer2);
    }
    
    // 设置上下文句柄
    *(longlong *)(resource_data[0] + 0x20) = context_handle;
    
    // 执行资源清理
    if (resource_cleanup1 != (code *)0x0) {
      (*resource_cleanup1)(cleanup_buffer2, 0, 0);
    }
    if (cleanup_func1 != (code *)0x0) {
      (*cleanup_func1)(cleanup_buffer1, 0, 0);
    }
    
    // 执行主回调函数
    (*callback_func)(callback_chain, &engine_callback_target, *(longlong *)(context_ptr + 0xa8) + 0xc, 0, resource_data, cleanup_buffer3);
    
    // 清理资源
    if (resource_handler1 != (code *)0x0) {
      (*resource_handler1)(resource_data, 0, 0);
    }
    if (final_cleanup1 != (code *)0x0) {
      (*final_cleanup1)(cleanup_buffer3, 0, 0);
    }
  }
  else {
    // 已初始化，直接执行回调
    (**(code **)(callback_data + 0x18))(callback_data);
  }
  
  // 增加引用计数
  *(int *)(context_ptr + 0x128) = *(int *)(context_ptr + 0x128) + 1;
  
  // 执行最终回调
  if (*(code **)(callback_data + 0x10) != (code *)0x0) {
    (**(code **)(callback_data + 0x10))(callback_data, 0, 0);
  }
  return;
}





/**
 * 清理回调链表
 * @param chain_ptr 回调链表指针
 */
void cleanup_callback_chain(longlong *chain_ptr)
{
  longlong *chain_end;
  longlong *current_node;
  
  chain_end = (longlong *)chain_ptr[1];
  current_node = (longlong *)*chain_ptr;
  
  while (true) {
    // 检查是否到达链表末尾
    if (current_node == chain_end) {
      if (*chain_ptr != 0) {
        // 链表不为空但出现错误，触发错误处理
        trigger_error_handler();
      }
      return;
    }
    
    // 检查当前节点是否有效
    if (*current_node != 0) {
      // 节点无效，触发错误处理
      trigger_error_handler();
    }
    
    // 清理当前节点
    *current_node = 0;
    
    // 检查是否需要跳到下一个节点块
    if (current_node[3] != 0) break;
    current_node = current_node + 7;
  }
  
  // 出现异常情况，触发错误处理
  trigger_error_handler();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 处理浮点数据并初始化渲染上下文
 * @param context_ptr 上下文指针
 * @param callback_data 回调数据
 * @param float_data 浮点数据数组
 */
void process_float_data_and_initialize_context(longlong context_ptr, undefined1 *callback_data, float *float_data)
{
  int *counter_ptr;
  longlong *callback_chain;
  code *callback_func;
  int dimension_flags;
  undefined8 *context_data;
  longlong render_data;
  undefined8 render_param;
  code *render_callback;
  int axis_flags;
  uint total_dimensions;
  undefined1 cleanup_buffer1 [16];
  code *cleanup_func1;
  code *cleanup_func2;
  uint dimension_count;
  longlong context_handle;
  float *float_ptr;
  undefined8 render_params [2];
  code *render_handler1;
  code *render_handler2;
  undefined1 cleanup_buffer2 [16];
  code *context_handler1;
  code *context_handler2;
  undefined8 cleanup_flags;
  undefined1 render_buffer [72];
  ulonglong dimension_index;
  
  cleanup_flags = 0xfffffffffffffffe;
  
  // 计算维度标志
  dimension_flags = 2;
  if (float_data[1] <= 0.0 && float_data[1] != 0.0) {
    dimension_flags = 0;
  }
  
  axis_flags = 4;
  if (*float_data <= 0.0 && *float_data != 0.0) {
    axis_flags = 0;
  }
  
  // 计算总维度数
  total_dimensions = axis_flags + dimension_flags + (uint)(0.0 < float_data[2] || float_data[2] == 0.0);
  dimension_index = (ulonglong)total_dimensions;
  
  // 检查是否已经初始化
  if (*(longlong *)(context_ptr + 200 + dimension_index * 8) == 0) {
    // 分配上下文数据
    context_data = (undefined8 *)allocate_memory_block(global_memory_pool, 0x60, 8, 3);
    
    // 初始化上下文数据结构
    initialize_render_context(context_data);
    
    // 设置上下文数据指针
    *(undefined8 **)(context_ptr + 200 + dimension_index * 8) = context_data;
    
    // 设置上下文处理器
    context_handler1 = (code *)&render_context_handler1;
    context_handler2 = _guard_check_icall;
    
    // 获取回调链
    callback_chain = *(longlong **)(*(longlong *)(context_ptr + 0xa8) + 0x88);
    callback_func = *(code **)(*callback_chain + 0x70);
    
    // 初始化清理函数
    cleanup_func1 = (code *)0x0;
    cleanup_func2 = _guard_check_icall;
    
    // 设置回调数据
    if (cleanup_buffer1 != callback_data) {
      render_callback = *(code **)(callback_data + 0x10);
      if (render_callback != (code *)0x0) {
        (*render_callback)(cleanup_buffer1, callback_data, 1);
        render_callback = *(code **)(callback_data + 0x10);
      }
      cleanup_func2 = *(code **)(callback_data + 0x18);
      cleanup_func1 = render_callback;
    }
    
    // 设置渲染参数
    dimension_count = total_dimensions;
    context_handle = context_ptr;
    float_ptr = float_data;
    
    // 初始化渲染数据
    render_data = initialize_render_data(render_buffer, cleanup_buffer1);
    
    // 设置渲染处理器
    render_handler1 = render_context_handler2;
    render_handler2 = render_context_handler3;
    
    // 分配渲染参数
    render_param = allocate_memory_block(global_memory_pool, 0x38, 8, memory_allocation_flags);
    initialize_render_data(render_param, render_data);
    render_params[0] = render_param;
    
    // 清理渲染数据
    if (*(code **)(render_data + 0x10) != (code *)0x0) {
      (**(code **)(render_data + 0x10))(render_data, 0, 0);
    }
    
    // 清理回调数据
    if (cleanup_func1 != (code *)0x0) {
      (*cleanup_func1)(cleanup_buffer1, 0, 0);
    }
    
    // 执行主回调函数
    (*callback_func)(callback_chain, &render_callback_target, *(longlong *)(context_ptr + 0xa8) + 0xc, 0, render_params, cleanup_buffer2);
    
    // 清理渲染参数
    if (render_handler1 != (code *)0x0) {
      (*render_handler1)(render_params, 0, 0);
    }
    if (context_handler1 != (code *)0x0) {
      (*context_handler1)(cleanup_buffer2, 0, 0);
    }
  }
  else {
    // 已初始化，直接执行回调
    (**(code **)(callback_data + 0x18))(callback_data);
  }
  
  // 增加引用计数
  counter_ptr = (int *)(context_ptr + 0x108 + dimension_index * 4);
  *counter_ptr = *counter_ptr + 1;
  
  // 执行最终回调
  if (*(code **)(callback_data + 0x10) != (code *)0x0) {
    (**(code **)(callback_data + 0x10))(callback_data, 0, 0);
  }
  return;
}



/**
 * 初始化引擎资源管理器
 * @param resource_ptr 资源指针
 * @return 返回资源指针
 */
undefined8 * initialize_engine_resource_manager(undefined8 *resource_ptr)
{
  // 设置资源管理器的各个组件
  *resource_ptr = &engine_resource_table;
  *resource_ptr = &engine_resource_config;
  *(undefined4 *)(resource_ptr + 1) = 0;
  *resource_ptr = &engine_memory_pool;
  resource_ptr[2] = &engine_resource_pool;
  resource_ptr[3] = 0;
  *(undefined4 *)(resource_ptr + 4) = 0;
  resource_ptr[2] = &engine_callback_table;
  resource_ptr[3] = resource_ptr + 5;
  *(undefined4 *)(resource_ptr + 4) = 0;
  *(undefined1 *)(resource_ptr + 5) = 0;
  *(undefined1 *)((longlong)resource_ptr + 0xb2) = 0;
  *(undefined4 *)(resource_ptr + 1) = 0;
  *(undefined2 *)(resource_ptr + 0x16) = 0;
  resource_ptr[0x15] = 0;
  *resource_ptr = &global_resource_manager;
  resource_ptr[0x15] = 0;
  resource_ptr[0x17] = 0;
  *(undefined1 *)((longlong)resource_ptr + 300) = 0;
  resource_ptr[0x18] = 0;
  resource_ptr[0x19] = 0;
  resource_ptr[0x1a] = 0;
  resource_ptr[0x1b] = 0;
  resource_ptr[0x1c] = 0;
  resource_ptr[0x1d] = 0;
  resource_ptr[0x1e] = 0;
  resource_ptr[0x1f] = 0;
  resource_ptr[0x20] = 0;
  *(undefined4 *)(resource_ptr + 0x25) = 0;
  resource_ptr[0x21] = 0;
  resource_ptr[0x22] = 0;
  resource_ptr[0x23] = 0;
  resource_ptr[0x24] = 0;
  return resource_ptr;
}



undefined8 *
/**
 * 清理引擎资源管理器
 * @param resource_ptr 资源指针
 * @param flags 清理标志位
 * @param param3 参数3
 * @param param4 参数4
 * @return 返回资源指针
 */
undefined8 * cleanup_engine_resource_manager(undefined8 *resource_ptr, ulonglong flags, undefined8 param3, undefined8 param4)
{
  undefined8 cleanup_flags;
  
  cleanup_flags = 0xfffffffffffffffe;
  
  // 设置资源管理器为全局管理器
  *resource_ptr = &global_resource_manager;
  
  // 清理资源链
  cleanup_resource_chain(resource_ptr[0x17]);
  resource_ptr[0x17] = 0;
  
  // 重置资源管理器组件
  *resource_ptr = &engine_memory_pool;
  resource_ptr[2] = &engine_resource_pool;
  *resource_ptr = &engine_resource_config;
  *resource_ptr = &engine_resource_table;
  
  // 根据标志位决定是否释放内存
  if ((flags & 1) != 0) {
    free(resource_ptr, 0x140, param3, param4, cleanup_flags);
  }
  
  return resource_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 处理引擎状态回调并执行清理操作
 * @param context_ptr 上下文指针
 * @param state_flag 状态标志
 * @param callback_data 回调数据指针
 */
void process_engine_state_callback(longlong context_ptr, char state_flag, undefined1 *callback_data)
{
  longlong *callback_chain;
  char callback_result;
  undefined8 cleanup_result;
  longlong context_handle;
  longlong state_data;
  code *callback_func;
  undefined8 *context_data;
  longlong render_data;
  undefined8 render_param;
  code *render_callback;
  undefined1 cleanup_buffer1 [16];
  code *cleanup_func1;
  code *cleanup_func2;
  undefined8 render_params [2];
  code *render_handler1;
  undefined *render_target;
  longlong cleanup_data;
  undefined1 cleanup_buffer2 [16];
  code *final_cleanup1;
  code *final_cleanup2;
  undefined1 init_buffer [40];
  undefined1 temp_buffer [40];
  undefined1 final_buffer [48];
  
  // 设置清理标志
  cleanup_result = 0xfffffffffffffffe;
  
  // 检查是否已经初始化
  if (*(longlong *)(context_ptr + 0xb8) == 0) {
    // 检查上下文是否需要初始化
    if (*(longlong *)(context_ptr + 0xa8) == 0) {
      cleanup_result = allocate_memory_block(global_memory_pool, 0x130, 8, 6);
      memset(cleanup_result, 0, 0x130);
    }
    
    // 初始化清理函数
    cleanup_func1 = (code *)0x0;
    cleanup_func2 = _guard_check_icall;
    context_handle = context_ptr;
    
    // 设置回调数据
    if (cleanup_buffer1 != callback_data) {
      render_callback = *(code **)(callback_data + 0x10);
      if (render_callback != (code *)0x0) {
        (*render_callback)(cleanup_buffer1, callback_data, 1);
        render_callback = *(code **)(callback_data + 0x10);
      }
      cleanup_func2 = *(code **)(callback_data + 0x18);
      cleanup_func1 = render_callback;
    }
    
    // 初始化最终清理函数
    final_cleanup1 = (code *)0x0;
    final_cleanup2 = _guard_check_icall;
    cleanup_data = context_ptr;
    
    // 设置回调数据
    if (cleanup_buffer2 != callback_data) {
      render_callback = *(code **)(callback_data + 0x10);
      if (render_callback != (code *)0x0) {
        (*render_callback)(cleanup_buffer2, callback_data, 1);
        render_callback = *(code **)(callback_data + 0x10);
      }
      final_cleanup2 = *(code **)(callback_data + 0x18);
      final_cleanup1 = render_callback;
    }
    
    // 根据状态标志选择不同的处理路径
    if (state_flag == '\0') {
      // 获取回调链
      callback_chain = *(longlong **)(*(longlong *)(context_ptr + 0xa8) + 0x88);
      callback_func = *(code **)(*callback_chain + 0x70);
      
      // 初始化渲染数据
      state_data = initialize_render_context(init_buffer, &cleanup_data);
      render_data = initialize_render_context(temp_buffer, state_data);
      
      // 设置渲染处理器
      render_handler1 = render_context_finalizer;
      render_target = &render_target_address;
      
      // 分配渲染参数
      render_param = allocate_memory_block(global_memory_pool, 0x28, 8, memory_allocation_flags);
      initialize_render_context(render_param, render_data);
      render_params[0] = render_param;
      
      // 清理渲染数据
      if (*(code **)(render_data + 0x18) != (code *)0x0) {
        (**(code **)(render_data + 0x18))(render_data + 8, 0, 0);
      }
      if (*(code **)(state_data + 0x18) != (code *)0x0) {
        (**(code **)(state_data + 0x18))(state_data + 8, 0, 0);
      }
      
      // 初始化最终数据
      cleanup_data = initialize_render_context(final_buffer, &context_handle);
      initialize_render_system(cleanup_buffer2, cleanup_data);
      
      // 执行主回调函数
      (*callback_func)(callback_chain, &engine_callback_target, *(longlong *)(context_ptr + 0xa8) + 0xc, 0, cleanup_buffer2, render_params);
      
      // 清理资源
      if (render_handler1 != (code *)0x0) {
        (*render_handler1)(render_params, 0, 0);
      }
      if (final_cleanup1 != (code *)0x0) {
        (*final_cleanup1)(cleanup_buffer2, 0, 0);
      }
    }
    else {
      // 获取备用回调链
      callback_chain = *(longlong **)(*(longlong *)(context_ptr + 0xa8) + 0x88);
      callback_func = *(code **)(*callback_chain + 0x60);
      
      // 初始化渲染数据
      cleanup_data = initialize_render_context(cleanup_buffer2, &context_handle);
      initialize_render_system(render_params, cleanup_data);
      
      // 执行回调函数
      callback_result = (*callback_func)(callback_chain, &engine_callback_target, *(longlong *)(context_ptr + 0xa8) + 0xc, 0, render_params);
      
      // 清理渲染参数
      if (render_handler1 != (code *)0x0) {
        (*render_handler1)(render_params, 0, 0);
      }
      
      // 根据回调结果决定是否执行额外清理
      if ((callback_result == '\0') && (final_cleanup1 != (code *)0x0)) {
        (*final_cleanup2)(0, cleanup_data, cleanup_buffer1);
      }
    }
    
    // 执行最终清理
    if (final_cleanup1 != (code *)0x0) {
      (*final_cleanup1)(cleanup_buffer1, 0, 0);
    }
    if (cleanup_func1 != (code *)0x0) {
      (*cleanup_func1)(cleanup_buffer2, 0, 0);
    }
  }
  else {
    // 已初始化，直接执行回调
    (**(code **)(callback_data + 0x18))(1, context_ptr);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 初始化引擎系统并分配内存
 */
void initialize_engine_system(void)
{
  undefined8 system_handle;
  
  // 分配系统内存
  system_handle = allocate_memory_block(global_memory_pool, 0x130, 8, 3);
  // 初始化内存为零
  memset(system_handle, 0, 0x130);
}



/**
 * 初始化引擎资源表
 * @param resource_ptr 资源指针
 * @return 返回资源指针
 */
undefined8 * initialize_engine_resource_table(undefined8 *resource_ptr)
{
  // 初始化资源表的基本结构
  *resource_ptr = 0;
  resource_ptr[1] = 0;
  resource_ptr[2] = 0;
  *(undefined4 *)(resource_ptr + 3) = 3;
  resource_ptr[4] = 0;
  resource_ptr[5] = 0;
  resource_ptr[6] = 0;
  *(undefined4 *)(resource_ptr + 7) = 3;
  resource_ptr[8] = 0;
  resource_ptr[9] = 0;
  resource_ptr[10] = 0;
  *(undefined4 *)(resource_ptr + 0xb) = 3;
  
  // 设置资源表项
  resource_ptr[0xc] = &engine_resource_entry1;
  resource_ptr[0xd] = 0;
  *(undefined4 *)(resource_ptr + 0xe) = 0;
  resource_ptr[0xc] = &engine_resource_entry2;
  resource_ptr[0xd] = resource_ptr + 0xf;
  *(undefined4 *)(resource_ptr + 0xe) = 0;
  *(undefined1 *)(resource_ptr + 0xf) = 0;
  
  // 清理和初始化其他字段
  *(undefined4 *)(resource_ptr + 0x25) = 0;
  resource_ptr[0x1f] = 0;
  resource_ptr[0x20] = 0;
  resource_ptr[0x21] = 0;
  resource_ptr[0x22] = 0;
  resource_ptr[0x23] = 0;
  resource_ptr[0x24] = 0;
  return resource_ptr;
}





/**
 * 清理引擎资源并重置状态
 * @param resource_ptr 资源指针
 */
void cleanup_engine_resources_and_reset(undefined8 *resource_ptr)
{
  // 执行清理操作
  cleanup_engine_system();
  cleanup_engine_subsystem();
  cleanup_engine_core();
  
  // 设置资源指针
  *resource_ptr = &engine_cleanup_target;
  
  // 检查资源状态
  if (resource_ptr[1] != 0) {
    // 触发错误处理
    trigger_resource_error();
  }
  
  // 重置资源状态
  resource_ptr[1] = 0;
  *(undefined4 *)(resource_ptr + 3) = 0;
  *resource_ptr = &engine_resource_entry1;
  return;
}



/**
 * 复制引擎上下文数据
 * @param dest_ptr 目标指针
 * @param src_ptr 源指针
 * @param param3 参数3
 * @param param4 参数4
 * @return 返回目标指针
 */
undefined8 * copy_engine_context_data(undefined8 *dest_ptr, undefined8 *src_ptr, undefined8 param3, undefined8 param4)
{
  code *copy_func;
  
  // 复制基本数据
  *dest_ptr = *src_ptr;
  dest_ptr[3] = 0;
  dest_ptr[4] = _guard_check_icall;
  
  // 如果需要深度复制
  if (dest_ptr + 1 != src_ptr + 1) {
    copy_func = (code *)src_ptr[3];
    if (copy_func != (code *)0x0) {
      // 执行深度复制函数
      (*copy_func)(dest_ptr + 1, src_ptr + 1, 1, param4, 0xfffffffffffffffe);
      copy_func = (code *)src_ptr[3];
    }
    dest_ptr[3] = copy_func;
    dest_ptr[4] = src_ptr[4];
  }
  return dest_ptr;
}





/**
 * 清理引擎回调链表
 * @param chain_ptr 链表指针
 */
void cleanup_engine_callback_chain(longlong *chain_ptr)
{
  longlong chain_end;
  longlong current_item;
  
  chain_end = chain_ptr[1];
  
  // 遍历链表进行清理
  for (current_item = *chain_ptr; current_item != chain_end; current_item = current_item + 0x88) {
    cleanup_callback_item(current_item);
  }
  
  // 检查链表是否为空
  if (*chain_ptr == 0) {
    return;
  }
  
  // 触发错误处理
  trigger_cleanup_error();
}





/**
 * 清理引擎资源池
 * @param pool_ptr 资源池指针
 */
void cleanup_engine_resource_pool(longlong *pool_ptr)
{
  longlong pool_end;
  longlong current_item;
  
  pool_end = pool_ptr[1];
  
  // 遍历资源池进行清理
  for (current_item = *pool_ptr; current_item != pool_end; current_item = current_item + 0x60) {
    cleanup_resource_item(current_item);
  }
  
  // 检查资源池是否为空
  if (*pool_ptr == 0) {
    return;
  }
  
  // 触发错误处理
  trigger_cleanup_error();
}





/**
 * 清理引擎数据结构
 * @param data_ptr 数据指针
 */
void cleanup_engine_data_structure(longlong *data_ptr)
{
  longlong data_end;
  longlong current_item;
  
  data_end = data_ptr[1];
  
  // 遍历数据结构进行清理
  for (current_item = *data_ptr; current_item != data_end; current_item = current_item + 0x48) {
    // 设置清理标记
    *(undefined8 *)(current_item + 0x28) = &engine_cleanup_target;
    
    // 检查资源状态
    if (*(longlong *)(current_item + 0x30) != 0) {
      // 触发错误处理
      trigger_resource_error();
    }
    
    // 清理资源
    *(undefined8 *)(current_item + 0x30) = 0;
    *(undefined4 *)(current_item + 0x40) = 0;
    *(undefined8 *)(current_item + 0x28) = &engine_resource_entry1;
  }
  
  // 检查数据指针是否有效
  if (*data_ptr != 0) {
    // 触发错误处理
    trigger_resource_error();
  }
  return;
}





/**
 * 清理引擎内存块
 * @param memory_ptr 内存指针
 */
void cleanup_engine_memory_blocks(longlong *memory_ptr)
{
  longlong memory_end;
  longlong current_block;
  
  memory_end = memory_ptr[1];
  
  // 遍历内存块进行清理
  for (current_block = *memory_ptr; current_block != memory_end; current_block = current_block + 0x38) {
    // 设置清理标记
    *(undefined8 *)(current_block + 0x18) = &engine_cleanup_target;
    
    // 检查内存状态
    if (*(longlong *)(current_block + 0x20) != 0) {
      // 触发错误处理
      trigger_resource_error();
    }
    
    // 清理内存
    *(undefined8 *)(current_block + 0x20) = 0;
    *(undefined4 *)(current_block + 0x30) = 0;
    *(undefined8 *)(current_block + 0x18) = &engine_resource_entry1;
  }
  
  // 检查内存指针是否有效
  if (*memory_ptr != 0) {
    // 触发错误处理
    trigger_resource_error();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 处理引擎资源并执行回调
 * @param resource_ptr 资源指针
 * @param callback_param 回调参数
 */
void process_engine_resources_and_callback(undefined8 *resource_ptr, undefined8 callback_param)
{
  longlong resource_table;
  int resource_index;
  longlong resource_data;
  undefined *cleanup_target;
  longlong cleanup_handle;
  undefined4 cleanup_flags;
  undefined8 resource_param1;
  undefined8 resource_param2;
  undefined8 resource_param3;
  undefined8 resource_param4;
  undefined4 alloc_flags1;
  undefined8 alloc_param1;
  undefined8 alloc_param2;
  undefined8 alloc_param3;
  undefined4 alloc_flags2;
  undefined8 cleanup_param1;
  undefined8 cleanup_param2;
  undefined8 cleanup_param3;
  undefined4 alloc_flags3;
  undefined8 cleanup_param4;
  
  // 获取资源表
  resource_table = global_resource_table;
  cleanup_param4 = 0xfffffffffffffffe;
  resource_data = 0;
  
  // 检查资源状态
  if (*(int *)(*(longlong *)(*(longlong *)*resource_ptr + 0x20) + 0x20) != 0) {
    // 获取资源索引
    resource_index = find_resource_index(global_resource_table, *(longlong *)(*(longlong *)*resource_ptr + 0x20) + 0x10);
    resource_data = 0;
    if (resource_index != -1) {
      // 计算资源数据位置
      resource_data = (longlong)resource_index * 0x68 + *(longlong *)(resource_table + 0x38);
    }
  }
  
  // 初始化清理目标
  cleanup_target = &engine_cleanup_target;
  resource_param1 = 0;
  cleanup_handle = 0;
  cleanup_flags = 0;
  resource_param2 = 0;
  resource_param3 = 0;
  resource_param4 = 0;
  alloc_flags1 = 6;
  alloc_param1 = 0;
  alloc_param2 = 0;
  alloc_param3 = 0;
  alloc_flags2 = 6;
  cleanup_param1 = 0;
  cleanup_param2 = 0;
  cleanup_param3 = 0;
  alloc_flags3 = 6;
  
  // 处理回调参数
  process_callback_parameters(&cleanup_target, callback_param);
  execute_resource_callback(*(undefined8 *)(resource_ptr[1] + 0xb8), &cleanup_target, resource_data);
  
  // 清理资源
  cleanup_resource_system(&cleanup_param1);
  cleanup_resource_subsystem(&cleanup_param2);
  cleanup_resource_core(&cleanup_param3);
  
  // 重置清理目标
  cleanup_target = &engine_cleanup_target;
  
  // 检查清理状态
  if (cleanup_handle != 0) {
    // 触发错误处理
    trigger_resource_error();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/**
 * 克隆引擎上下文
 * @param source_ptr 源上下文指针
 * @param dest_ptr 目标上下文指针
 * @return 返回目标上下文指针
 */
longlong * clone_engine_context(longlong source_ptr, longlong *dest_ptr)
{
  longlong context_data;
  undefined8 context_handle;
  longlong *cloned_context;
  undefined *name_ptr;
  undefined4 init_flag;
  undefined8 cleanup_flags;
  
  cleanup_flags = 0xfffffffffffffffe;
  
  // 分配上下文内存
  context_handle = allocate_memory_block(global_memory_pool, 0x140, 0x10, 3, 0, 0xfffffffffffffffe);
  cloned_context = (longlong *)initialize_context_structure(context_handle);
  *dest_ptr = (longlong)cloned_context;
  
  // 初始化克隆的上下文
  if (cloned_context != (longlong *)0x0) {
    (**(code **)(*cloned_context + 0x28))(cloned_context);
  }
  
  init_flag = 1;
  
  // 复制上下文数据
  *(undefined8 *)(*dest_ptr + 0xa8) = *(undefined8 *)(source_ptr + 0xa8);
  context_data = *dest_ptr;
  *(undefined4 *)(context_data + 0x20) = *(undefined4 *)(source_ptr + 0x20);
  
  // 复制名称
  name_ptr = &default_context_name;
  if (*(undefined **)(source_ptr + 0x18) != (undefined *)0x0) {
    name_ptr = *(undefined **)(source_ptr + 0x18);
  }
  strcpy_s(*(undefined8 *)(context_data + 0x18), 0x80, name_ptr);
  
  // 设置清理标志
  *(undefined8 *)(*dest_ptr + 0xb8) = 0;
  
  // 如果需要额外的初始化
  if (*(longlong *)(source_ptr + 0xb8) != 0) {
    context_handle = allocate_memory_block(global_memory_pool, 0x130, 8, 6, init_flag, cleanup_flags);
    memset(context_handle, 0, 0x130);
  }
  
  return dest_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 复制引擎数据结构
 * @param dest_ptr 目标数据指针
 * @param src_ptr 源数据指针
 */
void copy_engine_data_structure(longlong *dest_ptr, longlong *src_ptr)
{
  longlong data_field1;
  ulonglong available_size;
  undefined4 field_value1;
  undefined4 field_value2;
  longlong src_start;
  longlong src_end;
  ulonglong required_size;
  undefined *name_ptr;
  longlong data_size;
  
  // 复制基本字段
  data_field1 = src_ptr[0x20];
  dest_ptr[0x1f] = src_ptr[0x1f];
  dest_ptr[0x20] = data_field1;
  
  // 复制配置字段
  field_value1 = *(undefined4 *)((longlong)src_ptr + 0x10c);
  data_field1 = src_ptr[0x22];
  field_value2 = *(undefined4 *)((longlong)src_ptr + 0x114);
  *(int *)(dest_ptr + 0x21) = (int)src_ptr[0x21];
  *(undefined4 *)((longlong)dest_ptr + 0x10c) = field_value1;
  *(int *)(dest_ptr + 0x22) = (int)data_field1;
  *(undefined4 *)((longlong)dest_ptr + 0x114) = field_value2;
  
  // 复制更多配置字段
  field_value1 = *(undefined4 *)((longlong)src_ptr + 0x11c);
  data_field1 = src_ptr[0x24];
  field_value2 = *(undefined4 *)((longlong)src_ptr + 0x124);
  *(int *)(dest_ptr + 0x23) = (int)src_ptr[0x23];
  *(undefined4 *)((longlong)dest_ptr + 0x11c) = field_value1;
  *(int *)(dest_ptr + 0x24) = (int)data_field1;
  *(undefined4 *)((longlong)dest_ptr + 0x124) = field_value2;
  *(int *)(dest_ptr + 0x25) = (int)src_ptr[0x25];
  
  // 如果需要深度复制
  if (dest_ptr != src_ptr) {
    src_start = *src_ptr;
    src_end = src_ptr[1];
    data_size = src_end - src_start;
    
    // 计算需要的内存大小
    required_size = (data_size / 6 + (data_size >> 0x3f));
    required_size = (required_size >> 3) - (required_size >> 0x3f);
    
    // 检查是否有足够的空间
    if ((ulonglong)((dest_ptr[2] - *dest_ptr) / 0x30) < required_size) {
      // 分配新的内存空间
      if (required_size == 0) {
        data_size = 0;
      }
      else {
        data_size = allocate_memory_block(global_memory_pool, required_size * 0x30, (char)dest_ptr[3]);
      }
      
      // 复制数据
      if (src_start != src_end) {
        memmove(data_size, src_start, data_size);
      }
      
      // 清理原有数据
      if (*dest_ptr != 0) {
        cleanup_existing_data();
      }
      
      // 设置新的数据指针
      *dest_ptr = data_size;
      data_size = required_size * 0x30 + data_size;
      dest_ptr[1] = data_size;
      dest_ptr[2] = data_size;
    }
    else {
      // 使用现有空间
      available_size = (dest_ptr[1] - *dest_ptr) / 0x30;
      if (available_size < required_size) {
        data_size = available_size * 0x30 + src_start;
        resize_data_block(src_start, data_size);
        data_size = resize_data_block(data_size, src_end, dest_ptr[1]);
      }
      else {
        data_size = resize_data_block(src_start, src_end);
      }
      dest_ptr[1] = data_size;
    }
  }
  
  // 复制数据块
  copy_data_blocks(dest_ptr + 4, src_ptr + 4);
  
  // 复制额外数据
  if (dest_ptr + 8 != src_ptr + 8) {
    copy_additional_data(dest_ptr + 8, src_ptr[8], src_ptr[9]);
  }
  
  // 复制剩余字段
  *(int *)(dest_ptr + 0xe) = (int)src_ptr[0xe];
  
  // 复制名称
  name_ptr = &default_data_name;
  if ((undefined *)src_ptr[0xd] != (undefined *)0x0) {
    name_ptr = (undefined *)src_ptr[0xd];
  }
  strcpy_s(dest_ptr[0xd], 0x80, name_ptr);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



