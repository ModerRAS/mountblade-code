#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 02_core_engine_part052.c - 核心引擎模块第52部分
// 包含20个函数，主要负责引擎内存管理、排序算法和数据处理

// 函数：处理引擎内存分配和数据重组
void process_engine_memory_allocation(void)

{
  int32_t *temp_ptr1;
  int32_t *temp_ptr2;
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int64_t base_ptr;
  int64_t length_counter;
  uint64_t *src_ptr;
  uint64_t *dest_ptr;
  uint64_t *current_ptr;
  int64_t offset;
  uint64_t *target_ptr;
  int32_t *data_ptr;
  uint64_t *context_ptr;
  int64_t *buffer_ptr;
  int32_t *write_ptr;
  int32_t *read_ptr;
  uint64_t new_size;
  int64_t context_value;
  int64_t *iter_ptr1;
  int64_t *iter_ptr2;
  int32_t *temp_ptr3;
  int32_t *temp_ptr4;
  int64_t stack_param1;
  int64_t stack_param2;
  
  temp_ptr1 = (int32_t *)0x0;
  temp_ptr2 = temp_ptr1;
  if (base_ptr != context_value) {
    do {
      base_ptr = traverse_linked_list(base_ptr);
      temp_ptr2 = (int32_t *)((int64_t)temp_ptr2 + 1);
    } while (base_ptr != context_value);
  }
  data_ptr = (int32_t *)buffer_ptr[1];
  if ((int32_t *)(buffer_ptr[2] - (int64_t)data_ptr >> 4) < temp_ptr2) {
    dest_ptr = (uint64_t *)*buffer_ptr;
    offset = (int64_t)data_ptr - (int64_t)dest_ptr >> 4;
    new_size = offset * 2;
    if (offset == 0) {
      new_size = 1;
    }
    if (new_size <= (uint64_t)((int64_t)temp_ptr2 + offset)) {
      new_size = (int64_t)temp_ptr2 + offset;
    }
    temp_ptr2 = temp_ptr1;
    if (new_size != 0) {
      temp_ptr1 = (int32_t *)allocate_memory(system_memory_pool_ptr,new_size << 4,(char)buffer_ptr[3]);
      dest_ptr = (uint64_t *)*buffer_ptr;
      temp_ptr2 = temp_ptr1;
    }
    for (; dest_ptr != context_ptr; dest_ptr = dest_ptr + 2) {
      uVar1 = *(int32_t *)((int64_t)dest_ptr + 4);
      uVar2 = *(int32_t *)(dest_ptr + 1);
      uVar3 = *(int32_t *)((int64_t)dest_ptr + 0xc);
      *temp_ptr1 = *(int32_t *)dest_ptr;
      temp_ptr1[1] = uVar1;
      temp_ptr1[2] = uVar2;
      temp_ptr1[3] = uVar3;
      temp_ptr1 = temp_ptr1 + 4;
    }
    stack_param1 = *iter_ptr2;
    stack_param2 = *iter_ptr1;
    temp_ptr1 = (int32_t *)merge_data_arrays(&stack0x00000070,&stack0x00000068);
    dest_ptr = (uint64_t *)buffer_ptr[1];
    if (context_ptr != dest_ptr) {
      do {
        uVar1 = *(int32_t *)context_ptr;
        uVar2 = *(int32_t *)((int64_t)context_ptr + 4);
        uVar3 = *(int32_t *)(context_ptr + 1);
        uVar4 = *(int32_t *)((int64_t)context_ptr + 0xc);
        context_ptr = context_ptr + 2;
        *temp_ptr1 = uVar1;
        temp_ptr1[1] = uVar2;
        temp_ptr1[2] = uVar3;
        temp_ptr1[3] = uVar4;
        temp_ptr1 = temp_ptr1 + 4;
      } while (context_ptr != dest_ptr);
    }
    if (*buffer_ptr != 0) {
                    // WARNING: Subroutine does not return
      trigger_critical_error();
    }
    *buffer_ptr = (int64_t)temp_ptr2;
    buffer_ptr[2] = (int64_t)(temp_ptr2 + new_size * 4);
    buffer_ptr[1] = (int64_t)temp_ptr1;
  }
  else {
    temp_ptr1 = (int32_t *)((int64_t)data_ptr - (int64_t)context_ptr >> 4);
    if (temp_ptr2 < temp_ptr1) {
      read_ptr = data_ptr + (int64_t)temp_ptr2 * -4;
      temp_ptr1 = data_ptr;
      if (read_ptr != data_ptr) {
        do {
          uVar1 = *read_ptr;
          uVar2 = read_ptr[1];
          uVar3 = read_ptr[2];
          uVar4 = read_ptr[3];
          read_ptr = read_ptr + 4;
          *temp_ptr1 = uVar1;
          temp_ptr1[1] = uVar2;
          temp_ptr1[2] = uVar3;
          temp_ptr1[3] = uVar4;
          temp_ptr1 = temp_ptr1 + 4;
        } while (read_ptr != data_ptr);
        data_ptr = (int32_t *)buffer_ptr[1];
      }
      temp_ptr1 = data_ptr + (int64_t)temp_ptr2 * -4;
      for (offset = (int64_t)(data_ptr + (int64_t)temp_ptr2 * -4) - (int64_t)context_ptr >> 4;
          0 < offset; offset = offset + -1) {
        data_ptr = temp_ptr1 + -4;
        *(uint64_t *)(data_ptr + (int64_t)temp_ptr2 * 4) = *(uint64_t *)(temp_ptr1 + -4);
        data_ptr[(int64_t)temp_ptr2 * 4 + 2] = temp_ptr1[-2];
        temp_ptr1 = data_ptr;
      }
      offset = *iter_ptr2;
      length_counter = *iter_ptr1;
      if (length_counter != offset) {
        do {
          *context_ptr = *(uint64_t *)(length_counter + 0x20);
          *(int32_t *)(context_ptr + 1) = *(int32_t *)(length_counter + 0x28);
          length_counter = traverse_linked_list(length_counter);
          context_ptr = context_ptr + 2;
        } while (length_counter != offset);
        buffer_ptr[1] = buffer_ptr[1] + (int64_t)temp_ptr2 * 0x10;
        return;
      }
    }
    else {
      offset = *iter_ptr1;
      read_ptr = temp_ptr1;
      if (temp_ptr1 != (int32_t *)0x0) {
        do {
          offset = traverse_linked_list(offset);
          read_ptr = (int32_t *)((int64_t)read_ptr + -1);
        } while (read_ptr != (int32_t *)0x0);
        data_ptr = (int32_t *)buffer_ptr[1];
      }
      stack_param1 = *iter_ptr2;
      stack_param2 = offset;
      merge_data_arrays(&stack0x00000070,&stack0x00000068,data_ptr);
      dest_ptr = (uint64_t *)buffer_ptr[1];
      target_ptr = dest_ptr + ((int64_t)temp_ptr2 - (int64_t)temp_ptr1) * 2;
      src_ptr = context_ptr;
      if (context_ptr != dest_ptr) {
        do {
          uVar1 = *(int32_t *)((int64_t)src_ptr + 4);
          uVar2 = *(int32_t *)(src_ptr + 1);
          uVar3 = *(int32_t *)((int64_t)src_ptr + 0xc);
          current_ptr = src_ptr + 2;
          *(int32_t *)target_ptr = *(int32_t *)src_ptr;
          *(int32_t *)((int64_t)target_ptr + 4) = uVar1;
          *(int32_t *)(target_ptr + 1) = uVar2;
          *(int32_t *)((int64_t)target_ptr + 0xc) = uVar3;
          src_ptr = current_ptr;
          target_ptr = target_ptr + 2;
        } while (current_ptr != dest_ptr);
      }
      length_counter = *iter_ptr1;
      dest_ptr = context_ptr + (int64_t)temp_ptr1 * 2;
      while (length_counter != offset) {
        offset = reverse_traverse_list(length_counter);
        dest_ptr[-2] = *(uint64_t *)(offset + 0x20);
        *(int32_t *)(dest_ptr + -1) = *(int32_t *)(offset + 0x28);
        dest_ptr = dest_ptr + -2;
      }
    }
    buffer_ptr[1] = buffer_ptr[1] + (int64_t)temp_ptr2 * 0x10;
  }
  return;
}



