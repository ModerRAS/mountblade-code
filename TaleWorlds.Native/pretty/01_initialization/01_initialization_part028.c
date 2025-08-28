#include "TaleWorlds.Native.Split.h"

// 01_initialization_part028.c - 初始化模块第28部分
// 包含24个函数，主要处理系统初始化、线程管理、信号量操作等功能

// 函数：初始化系统资源管理器
void initialize_system_resource_manager(undefined8 system_handle, undefined8 *resource_ptr, undefined8 param_3, undefined8 param_4)
{
  if (resource_ptr == (undefined8 *)0x0) {
    return;
  }
  initialize_system_resource_manager(system_handle, *resource_ptr, param_3, param_4, 0xfffffffffffffffe);
  resource_ptr[4] = &SYSTEM_RESOURCE_TABLE;
  if (resource_ptr[5] != 0) {
    // 警告：子程序不返回
    system_error_handler();
  }
  resource_ptr[5] = 0;
  *(undefined4 *)(resource_ptr + 7) = 0;
  resource_ptr[4] = &SYSTEM_STATE_TABLE;
  // 警告：子程序不返回
  system_error_handler(resource_ptr);
}

// 函数：初始化主系统控制器
void initialize_main_system_controller(longlong system_base, undefined8 param_2, undefined8 param_3, undefined8 param_4)
{
  initialize_system_resource_manager(system_base, *(undefined8 *)(system_base + 0x10), param_3, param_4, 0xfffffffffffffffe);
  return;
}

// 函数：初始化辅助系统控制器
void initialize_auxiliary_system_controller(longlong system_base, undefined8 param_2, undefined8 param_3, undefined8 param_4)
{
  initialize_system_resource_manager(system_base, *(undefined8 *)(system_base + 0x10), param_3, param_4, 0xfffffffffffffffe);
  return;
}

// 函数：初始化备用系统控制器
void initialize_backup_system_controller(longlong system_base, undefined8 param_2, undefined8 param_3, undefined8 param_4)
{
  initialize_system_resource_manager(system_base, *(undefined8 *)(system_base + 0x10), param_3, param_4, 0xfffffffffffffffe);
  return;
}

// 函数：系统日志输出函数
void system_log_output(undefined8 format_string, undefined8 param_2, undefined8 param_3, undefined8 param_4)
{
  undefined8 output_stream;
  undefined8 *format_func_ptr;
  undefined8 stack_param_1;
  undefined8 stack_param_2;
  undefined8 stack_param_3;
  
  stack_param_1 = param_2;
  stack_param_2 = param_3;
  stack_param_3 = param_4;
  output_stream = __acrt_iob_func(1);
  format_func_ptr = (undefined8 *)get_stdio_format_function();
  __stdio_common_vfprintf(*format_func_ptr, output_stream, format_string, 0, &stack_param_1);
  return;
}

