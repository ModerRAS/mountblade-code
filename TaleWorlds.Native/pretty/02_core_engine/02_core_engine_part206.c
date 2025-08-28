#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part206.c - 核心引擎动态数组管理模块

// 函数：向动态数组中插入元素（8字节结构体）
void dynamic_array_insert_8byte(longlong *array_info, longlong insert_pos, undefined8 *element_data)

{
    ulonglong new_capacity;
    undefined8 *new_array;
    code *error_handler;
    ulonglong current_capacity;
    undefined4 element_field_0x14;
    undefined4 element_field_0x18;
    undefined4 element_field_0x1c;
    undefined8 element_field_4;
    longlong array_start;
    longlong array_end;
    undefined1 temp_stack[8];
    ulonglong calc_capacity;
    longlong element_offset;
    
    array_end = *array_info;
    element_offset = (array_info[1] - array_end) / 0x28;
    if (element_offset == 0x666666666666666) {
        // 错误处理：数组大小无效
        handle_array_error(array_info[1] - array_end, 0x666666666666666, array_end, 0x666666666666666, 0xfffffffffffffffe);
        error_handler = (code *)swi(3);
        (*error_handler)();
        return;
    }
    new_capacity = element_offset + 1;
    current_capacity = (array_info[2] - array_end) / 0x28;
    calc_capacity = new_capacity;
    if ((current_capacity <= 0x666666666666666 - (current_capacity >> 1)) &&
        (calc_capacity = current_capacity + (current_capacity >> 1), calc_capacity < new_capacity)) {
        calc_capacity = new_capacity;
    }
    element_offset = calc_capacity * 0x28;
    if (0x666666666666666 < calc_capacity) {
        element_offset = -1;
    }
    element_offset = allocate_memory(element_offset);
    new_array = (undefined8 *)(element_offset + ((insert_pos - array_end) / 0x28) * 0x28);
    element_field_4 = element_data[1];
    *new_array = *element_data;
    new_array[1] = element_field_4;
    element_field_0x14 = *(undefined4 *)((longlong)element_data + 0x14);
    element_field_0x18 = *(undefined4 *)(element_data + 3);
    element_field_0x1c = *(undefined4 *)((longlong)element_data + 0x1c);
    *(undefined4 *)(new_array + 2) = *(undefined4 *)(element_data + 2);
    *(undefined4 *)((longlong)new_array + 0x14) = element_field_0x14;
    *(undefined4 *)(new_array + 3) = element_field_0x18;
    *(undefined4 *)((longlong)new_array + 0x1c) = element_field_0x1c;
    new_array[4] = element_data[4];
    array_end = array_info[1];
    element_offset = element_offset;
    copy_array_data(temp_stack, *array_info);
    if (insert_pos != array_end) {
        // 移动现有元素为新元素腾出空间
        memmove(element_offset);
    }
    // 执行内存移动操作
    memmove(element_offset);
}



