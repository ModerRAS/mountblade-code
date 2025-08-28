#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part006.c - UI系统数据处理和字符串管理模块
// 包含11个函数，主要处理字符串复制、内存管理、数据结构操作和UI组件初始化

/**
 * UI数据复制器 - 复制UI数据结构中的字符串和数值数据
 * @param target_ptr 目标数据结构指针
 * @param source_ptr 源数据指针
 * @param offset_ptr 偏移量指针
 * @param data_size 数据大小
 */
void ui_data_structure_copier(longlong target_ptr, undefined8 source_ptr, undefined8 offset_ptr, longlong data_size)
{
  ulonglong buffer_size;
  undefined8 max_size;
  undefined *temp_buffer;
  longlong source_data;
  uint string_length;
  undefined4 flags;
  
  max_size = 0xfffffffffffffffe;
  ui_string_buffer_initializer(&temp_buffer);
  buffer_size = (ulonglong)string_length;
  if (source_data != 0) {
    ui_memory_allocate(target_ptr + 0x10, buffer_size);
  }
  if (string_length != 0) {
    // 复制字符串数据到目标位置
    memcpy(*(undefined8 *)(target_ptr + 0x18), source_data, buffer_size, data_size, max_size);
  }
  *(undefined4 *)(target_ptr + 0x20) = 0;
  if (*(longlong *)(target_ptr + 0x18) != 0) {
    *(undefined1 *)(buffer_size + *(longlong *)(target_ptr + 0x18)) = 0; // 字符串终止符
  }
  *(undefined4 *)(target_ptr + 0x2c) = flags;
  temp_buffer = &UI_STRING_TERMINATOR;
  if (source_data != 0) {
    // 释放源数据内存
    ui_memory_deallocator(source_data, source_data);
  }
  return;
}

/**
 * UI字符串创建器 - 创建并初始化UI字符串对象
 * @param param_1 字符串内容指针，可为NULL
 * @return 返回创建的字符串对象指针
 */
undefined8 * ui_string_object_creator(longlong param_1)
{
  undefined8 *string_object;
  ulonglong string_length;
  ulonglong char_index;
  
  // 分配字符串对象内存
  string_object = (undefined8 *)ui_memory_allocator(GLOBAL_MEMORY_POOL, 0x20, 8, 3);
  *string_object = &UI_VTABLE_START;
  string_object[1] = 0;
  *(undefined4 *)(string_object + 2) = 0;
  *string_object = &UI_STRING_TERMINATOR;
  string_object[3] = 0;
  string_object[1] = 0;
  *(undefined4 *)(string_object + 2) = 0;
  
  if (param_1 != 0) {
    // 计算输入字符串长度
    string_length = 0xffffffffffffffff;
    do {
      char_index = string_length;
      string_length = char_index + 1;
    } while (*(char *)(param_1 + string_length) != '\0');
    
    ui_memory_allocate(string_object, string_length & 0xffffffff);
    if ((int)string_length != 0) {
      // 复制字符串内容
      memcpy(string_object[1], param_1, (int)char_index + 2);
    }
    *(undefined4 *)(string_object + 2) = 0;
    if ((undefined1 *)string_object[1] != (undefined1 *)0x0) {
      *(undefined1 *)string_object[1] = 0; // 字符串终止符
    }
  }
  return string_object;
}

/**
 * UI消息框创建器 - 创建消息框UI组件
 * @param param_1 组件类型标识
 * @param param_2 消息框对象指针
 * @param param_3 消息框参数
 * @param param_4 额外参数
 * @return 返回消息框对象指针
 */
undefined8 * ui_messagebox_creator(undefined8 param_1, undefined8 *param_2, undefined8 param_3, undefined8 param_4)
{
  *param_2 = &UI_VTABLE_START;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  *param_2 = &UI_COMPONENT_VTABLE;
  param_2[1] = param_2 + 3;
  *(undefined1 *)(param_2 + 3) = 0;
  *(undefined4 *)(param_2 + 2) = 0x17; // 消息框类型标识
  strcpy_s(param_2[1], 0x80, &UI_MESSAGEBOX_TEMPLATE, param_4, 0, 0xfffffffffffffffe);
  return param_2;
}

/**
 * UI对话框创建器 - 创建对话框UI组件
 * @param param_1 组件类型标识
 * @param param_2 对话框对象指针
 * @param param_3 对话框参数
 * @param param_4 额外参数
 * @return 返回对话框对象指针
 */
undefined8 * ui_dialog_creator(undefined8 param_1, undefined8 *param_2, undefined8 param_3, undefined8 param_4)
{
  *param_2 = &UI_VTABLE_START;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  *param_2 = &UI_COMPONENT_VTABLE;
  param_2[1] = param_2 + 3;
  *(undefined1 *)(param_2 + 3) = 0;
  *(undefined4 *)(param_2 + 2) = 0x11; // 对话框类型标识
  strcpy_s(param_2[1], 0x80, &UI_DIALOG_TEMPLATE, param_4, 0, 0xfffffffffffffffe);
  return param_2;
}

