#include "TaleWorlds.Native.Split.h"

// 01_initialization_part035.c - 初始化模块第35部分
// 本文件包含23个函数，主要负责字符串处理、内存管理、线程同步等初始化功能

/**
 * 处理字符串缓冲区和路径操作
 * @param context 上下文指针
 * @param param2 参数2
 * @param param3 参数3
 * @param param4 参数4
 */
void process_string_buffer(longlong *context, undefined8 param2, undefined8 param3, undefined8 param4)
{
  uint buffer_size;
  longlong context_ptr;
  undefined *string_ptr;
  ulonglong data_length;
  undefined8 temp_stack_88;
  longlong temp_stack_80;
  undefined *temp_stack_70;
  longlong temp_stack_68;
  uint temp_stack_60;
  undefined8 temp_stack_58;
  undefined *temp_stack_50;
  undefined *temp_stack_48;
  undefined4 temp_stack_38;
  
  temp_stack_88 = 0;
  temp_stack_80 = 0;
  context_ptr = *context;
  temp_stack_70 = &EMPTY_STRING_CONST;
  temp_stack_58 = 0;
  temp_stack_68 = 0;
  temp_stack_60 = 0;
  buffer_size = *(uint *)(context_ptr + 0x10);
  data_length = (ulonglong)buffer_size;
  if (*(longlong *)(context_ptr + 8) != 0) {
    allocate_string_memory(&temp_stack_70, data_length, param3, param4, 1, 0xfffffffffffffffe);
  }
  if (buffer_size != 0) {
    // 复制字符串数据
    memcpy(temp_stack_68, *(undefined8 *)(context_ptr + 8), data_length);
  }
  if (temp_stack_68 != 0) {
    // 添加字符串终止符
    *(undefined1 *)(data_length + temp_stack_68) = 0;
  }
  temp_stack_60 = buffer_size;
  temp_stack_58._4_4_ = *(uint *)(context_ptr + 0x1c);
  allocate_string_memory(&temp_stack_70, 1);
  *(undefined2 *)((ulonglong)temp_stack_60 + temp_stack_68) = 0x5c; // 反斜杠
  temp_stack_60 = 1;
  format_string_path(&temp_stack_70, &temp_stack_50, param3);
  temp_stack_70 = &EMPTY_STRING_CONST;
  if (temp_stack_68 != 0) {
    cleanup_string_buffers();
  }
  temp_stack_68 = 0;
  temp_stack_58 = (ulonglong)temp_stack_58._4_4_ << 0x20;
  temp_stack_70 = &PATH_SEPARATOR_CONST;
  temp_stack_48 = &DEFAULT_STRING_CONST;
  if (temp_stack_48 != (undefined *)0x0) {
    temp_stack_48 = temp_stack_48;
  }
  build_path_string(&temp_stack_88, temp_stack_48, &FORMAT_STRING_CONST, param4, 0);
  log_debug_message(param2, &temp_stack_88);
  if (temp_stack_80 != 0) {
    fclose();
    temp_stack_80 = 0;
    LOCK();
    FILE_HANDLE_COUNT = FILE_HANDLE_COUNT + -1;
    UNLOCK();
  }
  // 调用回调函数
  (**(code **)(**(longlong **)context[1] + 0x40))(*(longlong **)context[1], &temp_stack_50);
  temp_stack_50 = &EMPTY_STRING_CONST;
  if (temp_stack_48 != (undefined *)0x0) {
    cleanup_string_buffers();
  }
  temp_stack_48 = (undefined *)0x0;
  temp_stack_38 = 0;
  temp_stack_50 = &PATH_SEPARATOR_CONST;
  if (temp_stack_80 != 0) {
    fclose();
    LOCK();
    FILE_HANDLE_COUNT = FILE_HANDLE_COUNT + -1;
    UNLOCK();
  }
  return;
}

/**
 * 显示错误对话框并处理异常情况
 * @param param1 参数1
 * @param param2 参数2
 * @param show_dialog 是否显示对话框
 * @param param4 参数4
 * @param param5 参数5
 */