// 函数：向4字节元素数组中插入元素
undefined4 * array_insert_4byte_elements(longlong *array_info, longlong insert_pos, undefined4 *element_data)
{
  ulonglong new_element_count;
  undefined4 *new_array;
  code *error_handler;
  undefined4 *result_ptr;
  undefined4 element_field_1;
  undefined4 element_field_2;
  undefined4 element_field_3;
  undefined4 *element_ptr;
  undefined4 *temp_ptr;
  longlong array_start;
  longlong array_end;
  undefined8 temp_var;
  ulonglong current_count;
  ulonglong new_capacity;
  longlong element_offset;
  
  array_end = *array_info;
  element_offset = (array_info[1] - array_end) / 0x28;
  if (element_offset == 0x666666666666666) {
    // 错误处理：数组大小无效
    handle_array_size_error();
    error_handler = (code *)swi(3);
    result_ptr = (undefined4 *)(*error_handler)();
    return result_ptr;
  }
  new_element_count = element_offset + 1;
  current_count = (array_info[2] - array_end) / 0x28;
  new_capacity = new_element_count;
  if ((current_count <= 0x666666666666666 - (current_count >> 1)) &&
     (new_capacity = current_count + (current_count >> 1), new_capacity < new_element_count)) {
    new_capacity = new_element_count;
  }
  element_offset = new_capacity * 0x28;
  if (0x666666666666666 < new_capacity) {
    element_offset = -1;
  }
  new_array = (undefined4 *)allocate_memory(element_offset);
  result_ptr = new_array + ((insert_pos - array_end) / 0x28) * 10;
  *(undefined8 *)(result_ptr + 4) = 0;
  *(undefined8 *)(result_ptr + 6) = 0;
  element_field_1 = element_data[1];
  element_field_2 = element_data[2];
  element_field_3 = element_data[3];
  *result_ptr = *element_data;
  result_ptr[1] = element_field_1;
  result_ptr[2] = element_field_2;
  result_ptr[3] = element_field_3;
  element_field_1 = element_data[5];
  element_field_2 = element_data[6];
  element_field_3 = element_data[7];
  result_ptr[4] = element_data[4];
  result_ptr[5] = element_field_1;
  result_ptr[6] = element_field_2;
  result_ptr[7] = element_field_3;
  *(undefined8 *)(element_data + 4) = 0;
  *(undefined8 *)(element_data + 6) = 0xf;
  *(undefined1 *)element_data = 0;
  *(undefined1 *)(result_ptr + 8) = *(undefined1 *)(element_data + 8);
  array_end = array_info[1];
  element_offset = (longlong)new_array;
  temp_ptr = new_array;
  element_ptr = result_ptr;
  if (insert_pos != array_end) {
    copy_array_segment_with_4byte_elements(*array_info, insert_pos, new_array, array_info, result_ptr, 0xfffffffffffffffe, result_ptr);
    temp_ptr = result_ptr + 10;
    array_end = array_info[1];
    element_offset = insert_pos;
    element_ptr = new_array;
  }
  copy_array_segment_with_4byte_elements(element_offset, array_end, temp_ptr, array_info, element_ptr, 0xfffffffffffffffe, result_ptr);
  element_offset = *array_info;
  if (element_offset != 0) {
    array_end = array_info[1];
    if (element_offset != array_end) {
      do {
        free_memory(element_offset);
        element_offset = element_offset + 0x28;
      } while (element_offset != array_end);
      element_offset = *array_info;
    }
    current_count = ((array_info[2] - element_offset) / 0x28) * 0x28;
    array_end = element_offset;
    if (0xfff < current_count) {
      array_end = *(longlong *)(element_offset + -8);
      if (0x1f < (element_offset - array_end) - 8U) {
        // WARNING: Subroutine does not return
        invalid_parameter_no_info_no_return(array_info[2] - element_offset, current_count + 0x27);
      }
    }
    free(array_end);
  }
  *array_info = (longlong)new_array;
  array_info[1] = (longlong)(new_array + new_element_count * 10);
  array_info[2] = (longlong)(new_array + new_capacity * 10);
  return result_ptr;
}