/**
 * UI事件处理器 - 处理UI系统事件
 * @param param_1 事件类型
 * @param param_2 事件参数
 * @param param_3 事件数据
 * @param param_4 上下文信息
 */
void ui_event_processor(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4)
{
  ui_event_dispatcher(param_1, UI_EVENT_HANDLER, param_3, param_4, 0xfffffffffffffffe);
  return;
}

/**
 * UI组件初始化器 - 初始化UI组件并设置回调
 * @param param_1 组件对象指针
 */
void ui_component_initializer(longlong *param_1)
{
  byte comparison_result;
  bool is_less_than;
  undefined8 *current_node;
  undefined8 *next_node;
  char string_char;
  longlong node_data;
  longlong *array_ptr;
  byte *string_ptr;
  byte *temp_string;
  undefined8 *component_ptr;
  byte *processed_string;
  int string_index;
  ulonglong iteration_count;
  int length;
  longlong *current_array_ptr;
  longlong array_size;
  ulonglong capacity;
  byte *source_string;
  byte *target_string;
  ulonglong new_capacity;
  longlong *new_array;
  uint new_size;
  longlong temp_size;
  longlong *temp_array_ptr;
  undefined *stack_buffer;
  byte *local_buffer;
  uint buffer_size;
  ulonglong buffer_capacity;
  undefined *temp_ptr;
  undefined1 *string_buffer;
  uint string_length;
  ulonglong total_length;
  longlong *array_start;
  longlong *array_end;
  longlong *array_capacity;
  undefined4 allocation_flags;
  undefined8 *ptr1;
  undefined8 *ptr2;
  undefined8 temp_value;
  undefined4 temp_flags;
  undefined8 context;
  
  context = 0xfffffffffffffffe;
  GLOBAL_UI_COMPONENT = param_1;
  if (param_1 != (longlong *)0x0) {
    // 调用组件的初始化回调
    (**(code **)(*param_1 + 8))();
  }
  
  // 初始化动态数组
  array_start = (longlong *)0x0;
  array_end = (longlong *)0x0;
  capacity = 0;
  array_capacity = (longlong *)0x0;
  allocation_flags = 3;
  ui_dynamic_array_initializer(&array_start);
  
  current_array_ptr = array_end;
  if (GLOBAL_UI_COMPONENT != (longlong *)0x0) {
    ptr1 = (undefined8 *)0x0;
    ptr2 = (undefined8 *)0x0;
    temp_value = 0;
    temp_flags = 3;
    
    // 获取组件数据
    (**(code **)(*_GLOBAL_UI_COMPONENT + 0x18))(_GLOBAL_UI_COMPONENT, &ptr1);
    component_ptr = ptr1;
    current_array_ptr = array_end;
    
    // 处理组件数据数组
    if ((longlong)ptr2 - (longlong)ptr1 >> 5 != 0) {
      temp_array_ptr = array_end;
      current_array_ptr = array_capacity;
      iteration_count = capacity;
      array_ptr = array_end;
      
      do {
        // 处理每个组件项
        stack_buffer = &UI_STRING_TERMINATOR;
        buffer_capacity = 0;
        local_buffer = (undefined1 *)0x0;
        buffer_size = 0;
        
        // 读取字符串数据
        ui_memory_allocate(&stack_buffer, *(undefined4 *)(capacity + 0x10 + (longlong)ptr1));
        length = *(int *)(capacity + 0x10 + (longlong)component_ptr);
        if (length != 0) {
          memcpy(local_buffer, *(undefined8 *)(capacity + 8 + (longlong)component_ptr), length + 1);
        }
        
        if (*(longlong *)(capacity + 8 + (longlong)component_ptr) != 0) {
          buffer_size = 0;
          if (local_buffer != (undefined1 *)0x0) {
            *local_buffer = 0;
          }
          buffer_capacity = buffer_capacity & 0xffffffff;
        }
        
        // 处理字符串内容
        temp_ptr = &UI_STRING_TERMINATOR;
        total_length = 0;
        string_buffer = (undefined1 *)0x0;
        string_length = 0;
        ui_memory_allocate(&temp_ptr, buffer_size);
        
        if (buffer_size != 0) {
          memcpy(string_buffer, local_buffer, buffer_size + 1);
        }
        
        if (local_buffer != (undefined1 *)0x0) {
          string_length = 0;
          if (string_buffer != (undefined1 *)0x0) {
            *string_buffer = 0;
          }
          total_length = total_length & 0xffffffff;
        }
        
        // 添加模块路径后缀
        string_length = string_length + 0xe;
        ui_memory_allocate(&temp_ptr, string_length);
        component_ptr = (undefined8 *)(string_buffer + string_length);
        *component_ptr = 0x75646f4d6275532f; // "/SubotusMod"
        *(undefined4 *)(component_ptr + 1) = 0x782e656c; // "le.x"
        *(undefined2 *)((longlong)component_ptr + 0xc) = 0x6c6d; // "ml"
        *(undefined1 *)((longlong)component_ptr + 0xe) = 0;
        string_length = string_length;
        
        // 验证字符串格式
        comparison_result = ui_string_validator(&temp_ptr);
        current_array_ptr = array_ptr;
        if (comparison_result != '\0') {
          node_data = ui_component_hash_calculator(&temp_ptr);
          if (array_ptr < current_array_ptr) {
            current_array_ptr = array_ptr + 1;
            *array_ptr = node_data;
            temp_array_ptr = current_array_ptr;
            array_end = current_array_ptr;
          }
          else {
            // 数组扩容
            temp_size = (longlong)array_ptr - (longlong)array_start;
            array_size = temp_size >> 3;
            if (array_size == 0) {
              array_size = 1;
LAB_ARRAY_EXPANSION:
              array_ptr = (longlong *)ui_memory_reallocator(GLOBAL_MEMORY_POOL, array_size * 8, (undefined1)allocation_flags);
            }
            else {
              array_size = array_size * 2;
              if (array_size != 0) goto LAB_ARRAY_EXPANSION;
              array_ptr = (longlong *)0x0;
            }
            
            if (array_start != temp_array_ptr) {
              memmove(array_ptr, array_start, temp_size);
            }
            
            *array_ptr = node_data;
            current_array_ptr = array_ptr + 1;
            temp_array_ptr = current_array_ptr;
            
            if (array_start != (longlong *)0x0) {
              ui_memory_deallocator();
            }
            
            current_array_ptr = array_ptr + array_size;
            array_start = array_ptr;
            array_end = current_array_ptr;
            array_capacity = current_array_ptr;
          }
        }
        
        // 清理临时缓冲区
        temp_ptr = &UI_STRING_TERMINATOR;
        if (string_buffer != (undefined1 *)0x0) {
          ui_memory_deallocator();
        }
        string_buffer = (undefined1 *)0x0;
        total_length = total_length & 0xffffffff00000000;
        temp_ptr = &UI_VTABLE_START;
        stack_buffer = &UI_STRING_TERMINATOR;
        
        if (local_buffer != (undefined1 *)0x0) {
          ui_memory_deallocator();
        }
        local_buffer = (byte *)0x0;
        buffer_capacity = buffer_capacity & 0xffffffff00000000;
        stack_buffer = &UI_VTABLE_START;
        
        new_size = (int)iteration_count + 1;
        iteration_count = (ulonglong)new_size;
        capacity = capacity + 0x20;
        array_ptr = current_array_ptr;
        component_ptr = ptr1;
        current_array_ptr = array_end;
      } while ((ulonglong)(longlong)new_size < (ulonglong)((longlong)ptr2 - (longlong)ptr1 >> 5));
    }
    
    // 清理组件数据
    for (; next_node = ptr2, component_ptr != ptr2; component_ptr = component_ptr + 4) {
      ptr2 = current_array_ptr;
      (**(code **)*component_ptr)(component_ptr, 0);
      current_array_ptr = ptr2;
      ptr2 = next_node;
    }
    
    if (ptr1 != (undefined8 *)0x0) {
      ptr2 = current_array_ptr;
      ui_memory_deallocator();
    }
    ptr1 = (undefined8 *)0x0;
    current_array_ptr = ptr2;
  }
  
  // 处理已收集的组件数据
  length = 0;
  capacity = (longlong)current_array_ptr - (longlong)array_start >> 3;
  current_array_ptr = array_start;
  if (capacity != 0) {
    do {
      iteration_count = 0;
      source_string = &UI_STRING_DATA_START;
      node_data = *current_array_ptr;
      stack_buffer = &UI_STRING_TERMINATOR;
      buffer_capacity = 0;
      local_buffer = (byte *)0x0;
      buffer_size = 0;
      
      // 读取节点字符串数据
      ui_memory_allocate(&stack_buffer, *(undefined4 *)(node_data + 0x10));
      if (*(int *)(node_data + 0x10) != 0) {
        memcpy(local_buffer, *(undefined8 *)(node_data + 8), *(int *)(node_data + 0x10) + 1);
      }
      
      if (*(longlong *)(node_data + 8) != 0) {
        buffer_size = 0;
        if (local_buffer != (byte *)0x0) {
          *local_buffer = 0;
        }
        buffer_capacity = buffer_capacity & 0xffffffff;
      }
      
      // 字符串字符处理
      new_capacity = iteration_count;
      if (buffer_size != 0) {
        do {
          // 特殊字符转换处理
          if ((byte)(local_buffer[new_capacity] + 0xbf) < 0x1a) {
            local_buffer[new_capacity] = local_buffer[new_capacity] + 0x20;
          }
          new_size = (int)iteration_count + 1;
          iteration_count = (ulonglong)new_size;
          new_capacity = new_capacity + 1;
        } while (new_size < buffer_size);
      }
      
      // 查找匹配的UI组件
      target_string = UI_COMPONENT_REGISTRY;
      if (UI_COMPONENT_REGISTRY == (byte *)0x0) {
LAB_REGISTRY_SEARCH:
        source_string = &UI_STRING_DATA_START;
        target_string = UI_COMPONENT_REGISTRY;
        while (temp_string = source_string, target_string != (byte *)0x0) {
          if (buffer_size == 0) {
            is_less_than = false;
            processed_string = *(byte **)(target_string + 8);
          }
          else {
            if (*(int *)(target_string + 0x30) == 0) {
              is_less_than = true;
            }
            else {
              source_string = local_buffer;
              do {
                processed_string = source_string + (*(longlong *)(target_string + 0x28) - (longlong)local_buffer);
                new_size = (uint)*source_string - (uint)*processed_string;
                target_string = (byte *)(ulonglong)new_size;
                if (new_size != 0) break;
                source_string = source_string + 1;
              } while (*processed_string != 0);
              is_less_than = 0 < (int)new_size;
              if ((int)new_size < 1) {
                processed_string = *(byte **)(target_string + 8);
                goto LAB_COMPARISON_RESULT;
              }
            }
            processed_string = *(byte **)target_string;
          }
LAB_COMPARISON_RESULT:
          source_string = target_string;
          target_string = processed_string;
          if (is_less_than) {
            source_string = temp_string;
          }
        }
        
        if (source_string == &UI_STRING_DATA_START) {
LAB_CREATE_COMPONENT:
          component_ptr = (undefined8 *)ui_component_factory(&stack_buffer, &temp_array_ptr, target_string, source_string, &stack_buffer);
          source_string = (byte *)*component_ptr;
        }
        else if (*(int *)(source_string + 0x30) != 0) {
          if (buffer_size != 0) {
            target_string = *(byte **)(source_string + 0x28);
            array_size = (longlong)local_buffer - (longlong)target_string;
            do {
              temp_string = target_string + array_size;
              new_size = (uint)*target_string - (uint)*temp_string;
              target_string = (byte *)(ulonglong)new_size;
              if (new_size != 0) break;
              target_string = target_string + 1;
            } while (*temp_string != 0);
            if ((int)new_size < 1) goto LAB_COMPONENT_FOUND;
          }
          goto LAB_CREATE_COMPONENT;
        }
LAB_COMPONENT_FOUND:
        *(longlong *)(source_string + 0x40) = node_data;
      }
      else {
        // 在注册表中搜索匹配项
        do {
          if (buffer_size == 0) {
            is_less_than = false;
            temp_string = *(byte **)(target_string + 8);
          }
          else {
            if (*(int *)(target_string + 0x30) == 0) {
              is_less_than = true;
            }
            else {
              temp_string = local_buffer;
              do {
                new_size = (uint)temp_string[*(longlong *)(target_string + 0x28) - (longlong)local_buffer];
                length = *temp_string - new_size;
                if (*temp_string != new_size) break;
                temp_string = temp_string + 1;
              } while (new_size != 0);
              is_less_than = 0 < length;
              if (length < 1) {
                temp_string = *(byte **)(target_string + 8);
                goto LAB_SEARCH_RESULT;
              }
            }
            temp_string = *(byte **)target_string;
          }
LAB_SEARCH_RESULT:
          if (is_less_than) {
            target_string = source_string;
          }
          source_string = target_string;
          target_string = temp_string;
        } while (temp_string != (byte *)0x0);
        
        target_string = (byte *)0x0;
        if (source_string == &UI_STRING_DATA_START) goto LAB_REGISTRY_SEARCH;
        if (*(int *)(source_string + 0x30) != 0) {
          if (buffer_size != 0) {
            source_string = *(byte **)(source_string + 0x28);
            target_string = local_buffer + -(longlong)source_string;
            do {
              comparison_result = *source_string;
              new_size = (uint)source_string[(longlong)target_string];
              if (comparison_result != new_size) break;
              source_string = source_string + 1;
            } while (new_size != 0);
            if ((int)(comparison_result - new_size) < 1) goto LAB_FINAL_PROCESS;
          }
          goto LAB_REGISTRY_SEARCH;
        }
      }
LAB_FINAL_PROCESS:
      stack_buffer = &UI_STRING_TERMINATOR;
      if (local_buffer != (byte *)0x0) {
        ui_memory_deallocator();
      }
      local_buffer = (byte *)0x0;
      buffer_capacity = buffer_capacity & 0xffffffff00000000;
      stack_buffer = &UI_VTABLE_START;
      length = length + 1;
      current_array_ptr = current_array_ptr + 1;
    } while ((ulonglong)(longlong)length < capacity);
  }
  
  // 清理数组内存
  if (array_start != (longlong *)0x0) {
    ui_memory_deallocator(array_start);
  }
  return;
}