void show_error_dialog(undefined8 param1, undefined8 param2, char show_dialog, char param4,
                      undefined8 param5)
{
  char is_debug_mode;
  int dialog_result;
  undefined4 message_box_result;
  int user_choice;
  undefined8 temp_var;
  ulonglong memory_info;
  undefined1 temp_buffer[32];
  undefined *temp_stack_1d8;
  undefined *temp_stack_1d0;
  undefined *temp_stack_1c8;
  undefined *temp_stack_1b8;
  longlong temp_stack_1b0;
  undefined4 temp_stack_1a8;
  undefined8 temp_stack_1a0;
  undefined *temp_stack_198;
  longlong temp_stack_190;
  undefined4 temp_stack_180;
  undefined *temp_stack_178;
  undefined *temp_stack_170;
  undefined4 temp_stack_168;
  ulonglong temp_stack_160;
  undefined *temp_stack_158;
  undefined *temp_stack_150;
  undefined4 temp_stack_148;
  ulonglong temp_stack_140;
  undefined *temp_stack_138;
  longlong temp_stack_130;
  undefined4 temp_stack_120;
  undefined *temp_stack_110;
  longlong temp_stack_108;
  undefined4 temp_stack_f8;
  undefined *temp_stack_f0;
  longlong temp_stack_e8;
  undefined4 temp_stack_d8;
  undefined *temp_stack_d0;
  undefined *temp_stack_c8;
  undefined4 temp_stack_b8;
  undefined8 temp_stack_b0;
  undefined **temp_stack_a8;
  undefined4 temp_buffer_98[14];
  ulonglong temp_stack_60;
  ulonglong temp_stack_48;
  
  temp_stack_b0 = 0xfffffffffffffffe;
  temp_stack_48 = STACK_COOKIE ^ (ulonglong)temp_buffer;
  is_debug_mode = (**(code **)**(undefined8 **)(GLOBAL_STATE_PTR + 0x18))();
  user_choice = 0;
  if (is_debug_mode != '\0') {
    init_error_handler(&temp_stack_1b8, &DEBUG_FLAG_CONST);
    setup_error_display(&temp_stack_1b8, 0);
    temp_stack_1b8 = &EMPTY_STRING_CONST;
    if (temp_stack_1b0 != 0) {
      cleanup_string_buffers();
    }
    temp_stack_1b0 = 0;
    temp_stack_1a0 = (ulonglong)temp_stack_1a0._4_4_ << 0x20;
    temp_stack_1b8 = &PATH_SEPARATOR_CONST;
    goto display_error_message;
  }
  if (((ERROR_REPORT_ENABLED != '\0') || (CRASH_REPORT_ENABLED != '\0')) ||
     (*(int *)(GLOBAL_CONFIG_PTR + 0x10e0) == 1)) {
    log_system_error(GLOBAL_LOG_HANDLE, 5, 3, &ERROR_MESSAGE_CONST);
    flush_error_log();
    goto display_error_message;
  }
  if ((show_dialog == '\0') && (SILENT_MODE == '\0')) {
    if (((AUTO_RECOVERY_MODE == '\0') || (dialog_result = IsDebuggerPresent(), dialog_result != 0)) &&
       (ERROR_SUPPRESSION == '\0')) {
      message_box_result = MessageBoxA(0, &ERROR_TITLE_CONST, &ERROR_CONTENT_CONST, 0x40004);
      switch(message_box_result) {
      case 1: // IDOK
        break;
      default:
        user_choice = 1;
        break;
      case 4: // IDRETRY
        user_choice = 2;
        break;
      case 5: // IDIGNORE
        user_choice = 3;
        break;
      case 6: // IDYES
        user_choice = 4;
        break;
      case 7: // IDNO
        user_choice = 5;
      }
      if (user_choice == 4) goto show_crash_dialog;
    }
    else if (*(char *)(GLOBAL_LOG_HANDLE + 0x18) != '\0') {
      temp_stack_1c8 = &ERROR_TITLE_CONST;
      temp_stack_1d0 = &ERROR_CONTENT_CONST;
      temp_stack_1d8 = &ERROR_DETAILS_CONST;
      show_custom_error_dialog(GLOBAL_LOG_HANDLE, 3, 0xffffffff00000000, 0xd);
    }
    log_system_error(GLOBAL_LOG_HANDLE, 5, 3, &RECOVERY_MESSAGE_CONST);
  }
  else {
show_crash_dialog:
    collect_system_info(&temp_stack_198);
    temp_var = get_system_version_string(&temp_stack_138, &SYSTEM_INFO_CONST);
    user_choice = compare_system_versions(&temp_stack_198, temp_var);
    temp_stack_138 = &EMPTY_STRING_CONST;
    if (temp_stack_130 != 0) {
      cleanup_string_buffers();
    }
    temp_stack_130 = 0;
    temp_stack_120 = 0;
    temp_stack_138 = &PATH_SEPARATOR_CONST;
    format_error_report(&temp_stack_198, &temp_stack_d0, user_choice + 7, 0xffffffff);
    temp_stack_1b8 = &EMPTY_STRING_CONST;
    temp_stack_1a0 = 0;
    temp_stack_1b0 = 0;
    temp_stack_1a8 = 0;
    temp_stack_158 = &EMPTY_STRING_CONST;
    temp_stack_140 = 0;
    temp_stack_150 = (undefined *)0x0;
    temp_stack_148 = 0;
    temp_stack_178 = &EMPTY_STRING_CONST;
    temp_stack_160 = 0;
    temp_stack_170 = (undefined *)0x0;
    temp_stack_168 = 0;
    memory_info = get_available_memory();
    format_memory_usage(&temp_stack_158, &MEMORY_INFO_CONST, memory_info / 0x100000 & 0xffffffff);
    temp_buffer_98[0] = 0x48;
    temp_var = GetCurrentProcess();
    user_choice = K32GetProcessMemoryInfo(temp_var, temp_buffer_98, 0x48);
    memory_info = 0;
    if (user_choice != 0) {
      memory_info = temp_stack_60;
    }
    format_memory_usage(&temp_stack_178, &MEMORY_INFO_CONST, memory_info / 0x100000 & 0xffffffff);
    log_system_error(GLOBAL_LOG_HANDLE, 5, 3, &MEMORY_USAGE_CONST);
    temp_stack_1d8 = &DEFAULT_STRING_CONST;
    if (temp_stack_150 != (undefined *)0x0) {
      temp_stack_1d8 = temp_stack_150;
    }
    log_system_error(GLOBAL_LOG_HANDLE, 5, 3, &THREAD_INFO_CONST);
    temp_stack_1d8 = &DEFAULT_STRING_CONST;
    if (temp_stack_170 != (undefined *)0x0) {
      temp_stack_1d8 = temp_stack_170;
    }
    log_system_error(GLOBAL_LOG_HANDLE, 5, 3, &MODULE_INFO_CONST);
    temp_stack_1d8 = &DEFAULT_STRING_CONST;
    log_system_error(GLOBAL_LOG_HANDLE, 5, 3, &CALL_STACK_CONST);
    temp_stack_1d8 = &DEFAULT_STRING_CONST;
    if (temp_stack_c8 != (undefined *)0x0) {
      temp_stack_1d8 = temp_stack_c8;
    }
    log_system_error(GLOBAL_LOG_HANDLE, 5, 3, &EXCEPTION_INFO_CONST);
    temp_stack_1d8 = &EXCEPTION_TYPE_CONST;
    if (show_dialog != '\0') {
      temp_stack_1d8 = &EXCEPTION_CODE_CONST;
    }
    log_system_error(GLOBAL_LOG_HANDLE, 5, 3, &ERROR_DETAILS_CONST);
    flush_error_log();
    if (((param4 == '\0') || (VERBOSE_LOGGING != '\0')) || (*(int *)(GLOBAL_CONFIG_PTR + 0x1150) != 0))
    {
      log_system_error(GLOBAL_LOG_HANDLE, 5, 3, &DEBUG_INFO_CONST);
      flush_error_log();
    }
    else {
      save_error_report(&temp_stack_198);
    }
    temp_stack_a8 = &temp_stack_138;
    temp_var = format_error_summary(&temp_stack_138, &temp_stack_198);
    display_error_summary(temp_var);
    send_error_report(&temp_stack_198, param5);
    cleanup_error_data(&temp_stack_198);
    init_error_display(&temp_stack_138, &temp_stack_f0, &ERROR_HANDLE_CONST);
    init_error_display(&temp_stack_198, &temp_stack_110, &ERROR_HANDLE_CONST);
    merge_error_reports(&temp_stack_110, &temp_stack_f0);
    temp_stack_110 = &EMPTY_STRING_CONST;
    if (temp_stack_108 != 0) {
      cleanup_string_buffers();
    }
    temp_stack_108 = 0;
    temp_stack_f8 = 0;
    temp_stack_110 = &PATH_SEPARATOR_CONST;
    temp_stack_f0 = &EMPTY_STRING_CONST;
    if (temp_stack_e8 != 0) {
      cleanup_string_buffers();
    }
    temp_stack_e8 = 0;
    temp_stack_d8 = 0;
    temp_stack_f0 = &PATH_SEPARATOR_CONST;
    temp_stack_138 = &EMPTY_STRING_CONST;
    if (temp_stack_130 != 0) {
      cleanup_string_buffers();
    }
    temp_stack_130 = 0;
    temp_stack_120 = 0;
    temp_stack_138 = &PATH_SEPARATOR_CONST;
    cleanup_error_data(&temp_stack_198);
    cleanup_error_buffers(&temp_stack_198);
    cleanup_temp_buffers(&temp_stack_198);
    process_error_data(&temp_stack_198, param2, show_dialog, 0);
    temp_stack_178 = &EMPTY_STRING_CONST;
    if (temp_stack_170 != (undefined *)0x0) {
      cleanup_string_buffers();
    }
    temp_stack_170 = (undefined *)0x0;
    temp_stack_160 = temp_stack_160 & 0xffffffff00000000;
    temp_stack_178 = &PATH_SEPARATOR_CONST;
    temp_stack_158 = &EMPTY_STRING_CONST;
    if (temp_stack_150 != (undefined *)0x0) {
      cleanup_string_buffers();
    }
    temp_stack_150 = (undefined *)0x0;
    temp_stack_140 = temp_stack_140 & 0xffffffff00000000;
    temp_stack_158 = &PATH_SEPARATOR_CONST;
    temp_stack_1b0 = 0;
    temp_stack_1a0 = temp_stack_1a0 & 0xffffffff00000000;
    temp_stack_1b8 = &PATH_SEPARATOR_CONST;
    temp_stack_d0 = &EMPTY_STRING_CONST;
    if (temp_stack_c8 != (undefined *)0x0) {
      cleanup_string_buffers();
    }
    temp_stack_c8 = (undefined *)0x0;
    temp_stack_b8 = 0;
    temp_stack_d0 = &PATH_SEPARATOR_CONST;
    temp_stack_198 = &EMPTY_STRING_CONST;
    if (temp_stack_190 != 0) {
      cleanup_string_buffers();
    }
    temp_stack_190 = 0;
    temp_stack_180 = 0;
    temp_stack_198 = &PATH_SEPARATOR_CONST;
  }
display_error_message:
  // 执行栈展开和清理
  cleanup_stack_frame(temp_stack_48 ^ (ulonglong)temp_buffer);
}