// 函数：空函数 - 占位符
void placeholder_function_1(void)

{
  return;
}



// 函数：插入排序算法 - 对指针数组进行排序
void insertion_sort_algorithm(int64_t *array_start,int64_t *array_end)

{
  byte bVar1;
  bool is_less;
  int64_t current_value;
  int64_t *compare_ptr;
  byte *str_ptr1;
  byte *str_ptr2;
  uint char_val1;
  int64_t *iter_ptr;
  int64_t *prev_ptr;
  int64_t str_length;
  int64_t *swap_ptr;
  int sort_key;
  
  if (array_start != array_end) {
    for (iter_ptr = array_start + 2; iter_ptr != array_end; iter_ptr = iter_ptr + 2) {
      current_value = *iter_ptr;
      sort_key = (int)iter_ptr[1];
      swap_ptr = iter_ptr;
      compare_ptr = iter_ptr;
      while (compare_ptr != array_start) {
        prev_ptr = compare_ptr + -2;
        if (sort_key == (int)compare_ptr[-1]) {
          if (*(int *)(*prev_ptr + 0x78) == 0) {
            is_less = false;
          }
          else if (*(int *)(current_value + 0x78) == 0) {
            is_less = true;
          }
          else {
            str_ptr1 = *(byte **)(*prev_ptr + 0x70);
            str_length = *(int64_t *)(current_value + 0x70) - (int64_t)str_ptr1;
            do {
              bVar1 = *str_ptr1;
              char_val1 = (uint)str_ptr1[str_length];
              if (bVar1 != char_val1) break;
              str_ptr1 = str_ptr1 + 1;
            } while (char_val1 != 0);
            is_less = 0 < (int)(bVar1 - char_val1);
          }
        }
        else {
          is_less = sort_key < (int)compare_ptr[-1];
        }
        if (!is_less) break;
        *swap_ptr = *prev_ptr;
        *(int *)(swap_ptr + 1) = (int)compare_ptr[-1];
        swap_ptr = swap_ptr + -2;
        compare_ptr = prev_ptr;
      }
      *swap_ptr = current_value;
      *(int *)(swap_ptr + 1) = sort_key;
    }
  }
  return;
}