// 函数：向数组中插入结构体元素
longlong array_insert_struct_element(longlong *array_info, longlong insert_pos, longlong element_data)
{
  ulonglong new_element_count;
  code *error_handler;
  longlong array_start;
  longlong array_end;
  longlong new_array_start;
  longlong insert_position;
  ulonglong current_count;
  ulonglong new_capacity;
  longlong element_offset;
  undefined8 temp_var;
  longlong new_array;
  longlong result_ptr;
  
  temp_var = 0xfffffffffffffffe;
  array_start = *array_info;
  array_end = (array_info[1] - array_start) / 0x28;
  if (array_end == 0x666666666666666) {
    handle_array_size_error();
    error_handler = (code *)swi(3);
    array_start = (*error_handler)();
    return array_start;
  }
  new_element_count = array_end + 1;
  current_count = (array_info[2] - array_start) / 0x28;
  new_capacity = new_element_count;
  if ((current_count <= 0x666666666666666 - (current_count >> 1)) && 
     (new_capacity = current_count + (current_count >> 1), new_capacity < new_element_count)) {
    new_capacity = new_element_count;
  }
  array_end = new_capacity * 0x28;
  if (0x666666666666666 < new_capacity) {
    array_end = -1;
  }
  new_array = allocate_memory(array_end);
  result_ptr = new_array + ((insert_pos - array_start) / 0x28) * 0x28;
  new_array_start = new_array;
  insert_position = result_ptr;
  copy_struct_data(result_ptr, element_data);
  *(undefined4 *)(result_ptr + 0x20) = *(undefined4 *)(element_data + 0x20);
  *(undefined4 *)(result_ptr + 0x24) = *(undefined4 *)(element_data + 0x24);
  array_end = array_info[1];
  array_start = *array_info;
  new_array = new_array_start;
  result_ptr = insert_position;
  if (insert_pos != array_end) {
    copy_array_segment_with_structs(array_info, array_start, insert_pos, new_array_start, result_ptr, new_array, temp_var, insert_position);
    array_end = array_info[1];
    array_start = insert_pos;
    new_array = result_ptr + 0x28;
    result_ptr = new_array_start;
  }
  copy_array_segment_with_structs(array_start, array_end, new_array, array_info, result_ptr, new_array, temp_var, insert_position);
  array_start = *array_info;
  if (array_start != 0) {
    array_end = array_info[1];
    if (array_start != array_end) {
      do {
        free_memory(array_start);
        array_start = array_start + 0x28;
      } while (array_start != array_end);
      array_start = *array_info;
    }
    current_count = ((array_info[2] - array_start) / 0x28) * 0x28;
    array_end = array_start;
    if (0xfff < current_count) {
      array_end = *(longlong *)(array_start + -8);
      if (0x1f < (array_start - array_end) - 8U) {
        // WARNING: Subroutine does not return
        invalid_parameter_no_info_no_return(array_info[2] - array_start, current_count + 0x27);
      }
    }
    free(array_end);
  }
  *array_info = new_array_start;
  array_info[1] = new_array_start + new_element_count * 0x28;
  array_info[2] = new_capacity * 0x28 + new_array_start;
  return result_ptr;
}





// 函数：复制结构体数据
void copy_struct_data(undefined8 dest_ptr, longlong src_ptr, longlong param_3, undefined8 param_4)
{
  copy_memory_block(dest_ptr, src_ptr, src_ptr, param_4, 0xfffffffffffffffe);
  *(undefined1 *)(dest_ptr + 0x20) = *(undefined1 *)(src_ptr + 0x20);
  *(undefined4 *)(dest_ptr + 0x24) = *(undefined4 *)(src_ptr + 0x24);
  *(undefined4 *)(dest_ptr + 0x28) = *(undefined4 *)(src_ptr + 0x28);
  copy_linked_list_data(dest_ptr + 0x30, src_ptr + 0x30);
  return;
}



