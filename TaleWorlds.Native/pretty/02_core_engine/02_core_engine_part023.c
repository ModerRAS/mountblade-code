#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part023.c - 23 个函数

// 函数：处理线程同步对象和内存操作
void process_thread_sync_objects(int64_t *sync_object, uint64_t param_2, uint64_t param_3, uint64_t param_4)

{
  uint size_value;
  int64_t object_ptr;
  void *temp_ptr1;
  uint64_t data_size;
  uint64_t stack_value1;
  int64_t stack_value2;
  void *temp_ptr2;
  int64_t stack_value3;
  uint stack_value4;
  uint64_t stack_value5;
  void *temp_ptr3;
  void *temp_ptr4;
  int32_t stack_value6;
  
  stack_value1 = 0;
  stack_value2 = 0;
  object_ptr = *sync_object;
  temp_ptr2 = &EMPTY_OBJECT_TABLE;
  stack_value5 = 0;
  stack_value3 = 0;
  stack_value4 = 0;
  size_value = *(uint *)(object_ptr + 0x10);
  data_size = (uint64_t)size_value;
  if (*(int64_t *)(object_ptr + 8) != 0) {
    allocate_memory_block(&temp_ptr2, data_size, param_3, param_4, 1, 0xfffffffffffffffe);
  }
  if (size_value != 0) {
    // WARNING: Subroutine does not return
    memcpy(stack_value3, *(uint64_t *)(object_ptr + 8), data_size);
  }
  if (stack_value3 != 0) {
    *(int8_t *)(data_size + stack_value3) = 0;
  }
  stack_value4 = size_value;
  stack_value5._4_4_ = *(uint *)(object_ptr + 0x1c);
  allocate_memory_block(&temp_ptr2, 1);
  *(int16_t *)((uint64_t)stack_value4 + stack_value3) = 0x5c;
  stack_value4 = 1;
  create_string_buffer(&temp_ptr2, &temp_ptr3, param_3);
  temp_ptr2 = &EMPTY_OBJECT_TABLE;
  if (stack_value3 != 0) {
    // WARNING: Subroutine does not return
    cleanup_memory_allocation();
  }
  stack_value3 = 0;
  stack_value5 = (uint64_t)stack_value5._4_4_ << 0x20;
  temp_ptr2 = &GLOBAL_STRING_TABLE;
  temp_ptr1 = &DEFAULT_STRING_PTR;
  if (temp_ptr4 != (void *)0x0) {
    temp_ptr1 = temp_ptr4;
  }
  initialize_string_object(&stack_value1, temp_ptr1, &GLOBAL_FORMAT_STRING, param_4, 0);
  process_string_data(param_2, &stack_value1);
  if (stack_value2 != 0) {
    fclose();
    stack_value2 = 0;
    LOCK();
    GLOBAL_FILE_COUNTER = GLOBAL_FILE_COUNTER + -1;
    UNLOCK();
  }
  (**(code **)(**(int64_t **)sync_object[1] + 0x40))(*(int64_t **)sync_object[1], &temp_ptr3);
  temp_ptr3 = &EMPTY_OBJECT_TABLE;
  if (temp_ptr4 != (void *)0x0) {
    // WARNING: Subroutine does not return
    cleanup_memory_allocation();
  }
  temp_ptr4 = (void *)0x0;
  stack_value6 = 0;
  temp_ptr3 = &GLOBAL_STRING_TABLE;
  if (stack_value2 != 0) {
    fclose();
    LOCK();
    GLOBAL_FILE_COUNTER = GLOBAL_FILE_COUNTER + -1;
    UNLOCK();
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x0001800665ec)
// WARNING: Removing unreachable block (ram,0x0001800665f5)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数：处理错误报告和调试信息
void process_error_report(uint64_t param_1, uint64_t param_2, char debug_flag, char crash_flag,
                         uint64_t param_5)

{
  char is_debugger_present;
  int user_choice;
  int32_t message_result;
  int option_index;
  uint64_t temp_value1;
  uint64_t memory_usage;
  int8_t stack_buffer1 [32];
  void *temp_ptr1;
  void *temp_ptr2;
  void *temp_ptr3;
  void *temp_ptr4;
  int64_t stack_value1;
  int32_t stack_value2;
  uint64_t stack_value3;
  void *temp_ptr5;
  int64_t stack_value4;
  int32_t stack_value5;
  void *temp_ptr6;
  void *temp_ptr7;
  int32_t stack_value6;
  uint64_t stack_value7;
  void *temp_ptr8;
  void *temp_ptr9;
  int32_t stack_value8;
  uint64_t stack_value9;
  void *temp_ptr10;
  int64_t stack_value10;
  int32_t stack_value11;
  void *temp_ptr11;
  int64_t stack_value12;
  int32_t stack_value13;
  void *temp_ptr12;
  int64_t stack_value14;
  int32_t stack_value15;
  void *temp_ptr13;
  void *temp_ptr14;
  int32_t stack_value16;
  uint64_t stack_value17;
  void **temp_ptr15;
  int32_t stack_buffer2 [14];
  uint64_t process_memory;
  uint64_t thread_memory;
  
  stack_value17 = 0xfffffffffffffffe;
  thread_memory = GLOBAL_MEMORY_BASE ^ (uint64_t)stack_buffer1;
  is_debugger_present = (**(code **)**(uint64_t **)(GLOBAL_DEBUG_HANDLE + 0x18))();
  option_index = 0;
  if (is_debugger_present != '\0') {
    create_error_message(&temp_ptr4, &ERROR_MESSAGE_TABLE);
    show_error_dialog(&temp_ptr4, 0);
    temp_ptr4 = &EMPTY_OBJECT_TABLE;
    if (stack_value1 != 0) {
      // WARNING: Subroutine does not return
      cleanup_memory_allocation();
    }
    stack_value1 = 0;
    stack_value3 = (uint64_t)stack_value3._4_4_ << 0x20;
    temp_ptr4 = &GLOBAL_STRING_TABLE;
    goto ERROR_HANDLER;
  }
  if (((GLOBAL_ERROR_FLAG1 != '\0') || (GLOBAL_ERROR_FLAG2 != '\0')) ||
     (*(int *)(GLOBAL_CONFIG_BASE + 0x10e0) == 1)) {
    log_system_error(GLOBAL_LOG_HANDLE, 5, 3, &ERROR_MESSAGE_1);
    flush_error_log();
    goto ERROR_HANDLER;
  }
  if ((debug_flag == '\0') && (GLOBAL_DEBUG_FLAG == '\0')) {
    if (((GLOBAL_CRASH_FLAG == '\0') || (user_choice = IsDebuggerPresent(), user_choice != 0)) &&
       (GLOBAL_SILENT_FLAG == '\0')) {
      message_result = MessageBoxA(0, &ERROR_DIALOG_TITLE, &ERROR_DIALOG_MESSAGE, 0x40004);
      switch(message_result) {
      case 1:
        break;
      default:
        option_index = 1;
        break;
      case 4:
        option_index = 2;
        break;
      case 5:
        option_index = 3;
        break;
      case 6:
        option_index = 4;
        break;
      case 7:
        option_index = 5;
      }
      if (option_index == 4) goto CRASH_HANDLER;
    }
    else if (*(char *)(GLOBAL_LOG_HANDLE + 0x18) != '\0') {
      temp_ptr3 = &ERROR_DIALOG_TITLE;
      temp_ptr2 = &ERROR_DIALOG_MESSAGE;
      temp_ptr1 = &ERROR_DIALOG_DETAILS;
      show_detailed_error(GLOBAL_LOG_HANDLE, 3, 0xffffffff00000000, 0xd);
    }
    log_system_error(GLOBAL_LOG_HANDLE, 5, 3, &ERROR_MESSAGE_2);
  }
  else {
CRASH_HANDLER:
    initialize_crash_report(&temp_ptr5);
    temp_value1 = create_error_message(&temp_ptr9, &CRASH_REPORT_DATA);
    option_index = process_crash_data(&temp_ptr5, temp_value1);
    temp_ptr9 = &EMPTY_OBJECT_TABLE;
    if (stack_value10 != 0) {
      // WARNING: Subroutine does not return
      cleanup_memory_allocation();
    }
    stack_value10 = 0;
    stack_value11 = 0;
    temp_ptr9 = &GLOBAL_STRING_TABLE;
    format_crash_report(&temp_ptr5, &temp_ptr7, option_index + 7, 0xffffffff);
    temp_ptr4 = &EMPTY_OBJECT_TABLE;
    stack_value3 = 0;
    stack_value1 = 0;
    stack_value2 = 0;
    temp_ptr8 = &EMPTY_OBJECT_TABLE;
    stack_value9 = 0;
    temp_ptr9 = (void *)0x0;
    stack_value8 = 0;
    temp_ptr6 = &EMPTY_OBJECT_TABLE;
    stack_value7 = 0;
    temp_ptr7 = (void *)0x0;
    stack_value6 = 0;
    memory_usage = get_system_memory_info();
    format_memory_usage(&temp_ptr8, &MEMORY_FORMAT_STRING, memory_usage / 0x100000 & 0xffffffff);
    stack_buffer2[0] = 0x48;
    temp_value1 = GetCurrentProcess();
    option_index = K32GetProcessMemoryInfo(temp_value1, stack_buffer2, 0x48);
    memory_usage = 0;
    if (option_index != 0) {
      memory_usage = process_memory;
    }
    format_memory_usage(&temp_ptr6, &MEMORY_FORMAT_STRING, memory_usage / 0x100000 & 0xffffffff);
    log_system_error(GLOBAL_LOG_HANDLE, 5, 3, &MEMORY_USAGE_1);
    temp_ptr1 = &DEFAULT_STRING_PTR;
    if (temp_ptr9 != (void *)0x0) {
      temp_ptr1 = temp_ptr9;
    }
    log_system_error(GLOBAL_LOG_HANDLE, 5, 3, &MEMORY_USAGE_2);
    temp_ptr1 = &DEFAULT_STRING_PTR;
    if (temp_ptr7 != (void *)0x0) {
      temp_ptr1 = temp_ptr7;
    }
    log_system_error(GLOBAL_LOG_HANDLE, 5, 3, &MEMORY_USAGE_3);
    temp_ptr1 = &DEFAULT_STRING_PTR;
    log_system_error(GLOBAL_LOG_HANDLE, 5, 3, &MEMORY_USAGE_4);
    temp_ptr1 = &DEFAULT_STRING_PTR;
    if (temp_ptr14 != (void *)0x0) {
      temp_ptr1 = temp_ptr14;
    }
    log_system_error(GLOBAL_LOG_HANDLE, 5, 3, &MEMORY_USAGE_5);
    temp_ptr1 = &THREAD_INFO_STRING;
    if (debug_flag != '\0') {
      temp_ptr1 = &DEBUG_INFO_STRING;
    }
    log_system_error(GLOBAL_LOG_HANDLE, 5, 3, &THREAD_INFO_MESSAGE);
    flush_error_log();
    if (((crash_flag == '\0') || (GLOBAL_REPORT_FLAG != '\0')) || (*(int *)(GLOBAL_CONFIG_BASE + 0x1150) != 0))
    {
      log_system_error(GLOBAL_LOG_HANDLE, 5, 3, &CRASH_REPORT_MESSAGE);
      flush_error_log();
    }
    else {
      finalize_crash_report(&temp_ptr5);
    }
    temp_ptr15 = &temp_ptr9;
    temp_value1 = create_report_object(&temp_ptr9, &temp_ptr5);
    submit_error_report(temp_value1);
    attach_debug_info(&temp_ptr5, param_5);
    complete_error_report(&temp_ptr5);
    cleanup_report_object(&temp_ptr9);
    initialize_error_handler(&temp_ptr9);
    initialize_error_handler(&temp_ptr5, &SYSTEM_ERROR_HANDLER);
    combine_error_reports(&temp_ptr11, &temp_ptr13);
    temp_ptr11 = &EMPTY_OBJECT_TABLE;
    if (stack_value12 != 0) {
      // WARNING: Subroutine does not return
      cleanup_memory_allocation();
    }
    stack_value12 = 0;
    stack_value13 = 0;
    temp_ptr11 = &GLOBAL_STRING_TABLE;
    temp_ptr13 = &EMPTY_OBJECT_TABLE;
    if (stack_value14 != 0) {
      // WARNING: Subroutine does not return
      cleanup_memory_allocation();
    }
    stack_value14 = 0;
    stack_value15 = 0;
    temp_ptr13 = &GLOBAL_STRING_TABLE;
    temp_ptr9 = &EMPTY_OBJECT_TABLE;
    if (stack_value10 != 0) {
      // WARNING: Subroutine does not return
      cleanup_memory_allocation();
    }
    stack_value10 = 0;
    stack_value11 = 0;
    temp_ptr9 = &GLOBAL_STRING_TABLE;
    process_error_stack(&temp_ptr5);
    analyze_error_trace(&temp_ptr5);
    generate_error_summary(&temp_ptr5);
    format_error_details(&temp_ptr5, param_2, debug_flag, 0);
    temp_ptr6 = &EMPTY_OBJECT_TABLE;
    if (temp_ptr7 != (void *)0x0) {
      // WARNING: Subroutine does not return
      cleanup_memory_allocation();
    }
    temp_ptr7 = (void *)0x0;
    stack_value7 = stack_value7 & 0xffffffff00000000;
    temp_ptr6 = &GLOBAL_STRING_TABLE;
    temp_ptr8 = &EMPTY_OBJECT_TABLE;
    if (temp_ptr9 != (void *)0x0) {
      // WARNING: Subroutine does not return
      cleanup_memory_allocation();
    }
    temp_ptr9 = (void *)0x0;
    stack_value9 = stack_value9 & 0xffffffff00000000;
    temp_ptr8 = &GLOBAL_STRING_TABLE;
    stack_value1 = 0;
    stack_value3 = stack_value3 & 0xffffffff00000000;
    temp_ptr4 = &GLOBAL_STRING_TABLE;
    temp_ptr7 = &EMPTY_OBJECT_TABLE;
    if (temp_ptr14 != (void *)0x0) {
      // WARNING: Subroutine does not return
      cleanup_memory_allocation();
    }
    temp_ptr14 = (void *)0x0;
    stack_value16 = 0;
    temp_ptr7 = &GLOBAL_STRING_TABLE;
    temp_ptr5 = &EMPTY_OBJECT_TABLE;
    if (stack_value4 != 0) {
      // WARNING: Subroutine does not return
      cleanup_memory_allocation();
    }
    stack_value4 = 0;
    stack_value5 = 0;
    temp_ptr5 = &GLOBAL_STRING_TABLE;
  }
ERROR_HANDLER:
  // WARNING: Subroutine does not return
  cleanup_security_check(thread_memory ^ (uint64_t)stack_buffer1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数：处理系统异常和错误处理
void process_system_exception(uint64_t param_1, uint64_t param_2, char exception_flag, uint64_t param_4,
                             uint64_t param_5)

{
  int64_t temp_ptr1;
  char is_debugger_active;
  int user_response;
  int32_t dialog_result;
  uint64_t *string_ptr;
  int debug_status;
  int64_t memory_ptr;
  void *temp_ptr2;
  uint64_t *temp_ptr3;
  int32_t stack_value1;
  uint64_t stack_value2;
  int8_t stack_buffer1 [72];
  
  is_debugger_active = (**(code **)**(uint64_t **)(GLOBAL_DEBUG_HANDLE + 0x18))();
  if (is_debugger_active == '\0') {
    if ((GLOBAL_ERROR_FLAG1 == '\0') && (*(int *)(GLOBAL_CONFIG_BASE + 0x10e0) != 1)) {
      user_response = 0;
      if ((exception_flag != '\0') || (GLOBAL_DEBUG_FLAG != '\0')) {
EXCEPTION_HANDLER:
        initialize_exception_handler(stack_buffer1);
        temp_ptr2 = &EMPTY_OBJECT_TABLE;
        stack_value2 = 0;
        temp_ptr3 = (uint64_t *)0x0;
        stack_value1 = 0;
        string_ptr = (uint64_t *)allocate_string_buffer(GLOBAL_MEMORY_BASE, 0x10, 0x13);
        *(int8_t *)string_ptr = 0;
        temp_ptr3 = string_ptr;
        dialog_result = get_string_length(string_ptr);
        stack_value2 = CONCAT44(stack_value2._4_4_, dialog_result);
        *string_ptr = 0x73656873617263; // "crashes" (reversed)
        stack_value1 = 7;
        process_string_data(stack_buffer1, &temp_ptr2);
        temp_ptr2 = &EMPTY_OBJECT_TABLE;
        // WARNING: Subroutine does not return
        cleanup_memory_allocation(string_ptr);
      }
      if (((GLOBAL_CRASH_FLAG == '\0') || (debug_status = IsDebuggerPresent(), debug_status != 0)) &&
         (GLOBAL_SILENT_FLAG == '\0')) {
        dialog_result = MessageBoxA(0, &ERROR_DIALOG_TITLE, &ERROR_DIALOG_MESSAGE, 0x40004);
        switch(dialog_result) {
        case 1:
          break;
        default:
          user_response = 1;
          break;
        case 4:
          user_response = 2;
          break;
        case 5:
          user_response = 3;
          break;
        case 6:
          user_response = 4;
          break;
        case 7:
          user_response = 5;
        }
        if (user_response == 4) goto EXCEPTION_HANDLER;
      }
      else if (*(char *)(GLOBAL_LOG_HANDLE + 0x18) != '\0') {
        show_detailed_error(GLOBAL_LOG_HANDLE, 3, 0xffffffff00000000, 0xd, &ERROR_DIALOG_DETAILS,
                            &ERROR_DIALOG_MESSAGE, &ERROR_DIALOG_TITLE);
      }
      log_system_error(GLOBAL_LOG_HANDLE, 5, 3, &ERROR_MESSAGE_2);
    }
    else {
      log_system_error(GLOBAL_LOG_HANDLE, 5, 3, &ERROR_MESSAGE_1);
      flush_error_log();
    }
  }
  else {
    temp_ptr2 = &EMPTY_OBJECT_TABLE;
    stack_value2 = 0;
    temp_ptr3 = (uint64_t *)0x0;
    stack_value1 = 0;
    temp_ptr1 = -1;
    do {
      memory_ptr = temp_ptr1;
      temp_ptr1 = memory_ptr + 1;
    } while (*(char *)(memory_ptr + 0x180c84871) != '\0');
    if ((int)(temp_ptr1 + 1) != 0) {
      debug_status = (int)temp_ptr1 + 2;
      user_response = debug_status;
      if (debug_status < 0x10) {
        user_response = 0x10;
      }
      temp_ptr3 = (uint64_t *)allocate_string_buffer(GLOBAL_MEMORY_BASE, (int64_t)user_response, 0x13);
      *(int8_t *)temp_ptr3 = 0;
      dialog_result = get_string_length(temp_ptr3);
      stack_value2 = CONCAT44(stack_value2._4_4_, dialog_result);
      // WARNING: Subroutine does not return
      memcpy(temp_ptr3, &ERROR_MESSAGE_TABLE, debug_status);
    }
    stack_value1 = 0;
    show_error_dialog(&temp_ptr2, param_5);
    temp_ptr2 = &EMPTY_OBJECT_TABLE;
    if (temp_ptr3 != (uint64_t *)0x0) {
      // WARNING: Subroutine does not return
      cleanup_memory_allocation();
    }
  }
  return;
}





// 函数：空函数 - 占位符
void empty_function_placeholder(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数：处理动态数组扩容
void expand_dynamic_array(int64_t *array_ptr, int64_t element_size, uint64_t param_3, uint64_t param_4)

{
  int64_t current_capacity;
  uint64_t *element_ptr;
  int64_t base_address;
  uint64_t *temp_ptr1;
  uint64_t *temp_ptr2;
  uint64_t *temp_ptr3;
  int64_t growth_factor;
  
  temp_ptr2 = (uint64_t *)array_ptr[1];
  current_capacity = 0;
  if (temp_ptr2 < (uint64_t *)array_ptr[2]) {
    array_ptr[1] = (int64_t)(temp_ptr2 + 4);
    *temp_ptr2 = &GLOBAL_STRING_TABLE;
    temp_ptr2[1] = 0;
    *(int32_t *)(temp_ptr2 + 2) = 0;
    *temp_ptr2 = &EMPTY_OBJECT_TABLE;
    temp_ptr2[3] = 0;
    temp_ptr2[1] = 0;
    *(int32_t *)(temp_ptr2 + 2) = 0;
    *(int32_t *)(temp_ptr2 + 2) = *(int32_t *)(element_size + 0x10);
    temp_ptr2[1] = *(uint64_t *)(element_size + 8);
    *(int32_t *)((int64_t)temp_ptr2 + 0x1c) = *(int32_t *)(element_size + 0x1c);
    *(int32_t *)(temp_ptr2 + 3) = *(int32_t *)(element_size + 0x18);
    *(int32_t *)(element_size + 0x10) = 0;
    *(uint64_t *)(element_size + 8) = 0;
    *(uint64_t *)(element_size + 0x18) = 0;
    return;
  }
  base_address = *array_ptr;
  growth_factor = (int64_t)temp_ptr2 - base_address >> 5;
  if (growth_factor == 0) {
    growth_factor = 1;
  }
  else {
    growth_factor = growth_factor * 2;
    if (growth_factor == 0) goto CAPACITY_CALCULATION;
  }
  current_capacity = allocate_memory_block(GLOBAL_MEMORY_BASE, growth_factor << 5, (char)array_ptr[3], param_4, 0xfffffffffffffffe);
  temp_ptr2 = (uint64_t *)array_ptr[1];
  base_address = *array_ptr;
CAPACITY_CALCULATION:
  temp_ptr1 = (uint64_t *)copy_memory_block(base_address, temp_ptr2, current_capacity);
  *temp_ptr1 = &GLOBAL_STRING_TABLE;
  temp_ptr1[1] = 0;
  *(int32_t *)(temp_ptr1 + 2) = 0;
  *temp_ptr1 = &EMPTY_OBJECT_TABLE;
  temp_ptr1[3] = 0;
  temp_ptr1[1] = 0;
  *(int32_t *)(temp_ptr1 + 2) = 0;
  *(int32_t *)(temp_ptr1 + 2) = *(int32_t *)(element_size + 0x10);
  temp_ptr1[1] = *(uint64_t *)(element_size + 8);
  *(int32_t *)((int64_t)temp_ptr1 + 0x1c) = *(int32_t *)(element_size + 0x1c);
  *(int32_t *)(temp_ptr1 + 3) = *(int32_t *)(element_size + 0x18);
  *(int32_t *)(element_size + 0x10) = 0;
  *(uint64_t *)(element_size + 8) = 0;
  *(uint64_t *)(element_size + 0x18) = 0;
  temp_ptr2 = (uint64_t *)array_ptr[1];
  temp_ptr3 = (uint64_t *)*array_ptr;
  if (temp_ptr3 != temp_ptr2) {
    do {
      (**(code **)*temp_ptr3)(temp_ptr3, 0);
      temp_ptr3 = temp_ptr3 + 4;
    } while (temp_ptr3 != temp_ptr2);
    temp_ptr3 = (uint64_t *)*array_ptr;
  }
  if (temp_ptr3 == (uint64_t *)0x0) {
    *array_ptr = current_capacity;
    array_ptr[1] = (int64_t)(temp_ptr1 + 4);
    array_ptr[2] = growth_factor * 0x20 + current_capacity;
    return;
  }
  // WARNING: Subroutine does not return
  cleanup_memory_allocation(temp_ptr3);
}



// 函数：在内存块中搜索子串
int64_t find_substring_in_memory(int64_t memory_base, uint64_t memory_size, uint64_t param_3, char *search_pattern,
                                   uint64_t pattern_length)

{
  char first_char;
  int compare_result;
  int64_t found_position;
  int64_t search_end;
  
  if (pattern_length <= memory_size) {
    if (pattern_length == 0) {
      return 0;
    }
    first_char = *search_pattern;
    search_end = (memory_base - pattern_length) + memory_size;
    for (found_position = memchr(memory_base, (int)first_char, (search_end + 1) - memory_base); found_position != 0;
        found_position = memchr(found_position + 1, (int)first_char, (search_end + 1) - (found_position + 1))) {
      compare_result = memcmp(found_position, search_pattern, pattern_length);
      if (compare_result == 0) {
        return found_position - memory_base;
      }
    }
  }
  return -1;
}





// 函数：处理范围越界异常
void handle_out_of_range_exception(void)

{
  code *exception_handler;
  
  throw_out_of_range_exception(&OUT_OF_RANGE_MESSAGE);
  exception_handler = (code *)swi(3);
  (*exception_handler)();
  return;
}





// 函数：清理动态数组内存
void cleanup_dynamic_array(int64_t *array_ptr)

{
  uint64_t current_size;
  int64_t base_address;
  int64_t memory_block;
  
  current_size = array_ptr[3];
  if (0xf < current_size) {
    base_address = *array_ptr;
    memory_block = base_address;
    if (0xfff < current_size + 1) {
      memory_block = *(int64_t *)(base_address + -8);
      if (0x1f < (base_address - memory_block) - 8U) {
        // WARNING: Subroutine does not return
        throw_invalid_parameter_exception(base_address - memory_block, current_size + 0x28);
      }
    }
    free(memory_block);
  }
  array_ptr[2] = 0;
  array_ptr[3] = 0xf;
  *(int8_t *)array_ptr = 0;
  return;
}





// 函数：调用数组清理函数
void call_array_cleanup(void)

{
  cleanup_dynamic_array();
  return;
}





// 函数：处理长度错误异常
void handle_length_error_exception(void)

{
  code *exception_handler;
  
  throw_length_error_exception(&LENGTH_ERROR_MESSAGE);
  exception_handler = (code *)swi(3);
  (*exception_handler)();
  return;
}





// 函数：分配内存块
void allocate_memory_block(uint64_t requested_size)

{
  code *exception_handler;
  int allocation_result;
  int64_t allocated_ptr;
  uint64_t aligned_size;
  
  if (0xfff < requested_size) {
    aligned_size = requested_size + 0x27;
    if (aligned_size <= requested_size) {
      aligned_size = 0xffffffffffffffff;
    }
    allocated_ptr = allocate_aligned_memory(aligned_size);
    if (allocated_ptr == 0) {
      // WARNING: Subroutine does not return
      throw_invalid_parameter_exception();
    }
    *(int64_t *)((allocated_ptr + 0x27U & 0xffffffffffffffe0) - 8) = allocated_ptr;
    return;
  }
  if (requested_size == 0) {
    return;
  }
  do {
    allocated_ptr = malloc(requested_size);
    if (allocated_ptr != 0) {
      return;
    }
    allocation_result = call_new_handler(requested_size);
  } while (allocation_result != 0);
  if (requested_size == 0xffffffffffffffff) {
    handle_bad_alloc_exception();
    exception_handler = (code *)swi(3);
    (*exception_handler)();
    return;
  }
  handle_memory_allocation_failure();
  exception_handler = (code *)swi(3);
  (*exception_handler)();
  return;
}





// 函数：释放内存块
void free_memory_block(int64_t memory_ptr, uint64_t block_size)

{
  int64_t actual_ptr;
  
  actual_ptr = memory_ptr;
  if (0xfff < block_size) {
    actual_ptr = *(int64_t *)(memory_ptr + -8);
    if (0x1f < (memory_ptr - actual_ptr) - 8U) {
      // WARNING: Subroutine does not return
      throw_invalid_parameter_exception(memory_ptr - actual_ptr, block_size + 0x27);
    }
  }
  // WARNING: Could not recover jumptable at 0x0001808ffc83. Too many branches
  // WARNING: Treating indirect jump as call
  free(actual_ptr);
  return;
}





// 函数：调整容器大小
void resize_container(uint64_t *container_ptr, uint64_t data_ptr, uint64_t new_size)

{
  uint64_t current_capacity;
  code *exception_handler;
  uint64_t new_memory;
  uint64_t required_capacity;
  uint64_t *base_ptr;
  uint64_t growth_factor;
  
  current_capacity = container_ptr[3];
  if (new_size <= current_capacity) {
    base_ptr = container_ptr;
    if (0xf < current_capacity) {
      base_ptr = (uint64_t *)*container_ptr;
    }
    container_ptr[2] = new_size;
    // WARNING: Subroutine does not return
    move_memory_block(base_ptr);
  }
  if (new_size < 0x8000000000000000) {
    required_capacity = new_size | 0xf;
    growth_factor = 0x7fffffffffffffff;
    if (((required_capacity < 0x8000000000000000) && (current_capacity <= 0x7fffffffffffffff - (current_capacity >> 1))) &&
       (current_capacity = (current_capacity >> 1) + current_capacity, growth_factor = required_capacity, required_capacity < current_capacity)) {
      growth_factor = current_capacity;
    }
    new_memory = allocate_memory_block(growth_factor + 1);
    container_ptr[2] = new_size;
    container_ptr[3] = growth_factor;
    // WARNING: Subroutine does not return
    copy_memory_data(new_memory, data_ptr, new_size);
  }
  handle_length_error_exception();
  exception_handler = (code *)swi(3);
  (*exception_handler)();
  return;
}





// 函数：处理容器扩容
void handle_container_expansion(uint64_t requested_size)

{
  uint64_t aligned_size;
  uint64_t new_memory;
  int64_t container_ptr;
  uint64_t current_capacity;
  uint64_t data_ptr;
  uint64_t new_capacity;
  
  requested_size = requested_size | 0xf;
  if (((requested_size <= current_capacity) && (current_capacity <= current_capacity - (current_capacity >> 1))) &&
     (aligned_size = (current_capacity >> 1) + current_capacity, current_capacity = requested_size, requested_size < aligned_size)) {
    current_capacity = aligned_size;
  }
  new_memory = allocate_memory_block(current_capacity + 1);
  *(uint64_t *)(container_ptr + 0x10) = data_ptr;
  *(uint64_t *)(container_ptr + 0x18) = current_capacity;
  // WARNING: Subroutine does not return
  copy_memory_data(new_memory);
}





// 函数：空函数 - 占位符2
void empty_function_placeholder2(void)

{
  return;
}





// 函数：抛出无效参数异常
void throw_invalid_parameter_exception(void)

{
  // WARNING: Subroutine does not return
  throw_invalid_parameter_exception();
}





// 函数：抛出长度错误异常2
void throw_length_error_exception2(void)

{
  code *exception_handler;
  
  handle_length_error_exception();
  exception_handler = (code *)swi(3);
  (*exception_handler)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数：处理IO完成端口
void process_io_completion_port(int64_t port_handle)

{
  int64_t temp_ptr1;
  int64_t temp_ptr2;
  int completion_status;
  uint64_t temp_value1;
  uint64_t temp_value2;
  int64_t *async_result;
  uint completion_key [2];
  int64_t overlapped_ptr;
  int64_t *async_context;
  int32_t thread_priority1;
  int32_t thread_priority2;
  int32_t thread_priority3;
  int32_t thread_priority4;
  int32_t thread_priority5;
  int32_t thread_priority6;
  int32_t thread_priority7;
  void *temp_ptr3;
  void *temp_ptr4;
  
  temp_value1 = GetCurrentThread();
  SetThreadPriority(temp_value1, 0);
  completion_key[0] = 0;
  overlapped_ptr = 0;
  async_context = 0;
  while( true ) {
    while( true ) {
      completion_status = GetQueuedCompletionStatus
                        (*(uint64_t *)(port_handle + 0x28), completion_key, &overlapped_ptr, &async_context,
                         0xffffffff);
      temp_ptr2 = async_context;
      if (completion_status == 0) break;
      if (overlapped_ptr == -1) {
        return;
      }
      *(int64_t *)(async_context + 0x1c8) =
           *(int64_t *)(async_context + 0x1c8) - (uint64_t)completion_key[0];
      temp_value1 = GLOBAL_IO_HANDLE;
      if (*(int64_t *)(async_context + 0x1c8) < 1) {
        temp_ptr1 = *(int64_t *)(port_handle + 0x20);
        temp_value2 = allocate_thread_context(GLOBAL_MEMORY_BASE, 0x40, 8, 10);
        async_result = (int64_t *)&thread_priority3;
        temp_ptr3 = &ASYNC_CALLBACK_FUNCTION;
        temp_ptr4 = &ASYNC_CONTEXT_DATA;
        thread_priority1 = (int32_t)temp_value1;
        thread_priority2 = (int32_t)((uint64_t)temp_value1 >> 0x20);
        thread_priority3 = thread_priority1;
        thread_priority4 = thread_priority2;
        thread_priority5 = thread_priority3;
        thread_priority6 = thread_priority4;
        thread_priority7 = thread_priority5;
        async_result = (int64_t *)create_async_context(temp_value2, &thread_priority3);
        if (async_result != (int64_t *)0x0) {
          (**(code **)(*async_result + 0x28))(async_result);
        }
        temp_value1 = GLOBAL_ASYNC_MANAGER;
        async_result = async_result;
        if (*(char *)(temp_ptr1 + 0x368) == '\0') {
          async_result[3] = -4;
          (**(code **)(*async_result + 0x28))(async_result);
          process_async_result(temp_value1, &async_result);
        }
        else {
          if (async_result != (int64_t *)0x0) {
            (**(code **)(*async_result + 0x28))(async_result);
          }
          handle_async_completion(temp_value1, &async_result);
        }
        if (async_result != (int64_t *)0x0) {
          (**(code **)(*async_result + 0x38))(async_result);
        }
      }
    }
    completion_status = GetLastError();
    if (completion_status == 0x2df) {
      return;
    }
    if (async_context == 0) break;
    handle_io_error(*(uint64_t *)(port_handle + 0x20));
  }
  // WARNING: Subroutine does not return
  log_system_error(GLOBAL_LOG_HANDLE, &IO_ERROR_MESSAGE, completion_status);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数：处理IO错误
void handle_io_error(uint64_t io_handle, int64_t error_context)

{
  void *error_message_ptr;
  void *default_message_ptr;
  
  error_message_ptr = *(void **)(*(int64_t *)(error_context + 0x1f8) + 0x10);
  default_message_ptr = &DEFAULT_STRING_PTR;
  if (error_message_ptr != (void *)0x0) {
    default_message_ptr = error_message_ptr;
  }
  // WARNING: Subroutine does not return
  log_system_error(GLOBAL_LOG_HANDLE, &IO_ERROR_MESSAGE_2, default_message_ptr);
}





// 函数：调用对象回调函数
void call_object_callback(int64_t object_ptr, uint64_t param_2, uint64_t param_3, uint64_t param_4)

{
  if (*(code **)(object_ptr + 0x10) != (code *)0x0) {
    (**(code **)(object_ptr + 0x10))(object_ptr, 0, 0, param_4, 0xfffffffffffffffe);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数：清理线程池资源
void cleanup_thread_pool_resources(int64_t *pool_ptr)

{
  int *counter_ptr;
  int64_t *temp_ptr1;
  int64_t temp_ptr2;
  int64_t temp_ptr3;
  uint64_t temp_value1;
  uint64_t temp_value2;
  uint64_t *temp_ptr4;
  int64_t *temp_ptr5;
  int thread_status;
  int64_t async_result;
  uint64_t *async_context;
  int64_t stack_value1;
  uint64_t uStack_b8;
  int16_t uStack_b0;
  int8_t uStack_ae;
  int8_t stack_buffer1 [64];
  uint64_t stack_value2;
  uint64_t stack_value3;
  
  stack_value2 = 0xfffffffffffffffe;
  temp_ptr2 = pool_ptr[1];
  thread_status = *(int *)(temp_ptr2 + 0x138) - *(int *)(temp_ptr2 + 0x1d8);
  temp_ptr3 = *(int64_t *)(temp_ptr2 + 0x150);
  temp_ptr5 = (int64_t *)0x0;
  if (temp_ptr3 != 0) {
    temp_value1 = *(uint64_t *)(temp_ptr2 + 0x158);
    temp_value2 = *(uint64_t *)(temp_ptr2 + 0x1e0);
    async_result = *(int64_t *)(temp_ptr2 + 0x140);
    temp_ptr2 = *(int64_t *)(temp_ptr2 + 0x1f0);
    if (temp_ptr3 - 2U < 2) {
      temp_ptr5 = (int64_t *)allocate_thread_context(GLOBAL_MEMORY_BASE, 0x10, 8, 3);
      *temp_ptr5 = (int64_t)&THREAD_POOL_CONFIG;
      *(bool *)(temp_ptr5 + 1) = temp_ptr3 == 3;
    }
    (**(code **)(*temp_ptr5 + 0x18))(temp_ptr5, stack_buffer1, thread_status + temp_ptr2, async_result, temp_value2, temp_value1);
    // WARNING: Subroutine does not return
    cleanup_memory_allocation(temp_ptr5);
  }
  uStack_ae = 3;
  temp_ptr2 = pool_ptr[1];
  uStack_b8 = *(uint64_t *)(temp_ptr2 + 0x140);
  stack_value1 = (int64_t)thread_status + *(int64_t *)(temp_ptr2 + 0x1f0);
  uStack_b0 = 1;
  async_result = stack_value1;
  (**(code **)(temp_ptr2 + 0x180))(&stack_value1, *(int64_t *)(temp_ptr2 + 0x1f8) + 8);
  if (((char)uStack_b0 == '\0') && (stack_value1 != 0)) {
    // WARNING: Subroutine does not return
    cleanup_memory_allocation();
  }
  LOCK();
  counter_ptr = (int *)(*(int64_t *)(pool_ptr[1] + 0x1f8) + 0x120);
  *counter_ptr = *counter_ptr + -1;
  UNLOCK();
  async_result = *(int64_t *)(pool_ptr[1] + 0x1a8);
  temp_ptr2 = *pool_ptr;
  process_async_result(temp_ptr2 + 0x10, &async_result);
  thread_status = _Cnd_signal(temp_ptr2 + 0x278);
  if (thread_status != 0) {
    throw_thread_error_exception(thread_status);
  }
  async_context = *(uint64_t **)(pool_ptr[1] + 0x1b0);
  temp_ptr2 = *pool_ptr;
  process_async_result(temp_ptr2 + 0x10, &async_context);
  thread_status = _Cnd_signal(temp_ptr2 + 0x278);
  if (thread_status != 0) {
    throw_thread_error_exception(thread_status);
  }
  temp_ptr2 = *(int64_t *)(pool_ptr[1] + 0x1c0);
  if (*(int64_t *)(pool_ptr[1] + 0x1b8) != 0) {
    // WARNING: Subroutine does not return
    cleanup_memory_allocation();
  }
  if (temp_ptr2 != 0) {
    // WARNING: Subroutine does not return
    cleanup_memory_allocation(temp_ptr2);
  }
  temp_ptr2 = pool_ptr[1];
  if (*(int64_t *)(temp_ptr2 + 0x150) == 0) {
    if (*(int64_t *)(temp_ptr2 + 0x148) == 0) {
      temp_ptr5 = *(int64_t **)(temp_ptr2 + 0x140);
    }
  }
  else {
    temp_ptr5 = *(int64_t **)(temp_ptr2 + 0x140);
    if (*(int64_t *)(temp_ptr2 + 0x148) == 0) {
      temp_ptr5 = (int64_t *)((int64_t)temp_ptr5 + *(int64_t *)(temp_ptr2 + 0x158));
    }
  }
  LOCK();
  temp_ptr1 = (int64_t *)(*(int64_t *)(*pool_ptr + 8) + 0x3f0);
  *temp_ptr1 = *temp_ptr1 - (int64_t)temp_ptr5;
  UNLOCK();
  LOCK();
  counter_ptr = (int *)(*(int64_t *)(*pool_ptr + 8) + 0x3f8);
  *counter_ptr = *counter_ptr + -1;
  UNLOCK();
  temp_ptr3 = *pool_ptr;
  temp_ptr4 = (uint64_t *)pool_ptr[1];
  temp_ptr2 = temp_ptr3 + 0x200380;
  stack_value3 = 0x180068808;
  async_result = temp_ptr2;
  async_context = temp_ptr4;
  thread_status = _Mtx_lock(temp_ptr2);
  if (thread_status != 0) {
    stack_value3 = 0x180068815;
    throw_thread_error_exception(thread_status);
  }
  stack_value3 = 0x18006881f;
  cleanup_thread_context(temp_ptr4 + 4);
  *temp_ptr4 = *(uint64_t *)(temp_ptr3 + 0x200378);
  *(uint64_t **)(temp_ptr3 + 0x200378) = temp_ptr4;
  stack_value3 = 0x18006883a;
  thread_status = _Mtx_unlock(temp_ptr2);
  if (thread_status != 0) {
    stack_value3 = 0x180068847;
    throw_thread_error_exception(thread_status);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数：初始化全局对象
void initialize_global_object(uint64_t *object_ptr)

{
  int8_t stack_buffer1 [48];
  uint64_t *temp_ptr1;
  uint64_t stack_value1;
  uint64_t *temp_ptr2;
  uint64_t security_cookie;
  
  stack_value1 = 0xfffffffffffffffe;
  security_cookie = GLOBAL_MEMORY_BASE ^ (uint64_t)stack_buffer1;
  temp_ptr2 = object_ptr;
  initialize_security_system();
  *object_ptr = &GLOBAL_OBJECT_TABLE;
  temp_ptr1 = object_ptr + 0x6e;
  // WARNING: Subroutine does not return
  memset(temp_ptr1, 0, 0x200000);
}





// 函数：销毁互斥锁
void destroy_mutex(void)

{
  _Mtx_destroy_in_situ();
  return;
}





// 函数：销毁互斥锁2
void destroy_mutex2(void)

{
  _Mtx_destroy_in_situ();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address