// 函数：查找系统资源项
undefined8 * find_system_resource_item(longlong system_handle, char *resource_name)
{
  char *name_ptr;
  char current_char;
  undefined8 *resource_entry;
  char *entry_name;
  longlong name_length;
  char *temp_ptr;
  
  if (resource_name == (char *)0x0) {
    return *(undefined8 **)(system_handle + 0x58);
  }
  current_char = *resource_name;
  temp_ptr = resource_name;
  while (current_char != '\0') {
    temp_ptr = temp_ptr + 1;
    current_char = *temp_ptr;
  }
  resource_entry = *(undefined8 **)(system_handle + 0x58);
  do {
    if (resource_entry == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    entry_name = (char *)*resource_entry;
    if (entry_name == (char *)0x0) {
      name_length = 0;
      entry_name = (char *)0x180d48d24;
    }
    else {
      name_length = resource_entry[2];
    }
    if (name_length == (longlong)temp_ptr - (longlong)resource_name) {
      name_ptr = entry_name + name_length;
      if (name_ptr <= entry_name) {
        return resource_entry;
      }
      name_length = (longlong)resource_name - (longlong)entry_name;
      while (*entry_name == entry_name[name_length]) {
        entry_name = entry_name + 1;
        if (name_ptr <= entry_name) {
          return resource_entry;
        }
      }
    }
    resource_entry = (undefined8 *)resource_entry[0xb];
  } while( true );
}

// 函数：查找下一个资源项
undefined8 * find_next_resource_item(undefined8 param_1, undefined8 *resource_ptr)
{
  char *name_ptr1;
  char *name_ptr2;
  longlong length1;
  longlong search_length1;
  longlong search_length2;
  
  if (resource_ptr != (undefined8 *)0x0) {
    do {
      name_ptr2 = (char *)*resource_ptr;
      if (name_ptr2 == (char *)0x0) {
        length1 = 0;
        name_ptr2 = (char *)0x180d48d24;
      }
      else {
        length1 = resource_ptr[2];
      }
      if (length1 == search_length1) {
        name_ptr1 = name_ptr2 + length1;
        if (name_ptr1 <= name_ptr2) {
          return resource_ptr;
        }
        length1 = search_length2 - (longlong)name_ptr2;
        while (*name_ptr2 == name_ptr2[length1]) {
          name_ptr2 = name_ptr2 + 1;
          if (name_ptr1 <= name_ptr2) {
            return resource_ptr;
          }
        }
      }
      resource_ptr = (undefined8 *)resource_ptr[0xb];
    } while (resource_ptr != (undefined8 *)0x0);
  }
  return (undefined8 *)0x0;
}

// 函数：查找特定资源项
undefined8 * find_specific_resource_item(undefined8 param_1, undefined8 *resource_ptr)
{
  char *name_ptr1;
  char *name_ptr2;
  char *base_name;
  longlong length1;
  longlong search_length1;
  longlong search_length2;
  
  while( true ) {
    do {
      resource_ptr = (undefined8 *)resource_ptr[0xb];
      if (resource_ptr == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      if ((char *)*resource_ptr == (char *)0x0) {
        length1 = 0;
        name_ptr2 = base_name;
      }
      else {
        length1 = resource_ptr[2];
        name_ptr2 = (char *)*resource_ptr;
      }
    } while (length1 != search_length1);
    name_ptr1 = name_ptr2 + length1;
    if (name_ptr1 <= name_ptr2) break;
    length1 = search_length2 - (longlong)name_ptr2;
    while (*name_ptr2 == name_ptr2[length1]) {
      name_ptr2 = name_ptr2 + 1;
      if (name_ptr1 <= name_ptr2) {
        return resource_ptr;
      }
    }
  }
  return resource_ptr;
}

// 函数：获取系统资源表
undefined8 get_system_resource_table(longlong system_handle)
{
  return *(undefined8 *)(system_handle + 0x58);
}

// 函数：查找缓存资源项
undefined8 * find_cached_resource_item(longlong system_handle, char *resource_name, longlong name_length)
{
  char *name_ptr;
  char current_char;
  undefined8 *cache_entry;
  char *entry_name;
  longlong entry_length;
  
  if (resource_name == (char *)0x0) {
    return *(undefined8 **)(system_handle + 0x30);
  }
  if (name_length == 0) {
    current_char = *resource_name;
    entry_name = resource_name;
    while (current_char != '\0') {
      entry_name = entry_name + 1;
      current_char = *entry_name;
    }
    name_length = (longlong)entry_name - (longlong)resource_name;
  }
  cache_entry = *(undefined8 **)(system_handle + 0x30);
  do {
    if (cache_entry == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    entry_name = (char *)*cache_entry;
    if (entry_name == (char *)0x0) {
      entry_length = 0;
      entry_name = (char *)0x180d48d24;
    }
    else {
      entry_length = cache_entry[2];
    }
    if (entry_length == name_length) {
      name_ptr = entry_name + entry_length;
      if (name_ptr <= entry_name) {
        return cache_entry;
      }
      entry_length = (longlong)resource_name - (longlong)entry_name;
      while (*entry_name == entry_name[entry_length]) {
        entry_name = entry_name + 1;
        if (name_ptr <= entry_name) {
          return cache_entry;
        }
      }
    }
    cache_entry = (undefined8 *)cache_entry[0xb];
  } while( true );
}

// 函数：查找下一个缓存项
undefined8 * find_next_cached_item(undefined8 param_1, undefined8 *cache_ptr, longlong search_length)
{
  char *name_ptr1;
  char *name_ptr2;
  longlong entry_length;
  longlong target_offset;
  
  if (cache_ptr != (undefined8 *)0x0) {
    do {
      name_ptr2 = (char *)*cache_ptr;
      if (name_ptr2 == (char *)0x0) {
        entry_length = 0;
        name_ptr2 = (char *)0x180d48d24;
      }
      else {
        entry_length = cache_ptr[2];
      }
      if (entry_length == search_length) {
        name_ptr1 = name_ptr2 + entry_length;
        if (name_ptr1 <= name_ptr2) {
          return cache_ptr;
        }
        entry_length = target_offset - (longlong)name_ptr2;
        while (*name_ptr2 == name_ptr2[entry_length]) {
          name_ptr2 = name_ptr2 + 1;
          if (name_ptr1 <= name_ptr2) {
            return cache_ptr;
          }
        }
      }
      cache_ptr = (undefined8 *)cache_ptr[0xb];
    } while (cache_ptr != (undefined8 *)0x0);
  }
  return (undefined8 *)0x0;
}

// 函数：查找特定缓存项
undefined8 * find_specific_cached_item(undefined8 param_1, undefined8 *cache_ptr, longlong search_length)
{
  char *name_ptr1;
  char *name_ptr2;
  char *base_name;
  longlong entry_length;
  longlong target_offset;
  
  while( true ) {
    do {
      cache_ptr = (undefined8 *)cache_ptr[0xb];
      if (cache_ptr == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      if ((char *)*cache_ptr == (char *)0x0) {
        entry_length = 0;
        name_ptr2 = base_name;
      }
      else {
        entry_length = cache_ptr[2];
        name_ptr2 = (char *)*cache_ptr;
      }
    } while (entry_length != search_length);
    name_ptr1 = name_ptr2 + entry_length;
    if (name_ptr1 <= name_ptr2) break;
    entry_length = target_offset - (longlong)name_ptr2;
    while (*name_ptr2 == name_ptr2[entry_length]) {
      name_ptr2 = name_ptr2 + 1;
      if (name_ptr1 <= name_ptr2) {
        return cache_ptr;
      }
    }
  }
  return cache_ptr;
}

// 函数：获取缓存资源表
undefined8 get_cached_resource_table(longlong system_handle)
{
  return *(undefined8 *)(system_handle + 0x30);
}

// 函数：执行系统清理序列
void execute_system_cleanup_sequence(longlong *cleanup_array, undefined8 param_2, undefined8 param_3, undefined8 param_4)
{
  undefined8 *array_start;
  undefined8 *array_end;
  undefined8 cleanup_flag;
  
  cleanup_flag = 0xfffffffffffffffe;
  array_start = (undefined8 *)cleanup_array[1];
  for (array_end = (undefined8 *)*cleanup_array; array_end != array_start; array_end = array_end + 4) {
    (**(code **)*array_end)(array_end, 0, param_3, param_4, cleanup_flag);
  }
  if (*cleanup_array == 0) {
    return;
  }
  // 警告：子程序不返回
  system_error_handler();
}

// 函数：执行资源清理序列
void execute_resource_cleanup_sequence(longlong *resource_array, undefined8 param_2, undefined8 param_3, undefined8 param_4)
{
  undefined8 *array_start;
  undefined8 *array_end;
  undefined8 cleanup_flag;
  
  cleanup_flag = 0xfffffffffffffffe;
  array_start = (undefined8 *)resource_array[1];
  for (array_end = (undefined8 *)*resource_array; array_end != array_start; array_end = array_end + 4) {
    (**(code **)*array_end)(array_end, 0, param_3, param_4, cleanup_flag);
  }
  if (*resource_array == 0) {
    return;
  }
  // 警告：子程序不返回
  system_error_handler();
}

// 函数：初始化内存管理器
undefined8 * initialize_memory_manager(undefined8 *manager_ptr, ulonglong init_flags, undefined8 param_3, undefined8 param_4)
{
  undefined8 cleanup_flag;
  
  cleanup_flag = 0xfffffffffffffffe;
  *manager_ptr = &MEMORY_MANAGER_TABLE;
  initialize_memory_allocator();
  if ((init_flags & 1) != 0) {
    free(manager_ptr, 0xc0, param_3, param_4, cleanup_flag);
  }
  return manager_ptr;
}

// 函数：初始化线程管理器
undefined1 * initialize_thread_manager(undefined1 *thread_manager)
{
  undefined8 semaphore_handle;
  
  *(undefined8 *)(thread_manager + 8) = 0;
  *(undefined8 *)(thread_manager + 0x10) = 0;
  *(undefined8 *)(thread_manager + 0x18) = 0;
  *(undefined4 *)(thread_manager + 0x20) = 3;
  *(undefined8 *)(thread_manager + 0x28) = 0;
  *(undefined8 *)(thread_manager + 0x30) = 0;
  *(undefined8 *)(thread_manager + 0x38) = 0;
  *(undefined4 *)(thread_manager + 0x40) = 3;
  *(undefined8 *)(thread_manager + 0x48) = 0;
  *(undefined8 *)(thread_manager + 0x50) = 0;
  *(undefined8 *)(thread_manager + 0x58) = 0;
  *(undefined4 *)(thread_manager + 0x60) = 3;
  semaphore_handle = CreateSemaphoreW(0, 0, 0x7fffffff, 0, 0xfffffffffffffffe);
  *(undefined8 *)(thread_manager + 0x68) = semaphore_handle;
  semaphore_handle = CreateSemaphoreW(0, 0, 0x7fffffff, 0);
  *(undefined8 *)(thread_manager + 0x70) = semaphore_handle;
  initialize_thread_pool(thread_manager + 0x78);
  initialize_thread_pool(thread_manager + 0x2e0);
  initialize_thread_pool(thread_manager + 0x548);
  *(undefined4 *)(thread_manager + 0x7b0) = 0;
  *(undefined4 *)(thread_manager + 0x7b4) = 0x1000;
  *thread_manager = 0;
  return thread_manager;
}

// 函数：关闭系统句柄
void close_system_handle(undefined8 *handle_ptr)
{
  CloseHandle(*handle_ptr);
  return;
}

// 函数：系统资源释放函数
void release_system_resources(longlong system_handle, undefined8 param_2, undefined8 param_3, undefined8 param_4)
{
  longlong *resource_array1;
  longlong *resource_array2;
  longlong *resource_array3;
  longlong *resource_item;
  longlong system_state;
  int counter;
  longlong index;
  
  system_state = SYSTEM_STATE_VAR;
  if (*(code **)(SYSTEM_STATE_VAR + 0x20) != (code *)0x0) {
    (**(code **)(SYSTEM_STATE_VAR + 0x20))(SYSTEM_STATE_VAR + 0x10, 0, 0, param_4, 0xfffffffffffffffe);
  }
  *(undefined8 *)(system_state + 0x20) = 0;
  *(code **)(system_state + 0x28) = _guard_check_icall;
  counter = 0;
  resource_array1 = (longlong *)(system_handle + 8);
  if (*(longlong *)(system_handle + 0x10) - *resource_array1 >> 3 != 0) {
    system_state = 0;
    do {
      release_memory_block(*(undefined8 *)(*resource_array1 + system_state));
      counter = counter + 1;
      system_state = system_state + 8;
    } while ((ulonglong)(longlong)counter < (ulonglong)(*(longlong)(system_handle + 0x10) - *resource_array1 >> 3));
  }
  counter = 0;
  resource_array2 = (longlong *)(system_handle + 0x28);
  if (*(longlong *)(system_handle + 0x30) - *resource_array2 >> 3 != 0) {
    system_state = 0;
    do {
      release_memory_block(*(undefined8 *)(*resource_array2 + system_state));
      counter = counter + 1;
      system_state = system_state + 8;
    } while ((ulonglong)(longlong)counter < (ulonglong)(*(longlong)(system_handle + 0x30) - *resource_array2 >> 3));
  }
  counter = 0;
  resource_array3 = (longlong *)(system_handle + 0x48);
  if (*(longlong *)(system_handle + 0x50) - *resource_array3 >> 3 != 0) {
    system_state = 0;
    do {
      release_memory_block(*(undefined8 *)(*resource_array3 + system_state));
      counter = counter + 1;
      system_state = system_state + 8;
    } while ((ulonglong)(longlong)counter < (ulonglong)(*(longlong)(system_handle + 0x50) - *resource_array3 >> 3));
  }
  counter = 0;
  system_state = *resource_array1;
  if (*(longlong *)(system_handle + 0x10) - system_state >> 3 != 0) {
    index = 0;
    do {
      resource_item = *(longlong **)(index + system_state);
      if (resource_item != (longlong *)0x0) {
        system_state = __RTCastToVoid(resource_item);
        (**(code **)(*resource_item + 0x28))(resource_item, 0);
        if (system_state != 0) {
          // 警告：子程序不返回
          system_error_handler(system_state);
        }
      }
      *(undefined8 *)(index + *resource_array1) = 0;
      counter = counter + 1;
      index = index + 8;
      system_state = *resource_array1;
    } while ((ulonglong)(longlong)counter < (ulonglong)(*(longlong)(system_handle + 0x10) - system_state >> 3));
  }
  counter = 0;
  system_state = *resource_array2;
  if (*(longlong)(system_handle + 0x30) - system_state >> 3 != 0) {
    index = 0;
    do {
      resource_item = *(longlong **)(system_state + index);
      if (resource_item != (longlong *)0x0) {
        system_state = __RTCastToVoid(resource_item);
        (**(code **)(*resource_item + 0x28))(resource_item, 0);
        if (system_state != 0) {
          // 警告：子程序不返回
          system_error_handler(system_state);
        }
      }
      *(undefined8 *)(index + *resource_array2) = 0;
      counter = counter + 1;
      index = index + 8;
      system_state = *resource_array2;
    } while ((ulonglong)(longlong)counter < (ulonglong)(*(longlong)(system_handle + 0x30) - system_state >> 3));
  }
  counter = 0;
  system_state = *resource_array3;
  if (*(longlong)(system_handle + 0x50) - system_state >> 3 != 0) {
    index = 0;
    do {
      resource_item = *(longlong **)(system_state + index);
      if (resource_item != (longlong *)0x0) {
        system_state = __RTCastToVoid(resource_item);
        (**(code **)(*resource_item + 0x28))(resource_item, 0);
        if (system_state != 0) {
          // 警告：子程序不返回
          system_error_handler(system_state);
        }
      }
      *(undefined8 *)(index + *resource_array3) = 0;
      counter = counter + 1;
      index = index + 8;
      system_state = *resource_array3;
    } while ((ulonglong)(longlong)counter < (ulonglong)(*(longlong)(system_handle + 0x50) - system_state >> 3));
  }
  cleanup_thread_pool(system_handle + 0x548);
  cleanup_thread_pool(system_handle + 0x2e0);
  cleanup_thread_pool(system_handle + 0x78);
  CloseHandle(*(undefined8 *)(system_handle + 0x70));
  CloseHandle(*(undefined8 *)(system_handle + 0x68));
  if (*resource_array3 != 0) {
    // 警告：子程序不返回
    system_error_handler();
  }
  if (*resource_array2 != 0) {
    // 警告：子程序不返回
    system_error_handler();
  }
  if (*resource_array1 != 0) {
    // 警告：子程序不返回
    system_error_handler();
  }
  return;
}

// 函数：暂停系统线程
void pause_system_threads(longlong system_handle)
{
  longlong thread_handle;
  longlong current_thread;
  int thread_count;
  longlong index;
  
  current_thread = GetCurrentThread();
  thread_count = (int)(*(longlong *)(system_handle + 0x10) - *(longlong *)(system_handle + 8) >> 3);
  if (0 < thread_count) {
    index = 0;
    do {
      thread_handle = *(longlong *)(*(longlong *)(*(longlong *)(system_handle + 8) + index * 8) + 0x40);
      if ((thread_handle != 0) && (thread_handle != current_thread)) {
        SuspendThread();
      }
      index = index + 1;
    } while (index < thread_count);
  }
  return;
}

// 函数：暂停所有线程
void pause_all_threads(void)
{
  longlong thread_handle;
  longlong index;
  longlong base_system;
  longlong thread_array;
  longlong thread_count;
  
  index = 0;
  do {
    thread_handle = *(longlong *)(*(longlong *)(*(longlong)(base_system + 8) + index * 8) + 0x40);
    if ((thread_handle != 0) && (thread_handle != base_system)) {
      SuspendThread();
    }
    index = index + 1;
  } while (index < thread_count);
  return;
}

// 函数：空操作函数1
void no_operation_1(void)
{
  return;
}

// 函数：恢复系统线程
void resume_system_threads(longlong system_handle)
{
  longlong thread_handle;
  longlong current_thread;
  int thread_count;
  longlong index;
  
  current_thread = GetCurrentThread();
  thread_count = (int)(*(longlong)(system_handle + 0x10) - *(longlong)(system_handle + 8) >> 3);
  if (0 < thread_count) {
    index = 0;
    do {
      thread_handle = *(longlong *)(*(longlong *)(*(longlong)(system_handle + 8) + index * 8) + 0x40);
      if ((thread_handle != 0) && (thread_handle != current_thread)) {
        ResumeThread();
      }
      index = index + 1;
    } while (index < thread_count);
  }
  return;
}

// 函数：恢复所有线程
void resume_all_threads(void)
{
  longlong thread_handle;
  longlong index;
  longlong base_system;
  longlong thread_array;
  longlong thread_count;
  
  index = 0;
  do {
    thread_handle = *(longlong *)(*(longlong *)(*(longlong)(base_system + 8) + index * 8) + 0x40);
    if ((thread_handle != 0) && (thread_handle != base_system)) {
      ResumeThread();
    }
    index = index + 1;
  } while (index < thread_count);
  return;
}

// 函数：空操作函数2
void no_operation_2(void)
{
  return;
}

// 函数：初始化系统线程池
void initialize_system_thread_pool(void)
{
  longlong *thread_array;
  int pool_size;
  undefined8 allocation_flags;
  undefined8 *thread_entry;
  longlong system_handle;
  longlong thread_limit;
  ulonglong loop_counter;
  ulonglong entry_counter;
  longlong index;
  longlong entry_index;
  int worker_count;
  uint thread_id;
  ulonglong array_index;
  undefined **entry_ptr;
  undefined1 thread_name_buffer[32];
  longlong stack_var1;
  longlong stack_var2;
  longlong stack_var3;
  longlong stack_offset;
  undefined **thread_stack_ptr;
  undefined8 stack_param1;
  undefined *thread_func_ptr;
  undefined1 *thread_name_ptr;
  uint stack_param2;
  undefined1 name_buffer[16];
  undefined *stack_func_ptr;
  undefined1 *stack_name_ptr;
  undefined4 stack_param3;
  undefined1 stack_buffer[24];
  undefined *thread_func_array[19];
  int stack_counter;
  undefined8 stack_param4;
  char thread_info_buffer[16];
  ulonglong stack_security;
  longlong temp_var;
  
  system_handle = SYSTEM_HANDLE_VAR;
  stack_param1 = 0xfffffffffffffffe;
  stack_security = SYSTEM_SECURITY_COOKIE ^ (ulonglong)thread_name_buffer;
  stack_offset = SYSTEM_HANDLE_VAR;
  initialize_thread_context(thread_func_array);
  worker_count = stack_counter + -1;
  if (*(int *)(system_handle + 0x7b4) < stack_counter + -1) {
    worker_count = *(int *)(system_handle + 0x7b4);
  }
  pool_size = 3;
  if (3 < worker_count) {
    pool_size = worker_count;
  }
  entry_ptr = (undefined **)(system_handle + 8);
  thread_limit = (longlong)pool_size;
  thread_stack_ptr = entry_ptr;
  allocate_thread_pool(entry_ptr, thread_limit);
  allocation_flags = allocate_system_memory(SYSTEM_STATE_VAR, 0x208, 8, 3);
  entry_counter = 0;
  thread_func_ptr = &THREAD_ENTRY_TABLE;
  thread_name_ptr = name_buffer;
  name_buffer[0] = 0;
  stack_param2 = 4;
  strcpy_s(name_buffer, 0x10, &THREAD_NAME_PREFIX);
  stack_var1 = system_handle + 0x78;
  stack_var2 = system_handle + 0x548;
  stack_var3 = system_handle + 0x68;
  allocation_flags = create_thread_entry(allocation_flags, &thread_func_ptr, 0, 0);
  *(undefined8 *)*entry_ptr = allocation_flags;
  thread_func_ptr = &SYSTEM_CALLBACK_TABLE;
  thread_entry = (undefined8 *)allocate_system_memory(SYSTEM_STATE_VAR, 0x208, 8, 3);
  stack_func_ptr = &THREAD_ENTRY_TABLE;
  stack_name_ptr = stack_buffer;
  stack_buffer[0] = 0;
  stack_param3 = 6;
  stack_param4 = thread_entry;
  strcpy_s(stack_buffer, 0x10, &THREAD_NAME_PREFIX2);
  stack_var1 = system_handle + 0x78;
  stack_var2 = system_handle + 0x548;
  stack_var3 = system_handle + 0x68;
  create_thread_entry(thread_entry, &stack_func_ptr, 1);
  *thread_entry = &THREAD_FUNCTION_TABLE;
  *(undefined8 **)((longlong)*entry_ptr + 8) = thread_entry;
  stack_func_ptr = &SYSTEM_CALLBACK_TABLE;
  worker_count = 2;
  *(undefined4 *)(stack_offset + 0x7b0) = 2;
  if (2 < thread_limit) {
    system_handle = 2;
    do {
      thread_func_ptr = &THREAD_ENTRY_TABLE;
      thread_name_ptr = name_buffer;
      name_buffer[0] = 0;
      stack_param2 = 7;
      strcpy_s(name_buffer, 0x10, &THREAD_NAME_PREFIX3);
      generate_thread_name(&stack_param4, &THREAD_NAME_TEMPLATE, worker_count + -1);
      temp_var = -1;
      do {
        index = temp_var + 1;
        entry_index = temp_var + 1;
        temp_var = index;
      } while (*(char *)((longlong)&stack_param4 + entry_index) != '\0');
      pool_size = (int)temp_var;
      if ((0 < pool_size) && (stack_param2 + pool_size < 0xf)) {
        // 警告：子程序不返回
        memcpy(thread_name_ptr + stack_param2, &stack_param4, (longlong)(pool_size + 1));
      }
      allocation_flags = allocate_system_memory(SYSTEM_STATE_VAR, 0x208, 8, 3);
      stack_var3 = stack_offset + 0x68;
      stack_var2 = stack_offset + 0x548;
      stack_var1 = stack_offset + 0x78;
      allocation_flags = create_thread_entry(allocation_flags, &thread_func_ptr, 2, worker_count);
      *(undefined8 *)((longlong)*entry_ptr + system_handle * 8) = allocation_flags;
      thread_func_ptr = &SYSTEM_CALLBACK_TABLE;
      worker_count = worker_count + 1;
      system_handle = system_handle + 1;
    } while (system_handle < thread_limit);
  }
  system_handle = stack_offset;
  pool_size = (int)(stack_counter + (stack_counter >> 0x1f & 3U)) >> 2;
  worker_count = 2;
  if ((1 < pool_size) && (worker_count = pool_size, 4 < pool_size)) {
    worker_count = 4;
  }
  thread_array = (longlong *)(stack_offset + 0x28);
  thread_limit = (longlong)worker_count;
  allocate_thread_pool(thread_array, thread_limit);
  if (0 < thread_limit) {
    array_index = entry_counter;
    entry_counter = entry_counter;
    do {
      thread_func_ptr = &THREAD_ENTRY_TABLE;
      thread_name_ptr = name_buffer;
      name_buffer[0] = 0;
      stack_param2 = 10;
      strcpy_s(name_buffer, 0x10, &THREAD_NAME_PREFIX4);
      generate_thread_name(thread_info_buffer, &THREAD_NAME_TEMPLATE, array_index);
      temp_var = -1;
      do {
        entry_index = temp_var;
        temp_var = entry_index + 1;
      } while (thread_info_buffer[entry_index + 1] != '\0');
      worker_count = (int)(entry_index + 1);
      if ((0 < worker_count) && (stack_param2 + worker_count < 0xf)) {
        // 警告：子程序不返回
        memcpy(thread_name_ptr + stack_param2, thread_info_buffer, (longlong)((int)entry_index + 2));
      }
      thread_entry = (undefined8 *)allocate_system_memory(SYSTEM_STATE_VAR, 0x208, 8, 3);
      stack_var1 = system_handle + 0x70;
      stack_param4 = thread_entry;
      create_thread_entry(thread_entry, &thread_func_ptr, 4, stack_offset + 0x2e0);
      *thread_entry = &THREAD_WORKER_TABLE;
      *(undefined8 **)(*thread_array + entry_counter * 8) = thread_entry;
      thread_func_ptr = &SYSTEM_CALLBACK_TABLE;
      array_index = (ulonglong)((int)array_index + 1);
      entry_counter = entry_counter + 1;
      entry_ptr = thread_stack_ptr;
    } while ((longlong)entry_counter < thread_limit);
  }
  array_index = entry_counter;
  entry_counter = entry_counter;
  if (((longlong *)entry_ptr)[1] - (longlong)*entry_ptr >> 3 != 0) {
    do {
      release_memory_block(*(undefined8 *)((longlong)*entry_ptr + array_index));
      thread_id = (int)entry_counter + 1;
      array_index = array_index + 8;
      entry_counter = (ulonglong)thread_id;
    } while ((ulonglong)(longlong)(int)thread_id < (ulonglong)(((longlong *)entry_ptr)[1] - (longlong)*entry_ptr >> 3));
  }
  array_index = entry_counter;
  if (*(longlong *)(system_handle + 0x30) - *thread_array >> 3 != 0) {
    do {
      release_memory_block(*(undefined8 *)(*thread_array + entry_counter));
      thread_id = (int)array_index + 1;
      entry_counter = entry_counter + 8;
      array_index = (ulonglong)thread_id;
    } while ((ulonglong)(longlong)(int)thread_id < (ulonglong)(*(longlong)(system_handle + 0x30) - *thread_array >> 3));
  }
  thread_stack_ptr = thread_func_array;
  thread_func_array[0] = &SYSTEM_CALLBACK_TABLE;
  // 警告：子程序不返回
  execute_thread_initialization(stack_security ^ (ulonglong)thread_name_buffer);
}

// 函数：处理线程池任务
void process_thread_pool_task(longlong pool_handle, longlong *task_ptr, undefined8 param_3, undefined8 param_4)
{
  uint thread_id;
  int retry_count;
  longlong worker_handle;
  longlong task_queue;
  undefined8 task_flags;
  
  task_flags = 0xfffffffffffffffe;
  (**(code **)(*(longlong *)*task_ptr + 0x78))();
  thread_id = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8) + 0xc);
  if (thread_id == 0xffffffff) {
    worker_handle = find_available_worker(pool_handle + 0x78);
    if (worker_handle != 0) {
      assign_task_to_worker(worker_handle, task_ptr);
    }
  }
  else {
    worker_handle = *(longlong *)(*(longlong *)(*(longlong)(pool_handle + 8) + (ulonglong)thread_id * 8) + 0x70);
    task_queue = worker_handle + -8;
    if (worker_handle == 0) {
      task_queue = 0;
    }
    execute_task_in_queue(task_queue, task_ptr, (ulonglong)__tls_index, param_4, task_flags);
  }
  do {
    retry_count = ReleaseSemaphore(*(undefined8 *)(pool_handle + 0x68), 1);
  } while (retry_count == 0);
  if ((longlong *)*task_ptr != (longlong *)0x0) {
    (**(code **)(*(longlong *)*task_ptr + 0x38))();
  }
  return;
}

// 函数：处理高优先级任务
void process_high_priority_task(longlong pool_handle, longlong *task_ptr, undefined8 param_3, undefined8 param_4)
{
  int retry_count;
  longlong worker_handle;
  undefined8 task_flags;
  
  task_flags = 0xfffffffffffffffe;
  (**(code **)(*(longlong *)*task_ptr + 0x78))();
  worker_handle = find_available_worker(pool_handle + 0x548);
  if (worker_handle != 0) {
    assign_task_to_worker(worker_handle, task_ptr);
  }
  do {
    retry_count = ReleaseSemaphore(*(undefined8 *)(pool_handle + 0x68), 1, 0, param_4, task_flags);
  } while (retry_count == 0);
  if ((longlong *)*task_ptr != (longlong *)0x0) {
    (**(code **)(*(longlong *)*task_ptr + 0x38))();
  }
  return;
}

// 函数：释放信号量资源
void release_semaphore_resources(longlong pool_handle, undefined8 task_handle, int release_count)
{
  uint thread_id;
  int retry_count;
  longlong worker_handle;
  longlong task_queue;
  
  thread_id = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8) + 0xc);
  if (thread_id == 0xffffffff) {
    worker_handle = find_available_worker(pool_handle + 0x78);
    if (worker_handle != 0) {
      assign_task_to_worker_with_count(worker_handle, task_handle, (longlong)release_count);
    }
  }
  else {
    worker_handle = *(longlong *)(*(longlong *)(*(longlong)(pool_handle + 8) + (ulonglong)thread_id * 8) + 0x70);
    task_queue = worker_handle + -8;
    if (worker_handle == 0) {
      task_queue = 0;
    }
    execute_task_with_count(task_queue, task_handle, (longlong)release_count);
  }
  do {
    retry_count = ReleaseSemaphore(*(undefined8 *)(pool_handle + 0x68), release_count, 0);
  } while (retry_count == 0);
  return;
}

