#include "TaleWorlds.Native.Split.h"

// 01_initialization_part022.c - 初始化模块第22部分
// 包含25个函数，主要处理引擎初始化、内存管理、数据结构操作等功能

// 函数: 合并重复的资源条目
// 原始函数名: FUN_180056150
void merge_duplicate_resource_entries(longlong resource_manager_ptr)

{
  char is_equal;
  char char1;
  char char2;
  int index;
  undefined8 *resource_ptr;
  ulonglong offset;
  int resource_count;
  char *string_ptr1;
  longlong *string_ptr2;
  longlong start_offset;
  ulonglong end_offset;
  longlong string_length;
  longlong resource_offset;
  int duplicate_index;
  longlong current_offset;
  int compare_result;
  longlong temp_offset;
  int resource_index;
  ulonglong comparison_offset;
  int found_duplicate;
  bool strings_match;
  
  offset = 0;
  start_offset = *(longlong *)(resource_manager_ptr + 0x50);
  end_offset = *(longlong *)(resource_manager_ptr + 0x48);
  if (start_offset - end_offset >> 3 != 0) {
    found_duplicate = 1;
    temp_offset = 8;
    comparison_offset = offset;
    do {
      resource_index = (int)offset;
      compare_result = -1;
      if ((ulonglong)(longlong)found_duplicate < (ulonglong)(start_offset - end_offset >> 3)) {
        start_offset = *(longlong *)(resource_manager_ptr + 0x50);
        current_offset = temp_offset;
        duplicate_index = found_duplicate;
        compare_result = -1;
        do {
          compare_result = *(int *)(*(longlong *)(current_offset + end_offset) + 0x10);
          index = *(int *)(*(longlong *)(comparison_offset + end_offset) + 0x10);
          if (compare_result == index) {
            if (compare_result == 0) {
              if (index != 0) goto strings_not_equal;
              strings_match = true;
            }
            else {
              string_ptr1 = *(char **)(*(longlong *)(current_offset + end_offset) + 8);
              string_length = *(longlong *)(*(longlong *)(comparison_offset + end_offset) + 8) - (longlong)string_ptr1;
              do {
                char1 = *string_ptr1;
                char2 = string_ptr1[string_length];
                if (char1 != char2) break;
                string_ptr1 = string_ptr1 + 1;
              } while (char2 != '\0');
              strings_match = char1 == char2;
            }
          }
          else {
            if (compare_result == 0) {
              if (index != 0) goto strings_not_equal;
              strings_match = true;
            }
            else {
            strings_not_equal:
              strings_match = false;
            }
          }
          compare_result = duplicate_index;
          if (!strings_match) {
            compare_result = compare_result;
          }
          duplicate_index = duplicate_index + 1;
          current_offset = current_offset + 8;
          compare_result = compare_result;
        } while ((ulonglong)(longlong)duplicate_index < (ulonglong)(start_offset - end_offset >> 3));
      }
      if (compare_result != -1) {
        current_offset = (longlong)compare_result;
        start_offset = *(longlong *)(end_offset + current_offset * 8);
        *(double *)(*(longlong *)(comparison_offset + end_offset) + 0x40) =
             *(double *)(start_offset + 0x40) + *(double *)(*(longlong *)(comparison_offset + end_offset) + 0x40);
        string_ptr2 = *(longlong **)(start_offset + 0x48);
        if (string_ptr2 != *(longlong **)(start_offset + 0x50)) {
          end_offset = *(longlong *)(resource_manager_ptr + 0x48);
          do {
            *(undefined8 *)(*string_ptr2 + 0x68) = *(undefined8 *)(comparison_offset + end_offset);
            string_ptr2 = string_ptr2 + 1;
            end_offset = *(longlong *)(resource_manager_ptr + 0x48);
          } while (string_ptr2 != *(longlong **)(*(longlong *)(end_offset + current_offset * 8) + 0x50));
        }
        start_offset = *(longlong *)(end_offset + current_offset * 8);
        merge_resource_data(*(longlong *)(comparison_offset + end_offset) + 0x48,
                      *(undefined8 *)(*(longlong *)(comparison_offset + end_offset) + 0x50),
                      *(undefined8 *)(start_offset + 0x48),*(undefined8 *)(start_offset + 0x50));
        start_offset = *(longlong *)(*(longlong *)(resource_manager_ptr + 0x48) + current_offset * 8);
        *(undefined8 *)(start_offset + 0x50) = *(undefined8 *)(start_offset + 0x48);
        merge_duplicate_resource_entries(*(undefined8 *)(comparison_offset + *(longlong *)(resource_manager_ptr + 0x48)));
        cleanup_resource_entry(*(undefined8 *)(*(longlong *)(resource_manager_ptr + 0x48) + current_offset * 8));
        resource_ptr = *(undefined8 **)(*(longlong *)(resource_manager_ptr + 0x48) + current_offset * 8);
        if (resource_ptr != (undefined8 *)0x0) {
          if (resource_ptr[9] != 0) {
                    // WARNING: Subroutine does not return
            handle_critical_error();
          }
          resource_ptr[4] = &default_resource_handler;
          if (resource_ptr[5] == 0) {
            resource_ptr[5] = 0;
            *(undefined4 *)(resource_ptr + 7) = 0;
            resource_ptr[4] = &alternate_resource_handler;
            *resource_ptr = &default_resource_handler;
            if (resource_ptr[1] == 0) {
              resource_ptr[1] = 0;
              *(undefined4 *)(resource_ptr + 3) = 0;
              *resource_ptr = &alternate_resource_handler;
                    // WARNING: Subroutine does not return
              handle_critical_error(resource_ptr);
            }
                    // WARNING: Subroutine does not return
            handle_critical_error();
          }
                    // WARNING: Subroutine does not return
          handle_critical_error();
        }
        *(undefined8 *)(*(longlong *)(resource_manager_ptr + 0x48) + current_offset * 8) = 0;
        start_offset = *(longlong *)(resource_manager_ptr + 0x48) + current_offset * 8;
        offset = start_offset + 8;
        end_offset = *(ulonglong *)(resource_manager_ptr + 0x50);
        if (offset < end_offset) {
                    // WARNING: Subroutine does not return
          memmove(start_offset,offset,end_offset - offset);
        }
        start_offset = end_offset - 8;
        *(longlong *)(resource_manager_ptr + 0x50) = start_offset;
        resource_index = resource_index + -1;
        found_duplicate = found_duplicate + -1;
        comparison_offset = comparison_offset - 8;
        temp_offset = temp_offset + -8;
      }
      offset = (ulonglong)(resource_index + 1U);
      found_duplicate = found_duplicate + 1;
      comparison_offset = comparison_offset + 8;
      temp_offset = temp_offset + 8;
      end_offset = *(longlong *)(resource_manager_ptr + 0x48);
    } while ((ulonglong)(longlong)(int)(resource_index + 1U) < (ulonglong)(start_offset - end_offset >> 3));
  }
  return;
}