/**
 * UI动态数组处理器 - 处理UI组件的动态数组操作
 * @param param_1 数组对象指针
 */
void ui_dynamic_array_processor(ulonglong *param_1)
{
  undefined8 *array_data;
  undefined8 *array_end;
  char validation_result;
  undefined8 hash_value;
  longlong array_capacity;
  undefined8 *array_start;
  undefined8 *temp_ptr;
  undefined8 *new_array;
  int item_count;
  int *item_size_ptr;
  int item_size;
  ulonglong total_items;
  undefined1 stack_buffer [32];
  undefined *buffer_ptr;
  undefined1 *string_buffer;
  uint buffer_size;
  ulonglong buffer_capacity;
  undefined4 temp_flags;
  undefined *temp_buffer;
  longlong temp_offset;
  uint total_size;
  undefined4 temp_size;
  ulonglong array_length;
  undefined8 *current_ptr;
  undefined8 *end_ptr;
  undefined8 array_data_size;
  undefined4 allocation_flags;
  undefined8 *iterator_ptr;
  int iteration_index;
  ulonglong temp_array [2];
  ulonglong security_cookie;
  
  security_cookie = GLOBAL_SECURITY_COOKIE ^ (ulonglong)stack_buffer;
  iteration_index = 0;
  temp_flags = 0;
  temp_buffer = &UI_STATIC_BUFFER;
  iterator_ptr = temp_array;
  temp_array[0] = temp_array[0] & 0xffffffffffffff00;
  iteration_index = 6;
  strcpy_s(temp_array, 0x10, &UI_MODULE_PATH);
  temp_flags = 1;
  ui_string_constructor(&string_buffer, &temp_buffer);
  temp_flags = 0;
  temp_buffer = &UI_VTABLE_START;
  item_size = total_size + 8;
  ui_memory_allocate(&string_buffer, item_size);
  
  // 构建模块路径字符串
  *(undefined8 *)((ulonglong)total_size + temp_offset) = 0x2f73656c75646f4d; // "Module/Sub"
  *(undefined1 *)((undefined8 *)((ulonglong)total_size + temp_offset) + 1) = 0;
  
  current_ptr = (undefined8 *)0x0;
  end_ptr = (undefined8 *)0x0;
  array_data_size = 0;
  allocation_flags = 3;
  total_size = item_size;
  ui_collection_enumerator(&string_buffer, &current_ptr);
  
  array_length = (longlong)end_ptr - (longlong)current_ptr >> 5;
  buffer_capacity = array_length;
  array_start = current_ptr;
  temp_ptr = current_ptr;
  new_array = end_ptr;
  
  if (array_length != 0) {
    item_size_ptr = (int *)(current_ptr + 2);
    do {
      temp_buffer = &UI_STRING_TERMINATOR;
      temp_array[0] = 0;
      iterator_ptr = (ulonglong *)0x0;
      iteration_index = 0;
      ui_memory_allocate(&temp_buffer, *item_size_ptr);
      
      if (*item_size_ptr != 0) {
        memcpy(iterator_ptr, *(undefined8 *)(item_size_ptr + -2), *item_size_ptr + 1);
      }
      
      if (*(longlong *)(item_size_ptr + -2) != 0) {
        iteration_index = 0;
        if (iterator_ptr != (ulonglong *)0x0) {
          *(undefined1 *)iterator_ptr = 0;
        }
        temp_array[0] = temp_array[0] & 0xffffffff;
      }
      
      // 处理项目字符串
      buffer_ptr = &UI_STRING_TERMINATOR;
      buffer_capacity = 0;
      string_buffer = (undefined1 *)0x0;
      buffer_size = 0;
      ui_memory_allocate(&buffer_ptr, iteration_index);
      
      if (iteration_index != 0) {
        memcpy(string_buffer, iterator_ptr, iteration_index + 1);
      }
      
      if (iterator_ptr != (ulonglong *)0x0) {
        buffer_size = 0;
        if (string_buffer != (undefined1 *)0x0) {
          *string_buffer = 0;
        }
        buffer_capacity = buffer_capacity & 0xffffffff;
      }
      
      // 添加模块路径
      buffer_size = buffer_size + 0xe;
      ui_memory_allocate(&buffer_ptr, buffer_size);
      array_start = (undefined8 *)(string_buffer + buffer_size);
      *array_start = 0x75646f4d6275532f; // "/SubotusMod"
      *(undefined4 *)(array_start + 1) = 0x782e656c; // "le.x"
      *(undefined2 *)((longlong)array_start + 0xc) = 0x6c6d; // "ml"
      *(undefined1 *)((longlong)array_start + 0xe) = 0;
      buffer_size = buffer_size;
      
      // 验证字符串格式
      validation_result = ui_string_validator(&buffer_ptr);
      if (validation_result != '\0') {
        hash_value = ui_component_hash_calculator(&buffer_ptr);
        array_start = (undefined8 *)param_1[1];
        if (array_start < (undefined8 *)param_1[2]) {
          param_1[1] = (ulonglong)(array_start + 1);
          *array_start = hash_value;
        }
        else {
          // 数组扩容处理
          temp_ptr = (undefined8 *)*param_1;
          array_capacity = (longlong)array_start - (longlong)temp_ptr >> 3;
          if (array_capacity == 0) {
            array_capacity = 1;
LAB_ARRAY_RESIZE:
            new_array = (undefined8 *)ui_memory_reallocator(GLOBAL_MEMORY_POOL, array_capacity * 8, (char)param_1[3]);
            array_start = (undefined8 *)param_1[1];
            temp_ptr = (undefined8 *)*param_1;
          }
          else {
            array_capacity = array_capacity * 2;
            if (array_capacity != 0) goto LAB_ARRAY_RESIZE;
            new_array = (undefined8 *)0x0;
          }
          
          if (temp_ptr != array_start) {
            memmove(new_array, temp_ptr, (longlong)array_start - (longlong)temp_ptr);
          }
          
          *new_array = hash_value;
          if (*param_1 != 0) {
            ui_memory_deallocator();
          }
          
          *param_1 = (ulonglong)new_array;
          param_1[1] = (ulonglong)(new_array + 1);
          param_1[2] = (ulonglong)(new_array + array_capacity);
          array_length = buffer_capacity;
        }
      }
      
      // 清理临时缓冲区
      buffer_ptr = &UI_STRING_TERMINATOR;
      if (string_buffer != (undefined1 *)0x0) {
        ui_memory_deallocator();
      }
      string_buffer = (undefined1 *)0x0;
      buffer_capacity = buffer_capacity & 0xffffffff00000000;
      buffer_ptr = &UI_VTABLE_START;
      temp_buffer = &UI_STRING_TERMINATOR;
      if (iterator_ptr != (ulonglong *)0x0) {
        ui_memory_deallocator();
      }
      iterator_ptr = (ulonglong *)0x0;
      temp_array[0] = temp_array[0] & 0xffffffff00000000;
      temp_buffer = &UI_VTABLE_START;
      iteration_index = iteration_index + 1;
      item_size_ptr = item_size_ptr + 8;
      array_start = current_ptr;
      temp_ptr = current_ptr;
      new_array = end_ptr;
    } while ((ulonglong)(longlong)iteration_index < array_length);
  }
  
  // 清理集合数据
  for (; array_end = end_ptr, array_data = current_ptr, array_start != end_ptr; array_start = array_start + 4) {
    current_ptr = temp_ptr;
    end_ptr = new_array;
    (**(code **)*array_start)(array_start, 0);
    temp_ptr = current_ptr;
    new_array = end_ptr;
    end_ptr = array_end;
  }
  
  if (current_ptr != (undefined8 *)0x0) {
    current_ptr = temp_ptr;
    end_ptr = new_array;
    ui_memory_deallocator(array_data);
  }
  
  string_buffer = &UI_STRING_TERMINATOR;
  if (temp_offset != 0) {
    current_ptr = temp_ptr;
    end_ptr = new_array;
    ui_memory_deallocator();
  }
  temp_offset = 0;
  temp_size = 0;
  string_buffer = &UI_VTABLE_START;
  current_ptr = temp_ptr;
  end_ptr = new_array;
  
  // 安全检查
  ui_security_check(security_cookie ^ (ulonglong)stack_buffer);
}