// 函数：处理主线程任务
void process_main_thread_task(longlong pool_handle, longlong *task_ptr, undefined8 param_3, undefined8 param_4)
{
  undefined8 *main_thread;
  code *thread_func;
  longlong *stack_task_ptr;
  longlong *task_ptr_copy;
  longlong **task_ref_ptr;
  undefined8 task_flags;
  
  task_flags = 0xfffffffffffffffe;
  main_thread = (undefined8 *)**(undefined8 **)(pool_handle + 8);
  thread_func = *(code **)*main_thread;
  task_ref_ptr = &stack_task_ptr;
  stack_task_ptr = (longlong *)*task_ptr;
  task_ptr_copy = task_ptr;
  if (stack_task_ptr != (longlong *)0x0) {
    (**(code **)(*stack_task_ptr + 0x28))();
  }
  (*thread_func)(main_thread, &stack_task_ptr, param_3, param_4, task_flags);
  if ((longlong *)*task_ptr != (longlong *)0x0) {
    (**(code **)(*(longlong *)*task_ptr + 0x38))();
  }
  return;
}

// 函数：处理辅助线程任务
void process_auxiliary_thread_task(longlong pool_handle, longlong *task_ptr, undefined8 param_3, undefined8 param_4)
{
  undefined8 *aux_thread;
  code *thread_func;
  longlong *stack_task_ptr;
  longlong *task_ptr_copy;
  longlong **task_ref_ptr;
  undefined8 task_flags;
  
  task_flags = 0xfffffffffffffffe;
  aux_thread = *(undefined8 **)(*(longlong *)(pool_handle + 8) + 8);
  thread_func = *(code **)*aux_thread;
  task_ref_ptr = &stack_task_ptr;
  stack_task_ptr = (longlong *)*task_ptr;
  task_ptr_copy = task_ptr;
  if (stack_task_ptr != (longlong *)0x0) {
    (**(code **)(*stack_task_ptr + 0x28))();
  }
  (*thread_func)(aux_thread, &stack_task_ptr, param_3, param_4, task_flags);
  if ((longlong *)*task_ptr != (longlong *)0x0) {
    (**(code **)(*(longlong *)*task_ptr + 0x38))();
  }
  return;
}