// 函数：优化的插入排序算法
void optimized_insertion_sort(int64_t *array_start,int64_t *array_end)

{
  byte bVar1;
  bool is_less;
  int64_t current_value;
  int64_t *compare_ptr;
  byte *str_ptr1;
  byte *str_ptr2;
  uint char_val1;
  int64_t *iter_ptr;
  int64_t *prev_ptr;
  int64_t str_length;
  int64_t *swap_ptr;
  int sort_key;
  
  iter_ptr = array_start + 2;
  do {
    if (iter_ptr == array_end) {
      return;
    }
    current_value = *iter_ptr;
    sort_key = (int)iter_ptr[1];
    swap_ptr = iter_ptr;
    compare_ptr = iter_ptr;
    while (compare_ptr != array_start) {
      prev_ptr = compare_ptr + -2;
      if (sort_key == (int)compare_ptr[-1]) {
        if (*(int *)(*prev_ptr + 0x78) == 0) {
          is_less = false;
        }
        else if (*(int *)(current_value + 0x78) == 0) {
          is_less = true;
        }
        else {
          str_ptr1 = *(byte **)(*prev_ptr + 0x70);
          str_length = *(int64_t *)(current_value + 0x70) - (int64_t)str_ptr1;
          do {
            bVar1 = *str_ptr1;
            char_val1 = (uint)str_ptr1[str_length];
            if (bVar1 != char_val1) break;
            str_ptr1 = str_ptr1 + 1;
          } while (char_val1 != 0);
          is_less = 0 < (int)(bVar1 - char_val1);
        }
      }
      else {
        is_less = sort_key < (int)compare_ptr[-1];
      }
      if (!is_less) break;
      *swap_ptr = *prev_ptr;
      *(int *)(swap_ptr + 1) = (int)compare_ptr[-1];
      swap_ptr = swap_ptr + -2;
      compare_ptr = prev_ptr;
    }
    iter_ptr = iter_ptr + 2;
    *swap_ptr = current_value;
    *(int *)(swap_ptr + 1) = sort_key;
  } while( true );
}



// 函数：寄存器优化的插入排序
void register_optimized_insertion_sort(void)

{
  byte bVar1;
  bool is_less;
  int64_t current_value;
  int64_t *compare_ptr;
  byte *str_ptr1;
  byte *str_ptr2;
  uint char_val1;
  int64_t *array_start;
  int64_t *array_end;
  int64_t *current_ptr;
  int64_t str_length;
  int64_t *swap_ptr;
  int sort_key;
  
  do {
    current_value = *array_end;
    sort_key = (int)array_end[1];
    compare_ptr = array_end;
    swap_ptr = array_end;
    while (compare_ptr != array_start) {
      current_ptr = compare_ptr + -2;
      if (sort_key == (int)compare_ptr[-1]) {
        if (*(int *)(*current_ptr + 0x78) == 0) {
          is_less = false;
        }
        else if (*(int *)(current_value + 0x78) == 0) {
          is_less = true;
        }
        else {
          str_ptr1 = *(byte **)(*current_ptr + 0x70);
          str_length = *(int64_t *)(current_value + 0x70) - (int64_t)str_ptr1;
          do {
            bVar1 = *str_ptr1;
            char_val1 = (uint)str_ptr1[str_length];
            if (bVar1 != char_val1) break;
            str_ptr1 = str_ptr1 + 1;
          } while (char_val1 != 0);
          is_less = 0 < (int)(bVar1 - char_val1);
        }
      }
      else {
        is_less = sort_key < (int)compare_ptr[-1];
      }
      if (!is_less) break;
      *swap_ptr = *current_ptr;
      *(int *)(swap_ptr + 1) = (int)compare_ptr[-1];
      swap_ptr = swap_ptr + -2;
      compare_ptr = current_ptr;
    }
    array_end = array_end + 2;
    *swap_ptr = current_value;
    *(int *)(swap_ptr + 1) = sort_key;
    if (array_end == array_start) {
      return;
    }
  } while( true );
}



// 函数：空函数 - 占位符2
void placeholder_function_2(void)

{
  return;
}



// 函数：空函数 - 占位符3
void placeholder_function_3(void)

{
  return;
}



// 函数：字符串比较排序 - 对字符串指针数组进行排序
void string_comparison_sort(int64_t *array_start,int64_t *array_end)

{
  byte bVar1;
  int64_t current_value;
  int64_t compare_value;
  byte *str_ptr1;
  byte *str_ptr2;
  uint char_val1;
  int64_t *iter_ptr;
  int64_t str_length;
  int64_t *prev_ptr;
  int64_t *swap_ptr;
  
  if (array_start != array_end) {
    for (iter_ptr = array_start + 1; iter_ptr != array_end; iter_ptr = iter_ptr + 1) {
      current_value = *iter_ptr;
      prev_ptr = iter_ptr;
      swap_ptr = iter_ptr;
      while (prev_ptr != array_start) {
        compare_value = prev_ptr[-1];
        prev_ptr = prev_ptr + -1;
        if (*(int *)(compare_value + 0x78) == 0) break;
        if (*(int *)(current_value + 0x78) != 0) {
          str_ptr1 = *(byte **)(compare_value + 0x70);
          str_length = *(int64_t *)(current_value + 0x70) - (int64_t)str_ptr1;
          do {
            bVar1 = *str_ptr1;
            char_val1 = (uint)str_ptr1[str_length];
            if (bVar1 != char_val1) break;
            str_ptr1 = str_ptr1 + 1;
          } while (char_val1 != 0);
          if ((int)(bVar1 - char_val1) < 1) break;
        }
        *swap_ptr = compare_value;
        swap_ptr = swap_ptr + -1;
      }
      *swap_ptr = current_value;
    }
  }
  return;
}



