#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part005.c - 9个函数

/**
 * UI系统内存数据复制函数
 * 处理UI组件间的内存数据复制和地址计算
 * 
 * @param target_ptr 目标数据指针
 * @param source_ptr 源数据指针  
 * @param offset_ptr 偏移量指针
 * @param data_size 数据大小
 */
void ui_memory_data_copier(longlong target_ptr, undefined8 source_ptr, undefined8 offset_ptr, longlong data_size)

{
  longlong target_offset;
  int source_index;
  
  // 计算目标地址偏移量
  *(longlong *)(target_offset + 0x18) = target_ptr + data_size;
                    // WARNING: Could not recover jumptable at 0x0001808ffc47. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  memcpy((longlong)source_index + *(longlong *)(target_offset + 0x10));
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * UI系统回调触发器
 * 根据条件触发UI系统回调函数
 * 
 * @param callback_ptr 回调函数指针数组
 */
void ui_callback_trigger(int *callback_ptr)

{
  // 检查回调指针有效性和全局回调函数
  if ((*callback_ptr != 0) && (_DAT_180c8f008 != 0)) {
    (**(code **)(_DAT_180c8f008 + 0x18))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * UI系统路径处理器
 * 处理UI系统中的路径构建和字符串操作
 * 主要用于生成UI资源路径和文件路径
 */
void ui_path_processor(void)

{
  uint path_length;
  undefined4 string_hash;
  int buffer_size;
  uint temp_length;
  undefined4 *buffer_ptr;
  longlong path_offset;
  undefined1 *path_char_ptr;
  undefined2 *separator_ptr;
  undefined *temp_ptr;
  uint final_length;
  ulonglong total_length;
  undefined1 path_buffer [32];
  undefined1 stack_char;
  undefined *heap_ptr1;
  undefined2 *heap_ptr2;
  undefined4 heap_size1;
  undefined8 heap_data1;
  undefined *heap_ptr3;
  undefined4 *heap_ptr4;
  undefined4 heap_size2;
  undefined8 heap_data2;
  undefined *heap_ptr5;
  undefined1 *heap_ptr6;
  uint heap_length1;
  undefined8 heap_data3;
  undefined4 heap_size3;
  undefined *heap_ptr7;
  undefined1 *heap_ptr8;
  undefined4 heap_size4;
  undefined8 heap_data4;
  undefined1 temp_buffer [32];
  undefined8 stack_guard1;
  undefined1 temp_buffer2 [32];
  undefined8 stack_guard2;
  undefined *heap_ptr9;
  undefined1 *heap_ptr10;
  undefined4 heap_size5;
  undefined1 temp_buffer3 [16];
  undefined1 temp_buffer4 [8];
  undefined *heap_ptr11;
  int buffer_index;
  ulonglong stack_guard3;
  
  stack_guard2 = 0xfffffffffffffffe;
  stack_guard3 = _DAT_180bf00a8 ^ (ulonglong)path_buffer;
  path_char_ptr = (undefined1 *)0x0;
  final_length = 0;
  heap_size3 = 0;
  stack_guard1 = _DAT_180c91030;
  heap_ptr9 = &UNK_1809fdc18;
  heap_ptr10 = temp_buffer3;
  temp_buffer3[0] = 0;
  heap_size5 = 6;
  strcpy_s(temp_buffer3,0x10,&UNK_180a3c07c);
  heap_size3 = 1;
  FUN_1806279c0(temp_buffer2,&heap_ptr9);
  heap_size3 = 0;
  heap_ptr9 = &UNK_18098bcb0;
  FUN_180624730(temp_buffer4,temp_buffer2);
  heap_ptr7 = &UNK_180a3c3e0;
  heap_data4 = 0;
  heap_ptr8 = (undefined1 *)0x0;
  heap_size4 = 0;
  FUN_1806277c0(&heap_ptr7,buffer_index);
  if (0 < buffer_index) {
    temp_ptr = &DAT_18098bc73;
    if (heap_ptr11 != (undefined *)0x0) {
      temp_ptr = heap_ptr11;
    }
                    // WARNING: Subroutine does not return
    memcpy(heap_ptr8,temp_ptr,(longlong)(buffer_index + 1));
  }
  if ((heap_ptr11 != (undefined *)0x0) && (heap_size4 = 0, heap_ptr8 != (undefined1 *)0x0)) {
    *heap_ptr8 = 0;
  }
  heap_ptr5 = &UNK_180a3c3e0;
  heap_data2 = 0;
  heap_ptr4 = (undefined4 *)0x0;
  heap_size2 = 0;
  buffer_ptr = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)buffer_ptr = 0;
  heap_ptr4 = buffer_ptr;
  string_hash = FUN_18064e990(buffer_ptr);
  heap_data2 = CONCAT44(heap_data2._4_4_,string_hash);
  *buffer_ptr = 0x2f6e6962;
  *(undefined1 *)(buffer_ptr + 1) = 0;
  heap_size2 = 4;
  path_offset = FUN_180627ce0(&heap_ptr7,&heap_ptr9,&heap_ptr5);
  heap_ptr5 = &UNK_180a3c3e0;
  heap_data3 = 0;
  heap_ptr6 = (undefined1 *)0x0;
  heap_length1 = 0;
  heap_size3 = 2;
  path_length = *(uint *)(path_offset + 0x10);
  total_length = (ulonglong)path_length;
  temp_length = 0;
  if (*(longlong *)(path_offset + 8) == 0) {
LAB_PATH_PROCESSING:
    final_length = temp_length;
    if (path_length != 0) {
                    // WARNING: Subroutine does not return
      memcpy(path_char_ptr,*(undefined8 *)(path_offset + 8),total_length);
    }
  }
  else if (path_length != 0) {
    buffer_size = path_length + 1;
    if (buffer_size < 0x10) {
      buffer_size = 0x10;
    }
    path_char_ptr = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,(longlong)buffer_size,0x13);
    *path_char_ptr = 0;
    heap_ptr6 = path_char_ptr;
    temp_length = FUN_18064e990(path_char_ptr);
    heap_data3 = CONCAT44(heap_data3._4_4_,temp_length);
    goto LAB_PATH_PROCESSING;
  }
  if (path_char_ptr != (undefined1 *)0x0) {
    path_char_ptr[total_length] = 0;
  }
  heap_data3 = CONCAT44(*(undefined4 *)(path_offset + 0x1c),(undefined4)heap_data3);
  if (path_length + 0x15 != 0) {
    temp_length = path_length + 0x16;
    heap_length1 = path_length;
    if (path_char_ptr == (undefined1 *)0x0) {
      if ((int)temp_length < 0x10) {
        temp_length = 0x10;
      }
      path_char_ptr = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)temp_length,0x13);
      *path_char_ptr = 0;
    }
    else {
      if (temp_length <= final_length) goto LAB_PATH_COMPLETE;
      stack_char = 0x13;
      path_char_ptr = (undefined1 *)FUN_18062b8b0(_DAT_180c8ed18,path_char_ptr,temp_length,0x10);
    }
    heap_ptr6 = path_char_ptr;
    string_hash = FUN_18064e990(path_char_ptr);
    heap_data3 = CONCAT44(heap_data3._4_4_,string_hash);
  }
