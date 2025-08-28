#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part005.c - UI系统事件处理器和控件管理器
// 本文件包含UI系统的事件处理、控件管理、属性设置等功能

/**
 * UI系统数据复制器
 * 复制UI系统数据到指定位置
 * 
 * @param destination_ptr 目标位置指针
 * @param source_ptr1 源数据指针1
 * @param source_ptr2 源数据指针2
 * @param offset_data 偏移数据
 */
void ui_system_data_copier(longlong destination_ptr, uint64_t source_ptr1, uint64_t source_ptr2, longlong offset_data)
{
  longlong unaff_RSI;
  int unaff_R12D;
  
  *(longlong *)(unaff_RSI + 0x18) = destination_ptr + offset_data;
                    // WARNING: Could not recover jumptable at 0x0001808ffc47. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  memcpy((longlong)unaff_R12D + *(longlong *)(unaff_RSI + 0x10));
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address


/**
 * UI系统回调触发器
 * 根据条件触发UI系统回调函数
 * 
 * @param callback_flag_ptr 回调标志指针
 */
void ui_system_callback_trigger(int *callback_flag_ptr)
{
  if ((*callback_flag_ptr != 0) && (_DAT_180c8f008 != 0)) {
    (**(code **)(_DAT_180c8f008 + 0x18))();
  }
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address


/**
 * UI系统资源管理器
 * 管理UI系统资源的加载和释放
 */
void ui_system_resource_manager(void)

{
  uint resource_hash_value;
  int32_t resource_type;
  int resource_index;
  uint resource_count;
  int32_t *resource_array_ptr;
  longlong resource_offset;
  int8_t *resource_data_ptr;
  int16_t *resource_handle_ptr;
  void *heap_allocation;
  uint string_length;
  ulonglong buffer_size;
  int8_t resource_buffer[32];
  int8_t resource_flag;
  void *temp_buffer_ptr;
  int16_t *temp_handle_ptr;
  int32_t temp_resource_type;
  uint64_t temp_resource_data;
  void *temp_heap_ptr;
  int8_t *temp_string_ptr;
  uint temp_string_length;
  uint64_t temp_resource_size;
  int8_t temp_data_buffer[32];
  uint64_t temp_hash_value;
  void *temp_ptr1;
  int temp_index;
  ulonglong stack_parameter;
  
  stack_parameter = 0xfffffffffffffffe;
  resource_hash_value = _DAT_180bf00a8 ^ (ulonglong)resource_buffer;
  resource_data_ptr = (int8_t *)0x0;
  resource_count = 0;
  temp_resource_type = 0;
  temp_hash_value = _DAT_180c91030;
  temp_ptr1 = &UNK_1809fdc18;
  temp_string_ptr = temp_data_buffer;
  temp_data_buffer[0] = 0;
  temp_resource_type = 6;
  strcpy_s(temp_data_buffer, 0x10, &UNK_180a3c07c);
  temp_resource_type = 1;
  initialize_string_buffer(temp_data_buffer, &temp_ptr1);
  temp_resource_type = 0;
  temp_ptr1 = &UNK_18098bcb0;
  concatenate_string_buffers(temp_string_buffer, temp_data_buffer);
  temp_buffer_ptr = &UNK_180a3c3e0;
  temp_resource_size = 0;
  temp_string_ptr = (int8_t *)0x0;
  temp_string_length = 0;
  extend_string_buffer(&temp_buffer_ptr, temp_index);
  if (0 < temp_index) {
    heap_allocation = &DAT_18098bc73;
    if (temp_ptr1 != (void *)0x0) {
      heap_allocation = temp_ptr1;
    }
                    // WARNING: Subroutine does not return
    memcpy(temp_string_ptr, heap_allocation, (longlong)(temp_index + 1));
  }
  if ((temp_ptr1 != (void *)0x0) && (temp_string_length = 0, temp_string_ptr != (int8_t *)0x0)) {
    *temp_string_ptr = 0;
  }
  temp_heap_ptr = &UNK_180a3c3e0;
  temp_resource_size = 0;
  resource_array_ptr = (int32_t *)0x0;
  temp_resource_type = 0;
  resource_handle_ptr = (int16_t *)string_buffer_allocator(MEMORY_ALLOCATOR_HANDLE, 0x10, 0x13);
  *(int8_t *)resource_handle_ptr = 0;
  resource_array_ptr = resource_handle_ptr;
  resource_type = calculate_string_hash(resource_handle_ptr);
  temp_resource_size = CONCAT44(temp_resource_size._4_4_, resource_type);
  *resource_handle_ptr = 0x2f6e6962;
  *(int8_t *)(resource_handle_ptr + 1) = 0;
  temp_resource_type = 4;
  resource_offset = process_resource_path(&temp_buffer_ptr, &temp_ptr1, &temp_heap_ptr);
  temp_string_ptr = &UNK_180a3c3e0;
  temp_resource_size = 0;
  temp_string_ptr = (int8_t *)0x0;
  temp_string_length = 0;
  temp_resource_type = 2;
  resource_count = *(uint *)(resource_offset + 0x10);
  buffer_size = (ulonglong)resource_count;
  resource_index = 0;
  if (*(longlong *)(resource_offset + 8) == 0) {
LAB_RESOURCE_DIRECT_COPY:
    resource_hash_value = resource_index;
    if (resource_count != 0) {
                    // WARNING: Subroutine does not return
      memcpy(resource_data_ptr, *(uint64_t *)(resource_offset + 8), buffer_size);
    }
  }
  else if (resource_count != 0) {
    string_length = resource_count + 1;
    if (string_length < 0x10) {
      string_length = 0x10;
    }
    resource_data_ptr = (int8_t *)string_buffer_allocator(MEMORY_ALLOCATOR_HANDLE, (longlong)string_length, 0x13);
    *resource_data_ptr = 0;
    temp_string_ptr = resource_data_ptr;
    resource_index = calculate_string_hash(resource_data_ptr);
    temp_resource_size = CONCAT44(temp_resource_size._4_4_, resource_index);
    goto LAB_RESOURCE_DIRECT_COPY;
  }
  if (resource_data_ptr != (int8_t *)0x0) {
    resource_data_ptr[buffer_size] = 0;
  }
  temp_resource_size = CONCAT44(*(int32_t *)(resource_offset + 0x1c), (int32_t)temp_resource_size);
  if (resource_count + 0x15 != 0) {
    resource_index = resource_count + 0x16;
    temp_string_length = resource_count;
    if (resource_data_ptr == (int8_t *)0x0) {
      if ((int)resource_index < 0x10) {
        resource_index = 0x10;
      }
      resource_data_ptr = (int8_t *)string_buffer_allocator(MEMORY_ALLOCATOR_HANDLE, (longlong)(int)resource_index, 0x13);
      *resource_data_ptr = 0;
    }
    else {
      if (resource_index <= string_length) goto LAB_RESOURCE_PATH_COMPLETE;
      resource_flag = 0x13;
      resource_data_ptr = (int8_t *)string_buffer_reallocator(MEMORY_ALLOCATOR_HANDLE, resource_data_ptr, resource_index, 0x10);
    }
    temp_string_ptr = resource_data_ptr;
    resource_type = calculate_string_hash(resource_data_ptr);
    temp_resource_size = CONCAT44(temp_resource_size._4_4_, resource_type);
  }
LAB_RESOURCE_PATH_COMPLETE:
  resource_array_ptr = (int32_t *)(resource_data_ptr + buffer_size);
  *resource_array_ptr = 0x366e6957;
  resource_array_ptr[1] = 0x68535f34;
  resource_array_ptr[2] = 0x69707069;
  resource_array_ptr[3] = 0x435f676e;
  *(int32_t *)(resource_data_ptr + buffer_size + 0x10) = 0x6e65696c;
  *(int16_t *)(resource_data_ptr + buffer_size + 0x14) = 0x74;
  temp_buffer_ptr = &UNK_180a3c3e0;
  temp_resource_data = 0;
  temp_handle_ptr = (int16_t *)0x0;
  temp_resource_type = 0;
  temp_string_length = resource_count + 0x15;
  resource_handle_ptr = (int16_t *)string_buffer_allocator(MEMORY_ALLOCATOR_HANDLE, 0x10, 0x13);
  *(int8_t *)resource_handle_ptr = 0;
  temp_handle_ptr = resource_handle_ptr;
  resource_type = calculate_string_hash(resource_handle_ptr);
  temp_resource_data = CONCAT44(temp_resource_data._4_4_, resource_type);
  *resource_handle_ptr = 0x2f;
  temp_resource_type = 1;
  process_resource_path(&temp_string_ptr, temp_data_buffer, &temp_buffer_ptr);
  temp_buffer_ptr = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
  memory_deallocator(resource_handle_ptr);
}


uint64_t *
ui_component_allocator(uint64_t *component_ptr, ulonglong allocation_flags, uint64_t param_3, uint64_t param_4)

{
  uint64_t stack_parameter;
  
  stack_parameter = 0xfffffffffffffffe;
  *component_ptr = &UNK_180a3e030;
  initialize_ui_system();
  if ((allocation_flags & 1) != 0) {
    free(component_ptr, 400, param_3, param_4, stack_parameter);
  }
  return component_ptr;
}


int32_t * ui_component_initializer(uint64_t param_1, int32_t *init_data_ptr)

{
  *init_data_ptr = 0;
  return init_data_ptr;
}


int ui_property_getter(uint64_t param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4)

{
  int property_value;
  longlong string_offset1;
  longlong string_offset2;
  void *property_ptr;
  void *temp_buffer_ptr;
  longlong buffer_data;
  int buffer_length;
  int property_id;
  
  initialize_string_buffer(&temp_buffer_ptr, param_1, param_3, param_4, 0xfffffffffffffffe);
  string_offset2 = buffer_data;
  if (buffer_length == 0x19) {
    property_value = strcmp(buffer_data, &UNK_180a3e128);
    if (property_value == 0) {
      property_value = 0x84;
      goto LAB_PROPERTY_VALUE_FOUND;
    }
  }
  else if (buffer_length == 0x18) {
    property_value = strcmp(buffer_data, &UNK_180a3e0f0);
    if (property_value == 0) {
      property_value = 0x10;
      goto LAB_PROPERTY_VALUE_FOUND;
    }
LAB_PROPERTY_DEFAULT:
    property_ptr = &UNK_180a3e180;
LAB_PROPERTY_COMPARE:
    property_value = strcmp(string_offset2, property_ptr);
    if (property_value == 0) {
      property_value = 4;
      goto LAB_PROPERTY_VALUE_FOUND;
    }
  }
  else if (buffer_length == 0x12) {
    property_value = strcmp(buffer_data, &UNK_180a3e110);
    if (property_value == 0) {
      property_value = 0xa0;
      goto LAB_PROPERTY_VALUE_FOUND;
    }
LAB_PROPERTY_EXTENDED:
    property_value = strcmp(string_offset2, &UNK_180a3e230);
    if (property_value == 0) {
      property_value = 8;
      goto LAB_PROPERTY_VALUE_FOUND;
    }
    property_value = strcmp(string_offset2, &UNK_180a3e1f8);
    if (property_value == 0) {
      property_value = 0x10;
      goto LAB_PROPERTY_VALUE_FOUND;
    }
    property_ptr = &UNK_180a3e210;
LAB_PROPERTY_COMPARE_EXTENDED:
    property_value = strcmp(string_offset2, property_ptr);
    if (property_value == 0) {
      property_value = 0x10;
      goto LAB_PROPERTY_VALUE_FOUND;
    }
  }
  else if (buffer_length == 0x1a) {
    property_value = strcmp(buffer_data, &UNK_180a3e0b8);
    if (property_value == 0) {
      property_value = 0x204;
      goto LAB_PROPERTY_VALUE_FOUND;
    }
  }
  else {
    if (buffer_length == 0x15) {
      property_value = strcmp(buffer_data, &UNK_180a3e0d8);
      if (property_value == 0) {
        property_value = 0x404;
        goto LAB_PROPERTY_VALUE_FOUND;
      }
      property_ptr = &UNK_180a3e1b0;
      goto LAB_PROPERTY_COMPARE;
    }
    if (buffer_length == 0x11) {
      property_value = strcmp(buffer_data, &UNK_180a3e1c8);
      if (property_value == 0) {
        property_value = 0x50;
        goto LAB_PROPERTY_VALUE_FOUND;
      }
    }
    else {
      if (buffer_length == 0x18) goto LAB_PROPERTY_DEFAULT;
      if (buffer_length == 0xb) {
        property_value = strcmp(buffer_data, &UNK_180a3e1a0);
        if (property_value == 0) {
          property_value = 8;
          goto LAB_PROPERTY_VALUE_FOUND;
        }
      }
      else if (buffer_length == 0x16) {
        property_ptr = &UNK_180a3e160;
LAB_PROPERTY_COMPARE_SIMPLE:
        property_value = strcmp(buffer_data, property_ptr);
        if (property_value == 0) {
          property_value = 0xc;
          goto LAB_PROPERTY_VALUE_FOUND;
        }
      }
      else {
        if (buffer_length == 7) {
          string_offset2 = 0;
          do {
            string_offset1 = string_offset2 + 1;
            if (*(char *)(buffer_data + string_offset2) != (&UNK_180a3e178)[string_offset2]) {
              string_offset2 = 0;
              goto LAB_PROPERTY_STRING_COMPARE;
            }
            string_offset2 = string_offset1;
          } while (string_offset1 != 8);
          property_value = 0x10;
          goto LAB_PROPERTY_VALUE_FOUND;
        }
        if (buffer_length == 0xf) {
          property_value = strcmp(buffer_data, &UNK_180a3e150);
          if (property_value == 0) {
            property_value = 0x40;
            goto LAB_PROPERTY_VALUE_FOUND;
          }
        }
        else {
          if (buffer_length == 0x13) {
            property_ptr = &UNK_180a3e248;
            goto LAB_PROPERTY_COMPARE_SIMPLE;
          }
          if (buffer_length == 0xd) {
            property_ptr = &UNK_180a3e260;
            goto LAB_PROPERTY_COMPARE_EXTENDED;
          }
          if (buffer_length == 6) {
            string_offset2 = 0;
            do {
              string_offset1 = string_offset2;
              if (*(char *)(buffer_data + string_offset1) != (&UNK_180a3e224)[string_offset1]) goto LAB_PROPERTY_VALUE_RETURN;
              string_offset2 = string_offset1 + 1;
            } while (string_offset1 + 1 != 7);
            property_value = (int)string_offset1 + 0x1e;
            goto LAB_PROPERTY_VALUE_FOUND;
          }
          if (buffer_length == 0x12) goto LAB_PROPERTY_EXTENDED;
        }
      }
    }
  }
LAB_PROPERTY_VALUE_RETURN:
  property_value = 0;
LAB_PROPERTY_VALUE_FOUND:
  temp_buffer_ptr = &UNK_180a3c3e0;
  if (buffer_data != 0) {
                    // WARNING: Subroutine does not return
    memory_deallocator(buffer_data);
  }
  return property_value;
  while (string_offset2 = string_offset1, string_offset1 != 8) {
LAB_PROPERTY_STRING_COMPARE:
    string_offset1 = string_offset2 + 1;
    if (*(char *)(buffer_data + string_offset2) != (&UNK_180a3e148)[string_offset2]) goto LAB_PROPERTY_VALUE_RETURN;
  }
  property_value = 0x30;
  goto LAB_PROPERTY_VALUE_FOUND;
}


ulonglong ui_property_validator(uint64_t param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4)

{
  char validation_char;
  ulonglong validation_result;
  int compare_result;
  longlong string_offset1;
  longlong string_offset2;
  void *property_ptr;
  ulonglong property_value;
  bool validation_flag;
  void *temp_buffer_ptr1;
  char *string_buffer_ptr;
  int buffer_length;
  int32_t temp_property;
  void *temp_buffer_ptr2;
  longlong buffer_data;
  int property_id;
  
  initialize_string_buffer(&temp_buffer_ptr2, param_1, param_3, param_4, 0xfffffffffffffffe);
  initialize_string_buffer(&temp_buffer_ptr1, param_2);
  string_offset2 = buffer_data;
  if (property_id == 0x19) {
    compare_result = strcmp(buffer_data, &UNK_180a3e128);
    if (compare_result == 0) {
      if (buffer_length == 7) {
        string_offset2 = 0;
        do {
          string_offset1 = string_offset2 + 1;
          if (string_buffer_ptr[string_offset2] != (&UNK_180a3e1e0)[string_offset2]) break;
          string_offset2 = string_offset1;
        } while (string_offset1 != 8);
      }
      else if (buffer_length == 9) {
        property_ptr = &UNK_180a3e1e8;
LAB_PROPERTY_COMPARE_EXTENDED:
        compare_result = strcmp(string_buffer_ptr, property_ptr);
        validation_flag = compare_result == 0;
LAB_PROPERTY_VALIDATION:
        if (validation_flag) {
          property_value = 4;
          goto LAB_PROPERTY_VALID;
        }
      }
    }
  }
  else if (property_id == 0x18) {
    compare_result = strcmp(buffer_data, &UNK_180a3e0f0);
    if ((compare_result == 0) && (buffer_length == 7)) {
      property_value = 8;
      string_offset2 = 0;
      do {
        string_offset1 = string_offset2 + 1;
        if (string_buffer_ptr[string_offset2] != (&UNK_180a3e2b0)[string_offset2]) {
          string_offset2 = 0;
          goto LAB_PROPERTY_VALIDATION_RESULT;
        }
        string_offset2 = string_offset1;
      } while (string_offset1 != 8);
    }
  }
  else if (property_id == 0x1a) {
    compare_result = strcmp(buffer_data, &UNK_180a3e0b8);
    if ((compare_result == 0) && (buffer_length == 4)) {
      string_offset2 = 0;
      do {
        string_offset1 = string_offset2 + 1;
        if (string_buffer_ptr[string_offset2] != (&UNK_180a0ee30)[string_offset2]) {
          validation_result = 0;
          goto LAB_PROPERTY_VALIDATION_RETURN;
        }
        string_offset2 = string_offset1;
      } while (string_offset1 != 5);
    }
  }
  else if (property_id == 0x15) {
    compare_result = strcmp(buffer_data, &UNK_180a3e0d8);
    if (compare_result == 0) {
      if (buffer_length == 0xb) {
        strcmp(string_buffer_ptr, &UNK_180a3e2b8);
      }
      else if ((buffer_length == 9) && (compare_result = strcmp(string_buffer_ptr, &UNK_180a3e2a0), compare_result == 0)) {
        property_value = 0x204;
        goto LAB_PROPERTY_VALID;
      }
    }
  }
  else if (property_id == 0x11) {
    compare_result = strcmp(buffer_data, &UNK_180a3e1c8);
    if (compare_result == 0) {
      if (buffer_length == 6) {
        string_offset2 = 0;
        do {
          string_offset1 = string_offset2 + 1;
          if (string_buffer_ptr[string_offset2] != (&UNK_180a1a478)[string_offset2]) break;
          string_offset2 = string_offset1;
        } while (string_offset1 != 7);
      }
      else if (buffer_length == 8) {
        property_ptr = &UNK_180a16818;
LAB_PROPERTY_COMPARE_STANDARD:
        compare_result = strcmp(string_buffer_ptr, property_ptr);
        if (compare_result == 0) {
          property_value = 0x10;
          goto LAB_PROPERTY_VALID;
        }
      }
      else if (buffer_length == 5) {
        string_offset2 = 0;
        do {
          string_offset1 = string_offset2;
          if (string_buffer_ptr[string_offset1] != (&UNK_180a0f108)[string_offset1]) goto LAB_PROPERTY_VALIDATION_CONTINUE;
          string_offset2 = string_offset1 + 1;
        } while (string_offset1 + 1 != 6);
        property_value = (ulonglong)((int)string_offset1 + 0x3b);
        goto LAB_PROPERTY_VALID;
      }
    }
  }
  else if (property_id == 0xb) {
    compare_result = strcmp(buffer_data, &UNK_180a3e1a0);
    if (compare_result == 0) {
LAB_PROPERTY_COORDINATE:
      if ((buffer_length == 1) &&
         (((*string_buffer_ptr != 'x' || (string_buffer_ptr[1] != '\0')) && (*string_buffer_ptr == 'y')))) {
        validation_flag = string_buffer_ptr[1] == '\0';
        goto LAB_PROPERTY_VALIDATION;
      }
    }
  }
  else if (property_id == 0x16) {
    compare_result = strcmp(buffer_data, &UNK_180a3e160);
    if (((compare_result == 0) && (buffer_length == 1)) && ((*string_buffer_ptr != 'x' || (string_buffer_ptr[1] != '\0')))) {
      if ((*string_buffer_ptr == 'y') && (string_buffer_ptr[1] == '\0')) {
        property_value = 4;
        goto LAB_PROPERTY_VALID;
      }
      if (*string_buffer_ptr == 'z') {
        validation_flag = string_buffer_ptr[1] == '\0';
LAB_PROPERTY_AXIS_CHECK:
        if (validation_flag) {
          property_value = 8;
          goto LAB_PROPERTY_VALID;
        }
      }
    }
  }
  else if (property_id == 7) {
    property_value = 8;
    string_offset2 = 0;
    do {
      string_offset1 = string_offset2 + 1;
      if (*(char *)(buffer_data + string_offset2) != (&UNK_180a3e178)[string_offset2]) {
        string_offset2 = 0;
        goto LAB_PROPERTY_STRING_VALIDATION;
      }
      string_offset2 = string_offset1;
    } while (string_offset1 != 8);
    if (((buffer_length == 1) && ((*string_buffer_ptr != 's' || (string_buffer_ptr[1] != '\0')))) &&
        (*string_buffer_ptr == 'f') && (string_buffer_ptr[1] == '\0')) goto LAB_PROPERTY_VALID;
  }
  else if (property_id == 0xf) {
    compare_result = strcmp(buffer_data, &UNK_180a3e150);
    if (compare_result == 0) {
      if (buffer_length == 3) {
        string_offset2 = 0;
        do {
          string_offset1 = string_offset2 + 1;
          if (string_buffer_ptr[string_offset2] != (&UNK_180a3e294)[string_offset2]) break;
          string_offset2 = string_offset1;
        } while (string_offset1 != 4);
      }
      else if (((buffer_length == 1) && (*string_buffer_ptr == 'o')) && (string_buffer_ptr[1] == '\0')) {
        property_value = 0x30;
        goto LAB_PROPERTY_VALID;
      }
    }
  }
  else if (property_id == 0x13) {
    compare_result = strcmp(buffer_data, &UNK_180a3e248);
    if (compare_result == 0) {
      if (buffer_length == 10) {
        strcmp(string_buffer_ptr, &UNK_180a3e270);
      }
      else {
        if (buffer_length == 0x10) {
          property_ptr = &UNK_180a3e280;
          goto LAB_PROPERTY_COMPARE_EXTENDED;
        }
        if (buffer_length == 0x11) {
          compare_result = strcmp(string_buffer_ptr, &UNK_180a3e2e8);
          validation_flag = compare_result == 0;
          goto LAB_PROPERTY_AXIS_CHECK;
        }
      }
    }
  }
  else if (property_id == 0xd) {
    compare_result = strcmp(buffer_data, &UNK_180a3e260);
    if (((compare_result == 0) && (buffer_length == 1)) && ((*string_buffer_ptr != 'w' || (string_buffer_ptr[1] != '\0')))) {
      if ((*string_buffer_ptr == 'x') && (string_buffer_ptr[1] == '\0')) {
        property_value = 4;
        goto LAB_PROPERTY_VALID;
      }
      if ((*string_buffer_ptr == 'y') && (string_buffer_ptr[1] == '\0')) {
        property_value = 8;
        goto LAB_PROPERTY_VALID;
      }
      if (*string_buffer_ptr == 'z') {
        validation_char = string_buffer_ptr[1];
LAB_PROPERTY_COORDINATE_VALIDATION:
        if (validation_char == '\0') {
          property_value = 0xc;
          goto LAB_PROPERTY_VALID;
        }
      }
    }
  }
  else if (property_id == 6) {
    string_offset2 = 0;
    do {
      string_offset1 = string_offset2 + 1;
      if (*(char *)(buffer_data + string_offset2) != (&UNK_180a3e224)[string_offset2]) goto LAB_PROPERTY_VALIDATION_CONTINUE;
      string_offset2 = string_offset1;
    } while (string_offset1 != 7);
    if (buffer_length == 7) {
      string_offset2 = 0;
      do {
        string_offset1 = string_offset2 + 1;
        if (string_buffer_ptr[string_offset2] != (&UNK_180a3e300)[string_offset2]) break;
        string_offset2 = string_offset1;
      } while (string_offset1 != 8);
    }
    else {
      if (buffer_length == 10) {
        property_ptr = &UNK_180a3e2c8;
        goto LAB_PROPERTY_COMPARE_STANDARD;
      }
      if (buffer_length == 0xd) {
        compare_result = strcmp(string_buffer_ptr, &UNK_180a3e2d8);
        validation_flag = compare_result == 0;
        goto LAB_PROPERTY_ORIENTATION_CHECK;
      }
    }
  }
  else if (property_id == 0x12) {
    compare_result = strcmp(buffer_data, &UNK_180a3e230);
    if (compare_result == 0) goto LAB_PROPERTY_COORDINATE;
    compare_result = strcmp(string_offset2, &UNK_180a3e1f8);
    if (((compare_result == 0) && (buffer_length == 1)) && ((*string_buffer_ptr != 'x' || (string_buffer_ptr[1] != '\0')))) {
      if ((*string_buffer_ptr == 'y') && (string_buffer_ptr[1] == '\0')) {
        property_value = 4;
        goto LAB_PROPERTY_VALID;
      }
      if ((*string_buffer_ptr == 'z') && (string_buffer_ptr[1] == '\0')) {
        property_value = 8;
        goto LAB_PROPERTY_VALID;
      }
      if (*string_buffer_ptr == 'w') {
        validation_char = string_buffer_ptr[1];
        goto LAB_PROPERTY_COORDINATE_VALIDATION;
      }
    }
  }
  goto LAB_PROPERTY_VALIDATION_CONTINUE;
  while (validation_result = property_value + 1, property_value + 1 != 5) {
LAB_PROPERTY_VALIDATION_RETURN:
    property_value = validation_result;
    if (string_buffer_ptr[property_value] != (&UNK_180a1022c)[property_value]) goto LAB_PROPERTY_VALIDATION_CONTINUE;
  }
  property_value = property_value & 0xffffffff;
  goto LAB_PROPERTY_VALID;
  while (string_offset2 = string_offset1, string_offset1 != 8) {
LAB_PROPERTY_VALIDATION_RESULT:
    string_offset1 = string_offset2 + 1;
    if (string_buffer_ptr[string_offset2] != (&UNK_180a3e1e0)[string_offset2]) goto LAB_PROPERTY_VALIDATION_CONTINUE;
  }
  goto LAB_PROPERTY_VALID;
  while (string_offset2 = string_offset1, string_offset1 != 8) {
LAB_PROPERTY_STRING_VALIDATION:
    string_offset1 = string_offset2 + 1;
    if (*(char *)(buffer_data + string_offset2) != (&UNK_180a3e148)[string_offset2]) goto LAB_PROPERTY_VALIDATION_CONTINUE;
  }
  if ((buffer_length == 1) && ((*string_buffer_ptr != 's' || (string_buffer_ptr[1] != '\0')))) {
    if ((*string_buffer_ptr == 'f') && (string_buffer_ptr[1] == '\0')) {
      property_value = 0x10;
      goto LAB_PROPERTY_VALID;
    }
    if (*string_buffer_ptr == 'u') {
      validation_flag = string_buffer_ptr[1] == '\0';
LAB_PROPERTY_ORIENTATION_CHECK:
      if (validation_flag) {
        property_value = 0x20;
        goto LAB_PROPERTY_VALID;
      }
    }
  }
LAB_PROPERTY_VALIDATION_CONTINUE:
  property_value = 0;
LAB_PROPERTY_VALID:
  temp_buffer_ptr1 = &UNK_180a3c3e0;
  if (string_buffer_ptr != (char *)0x0) {
                    // WARNING: Subroutine does not return
    memory_deallocator(string_buffer_ptr);
  }
  string_buffer_ptr = (char *)0x0;
  temp_property = 0;
  temp_buffer_ptr1 = &UNK_18098bcb0;
  temp_buffer_ptr2 = &UNK_180a3c3e0;
  if (buffer_data == 0) {
    return property_value;
  }
                    // WARNING: Subroutine does not return
  memory_deallocator(buffer_data);
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address


/**
 * UI系统属性数据提取器
 * 从UI系统数据结构中提取属性数据
 * 
 * @param property_index 属性索引
 * @param property_data_ptr 属性数据指针
 */
void ui_system_property_extractor(int property_index, uint64_t *property_data_ptr)

{
  uint64_t *property_table_ptr;
  int32_t property_flags;
  longlong property_offset;
  code *destructor_ptr;
  uint64_t property_value1;
  uint64_t property_value2;
  uint64_t property_value3;
  uint64_t property_value4;
  uint64_t property_value5;
  uint64_t property_value6;
  uint64_t property_value7;
  uint64_t property_value8;
  uint64_t property_value9;
  uint64_t property_value10;
  uint64_t property_value11;
  uint64_t property_value12;
  uint64_t property_value13;
  uint64_t property_value14;
  uint64_t property_value15;
  uint64_t property_value16;
  uint64_t property_value17;
  uint64_t property_value18;
  uint64_t property_value19;
  longlong array_index;
  
  property_offset = *_DAT_180c8ecf0;
  if ((ulonglong)(longlong)property_index < (ulonglong)((_DAT_180c8ecf0[1] - property_offset) / 0x84)) {
    array_index = (longlong)property_index * 0x84;
    property_table_ptr = (uint64_t *)(array_index + 0x60 + property_offset);
    property_value1 = *property_table_ptr;
    property_value2 = property_table_ptr[1];
    property_flags = *(int32_t *)(array_index + 0x80 + property_offset);
    property_table_ptr = (uint64_t *)(array_index + 0x70 + property_offset);
    property_value3 = *property_table_ptr;
    property_value4 = property_table_ptr[1];
    property_value5 = ((uint64_t *)(array_index + property_offset))[1];
    property_table_ptr = (uint64_t *)(array_index + 0x10 + property_offset);
    property_value6 = *property_table_ptr;
    property_value7 = property_table_ptr[1];
    property_table_ptr = (uint64_t *)(array_index + 0x20 + property_offset);
    property_value8 = *property_table_ptr;
    property_value9 = property_table_ptr[1];
    property_table_ptr = (uint64_t *)(array_index + 0x30 + property_offset);
    property_value10 = *property_table_ptr;
    property_value11 = property_table_ptr[1];
    property_table_ptr = (uint64_t *)(array_index + 0x40 + property_offset);
    property_value12 = *property_table_ptr;
    property_value13 = property_table_ptr[1];
    property_table_ptr = (uint64_t *)(array_index + 0x50 + property_offset);
    property_value14 = *property_table_ptr;
    property_value15 = property_table_ptr[1];
    *property_data_ptr = *(uint64_t *)(array_index + property_offset);
    property_data_ptr[1] = property_value5;
    property_data_ptr[2] = property_value6;
    property_data_ptr[3] = property_value7;
    property_data_ptr[4] = property_value8;
    property_data_ptr[5] = property_value9;
    property_data_ptr[6] = property_value10;
    property_data_ptr[7] = property_value11;
    property_data_ptr[8] = property_value12;
    property_data_ptr[9] = property_value13;
    property_data_ptr[10] = property_value14;
    property_data_ptr[0xb] = property_value15;
    property_data_ptr[0xc] = property_value1;
    property_data_ptr[0xd] = property_value2;
    property_data_ptr[0xe] = property_value3;
    property_data_ptr[0xf] = property_value4;
    *(int32_t *)(property_data_ptr + 0x10) = property_flags;
    return;
  }
  ui_system_error_handler();
  destructor_ptr = (code *)swi(3);
  (*destructor_ptr)();
  return;
}


/**
 * UI系统属性数据复制器
 * 复制UI系统属性数据到目标位置
 * 
 * @param source_ptr1 源数据指针1
 * @param source_ptr2 源数据指针2
 * @param destination_ptr 目标数据指针
 */
void ui_system_property_copier(uint64_t source_ptr1, uint64_t source_ptr2, uint64_t *destination_ptr)

{
  uint64_t *property_table_ptr;
  int32_t property_flags;
  uint64_t property_value1;
  uint64_t property_value2;
  uint64_t property_value3;
  uint64_t property_value4;
  uint64_t property_value5;
  uint64_t property_value6;
  uint64_t property_value7;
  uint64_t property_value8;
  uint64_t property_value9;
  uint64_t property_value10;
  uint64_t property_value11;
  uint64_t property_value12;
  uint64_t property_value13;
  uint64_t property_value14;
  uint64_t property_value15;
  uint64_t property_value16;
  uint64_t property_value17;
  longlong base_offset;
  longlong offset_data;
  
  property_table_ptr = (uint64_t *)(base_offset + 0x60 + offset_data);
  property_value1 = *property_table_ptr;
  property_value2 = property_table_ptr[1];
  property_flags = *(int32_t *)(base_offset + 0x80 + offset_data);
  property_table_ptr = (uint64_t *)(base_offset + 0x70 + offset_data);
  property_value3 = *property_table_ptr;
  property_value4 = property_table_ptr[1];
  property_value5 = ((uint64_t *)(base_offset + offset_data))[1];
  property_table_ptr = (uint64_t *)(base_offset + 0x10 + offset_data);
  property_value6 = *property_table_ptr;
  property_value7 = property_table_ptr[1];
  property_table_ptr = (uint64_t *)(base_offset + 0x20 + offset_data);
  property_value8 = *property_table_ptr;
  property_value9 = property_table_ptr[1];
  property_table_ptr = (uint64_t *)(base_offset + 0x30 + offset_data);
  property_value10 = *property_table_ptr;
  property_value11 = property_table_ptr[1];
  property_table_ptr = (uint64_t *)(base_offset + 0x40 + offset_data);
  property_value12 = *property_table_ptr;
  property_value13 = property_table_ptr[1];
  property_table_ptr = (uint64_t *)(base_offset + 0x50 + offset_data);
  property_value14 = *property_table_ptr;
  property_value15 = property_table_ptr[1];
  *destination_ptr = *(uint64_t *)(base_offset + offset_data);
  destination_ptr[1] = property_value5;
  destination_ptr[2] = property_value6;
  destination_ptr[3] = property_value7;
  destination_ptr[4] = property_value8;
  destination_ptr[5] = property_value9;
  destination_ptr[6] = property_value10;
  destination_ptr[7] = property_value11;
  destination_ptr[8] = property_value12;
  destination_ptr[9] = property_value13;
  destination_ptr[10] = property_value14;
  destination_ptr[0xb] = property_value15;
  destination_ptr[0xc] = property_value1;
  destination_ptr[0xd] = property_value2;
  destination_ptr[0xe] = property_value3;
  destination_ptr[0xf] = property_value4;
  *(int32_t *)(destination_ptr + 0x10) = property_flags;
  return;
}


/**
 * UI系统错误处理器
 * 处理UI系统错误和异常情况
 */
void ui_system_error_handler(void)

{
  code *error_handler_ptr;
  
  ui_system_error_handler();
  error_handler_ptr = (code *)swi(3);
  (*error_handler_ptr)();
  return;
}


uint64_t
ui_component_creator(uint64_t param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4)

{
  uint64_t stack_parameter;
  longlong component_data[3];
  int32_t component_count;
  
  component_data[0] = 0;
  component_data[1] = 0;
  component_data[2] = 0;
  component_count = 3;
  stack_parameter = (longlong *)((ulonglong)component_data & 0xffffffff00000000);
  create_ui_component(component_data, &stack_parameter, param_3, param_4, 0xfffffffffffffffe, &UNK_1809fe070, 0);
  create_ui_component(component_data, (longlong)&stack_parameter + 1);
  create_ui_component(component_data, (longlong)&stack_parameter + 2);
  create_ui_component(component_data, (longlong)&stack_parameter + 3);
  stack_parameter = component_data;
  if (component_data[0] != 0) {
                    // WARNING: Subroutine does not return
    memory_deallocator(component_data);
  }
  return 0x10;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t * ui_attribute_initializer(int32_t *attribute_ptr)

{
  int32_t attribute_value;
  longlong *attribute_table_ptr;
  int32_t temp_value1;
  int32_t temp_value2;
  int32_t temp_value3;
  
  attribute_table_ptr = (longlong *)memory_block_allocator(MEMORY_ALLOCATOR_HANDLE, 0x30, 8, 3, 0xfffffffffffffffe);
  attribute_table_ptr[1] = 0;
  attribute_table_ptr[2] = 0;
  attribute_table_ptr[3] = 0;
  attribute_table_ptr[4] = 0;
  attribute_table_ptr[5] = 0;
  *attribute_table_ptr = (longlong)&UNK_180a21690;
  *attribute_table_ptr = (longlong)&UNK_180a21720;
  *(int32_t *)(attribute_table_ptr + 1) = 0;
  *attribute_table_ptr = (longlong)&UNK_1809fe070;
  attribute_table_ptr[2] = 0;
  attribute_table_ptr[3] = 0;
  attribute_table_ptr[4] = 0;
  *(int32_t *)(attribute_table_ptr + 5) = 3;
  (**(code **)(*attribute_table_ptr + 0x28))(attribute_table_ptr);
  attribute_value = (**(code **)(*attribute_table_ptr + 8))(attribute_table_ptr);
  (**(code **)(*attribute_table_ptr + 0x28))(attribute_table_ptr);
  temp_value1 = SUB84(attribute_table_ptr, 0);
  temp_value2 = (int32_t)((ulonglong)attribute_table_ptr >> 0x20);
  *attribute_ptr = temp_value1;
  attribute_ptr[1] = temp_value2;
  attribute_ptr[2] = attribute_value;
  attribute_ptr[3] = temp_value3;
  (**(code **)(*attribute_table_ptr + 0x38))(attribute_table_ptr);
  return attribute_ptr;
}


/**
 * UI系统属性设置器
 * 设置UI系统组件的属性值
 * 
 * @param component_ptr 组件指针
 * @param property_value 属性值
 */
void ui_system_property_setter(longlong component_ptr, int32_t property_value)

{
  int32_t temp_value;
  
  component_ptr = component_ptr + 0x10;
  temp_value = property_value;
  set_ui_component_property(component_ptr, &temp_value);
  set_ui_component_property(component_ptr, (longlong)&temp_value + 1);
  set_ui_component_property(component_ptr, (longlong)&temp_value + 2);
  set_ui_component_property(component_ptr, (longlong)&temp_value + 3);
  return;
}


/**
 * UI系统属性更新器
 * 更新UI系统组件的属性值
 * 
 * @param component_ptr 组件指针
 * @param property_value 属性值
 */
void ui_system_property_updater(longlong component_ptr, int32_t property_value)

{
  int32_t temp_value;
  
  component_ptr = component_ptr + 0x10;
  temp_value = property_value;
  update_ui_component_property(component_ptr, &temp_value);
  update_ui_component_property(component_ptr, (longlong)&temp_value + 1);
  update_ui_component_property(component_ptr, (longlong)&temp_value + 2);
  update_ui_component_property(component_ptr, (longlong)&temp_value + 3);
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t * ui_transform_initializer(int32_t *transform_ptr)

{
  int32_t transform_value;
  longlong *transform_table_ptr;
  int32_t temp_value1;
  int32_t temp_value2;
  int32_t temp_value3;
  
  transform_table_ptr = (longlong *)memory_block_allocator(MEMORY_ALLOCATOR_HANDLE, 0x30, 8, 3, 0xfffffffffffffffe);
  transform_table_ptr[1] = 0;
  transform_table_ptr[2] = 0;
  transform_table_ptr[3] = 0;
  transform_table_ptr[4] = 0;
  transform_table_ptr[5] = 0;
  *transform_table_ptr = (longlong)&UNK_180a21690;
  *transform_table_ptr = (longlong)&UNK_180a21720;
  *(int32_t *)(transform_table_ptr + 1) = 0;
  *transform_table_ptr = (longlong)&UNK_180a3e310;
  transform_table_ptr[2] = 0;
  transform_table_ptr[3] = 0;
  transform_table_ptr[4] = 0;
  *(int32_t *)(transform_table_ptr + 5) = 3;
  (**(code **)(*transform_table_ptr + 0x28))(transform_table_ptr);
  transform_value = (**(code **)(*transform_table_ptr + 8))(transform_table_ptr);
  (**(code **)(*transform_table_ptr + 0x28))(transform_table_ptr);
  temp_value1 = SUB84(transform_table_ptr, 0);
  temp_value2 = (int32_t)((ulonglong)transform_table_ptr >> 0x20);
  *transform_ptr = temp_value1;
  transform_ptr[1] = temp_value2;
  transform_ptr[2] = transform_value;
  transform_ptr[3] = temp_value3;
  (**(code **)(*transform_table_ptr + 0x38))(transform_table_ptr);
  return transform_ptr;
}


uint64_t *
ui_system_component_manager(uint64_t *component_ptr, ulonglong manager_flags, uint64_t param_3, uint64_t param_4)

{
  uint64_t stack_parameter;
  
  stack_parameter = 0xfffffffffffffffe;
  initialize_ui_component_system();
  *component_ptr = &UNK_180a21720;
  *component_ptr = &UNK_180a21690;
  if ((manager_flags & 1) != 0) {
    free(component_ptr, 0x30, param_3, param_4, stack_parameter);
  }
  return component_ptr;
}


longlong * ui_system_component_query(longlong *result_ptr, longlong query_base, int query_index)

{
  longlong *component_ptr;
  int32_t query_result;
  int32_t temp_value;
  
  component_ptr = *(longlong **)(*(longlong *)(query_base + 0x10) + (longlong)query_index * 8);
  if (component_ptr == (longlong *)0x0) {
    query_result = 0xffffffff;
  }
  else {
    query_result = (**(code **)(*component_ptr + 8))(component_ptr);
    (**(code **)(*component_ptr + 0x28))(component_ptr);
  }
  *result_ptr = (longlong)component_ptr;
  result_ptr[1] = CONCAT44(temp_value, query_result);
  return result_ptr;
}


/**
 * UI系统组件清理器
 * 清理UI系统组件和相关资源
 * 
 * @param component_list_ptr 组件列表指针
 */
void ui_system_component_cleaner(longlong component_list_ptr)

{
  longlong *component_ptr1;
  longlong *component_ptr2;
  
  component_ptr1 = *(longlong **)(component_list_ptr + 0x18);
  component_ptr2 = *(longlong **)(component_list_ptr + 0x10);
  if (component_ptr2 != component_ptr1) {
    do {
      if ((longlong *)*component_ptr2 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*component_ptr2 + 0x38))();
      }
      component_ptr2 = component_ptr2 + 1;
    } while (component_ptr2 != component_ptr1);
    *(uint64_t *)(component_list_ptr + 0x18) = *(uint64_t *)(component_list_ptr + 0x10);
    return;
  }
  *(longlong **)(component_list_ptr + 0x18) = component_ptr2;
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t * ui_event_handler_initializer(int32_t *event_handler_ptr)

{
  int32_t event_value;
  longlong *event_table_ptr;
  int32_t temp_value1;
  int32_t temp_value2;
  int32_t temp_value3;
  
  event_table_ptr = (longlong *)memory_block_allocator(MEMORY_ALLOCATOR_HANDLE, 0x30, 8, 3, 0xfffffffffffffffe);
  event_table_ptr[1] = 0;
  event_table_ptr[2] = 0;
  event_table_ptr[3] = 0;
  event_table_ptr[4] = 0;
  event_table_ptr[5] = 0;
  *event_table_ptr = (longlong)&UNK_180a21690;
  *event_table_ptr = (longlong)&UNK_180a21720;
  *(int32_t *)(event_table_ptr + 1) = 0;
  *event_table_ptr = (longlong)&UNK_180a3e378;
  event_table_ptr[2] = (longlong)&UNK_18098bcb0;
  event_table_ptr[3] = 0;
  *(int32_t *)(event_table_ptr + 4) = 0;
  event_table_ptr[2] = (longlong)&UNK_180a3c3e0;
  event_table_ptr[5] = 0;
  event_table_ptr[3] = 0;
  *(int32_t *)(event_table_ptr + 4) = 0;
  (**(code **)(*event_table_ptr + 0x28))(event_table_ptr);
  event_value = (**(code **)(*event_table_ptr + 8))(event_table_ptr);
  (**(code **)(*event_table_ptr + 0x28))(event_table_ptr);
  temp_value1 = SUB84(event_table_ptr, 0);
  temp_value2 = (int32_t)((ulonglong)event_table_ptr >> 0x20);
  *event_handler_ptr = temp_value1;
  event_handler_ptr[1] = temp_value2;
  event_handler_ptr[2] = event_value;
  event_handler_ptr[3] = temp_value3;
  (**(code **)(*event_table_ptr + 0x38))(event_table_ptr);
  return event_handler_ptr;
}


uint64_t *
ui_system_event_manager(uint64_t *event_manager_ptr, ulonglong event_flags, uint64_t param_3, uint64_t param_4)

{
  event_manager_ptr[2] = &UNK_180a3c3e0;
  if (event_manager_ptr[3] != 0) {
                    // WARNING: Subroutine does not return
    memory_deallocator(event_manager_ptr);
  }
  event_manager_ptr[3] = 0;
  *(int32_t *)(event_manager_ptr + 5) = 0;
  event_manager_ptr[2] = &UNK_18098bcb0;
  *event_manager_ptr = &UNK_180a21720;
  *event_manager_ptr = &UNK_180a21690;
  if ((event_flags & 1) != 0) {
    free(event_manager_ptr, 0x30, param_3, param_4, 0xfffffffffffffffe);
  }
  return event_manager_ptr;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t ui_system_event_processor(longlong event_data, uint64_t param_2, uint64_t param_3, uint64_t param_4)

{
  int32_t process_result;
  void *temp_buffer_ptr;
  longlong buffer_data;
  
  initialize_event_buffer(&temp_buffer_ptr, event_data + 0x10, param_3, param_4, 0xfffffffffffffffe);
  process_result = (**(code **)(*_DAT_180c8f008 + 0x70))(_DAT_180c8f008, &temp_buffer_ptr);
  temp_buffer_ptr = &UNK_180a3c3e0;
  if (buffer_data != 0) {
                    // WARNING: Subroutine does not return
    memory_deallocator(buffer_data);
  }
  return process_result;
}