// 函数: 清理资源管理器
// 原始函数名: FUN_180056410
void cleanup_resource_manager(longlong manager_ptr, undefined8 param2, undefined8 param3, undefined8 param4)

{
  ulonglong *resource_array_ptr;
  undefined8 *resource_entry;
  ulonglong array_start;
  ulonglong array_end;
  ulonglong current_offset;
  longlong entry_count;
  uint resource_index;
  ulonglong processed_count;
  longlong array_size;
  undefined8 cleanup_flag;
  
  cleanup_flag = 0xfffffffffffffffe;
  current_offset = 0;
  resource_array_ptr = (ulonglong *)(manager_ptr + 0x48);
  array_start = *resource_array_ptr;
  array_end = current_offset;
  processed_count = current_offset;
  if ((longlong)(*(longlong *)(manager_ptr + 0x50) - array_start) >> 3 != 0) {
    do {
      cleanup_resource_manager(*(undefined8 *)(array_start + array_end));
      resource_entry = *(undefined8 **)(*resource_array_ptr + array_end);
      if (resource_entry != (undefined8 *)0x0) {
        if (resource_entry[9] != 0) {
                    // WARNING: Subroutine does not return
          handle_critical_error();
        }
        resource_entry[4] = &default_resource_handler;
        if (resource_entry[5] == 0) {
          resource_entry[5] = 0;
          *(undefined4 *)(resource_entry + 7) = 0;
          resource_entry[4] = &alternate_resource_handler;
          *resource_entry = &default_resource_handler;
          if (resource_entry[1] == 0) {
            resource_entry[1] = 0;
            *(undefined4 *)(resource_entry + 3) = 0;
            *resource_entry = &alternate_resource_handler;
                    // WARNING: Subroutine does not return
            handle_critical_error(resource_entry);
          }
                    // WARNING: Subroutine does not return
          handle_critical_error();
        }
                    // WARNING: Subroutine does not return
        handle_critical_error();
      }
      *(undefined8 *)(*resource_array_ptr + array_end) = 0;
      resource_index = (int)processed_count + 1;
      array_start = *resource_array_ptr;
      array_end = array_end + 8;
      processed_count = (ulonglong)resource_index;
    } while ((ulonglong)(longlong)(int)resource_index <
             (ulonglong)((longlong)(*(longlong *)(manager_ptr + 0x50) - array_start) >> 3));
  }
  resize_resource_array(resource_array_ptr,0);
  array_start = *(ulonglong *)(manager_ptr + 0x50);
  array_end = *resource_array_ptr;
  resource_index = *(uint *)(manager_ptr + 0x60);
  array_size = array_start - array_end;
  entry_count = array_size >> 3;
  if (entry_count != 0) {
    current_offset = allocate_memory(global_memory_allocator,entry_count * 8,resource_index & 0xff,param4,cleanup_flag,0,0,0,resource_index);
  }
  entry_count = current_offset + entry_count * 8;
  if (array_end == array_start) {
    array_start = *resource_array_ptr;
    *resource_array_ptr = current_offset;
    *(longlong *)(manager_ptr + 0x50) = entry_count;
    *(longlong *)(manager_ptr + 0x58) = entry_count;
    *(uint *)(manager_ptr + 0x60) = resource_index;
    if (array_start == 0) {
      return;
    }
                    // WARNING: Subroutine does not return
    handle_critical_error();
  }
                    // WARNING: Subroutine does not return
  memmove(current_offset,array_end,array_size,param4,cleanup_flag,current_offset,entry_count,entry_count);
}

// 函数: 初始化资源管理器链表
// 原始函数名: FUN_1800565f0
void initialize_resource_manager_list(longlong *list_head_ptr)