/**
 * 初始化错误处理系统
 * @param param1 参数1
 * @param param2 参数2
 * @param param3 参数3
 * @param param4 参数4
 * @param param5 参数5
 */
void init_error_system(undefined8 param1, undefined8 param2, char param3, undefined8 param4,
                      undefined8 param5)
{
  longlong temp_var1;
  char is_debug_mode;
  int temp_var2;
  undefined4 message_result;
  undefined8 *string_ptr;
  int temp_var3;
  longlong temp_var4;
  undefined8 *temp_ptr;
  int dialog_choice;
  undefined *temp_stack_a0;
  undefined8 *temp_stack_98;
  undefined4 temp_stack_90;
  undefined8 temp_stack_88;
  undefined1 temp_buffer[72];
  
  is_debug_mode = (**(code **)**(undefined8 **)(GLOBAL_STATE_PTR + 0x18))();
  if (is_debug_mode == '\0') {
    if ((ERROR_REPORT_ENABLED == '\0') && (*(int *)(GLOBAL_CONFIG_PTR + 0x10e0) != 1)) {
      dialog_choice = 0;
      if ((param3 != '\0') || (SILENT_MODE != '\0')) {
show_crash_report:
        collect_crash_data(temp_buffer);
        temp_stack_a0 = &EMPTY_STRING_CONST;
        temp_stack_88 = 0;
        temp_stack_98 = (undefined8 *)0x0;
        temp_stack_90 = 0;
        string_ptr = (undefined8 *)allocate_error_buffer(GLOBAL_MEMORY_POOL, 0x10, 0x13);
        *(undefined1 *)string_ptr = 0;
        temp_stack_98 = string_ptr;
        message_result = get_error_code(string_ptr);
        temp_stack_88 = CONCAT44(temp_stack_88._4_4_, message_result);
        *string_ptr = 0x73656873617263; // "crashes"
        temp_stack_90 = 7;
        format_crash_report(temp_buffer, &temp_stack_a0);
        temp_stack_a0 = &EMPTY_STRING_CONST;
        cleanup_string_buffers(string_ptr);
      }
      if (((AUTO_RECOVERY_MODE == '\0') || (temp_var3 = IsDebuggerPresent(), temp_var3 != 0)) &&
         (ERROR_SUPPRESSION == '\0')) {
        message_result = MessageBoxA(0, &ERROR_TITLE_CONST, &ERROR_CONTENT_CONST, 0x40004);
        switch(message_result) {
        case 1: // IDOK
          break;
        default:
          dialog_choice = 1;
          break;
        case 4: // IDRETRY
          dialog_choice = 2;
          break;
        case 5: // IDIGNORE
          dialog_choice = 3;
          break;
        case 6: // IDYES
          dialog_choice = 4;
          break;
        case 7: // IDNO
          dialog_choice = 5;
        }
        if (dialog_choice == 4) goto show_crash_report;
      }
      else if (*(char *)(GLOBAL_LOG_HANDLE + 0x18) != '\0') {
        show_custom_error_dialog(GLOBAL_LOG_HANDLE, 3, 0xffffffff00000000, 0xd, &ERROR_DETAILS_CONST,
                                &ERROR_CONTENT_CONST, &ERROR_TITLE_CONST);
      }
      log_system_error(GLOBAL_LOG_HANDLE, 5, 3, &RECOVERY_MESSAGE_CONST);
    }
    else {
      log_system_error(GLOBAL_LOG_HANDLE, 5, 3, &ERROR_MESSAGE_CONST);
      flush_error_log();
    }
  }
  else {
    temp_stack_a0 = &EMPTY_STRING_CONST;
    temp_stack_88 = 0;
    temp_stack_98 = (undefined8 *)0x0;
    temp_stack_90 = 0;
    temp_var1 = -1;
    do {
      temp_var4 = temp_var1;
      temp_var1 = temp_var4 + 1;
    } while (*(char *)(temp_var4 + DEBUG_STRING_PTR) != '\0');
    if ((int)(temp_var4 + 1) != 0) {
      temp_var3 = (int)temp_var4 + 2;
      dialog_choice = temp_var3;
      if (temp_var3 < 0x10) {
        dialog_choice = 0x10;
      }
      temp_stack_98 = (undefined8 *)allocate_error_buffer(GLOBAL_MEMORY_POOL, (longlong)dialog_choice, 0x13);
      *(undefined1 *)temp_stack_98 = 0;
      message_result = get_error_code(temp_stack_98);
      temp_stack_88 = CONCAT44(temp_stack_88._4_4_, message_result);
      memcpy(temp_stack_98, &DEBUG_STRING_CONST, temp_var3);
    }
    temp_stack_90 = 0;
    setup_error_display(&temp_stack_a0, param5);
    temp_stack_a0 = &EMPTY_STRING_CONST;
    if (temp_stack_98 != (undefined8 *)0x0) {
      cleanup_string_buffers();
    }
  }
  return;
}