// 函数：向64字节对齐数组中插入元素
longlong array_insert_64byte_aligned(longlong *array_info, longlong insert_pos, longlong element_data)
{
  ulonglong new_element_count;
  code *error_handler;
  longlong array_start;
  longlong current_count;
  ulonglong new_capacity;
  longlong new_array;
  ulonglong offset;
  longlong dest_ptr;
  longlong src_ptr;
  longlong temp_ptr;
  longlong old_ptr;
  ulonglong aligned_size;
  
  array_start = *array_info;
  current_count = array_info[1] - array_start >> 6;
  if (current_count == 0x3ffffffffffffff) {
    handle_array_size_error();
    error_handler = (code *)swi(3);
    array_start = (*error_handler)();
    return array_start;
  }
  new_element_count = current_count + 1;
  current_count = array_info[2] - array_start >> 6;
  new_capacity = new_element_count;
  if ((current_count <= 0x3ffffffffffffff - (current_count >> 1)) && 
     (new_capacity = (current_count >> 1) + current_count, new_capacity < new_element_count)) {
    new_capacity = new_element_count;
  }
  current_count = new_capacity << 6;
  if (0x3ffffffffffffff < new_capacity) {
    current_count = -1;
  }
  new_array = allocate_memory(current_count);
  offset = insert_pos - array_start & 0xffffffffffffffc0;
  dest_ptr = offset + new_array;
  copy_memory_block(dest_ptr, element_data);
  *(undefined1 *)(dest_ptr + 0x20) = *(undefined1 *)(element_data + 0x20);
  *(undefined4 *)(dest_ptr + 0x24) = *(undefined4 *)(element_data + 0x24);
  *(undefined4 *)(dest_ptr + 0x28) = *(undefined4 *)(element_data + 0x28);
  copy_linked_list_data(dest_ptr + 0x30, element_data + 0x30);
  array_start = array_info[1];
  if (insert_pos == array_start) {
    temp_ptr = new_array;
    for (src_ptr = *array_info; old_ptr = temp_ptr, src_ptr != array_start; src_ptr = src_ptr + 0x40) {
      copy_memory_block(temp_ptr, src_ptr);
      *(undefined1 *)(temp_ptr + 0x20) = *(undefined1 *)(src_ptr + 0x20);
      *(undefined4 *)(temp_ptr + 0x24) = *(undefined4 *)(src_ptr + 0x24);
      *(undefined4 *)(temp_ptr + 0x28) = *(undefined4 *)(src_ptr + 0x28);
      copy_linked_list_data(temp_ptr + 0x30, src_ptr + 0x30);
      temp_ptr = temp_ptr + 0x40;
    }
    for (; old_ptr != temp_ptr; old_ptr = old_ptr + 0x40) {
      cleanup_memory_block(old_ptr);
    }
  }
  else {
    copy_array_segment_64bit(array_info, *array_info, insert_pos, new_array, dest_ptr);
    copy_array_segment_64bit(array_info, insert_pos, array_info[1], dest_ptr + 0x40, new_array);
  }
  array_start = *array_info;
  if (array_start != 0) {
    dest_ptr = array_info[1];
    if (array_start != dest_ptr) {
      do {
        cleanup_memory_block(array_start);
        array_start = array_start + 0x40;
      } while (array_start != dest_ptr);
      array_start = *array_info;
    }
    aligned_size = array_info[2] - array_start & 0xffffffffffffffc0;
    dest_ptr = array_start;
    if (0xfff < aligned_size) {
      dest_ptr = *(longlong *)(array_start + -8);
      if (0x1f < (array_start - dest_ptr) - 8U) {
        // WARNING: Subroutine does not return
        invalid_parameter_no_info_no_return(dest_ptr, aligned_size + 0x27);
      }
    }
    free(dest_ptr);
  }
  *array_info = new_array;
  array_info[1] = new_element_count * 0x40 + new_array;
  array_info[2] = new_capacity * 0x40 + new_array;
  return offset + new_array;
}





// 函数：调整8字节数组大小
void resize_8byte_array(longlong *array_info, ulonglong new_size, undefined8 param_3, undefined8 param_4)
{
  code *error_handler;
  ulonglong current_size;
  longlong array_end;
  longlong array_start;
  undefined8 *new_array;
  ulonglong capacity;
  ulonglong new_capacity;
  undefined8 temp_stack[2];
  undefined8 temp_var;
  
  temp_var = 0xfffffffffffffffe;
  array_end = array_info[1];
  array_start = *array_info;
  current_size = array_end - array_start >> 3;
  capacity = array_info[2] - array_start >> 3;
  temp_stack[0] = param_3;
  if (current_size < new_size) {
    if (0x1fffffffffffffff < new_size) {
      handle_array_size_error();
      error_handler = (code *)swi(3);
      (*error_handler)();
      return;
    }
    new_capacity = new_size;
    if ((capacity <= 0x1fffffffffffffff - (capacity >> 1)) &&
       (new_capacity = (capacity >> 1) + capacity, new_capacity < new_size)) {
      new_capacity = new_size;
    }
    array_end = new_capacity * 8;
    if (0x1fffffffffffffff < new_capacity) {
      array_end = -1;
    }
    array_end = allocate_memory(array_end);
    new_array = (undefined8 *)(array_end + current_size * 8);
    for (array_start = new_size - current_size; array_start != 0; array_start = array_start + -1) {
      *new_array = 0;
      new_array = new_array + 1;
    }
    copy_array_data_with_callback(temp_stack, *array_info, array_info[1], param_4, 0, temp_var);
    // WARNING: Subroutine does not return
    memmove(array_end);
  }
  if (current_size < new_size) {
    if (new_size - current_size == 0) {
      array_info[1] = array_end;
      return;
    }
    // WARNING: Subroutine does not return
    memset(array_end, 0, (new_size - current_size) * 8);
  }
  if (new_size != current_size) {
    array_info[1] = array_start + new_size * 8;
  }
  return;
}