/**
 * UI资源查找器 - 在UI资源中查找指定项目
 * @param param_1 查找参数
 * @param param_2 资源类型
 * @param param_3 查找上下文
 * @param param_4 额外参数
 * @return 找到的资源句柄
 */
undefined8 ui_resource_finder(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4)
{
  uint string_length;
  undefined8 result;
  longlong string_data;
  undefined *stack_buffer [3];
  undefined *temp_buffer;
  longlong data_offset;
  uint buffer_size;
  
  ui_string_processor(&temp_buffer, param_1, param_3, param_4, 0xfffffffffffffffe);
  string_length = 0;
  if (buffer_size != 0) {
    string_data = 0;
    do {
      // 字符串字符标准化处理
      if ((byte)(*(char *)(data_offset + string_data) + 0xbfU) < 0x1a) {
        *(char *)(data_offset + string_data) = *(char *)(data_offset + string_data) + ' ';
      }
      string_length = string_length + 1;
      string_data = string_data + 1;
    } while (string_length < buffer_size);
  }
  
  ui_resource_lookup(string_length, stack_buffer, &temp_buffer);
  if (stack_buffer[0] == &UI_STRING_DATA_START) {
    result = 0;
  }
  else {
    result = *(undefined8 *)(stack_buffer[0] + 0x40);
  }
  
  temp_buffer = &UI_STRING_TERMINATOR;
  if (data_offset != 0) {
    ui_memory_deallocator();
  }
  return result;
}