LAB_PATH_COMPLETE:
  buffer_ptr = (undefined4 *)(path_char_ptr + total_length);
  *buffer_ptr = 0x366e6957;
  buffer_ptr[1] = 0x68535f34;
  buffer_ptr[2] = 0x69707069;
  buffer_ptr[3] = 0x435f676e;
  *(undefined4 *)(path_char_ptr + total_length + 0x10) = 0x6e65696c;
  *(undefined2 *)(path_char_ptr + total_length + 0x14) = 0x74;
  heap_ptr1 = &UNK_180a3c3e0;
  heap_data1 = 0;
  heap_ptr2 = (undefined2 *)0x0;
  heap_size1 = 0;
  heap_length1 = path_length + 0x15;
  separator_ptr = (undefined2 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)separator_ptr = 0;
  heap_ptr2 = separator_ptr;
  string_hash = FUN_18064e990(separator_ptr);
  heap_data1 = CONCAT44(heap_data1._4_4_,string_hash);
  *separator_ptr = 0x2f;
  heap_size1 = 1;
  FUN_180627ce0(&heap_ptr5,temp_buffer,&heap_ptr1);
  heap_ptr1 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
  FUN_18064e900(separator_ptr);
}



undefined8 *
ui_component_initializer(undefined8 *component_ptr,ulonglong init_flags,undefined8 param_3,undefined8 param_4)

{
  undefined8 stack_guard;
  
  stack_guard = 0xfffffffffffffffe;
  *component_ptr = &UNK_180a3e030;
  FUN_180651910();
  if ((init_flags & 1) != 0) {
    free(component_ptr,400,param_3,param_4,stack_guard);
  }
  return component_ptr;
}



undefined4 * ui_parameter_resetter(undefined4 *param_ptr)

{
  *param_ptr = 0;
  return param_ptr;
}