// 函数：复制4字节数据块
void copy_4byte_data_block(longlong *array_info, longlong src_ptr, longlong dest_ptr, undefined1 param_4)
{
  code *error_handler;
  ulonglong current_size;
  longlong array_start;
  ulonglong capacity;
  ulonglong required_size;
  longlong memory_ptr;
  undefined1 temp_stack[8];
  
  array_start = *array_info;
  dest_ptr = dest_ptr - src_ptr;
  current_size = array_info[1] - array_start >> 2;
  required_size = dest_ptr >> 2;
  capacity = array_info[2] - array_start >> 2;
  temp_stack[0] = param_4;
  if (required_size <= capacity) {
    if (required_size <= current_size) {
      // WARNING: Subroutine does not return
      memmove(array_start, src_ptr, dest_ptr);
    }
    // WARNING: Subroutine does not return
    memmove(array_start, src_ptr, current_size * 4);
  }
  if (0x3fffffffffffffff < required_size) {
LAB_180189786:
    handle_array_size_error();
    error_handler = (code *)swi(3);
    (*error_handler)();
    return;
  }
  current_size = required_size;
  if ((capacity <= 0x3fffffffffffffff - (capacity >> 1)) && 
     (current_size = (capacity >> 1) + capacity, current_size < required_size)) {
    current_size = required_size;
  }
  if (array_start != 0) {
    memory_ptr = array_start;
    if (0xfff < capacity * 4) {
      memory_ptr = *(longlong *)(array_start + -8);
      if (0x1f < (array_start - memory_ptr) - 8U) {
        // WARNING: Subroutine does not return
        invalid_parameter_no_info_no_return(memory_ptr, capacity * 4 + 0x27);
      }
    }
    free(memory_ptr);
  }
  array_start = 0;
  *array_info = 0;
  array_info[1] = 0;
  array_info[2] = 0;
  if (current_size != 0) {
    if (0x3fffffffffffffff < current_size) goto LAB_180189786;
    array_start = allocate_memory(current_size * 4);
    *array_info = array_start;
    array_info[1] = array_start;
    array_info[2] = current_size * 4 + array_start;
  }
  copy_array_data_with_callback(temp_stack);
  // WARNING: Subroutine does not return
  memmove(array_start, src_ptr, dest_ptr);
}





// 函数：释放数组内存块
void free_array_memory_blocks(longlong *array_start, longlong *array_end)
{
  longlong array_ptr;
  longlong memory_ptr;
  ulonglong block_size;
  
  if (array_start != array_end) {
    do {
      array_ptr = *array_start;
      if (array_ptr != 0) {
        block_size = array_start[2] - array_ptr & 0xfffffffffffffff0;
        memory_ptr = array_ptr;
        if (0xfff < block_size) {
          memory_ptr = *(longlong *)(array_ptr + -8);
          if (0x1f < (array_ptr - memory_ptr) - 8U) {
            // WARNING: Subroutine does not return
            invalid_parameter_no_info_no_return(array_ptr - memory_ptr, block_size + 0x27);
          }
        }
        free(memory_ptr);
        *array_start = 0;
        array_start[1] = 0;
        array_start[2] = 0;
      }
      array_start = array_start + 3;
    } while (array_start != array_end);
  }
  return;
}





// 函数：释放连续数组内存块
void free_consecutive_array_blocks(longlong *array_start, longlong *array_end)
{
  longlong array_ptr;
  longlong memory_ptr;
  ulonglong block_size;
  
  do {
    array_ptr = *array_start;
    if (array_ptr != 0) {
      block_size = array_start[2] - array_ptr & 0xfffffffffffffff0;
      memory_ptr = array_ptr;
      if (0xfff < block_size) {
        memory_ptr = *(longlong *)(array_ptr + -8);
        if (0x1f < (array_ptr - memory_ptr) - 8U) {
          // WARNING: Subroutine does not return
          invalid_parameter_no_info_no_return(array_ptr - memory_ptr, block_size + 0x27);
        }
      }
      free(memory_ptr);
      *array_start = 0;
      array_start[1] = 0;
      array_start[2] = 0;
    }
    array_start = array_start + 3;
  } while (array_start != array_end);
  return;
}





