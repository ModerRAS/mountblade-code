#include "TaleWorlds.Native.Split.h"

/**
 * 核心引擎模块第185部分
 * 
 * 本文件包含核心引擎的事件处理和界面管理功能实现
 * 
 * 文件标识: 02_core_engine_part185.c
 * 模块: 核心引擎 (02)
 * 功能描述: 引擎事件处理与界面管理
 * 函数数量: 4 个函数
 */

/**
 * 处理引擎事件系统
 * 
 * 该函数负责处理引擎的事件系统，包括事件队列管理、事件分发和状态更新
 * 处理复杂的事件逻辑和状态转换
 * 
 * 参数:
 *   event_queue_ptr - 事件队列指针数组
 *   event_count - 事件数量
 *   config_ptr1 - 配置指针1
 *   config_ptr2 - 配置指针2
 *   event_flags - 事件标志
 * 
 * 功能:
 *   - 初始化事件队列
 *   - 处理事件分发
 *   - 管理事件状态
 *   - 更新配置信息
 */
void process_engine_event_system(longlong ***event_queue_ptr, longlong event_count, undefined8 *config_ptr1, undefined8 *config_ptr2, undefined8 event_flags)
{
  int *int_ptr1;
  undefined8 *data_ptr1;
  uint uint_var1;
  longlong ***event_array_ptr1;
  code *code_ptr;
  char status_flag;
  int int_var1;
  undefined8 data_var1;
  longlong long_var1;
  longlong long_var2;
  longlong long_var3;
  longlong ****event_array_ptr2;
  undefined8 *data_ptr2;
  undefined *string_ptr1;
  undefined *string_ptr2;
  longlong ***event_array_ptr3;
  longlong long_var4;
  ulonglong ulong_var1;
  int int_var2;
  longlong **data_array_ptr;
  longlong *data_item_ptr;
  longlong ****event_array_ptr4;
  longlong ****event_array_ptr5;
  undefined8 *stack_ptr1;
  undefined8 *stack_ptr2;
  undefined4 uint_var2;
  undefined8 stack_data1;
  undefined4 stack_data2;
  undefined4 stack_data3;
  undefined *stack_ptr3;
  longlong stack_long1;
  int stack_int1;
  undefined8 stack_data4;
  undefined4 stack_data5;
  undefined4 stack_data6;
  undefined4 stack_data7;
  undefined4 stack_data8;
  undefined4 stack_data9;
  undefined4 stack_data10;
  longlong ****event_array_ptr6;
  undefined8 stack_data11;
  longlong ****event_array_ptr7;
  
  stack_data11 = 0xfffffffffffffffe;
  stack_ptr1 = config_ptr1;
  stack_ptr2 = config_ptr2;
  data_var1 = get_system_time();
  initialize_string_processor(&stack_ptr3, data_var1);
  long_var4 = global_engine_context;
  status_flag = *(char *)(event_queue_ptr + 0xc);
  *(undefined4 *)(global_engine_context + 0x1c04) = 0x44200000;
  *(undefined4 *)(long_var4 + 0x1c08) = 0x43f00000;
  *(undefined4 *)(long_var4 + 0x1bd4) = 4;
  string_ptr1 = &default_string_buffer;
  if (*(undefined **)(event_count + 8) != (undefined *)0x0) {
    string_ptr1 = *(undefined **)(event_count + 8);
  }
  status_flag = process_string_validation(string_ptr1, &validation_pattern, -(uint)(status_flag != '\0') & 0x2020);
  long_var4 = global_engine_context;
  int_var2 = 0;
  if (status_flag == '\0') {
    cleanup_event_system();
  }
  else {
    event_array_ptr1 =
         (longlong ****)
         ((ulonglong)
          (uint)(*(float *)(global_engine_context + 0x1660) + *(float *)(global_engine_context + 0x1660) +
                 *(float *)(global_engine_context + 0x19f8) + *(float *)(global_engine_context + 0x1670)) << 0x20
         ^ 0x8000000000000000);
    *(undefined1 *)(*(longlong *)(global_engine_context + 0x1af8) + 0xb1) = 1;
    int_var1 = create_event_index(&event_system_table, 0,
                          *(undefined4 *)
                           (*(longlong *)(*(longlong *)(long_var4 + 0x1af8) + 0x220) + -4 +
                           (longlong)*(int *)(*(longlong *)(long_var4 + 0x1af8) + 0x218) * 4));
    if (*(int *)(long_var4 + 0x1b2c) == int_var1) {
      *(int *)(long_var4 + 0x1b34) = int_var1;
    }
    if (*(int *)(long_var4 + 0x1b30) == int_var1) {
      *(undefined1 *)(long_var4 + 0x1b3f) = 1;
    }
    uint_var2 = 0x800;
    register_event_handler(&event_system_table, int_var1, &event_array_ptr1);
    long_var4 = global_engine_context;
    int_var1 = create_event_index(&event_handler_table, 0,
                          *(undefined4 *)
                           (*(longlong *)(*(longlong *)(global_engine_context + 0x1af8) + 0x220) + -4 +
                           (longlong)*(int *)(*(longlong *)(global_engine_context + 0x1af8) + 0x218) * 4));
    if (*(int *)(long_var4 + 0x1b2c) == int_var1) {
      *(int *)(long_var4 + 0x1b34) = int_var1;
    }
    if (*(int *)(long_var4 + 0x1b30) == int_var1) {
      *(undefined1 *)(long_var4 + 0x1b3f) = 1;
    }
    if ((*(char *)(long_var4 + 0x41b) != '\0') && (status_flag = check_event_system(), status_flag != '\0')) {
      activate_event_handler(int_var1);
    }
    status_flag = validate_event_index(int_var1, 0x141);
    if (status_flag != '\0') {
      event_array_ptr1 = (longlong ****)0x0;
      status_flag = create_event_processor(&event_processor_table, 0, 0, &event_array_ptr1, uint_var2);
      if (status_flag != '\0') {
        event_array_ptr1 = (longlong ***)event_queue_ptr[1];
        event_array_ptr3 = (longlong ***)*event_queue_ptr;
        event_array_ptr1 = (longlong ****)event_array_ptr3;
        if (event_array_ptr3 != event_array_ptr1) {
          do {
            event_array_ptr2 = (longlong ****)(event_array_ptr3 + 1);
            *event_array_ptr2 = (longlong ***)&null_event_table;
            if (event_array_ptr3[2] != (longlong **)0x0) {
              event_array_ptr1 = (longlong ****)event_array_ptr3;
                    // WARNING: Subroutine does not return
              cleanup_event_array();
            }
            event_array_ptr3[2] = (longlong **)0x0;
            *(undefined4 *)(event_array_ptr3 + 4) = 0;
            *event_array_ptr2 = (longlong ***)&default_event_table;
            event_array_ptr1 = (longlong ****)(event_array_ptr3 + 5);
            event_array_ptr3 = (longlong ***)event_array_ptr1;
          } while (event_array_ptr1 != (longlong ****)event_array_ptr1);
          event_array_ptr3 = (longlong ***)*event_queue_ptr;
          config_ptr1 = stack_ptr1;
        }
        event_queue_ptr[1] = (longlong **)event_array_ptr3;
        *(undefined1 *)((longlong)event_queue_ptr + 0x72) = 1;
      }
      finalize_event_setup();
    }
    long_var4 = global_engine_context;
    stack_data1._4_4_ = *(undefined4 *)(global_engine_context + 0x166c);
    stack_data2 = *(undefined4 *)(global_engine_context + 0x1670);
    stack_data1._0_4_ = 0xd;
    update_engine_parameters(global_engine_context + 0x1b90, &stack_data1);
    *(undefined4 *)(long_var4 + 0x166c) = 0x40800000;
    *(undefined4 *)(long_var4 + 0x1670) = 0x3f800000;
    data_array_ptr = *event_queue_ptr;
    long_var4 = (longlong)event_queue_ptr[1] - (longlong)data_array_ptr >> 0x3f;
    if (((longlong)event_queue_ptr[1] - (longlong)data_array_ptr) / 0x28 + long_var4 != long_var4) {
      stack_data3 = 0x3f800000;
      long_var4 = 0;
      do {
        stack_data1._0_4_ = 0x3f800000;
        stack_data1._4_4_ = 0x3f800000;
        stack_data2 = 0x3f800000;
        if (*(int *)(long_var4 + (longlong)data_array_ptr) == 4) {
PROCESS_EVENT_TYPE:
          stack_data1._4_4_ = 0x3ecccccd;
          stack_data2 = 0x3ecccccd;
        }
        else {
          string_ptr1 = *(undefined **)(long_var4 + 0x10 + (longlong)data_array_ptr);
          string_ptr2 = &default_string_buffer;
          if (string_ptr1 != (undefined *)0x0) {
            string_ptr2 = string_ptr1;
          }
          long_var1 = find_substring(string_ptr2, &event_type_pattern);
          if (long_var1 != 0) goto PROCESS_EVENT_TYPE;
          int_var1 = *(int *)(long_var4 + (longlong)data_array_ptr);
          if (int_var1 == 3) {
            stack_data1._4_4_ = 0x3f47ae14;
            stack_data2 = 0x3f147ae1;
          }
          else if (int_var1 == 2) {
            stack_data1._0_4_ = 0x3f47ae14;
            stack_data1._4_4_ = 0x3f47ae14;
          }
          else if (int_var1 == 1) {
            stack_data1._0_4_ = 0x3ecccccd;
            stack_data1._4_4_ = 0x3f47ae14;
            stack_data2 = 0;
          }
        }
        long_var1 = global_engine_context;
        if (*(char *)((longlong)event_queue_ptr + 0x72) != '\0') {
          *(undefined1 *)(*(longlong *)(global_engine_context + 0x1af8) + 0xb1) = 1;
          long_var2 = *(longlong *)(long_var1 + 0x1af8);
          *(undefined1 *)(long_var2 + 0xb1) = 1;
          long_var1 = *(longlong *)(long_var1 + 0x1af8);
          *(float *)(long_var1 + 0x98) =
               (float)(int)((*(float *)(long_var2 + 0x10c) - *(float *)(long_var2 + 0x44)) +
                            *(float *)(long_var2 + 0x130) * 0.5 + *(float *)(long_var1 + 0x90));
          *(undefined4 *)(long_var1 + 0xa0) = 0x3f000000;
          *(undefined1 *)((longlong)event_queue_ptr + 0x72) = 0;
        }
        long_var1 = global_engine_context;
        stack_data5 = 0;
        stack_data6 = (undefined4)*(undefined8 *)(global_engine_context + 0x16c8);
        stack_data7 = (undefined4)((ulonglong)*(undefined8 *)(global_engine_context + 0x16c8) >> 0x20);
        stack_data8 = (undefined4)*(undefined8 *)(global_engine_context + 0x16d0);
        stack_data9 = (undefined4)((ulonglong)*(undefined8 *)(global_engine_context + 0x16d0) >> 0x20);
        update_engine_config(global_engine_context + 0x1b80, &stack_data5);
        *(ulonglong *)(long_var1 + 0x16c8) = CONCAT44(stack_data1._4_4_, (undefined4)stack_data1);
        *(ulonglong *)(long_var1 + 0x16d0) = CONCAT44(stack_data3, stack_data2);
        string_ptr1 = *(undefined **)(long_var4 + 0x10 + (longlong)data_array_ptr);
        string_ptr2 = &default_string_buffer;
        if (string_ptr1 != (undefined *)0x0) {
          string_ptr2 = string_ptr1;
        }
        process_string_data(string_ptr2, 0);
        long_var1 = global_engine_context;
        data_ptr2 = (undefined8 *)
                  (*(longlong *)(global_engine_context + 0x1b88) + -0x10 +
                  (longlong)*(int *)(global_engine_context + 0x1b80) * 0x14);
        data_var1 = data_ptr2[1];
        data_ptr1 = (undefined8 *)
                 (global_engine_context + 0x16c8 +
                 (longlong)
                 *(int *)(*(longlong *)(global_engine_context + 0x1b88) + -0x14 +
                         (longlong)*(int *)(global_engine_context + 0x1b80) * 0x14) * 0x10);
        *data_ptr1 = *data_ptr2;
        data_ptr1[1] = data_var1;
        *(int *)(long_var1 + 0x1b80) = *(int *)(long_var1 + 0x1b80) + -1;
        int_var2 = int_var2 + 1;
        long_var4 = long_var4 + 0x28;
        data_array_ptr = *event_queue_ptr;
        config_ptr1 = stack_ptr1;
      } while ((ulonglong)(longlong)int_var2 <
               (ulonglong)(((longlong)event_queue_ptr[1] - (longlong)data_array_ptr) / 0x28));
    }
    long_var1 = global_engine_context;
    long_var2 = (longlong)*(int *)(global_engine_context + 0x1b90);
    long_var4 = *(longlong *)(global_engine_context + 0x1b98);
    long_var3 = (longlong)*(int *)(long_var4 + -0xc + long_var2 * 0xc);
    ulong_var1 = (ulonglong)*(uint *)(&event_type_table + long_var3 * 0xc);
    if (*(int *)(&event_type_data + long_var3 * 0xc) == 4) {
      if (*(int *)(&event_type_flags + long_var3 * 0xc) == 1) {
        *(undefined4 *)(ulong_var1 + 0x1628 + global_engine_context) =
             *(undefined4 *)(long_var4 + -8 + long_var2 * 0xc);
      }
      else if (*(int *)(&event_type_flags + long_var3 * 0xc) == 2) {
        *(undefined4 *)(ulong_var1 + 0x1628 + global_engine_context) =
             *(undefined4 *)(long_var4 + -8 + long_var2 * 0xc);
        *(undefined4 *)(ulong_var1 + 0x162c + long_var1) = *(undefined4 *)(long_var4 + -4 + long_var2 * 0xc);
      }
    }
    int_ptr1 = (int *)(long_var1 + 0x1b90);
    *int_ptr1 = *int_ptr1 + -1;
    cleanup_event_processor();
    event_array_ptr1 = (longlong ****)0x0;
    status_flag = create_event_callback(&event_callback_table, (longlong)event_queue_ptr + 0x74, 0x400, &event_array_ptr1, 0x3e0,
                          &event_callback_function, event_queue_ptr);
    long_var4 = global_engine_context;
    if (status_flag != '\0') {
      *(undefined1 *)(*(longlong *)(global_engine_context + 0x1af8) + 0xb1) = 1;
      long_var4 = *(longlong *)(long_var4 + 0x1af8);
      *(undefined4 *)(long_var4 + 0x400) = *(undefined4 *)(long_var4 + 0x3f0);
      *(undefined4 *)(long_var4 + 0x404) = 0x7fffffff;
      *(undefined1 *)((longlong)event_queue_ptr + 0x71) = 1;
      if ((*(char *)(event_queue_ptr + 0xc) != '\0') && (*(int *)((longlong)event_queue_ptr + 100) != -1)) {
        data_item_ptr = (longlong *)&default_string_buffer;
        if (event_queue_ptr[4][(longlong)*(int *)((longlong)event_queue_ptr + 100) * 4 + 1] != (longlong *)0x0) {
          data_item_ptr = event_queue_ptr[4][(longlong)*(int *)((longlong)event_queue_ptr + 100) * 4 + 1];
        }
        long_var4 = -1;
        do {
          long_var1 = long_var4;
          long_var4 = long_var1 + 1;
        } while (*(char *)((longlong)data_item_ptr + long_var4) != '\0');
                    // WARNING: Subroutine does not return
        memcpy((longlong)event_queue_ptr + 0x74, data_item_ptr, long_var1 + 2);
      }
      long_var4 = create_string_buffer(&stack_data5, (longlong)event_queue_ptr + 0x74);
      if (stack_long1 != 0) {
                    // WARNING: Subroutine does not return
        cleanup_event_array();
      }
      stack_int1 = *(int *)(long_var4 + 0x10);
      stack_long1 = *(longlong *)(long_var4 + 8);
      stack_data4 = *(undefined8 *)(long_var4 + 0x18);
      *(undefined4 *)(long_var4 + 0x10) = 0;
      *(undefined8 *)(long_var4 + 8) = 0;
      *(undefined8 *)(long_var4 + 0x18) = 0;
      stack_data5 = 0x80a3c3e0;
      stack_data6 = 1;
      if (CONCAT44(stack_data8, stack_data7) != 0) {
                    // WARNING: Subroutine does not return
        cleanup_event_array();
      }
      stack_data7 = 0;
      stack_data8 = 0;
      stack_data10 = 0;
      stack_data5 = 0x8098bcb0;
      stack_data6 = 1;
      *(undefined1 *)((longlong)event_queue_ptr + 0x72) = 1;
      *(undefined1 *)((longlong)event_queue_ptr + 0x74) = 0;
      long_var4 = global_engine_context;
      *(undefined1 *)(event_queue_ptr + 0xc) = 0;
      *(undefined4 *)((longlong)event_queue_ptr + 100) = 0xffffffff;
    }
    if (*(int *)(event_queue_ptr + 0xd) != -1) {
      *(undefined1 *)(*(longlong *)(long_var4 + 0x1af8) + 0xb1) = 1;
      long_var1 = *(longlong *)(long_var4 + 0x1af8);
      *(undefined4 *)(long_var1 + 0x400) = *(undefined4 *)(long_var1 + 0x3f0);
      *(undefined4 *)(long_var1 + 0x404) = 0x7fffffff;
      *(undefined1 *)(event_queue_ptr + 0xc) = 0;
    }
    *config_ptr1 = *(undefined8 *)(*(longlong *)(long_var4 + 0x1af8) + 0x14c);
    if ((((*(longlong *)(long_var4 + 0x1c98) != 0) &&
         (*(longlong *)(*(longlong *)(long_var4 + 0x1c98) + 0x3a8) ==
          *(longlong *)(*(longlong *)(long_var4 + 0x1af8) + 0x3a8))) &&
        (*(int *)(long_var4 + 0x1b2c) == 0)) && (*(float *)(long_var4 + 0x424) != 0.0)) {
      *(undefined1 *)(*(longlong *)(long_var4 + 0x1af8) + 0xb1) = 1;
      long_var1 = *(longlong *)(long_var4 + 0x1af8);
      *(undefined4 *)(long_var1 + 0x400) = *(undefined4 *)(long_var1 + 0x3f0);
      *(undefined4 *)(long_var1 + 0x404) = 0x7fffffff;
    }
    *config_ptr2 = CONCAT44((*(float *)(long_var4 + 0x19f8) + *(float *)(long_var4 + 0x1670)) * 6.0 +
                            *(float *)(long_var4 + 0x1660) * 12.0,
                            (*(float *)(*(longlong *)(long_var4 + 0x1af8) + 0x154) -
                            *(float *)(*(longlong *)(long_var4 + 0x1af8) + 0x14c)) - 80.0);
    *(float *)((longlong)config_ptr2 + 4) =
         (*(float *)(*(longlong *)(long_var4 + 0x1af8) + 0x158) -
         *(float *)(*(longlong *)(long_var4 + 0x1af8) + 0x150)) + *(float *)((longlong)config_ptr2 + 4);
    *(bool *)event_flags =
         *(longlong *)(long_var4 + 0x1c98) == *(longlong *)(*(longlong *)(long_var4 + 0x1af8) + 0x3a8);
    cleanup_event_system();
    int_var2 = unlock_mutex(0x180c91970);
    if (int_var2 != 0) {
      throw_error_code(int_var2);
    }
    if (stack_int1 != 0) {
      event_array_ptr2 = (longlong ****)create_event_array(global_event_table, 0xe8, 8, 3);
      event_array_ptr2 = (longlong ****)&stack_data5;
      event_array_ptr1 = event_array_ptr2;
      data_ptr2 = (undefined8 *)create_string_buffer(&stack_data5, &stack_ptr3);
      event_array_ptr6 = (longlong ****)data_ptr2;
      initialize_event_array(event_array_ptr2);
      *event_array_ptr2 = (longlong ***)&event_handler_table;
      event_array_ptr2 = event_array_ptr2 + 0x19;
      *event_array_ptr2 = (longlong ***)&default_event_table;
      event_array_ptr2[0x1a] = (longlong ***)0x0;
      *(undefined4 *)(event_array_ptr2 + 0x1b) = 0;
      *event_array_ptr2 = (longlong ***)&null_event_table;
      event_array_ptr2[0x1c] = (longlong ***)0x0;
      event_array_ptr2[0x1a] = (longlong ***)0x0;
      *(undefined4 *)(event_array_ptr2 + 0x1b) = 0;
      uint_var1 = *(uint *)(data_ptr2 + 2);
      ulong_var1 = (ulonglong)uint_var1;
      long_var4 = data_ptr2[1];
      if (long_var4 != 0) {
        initialize_event_data(event_array_ptr2, ulong_var1);
        long_var4 = data_ptr2[1];
      }
      if (uint_var1 != 0) {
                    // WARNING: Subroutine does not return
        memcpy(event_array_ptr2[0x1a], long_var4, ulong_var1);
      }
      *(undefined4 *)(event_array_ptr2 + 0x1b) = 0;
      if (event_array_ptr2[0x1a] != (longlong ***)0x0) {
        *(undefined1 *)(ulong_var1 + (longlong)event_array_ptr2[0x1a]) = 0;
      }
      *(undefined4 *)((longlong)event_array_ptr2 + 0xe4) = *(undefined4 *)((longlong)data_ptr2 + 0x1c);
      event_array_ptr2[0x18] = event_queue_ptr;
      *data_ptr2 = &null_event_table;
      if (data_ptr2[1] != 0) {
                    // WARNING: Subroutine does not return
        cleanup_event_array();
      }
      data_ptr2[1] = 0;
      *(undefined4 *)(data_ptr2 + 3) = 0;
      *data_ptr2 = &default_event_table;
      event_array_ptr6 = event_array_ptr2;
      (*(code *)(*event_array_ptr2)[5])(event_array_ptr2, long_var4);
      long_var4 = global_event_callback;
      event_array_ptr2 = (longlong ****)&event_array_ptr1;
      event_array_ptr1 = event_array_ptr2;
      (*(code *)(*event_array_ptr2)[5])(event_array_ptr2);
      event_array_ptr7 = (longlong ****)&event_array_ptr1;
      data_ptr2 = (undefined8 **)**(undefined8 **)(long_var4 + 8);
      code_ptr = *(code **)*data_ptr2;
      stack_data1 = &event_array_ptr2;
      event_array_ptr2 = event_array_ptr1;
      if (event_array_ptr1 != (longlong ****)0x0) {
        (*(code *)(*event_array_ptr1)[5])();
      }
      (*code_ptr)(data_ptr2, &event_array_ptr2);
      if (event_array_ptr1 != (longlong ****)0x0) {
        (*(code *)(*event_array_ptr1)[7])();
      }
      (*(code *)(*event_array_ptr2)[7])(event_array_ptr2);
    }
    int_var2 = lock_mutex(0x180c91970);
    if (int_var2 != 0) {
      throw_error_code(int_var2);
    }
  }
  stack_ptr3 = &null_event_table;
  if (stack_long1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  cleanup_event_array();
}

/**
 * 清理引擎事件队列
 * 
 * 该函数负责清理引擎的事件队列，释放相关资源
 * 处理事件队列的销毁和内存释放
 * 
 * 参数:
 *   queue_handle - 队列句柄
 *   cleanup_param1 - 清理参数1
 *   cleanup_param2 - 清理参数2
 *   cleanup_param3 - 清理参数3
 * 
 * 功能:
 *   - 清理事件队列
 *   - 释放相关资源
 *   - 重置队列状态
 */
void cleanup_engine_event_queue(longlong queue_handle, undefined8 cleanup_param1, undefined8 cleanup_param2, undefined8 cleanup_param3)
{
  undefined8 *data_ptr1;
  int int_var1;
  undefined8 *data_ptr2;
  undefined8 *data_ptr3;
  undefined8 *data_ptr4;
  longlong long_var1;
  ulonglong ulong_var1;
  int int_var2;
  undefined8 *data_ptr5;
  ulonglong ulong_var2;
  int int_var3;
  undefined2 stack_array [4];
  undefined8 *stack_ptr1;
  undefined8 *stack_ptr2;
  undefined8 stack_data1;
  undefined4 stack_data2;
  
  stack_ptr1 = (undefined8 *)0x0;
  stack_ptr2 = (undefined8 *)0x0;
  stack_data1 = 0;
  stack_data2 = 3;
  stack_array[0] = 0x3b;
  if (*(longlong *)(queue_handle + 0xd0) != 0) {
    process_event_cleanup(queue_handle + 200, &stack_ptr1, stack_array, cleanup_param3, 0xfffffffffffffffe);
  }
  data_ptr4 = stack_ptr2;
  data_ptr3 = stack_ptr1;
  ulong_var2 = (longlong)stack_ptr2 - (longlong)stack_ptr1 >> 5;
  int_var3 = 0;
  data_ptr2 = stack_ptr1;
  if (ulong_var2 != 0) {
    ulong_var1 = 0;
    data_ptr5 = stack_ptr1;
    do {
      data_ptr1 = stack_ptr1 + ulong_var1 * 4;
      initialize_event_data(data_ptr1, 10);
      initialize_event_data(data_ptr1, 0x20);
      int_var1 = *(int *)(data_ptr5 + 2);
      if (int_var1 != 0) {
        int_var2 = 0;
        if (0 < int_var1 + -1) {
          long_var1 = (longlong)(int_var1 + -1);
          do {
            if (*(char *)(data_ptr5[1] + long_var1) != ' ') break;
            int_var2 = int_var2 + 1;
            long_var1 = long_var1 + -1;
          } while (0 < long_var1);
        }
        *(int *)(data_ptr5 + 2) = int_var1 - int_var2;
        *(undefined1 *)((ulonglong)(uint)(int_var1 - int_var2) + data_ptr5[1]) = 0;
      }
      finalize_event_data(data_ptr1);
      process_event_callback(*(undefined8 *)(queue_handle + 0xc0), data_ptr1);
      int_var3 = int_var3 + 1;
      data_ptr5 = data_ptr5 + 4;
      ulong_var1 = (ulonglong)int_var3;
    } while (ulong_var1 < ulong_var2);
  }
  for (; data_ptr2 != data_ptr4; data_ptr2 = data_ptr2 + 4) {
    (**(code **)*data_ptr2)(data_ptr2, 0);
  }
  if (stack_ptr1 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    cleanup_event_array(stack_ptr1);
  }
  return;
}

/**
 * 销毁引擎事件系统
 * 
 * 该函数负责销毁引擎的事件系统，释放所有相关资源
 * 处理事件系统的完全销毁和内存释放
 * 
 * 参数:
 *   system_handle - 系统句柄
 *   destroy_flags - 销毁标志
 * 
 * 返回值:
 *   返回系统句柄
 * 
 * 功能:
 *   - 销毁事件系统
 *   - 释放所有资源
 *   - 重置系统状态
 */
longlong destroy_engine_event_system(longlong system_handle, ulonglong destroy_flags)
{
  *(undefined8 *)(system_handle + 200) = &null_event_table;
  if (*(longlong *)(system_handle + 0xd0) != 0) {
                    // WARNING: Subroutine does not return
    cleanup_event_array();
  }
  *(undefined8 *)(system_handle + 0xd0) = 0;
  *(undefined4 *)(system_handle + 0xe0) = 0;
  *(undefined8 *)(system_handle + 200) = &default_event_table;
  finalize_event_system(system_handle);
  if ((destroy_flags & 1) != 0) {
    free(system_handle, 0xe8);
  }
  return system_handle;
}

/**
 * 处理引擎事件回调
 * 
 * 该函数负责处理引擎的事件回调，处理事件触发和响应
 * 执行事件回调的复杂逻辑和状态管理
 * 
 * 参数:
 *   callback_handle - 回调句柄
 *   callback_param1 - 回调参数1
 *   callback_param2 - 回调参数2
 *   callback_flags - 回调标志
 * 
 * 功能:
 *   - 处理事件回调
 *   - 管理回调状态
 *   - 更新配置信息
 *   - 执行事件响应
 */
void process_engine_event_callback(longlong callback_handle, undefined8 *callback_param1, undefined8 *callback_param2, undefined8 callback_flags)
{
  uint *uint_ptr1;
  int *int_ptr1;
  undefined8 *data_ptr1;
  undefined8 *data_ptr2;
  float float_var1;
  float float_var2;
  float float_var3;
  int int_var1;
  undefined *string_ptr1;
  longlong long_var1;
  undefined8 data_var1;
  char char_var1;
  int int_var2;
  longlong long_var2;
  longlong long_var3;
  undefined *string_ptr2;
  longlong long_var4;
  ulonglong ulong_var1;
  undefined4 uint_var1;
  ulonglong ulong_var2;
  undefined8 stack_data1;
  undefined4 stack_data2;
  undefined8 stack_data3;
  undefined8 stack_data4;
  
  initialize_event_processor(2, 0);
  long_var4 = global_engine_context;
  ulong_var1 = 0;
  uint_var1 = 0;
  *(undefined8 *)(global_engine_context + 0x1bf4) = *callback_param1;
  *(undefined8 *)(long_var4 + 0x1bfc) = 0;
  *(undefined4 *)(long_var4 + 0x1bd0) = 1;
  *(undefined1 *)(long_var4 + 0x1c14) = 1;
  *(undefined8 *)(long_var4 + 0x1c04) = *callback_param2;
  *(undefined4 *)(long_var4 + 0x1bd4) = 1;
  process_string_validation(&event_callback_table, 0, 0x907);
  long_var4 = global_engine_context;
  *(undefined1 *)(*(longlong *)(global_engine_context + 0x1af8) + 0xb1) = 1;
  long_var4 = *(longlong *)(long_var4 + 0x1af8);
  uint_ptr1 = (uint *)(long_var4 + 0x1a8);
  *uint_ptr1 = *uint_ptr1 | 1;
  activate_event_handler(long_var4 + 0x1b8);
  long_var4 = global_engine_context;
  if (*(char *)(callback_handle + 0x74) == '\0') {
    stack_data3 = *(undefined8 *)(global_engine_context + 0x1718);
    stack_data4 = *(undefined8 *)(global_engine_context + 0x1720);
    stack_data2 = 5;
    update_engine_config(global_engine_context + 0x1b80, &stack_data2);
    *(undefined8 *)(long_var4 + 0x1718) = 0x3f8000003f800000;
    *(undefined8 *)(long_var4 + 0x1720) = 0x3f8000003f800000;
    initialize_event_callback(&event_callback_init_table);
    long_var4 = global_engine_context;
    data_ptr1 = (undefined8 *)
             (*(longlong *)(global_engine_context + 0x1b88) + -0x10 +
             (longlong)*(int *)(global_engine_context + 0x1b80) * 0x14);
    data_var1 = data_ptr1[1];
    data_ptr2 = (undefined8 *)
             (global_engine_context + 0x16c8 +
             (longlong)
             *(int *)(*(longlong *)(global_engine_context + 0x1b88) + -0x14 +
                     (longlong)*(int *)(global_engine_context + 0x1b80) * 0x14) * 0x10);
    *data_ptr2 = *data_ptr1;
    data_ptr2[1] = data_var1;
    *(int *)(long_var4 + 0x1b80) = *(int *)(long_var4 + 0x1b80) + -1;
  }
  if (*(longlong *)(callback_handle + 0x28) - *(longlong *)(callback_handle + 0x20) >> 5 != 0) {
    stack_data1 = 0;
    ulong_var2 = ulong_var1;
    do {
      int_var1 = *(int *)(callback_handle + 100);
      int_var2 = (int)ulong_var1;
      if (int_var1 == int_var2) {
        stack_data3 = *(undefined8 *)(long_var4 + 0x1718);
        stack_data4 = *(undefined8 *)(long_var4 + 0x1720);
        stack_data2 = 5;
        update_engine_config(long_var4 + 0x1b80, &stack_data2);
        *(undefined8 *)(long_var4 + 0x1718) = 0x3f800000;
        *(undefined8 *)(long_var4 + 0x1720) = 0x3f80000000000000;
      }
      process_event_data(ulong_var1);
      string_ptr1 = *(undefined **)(*(longlong *)(callback_handle + 0x20) + 8 + ulong_var2);
      string_ptr2 = &default_string_buffer;
      if (string_ptr1 != (undefined *)0x0) {
        string_ptr2 = string_ptr1;
      }
      char_var1 = create_event_processor(string_ptr2, int_var1 == int_var2, 0, &stack_data1);
      if (char_var1 != '\0') {
        *(int *)(callback_handle + 0x68) = int_var2;
      }
      long_var4 = global_engine_context;
      int_ptr1 = (int *)(*(longlong *)(global_engine_context + 0x1af8) + 0x218);
      *int_ptr1 = *int_ptr1 + -1;
      if (int_var1 == int_var2) {
        if (*(char *)(callback_handle + 0x70) != '\0') {
          *(undefined1 *)(*(longlong *)(long_var4 + 0x1af8) + 0xb1) = 1;
          long_var1 = *(longlong *)(long_var4 + 0x1af8);
          float_var3 = *(float *)(long_var1 + 0x130);
          float_var2 = *(float *)(long_var1 + 0x10c);
          float_var1 = *(float *)(long_var1 + 0x44);
          *(undefined1 *)(long_var1 + 0xb1) = 1;
          long_var1 = *(longlong *)(long_var4 + 0x1af8);
          *(undefined4 *)(long_var1 + 0xa0) = 0x3f000000;
          *(float *)(long_var1 + 0x98) =
               (float)(int)((float_var2 - float_var1) + float_var3 * 0.5 + *(float *)(long_var1 + 0x90));
          *(undefined1 *)(callback_handle + 0x70) = 0;
        }
        data_ptr1 = (undefined8 *)
                 (*(longlong *)(long_var4 + 0x1b88) + -0x10 +
                 (longlong)*(int *)(long_var4 + 0x1b80) * 0x14);
        data_var1 = data_ptr1[1];
        data_ptr2 = (undefined8 *)
                 (long_var4 + 0x16c8 +
                 (longlong)
                 *(int *)(*(longlong *)(long_var4 + 0x1b88) + -0x14 +
                         (longlong)*(int *)(long_var4 + 0x1b80) * 0x14) * 0x10);
        *data_ptr2 = *data_ptr1;
        data_ptr2[1] = data_var1;
        *(int *)(long_var4 + 0x1b80) = *(int *)(long_var4 + 0x1b80) + -1;
      }
      ulong_var1 = (ulonglong)(int_var2 + 1U);
      ulong_var2 = ulong_var2 + 0x20;
    } while ((ulonglong)(longlong)(int)(int_var2 + 1U) <
             (ulonglong)(*(longlong *)(callback_handle + 0x28) - *(longlong *)(callback_handle + 0x20) >> 5));
  }
  *(bool *)callback_flags =
       *(longlong *)(long_var4 + 0x1c98) == *(longlong *)(*(longlong *)(long_var4 + 0x1af8) + 0x3a8);
  *(undefined1 *)(*(longlong *)(long_var4 + 0x1af8) + 0xb1) = 1;
  long_var4 = *(longlong *)(long_var4 + 0x1af8);
  int_var1 = *(int *)(long_var4 + 0x1b8);
  int_var2 = int_var1 + -1;
  *(int *)(long_var4 + 0x1b8) = int_var2;
  if (int_var2 != 0) {
    uint_var1 = *(undefined4 *)(*(longlong *)(long_var4 + 0x1c0) + -8 + (longlong)int_var1 * 4);
  }
  *(undefined4 *)(long_var4 + 0x1a8) = uint_var1;
  cleanup_event_system();
  long_var1 = global_engine_context;
  long_var2 = (longlong)*(int *)(global_engine_context + 0x1b90);
  long_var4 = *(longlong *)(global_engine_context + 0x1b98);
  long_var3 = (longlong)*(int *)(long_var4 + -0xc + long_var2 * 0xc);
  ulong_var1 = (ulonglong)*(uint *)(&event_type_table + long_var3 * 0xc);
  if (*(int *)(&event_type_data + long_var3 * 0xc) == 4) {
    if (*(int *)(&event_type_flags + long_var3 * 0xc) == 1) {
      *(undefined4 *)(ulong_var1 + 0x1628 + global_engine_context) =
           *(undefined4 *)(long_var4 + -8 + long_var2 * 0xc);
      *(int *)(long_var1 + 0x1b90) = *(int *)(long_var1 + 0x1b90) + -1;
      return;
    }
    if (*(int *)(&event_type_flags + long_var3 * 0xc) == 2) {
      *(undefined4 *)(ulong_var1 + 0x1628 + global_engine_context) =
           *(undefined4 *)(long_var4 + -8 + long_var2 * 0xc);
      *(undefined4 *)(ulong_var1 + 0x162c + long_var1) = *(undefined4 *)(long_var4 + -4 + long_var2 * 0xc);
    }
  }
  *(int *)(long_var1 + 0x1b90) = *(int *)(long_var1 + 0x1b90) + -1;
  return;
}

// 文件结束