/**
 * 空函数 - 占位符
 */
void empty_function_placeholder(void)
{
  return;
}

/**
 * 向字符串容器添加元素
 * @param container 字符串容器指针
 * @param element 元素指针
 * @param param3 参数3
 * @param param4 参数4
 */
void add_to_string_container(longlong *container, longlong element, undefined8 param3, undefined8 param4)
{
  longlong container_start;
  undefined8 *element_ptr;
  longlong container_data;
  undefined8 *temp_ptr;
  undefined8 *next_ptr;
  longlong new_size;
  
  element_ptr = (undefined8 *)container[1];
  container_start = 0;
  if (element_ptr < (undefined8 *)container[2]) {
    container[1] = (longlong)(element_ptr + 4);
    *element_ptr = &PATH_SEPARATOR_CONST;
    element_ptr[1] = 0;
    *(undefined4 *)(element_ptr + 2) = 0;
    *element_ptr = &EMPTY_STRING_CONST;
    element_ptr[3] = 0;
    element_ptr[1] = 0;
    *(undefined4 *)(element_ptr + 2) = 0;
    *(undefined4 *)(element_ptr + 2) = *(undefined4 *)(element + 0x10);
    element_ptr[1] = *(undefined8 *)(element + 8);
    *(undefined4 *)((longlong)element_ptr + 0x1c) = *(undefined4 *)(element + 0x1c);
    *(undefined4 *)(element_ptr + 3) = *(undefined4 *)(element + 0x18);
    *(undefined4 *)(element + 0x10) = 0;
    *(undefined8 *)(element + 8) = 0;
    *(undefined8 *)(element + 0x18) = 0;
    return;
  }
  container_data = *container;
  new_size = (longlong)element_ptr - container_data >> 5;
  if (new_size == 0) {
    new_size = 1;
  }
  else {
    new_size = new_size * 2;
    if (new_size == 0) goto resize_container;
  }
  container_start = allocate_container_memory(GLOBAL_MEMORY_POOL, new_size << 5, (char)container[3], param4, 0xfffffffffffffffe);
  element_ptr = (undefined8 *)container[1];
  container_data = *container;
resize_container:
  temp_ptr = (undefined8 *)reallocate_memory(container_data, element_ptr, container_start);
  *temp_ptr = &PATH_SEPARATOR_CONST;
  temp_ptr[1] = 0;
  *(undefined4 *)(temp_ptr + 2) = 0;
  *temp_ptr = &EMPTY_STRING_CONST;
  temp_ptr[3] = 0;
  temp_ptr[1] = 0;
  *(undefined4 *)(temp_ptr + 2) = 0;
  *(undefined4 *)(temp_ptr + 2) = *(undefined4 *)(element + 0x10);
  temp_ptr[1] = *(undefined8 *)(element + 8);
  *(undefined4 *)((longlong)temp_ptr + 0x1c) = *(undefined4 *)(element + 0x1c);
  *(undefined4 *)(temp_ptr + 3) = *(undefined4 *)(element + 0x18);
  *(undefined4 *)(element + 0x10) = 0;
  *(undefined8 *)(element + 8) = 0;
  *(undefined8 *)(element + 0x18) = 0;
  element_ptr = (undefined8 *)container[1];
  next_ptr = (undefined8 *)*container;
  if (next_ptr != element_ptr) {
    do {
      (**(code **)*next_ptr)(next_ptr, 0);
      next_ptr = next_ptr + 4;
    } while (next_ptr != element_ptr);
    next_ptr = (undefined8 *)*container;
  }
  if (next_ptr == (undefined8 *)0x0) {
    *container = container_start;
    container[1] = (longlong)(temp_ptr + 4);
    container[2] = new_size * 0x20 + container_start;
    return;
  }
  cleanup_string_buffers(next_ptr);
}