// 函数：空函数
void empty_function(void)
{
  return;
}





// 函数：无效参数错误处理
void invalid_parameter_error(void)
{
  // WARNING: Subroutine does not return
  invalid_parameter_no_info_no_return();
}





// 函数：长度错误处理
void handle_length_error(void)
{
  code *error_handler;
  
  std_length_error(&error_message_string);
  error_handler = (code *)swi(3);
  (*error_handler)();
  return;
}



// 函数：复制数组段（4字节元素）
undefined4 * copy_array_segment_4byte(undefined8 param_1, undefined8 *src_start, undefined8 *src_end, undefined4 *dest_ptr)
{
  undefined8 *temp_ptr;
  undefined4 field_1;
  undefined4 field_2;
  undefined4 field_3;
  undefined8 temp_value;
  undefined8 *src_ptr;
  
  if (src_start != src_end) {
    src_ptr = src_start + 7;
    do {
      *(undefined8 *)(dest_ptr + 4) = 0;
      *(undefined8 *)(dest_ptr + 6) = 0;
      field_1 = *(undefined4 *)((longlong)src_ptr + -0x34);
      field_2 = *(undefined4 *)(src_ptr + -6);
      field_3 = *(undefined4 *)((longlong)src_ptr + -0x2c);
      *dest_ptr = *(undefined4 *)(src_ptr + -7);
      dest_ptr[1] = field_1;
      dest_ptr[2] = field_2;
      dest_ptr[3] = field_3;
      field_1 = *(undefined4 *)((longlong)src_ptr + -0x24);
      field_2 = *(undefined4 *)(src_ptr + -4);
      field_3 = *(undefined4 *)((longlong)src_ptr + -0x1c);
      dest_ptr[4] = *(undefined4 *)(src_ptr + -5);
      dest_ptr[5] = field_1;
      dest_ptr[6] = field_2;
      dest_ptr[7] = field_3;
      src_ptr[-5] = 0;
      src_ptr[-4] = 0xf;
      *(undefined1 *)(src_ptr + -7) = 0;
      *(undefined1 *)(dest_ptr + 8) = *(undefined1 *)(src_ptr + -3);
      dest_ptr[9] = *(undefined4 *)((longlong)src_ptr + -0x14);
      dest_ptr[10] = *(undefined4 *)(src_ptr + -2);
      temp_ptr = (undefined8 *)(dest_ptr + 0xc);
      *temp_ptr = 0;
      *(undefined8 *)(dest_ptr + 0xe) = 0;
      temp_value = get_next_available_id();
      *temp_ptr = temp_value;
      temp_value = *temp_ptr;
      *temp_ptr = src_ptr[-1];
      src_ptr[-1] = temp_value;
      temp_value = *(undefined8 *)(dest_ptr + 0xe);
      *(undefined8 *)(dest_ptr + 0xe) = *src_ptr;
      *src_ptr = temp_value;
      dest_ptr = dest_ptr + 0x10;
      temp_ptr = src_ptr + 1;
      src_ptr = src_ptr + 8;
    } while (temp_ptr != src_end);
  }
  return dest_ptr;
}



// 函数：移动8字节数组段
undefined8 * move_8byte_array_segment(undefined8 *src_start, undefined8 *src_end, undefined8 *dest_ptr, undefined8 param_4)
{
  undefined8 *temp_ptr;
  undefined8 *src_ptr;
  undefined8 return_value;
  
  return_value = param_4;
  if (src_start != src_end) {
    return_value = 0;
    src_ptr = src_start + 2;
    do {
      *dest_ptr = 0;
      dest_ptr[1] = 0;
      dest_ptr[2] = 0;
      *dest_ptr = src_ptr[-2];
      dest_ptr[1] = src_ptr[-1];
      dest_ptr[2] = *src_ptr;
      src_ptr[-2] = 0;
      src_ptr[-1] = 0;
      *src_ptr = 0;
      dest_ptr = dest_ptr + 3;
      temp_ptr = src_ptr + 1;
      src_ptr = src_ptr + 3;
    } while (temp_ptr != src_end);
  }
  free_array_memory_blocks(dest_ptr, dest_ptr, src_end, return_value, 0xfffffffffffffffe, dest_ptr, dest_ptr, param_4);
  return dest_ptr;
}