{
  undefined8 *new_node;
  code *init_function;
  longlong old_head;
  longlong *node_ptr;
  undefined1 stack_data [32];
  longlong stack_value;
  longlong *temp_ptr;
  longlong **node_ptr_ptr;
  undefined8 stack_param1;
  undefined *stack_param2;
  undefined1 *stack_param3;
  undefined4 stack_param4;
  undefined1 stack_data2 [16];
  ulonglong stack_checksum;
  
  stack_param1 = 0xfffffffffffffffe;
  stack_checksum = global_stack_cookie ^ (ulonglong)stack_data;
  node_ptr = (longlong *)allocate_memory(global_memory_allocator,0xd0,8,3);
  node_ptr_ptr = (longlong **)node_ptr;
  initialize_resource_node(node_ptr);
  *node_ptr = (longlong)&resource_manager_vtable;
  node_ptr[0x18] = 0;
  *(undefined4 *)(node_ptr + 0x19) = 0;
  temp_ptr = node_ptr;
  (**(code **)(*node_ptr + 0x28))(node_ptr);
  temp_ptr = (longlong *)*list_head_ptr;
  *list_head_ptr = (longlong)node_ptr;
  if (temp_ptr != (longlong *)0x0) {
    (**(code **)(*temp_ptr + 0x38))();
  }
  old_head = global_engine_context;
  stack_param2 = &resource_manager_init_data;
  stack_param3 = stack_data2;
  stack_data2[0] = 0;
  stack_param4 = 0xc;
  strcpy_s(stack_data2,0x10,&resource_manager_name);
  node_ptr = (longlong *)allocate_memory(global_memory_allocator,0x208,8,3);
  stack_value = old_head + 0x70;
  node_ptr_ptr = (longlong **)node_ptr;
  create_resource_manager(node_ptr,&stack_param2,3,old_head + 0x2e0);
  *node_ptr = (longlong)&resource_manager_vtable2;
  temp_ptr = node_ptr;
  setup_resource_manager(node_ptr);
  register_resource_manager(old_head + 0x48,&temp_ptr);
  list_head_ptr[1] = (longlong)node_ptr;
  stack_param2 = &alternate_resource_handler;
  new_node = (undefined8 *)list_head_ptr[1];
  init_function = *(code **)*new_node;
  node_ptr_ptr = &temp_ptr;
  temp_ptr = (longlong *)*list_head_ptr;
  if (temp_ptr != (longlong *)0x0) {
    (**(code **)(*temp_ptr + 0x28))();
  }
  (*init_function)(new_node,&temp_ptr);
                    // WARNING: Subroutine does not return
  validate_stack_checksum(stack_checksum ^ (ulonglong)stack_data);
}

// 函数: 释放资源管理器内存
// 原始函数名: FUN_1800567c0
undefined8 free_resource_manager_memory(undefined8 memory_ptr, ulonglong flags, undefined8 param3, undefined8 param4)

{
  undefined8 cleanup_flag;
  
  cleanup_flag = 0xfffffffffffffffe;
  initialize_memory_manager();
  if ((flags & 1) != 0) {
    free(memory_ptr,0xd0,param3,param4,cleanup_flag);
  }
  return memory_ptr;
}

// 函数: 启动引擎性能监控
// 原始函数名: FUN_180056810
void start_engine_performance_monitor(longlong engine_context)