/**
 * 在内存中查找子字符串
 * @param haystack 搜索的字符串
 * @param haystack_len 搜索字符串长度
 * @param param3 参数3
 * @param needle 要查找的字符串
 * @param needle_len 要查找字符串的长度
 * @return 找到的位置索引，未找到返回-1
 */
longlong find_substring(longlong haystack, ulonglong haystack_len, undefined8 param3, char *needle,
                      ulonglong needle_len)
{
  char first_char;
  int compare_result;
  longlong current_pos;
  longlong search_end;
  
  if (needle_len <= haystack_len) {
    if (needle_len == 0) {
      return 0;
    }
    first_char = *needle;
    search_end = (haystack - needle_len) + haystack_len;
    for (current_pos = memchr(haystack, (int)first_char, (search_end + 1) - haystack); current_pos != 0;
        current_pos = memchr(current_pos + 1, (int)first_char, (search_end + 1) - (current_pos + 1))) {
      compare_result = memcmp(current_pos, needle, needle_len);
      if (compare_result == 0) {
        return current_pos - haystack;
      }
    }
  }
  return -1;
}

/**
 * 抛出out_of_range异常
 */
void throw_out_of_range_exception(void)
{
  code *exception_handler;
  
  __Xout_of_range_std__YAXPEBD_Z(&OUT_OF_RANGE_MESSAGE_CONST);
  exception_handler = (code *)swi(3);
  (*exception_handler)();
  return;
}

/**
 * 清理字符串向量
 * @param vector 字符串向量指针
 */
void cleanup_string_vector(longlong *vector)
{
  ulonglong vector_size;
  longlong vector_data;
  longlong allocation_info;
  
  vector_size = vector[3];
  if (0xf < vector_size) {
    vector_data = *vector;
    allocation_info = vector_data;
    if (0xfff < vector_size + 1) {
      allocation_info = *(longlong *)(vector_data + -8);
      if (0x1f < (vector_data - allocation_info) - 8U) {
        _invalid_parameter_noinfo_noreturn(vector_data - allocation_info, vector_size + 0x28);
      }
    }
    free(allocation_info);
  }
  vector[2] = 0;
  vector[3] = 0xf;
  *(undefined1 *)vector = 0;
  return;
}

/**
 * 清理字符串向量 - 简化版本
 */
void cleanup_string_vector_simple(void)
{
  cleanup_string_vector();
  return;
}

/**
 * 抛出length_error异常
 */