int ui_property_identifier(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int property_id;
  longlong string_ptr1;
  longlong string_ptr2;
  undefined *compare_ptr;
  undefined *heap_ptr;
  longlong heap_data;
  int string_length;
  
  FUN_180627910(&heap_ptr,param_1,param_3,param_4,0xfffffffffffffffe);
  string_ptr2 = heap_data;
  if (string_length == 0x19) {
    property_id = strcmp(heap_data,&UNK_180a3e128);
    if (property_id == 0) {
      property_id = 0x84;
      goto LAB_PROPERTY_FOUND;
    }
  }
  else if (string_length == 0x18) {
    property_id = strcmp(heap_data,&UNK_180a3e0f0);
    if (property_id == 0) {
      property_id = 0x10;
      goto LAB_PROPERTY_FOUND;
    }
LAB_DEFAULT_COMPARE:
    compare_ptr = &UNK_180a3e180;
LAB_COMPARE_LOOP:
    property_id = strcmp(string_ptr2,compare_ptr);
    if (property_id == 0) {
      property_id = 4;
      goto LAB_PROPERTY_FOUND;
    }
  }
  else if (string_length == 0x12) {
    property_id = strcmp(heap_data,&UNK_180a3e110);
    if (property_id == 0) {
      property_id = 0xa0;
      goto LAB_PROPERTY_FOUND;
    }
LAB_SIZE_COMPARE:
    property_id = strcmp(string_ptr2,&UNK_180a3e230);
    if (property_id == 0) {
      property_id = 8;
      goto LAB_PROPERTY_FOUND;
    }
    property_id = strcmp(string_ptr2,&UNK_180a3e1f8);
    if (property_id == 0) {
      property_id = 0x10;
      goto LAB_PROPERTY_FOUND;
    }
    compare_ptr = &UNK_180a3e210;
LAB_COLOR_COMPARE:
    property_id = strcmp(string_ptr2,compare_ptr);
    if (property_id == 0) {
      property_id = 0x10;
      goto LAB_PROPERTY_FOUND;
    }
  }
  else if (string_length == 0x1a) {
    property_id = strcmp(heap_data,&UNK_180a3e0b8);
    if (property_id == 0) {
      property_id = 0x204;
      goto LAB_PROPERTY_FOUND;
    }
  }
  else {
    if (string_length == 0x15) {
      property_id = strcmp(heap_data,&UNK_180a3e0d8);
      if (property_id == 0) {
        property_id = 0x404;
        goto LAB_PROPERTY_FOUND;
      }
      compare_ptr = &UNK_180a3e1b0;
      goto LAB_COMPARE_LOOP;
    }
    if (string_length == 0x11) {
      property_id = strcmp(heap_data,&UNK_180a3e1c8);
      if (property_id == 0) {
        property_id = 0x50;
        goto LAB_PROPERTY_FOUND;
      }
    }
    else {
      if (string_length == 0x18) goto LAB_DEFAULT_COMPARE;
      if (string_length == 0xb) {
        property_id = strcmp(heap_data,&UNK_180a3e1a0);
        if (property_id == 0) {
          property_id = 8;
          goto LAB_PROPERTY_FOUND;
        }
      }
      else if (string_length == 0x16) {
        compare_ptr = &UNK_180a3e160;
LAB_POSITION_COMPARE:
        property_id = strcmp(heap_data,compare_ptr);
        if (property_id == 0) {
          property_id = 0xc;
          goto LAB_PROPERTY_FOUND;
        }
      }
      else {
        if (string_length == 7) {
          string_ptr2 = 0;
          do {
            string_ptr1 = string_ptr2 + 1;
            if (*(char *)(heap_data + string_ptr2) != (&UNK_180a3e178)[string_ptr2]) {
              string_ptr2 = 0;
              goto LAB_STRING_COMPARE_END;
            }
            string_ptr2 = string_ptr1;
          } while (string_ptr1 != 8);
          property_id = 0x10;
          goto LAB_PROPERTY_FOUND;
        }
        if (string_length == 0xf) {
          property_id = strcmp(heap_data,&UNK_180a3e150);
          if (property_id == 0) {
            property_id = 0x40;
            goto LAB_PROPERTY_FOUND;
          }
        }
        else {
          if (string_length == 0x13) {
            compare_ptr = &UNK_180a3e248;
            goto LAB_POSITION_COMPARE;
          }
          if (string_length == 0xd) {
            compare_ptr = &UNK_180a3e260;
            goto LAB_COLOR_COMPARE;
          }
          if (string_length == 6) {
            string_ptr2 = 0;
            do {
              string_ptr1 = string_ptr2;
              if (*(char *)(heap_data + string_ptr1) != (&UNK_180a3e224)[string_ptr1]) goto LAB_PROPERTY_NOT_FOUND;
              string_ptr2 = string_ptr1 + 1;
            } while (string_ptr1 + 1 != 7);
            property_id = (int)string_ptr1 + 0x1e;
            goto LAB_PROPERTY_FOUND;
          }
          if (string_length == 0x12) goto LAB_SIZE_COMPARE;
        }
      }
    }
  }
LAB_PROPERTY_NOT_FOUND:
  property_id = 0;
LAB_PROPERTY_FOUND:
  heap_ptr = &UNK_180a3c3e0;
  if (heap_data != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return property_id;
  while (string_ptr2 = string_ptr1, string_ptr1 != 8) {
LAB_STRING_COMPARE_END:
    string_ptr1 = string_ptr2 + 1;
    if (*(char *)(heap_data + string_ptr2) != (&UNK_180a3e148)[string_ptr2]) goto LAB_PROPERTY_NOT_FOUND;
  }
  property_id = 0x30;
  goto LAB_PROPERTY_FOUND;
}



ulonglong ui_attribute_calculator(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char char_val;
  ulonglong attribute_value;
  int comparison_result;
  longlong string_length1;
  longlong string_length2;
  undefined *compare_target;
  ulonglong temp_value;
  bool match_found;
  undefined *heap_ptr1;
  char *string_ptr;
  int string_length;
  undefined4 attribute_hash;
  undefined *heap_ptr2;
  longlong heap_data;
  int string_size;
  
  FUN_180627910(&heap_ptr2,param_1,param_3,param_4,0xfffffffffffffffe);
  FUN_180627910(&heap_ptr1,param_2);
  string_length2 = heap_data;
  if (string_size == 0x19) {
    comparison_result = strcmp(heap_data,&UNK_180a3e128);
    if (comparison_result == 0) {
      if (string_length == 7) {
        string_length2 = 0;
        do {
          string_length1 = string_length2 + 1;
          if (string_ptr[string_length2] != (&UNK_180a3e1e0)[string_length2]) break;
          string_length2 = string_length1;
        } while (string_length1 != 8);
      }
      else if (string_length == 9) {
        compare_target = &UNK_180a3e1e8;
LAB_ATTRIBUTE_COMPARE:
        comparison_result = strcmp(string_ptr,compare_target);
        match_found = comparison_result == 0;
LAB_MATCH_CHECK:
        if (match_found) {
          attribute_value = 4;
          goto LAB_ATTRIBUTE_RETURN;
        }
      }
    }
  }
  else if (string_size == 0x18) {
    comparison_result = strcmp(heap_data,&UNK_180a3e0f0);
    if ((comparison_result == 0) && (string_length == 7)) {
      attribute_value = 8;
      string_length2 = 0;
      do {
        string_length1 = string_length2 + 1;
        if (string_ptr[string_length2] != (&UNK_180a3e2b0)[string_length2]) {
          string_length2 = 0;
          goto LAB_LENGTH_CHECK_END;
        }
        string_length2 = string_length1;
      } while (string_length1 != 8);
    }
  }
  else if (string_size == 0x1a) {
    comparison_result = strcmp(heap_data,&UNK_180a3e0b8);
    if ((comparison_result == 0) && (string_length == 4)) {
      string_length2 = 0;
      do {
        string_length1 = string_length2 + 1;
        if (string_ptr[string_length2] != (&UNK_180a0ee30)[string_length2]) {
          temp_value = 0;
          goto LAB_TEMP_RETURN;
        }
        string_length2 = string_length1;
      } while (string_length1 != 5);
    }
  }
  else if (string_size == 0x15) {
    comparison_result = strcmp(heap_data,&UNK_180a3e0d8);
    if (comparison_result == 0) {
      if (string_length == 0xb) {
        strcmp(string_ptr,&UNK_180a3e2b8);
      }
      else if ((string_length == 9) && (comparison_result = strcmp(string_ptr,&UNK_180a3e2a0), comparison_result == 0)) {
        attribute_value = 0x204;
        goto LAB_ATTRIBUTE_RETURN;
      }
    }
  }
  else if (string_size == 0x11) {
    comparison_result = strcmp(heap_data,&UNK_180a3e1c8);
    if (comparison_result == 0) {
      if (string_length == 6) {
        string_length2 = 0;
        do {
          string_length1 = string_length2 + 1;
          if (string_ptr[string_length2] != (&UNK_180a1a478)[string_length2]) break;
          string_length2 = string_length1;
        } while (string_length1 != 7);
      }
      else if (string_length == 8) {
        compare_target = &UNK_180a16818;
LAB_HASH_COMPARE:
        comparison_result = strcmp(string_ptr,compare_target);
        if (comparison_result == 0) {
          attribute_value = 0x10;
          goto LAB_ATTRIBUTE_RETURN;
        }
      }
      else if (string_length == 5) {
        string_length2 = 0;
        do {
          string_length1 = string_length2;
          if (string_ptr[string_length1] != (&UNK_180a0f108)[string_length1]) goto LAB_ATTRIBUTE_DEFAULT;
          string_length2 = string_length1 + 1;
        } while (string_length1 + 1 != 6);
        attribute_value = (ulonglong)((int)string_length1 + 0x3b);
        goto LAB_ATTRIBUTE_RETURN;
      }
    }
  }
  else if (string_size == 0xb) {
    comparison_result = strcmp(heap_data,&UNK_180a3e1a0);
    if (comparison_result == 0) {
LAB_COORDINATE_CHECK:
      if ((string_length == 1) &&
         (((*string_ptr != 'x' || (string_ptr[1] != '\0')) && (*string_ptr == 'y')))) {
        match_found = string_ptr[1] == '\0';
        goto LAB_MATCH_CHECK;
      }
    }
  }
  else if (string_size == 0x16) {
    comparison_result = strcmp(heap_data,&UNK_180a3e160);
    if (((comparison_result == 0) && (string_length == 1)) && ((*string_ptr != 'x' || (string_ptr[1] != '\0')))) {
      if ((*string_ptr == 'y') && (string_ptr[1] == '\0')) {
        attribute_value = 4;
        goto LAB_ATTRIBUTE_RETURN;
      }
      if (*string_ptr == 'z') {
        match_found = string_ptr[1] == '\0';
LAB_AXIS_CHECK:
        if (match_found) {
          attribute_value = 8;
          goto LAB_ATTRIBUTE_RETURN;
        }
      }
    }
  }
  else if (string_size == 7) {
    attribute_value = 8;
    string_length2 = 0;
    do {
      string_length1 = string_length2 + 1;
      if (*(char *)(heap_data + string_length2) != (&UNK_180a3e178)[string_length2]) {
        string_length2 = 0;
        goto LAB_STRING_COMPARE_END2;
      }
      string_length2 = string_length1;
    } while (string_length1 != 8);
    if ((((string_length == 1) && ((*string_ptr != 's' || (string_ptr[1] != '\0')))) &&
        (*string_ptr == 'f')) && (string_ptr[1] == '\0')) goto LAB_ATTRIBUTE_RETURN;
  }
  else if (string_size == 0xf) {
    comparison_result = strcmp(heap_data,&UNK_180a3e150);
    if (comparison_result == 0) {
      if (string_length == 3) {
        string_length2 = 0;
        do {
          string_length1 = string_length2 + 1;
          if (string_ptr[string_length2] != (&UNK_180a3e294)[string_length2]) break;
          string_length2 = string_length1;
        } while (string_length1 != 4);
      }
      else if (((string_length == 1) && (*string_ptr == 'o')) && (string_ptr[1] == '\0')) {
        attribute_value = 0x30;
        goto LAB_ATTRIBUTE_RETURN;
      }
    }
  }
  else if (string_size == 0x13) {
    comparison_result = strcmp(heap_data,&UNK_180a3e248);
    if (comparison_result == 0) {
      if (string_length == 10) {
        strcmp(string_ptr,&UNK_180a3e270);
      }
      else {
        if (string_length == 0x10) {
          compare_target = &UNK_180a3e280;
          goto LAB_ATTRIBUTE_COMPARE;
        }
        if (string_length == 0x11) {
          comparison_result = strcmp(string_ptr,&UNK_180a3e2e8);
          match_found = comparison_result == 0;
          goto LAB_AXIS_CHECK;
        }
      }
    }
  }
  else if (string_size == 0xd) {
    comparison_result = strcmp(heap_data,&UNK_180a3e260);
    if (((comparison_result == 0) && (string_length == 1)) && ((*string_ptr != 'w' || (string_ptr[1] != '\0')))) {
      if ((*string_ptr == 'x') && (string_ptr[1] == '\0')) {
        attribute_value = 4;
        goto LAB_ATTRIBUTE_RETURN;
      }
      if ((*string_ptr == 'y') && (string_ptr[1] == '\0')) {
        attribute_value = 8;
        goto LAB_ATTRIBUTE_RETURN;
      }
      if (*string_ptr == 'z') {
        char_val = string_ptr[1];
LAB_CHAR_CHECK:
        if (char_val == '\0') {
          attribute_value = 0xc;
          goto LAB_ATTRIBUTE_RETURN;
        }
      }
    }
  }
  else if (string_size == 6) {
    string_length2 = 0;
    do {
      string_length1 = string_length2 + 1;
      if (*(char *)(heap_data + string_length2) != (&UNK_180a3e224)[string_length2]) goto LAB_ATTRIBUTE_DEFAULT;
      string_length2 = string_length1;
    } while (string_length1 != 7);
    if (string_length == 7) {
      string_length2 = 0;
      do {
        string_length1 = string_length2 + 1;
        if (string_ptr[string_length2] != (&UNK_180a3e300)[string_length2]) break;
        string_length2 = string_length1;
      } while (string_length1 != 8);
    }
    else {
      if (string_length == 10) {
        compare_target = &UNK_180a3e2c8;
        goto LAB_HASH_COMPARE;
      }
      if (string_length == 0xd) {
        comparison_result = strcmp(string_ptr,&UNK_180a3e2d8);
        match_found = comparison_result == 0;
        goto LAB_TYPE_CHECK;
      }
    }
  }
  else if (string_size == 0x12) {
    comparison_result = strcmp(heap_data,&UNK_180a3e230);
    if (comparison_result == 0) goto LAB_COORDINATE_CHECK;
    comparison_result = strcmp(string_length2,&UNK_180a3e1f8);
    if (((comparison_result == 0) && (string_length == 1)) && ((*string_ptr != 'x' || (string_ptr[1] != '\0')))) {
      if ((*string_ptr == 'y') && (string_ptr[1] == '\0')) {
        attribute_value = 4;
        goto LAB_ATTRIBUTE_RETURN;
      }
      if ((*string_ptr == 'z') && (string_ptr[1] == '\0')) {
        attribute_value = 8;
        goto LAB_ATTRIBUTE_RETURN;
      }
      if (*string_ptr == 'w') {
        char_val = string_ptr[1];
        goto LAB_CHAR_CHECK;
      }
    }
  }
  goto LAB_ATTRIBUTE_DEFAULT;
  while (temp_value = attribute_value + 1, attribute_value + 1 != 5) {
LAB_TEMP_RETURN:
    attribute_value = temp_value;
    if (string_ptr[attribute_value] != (&UNK_180a1022c)[attribute_value]) goto LAB_ATTRIBUTE_DEFAULT;
  }
  attribute_value = attribute_value & 0xffffffff;
  goto LAB_ATTRIBUTE_RETURN;
  while (string_length2 = string_length1, string_length1 != 8) {
LAB_LENGTH_CHECK_END:
    string_length1 = string_length2 + 1;
    if (string_ptr[string_length2] != (&UNK_180a3e1e0)[string_length2]) goto LAB_ATTRIBUTE_DEFAULT;
  }
  goto LAB_ATTRIBUTE_RETURN;
  while (string_length2 = string_length1, string_length1 != 8) {
LAB_STRING_COMPARE_END2:
    string_length1 = string_length2 + 1;
    if (*(char *)(heap_data + string_length2) != (&UNK_180a3e148)[string_length2]) goto LAB_ATTRIBUTE_DEFAULT;
  }
  if ((string_length == 1) && ((*string_ptr != 's' || (string_ptr[1] != '\0')))) {
    if ((*string_ptr == 'f') && (string_ptr[1] == '\0')) {
      attribute_value = 0x10;
      goto LAB_ATTRIBUTE_RETURN;
    }
    if (*string_ptr == 'u') {
      match_found = string_ptr[1] == '\0';
LAB_TYPE_CHECK:
      if (match_found) {
        attribute_value = 0x20;
        goto LAB_ATTRIBUTE_RETURN;
      }
    }
  }
LAB_ATTRIBUTE_DEFAULT:
  attribute_value = 0;
LAB_ATTRIBUTE_RETURN:
  heap_ptr1 = &UNK_180a3c3e0;
  if (string_ptr != (char *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  string_ptr = (char *)0x0;
  attribute_hash = 0;
  heap_ptr1 = &UNK_18098bcb0;
  heap_ptr2 = &UNK_180a3c3e0;
  if (heap_data == 0) {
    return attribute_value;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * UI系统数据提取器
 * 从UI系统数据结构中提取指定索引的数据信息
 * 
 * @param data_index 数据索引
 * @param output_buffer 输出缓冲区
 */
void ui_data_extractor(int data_index,undefined8 *output_buffer)

{
  undefined8 *data_ptr;
  undefined4 data_flags;
  longlong base_address;
  code *exception_handler;
  undefined8 data_field1;
  undefined8 data_field2;
  undefined8 data_field3;
  undefined8 data_field4;
  undefined8 data_field5;
  undefined8 data_field6;
  undefined8 data_field7;
  undefined8 data_field8;
  undefined8 data_field9;
  undefined8 data_field10;
  undefined8 data_field11;
  undefined8 data_field12;
  undefined8 data_field13;
  undefined8 data_field14;
  undefined8 data_field15;
  undefined8 data_field16;
  undefined8 data_field17;
  undefined8 data_field18;
  undefined8 data_field19;
  longlong offset_address;
  
  base_address = *_DAT_180c8ecf0;
  if ((ulonglong)(longlong)data_index < (ulonglong)((_DAT_180c8ecf0[1] - base_address) / 0x84)) {
    offset_address = (longlong)data_index * 0x84;
    data_ptr = (undefined8 *)(offset_address + 0x60 + base_address);
    data_field1 = *data_ptr;
    data_field2 = data_ptr[1];
    data_flags = *(undefined4 *)(offset_address + 0x80 + base_address);
    data_ptr = (undefined8 *)(offset_address + 0x70 + base_address);
    data_field3 = *data_ptr;
    data_field4 = data_ptr[1];
    data_field5 = ((undefined8 *)(offset_address + base_address))[1];
    data_ptr = (undefined8 *)(offset_address + 0x10 + base_address);
    data_field6 = *data_ptr;
    data_field7 = data_ptr[1];
    data_ptr = (undefined8 *)(offset_address + 0x20 + base_address);
    data_field8 = *data_ptr;
    data_field9 = data_ptr[1];
    data_ptr = (undefined8 *)(offset_address + 0x30 + base_address);
    data_field10 = *data_ptr;
    data_field11 = data_ptr[1];
    data_ptr = (undefined8 *)(offset_address + 0x40 + base_address);
    data_field12 = *data_ptr;
    data_field13 = data_ptr[1];
    data_ptr = (undefined8 *)(offset_address + 0x50 + base_address);
    data_field14 = *data_ptr;
    data_field15 = data_ptr[1];
    *output_buffer = *(undefined8 *)(offset_address + base_address);
    output_buffer[1] = data_field5;
    output_buffer[2] = data_field6;
    output_buffer[3] = data_field7;
    output_buffer[4] = data_field8;
    output_buffer[5] = data_field9;
    output_buffer[6] = data_field10;
    output_buffer[7] = data_field11;
    output_buffer[8] = data_field12;
    output_buffer[9] = data_field13;
    output_buffer[10] = data_field14;
    output_buffer[0xb] = data_field15;
    output_buffer[0xc] = data_field1;
    output_buffer[0xd] = data_field2;
    output_buffer[0xe] = data_field3;
    output_buffer[0xf] = data_field4;
    *(undefined4 *)(output_buffer + 0x10) = data_flags;
    return;
  }
  FUN_180623a30();
  exception_handler = (code *)swi(3);
  (*exception_handler)();
  return;
}



/**
 * UI系统数据复制器
 * 快速复制UI系统数据结构中的数据
 * 
 * @param source_ptr 源数据指针
 * @param offset_ptr 偏移量指针
 * @param dest_ptr 目标数据指针
 */
void ui_data_copier(undefined8 source_ptr,undefined8 offset_ptr,undefined8 *dest_ptr)

{
  undefined8 *data_ptr;
  undefined4 data_flags;
  undefined8 data_field1;
  undefined8 data_field2;
  undefined8 data_field3;
  undefined8 data_field4;
  undefined8 data_field5;
  undefined8 data_field6;
  undefined8 data_field7;
  undefined8 data_field8;
  undefined8 data_field9;
  undefined8 data_field10;
  undefined8 data_field11;
  undefined8 data_field12;
  undefined8 data_field13;
  undefined8 data_field14;
  undefined8 data_field15;
  undefined8 data_field16;
  undefined8 data_field17;
  longlong in_RAX;
  longlong in_R10;
  
  data_ptr = (undefined8 *)(in_RAX + 0x60 + in_R10);
  data_field1 = *data_ptr;
  data_field2 = data_ptr[1];
  data_flags = *(undefined4 *)(in_RAX + 0x80 + in_R10);
  data_ptr = (undefined8 *)(in_RAX + 0x70 + in_R10);
  data_field3 = *data_ptr;
  data_field4 = data_ptr[1];
  data_field5 = ((undefined8 *)(in_RAX + in_R10))[1];
  data_ptr = (undefined8 *)(in_RAX + 0x10 + in_R10);
  data_field6 = *data_ptr;
  data_field7 = data_ptr[1];
  data_ptr = (undefined8 *)(in_RAX + 0x20 + in_R10);
  data_field8 = *data_ptr;
  data_field9 = data_ptr[1];
  data_ptr = (undefined8 *)(in_RAX + 0x30 + in_R10);
  data_field10 = *data_ptr;
  data_field11 = data_ptr[1];
  data_ptr = (undefined8 *)(in_RAX + 0x40 + in_R10);
  data_field12 = *data_ptr;
  data_field13 = data_ptr[1];
  data_ptr = (undefined8 *)(in_RAX + 0x50 + in_R10);
  data_field14 = *data_ptr;
  data_field15 = data_ptr[1];
  *dest_ptr = *(undefined8 *)(in_RAX + in_R10);
  dest_ptr[1] = data_field5;
  dest_ptr[2] = data_field6;
  dest_ptr[3] = data_field7;
  dest_ptr[4] = data_field8;
  dest_ptr[5] = data_field9;
  dest_ptr[6] = data_field10;
  dest_ptr[7] = data_field11;
  dest_ptr[8] = data_field12;
  dest_ptr[9] = data_field13;
  dest_ptr[10] = data_field14;
  dest_ptr[0xb] = data_field15;
  dest_ptr[0xc] = data_field1;
  dest_ptr[0xd] = data_field2;
  dest_ptr[0xe] = data_field3;
  dest_ptr[0xf] = data_field4;
  *(undefined4 *)(dest_ptr + 0x10) = data_flags;
  return;
}



/**
 * UI系统异常处理器
 * 处理UI系统中的异常情况和错误
 */
void ui_exception_handler(void)

{
  code *exception_handler;
  
  FUN_180623a30();
  exception_handler = (code *)swi(3);
  (*exception_handler)();
  return;
}



undefined8
ui_resource_manager(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 stack_offset;
  longlong array_data [3];
  undefined4 array_size;
  
  array_data[0] = 0;
  array_data[1] = 0;
  array_data[2] = 0;
  array_size = 3;
  stack_offset = (longlong *)((ulonglong)array_data & 0xffffffff00000000);
  FUN_180194a50(array_data,&stack_offset,param_3,param_4,0xfffffffffffffffe,&UNK_1809fe070,0);
  FUN_180194a50(array_data,(longlong)&stack_offset + 1);
  FUN_180194a50(array_data,(longlong)&stack_offset + 2);
  FUN_180194a50(array_data,(longlong)&stack_offset + 3);
  stack_offset = array_data;
  if (array_data[0] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return 0x10;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 * ui_texture_manager(undefined4 *texture_ptr)

{
  undefined4 texture_id;
  longlong *resource_ptr;
  undefined4 temp_val1;
  undefined4 temp_val2;
  undefined4 temp_val3;
  
  resource_ptr = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x30,8,3,0xfffffffffffffffe);
  resource_ptr[1] = 0;
  resource_ptr[2] = 0;
  resource_ptr[3] = 0;
  resource_ptr[4] = 0;
  resource_ptr[5] = 0;
  *resource_ptr = (longlong)&UNK_180a21690;
  *resource_ptr = (longlong)&UNK_180a21720;
  *(undefined4 *)(resource_ptr + 1) = 0;
  *resource_ptr = (longlong)&UNK_1809fe070;
  resource_ptr[2] = 0;
  resource_ptr[3] = 0;
  resource_ptr[4] = 0;
  *(undefined4 *)(resource_ptr + 5) = 3;
  (**(code **)(*resource_ptr + 0x28))(resource_ptr);
  texture_id = (**(code **)(*resource_ptr + 8))(resource_ptr);
  (**(code **)(*resource_ptr + 0x28))(resource_ptr);
  temp_val1 = SUB84(resource_ptr,0);
  temp_val2 = (undefined4)((ulonglong)resource_ptr >> 0x20);
  *texture_ptr = temp_val1;
  texture_ptr[1] = temp_val2;
  texture_ptr[2] = texture_id;
  texture_ptr[3] = temp_val3;
  (**(code **)(*resource_ptr + 0x38))(resource_ptr);
  return texture_ptr;
}



/**
 * UI系统参数设置器
 * 设置UI系统中的各种参数值
 * 
 * @param param_ptr 参数指针
 * @param param_value 参数值
 */
void ui_parameter_setter(longlong param_ptr,undefined4 param_value)

{
  undefined4 stack_param;
  
  param_ptr = param_ptr + 0x10;
  stack_param = param_value;
  FUN_180194a50(param_ptr,&stack_param);
  FUN_180194a50(param_ptr,(longlong)&stack_param + 1);
  FUN_180194a50(param_ptr,(longlong)&stack_param + 2);
  FUN_180194a50(param_ptr,(longlong)&stack_param + 3);
  return;
}



/**
 * UI系统属性设置器
 * 设置UI系统中的属性值
 * 
 * @param param_ptr 参数指针
 * @param param_value 参数值
 */
void ui_attribute_setter(longlong param_ptr,undefined4 param_value)

{
  undefined4 stack_param;
  
  param_ptr = param_ptr + 0x10;
  stack_param = param_value;
  FUN_180194a50(param_ptr,&stack_param);
  FUN_180194a50(param_ptr,(longlong)&stack_param + 1);
  FUN_180194a50(param_ptr,(longlong)&stack_param + 2);
  FUN_180194a50(param_ptr,(longlong)&stack_param + 3);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 * ui_shader_manager(undefined4 *shader_ptr)

{
  undefined4 shader_id;
  longlong *resource_ptr;
  undefined4 temp_val1;
  undefined4 temp_val2;
  undefined4 temp_val3;
  
  resource_ptr = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x30,8,3,0xfffffffffffffffe);
  resource_ptr[1] = 0;
  resource_ptr[2] = 0;
  resource_ptr[3] = 0;
  resource_ptr[4] = 0;
  resource_ptr[5] = 0;
  *resource_ptr = (longlong)&UNK_180a21690;
  *resource_ptr = (longlong)&UNK_180a21720;
  *(undefined4 *)(resource_ptr + 1) = 0;
  *resource_ptr = (longlong)&UNK_180a3e310;
  resource_ptr[2] = (longlong)&UNK_18098bcb0;
  resource_ptr[3] = 0;
  *(undefined4 *)(resource_ptr + 4) = 0;
  resource_ptr[2] = (longlong)&UNK_180a3c3e0;
  resource_ptr[5] = 0;
  resource_ptr[3] = 0;
  *(undefined4 *)(resource_ptr + 4) = 0;
  (**(code **)(*resource_ptr + 0x28))(resource_ptr);
  shader_id = (**(code **)(*resource_ptr + 8))(resource_ptr);
  (**(code **)(*resource_ptr + 0x28))(resource_ptr);
  temp_val1 = SUB84(resource_ptr,0);
  temp_val2 = (undefined4)((ulonglong)resource_ptr >> 0x20);
  *shader_ptr = temp_val1;
  shader_ptr[1] = temp_val2;
  shader_ptr[2] = shader_id;
  shader_ptr[3] = temp_val3;
  (**(code **)(*resource_ptr + 0x38))(resource_ptr);
  return shader_ptr;
}



undefined8 *
ui_memory_allocator(undefined8 *memory_ptr,ulonglong alloc_size,undefined8 param_3,undefined8 param_4)

{
  undefined8 stack_guard;
  
  stack_guard = 0xfffffffffffffffe;
  FUN_180057830();
  *memory_ptr = &UNK_180a21720;
  *memory_ptr = &UNK_180a21690;
  if ((alloc_size & 1) != 0) {
    free(memory_ptr,0x30,param_3,param_4,stack_guard);
  }
  return memory_ptr;
}



longlong * ui_component_accessor(longlong *result_ptr,longlong component_ptr,int component_index)

{
  longlong *component_data;
  undefined4 component_id;
  undefined4 temp_val;
  
  component_data = *(longlong **)(*(longlong *)(component_ptr + 0x10) + (longlong)component_index * 8);
  if (component_data == (longlong *)0x0) {
    component_id = 0xffffffff;
  }
  else {
    component_id = (**(code **)(*component_data + 8))(component_data);
    (**(code **)(*component_data + 0x28))(component_data);
  }
  *result_ptr = (longlong)component_data;
  result_ptr[1] = CONCAT44(temp_val,component_id);
  return result_ptr;
}



/**
 * UI系统组件清理器
 * 清理UI系统中的组件数据和资源
 * 
 * @param component_ptr 组件指针
 */
void ui_component_cleaner(longlong component_ptr)

{
  longlong *start_ptr;
  longlong *end_ptr;
  
  start_ptr = *(longlong **)(component_ptr + 0x18);
  end_ptr = *(longlong **)(component_ptr + 0x10);
  if (end_ptr != start_ptr) {
    do {
      if ((longlong *)*end_ptr != (longlong *)0x0) {
        (**(code **)(*(longlong *)*end_ptr + 0x38))();
      }
      end_ptr = end_ptr + 1;
    } while (end_ptr != start_ptr);
    *(undefined8 *)(component_ptr + 0x18) = *(undefined8 *)(component_ptr + 0x10);
    return;
  }
  *(longlong **)(component_ptr + 0x18) = end_ptr;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 * ui_render_manager(undefined4 *render_ptr)

{
  undefined4 render_id;
  longlong *resource_ptr;
  undefined4 temp_val1;
  undefined4 temp_val2;
  undefined4 temp_val3;
  
  resource_ptr = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x30,8,3,0xfffffffffffffffe);
  resource_ptr[1] = 0;
  resource_ptr[2] = 0;
  resource_ptr[3] = 0;
  resource_ptr[4] = 0;
  resource_ptr[5] = 0;
  *resource_ptr = (longlong)&UNK_180a21690;
  *resource_ptr = (longlong)&UNK_180a21720;
  *(undefined4 *)(resource_ptr + 1) = 0;
  *resource_ptr = (longlong)&UNK_180a3e378;
  resource_ptr[2] = (longlong)&UNK_18098bcb0;
  resource_ptr[3] = 0;
  *(undefined4 *)(resource_ptr + 4) = 0;
  resource_ptr[2] = (longlong)&UNK_180a3c3e0;
  resource_ptr[5] = 0;
  resource_ptr[3] = 0;
  *(undefined4 *)(resource_ptr + 4) = 0;
  (**(code **)(*resource_ptr + 0x28))(resource_ptr);
  render_id = (**(code **)(*resource_ptr + 8))(resource_ptr);
  (**(code **)(*resource_ptr + 0x28))(resource_ptr);
  temp_val1 = SUB84(resource_ptr,0);
  temp_val2 = (undefined4)((ulonglong)resource_ptr >> 0x20);
  *render_ptr = temp_val1;
  render_ptr[1] = temp_val2;
  render_ptr[2] = render_id;
  render_ptr[3] = temp_val3;
  (**(code **)(*resource_ptr + 0x38))(resource_ptr);
  return render_ptr;
}



undefined8 *
ui_system_initializer(undefined8 *system_ptr,ulonglong init_flags,undefined8 param_3,undefined8 param_4)

{
  system_ptr[2] = &UNK_180a3c3e0;
  if (system_ptr[3] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  system_ptr[3] = 0;
  *(undefined4 *)(system_ptr + 5) = 0;
  system_ptr[2] = &UNK_18098bcb0;
  *system_ptr = &UNK_180a21720;
  *system_ptr = &UNK_180a21690;
  if ((init_flags & 1) != 0) {
    free(system_ptr,0x30,param_3,param_4,0xfffffffffffffffe);
  }
  return system_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 ui_event_processor(longlong event_data,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 event_result;
  undefined *heap_ptr;
  longlong heap_data;
  
  FUN_180627ae0(&heap_ptr,event_data + 0x10,param_3,param_4,0xfffffffffffffffe);
  event_result = (**(code **)(*_DAT_180c8f008 + 0x70))(_DAT_180c8f008,&heap_ptr);
  heap_ptr = &UNK_180a3c3e0;
  if (heap_data != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return event_result;
}