{
  uint current_time;
  double elapsed_time;
  uint frame_count;
  longlong performance_counter;
  undefined4 *debug_string_ptr;
  undefined8 *message_buffer;
  int wait_iterations;
  longlong temp_counter;
  undefined *message_ptr;
  undefined *string_ptr;
  uint message_size;
  ulonglong buffer_size;
  longlong stack_value;
  longlong stack_array [2];
  char error_message [16];
  ulonglong stack_checksum;
  
  stack_array[1] = 0xfffffffffffffffe;
  stack_checksum = global_stack_cookie ^ (ulonglong)stack_data;
  performance_counter = global_performance_counter;
  if (global_performance_counter == 0) {
    QueryPerformanceCounter(&stack_value);
    performance_counter = stack_value;
  }
  *(double *)(engine_context + 0xc0) = (double)(performance_counter - performance_counter_base) * performance_frequency;
  LOCK();
  *(undefined4 *)(engine_context + 200) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)(engine_context + 0xcc) = 1;
  UNLOCK();
  while( true ) {
    do {
      if (*(int *)(engine_context + 0xcc) == 0) {
                    // WARNING: Subroutine does not return
        validate_stack_checksum(stack_checksum ^ (ulonglong)stack_data);
      }
      Sleep(10);
      performance_counter = global_performance_counter;
      if (global_performance_counter == 0) {
        QueryPerformanceCounter(stack_array);
        performance_counter = stack_array[0];
      }
      elapsed_time = (double)(performance_counter - performance_counter_base) * performance_frequency;
    } while ((performance_debug_enabled == '\0') || (elapsed_time - *(double *)(engine_context + 0xc0) <= 900.0));
    LOCK();
    *(undefined4 *)(engine_context + 200) = 1;
    UNLOCK();
    message_ptr = &default_resource_handler;
    buffer_size = 0;
    string_ptr = (undefined *)0x0;
    message_size = 0;
    create_debug_message(&message_ptr,0x1c);
    debug_string_ptr = (undefined4 *)(string_ptr + message_size);
    *debug_string_ptr = 0x73736f50; // "Poss"
    debug_string_ptr[1] = 0x656c6269; // "ible"
    debug_string_ptr[2] = 0x61656420; // "ead "
    debug_string_ptr[3] = 0x636f6c64; // "cold"
    *(undefined8 *)(debug_string_ptr + 4) = 0x746365746564206b; // "k detected"
    debug_string_ptr[6] = 0x202c6465; // "de, "
    *(undefined1 *)(debug_string_ptr + 7) = 0;
    message_size = 0x1c;
    create_debug_message(&message_ptr,0x3e);
    debug_string_ptr = (undefined4 *)(string_ptr + message_size);
    *debug_string_ptr = 0x69676e65; // "engine"
    debug_string_ptr[1] = 0x6420656e; // "en d"
    debug_string_ptr[2] = 0x6e206469; // "in re"
    debug_string_ptr[3] = 0x7220746f; // "or r"
    debug_string_ptr[4] = 0x65646e65; // "ende"
    debug_string_ptr[5] = 0x20612072; // "r a "
    debug_string_ptr[6] = 0x6d617266; // "fram"
    debug_string_ptr[7] = 0x6f662065; // "e of"
    *(undefined2 *)(debug_string_ptr + 8) = 0x2072; // "r "
    *(undefined1 *)((longlong)debug_string_ptr + 0x22) = 0;
    message_size = 0x3e;
    generate_error_message(error_message,&error_template,900);
    frame_count = message_size;
    temp_counter = -1;
    do {
      stack_value = temp_counter;
      temp_counter = stack_value + 1;
    } while (error_message[stack_value + 1] != '\0');
    wait_iterations = (int)(stack_value + 1);
    if (0 < wait_iterations) break;
    current_time = message_size + 10;
    create_debug_message(&message_ptr,current_time);
    message_buffer = (undefined8 *)(string_ptr + message_size);
    *message_buffer = 0x73646e6f63657320; // " seconds"
    *(undefined2 *)(message_buffer + 1) = 0x2021; // "! "
    *(undefined1 *)((longlong)message_buffer + 10) = 0;
    message_size = current_time;
    create_debug_message(&message_ptr,frame_count + 0x2b);
    debug_string_ptr = (undefined4 *)(string_ptr + message_size);
    *debug_string_ptr = 0x65766544; // "Deve"
    debug_string_ptr[1] = 0x65706f6c; // "lope"
    debug_string_ptr[2] = 0x6e692072; // "in r"
    debug_string_ptr[3] = 0x76726574; // "vert"
    debug_string_ptr[4] = 0x69746e65; // "enti"
    debug_string_ptr[5] = 0x73206e6f; // "ons "
    debug_string_ptr[6] = 0x65676775; // "ggu"
    debug_string_ptr[7] = 0x64657473; // "test"
    *(undefined2 *)(debug_string_ptr + 8) = 0x2e; // "."
    message_ptr = &debug_string_suffix;
    if (string_ptr != (undefined *)0x0) {
      message_ptr = string_ptr;
    }
    stack_data[0] = 0;
    stack_data[1] = 0;
    message_size = frame_count + 0x2b;
    (**(code **)(*(longlong *)*global_debug_logger + 0x20))
              ((longlong *)*global_debug_logger,&debug_log_message,0x175c,message_ptr);
    *(double *)(engine_context + 0xc0) = elapsed_time;
    message_ptr = &default_resource_handler;
    if (string_ptr != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
      handle_critical_error();
    }
    string_ptr = (undefined *)0x0;
    buffer_size = buffer_size & 0xffffffff00000000;
    message_ptr = &alternate_resource_handler;
  }
  create_debug_message(&message_ptr,message_size + wait_iterations);
                    // WARNING: Subroutine does not return
  memcpy(string_ptr + message_size,error_message,(longlong)((int)temp_counter + 2));
}

// 函数: 初始化引擎子系统
// 原始函数名: FUN_180056b30
void initialize_engine_subsystems(undefined8 param1, undefined8 param2, undefined8 param3, undefined8 param4)

{
  longlong system_status;
  char init_result;
  undefined1 stack_data [16];
  undefined *stack_ptr1;
  undefined *stack_ptr2;
  
  initialize_graphics_system(param1,1,1,param4,0xfffffffffffffffe);
  if (global_graphics_manager != (longlong *)0x0) {
    init_result = (**(code **)(*global_graphics_manager + 0x48))();
    if ((init_result != '\0') && (global_graphics_manager[2] != 0)) {
      (*(code *)global_graphics_manager[0x11])(0);
    }
  }
  stack_ptr1 = &graphics_init_function;
  stack_ptr2 = &graphics_init_data;
  initialize_window_manager(stack_data);
  *(undefined1 *)(global_window_manager + 0x3a0) = 1;
  initialize_audio_system(global_engine_context);
  initialize_audio_system(global_engine_context);
  if (global_input_manager != 0) {
    initialize_input_system();
  }
  initialize_audio_system(global_engine_context);
  initialize_graphics_system();
  system_status = global_system_state;
  *(undefined1 *)(global_system_state + 0x1504) = 0;
  *(undefined1 *)(system_status + 0x1506) = 0;
  return;
}

// 函数: 处理引擎初始化回调
// 原始函数名: FUN_180056c50
void handle_engine_initialization_callback(undefined8 param1, undefined8 *callback_ptr, undefined4 callback_id)