void throw_length_error_exception(void)
{
  code *exception_handler;
  
  __Xlength_error_std__YAXPEBD_Z(&LENGTH_ERROR_MESSAGE_CONST);
  exception_handler = (code *)swi(3);
  (*exception_handler)();
  return;
}

/**
 * 分配内存并处理异常
 * @param size 要分配的内存大小
 */
void allocate_memory_with_exception(ulonglong size)
{
  code *exception_handler;
  int allocation_result;
  longlong allocated_ptr;
  ulonglong adjusted_size;
  
  if (0xfff < size) {
    adjusted_size = size + 0x27;
    if (adjusted_size <= size) {
      adjusted_size = 0xffffffffffffffff;
    }
    allocated_ptr = allocate_large_memory(adjusted_size);
    if (allocated_ptr == 0) {
      _invalid_parameter_noinfo_noreturn();
    }
    *(longlong *)((allocated_ptr + 0x27U & 0xffffffffffffffe0) - 8) = allocated_ptr;
    return;
  }
  if (size == 0) {
    return;
  }
  do {
    allocated_ptr = malloc(size);
    if (allocated_ptr != 0) {
      return;
    }
    allocation_result = _callnewh(size);
  } while (allocation_result != 0);
  if (size == 0xffffffffffffffff) {
    handle_bad_alloc();
    exception_handler = (code *)swi(3);
    (*exception_handler)();
    return;
  }
  handle_memory_allocation_failure();
  exception_handler = (code *)swi(3);
  (*exception_handler)();
  return;
}

/**
 * 释放内存并检查边界
 * @param ptr 要释放的内存指针
 * @param size 内存大小
 */
void free_memory_with_bounds_check(longlong ptr, ulonglong size)
{
  longlong actual_ptr;
  
  actual_ptr = ptr;
  if (0xfff < size) {
    actual_ptr = *(longlong *)(ptr + -8);
    if (0x1f < (ptr - actual_ptr) - 8U) {
      _invalid_parameter_noinfo_noreturn(ptr - actual_ptr, size + 0x27);
    }
  }
  free(actual_ptr);
  return;
}

/**
 * 调整字符串向量大小
 * @param vector 字符串向量指针
 * @param data 数据指针
 * @param new_size 新的大小
 */
void resize_string_vector(undefined8 *vector, undefined8 data, ulonglong new_size)
{
  ulonglong current_size;
  code *exception_handler;
  undefined8 new_ptr;
  ulonglong allocated_size;
  undefined8 *vector_data;
  ulonglong required_size;
  
  current_size = vector[3];
  if (new_size <= current_size) {
    vector_data = vector;
    if (0xf < current_size) {
      vector_data = (undefined8 *)*vector;
    }
    vector[2] = new_size;
    memmove(vector_data);
  }
  if (new_size < 0x8000000000000000) {
    allocated_size = new_size | 0xf;
    required_size = 0x7fffffffffffffff;
    if (((allocated_size < 0x8000000000000000) && (current_size <= 0x7fffffffffffffff - (current_size >> 1))) &&
       (current_size = (current_size >> 1) + current_size, required_size = allocated_size, allocated_size < current_size)) {
      required_size = current_size;
    }
    new_ptr = allocate_memory_with_exception(required_size + 1);
    vector[2] = new_size;
    vector[3] = required_size;
    memcpy(new_ptr, data, new_size);
  }
  throw_length_error_exception();
  exception_handler = (code *)swi(3);
  (*exception_handler)();
  return;
}

/**
 * 调整容器大小
 * @param new_size 新大小
 */
void resize_container(ulonglong new_size)
{
  ulonglong adjusted_size;
  undefined8 new_ptr;
  longlong container_ptr;
  ulonglong current_capacity;
  undefined8 current_data;
  ulonglong current_size;
  
  new_size = new_size | 0xf;
  if (((new_size <= current_size) && (current_capacity <= current_size - (current_capacity >> 1))) &&
     (adjusted_size = (current_capacity >> 1) + current_capacity, current_size = new_size, new_size < adjusted_size)) {
    current_size = adjusted_size;
  }
  new_ptr = allocate_memory_with_exception(current_size + 1);
  *(undefined8 *)(container_ptr + 0x10) = current_data;
  *(ulonglong *)(container_ptr + 0x18) = current_size;
  memcpy(new_ptr);
}

/**
 * 空函数 - 占位符2
 */
void empty_function_placeholder2(void)
{
  return;
}

/**
 * 抛出invalid_parameter异常
 */
void throw_invalid_parameter_exception(void)
{
  _invalid_parameter_noinfo_noreturn();
}

/**
 * 抛出length_error异常 - 简化版本
 */
void throw_length_error_exception_simple(void)
{
  code *exception_handler;
  
  throw_length_error_exception();
  exception_handler = (code *)swi(3);
  (*exception_handler)();
  return;
}

/**
 * IO完成端口工作线程
 * @param io_port IO完成端口句柄
 */