// 函数：处理备用线程任务
void process_backup_thread_task(longlong pool_handle, longlong *task_ptr, undefined8 param_3, undefined8 param_4)
{
  undefined8 *backup_thread;
  code *thread_func;
  longlong *stack_task_ptr;
  longlong *task_ptr_copy;
  longlong **task_ref_ptr;
  undefined8 task_flags;
  
  task_flags = 0xfffffffffffffffe;
  backup_thread = *(undefined8 **)(*(longlong *)(pool_handle + 8) + 0x10);
  thread_func = *(code **)*backup_thread;
  task_ref_ptr = &stack_task_ptr;
  stack_task_ptr = (longlong *)*task_ptr;
  task_ptr_copy = task_ptr;
  if (stack_task_ptr != (longlong *)0x0) {
    (**(code **)(*stack_task_ptr + 0x28))();
  }
  (*thread_func)(backup_thread, &stack_task_ptr, param_3, param_4, task_flags);
  if ((longlong *)*task_ptr != (longlong *)0x0) {
    (**(code **)(*(longlong *)*task_ptr + 0x38))();
  }
  return;
}

// 函数：处理工作线程任务
void process_worker_thread_task(longlong pool_handle, longlong *task_ptr, undefined8 param_3, undefined8 param_4)
{
  int retry_count;
  longlong worker_handle;
  undefined8 task_flags;
  
  task_flags = 0xfffffffffffffffe;
  (**(code **)(*(longlong *)*task_ptr + 0x78))();
  worker_handle = find_available_worker(pool_handle + 0x2e0);
  if (worker_handle != 0) {
    assign_task_to_worker(worker_handle, task_ptr);
  }
  do {
    retry_count = ReleaseSemaphore(*(undefined8 *)(pool_handle + 0x70), 1, 0, param_4, task_flags);
  } while (retry_count == 0);
  if ((longlong *)*task_ptr != (longlong *)0x0) {
    (**(code **)(*(longlong *)*task_ptr + 0x38))();
  }
  return;
}