// 函数：复制5字节数组段
undefined8 * copy_5byte_array_segment(undefined8 *src_start, undefined8 *src_end, undefined8 *dest_ptr)
{
  undefined8 temp_value;
  
  if (src_start != src_end) {
    do {
      dest_ptr[2] = 0;
      dest_ptr[3] = 0;
      temp_value = src_start[1];
      *dest_ptr = *src_start;
      dest_ptr[1] = temp_value;
      temp_value = src_start[3];
      dest_ptr[2] = src_start[2];
      dest_ptr[3] = temp_value;
      src_start[2] = 0;
      src_start[3] = 0xf;
      *(undefined1 *)src_start = 0;
      *(undefined1 *)(dest_ptr + 4) = *(undefined1 *)(src_start + 4);
      dest_ptr = dest_ptr + 5;
      src_start = src_start + 5;
    } while (src_start != src_end);
  }
  return dest_ptr;
}



// 函数：复制结构体数组段
undefined8 * copy_struct_array_segment(undefined8 *src_start, undefined8 *src_end, undefined8 *dest_ptr)
{
  undefined8 *temp_ptr;
  undefined8 temp_value;
  undefined8 *src_ptr;
  
  if (src_start != src_end) {
    src_ptr = src_start + 3;
    do {
      dest_ptr[2] = 0;
      dest_ptr[3] = 0;
      temp_value = src_ptr[-2];
      *dest_ptr = src_ptr[-3];
      dest_ptr[1] = temp_value;
      temp_value = *src_ptr;
      dest_ptr[2] = src_ptr[-1];
      dest_ptr[3] = temp_value;
      src_ptr[-1] = 0;
      *src_ptr = 0xf;
      *(undefined1 *)(src_ptr + -3) = 0;
      *(undefined4 *)(dest_ptr + 4) = *(undefined4 *)(src_ptr + 1);
      *(undefined4 *)((longlong)dest_ptr + 0x24) = *(undefined4 *)((longlong)src_ptr + 0xc);
      dest_ptr = dest_ptr + 5;
      temp_ptr = src_ptr + 2;
      src_ptr = src_ptr + 5;
    } while (temp_ptr != src_end);
  }
  return dest_ptr;
}



// 函数：复制链表数据
longlong * copy_linked_list_data(longlong *dest_ptr, longlong *src_ptr)
{
  longlong *dest_node;
  longlong *src_node;
  longlong node_id;
  longlong *temp_node;
  longlong current_node;
  undefined8 temp_value;
  
  temp_value = 0xfffffffffffffffe;
  *dest_ptr = 0;
  dest_ptr[1] = 0;
  node_id = get_next_available_id();
  *dest_ptr = node_id;
  temp_value = process_linked_list_node(dest_ptr, *(undefined8 *)(*src_ptr + 8), *dest_ptr, (ulonglong)dest_ptr & 0xff, temp_value);
  *(undefined8 *)(*dest_ptr + 8) = temp_value;
  dest_ptr[1] = src_ptr[1];
  dest_node = (longlong *)*dest_ptr;
  src_node = (longlong *)dest_node[1];
  if (*(char *)(dest_node[1] + 0x19) == '\0') {
    do {
      temp_node = src_node;
      src_node = (longlong *)*temp_node;
    } while (*(char *)((longlong)src_node + 0x19) == '\0');
    *dest_node = (longlong)temp_node;
    node_id = *(longlong *)(*dest_ptr + 8);
    do {
      current_node = node_id;
      node_id = *(longlong *)(current_node + 0x10);
    } while (*(char *)(node_id + 0x19) == '\0');
    *(longlong *)(*dest_ptr + 0x10) = current_node;
  }
  else {
    *dest_node = (longlong)dest_node;
    *(longlong *)(*dest_ptr + 0x10) = *dest_ptr;
  }
  return dest_ptr;
}





// 函数：条件释放16字节内存
void conditional_free_16bytes(undefined8 memory_ptr, char should_free, undefined8 param_3, undefined8 param_4)
{
  if (should_free != '\0') {
    free(memory_ptr, 0x10, param_3, param_4, 0xfffffffffffffffe);
  }
  return;
}