void io_completion_port_worker(longlong io_port)
{
  longlong thread_handle;
  longlong temp_var1;
  longlong temp_var2;
  int completion_status;
  undefined4 temp_var3;
  undefined4 temp_var4;
  undefined4 temp_var5;
  undefined4 temp_var6;
  undefined4 temp_var7;
  undefined4 temp_var8;
  undefined4 temp_var9;
  undefined *temp_stack_50;
  undefined *temp_stack_48;
  
  temp_var3 = GetCurrentThread();
  SetThreadPriority(temp_var3, 0);
  completion_key[0] = 0;
  overlapped_struct[1] = 0;
  overlapped_struct[0] = 0;
  while( true ) {
    while( true ) {
      completion_status = GetQueuedCompletionStatus
                        (*(undefined8 *)(io_port + 0x28), completion_key, &overlapped_struct[1], &overlapped_struct[0],
                         0xffffffff);
      temp_var2 = overlapped_struct[0];
      if (completion_status == 0) break;
      if (overlapped_struct[1] == -1) {
        return;
      }
      *(longlong *)(overlapped_struct[0] + 0x1c8) =
           *(longlong *)(overlapped_struct[0] + 0x1c8) - (ulonglong)completion_key[0];
      temp_var3 = GLOBAL_IO_COUNTER;
      if (*(longlong *)(overlapped_struct[0] + 0x1c8) < 1) {
        temp_var1 = *(longlong *)(io_port + 0x20);
        temp_var4 = allocate_io_struct(GLOBAL_MEMORY_POOL, 0x40, 8, 10);
        temp_stack_ptr = (longlong *)&temp_var5;
        temp_stack_50 = &IO_WORKER_FUNCTION;
        temp_stack_48 = &IO_CLEANUP_FUNCTION;
        temp_var7 = (undefined4)temp_var3;
        temp_var6 = (undefined4)((ulonglong)temp_var3 >> 0x20);
        temp_var5 = (undefined4)temp_var2;
        temp_var4 = (undefined4)((ulonglong)temp_var2 >> 0x20);
        temp_var5 = temp_var7;
        temp_var8 = temp_var6;
        temp_var9 = temp_var5;
        temp_var4 = temp_var4;
        work_item_ptr = (longlong *)create_work_item(temp_var4, &temp_var5);
        if (work_item_ptr != (longlong *)0x0) {
          (**(code **)(*work_item_ptr + 0x28))(work_item_ptr);
        }
        temp_var3 = ERROR_LOGGING_SERVICE;
        temp_stack_ptr = work_item_ptr;
        if (*(char *)(temp_var1 + 0x368) == '\0') {
          work_item_ptr[3] = -4;
          (**(code **)(*work_item_ptr + 0x28))(work_item_ptr);
          log_io_error(temp_var3, &temp_stack_ptr);
        }
        else {
          if (work_item_ptr != (longlong *)0x0) {
            (**(code **)(*work_item_ptr + 0x28))(work_item_ptr);
          }
          process_io_completion(temp_var3, &temp_stack_ptr);
        }
        if (work_item_ptr != (longlong *)0x0) {
          (**(code **)(*work_item_ptr + 0x38))(work_item_ptr);
        }
      }
    }
    completion_status = GetLastError();
    if (completion_status == 0x2df) {
      return;
    }
    if (overlapped_struct[0] == 0) break;
    handle_io_error(*(undefined8 *)(io_port + 0x20));
  }
  log_system_error(GLOBAL_LOG_HANDLE, &IO_ERROR_MESSAGE_CONST, completion_status);
}

/**
 * 处理IO错误
 * @param param1 参数1
 * @param error_context 错误上下文
 */
void handle_io_error(undefined8 param1, longlong error_context)
{
  undefined *error_message;
  undefined *default_message;
  
  error_message = *(undefined **)(*(longlong *)(error_context + 0x1f8) + 0x10));
  default_message = &DEFAULT_STRING_CONST;
  if (error_message != (undefined *)0x0) {
    default_message = error_message;
  }
  log_system_error(GLOBAL_LOG_HANDLE, &IO_ERROR_DETAILS_CONST, default_message);
}

/**
 * 执行回调函数
 * @param context 上下文指针
 * @param param2 参数2
 * @param param3 参数3
 * @param param4 参数4
 */
void execute_callback(longlong context, undefined8 param2, undefined8 param3, undefined8 param4)
{
  if (*(code **)(context + 0x10) != (code *)0x0) {
    (**(code **)(context + 0x10))(context, 0, 0, param4, 0xfffffffffffffffe);
  }
  return;
}

/**
 * 清理线程相关资源
 * @param thread_info 线程信息指针
 */
