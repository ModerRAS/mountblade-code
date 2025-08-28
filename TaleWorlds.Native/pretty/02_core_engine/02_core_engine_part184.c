#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part184.c - 核心引擎模块第184部分

// 函数: void FUN_18016a890(longlong *param_1)
// 功能: 清理资源管理器中的资源项
// 参数: param_1 - 资源管理器指针
void cleanup_resource_manager_items(longlong *resource_manager)

{
  longlong item_count;
  longlong current_item;
  
  item_count = resource_manager[1];
  for (current_item = *resource_manager; current_item != item_count; current_item = current_item + 0x28) {
    *(undefined8 *)(current_item + 8) = &RESOURCE_CLEANUP_STATE;
    if (*(longlong *)(current_item + 0x10) != 0) {
                    // WARNING: Subroutine does not return
      trigger_error_handler();
    }
    *(undefined8 *)(current_item + 0x10) = 0;
    *(undefined4 *)(current_item + 0x20) = 0;
    *(undefined8 *)(current_item + 8) = &RESOURCE_ACTIVE_STATE;
  }
  if (*resource_manager != 0) {
                    // WARNING: Subroutine does not return
    trigger_error_handler();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18016a8b0(undefined8 param_1,longlong param_2)
// 功能: 处理字符串数据并执行相关操作
// 参数: param_1 - 上下文参数, param_2 - 数据缓冲区指针
void process_string_data(undefined8 context_param,longlong data_buffer)

{
  uint buffer_size;
  undefined4 temp_var;
  int index;
  uint string_length;
  uint new_length;
  undefined2 *string_ptr;
  longlong result;
  undefined1 *temp_buffer_c8;
  undefined *temp_buffer_a8;
  undefined2 *temp_buffer_a0;
  undefined4 temp_var_98;
  undefined8 temp_var_90;
  undefined *temp_buffer_68;
  longlong temp_var_60;
  undefined4 temp_var_50;
  undefined8 temp_var_48;
  
  temp_var_48 = 0xfffffffffffffffe;
  if (*(int *)(data_buffer + 0x10) < 1) {
    return;
  }
  temp_buffer_a8 = &RESOURCE_CLEANUP_STATE;
  temp_var_90 = 0;
  temp_buffer_a0 = (undefined2 *)0x0;
  temp_var_98 = 0;
  string_ptr = (undefined2 *)allocate_string_buffer(GLOBAL_MEMORY_POOL,0x10,0x13);
  *(undefined1 *)string_ptr = 0;
  temp_buffer_a0 = string_ptr;
  temp_var = get_string_length(string_ptr);
  temp_var_90 = CONCAT44(temp_var_90._4_4_,temp_var);
  *string_ptr = 0x2023;
  *(undefined1 *)(string_ptr + 1) = 0;
  temp_var_98 = 2;
  result = process_data_stream(&temp_buffer_a8,&temp_buffer_68,data_buffer);
  string_length = 0;
  temp_buffer_c8 = (undefined1 *)0x0;
  buffer_size = *(uint *)(result + 0x10);
  if (*(longlong *)(result + 8) == 0) {
LAB_COPY_DIRECT:
    if (buffer_size != 0) {
                    // WARNING: Subroutine does not return
      memcpy(temp_buffer_c8,*(undefined8 *)(result + 8),(ulonglong)buffer_size);
    }
  }
  else if (buffer_size != 0) {
    index = buffer_size + 1;
    if (index < 0x10) {
      index = 0x10;
    }
    temp_buffer_c8 = (undefined1 *)allocate_string_buffer(GLOBAL_MEMORY_POOL,(longlong)index,0x13);
    *temp_buffer_c8 = 0;
    string_length = get_string_length(temp_buffer_c8);
    goto LAB_COPY_DIRECT;
  }
  if (temp_buffer_c8 != (undefined1 *)0x0) {
    temp_buffer_c8[buffer_size] = 0;
  }
  if (buffer_size != 0xffffffff) {
    new_length = buffer_size + 2;
    if (temp_buffer_c8 == (undefined1 *)0x0) {
      if ((int)new_length < 0x10) {
        new_length = 0x10;
      }
      temp_buffer_c8 = (undefined1 *)allocate_string_buffer(GLOBAL_MEMORY_POOL,(longlong)(int)new_length,0x13);
      *temp_buffer_c8 = 0;
    }
    else {
      if (new_length <= string_length) goto LAB_APPEND_NEWLINE;
      temp_buffer_c8 = (undefined1 *)reallocate_string_buffer(GLOBAL_MEMORY_POOL,temp_buffer_c8,new_length,0x10,0x13);
    }
    get_string_length(temp_buffer_c8);
  }
LAB_APPEND_NEWLINE:
  *(undefined2 *)(temp_buffer_c8 + buffer_size) = 10;
  temp_buffer_68 = &RESOURCE_CLEANUP_STATE;
  if (temp_var_60 != 0) {
                    // WARNING: Subroutine does not return
    trigger_error_handler();
  }
  temp_var_60 = 0;
  temp_var_50 = 0;
  temp_buffer_68 = &RESOURCE_ACTIVE_STATE;
  temp_buffer_a8 = &RESOURCE_CLEANUP_STATE;
                    // WARNING: Subroutine does not return
  trigger_error_handler(string_ptr);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18016ae30(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)
// 功能: 向资源队列添加新的资源项
// 参数: param_1 - 上下文, param_2 - 数据源, param_3 - 参数3, param_4 - 参数4
void add_resource_to_queue(undefined8 context,longlong data_source,undefined8 param3,undefined8 param4)

{
  uint data_size;
  undefined4 *queue_ptr;
  longlong queue_base;
  ulonglong copy_size;
  undefined4 queue_data [2];
  undefined *temp_buffer_60;
  longlong temp_var_58;
  uint temp_var_50;
  undefined8 temp_var_48;
  
  queue_base = GLOBAL_QUEUE_BASE;
  queue_data[0] = 0;
  temp_buffer_60 = &RESOURCE_CLEANUP_STATE;
  temp_var_48 = 0;
  temp_var_58 = 0;
  temp_var_50 = 0;
  data_size = *(uint *)(data_source + 0x10);
  copy_size = (ulonglong)data_size;
  if (*(longlong *)(data_source + 8) != 0) {
    initialize_data_buffer(&temp_buffer_60,copy_size,param3,param4,1,0xfffffffffffffffe);
  }
  if (data_size != 0) {
                    // WARNING: Subroutine does not return
    memcpy(temp_var_58,*(undefined8 *)(data_source + 8),copy_size);
  }
  if (temp_var_58 != 0) {
    *(undefined1 *)(copy_size + temp_var_58) = 0;
  }
  temp_var_50 = data_size;
  temp_var_48._4_4_ = *(undefined4 *)(data_source + 0x1c);
  initialize_data_buffer(&temp_buffer_60,1);
  *(undefined2 *)((ulonglong)temp_var_50 + temp_var_58) = 10;
  queue_ptr = *(undefined4 **)(queue_base + 8);
  if (queue_ptr < *(undefined4 **)(queue_base + 0x10)) {
    *(undefined4 **)(queue_base + 8) = queue_ptr + 10;
    *queue_ptr = queue_data[0];
    *(undefined **)(queue_ptr + 2) = &RESOURCE_ACTIVE_STATE;
    *(undefined8 *)(queue_ptr + 4) = 0;
    queue_ptr[6] = 0;
    *(undefined **)(queue_ptr + 2) = &RESOURCE_CLEANUP_STATE;
    *(undefined8 *)(queue_ptr + 8) = 0;
    *(undefined8 *)(queue_ptr + 4) = 0;
    queue_ptr[6] = 0;
    queue_ptr[6] = 1;
    *(longlong *)(queue_ptr + 4) = temp_var_58;
    queue_ptr[9] = temp_var_48._4_4_;
    queue_ptr[8] = (undefined4)temp_var_48;
    temp_var_50 = 0;
    temp_var_58 = 0;
    temp_var_48._0_4_ = 0;
    temp_var_48._4_4_ = 0;
  }
  else {
    temp_var_50 = 1;
    expand_queue_capacity(queue_base,queue_data);
  }
  temp_buffer_60 = &RESOURCE_CLEANUP_STATE;
  if (temp_var_58 != 0) {
                    // WARNING: Subroutine does not return
    trigger_error_handler();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18016afc0(longlong param_1)
// 功能: 处理配置文件数据并解析键值对
// 参数: param_1 - 配置处理器指针
void process_config_file_data(longlong config_handler)

{
  undefined8 *config_array;
  char *line_buffer;
  undefined8 **temp_ptr_array;
  longlong temp_var1;
  undefined1 *char_ptr1;
  undefined1 *char_ptr2;
  undefined1 *char_ptr3;
  longlong line_count;
  undefined1 *char_ptr4;
  uint line_length;
  ulonglong temp_ulong1;
  undefined8 *temp_ptr1;
  undefined8 *temp_ptr2;
  int index;
  undefined8 *temp_ptr3;
  undefined8 *temp_ptr4;
  int temp_int1;
  undefined *temp_undef1;
  uint *uint_ptr1;
  undefined1 *char_ptr5;
  ulonglong temp_ulong2;
  ulonglong temp_ulong3;
  uint temp_uint1;
  longlong *long_ptr1;
  uint *uint_ptr2;
  undefined1 *char_ptr6;
  undefined8 *temp_ptr5;
  uint temp_uint2;
  undefined4 temp_var4;
  undefined8 *stack_ptr1;
  longlong *stack_ptr2;
  ulonglong stack_ulong1;
  undefined8 *stack_ptr2;
  undefined *stack_buffer_108;
  char *stack_buffer_100;
  uint stack_var_f8;
  undefined4 stack_var_f0;
  undefined8 *stack_ptr_e8;
  undefined8 *stack_ptr_e0;
  undefined8 *stack_ptr_d8;
  undefined4 stack_var_d0;
  undefined8 *stack_ptr_c8;
  undefined8 *stack_ptr_c0;
  undefined8 *stack_ptr_b8;
  undefined8 stack_var_b0;
  undefined4 stack_var_a8;
  undefined *stack_ptr_a0;
  longlong stack_var_98;
  undefined8 stack_var_80;
  undefined8 *stack_ptr_78;
  undefined8 *stack_ptr_70;
  undefined8 stack_var_68;
  
  stack_var_80 = 0xfffffffffffffffe;
  long_ptr1 = (longlong *)(config_handler + 0x20);
  stack_ptr2 = long_ptr1;
  initialize_config_parser(long_ptr1);
  if (*(char *)(config_handler + 0x74) == '\0') {
    temp_ulong1 = 0;
    temp_var1 = *(longlong *)(config_handler + 0x40);
    temp_ulong2 = temp_ulong1;
    if (*(longlong *)(config_handler + 0x48) - temp_var1 >> 5 != 0) {
      do {
        if (*(ulonglong *)(config_handler + 0x28) < *(ulonglong *)(config_handler + 0x30)) {
          *(ulonglong *)(config_handler + 0x28) = *(ulonglong *)(config_handler + 0x28) + 0x20;
          expand_memory_pool();
        }
        else {
          process_config_entry(long_ptr1,temp_ulong1 * 0x20 + temp_var1);
        }
        temp_uint2 = (int)temp_ulong2 + 1;
        temp_var1 = *(longlong *)(config_handler + 0x40);
        temp_ulong1 = (ulonglong)(int)temp_uint2;
        temp_ulong2 = (ulonglong)temp_uint2;
      } while (temp_ulong1 < (ulonglong)(*(longlong *)(config_handler + 0x48) - temp_var1 >> 5));
    }
  }
  else {
    initialize_string_parser(&stack_ptr_a0);
    stack_ptr_e8 = (undefined8 *)0x0;
    stack_ptr_e0 = (undefined8 *)0x0;
    char_ptr3 = (undefined1 *)0x0;
    temp_uint2 = 0;
    stack_ptr_d8 = (undefined8 *)0x0;
    stack_var_d0 = 3;
    stack_ptr_c0 = (undefined8 *)0x0;
    stack_ptr_b8 = (undefined8 *)0x0;
    stack_var_b0 = 0;
    stack_var_a8 = 3;
    stack_ptr1 = (undefined8 *)CONCAT62(stack_ptr1._2_6_,0x3b);
    if (stack_var_98 != 0) {
      parse_string_data(&stack_ptr_a0,&stack_ptr_c0,&stack_ptr1);
    }
    temp_ptr2 = stack_ptr_b8;
    allocate_string_buffer(&stack_ptr_108,stack_ptr_b8 + -4);
    if (stack_var_f8 != 0) {
      line_buffer = stack_buffer_100;
      char_ptr1 = char_ptr3;
      char_ptr5 = char_ptr3;
      temp_uint1 = temp_uint2;
      if (stack_var_f8 != 1) {
        do {
          temp_uint1 = (uint)char_ptr5;
          if (*line_buffer != '\n') break;
          temp_uint1 = temp_uint1 + 1;
          line_length = (int)char_ptr1 + 1;
          line_buffer = line_buffer + 1;
          char_ptr1 = (undefined1 *)(ulonglong)line_length;
          char_ptr5 = (undefined1 *)(ulonglong)temp_uint1;
        } while (line_length < stack_var_f8 - 1);
      }
      if (stack_var_f8 != 1) {
        char_ptr1 = char_ptr3;
        char_ptr5 = char_ptr3;
        do {
          char_ptr1[(longlong)stack_buffer_100] = (char_ptr1 + (int)temp_uint1)[(longlong)stack_buffer_100];
          line_length = (int)char_ptr5 + 1;
          char_ptr5 = (undefined1 *)(ulonglong)line_length;
          char_ptr1 = char_ptr1 + 1;
        } while (line_length < stack_var_f8 - 1);
      }
      stack_var_f8 = stack_var_f8 - temp_uint1;
      stack_buffer_100[stack_var_f8] = '\0';
      if (stack_var_f8 != 0) {
        line_buffer = stack_buffer_100;
        char_ptr1 = char_ptr3;
        char_ptr5 = char_ptr3;
        temp_uint1 = temp_uint2;
        if (stack_var_f8 != 1) {
          do {
            temp_uint1 = (uint)char_ptr5;
            if (*line_buffer != ' ') break;
            temp_uint1 = temp_uint1 + 1;
            line_length = (int)char_ptr1 + 1;
            line_buffer = line_buffer + 1;
            char_ptr1 = (undefined1 *)(ulonglong)line_length;
            char_ptr5 = (undefined1 *)(ulonglong)temp_uint1;
          } while (line_length < stack_var_f8 - 1);
        }
        if (stack_var_f8 != 1) {
          char_ptr1 = char_ptr3;
          char_ptr5 = char_ptr3;
          do {
            char_ptr1[(longlong)stack_buffer_100] = (char_ptr1 + (int)temp_uint1)[(longlong)stack_buffer_100];
            line_length = (int)char_ptr5 + 1;
            char_ptr5 = (undefined1 *)(ulonglong)line_length;
            char_ptr1 = char_ptr1 + 1;
          } while (line_length < stack_var_f8 - 1);
        }
        stack_var_f8 = stack_var_f8 - temp_uint1;
        stack_buffer_100[stack_var_f8] = '\0';
        if (stack_var_f8 != 0) {
          temp_var1 = (longlong)(int)(stack_var_f8 - 1);
          char_ptr1 = char_ptr3;
          temp_uint1 = temp_uint2;
          if (0 < (int)(stack_var_f8 - 1)) {
            do {
              temp_uint1 = (uint)char_ptr1;
              if (stack_buffer_100[temp_var1] != ' ') break;
              temp_uint1 = temp_uint1 + 1;
              char_ptr1 = (undefined1 *)(ulonglong)temp_uint1;
              temp_var1 = temp_var1 + -1;
            } while (0 < temp_var1);
          }
          stack_var_f8 = stack_var_f8 - temp_uint1;
          stack_buffer_100[stack_var_f8] = '\0';
        }
      }
    }
    temp_var4 = parse_config_line(&stack_ptr_108);
    temp_ptr_array = (undefined8 **)create_config_entry(temp_var4,&stack_ptr_70,&stack_ptr_108);
    stack_ptr2 = stack_ptr_e8;
    temp_ptr3 = stack_ptr_e8;
    temp_ptr5 = stack_ptr_e0;
    stack_ptr_c8 = stack_ptr_e0;
    temp_ptr1 = stack_ptr_70;
    if (&stack_ptr_e8 != temp_ptr_array) {
      release_config_array(&stack_ptr_e8);
      stack_ptr2 = *temp_ptr_array;
      *temp_ptr_array = stack_ptr_e8;
      stack_ptr_c8 = temp_ptr_array[1];
      temp_ptr_array[1] = stack_ptr_e0;
      temp_ptr1 = temp_ptr_array[2];
      temp_ptr_array[2] = stack_ptr_d8;
      temp_var4 = *(undefined4 *)(temp_ptr_array + 3);
      *(undefined4 *)(temp_ptr_array + 3) = stack_var_d0;
      temp_ptr3 = stack_ptr2;
      temp_ptr5 = stack_ptr_c8;
      stack_ptr_d8 = temp_ptr1;
      stack_var_d0 = temp_var4;
      temp_ptr1 = stack_ptr_70;
      stack_ptr_e0 = stack_ptr_c8;
      stack_ptr_e8 = stack_ptr2;
    }
    for (; config_array = stack_ptr_e0, temp_ptr4 = stack_ptr_e8, temp_ptr1 != stack_var_68; temp_ptr1 = temp_ptr1 + 4) {
      stack_ptr_e8 = temp_ptr3;
      stack_ptr_e0 = temp_ptr5;
      (**(code **)*temp_ptr1)(temp_ptr1,0);
      temp_ptr3 = stack_ptr_e8;
      temp_ptr5 = stack_ptr_e0;
      stack_ptr_e0 = config_array;
      stack_ptr_e8 = temp_ptr4;
    }
    if (stack_ptr_70 != (undefined8 *)0x0) {
      stack_ptr_e8 = temp_ptr3;
      stack_ptr_e0 = temp_ptr5;
                    // WARNING: Subroutine does not return
      trigger_error_handler();
    }
    stack_ptr1 = (undefined8 *)((ulonglong)stack_ptr1 & 0xffffffff00000000);
    stack_ulong1 = (longlong)stack_ptr_e0 - (longlong)stack_ptr_e8 >> 5;
    temp_ptr1 = stack_ptr_e8;
    stack_ptr_e0 = temp_ptr5;
    if (stack_ulong1 != 0) {
      temp_var1 = (longlong)temp_ptr2 - (longlong)stack_ptr_c0 >> 5;
      long_ptr1 = stack_ptr_e8 + 1;
      stack_ptr_e8 = temp_ptr3;
      do {
        char_ptr1 = char_ptr3;
        char_ptr5 = char_ptr3;
        temp_uint1 = temp_uint2;
        if (temp_var1 != 1) {
          uint_ptr1 = (uint *)(stack_ptr_c0 + 2);
          char_ptr2 = char_ptr3;
          char_ptr4 = char_ptr3;
          char_ptr6 = char_ptr3;
          do {
            temp_ptr2 = stack_ptr_c0 + (longlong)char_ptr2 * 4;
            append_config_data(temp_ptr2,10);
            append_config_data(temp_ptr2,0x20);
            temp_uint1 = *uint_ptr1;
            if (temp_uint1 != 0) {
              line_length = temp_uint2;
              if (0 < (int)(temp_uint1 - 1)) {
                temp_var1 = (longlong)(int)(temp_uint1 - 1);
                char_ptr2 = char_ptr3;
                do {
                  line_length = (uint)char_ptr2;
                  if (*(char *)(*(longlong *)(uint_ptr1 + -2) + temp_var1) != ' ') break;
                  line_length = line_length + 1;
                  char_ptr2 = (undefined1 *)(ulonglong)line_length;
                  temp_var1 = temp_var1 + -1;
                } while (0 < temp_var1);
              }
              *uint_ptr1 = temp_uint1 - line_length;
              *(undefined1 *)((ulonglong)(temp_uint1 - line_length) + *(longlong *)(uint_ptr1 + -2)) = 0;
            }
            parse_config_key_value(temp_ptr2);
            temp_int1 = (int)char_ptr5;
            if (0 < (int)*uint_ptr1) {
              temp_int1 = *uint_ptr1 + temp_int1;
              if (temp_int1 != 0) {
                temp_uint2 = temp_int1 + 1;
                if (char_ptr1 == (undefined1 *)0x0) {
                  if ((int)temp_uint2 < 0x10) {
                    temp_uint2 = 0x10;
                  }
                  char_ptr1 = (undefined1 *)allocate_string_buffer(GLOBAL_MEMORY_POOL,(longlong)(int)temp_uint2,0x13);
                  *char_ptr1 = 0;
                  get_string_length(char_ptr1);
                }
                else if ((uint)char_ptr4 < temp_uint2) {
                  char_ptr1 = (undefined1 *)reallocate_string_buffer(GLOBAL_MEMORY_POOL,char_ptr1,temp_uint2,0x10,0x13);
                  get_string_length(char_ptr1);
                }
              }
                    // WARNING: Subroutine does not return
              memcpy(char_ptr5 + (longlong)char_ptr1,*(undefined8 *)(uint_ptr1 + -2),
                     (longlong)(int)(*uint_ptr1 + 1));
            }
            line_length = temp_int1 + 1;
            if (line_length != 0) {
              temp_uint1 = temp_int1 + 2;
              if (char_ptr1 == (undefined1 *)0x0) {
                if ((int)temp_uint1 < 0x10) {
                  temp_uint1 = 0x10;
                }
                char_ptr1 = (undefined1 *)allocate_string_buffer(GLOBAL_MEMORY_POOL,(longlong)(int)temp_uint1,0x13);
                *char_ptr1 = 0;
                temp_ulong2 = (ulonglong)char_ptr1 & 0xffffffffffc00000;
                char_ptr4 = char_ptr3;
                if (temp_ulong2 != 0) {
                  temp_var1 = ((longlong)char_ptr1 - temp_ulong2 >> 0x10) * 0x50 + 0x80 + temp_ulong2;
                  uint_ptr2 = (uint *)(temp_var1 - (ulonglong)*(uint *)(temp_var1 + 4));
                  if ((*(byte *)((longlong)uint_ptr2 + 0xe) & 2) == 0) {
                    char_ptr4 = (undefined1 *)(ulonglong)uint_ptr2[7];
                    if ((undefined1 *)0x3ffffff < (undefined1 *)(ulonglong)uint_ptr2[7]) {
                      char_ptr4 = (undefined1 *)((ulonglong)*uint_ptr2 << 0x10);
                    }
                  }
                  else {
                    temp_ulong1 = (ulonglong)uint_ptr2[7];
                    if (temp_ulong1 < 0x4000000) {
                      temp_ulong3 = (ulonglong)uint_ptr2[7];
                    }
                    else {
                      temp_ulong3 = (ulonglong)*uint_ptr2 << 0x10;
                    }
                    if (0x3ffffff < temp_ulong1) {
                      temp_ulong1 = (ulonglong)*uint_ptr2 << 0x10;
                    }
                    char_ptr4 = (undefined1 *)
                             (temp_ulong1 - ((longlong)char_ptr1 -
                                       (((longlong)((longlong)uint_ptr2 + (-0x80 - temp_ulong2)) / 0x50) *
                                        0x10000 + temp_ulong2)) % temp_ulong3);
                  }
                }
                char_ptr4 = (undefined1 *)((ulonglong)char_ptr4 & 0xffffffff);
              }
              else if ((uint)char_ptr4 < temp_uint1) {
                char_ptr1 = (undefined1 *)reallocate_string_buffer(GLOBAL_MEMORY_POOL,char_ptr1,temp_uint1,0x10,0x13);
                temp_uint1 = get_string_length(char_ptr1);
                char_ptr4 = (undefined1 *)(ulonglong)temp_uint1;
              }
            }
            char_ptr5[(longlong)char_ptr1] = 0x3b;
            char_ptr1[line_length] = 0;
            if (temp_int1 != -2) {
              temp_uint1 = temp_int1 + 3;
              if (char_ptr1 == (undefined1 *)0x0) {
                if ((int)temp_uint1 < 0x10) {
                  temp_uint1 = 0x10;
                }
                char_ptr1 = (undefined1 *)allocate_string_buffer(GLOBAL_MEMORY_POOL,(longlong)(int)temp_uint1,0x13);
                *char_ptr1 = 0;
                temp_ulong2 = (ulonglong)char_ptr1 & 0xffffffffffc00000;
                char_ptr4 = char_ptr3;
                if (temp_ulong2 != 0) {
                  temp_var1 = ((longlong)char_ptr1 - temp_ulong2 >> 0x10) * 0x50 + 0x80 + temp_ulong2;
                  uint_ptr2 = (uint *)(temp_var1 - (ulonglong)*(uint *)(temp_var1 + 4));
                  if ((*(byte *)((longlong)uint_ptr2 + 0xe) & 2) == 0) {
                    char_ptr4 = (undefined1 *)(ulonglong)uint_ptr2[7];
                    if ((undefined1 *)0x3ffffff < (undefined1 *)(ulonglong)uint_ptr2[7]) {
                      char_ptr4 = (undefined1 *)((ulonglong)*uint_ptr2 << 0x10);
                    }
                  }
                  else {
                    temp_ulong1 = (ulonglong)uint_ptr2[7];
                    if (temp_ulong1 < 0x4000000) {
                      temp_ulong3 = (ulonglong)uint_ptr2[7];
                    }
                    else {
                      temp_ulong3 = (ulonglong)*uint_ptr2 << 0x10;
                    }
                    if (0x3ffffff < temp_ulong1) {
                      temp_ulong1 = (ulonglong)*uint_ptr2 << 0x10;
                    }
                    char_ptr4 = (undefined1 *)
                             (temp_ulong1 - ((longlong)char_ptr1 -
                                       (((longlong)((longlong)uint_ptr2 + (-0x80 - temp_ulong2)) / 0x50) *
                                        0x10000 + temp_ulong2)) % temp_ulong3);
                  }
                }
                char_ptr4 = (undefined1 *)((ulonglong)char_ptr4 & 0xffffffff);
              }
              else if ((uint)char_ptr4 < temp_uint1) {
                char_ptr1 = (undefined1 *)reallocate_string_buffer(GLOBAL_MEMORY_POOL,char_ptr1,temp_uint1,0x10,0x13);
                temp_uint1 = get_string_length(char_ptr1);
                char_ptr4 = (undefined1 *)(ulonglong)temp_uint1;
              }
            }
            temp_uint1 = (uint)char_ptr4;
            char_ptr1[line_length] = 0x20;
            char_ptr5 = (undefined1 *)(ulonglong)(temp_int1 + 2);
            char_ptr5[(longlong)char_ptr1] = 0;
            line_length = (int)char_ptr6 + 1;
            char_ptr6 = (undefined1 *)(ulonglong)line_length;
            uint_ptr1 = uint_ptr1 + 8;
            char_ptr2 = (undefined1 *)(longlong)(int)line_length;
          } while (char_ptr2 < (undefined1 *)(temp_var1 + -1));
        }
        if (0 < (int)long_ptr1[1]) {
          temp_int1 = (int)long_ptr1[1] + (int)char_ptr5;
          if (temp_int1 != 0) {
            temp_uint2 = temp_int1 + 1;
            if (char_ptr1 == (undefined1 *)0x0) {
              if ((int)temp_uint2 < 0x10) {
                temp_uint2 = 0x10;
              }
              char_ptr1 = (undefined1 *)allocate_string_buffer(GLOBAL_MEMORY_POOL,(longlong)(int)temp_uint2,0x13);
              *char_ptr1 = 0;
            }
            else {
              if (temp_uint2 <= temp_uint1) goto LAB_FINALIZE_STRING;
              char_ptr1 = (undefined1 *)reallocate_string_buffer(GLOBAL_MEMORY_POOL,char_ptr1,temp_uint2,0x10,0x13);
            }
            get_string_length(char_ptr1);
          }
LAB_FINALIZE_STRING:
                    // WARNING: Subroutine does not return
          memcpy(char_ptr5 + (longlong)char_ptr1,*long_ptr1,(longlong)((int)long_ptr1[1] + 1));
        }
        if (char_ptr1 != (undefined1 *)0x0) {
          initialize_data_buffer(long_ptr1 + -1,char_ptr5);
        }
        if ((int)char_ptr5 != 0) {
                    // WARNING: Subroutine does not return
          memcpy(*long_ptr1,char_ptr1,char_ptr5);
        }
        *(undefined4 *)(long_ptr1 + 1) = 0;
        if (*long_ptr1 != 0) {
          char_ptr5[*long_ptr1] = 0;
        }
        *(undefined4 *)((longlong)long_ptr1 + 0x14) = 0;
        if (char_ptr1 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
          trigger_error_handler(char_ptr1);
        }
        temp_int1 = (int)stack_ptr1 + 1;
        stack_ptr1 = (undefined8 *)CONCAT44(stack_ptr1._4_4_,temp_int1);
        long_ptr1 = long_ptr1 + 4;
        temp_ptr1 = stack_ptr2;
        temp_ptr3 = stack_ptr_e8;
      } while ((ulonglong)(longlong)temp_int1 < stack_ulong1);
    }
    stack_ptr_e8 = temp_ptr3;
    stack_ptr1 = (undefined8 *)((ulonglong)stack_ptr1 & 0xffffffff00000000);
    if (stack_ulong1 != 0) {
      temp_ptr1 = temp_ptr1 + 1;
      char_ptr1 = char_ptr3;
      do {
        long_ptr1 = stack_ptr2;
        temp_undef1 = &DEFAULT_CONFIG_STRING;
        if ((undefined *)*temp_ptr1 != (undefined *)0x0) {
          temp_undef1 = (undefined *)*temp_ptr1;
        }
        if (temp_undef1 != (undefined *)0x0) {
          temp_var1 = -1;
          do {
            temp_var1 = temp_var1 + 1;
          } while (temp_undef1[temp_var1] != '\0');
          if ((int)temp_var1 != 0) {
            temp_int1 = (int)temp_var1 + 2;
            temp_int1 = temp_int1;
            if (temp_int1 < 0x10) {
              temp_int1 = 0x10;
            }
            char_ptr3 = (undefined1 *)allocate_string_buffer(GLOBAL_MEMORY_POOL,(longlong)temp_int1,&STRING_POOL_MARKER);
            *char_ptr3 = 0;
            get_string_length(char_ptr3);
                    // WARNING: Subroutine does not return
            memcpy(char_ptr3,temp_undef1,temp_int1);
          }
        }
        temp_ptr2 = (undefined8 *)stack_ptr2[1];
        if (temp_ptr2 < (undefined8 *)stack_ptr2[2]) {
          stack_ptr2[1] = (longlong)(temp_ptr2 + 4);
          *temp_ptr2 = &RESOURCE_ACTIVE_STATE;
          temp_ptr2[1] = 0;
          *(undefined4 *)(temp_ptr2 + 2) = 0;
          *temp_ptr2 = &RESOURCE_CLEANUP_STATE;
          *(undefined4 *)(temp_ptr2 + 2) = 0;
          temp_ptr2[1] = 0;
          *(undefined4 *)((longlong)temp_ptr2 + 0x1c) = 0;
          *(undefined4 *)(temp_ptr2 + 3) = 0;
          temp_int1 = (int)char_ptr1;
          stack_ptr1 = temp_ptr2;
        }
        else {
          temp_var1 = *stack_ptr2;
          temp_var1 = (longlong)temp_ptr2 - temp_var1 >> 5;
          if (temp_var1 == 0) {
            temp_var1 = 1;
LAB_EXPAND_ARRAY:
            char_ptr1 = (undefined1 *)allocate_string_buffer(GLOBAL_MEMORY_POOL,temp_var1 << 5,(char)stack_ptr2[3]);
            temp_ptr2 = (undefined8 *)long_ptr1[1];
            temp_var1 = *long_ptr1;
          }
          else {
            temp_var1 = temp_var1 * 2;
            char_ptr1 = char_ptr3;
            if (temp_var1 != 0) goto LAB_EXPAND_ARRAY;
          }
          stack_ptr_78 = (undefined8 *)expand_memory_pool(temp_var1,temp_ptr2,char_ptr1);
          *stack_ptr_78 = &RESOURCE_ACTIVE_STATE;
          stack_ptr_78[1] = 0;
          *(undefined4 *)(stack_ptr_78 + 2) = 0;
          *stack_ptr_78 = &RESOURCE_CLEANUP_STATE;
          *(undefined4 *)(stack_ptr_78 + 2) = 0;
          stack_ptr_78[1] = 0;
          *(undefined4 *)((longlong)stack_ptr_78 + 0x1c) = 0;
          *(undefined4 *)(stack_ptr_78 + 3) = 0;
          temp_ptr5 = stack_ptr_78 + 4;
          temp_ptr2 = (undefined8 *)long_ptr1[1];
          temp_ptr3 = (undefined8 *)*long_ptr1;
          if (temp_ptr3 != temp_ptr2) {
            do {
              (**(code **)*temp_ptr3)(temp_ptr3,0);
              temp_ptr3 = temp_ptr3 + 4;
            } while (temp_ptr3 != temp_ptr2);
            temp_ptr3 = (undefined8 *)*stack_ptr2;
          }
          if (temp_ptr3 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
            trigger_error_handler(temp_ptr3);
          }
          *stack_ptr2 = (longlong)char_ptr1;
          stack_ptr2[1] = (longlong)temp_ptr5;
          stack_ptr2[2] = (longlong)(char_ptr1 + temp_var1 * 0x20);
          temp_int1 = (int)stack_ptr1;
        }
        temp_uint2 = temp_int1 + 1;
        char_ptr1 = (undefined1 *)(ulonglong)temp_uint2;
        stack_ptr1 = (undefined8 *)CONCAT44(stack_ptr1._4_4_,temp_uint2);
        temp_ptr1 = temp_ptr1 + 4;
      } while ((ulonglong)(longlong)(int)temp_uint2 < stack_ulong1);
    }
    temp_ptr3 = stack_ptr_b8;
    temp_ptr2 = stack_ptr_c0;
    stack_ptr_108 = &RESOURCE_CLEANUP_STATE;
    if (stack_buffer_100 != (char *)0x0) {
                    // WARNING: Subroutine does not return
      trigger_error_handler();
    }
    stack_buffer_100 = (char *)0x0;
    stack_var_f0 = 0;
    stack_ptr_108 = &RESOURCE_ACTIVE_STATE;
    temp_ptr5 = stack_ptr2;
    temp_ptr1 = stack_ptr_c8;
    for (temp_ptr4 = stack_ptr_c0; stack_ptr2 = temp_ptr5, stack_ptr_c8 = temp_ptr1, temp_ptr4 != temp_ptr3;
        temp_ptr4 = temp_ptr4 + 4) {
      (**(code **)*temp_ptr4)(temp_ptr4,0);
      temp_ptr5 = stack_ptr2;
      temp_ptr1 = stack_ptr_c8;
    }
    temp_ptr3 = temp_ptr5;
    if (temp_ptr2 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
      trigger_error_handler(temp_ptr2);
    }
    for (; temp_ptr3 != temp_ptr1; temp_ptr3 = temp_ptr3 + 4) {
      (**(code **)*temp_ptr3)(temp_ptr3,0);
    }
    if (temp_ptr5 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
      trigger_error_handler(temp_ptr5);
    }
    stack_ptr_a0 = &RESOURCE_CLEANUP_STATE;
    if (stack_var_98 != 0) {
                    // WARNING: Subroutine does not return
      trigger_error_handler();
    }
  }
  return;
}



undefined8 process_config_command(longlong config_handler,int *command_params)

{
  int *int_ptr1;
  int command_type;
  longlong temp_var1;
  longlong temp_var2;
  undefined *temp_undef1;
  undefined *temp_undef2;
  
  command_type = *command_params;
  if (command_type == 0x40) {
    if ((*(char *)(config_handler + 0x60) != '\0') &&
       (temp_var1 = *(longlong *)(config_handler + 0x20), *(longlong *)(config_handler + 0x28) - temp_var1 >> 5 != 0)) {
      temp_var2 = -1;
      temp_undef2 = &DEFAULT_CONFIG_STRING;
      if (*(int *)(config_handler + 100) == -1) {
        if (*(undefined **)(temp_var1 + 8) != (undefined *)0x0) {
          temp_undef2 = *(undefined **)(temp_var1 + 8);
        }
        do {
          temp_var2 = temp_var2 + 1;
        } while (temp_undef2[temp_var2] != '\0');
      }
      else {
        temp_undef1 = *(undefined **)((longlong)*(int *)(config_handler + 100) * 0x20 + 8 + temp_var1);
        if (temp_undef1 != (undefined *)0x0) {
          temp_undef2 = temp_undef1;
        }
        do {
          temp_var2 = temp_var2 + 1;
        } while (temp_undef2[temp_var2] != '\0');
      }
                    // WARNING: Subroutine does not return
      memmove(*(undefined8 *)(command_params + 6),temp_undef2,temp_var2 + 1);
    }
    if ((*(longlong *)(config_handler + 0x28) - *(longlong *)(config_handler + 0x20) & 0xffffffffffffffe0U) == 0)
    {
      *(undefined1 *)(config_handler + 0x60) = 0;
      process_config_file_data(config_handler);
      *(undefined8 *)(config_handler + 100) = 0xffffffffffffffff;
    }
  }
  else if (command_type == 0x80) {
    process_config_file_data(config_handler);
    if (*(longlong *)(config_handler + 0x28) - *(longlong *)(config_handler + 0x20) >> 5 != 0) {
      *(undefined1 *)(config_handler + 0x60) = 1;
      if (command_params[5] == 3) {
        int_ptr1 = (int *)(config_handler + 100);
        *int_ptr1 = *int_ptr1 + -1;
        if (*int_ptr1 < 0) {
          *(undefined1 *)(config_handler + 0x70) = 1;
          *(int *)(config_handler + 100) =
               (int)(*(longlong *)(config_handler + 0x28) - *(longlong *)(config_handler + 0x20) >> 5) + -1;
          return 0;
        }
      }
      else {
        if (command_params[5] != 4) {
          return 0;
        }
        *(int *)(config_handler + 100) = *(int *)(config_handler + 100) + 1;
        command_type = *(int *)(config_handler + 100);
        if ((int)(*(longlong *)(config_handler + 0x28) - *(longlong *)(config_handler + 0x20) >> 5) + -1 <
            *(int *)(config_handler + 100)) {
          command_type = 0;
        }
        *(int *)(config_handler + 100) = command_type;
      }
      *(undefined1 *)(config_handler + 0x70) = 1;
    }
  }
  else if (command_type == 0x100) {
    process_config_file_data(config_handler);
    if ((*(longlong *)(config_handler + 0x28) - *(longlong *)(config_handler + 0x20) & 0xffffffffffffffe0U) == 0)
    {
      *(undefined1 *)(config_handler + 0x60) = 0;
      process_config_file_data(config_handler);
      *(undefined8 *)(config_handler + 100) = 0xffffffffffffffff;
    }
    else {
      *(undefined1 *)(config_handler + 0x60) = 1;
      if (*(int *)(config_handler + 0x68) != -1) {
        temp_undef2 = *(undefined **)
                  ((longlong)*(int *)(config_handler + 0x68) * 0x20 + 8 + *(longlong *)(config_handler + 0x20));
        temp_var1 = -1;
        temp_undef1 = &DEFAULT_CONFIG_STRING;
        if (temp_undef2 != (undefined *)0x0) {
          temp_undef1 = temp_undef2;
        }
        do {
          temp_var2 = temp_var1;
          temp_var1 = temp_var2 + 1;
        } while (temp_undef1[temp_var1] != '\0');
                    // WARNING: Subroutine does not return
        memmove(*(undefined8 *)(command_params + 6),temp_undef1,temp_var2 + 2);
      }
    }
    if (*(char *)(config_handler + 0x71) != '\0') {
      *(undefined1 *)(config_handler + 0x71) = 0;
      command_params[0xb] = command_params[8];
      command_params[0xc] = 0;
      command_params[0xd] = 0;
    }
  }
  return 0;
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address