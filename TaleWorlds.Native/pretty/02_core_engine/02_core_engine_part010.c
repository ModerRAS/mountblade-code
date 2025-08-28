#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part010.c - 22 个函数

// 函数: 初始化标志清零
// 功能: 清零标志变量和相关数据
void initialize_flag_zero(int8_t *flag_ptr)

{
  longlong context_ptr;
  
  *flag_ptr = 0;
  *(int32_t *)(context_ptr + 0x10) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: 字符串处理函数
// 功能: 处理字符串，查找子串并进行复制操作
void process_string_operation(longlong param_1,longlong param_2,longlong param_3)

{
  longlong substr_ptr;
  longlong len2;
  longlong len3;
  int8_t auStack_498 [32];
  uint64_t stack_guard;
  void *debug_ptr;
  int8_t *buffer_ptr;
  int32_t buffer_size;
  int8_t auStack_450 [1032];
  ulonglong stack_hash;
  
  stack_guard = 0xfffffffffffffffe;
  stack_hash = _DAT_180bf00a8 ^ (ulonglong)auStack_498;
  debug_ptr = &UNK_18098bb30;
  buffer_ptr = auStack_450;
  buffer_size = 0;
  auStack_450[0] = 0;
  substr_ptr = strstr(*(uint64_t *)(param_1 + 8));
  if (substr_ptr != 0) {
    len2 = -1;
    len3 = -1;
    do {
      len3 = len3 + 1;
    } while (*(char *)(param_2 + len3) != '\0');
    do {
      len2 = len2 + 1;
    } while (*(char *)(len2 + param_3) != '\0');
                    // WARNING: Subroutine does not return
    memcpy(buffer_ptr,*(longlong *)(param_1 + 8),substr_ptr - *(longlong *)(param_1 + 8));
  }
  debug_ptr = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(stack_hash ^ (ulonglong)auStack_498);
}





// 函数: 信号量释放函数
// 功能: 循环释放信号量直到成功
void release_semaphore(uint64_t *semaphore_ptr,int32_t count)

{
  int result;
  
  do {
    result = ReleaseSemaphore(*semaphore_ptr,count,0);
  } while (result == 0);
  return;
}





// 函数: 互斥锁解锁函数
// 功能: 解锁互斥锁并处理错误
void unlock_mutex(uint64_t *mutex_ptr)

{
  int result;
  
  if (*(char *)(mutex_ptr + 1) != '\0') {
    result = _Mtx_unlock(*mutex_ptr);
    if (result != 0) {
      __Throw_C_error_std__YAXH_Z(result);
    }
  }
  return;
}



// 函数: 条件等待函数
// 功能: 等待条件变量满足，使用互斥锁同步
uint64_t wait_for_condition(longlong cond_ptr,uint64_t timeout,uint64_t param_3,uint64_t param_4)

{
  char status;
  int result;
  longlong mutex_ptr;
  uint64_t ret_value;
  int8_t flag;
  
  ret_value = 0xfffffffffffffffe;
  mutex_ptr = cond_ptr + 0x48;
  result = _Mtx_lock();
  if (result != 0) {
    __Throw_C_error_std__YAXH_Z(result);
  }
  flag = 1;
  if (*(char *)(cond_ptr + 0x98) != '\x01') {
    status = *(char *)(cond_ptr + 0x98);
    while (status == '\0') {
      result = _Cnd_wait(cond_ptr,mutex_ptr,param_3,param_4,ret_value,mutex_ptr,flag);
      if (result != 0) {
        __Throw_C_error_std__YAXH_Z(result);
      }
      status = *(char *)(cond_ptr + 0x98);
    }
  }
  *(int8_t *)(cond_ptr + 0x98) = 0;
  result = _Mtx_unlock(mutex_ptr);
  if (result != 0) {
    __Throw_C_error_std__YAXH_Z(result);
  }
  return 1;
}



// 函数: 数据处理函数
// 功能: 处理数据结构，进行条件检查和更新操作
longlong process_data_structure(int32_t *data_ptr,int32_t *input_ptr)

{
  int32_t data_value;
  char success;
  void *error_msg;
  
  if (*(longlong *)(data_ptr + 0x18) != 0) {
    success = (**(code **)(data_ptr + 0x1a))(input_ptr,data_ptr + 0x14);
    if (success == '\0') {
      if (system_debug_flag == '\0') {
        error_msg = &system_buffer_ptr;
        if (*(void **)(data_ptr + 4) != (void *)0x0) {
          error_msg = *(void **)(data_ptr + 4);
        }
        FUN_180626f80(&UNK_18098bc00,error_msg);
      }
      *data_ptr = data_ptr[0x12];
      return (ulonglong)(uint3)((uint)data_ptr[0x12] >> 8) << 8;
    }
  }
  data_value = *input_ptr;
  *data_ptr = data_value;
  return CONCAT71((uint7)(uint3)((uint)data_value >> 8),1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: 系统参数设置函数
// 功能: 设置系统参数，进行条件检查和错误处理
void set_system_parameter(uint64_t system_handle,int32_t parameter)

{
  longlong system_base;
  char check_result;
  void *error_msg;
  int32_t param_array [6];
  
  system_base = _DAT_180c86920;
  if ((*(longlong *)(_DAT_180c86920 + 0x22f0) != 0) &&
     (param_array[0] = parameter, check_result = (**(code **)(_DAT_180c86920 + 0x22f8))(param_array),
     parameter = param_array[0], check_result == '\0')) {
    if (system_debug_flag == '\0') {
      error_msg = &system_buffer_ptr;
      if (*(void **)(system_base + 0x22a0) != (void *)0x0) {
        error_msg = *(void **)(system_base + 0x22a0);
      }
      FUN_180626f80(&UNK_18098bc00,error_msg);
    }
    *(int32_t *)(system_base + 0x2290) = *(int32_t *)(system_base + 0x22d8);
    return;
  }
  *(int32_t *)(system_base + 0x2290) = parameter;
  return;
}



// 函数: 内存释放函数
// 功能: 释放内存并根据条件标志执行清理
uint64_t *
free_memory_block(uint64_t *mem_ptr,ulonglong flags,uint64_t param_3,uint64_t param_4)

{
  *mem_ptr = &UNK_18098bcb0;
  if ((flags & 1) != 0) {
    free(mem_ptr,0x38,param_3,param_4,0xfffffffffffffffe);
  }
  return mem_ptr;
}





// 函数: 字符串初始化函数
// 功能: 初始化字符串数据，处理长度检查和复制操作
void initialize_string_data(longlong str_ptr,longlong input_str)

{
  longlong str_len;
  
  if (input_str == 0) {
    *(int32_t *)(str_ptr + 0x10) = 0;
    **(int8_t **)(str_ptr + 8) = 0;
    return;
  }
  str_len = -1;
  do {
    str_len = str_len + 1;
  } while (*(char *)(input_str + str_len) != '\0');
  if ((int)str_len < 0x20) {
    *(int *)(str_ptr + 0x10) = (int)str_len;
                    // WARNING: Could not recover jumptable at 0x0001800463b7. Too many branches
                    // WARNING: Treating indirect jump as call
    strcpy_s(*(uint64_t *)(str_ptr + 8),0x20);
    return;
  }
  FUN_180626f80(&UNK_18098bc48,0x20,input_str);
  *(int32_t *)(str_ptr + 0x10) = 0;
  **(int8_t **)(str_ptr + 8) = 0;
  return;
}





// 函数: 字符串复制函数
// 功能: 安全地复制字符串数据到目标缓冲区
void copy_string_data(longlong dest_ptr,uint64_t src_ptr,int length)

{
  if (length + 1 < 0x20) {
                    // WARNING: Subroutine does not return
    memcpy(*(int8_t **)(dest_ptr + 8),src_ptr,(longlong)length);
  }
  **(int8_t **)(dest_ptr + 8) = 0;
  *(int32_t *)(dest_ptr + 0x10) = 0;
  return;
}





// 函数: 内存复制包装函数
// 功能: 内存复制操作的包装函数，无实际实现
void memory_copy_wrapper(void)

{
                    // WARNING: Subroutine does not return
  memcpy();
}





// 函数: 数据清零函数
// 功能: 清零数据和相关的上下文信息
void clear_data(int8_t *data_ptr)

{
  longlong context_ptr;
  
  *data_ptr = 0;
  *(int32_t *)(context_ptr + 0x10) = 0;
  return;
}



// 函数: 数据结构初始化函数
// 功能: 初始化数据结构，设置链表指针
uint64_t * initialize_data_structure(uint64_t *data_ptr)

{
  *data_ptr = &UNK_18098bcb0;
  data_ptr[1] = 0;
  *(int32_t *)(data_ptr + 2) = 0;
  *data_ptr = &UNK_18098bc80;
  data_ptr[1] = data_ptr + 3;
  *(int32_t *)(data_ptr + 2) = 0;
  *(int8_t *)(data_ptr + 3) = 0;
  return data_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: 字符串操作函数
// 功能: 处理字符串查找和复制操作，包含堆栈保护
void string_operation_with_guard(longlong param_1,longlong param_2,longlong param_3)

{
  longlong substr_ptr;
  longlong len2;
  longlong len3;
  int8_t auStack_a8 [32];
  uint64_t stack_guard;
  void *debug_ptr;
  int8_t *buffer_ptr;
  int32_t buffer_size;
  int8_t auStack_68 [32];
  ulonglong stack_hash;
  
  stack_guard = 0xfffffffffffffffe;
  stack_hash = _DAT_180bf00a8 ^ (ulonglong)auStack_a8;
  debug_ptr = &UNK_18098bc80;
  buffer_ptr = auStack_68;
  buffer_size = 0;
  auStack_68[0] = 0;
  substr_ptr = strstr(*(uint64_t *)(param_1 + 8));
  if (substr_ptr != 0) {
    len2 = -1;
    len3 = -1;
    do {
      len3 = len3 + 1;
    } while (*(char *)(param_2 + len3) != '\0');
    do {
      len2 = len2 + 1;
    } while (*(char *)(len2 + param_3) != '\0');
                    // WARNING: Subroutine does not return
    memcpy(buffer_ptr,*(longlong *)(param_1 + 8),substr_ptr - *(longlong *)(param_1 + 8));
  }
  debug_ptr = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(stack_hash ^ (ulonglong)auStack_a8);
}



// 函数: 小块内存释放函数
// 功能: 释放小块内存并根据标志执行清理
uint64_t * free_small_memory_block(uint64_t *mem_ptr,ulonglong flags)

{
  *mem_ptr = &UNK_18098bcb0;
  if ((flags & 1) != 0) {
    free(mem_ptr,0x18);
  }
  return mem_ptr;
}





// 函数: 互斥锁解锁函数
// 功能: 简单的互斥锁解锁操作
void simple_unlock_mutex(uint64_t *mutex_ptr)

{
  int result;
  
  result = _Mtx_unlock(*mutex_ptr);
  if (result != 0) {
    __Throw_C_error_std__YAXH_Z(result);
  }
  return;
}





// 函数: 条件广播函数
// 功能: 设置条件标志并广播通知等待的线程
void broadcast_condition(longlong cond_ptr)

{
  int result;
  
  result = _Mtx_lock(cond_ptr + 0x48);
  if (result != 0) {
    __Throw_C_error_std__YAXH_Z(result);
  }
  *(int8_t *)(cond_ptr + 0x98) = 1;
  result = _Cnd_broadcast(cond_ptr);
  if (result != 0) {
    __Throw_C_error_std__YAXH_Z(result);
  }
  result = _Mtx_unlock(cond_ptr + 0x48);
  if (result != 0) {
    __Throw_C_error_std__YAXH_Z(result);
  }
  return;
}





// 函数: 指针重置函数
// 功能: 重置指针到不同的数据结构
void reset_pointers(uint64_t *ptr_array)

{
  *ptr_array = &UNK_18098bdc8;
  *ptr_array = &UNK_180a21720;
  *ptr_array = &UNK_180a21690;
  return;
}



// 函数: 带条件的指针重置函数
// 功能: 重置指针并根据条件释放内存
uint64_t *
reset_pointers_with_free(uint64_t *ptr_array,ulonglong flags,uint64_t param_3,uint64_t param_4)

{
  *ptr_array = &UNK_18098bdc8;
  *ptr_array = &UNK_180a21720;
  *ptr_array = &UNK_180a21690;
  if ((flags & 1) != 0) {
    free(ptr_array,0x20,param_3,param_4,0xfffffffffffffffe);
  }
  return ptr_array;
}





// 函数: 批量清理函数
// 功能: 批量清理数据块，遍历并释放资源
void cleanup_data_blocks(longlong *data_array)

{
  longlong end_ptr;
  longlong current_ptr;
  
  end_ptr = data_array[1];
  for (current_ptr = *data_array; current_ptr != end_ptr; current_ptr = current_ptr + 0x100) {
    cleanup_single_block(current_ptr);
  }
  if (*data_array == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: 链表清理函数
// 功能: 清理链表结构，重置所有节点
void cleanup_linked_list(longlong *list_ptr)

{
  uint64_t *end_node;
  uint64_t *current_node;
  
  end_node = (uint64_t *)list_ptr[1];
  for (current_node = (uint64_t *)*list_ptr; current_node != end_node; current_node = current_node + 5) {
    *current_node = &UNK_180a3c3e0;
    if (current_node[1] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    current_node[1] = 0;
    *(int32_t *)(current_node + 3) = 0;
    *current_node = &UNK_18098bcb0;
  }
  if (*list_ptr != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}





// 函数: 内存管理函数
// 功能: 管理内存块，处理异常列表和引用计数
void manage_memory_block(ulonglong *mem_ptr)

{
  int *ref_count;
  uint64_t *mem_block;
  longlong block_info;
  ulonglong base_addr;
  
  mem_block = (uint64_t *)*mem_ptr;
  if (mem_block == (uint64_t *)0x0) {
    return;
  }
  base_addr = (ulonglong)mem_block & 0xffffffffffc00000;
  if (base_addr != 0) {
    block_info = base_addr + 0x80 + ((longlong)mem_block - base_addr >> 0x10) * 0x50;
    block_info = block_info - (ulonglong)*(uint *)(block_info + 4);
    if ((*(void ***)(base_addr + 0x70) == &ExceptionList) && (*(char *)(block_info + 0xe) == '\0')) {
      *mem_block = *(uint64_t *)(block_info + 0x20);
      *(uint64_t **)(block_info + 0x20) = mem_block;
      ref_count = (int *)(block_info + 0x18);
      *ref_count = *ref_count + -1;
      if (*ref_count == 0) {
        cleanup_memory_pool();
        return;
      }
    }
    else {
      handle_memory_exception(base_addr,CONCAT71(0xff000000,*(void ***)(base_addr + 0x70) == &ExceptionList),
                          mem_block,base_addr,0xfffffffffffffffe);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: 动态数组插入函数
// 功能: 向动态数组中插入元素，自动扩容和管理内存
int insert_into_dynamic_array(longlong array_ptr,longlong element_ptr)

{
  uint64_t ***new_array;
  longlong new_memory;
  void *error_msg;
  longlong old_base;
  int index;
  longlong old_current;
  longlong old_end;
  ulonglong current_pos;
  uint64_t ****array_ptr_ptr;
  uint64_t ***temp_ptr;
  uint64_t *element_list;
  longlong cleanup_flag;
  int32_t uStack_128;
  uint64_t uStack_120;
  uint64_t uStack_118;
  uint64_t uStack_110;
  uint64_t uStack_108;
  uint64_t uStack_100;
  uint64_t uStack_f8;
  uint64_t uStack_f0;
  uint64_t uStack_e8;
  uint64_t uStack_e0;
  uint64_t uStack_d8;
  uint64_t uStack_d0;
  uint64_t uStack_c8;
  uint64_t uStack_c0;
  uint64_t uStack_b8;
  uint64_t uStack_b0;
  uint64_t uStack_a8;
  uint64_t uStack_a0;
  uint64_t uStack_98;
  uint64_t uStack_90;
  uint64_t uStack_88;
  uint64_t uStack_80;
  uint64_t uStack_78;
  uint64_t uStack_70;
  uint64_t ***cleanup_stack;
  uint64_t ***temp_stack;
  uint64_t uStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  int32_t uStack_40;
  uint64_t uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  new_memory = 0;
  element_list = (uint64_t *)&UNK_180a3c3e0;
  uStack_120 = 0;
  cleanup_flag = 0;
  uStack_128 = 0;
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_40 = 3;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  error_msg = &system_buffer_ptr;
  if (*(void **)(element_ptr + 8) != (void *)0x0) {
    error_msg = *(void **)(element_ptr + 8);
  }
  temp_ptr = &cleanup_stack;
  cleanup_stack = &cleanup_stack;
  temp_stack = &cleanup_stack;
  FUN_180627c50(&element_list,error_msg);
  uStack_118 = 0;
  uStack_110 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  current_pos = *(ulonglong *)(array_ptr + 0x10);
  if (current_pos < *(ulonglong *)(array_ptr + 0x18)) {
    *(ulonglong *)(array_ptr + 0x10) = current_pos + 0x100;
    FUN_180048a90(current_pos,&element_list);
    array_ptr_ptr = *(uint64_t *****)(array_ptr + 0x10);
    goto LAB_RETURN_INDEX;
  }
  old_base = *(longlong *)(array_ptr + 8);
  old_end = (longlong)(current_pos - old_base) >> 8;
  if (old_end == 0) {
    old_end = 1;
LAB_EXPAND_ARRAY:
    new_memory = FUN_18062b420(_DAT_180c8ed18,old_end << 8,*(int8_t *)(array_ptr + 0x20));
    current_pos = *(ulonglong *)(array_ptr + 0x10);
    old_base = *(longlong *)(array_ptr + 8);
  }
  else {
    old_end = old_end * 2;
    if (old_end != 0) goto LAB_EXPAND_ARRAY;
  }
  FUN_1800491b0(&temp_ptr,old_base,current_pos,new_memory);
  new_array = temp_ptr;
  FUN_180048a90(temp_ptr,&element_list);
  array_ptr_ptr = (uint64_t ****)(new_array + 0x20);
  old_base = *(longlong *)(array_ptr + 0x10);
  old_current = *(longlong *)(array_ptr + 8);
  if (old_current != old_base) {
    do {
      cleanup_single_block(old_current);
      old_current = old_current + 0x100;
    } while (old_current != old_base);
    old_current = *(longlong *)(array_ptr + 8);
  }
  if (old_current != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(old_current);
  }
  *(longlong *)(array_ptr + 8) = new_memory;
  *(uint64_t *****)(array_ptr + 0x10) = array_ptr_ptr;
  *(longlong *)(array_ptr + 0x18) = old_end * 0x100 + new_memory;
LAB_RETURN_INDEX:
  index = (int)((ulonglong)((longlong)array_ptr_ptr - *(longlong *)(array_ptr + 8)) >> 8) + -1;
  *(int *)(array_ptr + 0x68) = index;
  temp_ptr = &cleanup_stack;
  FUN_180049fd0(&cleanup_stack,uStack_58);
  temp_ptr = (uint64_t ***)&element_list;
  element_list = (uint64_t *)&UNK_180a3c3e0;
  if (cleanup_flag == 0) {
    return index;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: 单块清理函数
// 功能: 清理单个数据块，释放相关资源
void cleanup_single_block(uint64_t *block_ptr,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_180049fd0(block_ptr + 0x1a,block_ptr[0x1c],param_3,param_4,0xfffffffffffffffe);
  *block_ptr = &UNK_180a3c3e0;
  if (block_ptr[1] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  block_ptr[1] = 0;
  *(int32_t *)(block_ptr + 3) = 0;
  *block_ptr = &UNK_18098bcb0;
  return;
}



// 函数: 字符串查找函数
// 功能: 在动态数组中查找字符串，返回索引位置
ulonglong find_string_in_array(longlong array_ptr,longlong string_ptr)

{
  byte *str1_char;
  int str1_len;
  longlong array_base;
  byte *str2_char;
  int str2_len;
  int cmp_result;
  longlong offset;
  uint index;
  ulonglong current_idx;
  ulonglong max_idx;
  
  current_idx = (ulonglong)*(int *)(array_ptr + 0x68);
  array_base = *(longlong *)(array_ptr + 8);
  if (current_idx < (ulonglong)(*(longlong *)(array_ptr + 0x10) - array_base >> 8)) {
    str2_len = *(int *)(string_ptr + 0x10);
    str1_len = *(int *)(current_idx * 0x100 + 0x10 + array_base);
    if (str1_len == str2_len) {
      if (str1_len != 0) {
        str2_char = *(byte **)(current_idx * 0x100 + 8 + array_base);
        offset = *(longlong *)(string_ptr + 8) - (longlong)str2_char;
        do {
          str1_char = str2_char + offset;
          str2_len = (uint)*str2_char - (uint)*str1_char;
          if (str2_len != 0) break;
          str2_char = str2_char + 1;
        } while (*str1_char != 0);
      }
    }
    else if (str1_len != 0) goto LAB_SEARCH_FROM_START;
    if (str2_len == 0) {
LAB_RETURN_FOUND:
      return current_idx & 0xffffffff;
    }
  }
LAB_SEARCH_FROM_START:
  current_idx = 0;
  max_idx = *(longlong *)(array_ptr + 0x10) - array_base >> 8;
  if (max_idx != 0) {
    str2_len = *(int *)(string_ptr + 0x10);
    max_idx = current_idx;
    do {
      str1_len = *(int *)(max_idx + 0x10 + array_base);
      cmp_result = str2_len;
      if (str1_len == str2_len) {
        if (str1_len != 0) {
          str2_char = *(byte **)(max_idx + 8 + array_base);
          offset = *(longlong *)(string_ptr + 8) - (longlong)str2_char;
          do {
            str1_char = str2_char + offset;
            cmp_result = (uint)*str2_char - (uint)*str1_char;
            if (cmp_result != 0) break;
            str2_char = str2_char + 1;
          } while (*str1_char != 0);
        }
LAB_COMPARE_DONE:
        if (cmp_result == 0) {
          *(int *)(array_ptr + 0x68) = (int)current_idx;
          goto LAB_RETURN_FOUND;
        }
      }
      else if (str1_len == 0) goto LAB_COMPARE_DONE;
      index = (int)current_idx + 1;
      current_idx = (ulonglong)index;
      max_idx = max_idx + 0x100;
    } while ((ulonglong)(longlong)(int)index < max_idx);
  }
  return 0xffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: 系统初始化函数
// 功能: 初始化系统组件，设置数据结构和回调函数
void initialize_system_components(longlong *system_ptr,uint64_t *config_ptr)

{
  longlong *new_system;
  longlong *temp_ptr;
  uint64_t *config;
  longlong *vtable_ptr;
  longlong **callback_ptr;
  int32_t flags;
  uint64_t stack_guard;
  
  stack_guard = 0xfffffffffffffffe;
  flags = 0;
  temp_ptr = system_ptr;
  config = config_ptr;
  FUN_180047fc0();
  new_system = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,200,8,3,flags,stack_guard);
  temp_ptr = new_system;
  FUN_180049830(new_system);
  *new_system = (longlong)&UNK_1809fcb00;
  new_system[0x18] = (longlong)&UNK_180046dd0;
  vtable_ptr = new_system;
  (**(code **)(*new_system + 0x28))(new_system);
  stack_guard = _DAT_180c82868;
  callback_ptr = &temp_ptr;
  temp_ptr = new_system;
  (**(code **)(*new_system + 0x28))(new_system);
  FUN_18005e300(stack_guard,&temp_ptr);
  (**(code **)(*new_system + 0x38))(new_system);
  _DAT_180bf52b0 = (longlong)*(int *)(_DAT_180c86870 + 0x224);
  FUN_180627be0(&system_memory_52c0,config_ptr);
  *config_ptr = &UNK_180a3c3e0;
  if (config_ptr[1] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  config_ptr[1] = 0;
  *(int32_t *)(config_ptr + 3) = 0;
  *config_ptr = &UNK_18098bcb0;
  return;
}



// WARNING: Removing unreachable block (ram,0x0001800472a0)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: 引擎初始化函数
// 功能: 初始化游戏引擎，加载配置文件和资源
void initialize_game_engine(void)

{
  uint64_t system_handle;
  char success;
  int index;
  longlong ***engine_obj;
  ulonglong timestamp;
  longlong file_offset;
  uint64_t *config_ptr;
  int32_t *value_ptr;
  int8_t *buffer_ptr;
  int32_t config_id;
  float scale_x;
  float scale_y;
  int8_t auStack_698 [32];
  longlong context_ptr;
  longlong file_data;
  int data_size;
  void *temp_ptr1;
  int8_t *temp_buffer;
  uint buffer_size;
  ulonglong temp_size;
  int32_t temp_flag;
  longlong ***temp_engine;
  longlong **temp_engine2;
  longlong ****engine_ptr_ptr;
  void *temp_ptr2;
  uint64_t temp_val1;
  int32_t temp_val2;
  uint64_t temp_val3;
  void *temp_ptr3;
  longlong temp_offset;
  int temp_index;
  int32_t temp_val4;
  void *temp_ptr4;
  longlong temp_offset2;
  int32_t temp_val5;
  longlong ***param_array [2];
  void *temp_ptr5;
  code *callback_func;
  uint64_t stack_guard;
  longlong **engine_instance;
  void *temp_ptr6;
  int8_t *string_buffer;
  int32_t string_size;
  int8_t temp_string [72];
  void *temp_ptr7;
  int8_t *temp_buffer2;
  int32_t temp_size2;
  int8_t temp_string2 [72];
  void *temp_ptr8;
  int8_t *temp_buffer3;
  int32_t temp_size3;
  int8_t temp_string3 [72];
  void *temp_ptr9;
  int8_t *temp_buffer4;
  int32_t temp_size4;
  int8_t temp_string4 [72];
  void *temp_ptr10;
  int8_t *temp_buffer5;
  int32_t temp_size5;
  int8_t temp_string5 [72];
  void *temp_ptr11;
  int8_t *temp_buffer6;
  int32_t temp_size6;
  int8_t config_buffer [648];
  ulonglong stack_hash;
  
  stack_guard = 0xfffffffffffffffe;
  stack_hash = _DAT_180bf00a8 ^ (ulonglong)auStack_698;
  temp_flag = 0;
  if (*(int *)(_DAT_180c86870 + 0x224) - _DAT_180bf52b0 < 0xfb) {
                    // WARNING: Subroutine does not return
    FUN_1808fc050(stack_hash ^ (ulonglong)auStack_698);
  }
  *(int8_t *)(_DAT_180c86960 + 0x39) = 1;
  engine_obj = (longlong ***)FUN_18062b1e0(_DAT_180c8ed18,200,8,3);
  temp_engine = engine_obj;
  FUN_180049830(engine_obj);
  *engine_obj = (longlong **)&UNK_1809fcb00;
  engine_obj[0x18] = (longlong **)&UNK_180047d20;
  engine_instance = (longlong **)engine_obj;
  (*(code *)(*engine_obj)[5])(engine_obj);
  system_handle = _DAT_180c82868;
  temp_flag = 1;
  temp_engine = &temp_engine2;
  temp_engine2 = (longlong **)engine_obj;
  (*(code *)(*engine_obj)[5])(engine_obj);
  FUN_18005e300(system_handle,&temp_engine2);
  temp_flag = 0;
  (*(code *)(*engine_obj)[7])(engine_obj);
  FUN_180627ae0(&context_ptr,&system_memory_52c0);
  if (data_size == 0) {
    (**(code **)(context_ptr + 0x10))(&context_ptr,&UNK_1809fc7a0);
    success = FUN_180624a00(&context_ptr);
    if (success == '\0') {
      FUN_180624910(&context_ptr);
    }
  }
  success = FUN_180624a00(&context_ptr);
  if (success == '\0') {
    FUN_180624910(&context_ptr);
  }
  temp_ptr6 = &UNK_1809fcc58;
  string_buffer = temp_string;
  temp_string[0] = 0;
  string_size = 0x18;
  strcpy_s(temp_string,0x40,&UNK_1809fc7b8);
  FUN_180097d40(_DAT_180c86960,&temp_ptr6,&context_ptr);
  temp_ptr6 = &UNK_18098bcb0;
  temp_ptr7 = &UNK_1809fcc58;
  temp_buffer2 = temp_string2;
  temp_string2[0] = 0;
  temp_size2 = 0xb;
  strcpy_s(temp_string2,0x40,&UNK_1809fc790);
  FUN_180097d40(_DAT_180c86960,&temp_ptr7,&context_ptr);
  temp_ptr7 = &UNK_18098bcb0;
  temp_ptr8 = &UNK_1809fcc58;
  temp_buffer3 = temp_string3;
  temp_string3[0] = 0;
  temp_size3 = 0x18;
  config_id = strcpy_s(temp_string3,0x40,&UNK_1809fc7b8);
  _DAT_180bf52b8 = (float)FUN_180095480(config_id,&temp_ptr8);
  _DAT_180bf52b8 = 1.0 / _DAT_180bf52b8;
  temp_ptr8 = &UNK_18098bcb0;
  temp_ptr9 = &UNK_1809fcc58;
  temp_buffer4 = temp_string4;
  temp_string4[0] = 0;
  temp_size4 = 0xb;
  config_id = strcpy_s(temp_string4,0x40,&UNK_1809fc790);
  _DAT_180bf52bc = (float)FUN_180095480(config_id,&temp_ptr9);
  _DAT_180bf52bc = 1.0 / _DAT_180bf52bc;
  temp_ptr9 = &UNK_18098bcb0;
  temp_ptr10 = &UNK_1809fcc58;
  temp_buffer5 = temp_string5;
  temp_string5[0] = 0;
  temp_size5 = 0xb;
  config_id = strcpy_s(temp_string5,0x40,&UNK_1809fc790);
  scale_x = (float)FUN_180095720(config_id,&temp_ptr10);
  temp_ptr10 = &UNK_18098bcb0;
  temp_ptr11 = &UNK_1809fcc58;
  temp_buffer6 = config_buffer;
  config_buffer[0] = 0;
  temp_size6 = 0x18;
  config_id = strcpy_s(config_buffer,0x40,&UNK_1809fc7b8);
  scale_y = (float)FUN_180095720(config_id,&temp_ptr11);
  temp_ptr11 = &UNK_18098bcb0;
  timestamp = FUN_180623ce0();
  if (0 < _DAT_180bf52d0) {
    FUN_180629a40(&system_memory_52c0,&temp_ptr3,0,_DAT_180bf52d0 + -1);
    temp_index = temp_index + -1;
    file_offset = (longlong)temp_index;
    index = -1;
    if (-1 < temp_index) {
      do {
        index = temp_index;
        if (*(char *)(temp_offset + file_offset) == '/') break;
        temp_index = temp_index + -1;
        file_offset = file_offset + -1;
        index = -1;
      } while (-1 < file_offset);
    }
    FUN_180629a40(&temp_ptr3,&temp_ptr4,index + 1,0xffffffff);
    index = FUN_180046b80(&system_memory_5240,&temp_ptr4);
    if (index == -1) {
      index = FUN_180046890(&system_memory_5240,&temp_ptr4);
    }
    file_offset = (longlong)index * 0x100;
    temp_engine = (longlong ***)(_DAT_180bf5248 + 0x30 + file_offset);
    engine_ptr_ptr = param_array;
    temp_ptr5 = &UNK_1800adc10;
    callback_func = FUN_1800adba0;
    param_array[0] = (longlong ***)&temp_engine;
    FUN_18005c650(param_array);
    *(double *)(file_offset + 0xa0 + _DAT_180bf5248) = (double)(1.0 / scale_y);
    *(double *)(file_offset + 0xb8 + _DAT_180bf5248) = (double)(1.0 / scale_x);
    *(int *)(file_offset + 0xb0 + _DAT_180bf5248) = (int)(longlong)_DAT_180bf52b8;
    *(int *)(file_offset + 200 + _DAT_180bf5248) = (int)(longlong)_DAT_180bf52bc;
    *(double *)(file_offset + 0x20 + _DAT_180bf5248) = (double)(timestamp >> 0x14);
    temp_ptr4 = &UNK_180a3c3e0;
    if (temp_offset2 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    temp_offset2 = 0;
    temp_val4 = 0;
    temp_ptr4 = &UNK_18098bcb0;
    temp_ptr3 = &UNK_180a3c3e0;
    if (temp_offset != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    temp_offset = 0;
    temp_val5 = 0;
    temp_ptr3 = &UNK_18098bcb0;
  }
  temp_ptr2 = &UNK_180a3c3e0;
  temp_val3 = 0;
  temp_val1 = 0;
  temp_val2 = 0;
  temp_ptr1 = &UNK_180a3c3e0;
  temp_size = 0;
  temp_buffer = (int8_t *)0x0;
  buffer_size = 0;
  FUN_1806277c0(&temp_ptr1,data_size);
  if (data_size != 0) {
                    // WARNING: Subroutine does not return
    memcpy(temp_buffer,file_data,data_size + 1);
  }
  if (file_data != 0) {
    buffer_size = 0;
    if (temp_buffer != (int8_t *)0x0) {
      *temp_buffer = 0;
    }
    temp_size = temp_size & 0xffffffff;
  }
  FUN_18062c1e0(&context_ptr,1);
  index = buffer_size + 0x11;
  FUN_1806277c0(&temp_ptr1,index);
  value_ptr = (int32_t *)(temp_buffer + buffer_size);
  *value_ptr = 0x69676e65;
  value_ptr[1] = 0x635f656e;
  value_ptr[2] = 0x69666e6f;
  value_ptr[3] = 0x78742e67;
  *(int16_t *)(value_ptr + 4) = 0x74;
  buffer_size = index;
  config_ptr = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0x18,8,3);
  buffer_ptr = &system_buffer_ptr;
  if (temp_buffer != (int8_t *)0x0) {
    buffer_ptr = temp_buffer;
  }
  *config_ptr = 0;
  *(int8_t *)(config_ptr + 2) = 0;
  FUN_18062dee0(config_ptr,buffer_ptr,&system_memory_c7ec);
  FUN_1800ae730(_DAT_180c86920,config_ptr);
  if (config_ptr[1] != 0) {
    fclose();
    config_ptr[1] = 0;
    LOCK();
    _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
    UNLOCK();
    if (config_ptr[1] != 0) {
      fclose();
      config_ptr[1] = 0;
      LOCK();
      _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
      UNLOCK();
    }
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(config_ptr);
}



// 函数: 数据结构复制函数
// 功能: 深度复制复杂的数据结构，包含多个字段
uint64_t *
copy_data_structure(uint64_t *dest_ptr,uint64_t *src_ptr,uint64_t param_3,uint64_t param_4)

{
  *dest_ptr = *src_ptr;
  *(int32_t *)(dest_ptr + 1) = *(int32_t *)(src_ptr + 1);
  FUN_180049b30(dest_ptr + 2,src_ptr + 2,param_3,param_4,0xfffffffffffffffe);
  *(int32_t *)(dest_ptr + 0x15) = *(int32_t *)(src_ptr + 0x15);
  *(int32_t *)((longlong)dest_ptr + 0xac) = *(int32_t *)((longlong)src_ptr + 0xac);
  dest_ptr[0x16] = src_ptr[0x16];
  dest_ptr[0x17] = src_ptr[0x17];
  dest_ptr[0x18] = src_ptr[0x18];
  *(int8_t *)(dest_ptr + 0x19) = *(int8_t *)(src_ptr + 0x19);
  *(int8_t *)((longlong)dest_ptr + 0xc9) = *(int8_t *)((longlong)src_ptr + 0xc9);
  *(int8_t *)((longlong)dest_ptr + 0xca) = *(int8_t *)((longlong)src_ptr + 0xca);
  *(int8_t *)((longlong)dest_ptr + 0xcb) = *(int8_t *)((longlong)src_ptr + 0xcb);
  *(int8_t *)((longlong)dest_ptr + 0xcc) = *(int8_t *)((longlong)src_ptr + 0xcc);
  return dest_ptr;
}





// 函数: 指针重置函数
// 功能: 重置特定指针到默认值
void reset_specific_pointer(longlong data_ptr)

{
  *(void **)(data_ptr + 0x10) = &UNK_18098bcb0;
  return;
}





// 函数: 简单指针重置函数
// 功能: 简单地重置指针到默认值
void simple_pointer_reset(uint64_t *ptr)

{
  *ptr = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: 资源注册函数
// 功能: 注册资源到系统中，处理字符串匹配和资源查找
void register_resource(uint64_t system_handle,uint64_t resource_name,longlong resource_data,uint64_t param_4)

{
  byte str_char;
  bool is_match;
  int result;
  uint64_t *resource_ptr;
  uint char_val;
  byte *name_ptr;
  uint64_t *current_ptr;
  uint64_t *next_ptr;
  uint64_t *found_ptr;
  longlong name_offset;
  uint64_t resource_data_copy;
  
  resource_data_copy = system_handle;
  result = FUN_180046b80(&system_memory_5240);
  if (result == -1) {
    result = FUN_180046890(&system_memory_5240,resource_name);
  }
  resource_ptr = (uint64_t *)(_DAT_180bf5248 + 0xd0 + (longlong)result * 0x100);
  current_ptr = resource_ptr;
  if ((uint64_t *)resource_ptr[2] != (uint64_t *)0x0) {
    next_ptr = (uint64_t *)resource_ptr[2];
    do {
      if (*(int *)(resource_data + 0x10) == 0) {
        found_ptr = (uint64_t *)next_ptr[1];
        is_match = false;
      }
      else {
        if (*(int *)(next_ptr + 6) == 0) {
          is_match = true;
        }
        else {
          name_ptr = *(byte **)(resource_data + 8);
          name_offset = next_ptr[5] - (longlong)name_ptr;
          do {
            char_val = (uint)name_ptr[name_offset];
            result = *name_ptr - char_val;
            if (*name_ptr != char_val) break;
            name_ptr = name_ptr + 1;
          } while (char_val != 0);
          is_match = 0 < result;
          if (result < 1) {
            found_ptr = (uint64_t *)next_ptr[1];
            goto LAB_CONTINUE_SEARCH;
          }
        }
        found_ptr = (uint64_t *)*next_ptr;
      }
LAB_CONTINUE_SEARCH:
      if (is_match) {
        next_ptr = current_ptr;
      }
      current_ptr = next_ptr;
      next_ptr = found_ptr;
    } while (found_ptr != (uint64_t *)0x0);
  }
  if (current_ptr != resource_ptr) {
    if (*(int *)(current_ptr + 6) == 0) goto LAB_FOUND_RESOURCE;
    if (*(int *)(resource_data + 0x10) != 0) {
      name_ptr = (byte *)current_ptr[5];
      name_offset = *(longlong *)(resource_data + 8) - (longlong)name_ptr;
      do {
        str_char = *name_ptr;
        char_val = (uint)name_ptr[name_offset];
        if (str_char != char_val) break;
        name_ptr = name_ptr + 1;
      } while (char_val != 0);
      if ((int)(str_char - char_val) < 1) goto LAB_FOUND_RESOURCE;
    }
  }
  current_ptr = (uint64_t *)FUN_180048cc0(resource_ptr,&resource_data_copy);
  current_ptr = (uint64_t *)*current_ptr;
LAB_FOUND_RESOURCE:
  FUN_180627be0(current_ptr + 8,resource_data);
  current_ptr[0xc] = param_4;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