void cleanup_thread_resources(longlong *thread_info)
{
  int *counter_ptr;
  longlong *thread_ptr;
  longlong queue_size;
  longlong work_count;
  undefined8 temp_var1;
  undefined8 temp_var2;
  undefined8 *queue_ptr;
  longlong *work_item;
  int signal_result;
  longlong temp_var3;
  undefined8 *temp_ptr;
  longlong temp_stack_c8;
  longlong temp_stack_c0;
  undefined8 temp_stack_b8;
  undefined2 temp_stack_b0;
  undefined1 temp_stack_ae;
  undefined1 temp_buffer[64];
  undefined8 temp_stack_48;
  undefined8 temp_stack_40;
  
  temp_stack_48 = 0xfffffffffffffffe;
  queue_size = thread_info[1];
  signal_result = *(int *)(queue_size + 0x138) - *(int *)(queue_size + 0x1d8);
  work_count = *(longlong *)(queue_size + 0x150);
  work_item = (longlong *)0x0;
  if (work_count != 0) {
    temp_var1 = *(undefined8 *)(queue_size + 0x158);
    temp_var2 = *(undefined8 *)(queue_size + 0x1e0);
    temp_var3 = *(longlong *)(queue_size + 0x140);
    queue_size = *(longlong *)(queue_size + 0x1f0);
    if (work_count - 2U < 2) {
      work_item = (longlong *)allocate_work_item(GLOBAL_MEMORY_POOL, 0x10, 8, 3);
      *work_item = (longlong)&WORK_ITEM_TYPE_CONST;
      *(bool *)(work_item + 1) = work_count == 3;
    }
    (**(code **)(*work_item + 0x18))(work_item, temp_buffer, signal_result + queue_size, temp_var3, temp_var2, temp_var1);
    cleanup_string_buffers(work_item);
  }
  temp_stack_ae = 3;
  queue_size = thread_info[1];
  temp_stack_b8 = *(undefined8 *)(queue_size + 0x140);
  temp_stack_c8 = (longlong)signal_result + *(longlong *)(queue_size + 0x1f0);
  temp_stack_b0 = 1;
  temp_stack_c0 = temp_stack_c8;
  (**(code **)(queue_size + 0x180))(&temp_stack_c8, *(longlong *)(queue_size + 0x1f8) + 8);
  if (((char)temp_stack_b0 == '\0') && (temp_stack_c8 != 0)) {
    cleanup_string_buffers();
  }
  LOCK();
  counter_ptr = (int *)(*(longlong *)(thread_info[1] + 0x1f8) + 0x120);
  *counter_ptr = *counter_ptr + -1;
  UNLOCK();
  temp_var3 = *(longlong *)(thread_info[1] + 0x1a8);
  queue_size = *thread_info;
  cleanup_work_queue(queue_size + 0x10, &temp_var3);
  signal_result = _Cnd_signal(queue_size + 0x278);
  if (signal_result != 0) {
    __Throw_C_error_std__YAXH_Z(signal_result);
  }
  temp_ptr = *(undefined8 **)(thread_info[1] + 0x1b0);
  queue_size = *thread_info;
  cleanup_work_queue(queue_size + 0x10, &temp_ptr);
  signal_result = _Cnd_signal(queue_size + 0x278);
  if (signal_result != 0) {
    __Throw_C_error_std__YAXH_Z(signal_result);
  }
  queue_size = *(longlong *)(thread_info[1] + 0x1c0);
  if (*(longlong *)(thread_info[1] + 0x1b8) != 0) {
    cleanup_string_buffers();
  }
  if (queue_size != 0) {
    cleanup_string_buffers(queue_size);
  }
  queue_size = thread_info[1];
  if (*(longlong *)(queue_size + 0x150) == 0) {
    if (*(longlong *)(queue_size + 0x148) == 0) {
      work_item = *(longlong **)(queue_size + 0x140);
    }
  }
  else {
    work_item = *(longlong **)(queue_size + 0x140);
    if (*(longlong *)(queue_size + 0x148) == 0) {
      work_item = (longlong *)((longlong)work_item + *(longlong *)(queue_size + 0x158));
    }
  }
  LOCK();
  thread_ptr = (longlong *)(*(longlong *)(*thread_info + 8) + 0x3f0);
  *thread_ptr = *thread_ptr - (longlong)work_item;
  UNLOCK();
  LOCK();
  counter_ptr = (int *)(*(longlong *)(*thread_info + 8) + 0x3f8);
  *counter_ptr = *counter_ptr + -1;
  UNLOCK();
  work_count = *thread_info;
  queue_ptr = (undefined8 *)thread_info[1];
  queue_size = work_count + 0x200380;
  temp_stack_40 = 0x180068808;
  temp_var3 = queue_size;
  temp_ptr = queue_ptr;
  signal_result = _Mtx_lock(queue_size);
  if (signal_result != 0) {
    temp_stack_40 = 0x180068815;
    __Throw_C_error_std__YAXH_Z(signal_result);
  }
  temp_stack_40 = 0x18006881f;
  cleanup_thread_resources_internal(queue_ptr + 4);
  *queue_ptr = *(undefined8 *)(work_count + 0x200378);
  *(undefined8 **)(work_count + 0x200378) = queue_ptr;
  temp_stack_40 = 0x18006883a;
  signal_result = _Mtx_unlock(queue_size);
  if (signal_result != 0) {
    temp_stack_40 = 0x180068847;
    __Throw_C_error_std__YAXH_Z(signal_result);
  }
  return;
}

/**
 * 初始化全局字符串池
 * @param string_pool 字符串池指针
 */
void init_global_string_pool(undefined8 *string_pool)
{
  undefined1 temp_buffer[48];
  undefined8 *temp_stack_88;
  undefined8 temp_stack_70;
  undefined8 *temp_stack_68;
  ulonglong temp_stack_30;
  
  temp_stack_70 = 0xfffffffffffffffe;
  temp_stack_30 = STACK_COOKIE ^ (ulonglong)temp_buffer;
  temp_stack_68 = string_pool;
  initialize_string_pool();
  *string_pool = &GLOBAL_STRING_POOL_CONST;
  temp_stack_88 = string_pool + 0x6e;
  memset(temp_stack_88, 0, 0x200000);
}

/**
 * 销毁互斥锁 - 就地销毁
 */
void destroy_mutex_in_situ(void)
{
  _Mtx_destroy_in_situ();
  return;
}

/**
 * 销毁互斥锁 - 简化版本
 */
void destroy_mutex_simple(void)
{
  _Mtx_destroy_in_situ();
  return;
}