// 函数：优化的字符串比较排序
void optimized_string_comparison_sort(int64_t *array_start,int64_t *array_end)

{
  byte bVar1;
  int64_t current_value;
  int64_t compare_value;
  byte *str_ptr1;
  byte *str_ptr2;
  uint char_val1;
  int64_t *iter_ptr;
  int64_t str_length;
  int64_t *prev_ptr;
  int64_t *swap_ptr;
  
  iter_ptr = array_start + 1;
  do {
    if (iter_ptr == array_end) {
      return;
    }
    current_value = *iter_ptr;
    prev_ptr = iter_ptr;
    swap_ptr = iter_ptr;
    while (prev_ptr != array_start) {
      compare_value = prev_ptr[-1];
      prev_ptr = prev_ptr + -1;
      if (*(int *)(compare_value + 0x78) == 0) break;
      if (*(int *)(current_value + 0x78) != 0) {
        str_ptr1 = *(byte **)(compare_value + 0x70);
        str_length = *(int64_t *)(current_value + 0x70) - (int64_t)str_ptr1;
        do {
          bVar1 = *str_ptr1;
          char_val1 = (uint)str_ptr1[str_length];
          if (bVar1 != char_val1) break;
          str_ptr1 = str_ptr1 + 1;
        } while (char_val1 != 0);
        if ((int)(bVar1 - char_val1) < 1) break;
      }
      *swap_ptr = compare_value;
      swap_ptr = swap_ptr + -1;
    }
    iter_ptr = iter_ptr + 1;
    *swap_ptr = current_value;
  } while( true );
}



// 函数：寄存器优化的字符串排序
void register_optimized_string_sort(void)

{
  byte bVar1;
  int64_t current_value;
  int64_t compare_value;
  byte *str_ptr1;
  byte *str_ptr2;
  uint char_val1;
  int64_t *array_start;
  int64_t *array_end;
  int64_t str_length;
  int64_t *prev_ptr;
  int64_t *swap_ptr;
  
  do {
    current_value = *array_end;
    prev_ptr = array_end;
    swap_ptr = array_end;
    while (prev_ptr != array_start) {
      compare_value = prev_ptr[-1];
      prev_ptr = prev_ptr + -1;
      if (*(int *)(compare_value + 0x78) == 0) break;
      if (*(int *)(current_value + 0x78) != 0) {
        str_ptr1 = *(byte **)(compare_value + 0x70);
        str_length = *(int64_t *)(current_value + 0x70) - (int64_t)str_ptr1;
        do {
          bVar1 = *str_ptr1;
          char_val1 = (uint)str_ptr1[str_length];
          if (bVar1 != char_val1) break;
          str_ptr1 = str_ptr1 + 1;
        } while (char_val1 != 0);
        if ((int)(bVar1 - char_val1) < 1) break;
      }
      *swap_ptr = compare_value;
      swap_ptr = swap_ptr + -1;
    }
    array_end = array_end + 1;
    *swap_ptr = current_value;
    if (array_end == array_start) {
      return;
    }
  } while( true );
}



// 函数：空函数 - 占位符4
void placeholder_function_4(void)

{
  return;
}



// 函数：空函数 - 占位符5
void placeholder_function_5(void)

{
  return;
}



// 函数：引擎资源清理函数
void cleanup_engine_resources(int64_t context_ptr,uint64_t param2,uint64_t param3,uint64_t param4)

{
  uint64_t *resource_ptr;
  uint64_t cleanup_flag;
  
  cleanup_flag = 0xfffffffffffffffe;
  initialize_cleanup_process();
  cleanup_subsystem(context_ptr + 0x40,*(uint64_t *)(context_ptr + 0x50),param3,param4,cleanup_flag);
  resource_ptr = *(uint64_t **)(context_ptr + 0x20);
  if (resource_ptr != (uint64_t *)0x0) {
    cleanup_resource_handler(context_ptr + 0x10,*resource_ptr,param3,param4,0xfffffffffffffffe);
                    // WARNING: Subroutine does not return
    safe_free_memory(resource_ptr);
  }
  return;
}



// 函数：引擎子系统清理函数
void cleanup_engine_subsystem(int64_t context_ptr,uint64_t param2,uint64_t param3,uint64_t param4)

{
  uint64_t *resource_ptr;
  uint64_t cleanup_flag;
  
  cleanup_flag = 0xfffffffffffffffe;
  initialize_cleanup_process();
  cleanup_subsystem(context_ptr + 0x30,*(uint64_t *)(context_ptr + 0x40),param3,param4,cleanup_flag);
  resource_ptr = *(uint64_t **)(context_ptr + 0x10);
  if (resource_ptr != (uint64_t *)0x0) {
    cleanup_resource_handler(context_ptr,*resource_ptr,param3,param4,0xfffffffffffffffe);
                    // WARNING: Subroutine does not return
    safe_free_memory(resource_ptr);
  }
  return;
}