{
  undefined8 callback_data;
  undefined **callback_function_ptr;
  undefined1 stack_data [32];
  undefined **callback_ptr_ptr;
  undefined ***callback_ptr_ptr_ptr;
  undefined8 stack_param1;
  undefined8 *stack_param2;
  undefined **stack_param3;
  undefined *stack_param4;
  undefined1 *stack_param5;
  undefined4 stack_param6;
  undefined1 stack_data2 [128];
  undefined4 stack_param7;
  undefined8 stack_param8;
  undefined4 stack_param9;
  ulonglong stack_checksum;
  
  stack_param1 = 0xfffffffffffffffe;
  stack_checksum = global_stack_cookie ^ (ulonglong)stack_data;
  callback_ptr_ptr = &stack_param4;
  stack_param4 = &callback_data_address;
  stack_param5 = stack_data2;
  stack_param6 = 0;
  stack_data2[0] = 0;
  stack_param7 = 0x17;
  stack_param2 = callback_ptr;
  callback_data = allocate_memory(global_memory_allocator,0x20,8,3);
  stack_param8 = process_callback_data(callback_data,callback_ptr);
  stack_param9 = callback_id;
  callback_data = allocate_memory(global_memory_allocator,0x100,8,3);
  callback_function_ptr = (undefined **)create_callback_object(callback_data,&stack_param4);
  stack_param3 = callback_function_ptr;
  if (callback_function_ptr != (undefined **)0x0) {
    (**(code **)(*callback_function_ptr + 0x28))(callback_function_ptr);
  }
  callback_data = global_engine_context;
  callback_ptr_ptr_ptr = &callback_ptr_ptr;
  callback_ptr_ptr = callback_function_ptr;
  if (callback_function_ptr != (undefined **)0x0) {
    (**(code **)(*callback_function_ptr + 0x28))(callback_function_ptr);
  }
  register_engine_callback(callback_data,&callback_ptr_ptr);
  if (callback_function_ptr != (undefined **)0x0) {
    (**(code **)(*callback_function_ptr + 0x38))(callback_function_ptr);
  }
  callback_ptr_ptr_ptr = (undefined ***)&stack_param4;
  stack_param4 = &alternate_resource_handler;
  *callback_ptr = &default_resource_handler;
  if (callback_ptr[1] != 0) {
                    // WARNING: Subroutine does not return
    handle_critical_error();
  }
  callback_ptr[1] = 0;
  *(undefined4 *)(callback_ptr + 3) = 0;
  *callback_ptr = &alternate_resource_handler;
                    // WARNING: Subroutine does not return
  validate_stack_checksum(stack_checksum ^ (ulonglong)stack_data);
}

// 函数: 重置资源数据结构
// 原始函数名: FUN_180056de0
undefined8 * reset_resource_data_structure(undefined8 *resource_ptr)

{
  *resource_ptr = 0;
  resource_ptr[1] = 0;
  resource_ptr[2] = 0;
  *(undefined4 *)(resource_ptr + 3) = 3;
  return resource_ptr;
}

// 函数: 初始化资源数据结构
// 原始函数名: FUN_180056e10
undefined8 * initialize_resource_data_structure(undefined8 *resource_ptr)

{
  *resource_ptr = 0;
  resource_ptr[1] = 0;
  resource_ptr[2] = 0;
  *(undefined4 *)(resource_ptr + 3) = 3;
  return resource_ptr;
}

// 函数: 启动引擎初始化序列
// 原始函数名: FUN_180056e40
void start_engine_initialization_sequence(void)

{
  initialize_engine_components();
  return;
}

// 函数: 设置资源数据结构
// 原始函数名: FUN_180056e60
undefined8 * setup_resource_data_structure(undefined8 *resource_ptr)

{
  *resource_ptr = 0;
  resource_ptr[1] = 0;
  resource_ptr[2] = 0;
  *(undefined4 *)(resource_ptr + 3) = 10;
  return resource_ptr;
}

// 函数: 配置资源管理器
// 原始函数名: FUN_180056e90
undefined8 * configure_resource_manager(undefined8 *manager_ptr)

{
  undefined8 *temp_ptr;
  
  *manager_ptr = 0;
  manager_ptr[1] = 0;
  manager_ptr[4] = 0;
  *(undefined4 *)(manager_ptr + 5) = 0;
  manager_ptr[6] = 0;
  manager_ptr[8] = 0;
  manager_ptr[0x60f] = 0;
  manager_ptr[0x610] = 0;
  temp_ptr = manager_ptr + 0xf;
  manager_ptr[0xc] = temp_ptr;
  manager_ptr[0xd] = (ulonglong)(-(int)temp_ptr & 7) + (longlong)temp_ptr;
  manager_ptr[0xe] = manager_ptr + 0x60f;
  manager_ptr[0x60f] = &resource_handler_function;
  manager_ptr[0x610] = resource_cleanup_function;
  return manager_ptr;
}

// 函数: 更新资源管理器链表
// 原始函数名: FUN_180056f10
longlong * update_resource_manager_list(longlong *list_head_ptr, longlong *new_node_ptr)

{
  longlong *old_head_ptr;
  
  if (new_node_ptr != (longlong *)0x0) {
    (**(code **)(*new_node_ptr + 0x28))(new_node_ptr);
  }
  old_head_ptr = (longlong *)*list_head_ptr;
  *list_head_ptr = (longlong)new_node_ptr;
  if (old_head_ptr != (longlong *)0x0) {
    (**(code **)(*old_head_ptr + 0x38))();
  }
  return list_head_ptr;
}

// 函数: 复制资源名称
// 原始函数名: FUN_180056f70
void copy_resource_name(longlong dest_ptr, longlong src_ptr)

{
  longlong name_length;
  undefined *name_ptr;
  
  name_ptr = &empty_string;
  if (*(undefined **)(src_ptr + 8) != (undefined *)0x0) {
    name_ptr = *(undefined **)(src_ptr + 8);
  }
  if (name_ptr == (undefined *)0x0) {
    *(undefined4 *)(dest_ptr + 0x10) = 0;
    **(undefined1 **)(dest_ptr + 8) = 0;
    return;
  }
  name_length = -1;
  do {
    name_length = name_length + 1;
  } while (name_ptr[name_length] != '\0');
  if ((int)name_length < 0x400) {
    *(int *)(dest_ptr + 0x10) = (int)name_length;
                    // WARNING: Could not recover jumptable at 0x000180056fc2. Too many branches
                    // WARNING: Treating indirect jump as call
    strcpy_s(*(undefined8 *)(dest_ptr + 8),0x400);
    return;
  }
  allocate_string_buffer(&string_buffer_address,0x400);
  *(undefined4 *)(dest_ptr + 0x10) = 0;
  **(undefined1 **)(dest_ptr + 8) = 0;
  return;
}