// 函数：条件释放24字节内存
void conditional_free_24bytes(undefined8 memory_ptr, char should_free, undefined8 param_3, undefined8 param_4)
{
  if (should_free != '\0') {
    free(memory_ptr, 0x18, param_3, param_4, 0xfffffffffffffffe);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数：处理错误信息类型1
void process_error_message_type1(undefined8 param_1, undefined4 *error_code, undefined8 param_3, undefined8 param_4)
{
  undefined8 stack_var_1;
  undefined8 stack_var_2;
  
  stack_var_1 = get_error_message_data(*error_code);
  stack_var_2 = param_4;
  log_error_message(error_log_handle, 0, 0xffffffff00000000, 0xd, &error_message_format_1, &stack_var_1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数：处理错误信息类型2
void process_error_message_type2(undefined8 param_1, undefined4 *error_code, undefined8 param_3, undefined8 param_4)
{
  undefined8 stack_var_1;
  undefined8 stack_var_2;
  
  stack_var_1 = get_error_message_data(*error_code);
  stack_var_2 = param_4;
  log_error_message(error_log_handle, 0, 0xffffffff00000000, 0xd, &error_message_format_2, &stack_var_1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数：处理错误信息类型3
void process_error_message_type3(undefined8 param_1, undefined4 *error_code, undefined8 param_3, undefined8 param_4)
{
  undefined8 stack_var_1;
  undefined8 stack_var_2;
  
  stack_var_1 = get_error_message_data(*error_code);
  stack_var_2 = param_4;
  log_error_message(error_log_handle, 0, 0xffffffff00000000, 0xd, &error_message_format_3, &stack_var_1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数：处理错误信息类型4
void process_error_message_type4(undefined8 param_1, undefined4 *error_code, undefined8 param_3, undefined8 param_4)
{
  undefined8 stack_var_1;
  undefined8 stack_var_2;
  
  stack_var_1 = get_error_message_data(*error_code);
  stack_var_2 = param_4;
  log_error_message(error_log_handle, 0, 0xffffffff00000000, 0xd, &error_message_format_4, &stack_var_1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数：处理错误信息类型5
void process_error_message_type5(undefined8 param_1, undefined4 *error_code, undefined8 param_3, undefined8 param_4)
{
  undefined8 stack_var_1;
  undefined8 stack_var_2;
  
  stack_var_1 = get_error_message_data(*error_code);
  stack_var_2 = param_4;
  log_error_message(error_log_handle, 0, 0xffffffff00000000, 0xd, &error_message_format_5, &stack_var_1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数：处理错误信息类型6
void process_error_message_type6(undefined8 param_1, undefined4 *error_code, undefined8 param_3, undefined8 param_4)
{
  undefined8 stack_var_1;
  undefined8 stack_var_2;
  
  stack_var_1 = get_error_message_data(*error_code);
  stack_var_2 = param_4;
  log_error_message(error_log_handle, 0, 0xffffffff00000000, 0xd, &error_message_format_6, &stack_var_1);
  return;
}





// 函数：清理64字节内存块
void cleanup_64byte_memory_blocks(longlong *array_info)
{
  longlong array_end;
  longlong current_ptr;
  
  array_end = array_info[1];
  for (current_ptr = *array_info; current_ptr != array_end; current_ptr = current_ptr + 0x40) {
    cleanup_memory_block(current_ptr);
  }
  return;
}





// 函数：清理40字节内存块
void cleanup_40byte_memory_blocks(longlong *array_info)
{
  longlong array_end;
  longlong current_ptr;
  
  array_end = array_info[1];
  for (current_ptr = *array_info; current_ptr != array_end; current_ptr = current_ptr + 0x28) {
    free_memory(current_ptr);
  }
  return;
}





// 函数：条件释放32字节内存
void conditional_free_32bytes(undefined8 memory_ptr, char should_free, undefined8 param_3, undefined8 param_4)
{
  if (should_free != '\0') {
    free(memory_ptr, 0x20, param_3, param_4, 0xfffffffffffffffe);
  }
  return;
}