// 函数：处理引擎缓冲区操作
void process_engine_buffer(int64_t *buffer_ptr,uint64_t param2,int64_t *handler_ptr)

{
  uint64_t *callback_ptr;
  uint64_t available_space;
  int64_t buffer_pos;
  
  buffer_pos = buffer_ptr[1];
  callback_ptr = (uint64_t *)*handler_ptr;
  available_space = callback_ptr[6];
  if ((uint64_t)((buffer_ptr[2] - buffer_pos) + *buffer_ptr) <= available_space) {
    expand_buffer_capacity(buffer_ptr,(buffer_pos - *buffer_ptr) + available_space);
    buffer_pos = buffer_ptr[1];
  }
  buffer_ptr[1] = buffer_pos + available_space;
                    // WARNING: Could not recover jumptable at 0x00018008e6fa. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)callback_ptr[4])(buffer_ptr,*callback_ptr,*(int32_t *)(callback_ptr + 5),callback_ptr + 1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数：引擎对象管理器
int64_t engine_object_manager(int64_t *object_ptr,int64_t *param2,int operation_code,uint64_t param4)

{
  int64_t object_handle;
  
  if (operation_code == 3) {
    return 0x180bfe210;
  }
  if (operation_code == 4) {
    return *object_ptr;
  }
  if (operation_code == 0) {
    object_handle = *object_ptr;
    if (object_handle != 0) {
      if (*(code **)(object_handle + 0x18) != (code *)0x0) {
        (**(code **)(object_handle + 0x18))(object_handle + 8,0,0,param4,0xfffffffffffffffe);
      }
                    // WARNING: Subroutine does not return
      safe_free_memory(object_handle);
    }
  }
  else {
    if (operation_code == 1) {
      object_handle = allocate_object(system_memory_pool_ptr,0x38,8,system_allocation_flags);
      initialize_object(object_handle,*param2);
      *object_ptr = object_handle;
      return 0;
    }
    if (operation_code == 2) {
      *object_ptr = *param2;
      *param2 = 0;
      return 0;
    }
  }
  return 0;
}



// 函数：引擎哈希查找器
uint64_t engine_hash_lookup(uint64_t hash_key,uint64_t *hash_table)

{
  int64_t *bucket_ptr;
  uint64_t lookup_result;
  
  lookup_result = calculate_hash_value(*hash_table,hash_key);
  if ((char)lookup_result == '\0') {
    return lookup_result & 0xffffffffffffff00;
  }
  bucket_ptr = *(int64_t **)hash_table[1];
  if (bucket_ptr != (int64_t *)0x0) {
                    // WARNING: Could not recover jumptable at 0x00018008e85b. Too many branches
                    // WARNING: Treating indirect jump as call
    lookup_result = (**(code **)(*bucket_ptr + 8))(bucket_ptr,hash_key);
    return lookup_result;
  }
  return CONCAT71((int7)((uint64_t)hash_table[1] >> 8),1);
}



// 函数：对象复制器
uint64_t *
object_copier(uint64_t *dest_ptr,uint64_t *src_ptr,uint64_t param3,uint64_t param4)

{
  code *copy_callback;
  
  *dest_ptr = *src_ptr;
  dest_ptr[3] = 0;
  dest_ptr[4] = _guard_check_icall;
  if (dest_ptr + 1 != src_ptr + 1) {
    copy_callback = (code *)src_ptr[3];
    if (copy_callback != (code *)0x0) {
      (*copy_callback)(dest_ptr + 1,src_ptr + 1,1,param4,0xfffffffffffffffe);
      copy_callback = (code *)src_ptr[3];
    }
    dest_ptr[3] = copy_callback;
    dest_ptr[4] = src_ptr[4];
  }
  *(int32_t *)(dest_ptr + 5) = *(int32_t *)(src_ptr + 5);
  dest_ptr[6] = src_ptr[6];
  return dest_ptr;
}



// 函数：内存区域初始化器
void initialize_memory_region(uint64_t param1,int64_t param2)

{
  *(uint64_t *)(param2 + 0x20) = &system_data_buffer_ptr;
  if (*(int64_t *)(param2 + 0x28) != 0) {
                    // WARNING: Subroutine does not return
    trigger_critical_error();
  }
  *(uint64_t *)(param2 + 0x28) = 0;
  *(int32_t *)(param2 + 0x38) = 0;
  *(uint64_t *)(param2 + 0x20) = &system_state_ptr;
  if (param2 != 0) {
                    // WARNING: Subroutine does not return
    safe_free_memory(param2);
  }
  return;
}



// 函数：链表数据复制器
uint64_t * linked_list_data_copier(int64_t *list_start,int64_t *list_end,uint64_t *dest_ptr)

{
  int64_t current_node;
  int64_t end_node;
  
  current_node = *list_end;
  end_node = *list_start;
  while (end_node != current_node) {
    *dest_ptr = *(uint64_t *)(end_node + 0x20);
    *(int32_t *)(dest_ptr + 1) = *(int32_t *)(end_node + 0x28);
    end_node = traverse_linked_list(end_node);
    dest_ptr = dest_ptr + 2;
  }
  return dest_ptr;
}



// 函数：快速排序实现
void quicksort_implementation(int64_t *array_start,int64_t *array_end,int64_t recursion_depth,int8_t stability_flag)

{
  byte bVar1;
  bool is_less;
  int32_t uVar3;
  int pivot_key;
  uint64_t array_size;
  int64_t *partition_ptr;
  byte *str_ptr1;
  byte *str_ptr2;
  uint char_val1;
  int64_t left_ptr;
  int64_t right_ptr;
  int64_t pivot_value;
  int64_t *swap_ptr;
  int64_t *temp_ptr;
  int64_t stack_left;
  int64_t stack_right;
  
  array_size = (int64_t)array_end - (int64_t)array_start;
  do {
    if (((int64_t)(array_size & 0xfffffffffffffff0) < 0x1c1) || (recursion_depth < 1)) {
      if (recursion_depth == 0) {
        right_ptr = (int64_t)array_end - (int64_t)array_start >> 4;
        if (1 < right_ptr) {
          left_ptr = (right_ptr + -2 >> 1) + 1;
          partition_ptr = array_start + left_ptr * 2;
          do {
            stack_left = partition_ptr[-2];
            stack_right = partition_ptr[-1];
            left_ptr = left_ptr + -1;
            partition_ptr = partition_ptr + -2;
            quicksort_partition(array_start,left_ptr,right_ptr,left_ptr,&stack_left,stability_flag);
          } while (left_ptr != 0);
        }
        if (1 < right_ptr) {
          array_end = array_end + -2;
          do {
            stack_left = *array_end;
            stack_right = array_end[1];
            *array_end = *array_start;
            *(int *)(array_end + 1) = (int)array_start[1];
            quicksort_partition(array_start,0,right_ptr + -1,0,&stack_left,stability_flag);
            array_end = array_end + -2;
            right_ptr = (0x10 - (int64_t)array_start) + (int64_t)array_end >> 4;
          } while (1 < right_ptr);
        }
      }
      return;
    }
    partition_ptr = (int64_t *)
             find_pivot_element(array_start,array_start + (((int64_t)array_end - (int64_t)array_start >> 4) -
                                              ((int64_t)array_end - (int64_t)array_start >> 0x3f) >> 1)
                                             * 2,array_end + -2);
    stack_left = *partition_ptr;
    pivot_key = (int)partition_ptr[1];
    stack_right = partition_ptr[1];
    partition_ptr = array_start;
    temp_ptr = array_end;
LAB_18008ebc0:
    if ((int)partition_ptr[1] == pivot_key) {
      if (*(int *)(stack_left + 0x78) == 0) {
        is_less = false;
      }
      else if (*(int *)(*partition_ptr + 0x78) == 0) {
        is_less = true;
      }
      else {
        str_ptr1 = *(byte **)(stack_left + 0x70);
        right_ptr = *(int64_t *)(*partition_ptr + 0x70) - (int64_t)str_ptr1;
        do {
          bVar1 = *str_ptr1;
          char_val1 = (uint)str_ptr1[right_ptr];
          if (bVar1 != char_val1) break;
          str_ptr1 = str_ptr1 + 1;
        } while (char_val1 != 0);
        is_less = 0 < (int)(bVar1 - char_val1);
      }
    }
    else {
      is_less = (int)partition_ptr[1] < pivot_key;
    }
    if (is_less) {
      partition_ptr = partition_ptr + 2;
      goto LAB_18008ebc0;
    }
    do {
      temp_ptr = temp_ptr;
      temp_ptr = temp_ptr + -2;
      if (pivot_key == (int)temp_ptr[-1]) {
        if (*(int *)(*temp_ptr + 0x78) == 0) {
          is_less = false;
        }
        else if (*(int *)(stack_left + 0x78) == 0) {
          is_less = true;
        }
        else {
          str_ptr1 = *(byte **)(*temp_ptr + 0x70);
          right_ptr = *(int64_t *)(stack_left + 0x70) - (int64_t)str_ptr1;
          do {
            bVar1 = *str_ptr1;
            char_val1 = (uint)str_ptr1[right_ptr];
            if (bVar1 != char_val1) break;
            str_ptr1 = str_ptr1 + 1;
          } while (char_val1 != 0);
          is_less = 0 < (int)(bVar1 - char_val1);
        }
      }
      else {
        is_less = pivot_key < (int)temp_ptr[-1];
      }
    } while (is_less);
    if (partition_ptr < temp_ptr) {
      right_ptr = *partition_ptr;
      uVar3 = *(int32_t *)((int64_t)partition_ptr + 4);
      left_ptr = partition_ptr[1];
      *partition_ptr = *temp_ptr;
      *(int *)(partition_ptr + 1) = (int)temp_ptr[-1];
      partition_ptr = partition_ptr + 2;
      *(int *)temp_ptr = (int)right_ptr;
      *(int32_t *)((int64_t)temp_ptr + -0xc) = uVar3;
      *(int *)(temp_ptr + -1) = (int)left_ptr;
      goto LAB_18008ebc0;
    }
    recursion_depth = recursion_depth + -1;
    quicksort_implementation(partition_ptr,array_end,recursion_depth,stability_flag);
    array_size = (int64_t)partition_ptr - (int64_t)array_start;
    array_end = partition_ptr;
  } while( true );
}



// 函数：堆排序实现
void heapsort_implementation(void)

{
  uint64_t *heap_array;
  int64_t array_size;
  int64_t element_count;
  int64_t heap_size;
  uint64_t *end_ptr;
  int32_t uStack0000000000000030;
  int32_t uStack0000000000000034;
  int32_t uStack0000000000000038;
  int32_t uStack000000000000003c;
  
  element_count = (array_size + -2 >> 1) + 1;
  heap_array = end_ptr + element_count * 2;
  do {
    uStack0000000000000030 = *(int32_t *)(heap_array + -2);
    uStack0000000000000034 = *(int32_t *)((int64_t)heap_array + -0xc);
    uStack0000000000000038 = *(int32_t *)(heap_array + -1);
    uStack000000000000003c = *(int32_t *)((int64_t)heap_array + -4);
    element_count = element_count + -1;
    heap_array = heap_array + -2;
    heapify_array(uStack0000000000000030,element_count);
  } while (element_count != 0);
  if (1 < array_size) {
    heap_array = (uint64_t *)(heap_size + -0x10);
    do {
      uStack0000000000000030 = *(int32_t *)heap_array;
      uStack0000000000000034 = *(int32_t *)((int64_t)heap_array + 4);
      uStack0000000000000038 = *(int32_t *)(heap_array + 1);
      uStack000000000000003c = *(int32_t *)((int64_t)heap_array + 0xc);
      *heap_array = *end_ptr;
      *(int32_t *)(heap_array + 1) = *(int32_t *)(end_ptr + 1);
      heapify_array(uStack0000000000000030,0,array_size + -1,0,&stack0x00000030);
      heap_array = heap_array + -2;
      array_size = (0x10 - (int64_t)end_ptr) + (int64_t)heap_array >> 4;
    } while (1 < array_size);
  }
  return;
}



// 函数：优化的堆排序实现
void optimized_heapsort_implementation(void)

{
  int64_t array_size;
  uint64_t *heap_array;
  int64_t heap_size;
  uint64_t *end_ptr;
  int32_t uStack0000000000000030;
  int32_t uStack0000000000000034;
  int32_t uStack0000000000000038;
  int32_t uStack000000000000003c;
  
  if (1 < array_size) {
    heap_array = (uint64_t *)(heap_size + -0x10);
    do {
      uStack0000000000000030 = *(int32_t *)heap_array;
      uStack0000000000000034 = *(int32_t *)((int64_t)heap_array + 4);
      uStack0000000000000038 = *(int32_t *)(heap_array + 1);
      uStack000000000000003c = *(int32_t *)((int64_t)heap_array + 0xc);
      *heap_array = *end_ptr;
      *(int32_t *)(heap_array + 1) = *(int32_t *)(end_ptr + 1);
      heapify_array(uStack0000000000000030,0,array_size + -1,0,&stack0x00000030);
      heap_array = heap_array + -2;
      array_size = (0x10 - (int64_t)end_ptr) + (int64_t)heap_array >> 4;
    } while (1 < array_size);
  }
  return;
}



// 函数：字符串快速排序实现
void string_quicksort_implementation(int64_t *array_start,int64_t *array_end,int64_t recursion_depth,int8_t stability_flag)

{
  byte bVar1;
  uint64_t array_size;
  int64_t current_value;
  byte *str_ptr1;
  byte *str_ptr2;
  uint char_val1;
  int compare_result;
  int64_t left_ptr;
  int64_t pivot_value;
  int64_t right_ptr;
  int64_t pivot_data;
  int64_t *swap_ptr;
  int64_t stack_value;
  
  array_size = (int64_t)array_end - (int64_t)array_start;
joined_r0x00018008edee:
  if (((int64_t)(array_size & 0xfffffffffffffff8) < 0xe1) || (recursion_depth < 1)) {
    if (recursion_depth == 0) {
      right_ptr = (int64_t)array_end - (int64_t)array_start >> 3;
      if (1 < right_ptr) {
        pivot_value = (right_ptr + -2 >> 1) + 1;
        do {
          stack_value = array_start[pivot_value + -1];
          pivot_value = pivot_value + -1;
          string_quicksort_partition(array_start,pivot_value,right_ptr,pivot_value,&stack_value,stability_flag);
        } while (pivot_value != 0);
      }
      if (1 < right_ptr) {
        array_end = array_end + -1;
        do {
          stack_value = *array_end;
          *array_end = *array_start;
          string_quicksort_partition(array_start,0,right_ptr + -1,0,&stack_value,stability_flag);
          array_end = array_end + -1;
          right_ptr = (8 - (int64_t)array_start) + (int64_t)array_end >> 3;
        } while (1 < right_ptr);
      }
    }
    return;
  }
  current_value = *array_start;
  pivot_value = (int64_t)array_end - (int64_t)array_start >> 3;
  if (pivot_value < 0) {
    pivot_value = pivot_value + 1;
  }
  pivot_value = array_start[pivot_value >> 1];
  left_ptr = array_start;
  swap_ptr = array_end;
  if (*(int *)(pivot_value + 0x78) == 0) {
LAB_18008eecc:
    pivot_data = array_end[-1];
    right_ptr = pivot_value;
    if ((*(int *)(pivot_data + 0x78) == 0) || (right_ptr = current_value, *(int *)(current_value + 0x78) == 0))
    goto LAB_18008ef40;
    str_ptr1 = *(byte **)(pivot_data + 0x70);
    right_ptr = *(int64_t *)(current_value + 0x70) - (int64_t)str_ptr1;
    do {
      bVar1 = *str_ptr1;
      char_val1 = (uint)str_ptr1[right_ptr];
      if (bVar1 != char_val1) break;
      str_ptr1 = str_ptr1 + 1;
    } while (char_val1 != 0);
    right_ptr = current_value;
    if ((0 < (int)(bVar1 - char_val1)) || (right_ptr = pivot_value, *(int *)(pivot_data + 0x78) == 0))
    goto LAB_18008ef40;
    if (*(int *)(pivot_value + 0x78) != 0) {
      str_ptr1 = *(byte **)(pivot_data + 0x70);
      right_ptr = *(int64_t *)(pivot_value + 0x70) - (int64_t)str_ptr1;
      do {
        char_val1 = (uint)str_ptr1[right_ptr];
        compare_result = *str_ptr1 - char_val1;
        current_value = pivot_value;
        if (*str_ptr1 != char_val1) break;
        str_ptr1 = str_ptr1 + 1;
      } while (char_val1 != 0);
      goto joined_r0x00018008ef35;
    }
  }
  else {
    if (*(int *)(current_value + 0x78) != 0) {
      str_ptr1 = *(byte **)(pivot_value + 0x70);
      pivot_data = *(int64_t *)(current_value + 0x70) - (int64_t)str_ptr1;
      do {
        bVar1 = *str_ptr1;
        char_val1 = (uint)str_ptr1[pivot_data];
        if (bVar1 != char_val1) break;
        str_ptr1 = str_ptr1 + 1;
      } while (char_val1 != 0);
      if ((int)(bVar1 - char_val1) < 1) goto LAB_18008eecc;
    }
    pivot_data = array_end[-1];
    right_ptr = current_value;
    if (*(int *)(pivot_data + 0x78) == 0) goto LAB_18008ef40;
    str_ptr1 = *(byte **)(pivot_data + 0x70);
    right_ptr = *(int64_t *)(pivot_value + 0x70) - (int64_t)str_ptr1;
    do {
      bVar1 = *str_ptr1;
      char_val1 = (uint)str_ptr1[right_ptr];
      if (bVar1 != char_val1) break;
      str_ptr1 = str_ptr1 + 1;
    } while (char_val1 != 0);
    right_ptr = pivot_value;
    if ((0 < (int)(bVar1 - char_val1)) || (right_ptr = current_value, *(int *)(pivot_data + 0x78) == 0))
    goto LAB_18008ef40;
    if (*(int *)(current_value + 0x78) != 0) {
      str_ptr1 = *(byte **)(pivot_data + 0x70);
      pivot_value = *(int64_t *)(current_value + 0x70) - (int64_t)str_ptr1;
      do {
        char_val1 = (uint)str_ptr1[pivot_value];
        compare_result = *str_ptr1 - char_val1;
        if (*str_ptr1 != char_val1) break;
        str_ptr1 = str_ptr1 + 1;
      } while (char_val1 != 0);
joined_r0x00018008ef35:
      right_ptr = current_value;
      if (compare_result < 1) goto LAB_18008ef40;
    }
  }
  right_ptr = pivot_data;
LAB_18008ef40:
  do {
    while( true ) {
      current_value = *left_ptr;
      if (*(int *)(right_ptr + 0x78) == 0) break;
      if (*(int *)(current_value + 0x78) != 0) {
        str_ptr1 = *(byte **)(right_ptr + 0x70);
        pivot_value = *(int64_t *)(current_value + 0x70) - (int64_t)str_ptr1;
        do {
          bVar1 = *str_ptr1;
          char_val1 = (uint)str_ptr1[pivot_value];
          if (bVar1 != char_val1) break;
          str_ptr1 = str_ptr1 + 1;
        } while (char_val1 != 0);
        if ((int)(bVar1 - char_val1) < 1) break;
      }
      left_ptr = left_ptr + 1;
    }
    do {
      do {
        pivot_value = swap_ptr[-1];
        swap_ptr = swap_ptr + -1;
        if (*(int *)(pivot_value + 0x78) == 0) goto LAB_18008efb7;
      } while (*(int *)(right_ptr + 0x78) == 0);
      str_ptr1 = *(byte **)(pivot_value + 0x70);
      pivot_data = *(int64_t *)(right_ptr + 0x70) - (int64_t)str_ptr1;
      do {
        bVar1 = *str_ptr1;
        char_val1 = (uint)str_ptr1[pivot_data];
        if (bVar1 != char_val1) break;
        str_ptr1 = str_ptr1 + 1;
      } while (char_val1 != 0);
    } while (0 < (int)(bVar1 - char_val1));
LAB_18008efb7:
    if (swap_ptr <= left_ptr) break;
    *left_ptr = pivot_value;
    *swap_ptr = current_value;
    left_ptr = left_ptr + 1;
  } while( true );
  recursion_depth = recursion_depth + -1;
  string_quicksort_implementation(left_ptr,array_end,recursion_depth,stability_flag);
  array_size = (int64_t)left_ptr - (int64_t)array_start;
  array_end = left_ptr;
  goto joined_r0x00018008edee;
}