// 函数: 清理资源管理器内存池
// 原始函数名: FUN_180057010
void cleanup_resource_manager_memory_pool(longlong *pool_ptr)

{
  longlong *end_ptr;
  longlong current_ptr;
  
  end_ptr = pool_ptr + 3;
  current_ptr = *pool_ptr;
  while ((longlong *)current_ptr != end_ptr) {
    current_ptr = *(longlong *)((ulonglong)(-(int)current_ptr & 7) + current_ptr);
    if ((code *)pool_ptr[0x604] == (code *)0x0) {
      free();
    }
    else {
      (*(code *)pool_ptr[0x604])();
    }
    *pool_ptr = current_ptr;
  }
  *pool_ptr = (longlong)end_ptr;
  pool_ptr[1] = (ulonglong)(-(int)end_ptr & 7) + (longlong)end_ptr;
  pool_ptr[2] = (longlong)(pool_ptr + 0x603);
  return;
}

// 函数: 释放资源管理器内存块
// 原始函数名: FUN_180057029
void release_resource_manager_memory_block(longlong param1)

{
  longlong unaff_RSI;
  longlong *unaff_RDI;
  
  do {
    param1 = *(longlong *)((ulonglong)(-(int)param1 & 7) + param1);
    if ((code *)unaff_RDI[0x604] == (code *)0x0) {
      free();
    }
    else {
      (*(code *)unaff_RDI[0x604])();
    }
    *unaff_RDI = param1;
  } while (param1 != unaff_RSI);
  *unaff_RDI = unaff_RSI;
  unaff_RDI[1] = (ulonglong)(-(int)unaff_RSI & 7) + unaff_RSI;
  unaff_RDI[2] = (longlong)(unaff_RDI + 0x603);
  return;
}

// 函数: 重置资源管理器指针
// 原始函数名: FUN_180057062
void reset_resource_manager_pointers(void)

{
  longlong unaff_RSI;
  longlong *unaff_RDI;
  
  *unaff_RDI = unaff_RSI;
  unaff_RDI[1] = (ulonglong)(-(int)unaff_RSI & 7) + unaff_RSI;
  unaff_RDI[2] = (longlong)(unaff_RDI + 0x603);
  return;
}

// 函数: 初始化资源字符串
// 原始函数名: FUN_180057090
undefined8 *
initialize_resource_string(undefined8 *string_ptr, longlong name_ptr, undefined8 param3, undefined8 param4)

{
  longlong name_length;
  
  *string_ptr = &alternate_resource_handler;
  string_ptr[1] = 0;
  *(undefined4 *)(string_ptr + 2) = 0;
  *string_ptr = &resource_string_data;
  string_ptr[1] = string_ptr + 3;
  *(undefined4 *)(string_ptr + 2) = 0;
  *(undefined1 *)(string_ptr + 3) = 0;
  if (name_ptr != 0) {
    name_length = -1;
    do {
      name_length = name_length + 1;
    } while (*(char *)(name_ptr + name_length) != '\0');
    *(int *)(string_ptr + 2) = (int)name_length;
    strcpy_s(string_ptr[1],0x10,name_ptr,param4,0xfffffffffffffffe);
  }
  return string_ptr;
}

// 函数: 清理资源字符串数组
// 原始函数名: FUN_180057110
void cleanup_resource_string_array(longlong *array_ptr)

{
  undefined8 *current_ptr;
  undefined8 *end_ptr;
  
  current_ptr = (undefined8 *)array_ptr[1];
  end_ptr = (undefined8 *)*array_ptr;
  if (end_ptr != current_ptr) {
    do {
      (**(code **)*end_ptr)(end_ptr,0);
      end_ptr = end_ptr + 4;
    } while (end_ptr != current_ptr);
    array_ptr[1] = *array_ptr;
    return;
  }
  array_ptr[1] = (longlong)end_ptr;
  return;
}

// 函数: 处理资源字符串回调
// 原始函数名: FUN_180057170
void process_resource_string_callbacks(longlong *array_ptr, undefined8 param2, undefined8 param3, undefined8 param4)