// 函数：创建工作线程项
undefined8 * create_worker_thread_item(longlong pool_handle, undefined8 task_data)
{
  undefined8 *thread_item;
  undefined8 *stack_item_ptr;
  
  thread_item = (undefined8 *)allocate_system_memory(SYSTEM_STATE_VAR, 0x208, 8, 3);
  stack_item_ptr = thread_item;
  create_thread_entry(thread_item, task_data, 3, pool_handle + 0x2e0, pool_handle + 0x70);
  *thread_item = &WORKER_THREAD_TABLE;
  stack_item_ptr = thread_item;
  release_memory_block(thread_item);
  add_worker_to_pool(pool_handle + 0x48, &stack_item_ptr);
  return thread_item;
}

// 函数：移除工作线程项
void remove_worker_thread_item(longlong pool_handle, longlong *thread_ptr)
{
  longlong *worker_array;
  ulonglong array_index;
  longlong worker_index;
  longlong *current_worker;
  int loop_counter;
  ulonglong total_workers;
  
  loop_counter = 0;
  worker_array = *(longlong **)(pool_handle + 0x48);
  total_workers = *(longlong *)(pool_handle + 0x50) - (longlong)worker_array >> 3;
  current_worker = worker_array;
  if (total_workers != 0) {
    do {
      if ((longlong *)*current_worker == thread_ptr) {
        release_memory_block(worker_array[loop_counter]);
        array_index = *(ulonglong *)(pool_handle + 0x50);
        worker_index = *(longlong *)(pool_handle + 0x48) + (longlong)loop_counter * 8;
        total_workers = worker_index + 8;
        if (total_workers < array_index) {
          // 警告：子程序不返回
          memmove(worker_index, total_workers, array_index - total_workers);
        }
        *(ulonglong *)(pool_handle + 0x50) = array_index - 8;
        break;
      }
      loop_counter = loop_counter + 1;
      current_worker = current_worker + 1;
    } while ((ulonglong)(longlong)loop_counter < total_workers);
  }
  if (thread_ptr != (longlong *)0x0) {
    worker_index = __RTCastToVoid(thread_ptr);
    (**(code **)(*thread_ptr + 0x28))(thread_ptr, 0);
    if (worker_index != 0) {
      // 警告：子程序不返回
      system_error_handler(worker_index);
    }
  }
  return;
}