/**
 * UI清理器 - 清理UI组件和资源
 * @param param_1 清理参数
 * @param param_2 清理类型
 * @param param_3 上下文信息
 * @param param_4 保留参数
 */
void ui_cleanup_processor(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4)
{
  ui_recursive_cleanup(param_1, UI_COMPONENT_REGISTRY, param_3, param_4, 0xfffffffffffffffe);
  return;
}

/**
 * UI组件查找器 - 在组件注册表中查找指定组件
 * @param param_1 查找标识符
 * @param param_2 结果存储位置
 * @param param_3 查找参数
 * @return 查找结果指针
 */
undefined8 * ui_component_finder(undefined8 param_1, undefined8 *param_2, longlong param_3)
{
  byte char_comparison;
  bool is_less_than;
  byte *component_name;
  uint name_length;
  int comparison_result;
  longlong name_offset;
  undefined8 *current_component;
  undefined8 *next_component;
  undefined8 *previous_component;
  undefined8 *found_component;
  
  if (UI_COMPONENT_REGISTRY != (undefined8 *)0x0) {
    current_component = UI_COMPONENT_REGISTRY;
    found_component = (undefined8 *)&UI_STRING_DATA_START;
    do {
      if (*(int *)(param_3 + 0x10) == 0) {
        next_component = (undefined8 *)current_component[1];
        is_less_than = false;
      }
      else {
        if (*(int *)(current_component + 6) == 0) {
          is_less_than = true;
        }
        else {
          component_name = *(byte **)(param_3 + 8);
          name_offset = current_component[5] - (longlong)component_name;
          do {
            name_length = (uint)component_name[name_offset];
            comparison_result = *component_name - name_length;
            if (*component_name != name_length) break;
            component_name = component_name + 1;
          } while (name_length != 0);
          is_less_than = 0 < comparison_result;
          if (comparison_result < 1) {
            next_component = (undefined8 *)current_component[1];
            goto LAB_COMPARISON_DONE;
          }
        }
        next_component = (undefined8 *)*current_component;
      }
LAB_COMPARISON_DONE:
      previous_component = current_component;
      if (is_less_than) {
        previous_component = found_component;
      }
      current_component = next_component;
      found_component = previous_component;
    } while (next_component != (undefined8 *)0x0);
    
    if (found_component != (undefined8 *)&UI_STRING_DATA_START) {
      if (*(int *)(found_component + 6) == 0) {
LAB_RETURN_FOUND:
        *param_2 = found_component;
        return param_2;
      }
      if (*(int *)(param_3 + 0x10) != 0) {
        component_name = (byte *)found_component[5];
        name_offset = *(longlong *)(param_3 + 8) - (longlong)component_name;
        do {
          char_comparison = *component_name;
          name_length = (uint)component_name[name_offset];
          if (char_comparison != name_length) break;
          component_name = component_name + 1;
        } while (name_length != 0);
        if ((int)(char_comparison - name_length) < 1) goto LAB_RETURN_FOUND;
      }
    }
  }
  
  *param_2 = &UI_STRING_DATA_START;
  return param_2;
}