{
  undefined8 *current_ptr;
  undefined8 *end_ptr;
  undefined8 callback_flag;
  
  callback_flag = 0xfffffffffffffffe;
  current_ptr = (undefined8 *)array_ptr[1];
  for (end_ptr = (undefined8 *)*array_ptr; end_ptr != current_ptr; end_ptr = end_ptr + 0xb) {
    (**(code **)*end_ptr)(end_ptr,0,param3,param4,callback_flag);
  }
  if (*array_ptr == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  handle_critical_error();
}

// 函数: 添加资源到数组
// 原始函数名: FUN_1800571e0
void add_resource_to_array(longlong *array_ptr, undefined4 *resource_data)

{
  longlong current_size;
  undefined4 *new_array;
  undefined4 *old_start;
  undefined4 *old_end;
  undefined4 *current_end;
  
  current_end = (undefined4 *)array_ptr[1];
  if (current_end < (undefined4 *)array_ptr[2]) {
    array_ptr[1] = (longlong)(current_end + 1);
    *current_end = *resource_data;
    return;
  }
  old_start = (undefined4 *)*array_ptr;
  current_size = (longlong)current_end - (longlong)old_start >> 2;
  if (current_size == 0) {
    current_size = 1;
  }
  else {
    current_size = current_size * 2;
    if (current_size == 0) {
      new_array = (undefined4 *)0x0;
      goto array_allocated;
    }
  }
  new_array = (undefined4 *)allocate_memory(global_memory_allocator,current_size * 4,(char)array_ptr[3]);
  old_start = (undefined4 *)*array_ptr;
  current_end = (undefined4 *)array_ptr[1];
array_allocated:
  if (old_start != current_end) {
                    // WARNING: Subroutine does not return
    memmove(new_array,old_start,(longlong)current_end - (longlong)old_start);
  }
  *new_array = *resource_data;
  if (*array_ptr != 0) {
                    // WARNING: Subroutine does not return
    handle_critical_error();
  }
  *array_ptr = (longlong)new_array;
  array_ptr[1] = (longlong)(new_array + 1);
  array_ptr[2] = (longlong)(new_array + current_size);
  return;
}

// 函数: 清理资源句柄
// 原始函数名: FUN_1800572d0
void cleanup_resource_handle(longlong handle_ptr)

{
  undefined8 *resource_ptr;
  
  resource_ptr = *(undefined8 **)(handle_ptr + 0x10);
  if (resource_ptr != (undefined8 *)0x0) {
    release_resource_data(handle_ptr,*resource_ptr);
                    // WARNING: Subroutine does not return
    handle_critical_error(resource_ptr);
  }
  *(longlong *)handle_ptr = handle_ptr;
  *(undefined8 *)(handle_ptr + 0x10) = 0;
  *(undefined1 *)(handle_ptr + 0x18) = 0;
  *(undefined8 *)(handle_ptr + 0x20) = 0;
  *(longlong *)(handle_ptr + 8) = handle_ptr;
  return;
}

// 函数: 释放资源句柄
// 原始函数名: FUN_1800572e6
void release_resource_handle(void)

{
  release_resource_data();
                    // WARNING: Subroutine does not return
  handle_critical_error();
}

// 函数: 重置资源句柄
// 原始函数名: FUN_180057314
void reset_resource_handle(void)

{
  longlong unaff_RBX;
  
  *(longlong *)unaff_RBX = unaff_RBX;
  *(undefined8 *)(unaff_RBX + 0x10) = 0;
  *(undefined1 *)(unaff_RBX + 0x18) = 0;
  *(undefined8 *)(unaff_RBX + 0x20) = 0;
  *(longlong *)(unaff_RBX + 8) = unaff_RBX;
  return;
}

// 函数: 调整数组大小
// 原始函数名: FUN_180057340
void resize_array(longlong *array_ptr, ulonglong new_size)

{
  longlong current_end;
  ulonglong current_size;
  ulonglong size_diff;
  ulonglong new_capacity;
  longlong new_array_ptr;
  longlong current_start;
  longlong current_capacity;
  
  current_end = array_ptr[1];
  current_start = *array_ptr;
  current_size = current_end - current_start >> 3;
  if (new_size <= current_size) {
    array_ptr[1] = current_start + new_size * 8;
    return;
  }
  size_diff = new_size - current_size;
  if (size_diff <= (ulonglong)(array_ptr[2] - current_end >> 3)) {
    if (size_diff != 0) {
                    // WARNING: Subroutine does not return
      memset(current_end,0,size_diff * 8);
    }
    array_ptr[1] = current_end;
    return;
  }
  new_capacity = current_size * 2;
  if (current_size == 0) {
    new_capacity = 1;
  }
  if (new_capacity < new_size) {
    new_capacity = new_size;
  }
  if (new_capacity == 0) {
    new_array_ptr = 0;
  }
  else {
    new_array_ptr = allocate_memory(global_memory_allocator,new_capacity * 8,(char)array_ptr[3]);
    current_start = *array_ptr;
    current_end = array_ptr[1];
  }
  if (current_start != current_end) {
                    // WARNING: Subroutine does not return
    memmove(new_array_ptr,current_start,current_end - current_start);
  }
  if (size_diff != 0) {
                    // WARNING: Subroutine does not return
    memset(new_array_ptr,0,size_diff * 8);
  }
  if (*array_ptr != 0) {
                    // WARNING: Subroutine does not return
    handle_critical_error();
  }
  *array_ptr = new_array_ptr;
  array_ptr[2] = new_array_ptr + new_capacity * 8;
  array_ptr[1] = new_array_ptr;
  return;
}

// 函数: 扩展数组容量
// 原始函数名: FUN_18005736b
void expand_array_capacity(longlong current_size, ulonglong requested_size, undefined8 param3, longlong array_ptr)

{
  longlong in_RAX;
  longlong new_array_ptr;
  longlong *unaff_RBX;
  ulonglong size_diff;
  ulonglong new_capacity;
  longlong unaff_RDI;
  
  size_diff = requested_size - current_size;
  if (size_diff <= (ulonglong)(in_RAX - unaff_RDI >> 3)) {
    if (size_diff != 0) {
                    // WARNING: Subroutine does not return
      memset();
    }
    unaff_RBX[1] = unaff_RDI;
    return;
  }
  new_capacity = current_size * 2;
  if (current_size == 0) {
    new_capacity = 1;
  }
  if (new_capacity < requested_size) {
    new_capacity = requested_size;
  }
  if (new_capacity == 0) {
    new_array_ptr = 0;
  }
  else {
    new_array_ptr = allocate_memory(global_memory_allocator,new_capacity * 8,(char)unaff_RBX[3]);
    array_ptr = *unaff_RBX;
    unaff_RDI = unaff_RBX[1];
  }
  if (array_ptr != unaff_RDI) {
                    // WARNING: Subroutine does not return
    memmove(new_array_ptr,array_ptr,unaff_RDI - array_ptr);
  }
  if (size_diff != 0) {
                    // WARNING: Subroutine does not return
    memset(new_array_ptr,0,size_diff * 8);
  }
  if (*unaff_RBX != 0) {
                    // WARNING: Subroutine does not return
    handle_critical_error();
  }
  *unaff_RBX = new_array_ptr;
  unaff_RBX[2] = new_array_ptr + new_capacity * 8;
  unaff_RBX[1] = new_array_ptr;
  return;
}

// 函数: 清理数组内存
// 原始函数名: FUN_180057446
void cleanup_array_memory(void)

{
  longlong unaff_RBX;
  longlong unaff_RSI;
  undefined8 unaff_RDI;
  
  if (unaff_RSI != 0) {
                    // WARNING: Subroutine does not return
    memset();
  }
  *(undefined8 *)(unaff_RBX + 8) = unaff_RDI;
  return;
}

// 函数: 设置数组指针
// 原始函数名: FUN_180057479
void set_array_pointer(undefined8 param1, longlong param2, undefined8 param3, longlong param4)

{
  longlong unaff_RBX;
  
  *(longlong *)(unaff_RBX + 8) = param4 + param2 * 8;
  return;
}

// 函数: 初始化资源缓存
// 原始函数名: FUN_180057490
void initialize_resource_cache(longlong cache_ptr, undefined8 param2, undefined8 param3, undefined8 param4)

{
  initialize_cache_system(cache_ptr,*(undefined8 *)(cache_ptr + 0x10),param3,param4,0xfffffffffffffffe);
  return;
}

// 函数: 清理资源缓存
// 原始函数名: FUN_1800574b0
void cleanup_resource_cache(longlong *cache_ptr)

{
  longlong current_ptr;
  longlong end_ptr;
  
  current_ptr = cache_ptr[1];
  for (end_ptr = *cache_ptr; end_ptr != current_ptr; end_ptr = end_ptr + 0x48) {
    cleanup_cache_entry(end_ptr);
  }
  if (*cache_ptr == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  handle_critical_error();
}

// 函数: 初始化资源池
// 原始函数名: FUN_180057510
void initialize_resource_pool(longlong pool_ptr, undefined8 param2, undefined8 param3, undefined8 param4)

{
  initialize_pool_system(pool_ptr,*(undefined8 *)(pool_ptr + 0x10),param3,param4,0xfffffffffffffffe);
  return;
}

// 函数: 初始化资源队列
// 原始函数名: FUN_180057530
void initialize_resource_queue(longlong queue_ptr, undefined8 param2, undefined8 param3, undefined8 param4)

{
  initialize_queue_system(queue_ptr,*(undefined8 *)(queue_ptr + 0x10),param3,param4,0xfffffffffffffffe);
  return;
}


// 注意：以下是一些可能的外部函数引用，需要根据上下文进一步定义
// 这些函数在其他文件中定义，这里仅作引用

// 外部函数引用
void merge_resource_data(longlong param1, undefined8 param2, undefined8 param3, undefined8 param4);
void cleanup_resource_entry(undefined8 param1);
void initialize_resource_node(longlong param1);
void create_resource_manager(longlong param1, undefined8 *param2, long param3, longlong param4);
void setup_resource_manager(longlong param1);
void register_resource_manager(longlong param1, longlong *param2);
void initialize_graphics_system(undefined8 param1, long param2, long param3, undefined8 param4, undefined8 param5);
void initialize_window_manager(undefined8 param1);
void initialize_audio_system(longlong param1);
void initialize_input_system(void);
void initialize_engine_components(void);
void process_callback_data(undefined8 param1, undefined8 *param2);
void create_callback_object(undefined8 param1, undefined8 *param2);
void register_engine_callback(longlong param1, undefined8 **param2);
void release_resource_data(undefined8 param1, undefined8 param2);
void initialize_cache_system(longlong param1, undefined8 param2, undefined8 param3, undefined8 param4, undefined8 param5);
void cleanup_cache_entry(longlong param1);
void initialize_pool_system(longlong param1, undefined8 param2, undefined8 param3, undefined8 param4, undefined8 param5);
void initialize_queue_system(longlong param1, undefined8 param2, undefined8 param3, undefined8 param4, undefined8 param5);

// 全局变量引用
extern longlong global_memory_allocator;
extern longlong global_performance_counter;
extern longlong performance_counter_base;
extern double performance_frequency;
extern longlong global_engine_context;
extern longlong global_graphics_manager;
extern longlong global_input_manager;
extern longlong global_system_state;
extern longlong global_debug_logger;
extern char performance_debug_enabled;
extern longlong global_stack_cookie;

// 常量引用
extern undefined8 default_resource_handler;
extern undefined8 alternate_resource_handler;
extern undefined8 resource_manager_vtable;
extern undefined8 resource_manager_vtable2;
extern undefined8 resource_manager_init_data;
extern undefined8 resource_manager_name;
extern undefined8 resource_handler_function;
extern undefined8 resource_cleanup_function;
extern undefined8 empty_string;
extern undefined8 string_buffer_address;
extern undefined8 resource_string_data;
extern undefined8 error_template;
extern undefined8 debug_string_suffix;
extern undefined8 debug_log_message;
extern undefined8 graphics_init_function;
extern undefined8 graphics_init_data;
extern undefined8 callback_data_address;
extern undefined8 global_window_manager;