/**
 * UI递归清理器 - 递归清理UI组件树
 * @param param_1 清理参数
 * @param param_2 组件树根节点
 * @param param_3 清理上下文
 * @param param_4 保留参数
 */
void ui_recursive_cleanup(undefined8 param_1, undefined8 *param_2, undefined8 param_3, undefined8 param_4)
{
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  
  // 递归清理子组件
  ui_recursive_cleanup(&UI_STRING_DATA_START, *param_2, param_3, param_4, 0xfffffffffffffffe);
  
  // 清理当前组件
  param_2[4] = &UI_STRING_TERMINATOR;
  if (param_2[5] != 0) {
    ui_memory_deallocator();
  }
  param_2[5] = 0;
  *(undefined4 *)(param_2 + 7) = 0;
  param_2[4] = &UI_VTABLE_START;
  ui_memory_deallocator(param_2);
}

/**
 * UI组件工厂 - 创建新的UI组件实例
 * @param param_1 工厂参数
 * @param param_2 组件类型
 * @param param_3 组件数据
 * @param param_4 父组件指针
 * @param param_5 上下文信息
 * @return 新创建的组件指针
 */
undefined8 * ui_component_factory(ulonglong param_1, undefined8 *param_2, undefined8 param_3, longlong *param_4, longlong param_5)
{
  byte char_diff;
  bool is_less_than;
  undefined8 *component;
  longlong *component_data;
  byte *name_ptr;
  undefined8 *temp_component;
  uint name_length;
  longlong *name_offset;
  longlong *current_component;
  ulonglong search_result;
  undefined8 component_data_size;
  
  // 检查是否为根组件或默认组件
  if ((param_4 == UI_COMPONENT_ROOT) || (param_4 == (longlong *)&UI_STRING_DATA_START)) {
    if ((UI_COMPONENT_FLAG != 0) && (*(int *)(param_5 + 0x10) != 0)) {
      current_component = UI_COMPONENT_ROOT;
      name_offset = param_4;
      if ((int)UI_COMPONENT_ROOT[6] != 0) {
        name_ptr = *(byte **)(param_5 + 8);
        name_offset = (longlong *)(UI_COMPONENT_ROOT[5] - (longlong)name_ptr);
        do {
          char_diff = *name_ptr;
          param_1 = (ulonglong)name_ptr[(longlong)name_offset];
          name_length = (uint)name_ptr[(longlong)name_offset];
          if (char_diff != name_length) break;
          name_ptr = name_ptr + 1;
        } while (name_length != 0);
        if ((int)(char_diff - name_length) < 1) goto LAB_USE_EXISTING;
      }
LAB_USE_ROOT:
      search_result = (ulonglong)name_offset & 0xffffffffffffff00;
LAB_PROCESS_COMPONENT:
      if (current_component != (longlong *)0x0) {
        ui_component_builder(param_1, param_2, current_component, search_result, param_5);
        return param_2;
      }
    }
  }
  else {
    // 查找现有组件
    component_data = (longlong *)ui_component_type_resolver(param_4);
    if (*(int *)(param_5 + 0x10) != 0) {
      if ((int)param_4[6] != 0) {
        name_ptr = *(byte **)(param_5 + 8);
        name_offset = param_4[5] - (longlong)name_ptr;
        do {
          char_diff = *name_ptr;
          name_length = (uint)name_ptr[name_offset];
          if (char_diff != name_length) break;
          name_ptr = name_ptr + 1;
        } while (name_length != 0);
        if ((int)(char_diff - name_length) < 1) goto LAB_USE_EXISTING;
      }
      if ((int)component_data[6] != 0) {
        name_ptr = (byte *)component_data[5];
        name_offset = (longlong *)(*(longlong *)(param_5 + 8) - (longlong)name_ptr);
        do {
          char_diff = *name_ptr;
          param_1 = (ulonglong)name_ptr[(longlong)name_offset];
          name_length = (uint)name_ptr[(longlong)name_offset];
          if (char_diff != name_length) break;
          name_ptr = name_ptr + 1;
        } while (name_length != 0);
        if (0 < (int)(char_diff - name_length)) {
          current_component = param_4;
          if (*param_4 == 0) goto LAB_USE_ROOT;
          search_result = CONCAT71((int7)((ulonglong)name_offset >> 8), 1);
          current_component = component_data;
          goto LAB_PROCESS_COMPONENT;
        }
      }
    }
  }
LAB_USE_EXISTING:
  // 在组件注册表中搜索
  is_less_than = true;
  component = (undefined8 *)&UI_STRING_DATA_START;
  temp_component = UI_COMPONENT_REGISTRY;
  while (temp_component != (undefined8 *)0x0) {
    component = temp_component;
    if (*(int *)(temp_component + 6) == 0) {
      is_less_than = false;
LAB_CONTINUE_SEARCH:
      temp_component = (undefined8 *)*temp_component;
    }
    else {
      if (*(int *)(param_5 + 0x10) == 0) {
        is_less_than = true;
      }
      else {
        name_ptr = (byte *)temp_component[5];
        name_offset = *(longlong *)(param_5 + 8) - (longlong)name_ptr;
        do {
          char_diff = *name_ptr;
          name_length = (uint)name_ptr[name_offset];
          if (char_diff != name_length) break;
          name_ptr = name_ptr + 1;
        } while (name_length != 0);
        is_less_than = 0 < (int)(char_diff - name_length);
      }
      if (!is_less_than) goto LAB_CONTINUE_SEARCH;
      temp_component = (undefined8 *)temp_component[1];
    }
  }
  
  temp_component = component;
  if (is_less_than) {
    if (component != UI_COMPONENT_SENTINEL) {
      temp_component = (undefined8 *)ui_component_specializer(component);
      goto LAB_BUILD_COMPONENT;
    }
  }
  else {
LAB_BUILD_COMPONENT:
    if (*(int *)(param_5 + 0x10) == 0) {
LAB_RETURN_COMPONENT:
      *param_2 = temp_component;
      return param_2;
    }
    if (*(int *)(temp_component + 6) != 0) {
      name_ptr = *(byte **)(param_5 + 8);
      name_offset = temp_component[5] - (longlong)name_ptr;
      do {
        char_diff = *name_ptr;
        name_length = (uint)name_ptr[name_offset];
        if (char_diff != name_length) break;
        name_ptr = name_ptr + 1;
      } while (name_length != 0);
      if ((int)(char_diff - name_length) < 1) goto LAB_RETURN_COMPONENT;
    }
  }
  
  // 创建新组件
  if (component != (undefined8 *)&UI_STRING_DATA_START) {
    if (*(int *)(component + 6) == 0) {
LAB_SET_PRIORITY:
      component_data_size = 1;
      goto LAB_CREATE_NEW;
    }
    if (*(int *)(param_5 + 0x10) != 0) {
      name_ptr = (byte *)component[5];
      name_offset = *(longlong *)(param_5 + 8) - (longlong)name_ptr;
      do {
        char_diff = *name_ptr;
        name_length = (uint)name_ptr[name_offset];
        if (char_diff != name_length) break;
        name_ptr = name_ptr + 1;
      } while (name_length != 0);
      if ((int)(char_diff - name_length) < 1) goto LAB_SET_PRIORITY;
    }
  }
  component_data_size = 0;
LAB_CREATE_NEW:
  name_offset = ui_memory_reallocator(GLOBAL_MEMORY_POOL, 0x48, UI_COMPONENT_TYPE);
  ui_string_processor(name_offset + 0x20, param_5);
  *(undefined8 *)(name_offset + 0x40) = 0;
  ui_component_initializer(name_offset, component, &UI_STRING_DATA_START, component_data_size);
}