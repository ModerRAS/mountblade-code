#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part012.c - 核心引擎模块第12部分
// 包含22个函数，主要涉及内存管理、字符串处理、线程同步等功能

// 函数：销毁互斥锁
void destroy_mutex_simple(void)

{
  _Mtx_destroy_in_situ();
  return;
}

// 函数：销毁互斥锁和条件变量
void destroy_mutex_and_condition(undefined8 condition_handle)

{
  _Mtx_destroy_in_situ();
  _Cnd_destroy_in_situ(condition_handle);
  return;
}

// 函数：初始化线程同步对象
undefined8 *
initialize_thread_sync_objects(undefined8 *sync_object, undefined8 param_2, undefined8 param_3, undefined8 param_4)

{
  undefined8 init_value;
  
  init_value = 0xfffffffffffffffe;
  *sync_object = &THREAD_SYNC_TABLE_1;
  *sync_object = &THREAD_SYNC_TABLE_2;
  *(undefined4 *)(sync_object + 1) = 0;
  *sync_object = &MUTEX_TABLE;
  LOCK();
  *(undefined1 *)(sync_object + 2) = 0;
  UNLOCK();
  sync_object[3] = 0xffffffffffffffff;
  *sync_object = &CONDITION_VARIABLE_TABLE;
  _Cnd_init_in_situ(sync_object + 4);
  _Mtx_init_in_situ(sync_object + 0xd, 2, param_3, param_4, init_value);
  *(undefined1 *)(sync_object + 0x17) = 0;
  return sync_object;
}

// 函数：释放线程同步对象
undefined8 *
release_thread_sync_objects(undefined8 *sync_object, ulonglong flags, undefined8 param_3, undefined8 param_4)

{
  *sync_object = &EMPTY_OBJECT_TABLE;
  if ((flags & 1) != 0) {
    free(sync_object, 0x98, param_3, param_4, 0xfffffffffffffffe);
  }
  return sync_object;
}

// 函数：复制字符串数据（大缓冲区）
void copy_string_data_large(longlong dest_ptr, undefined8 src_ptr, int length)

{
  if (length + 1 < 0x80) {
    // WARNING: Subroutine does not return
    memcpy(*(undefined1 **)(dest_ptr + 8), src_ptr, (longlong)length);
  }
  **(undefined1 **)(dest_ptr + 8) = 0;
  *(undefined4 *)(dest_ptr + 0x10) = 0;
  return;
}

// 函数：内存复制操作
void perform_memory_copy(void)

{
  // WARNING: Subroutine does not return
  memcpy();
}

// 函数：重置字符串对象
void reset_string_object(undefined1 *string_obj)

{
  longlong context_ptr;
  
  *string_obj = 0;
  *(undefined4 *)(context_ptr + 0x10) = 0;
  return;
}

// 函数：初始化字符串处理对象
undefined8 * initialize_string_processor(undefined8 *string_processor)

{
  *string_processor = &EMPTY_OBJECT_TABLE;
  string_processor[1] = 0;
  *(undefined4 *)(string_processor + 2) = 0;
  *string_processor = &STRING_HANDLER_TABLE;
  string_processor[1] = string_processor + 3;
  *(undefined4 *)(string_processor + 2) = 0;
  *(undefined1 *)(string_processor + 3) = 0;
  return string_processor;
}

// 函数：字符串替换处理
void process_string_replacement(longlong src_ptr, longlong old_str_ptr, longlong new_str_ptr)

{
  longlong found_pos;
  longlong old_len;
  longlong new_len;
  undefined1 local_buffer[32];
  undefined8 stack_param1;
  undefined *handler_ptr;
  undefined1 *buffer_ptr;
  undefined4 buffer_size;
  undefined1 temp_buffer[136];
  ulonglong checksum;
  
  stack_param1 = 0xfffffffffffffffe;
  checksum = MEMORY_CHECKSUM ^ (ulonglong)local_buffer;
  handler_ptr = &STRING_HANDLER_TABLE;
  buffer_ptr = temp_buffer;
  buffer_size = 0;
  temp_buffer[0] = 0;
  found_pos = strstr(*(undefined8 *)(src_ptr + 8));
  if (found_pos != 0) {
    old_len = -1;
    new_len = -1;
    do {
      new_len = new_len + 1;
    } while (*(char *)(old_str_ptr + new_len) != '\0');
    do {
      old_len = old_len + 1;
    } while (*(char *)(old_len + new_str_ptr) != '\0');
    // WARNING: Subroutine does not return
    memcpy(buffer_ptr, *(longlong *)(src_ptr + 8), found_pos - *(longlong *)(src_ptr + 8));
  }
  handler_ptr = &EMPTY_OBJECT_TABLE;
  // WARNING: Subroutine does not return
  PROCESS_STRING_DATA(checksum ^ (ulonglong)local_buffer);
}

// 函数：初始化增强字符串处理器
undefined8 *
initialize_enhanced_string_processor(undefined8 *processor, longlong source_ptr, undefined8 param_3, undefined8 param_4)

{
  undefined *data_ptr;
  
  *processor = &EMPTY_OBJECT_TABLE;
  processor[1] = 0;
  *(undefined4 *)(processor + 2) = 0;
  *processor = &STRING_HANDLER_TABLE;
  processor[1] = processor + 3;
  *(undefined4 *)(processor + 2) = 0;
  *(undefined1 *)(processor + 3) = 0;
  *(undefined4 *)(processor + 2) = *(undefined4 *)(source_ptr + 0x10);
  data_ptr = &DEFAULT_STRING_DATA;
  if (*(undefined **)(source_ptr + 8) != (undefined *)0x0) {
    data_ptr = *(undefined **)(source_ptr + 8);
  }
  strcpy_s(processor[1], 0x80, data_ptr, param_4, 0xfffffffffffffffe);
  return processor;
}

// 函数：释放增强字符串处理器
undefined8 *
release_enhanced_string_processor(undefined8 *processor, ulonglong flags, undefined8 param_3, undefined8 param_4)

{
  *processor = &EMPTY_OBJECT_TABLE;
  if ((flags & 1) != 0) {
    free(processor, 0x58, param_3, param_4, 0xfffffffffffffffe);
  }
  return processor;
}

// 函数：设置字符串数据
void set_string_data(longlong dest_ptr, longlong src_ptr)

{
  longlong str_len;
  
  if (src_ptr == 0) {
    *(undefined4 *)(dest_ptr + 0x10) = 0;
    **(undefined1 **)(dest_ptr + 8) = 0;
    return;
  }
  str_len = -1;
  do {
    str_len = str_len + 1;
  } while (*(char *)(src_ptr + str_len) != '\0');
  if ((int)str_len < 0x40) {
    *(int *)(dest_ptr + 0x10) = (int)str_len;
    // WARNING: Could not recover jumptable at 0x000180049c27. Too many branches
    // WARNING: Treating indirect jump as call
    strcpy_s(*(undefined8 *)(dest_ptr + 8), 0x40);
    return;
  }
  ALLOCATE_STRING_BUFFER(&STRING_BUFFER_ALLOCATOR, 0x40, src_ptr);
  *(undefined4 *)(dest_ptr + 0x10) = 0;
  **(undefined1 **)(dest_ptr + 8) = 0;
  return;
}

// 函数：复制字符串数据（小缓冲区）
void copy_string_data_small(longlong dest_ptr, undefined8 src_ptr, int length)

{
  if (length + 1 < 0x40) {
    // WARNING: Subroutine does not return
    memcpy(*(undefined1 **)(dest_ptr + 8), src_ptr, (longlong)length);
  }
  **(undefined1 **)(dest_ptr + 8) = 0;
  *(undefined4 *)(dest_ptr + 0x10) = 0;
  return;
}

// 函数：内存复制操作（简化版）
void perform_memory_copy_simple(void)

{
  // WARNING: Subroutine does not return
  memcpy();
}

// 函数：重置字符串对象（简化版）
void reset_string_object_simple(undefined1 *string_obj)

{
  longlong context_ptr;
  
  *string_obj = 0;
  *(undefined4 *)(context_ptr + 0x10) = 0;
  return;
}

// 函数：初始化字符串处理器（简化版）
undefined8 * initialize_string_processor_simple(undefined8 *string_processor)

{
  *string_processor = &EMPTY_OBJECT_TABLE;
  string_processor[1] = 0;
  *(undefined4 *)(string_processor + 2) = 0;
  *string_processor = &STRING_HANDLER_ALT;
  string_processor[1] = string_processor + 3;
  *(undefined4 *)(string_processor + 2) = 0;
  *(undefined1 *)(string_processor + 3) = 0;
  return string_processor;
}

// 函数：字符串替换处理（简化版）
void process_string_replacement_simple(longlong src_ptr, longlong old_str_ptr, longlong new_str_ptr)

{
  longlong found_pos;
  longlong old_len;
  longlong new_len;
  undefined1 local_buffer[32];
  undefined8 stack_param1;
  undefined *handler_ptr;
  undefined1 *buffer_ptr;
  undefined4 buffer_size;
  undefined1 temp_buffer[72];
  ulonglong checksum;
  
  stack_param1 = 0xfffffffffffffffe;
  checksum = MEMORY_CHECKSUM ^ (ulonglong)local_buffer;
  handler_ptr = &STRING_HANDLER_ALT;
  buffer_ptr = temp_buffer;
  buffer_size = 0;
  temp_buffer[0] = 0;
  found_pos = strstr(*(undefined8 *)(src_ptr + 8));
  if (found_pos != 0) {
    old_len = -1;
    new_len = -1;
    do {
      new_len = new_len + 1;
    } while (*(char *)(old_str_ptr + new_len) != '\0');
    do {
      old_len = old_len + 1;
    } while (*(char *)(old_len + new_str_ptr) != '\0');
    // WARNING: Subroutine does not return
    memcpy(buffer_ptr, *(longlong *)(src_ptr + 8), found_pos - *(longlong *)(src_ptr + 8));
  }
  handler_ptr = &EMPTY_OBJECT_TABLE;
  // WARNING: Subroutine does not return
  PROCESS_STRING_DATA(checksum ^ (ulonglong)local_buffer);
}

// 函数：初始化高级字符串处理器
undefined8 *
initialize_advanced_string_processor(undefined8 *processor, longlong source_ptr, undefined8 param_3, undefined8 param_4)

{
  longlong str_len;
  
  *processor = &EMPTY_OBJECT_TABLE;
  processor[1] = 0;
  *(undefined4 *)(processor + 2) = 0;
  *processor = &STRING_HANDLER_ALT;
  processor[1] = processor + 3;
  *(undefined4 *)(processor + 2) = 0;
  *(undefined1 *)(processor + 3) = 0;
  if (source_ptr != 0) {
    str_len = -1;
    do {
      str_len = str_len + 1;
    } while (*(char *)(source_ptr + str_len) != '\0');
    *(int *)(processor + 2) = (int)str_len;
    strcpy_s(processor[1], 0x40, source_ptr, param_4, 0xfffffffffffffffe);
  }
  return processor;
}

// 函数：清理对象引用
void cleanup_object_references(undefined8 *object_ptr)

{
  object_ptr[4] = &OBJECT_CLEANUP_HANDLER;
  if (object_ptr[5] != 0) {
    // WARNING: Subroutine does not return
    PERFORM_CLEANUP_OPERATION();
  }
  object_ptr[5] = 0;
  *(undefined4 *)(object_ptr + 7) = 0;
  object_ptr[4] = &EMPTY_OBJECT_TABLE;
  *object_ptr = &OBJECT_CLEANUP_HANDLER;
  if (object_ptr[1] != 0) {
    // WARNING: Subroutine does not return
    PERFORM_CLEANUP_OPERATION();
  }
  object_ptr[1] = 0;
  *(undefined4 *)(object_ptr + 3) = 0;
  *object_ptr = &EMPTY_OBJECT_TABLE;
  return;
}

// 函数：递归清理对象
void cleanup_object_recursive(undefined8 param_1, undefined8 *object_ptr, undefined8 param_3, undefined8 param_4)

{
  if (object_ptr == (undefined8 *)0x0) {
    return;
  }
  cleanup_object_recursive(param_1, *object_ptr, param_3, param_4, 0xfffffffffffffffe);
  object_ptr[8] = &OBJECT_CLEANUP_HANDLER;
  if (object_ptr[9] != 0) {
    // WARNING: Subroutine does not return
    PERFORM_CLEANUP_OPERATION();
  }
  object_ptr[9] = 0;
  *(undefined4 *)(object_ptr + 0xb) = 0;
  object_ptr[8] = &EMPTY_OBJECT_TABLE;
  object_ptr[4] = &OBJECT_CLEANUP_HANDLER;
  if (object_ptr[5] != 0) {
    // WARNING: Subroutine does not return
    PERFORM_CLEANUP_OPERATION();
  }
  object_ptr[5] = 0;
  *(undefined4 *)(object_ptr + 7) = 0;
  object_ptr[4] = &EMPTY_OBJECT_TABLE;
  // WARNING: Subroutine does not return
  PERFORM_CLEANUP_OPERATION(object_ptr);
}

// 函数：初始化引擎核心组件
void initialize_engine_core(void)

{
  longlong *module_ptr;
  undefined8 *config_ptr;
  code *init_func;
  undefined1 *data_ptr;
  undefined8 system_param;
  longlong core_data;
  int status;
  longlong **module_array;
  undefined2 *flag_array;
  uint flag_index;
  ulonglong iteration_count;
  float timing_value;
  double performance_counter;
  double elapsed_time;
  longlong **temp_module_ptr;
  longlong *temp_ptr1;
  longlong *temp_ptr2;
  longlong temp_long1;
  longlong stack_data_90;
  longlong stack_data_88;
  longlong stack_data_80;
  longlong stack_data_78;
  longlong ***module_ptr_ptr;
  undefined8 stack_param_68;
  longlong **stack_module_ptr;
  undefined8 stack_param_58;
  ulonglong loop_counter;
  
  core_data = ENGINE_CORE_DATA;
  module_ptr = ENGINE_MODULE_BASE;
  if (INITIALIZATION_FLAG != '\0') {
    initialize_engine_secondary();
    return;
  }
  stack_param_68 = 0xfffffffffffffffe;
  *(undefined8 *)(ENGINE_CORE_DATA + 0x2038) = *(undefined8 *)(ENGINE_CORE_DATA + 0x2030);
  flag_array = (undefined2 *)(core_data + 0x14);
  core_data = 0x100;
  loop_counter = 0;
  do {
    *flag_array = 0;
    flag_array = flag_array + 0xc;
    core_data = core_data + -1;
  } while (core_data != 0);
  INITIALIZE_COMPONENTS(ENGINE_CONFIG_BASE + 0x48);
  ENGINE_STATUS_FLAG = 0;
  PERFORMANCE_MONITOR = 0;
  if (MODULE_LOAD_FLAG != '\0') {
    module_ptr = *(longlong **)(module_ptr + 8);
    module_array = (longlong **)ALLOCATE_MODULE_STRUCTURE(ENGINE_HEAP_BASE, 0x48, 8, 3);
    *module_array = (longlong *)&THREAD_SYNC_TABLE_1;
    *module_array = (longlong *)&THREAD_SYNC_TABLE_2;
    *(undefined4 *)(module_array + 1) = 0;
    *module_array = (longlong *)&MUTEX_TABLE;
    LOCK();
    *(undefined1 *)(module_array + 2) = 0;
    UNLOCK();
    module_array[3] = (longlong *)0xffffffffffffffff;
    *module_array = (longlong *)&PERFORMANCE_TABLE;
    *(undefined4 *)(module_array + 5) = 4;
    module_array[4] = module_ptr;
    module_ptr_ptr = (longlong ***)module_array;
    stack_module_ptr = module_array;
    (*(code *)(*module_array)[5])(module_array);
    config_ptr = (undefined8 *)module_ptr[0x28];
    init_func = *(code **)*config_ptr;
    module_ptr_ptr = &temp_module_ptr;
    temp_module_ptr = module_array;
    (*(code *)(*module_array)[5])(module_array);
    (*init_func)(config_ptr, &temp_module_ptr);
    CLEANUP_MODULE_RESOURCES(module_ptr[0x28]);
    (*(code *)(*module_array)[7])(module_array);
  }
  core_data = *(longlong *)(ENGINE_CONFIG_TABLE + 0x18) - *(longlong *)(ENGINE_CONFIG_TABLE + 0x10);
  iteration_count = loop_counter;
  if (core_data / 0x1c != 0) {
    do {
      PROCESS_MODULE_DATA(core_data, iteration_count * 0x1c + *(longlong *)(ENGINE_CONFIG_TABLE + 0x10));
      flag_index = (int)loop_counter + 1;
      loop_counter = (ulonglong)flag_index;
      core_data = *(longlong *)(ENGINE_CONFIG_TABLE + 0x18) - *(longlong *)(ENGINE_CONFIG_TABLE + 0x10);
      iteration_count = (longlong)(int)flag_index;
    } while ((ulonglong)(longlong)(int)flag_index < (ulonglong)(core_data / 0x1c));
  }
  *(undefined8 *)(ENGINE_CONFIG_TABLE + 0x18) = *(undefined8 *)(ENGINE_CONFIG_TABLE + 0x10);
  *(undefined1 *)(*(longlong *)(*(longlong *)(module_ptr + 8) + 0x140) + 0x208) = 1;
  if (*(char *)(module_ptr + 0x3c8) != '\0') {
    CLEANUP_MODULE_RESOURCES_ALT(module_ptr);
    LOCK();
    *(undefined1 *)(module_ptr + 0x3c8) = 0;
    UNLOCK();
  }
  core_data = ENGINE_CONFIG_DATA;
  *(undefined8 *)(ENGINE_CONFIG_DATA + 4) = 0;
  *(undefined8 *)(core_data + 0xc) = 0;
  *(undefined8 *)(core_data + 0x14) = 0;
  INITIALIZE_COMPONENTS(core_data + 0x20);
  INITIALIZE_COMPONENTS(core_data + 0x50);
  LOCK();
  *(undefined4 *)(core_data + 0x80) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)(core_data + 0x84) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)(core_data + 0x88) = 0;
  UNLOCK();
  core_data = PERFORMANCE_TIMESTAMP;
  if (PERFORMANCE_TIMESTAMP == 0) {
    QueryPerformanceCounter(&temp_long1);
    core_data = temp_long1;
  }
  *(double *)(module_ptr + 0x68) = (double)(core_data - PERFORMANCE_BASE) * PERFORMANCE_FACTOR;
  if (PERFORMANCE_MONITORING_FLAG != '\0') {
    stack_param_58 = MUTEX_HANDLE;
    status = _Mtx_lock(MUTEX_HANDLE);
    if (status != 0) {
      __Throw_C_error_std__YAXH_Z(status);
    }

// 函数：初始化引擎核心组件（参数化版本）
void initialize_engine_core_param(longlong param_1)

{
  longlong *module_ptr;
  undefined8 *config_ptr;
  code *init_func;
  undefined1 *data_ptr;
  undefined8 system_param;
  int status;
  longlong **module_array;
  undefined2 *flag_array;
  uint flag_index;
  ulonglong iteration_count;
  float timing_value;
  double performance_counter;
  double elapsed_time;
  longlong **temp_module_ptr;
  longlong *temp_ptr1;
  longlong *temp_ptr2;
  longlong temp_long1;
  longlong stack_data_90;
  longlong stack_data_88;
  longlong stack_data_80;
  longlong stack_data_78;
  longlong ***module_ptr_ptr;
  undefined8 stack_param_68;
  longlong **stack_module_ptr;
  undefined8 stack_param_58;
  ulonglong loop_counter;
  
  core_data = ENGINE_CORE_DATA;
  stack_param_68 = 0xfffffffffffffffe;
  *(undefined8 *)(ENGINE_CORE_DATA + 0x2038) = *(undefined8 *)(ENGINE_CORE_DATA + 0x2030);
  flag_array = (undefined2 *)(core_data + 0x14);
  core_data = 0x100;
  loop_counter = 0;
  do {
    *flag_array = 0;
    flag_array = flag_array + 0xc;
    core_data = core_data + -1;
  } while (core_data != 0);
  INITIALIZE_COMPONENTS(ENGINE_CONFIG_BASE + 0x48);
  ENGINE_STATUS_FLAG = 0;
  PERFORMANCE_MONITOR = 0;
  if (MODULE_LOAD_FLAG != '\0') {
    module_ptr = *(longlong **)(param_1 + 8);
    module_array = (longlong **)ALLOCATE_MODULE_STRUCTURE(ENGINE_HEAP_BASE, 0x48, 8, 3);
    *module_array = (longlong *)&THREAD_SYNC_TABLE_1;
    *module_array = (longlong *)&THREAD_SYNC_TABLE_2;
    *(undefined4 *)(module_array + 1) = 0;
    *module_array = (longlong *)&MUTEX_TABLE;
    LOCK();
    *(undefined1 *)(module_array + 2) = 0;
    UNLOCK();
    module_array[3] = (longlong *)0xffffffffffffffff;
    *module_array = (longlong *)&PERFORMANCE_TABLE;
    *(undefined4 *)(module_array + 5) = 4;
    module_array[4] = module_ptr;
    module_ptr_ptr = (longlong ***)module_array;
    stack_module_ptr = module_array;
    (*(code *)(*module_array)[5])(module_array);
    config_ptr = (undefined8 *)module_ptr[0x28];
    init_func = *(code **)*config_ptr;
    module_ptr_ptr = &temp_module_ptr;
    temp_module_ptr = module_array;
    (*(code *)(*module_array)[5])(module_array);
    (*init_func)(config_ptr, &temp_module_ptr);
    CLEANUP_MODULE_RESOURCES(module_ptr[0x28]);
    (*(code *)(*module_array)[7])(module_array);
  }
  core_data = *(longlong *)(ENGINE_CONFIG_TABLE + 0x18) - *(longlong *)(ENGINE_CONFIG_TABLE + 0x10);
  iteration_count = loop_counter;
  if (core_data / 0x1c != 0) {
    do {
      PROCESS_MODULE_DATA(core_data, iteration_count * 0x1c + *(longlong *)(ENGINE_CONFIG_TABLE + 0x10));
      flag_index = (int)loop_counter + 1;
      loop_counter = (ulonglong)flag_index;
      core_data = *(longlong *)(ENGINE_CONFIG_TABLE + 0x18) - *(longlong *)(ENGINE_CONFIG_TABLE + 0x10);
      iteration_count = (longlong)(int)flag_index;
    } while ((ulonglong)(longlong)(int)flag_index < (ulonglong)(core_data / 0x1c));
  }
  *(undefined8 *)(ENGINE_CONFIG_TABLE + 0x18) = *(undefined8 *)(ENGINE_CONFIG_TABLE + 0x10);
  *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x140) + 0x208) = 1;
  if (*(char *)(param_1 + 0x3c8) != '\0') {
    CLEANUP_MODULE_RESOURCES_ALT(param_1);
    LOCK();
    *(undefined1 *)(param_1 + 0x3c8) = 0;
    UNLOCK();
  }
  core_data = ENGINE_CONFIG_DATA;
  *(undefined8 *)(ENGINE_CONFIG_DATA + 4) = 0;
  *(undefined8 *)(core_data + 0xc) = 0;
  *(undefined8 *)(core_data + 0x14) = 0;
  INITIALIZE_COMPONENTS(core_data + 0x20);
  INITIALIZE_COMPONENTS(core_data + 0x50);
  LOCK();
  *(undefined4 *)(core_data + 0x80) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)(core_data + 0x84) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)(core_data + 0x88) = 0;
  UNLOCK();
  core_data = PERFORMANCE_TIMESTAMP;
  if (PERFORMANCE_TIMESTAMP == 0) {
    QueryPerformanceCounter(&temp_long1);
    core_data = temp_long1;
  }
  *(double *)(param_1 + 0x68) = (double)(core_data - PERFORMANCE_BASE) * PERFORMANCE_FACTOR;
  if (PERFORMANCE_MONITORING_FLAG != '\0') {
    stack_param_58 = MUTEX_HANDLE;
    status = _Mtx_lock(MUTEX_HANDLE);
    if (status != 0) {
      __Throw_C_error_std__YAXH_Z(status);
    }

// 函数：更新引擎性能统计
void update_engine_performance_stats(longlong param_1, undefined8 param_2)

{
  longlong *module_ptr;
  char flag1;
  char flag2;
  int status;
  undefined4 config_value;
  undefined1 *data_ptr;
  undefined8 *config_ptr;
  undefined8 *system_ptr;
  longlong timing_data;
  uint performance_index;
  longlong memory_addr;
  ulonglong checksum;
  longlong *resource_ptr;
  float performance_value;
  undefined8 system_handle;
  float calculated_value;
  undefined1 local_buffer[32];
  longlong **module_array;
  undefined *handler_ptr;
  undefined4 buffer_size;
  undefined8 stack_param_308;
  char stack_flag;
  char flag_array[7];
  longlong *resource_manager;
  undefined4 resource_config;
  undefined *cleanup_handler;
  undefined8 *memory_allocator;
  undefined4 memory_config;
  undefined4 config_array[2];
  longlong *stack_ptr;
  undefined8 stack_param_2b8;
  undefined8 temp_buffer[67];
  longlong stack_array[3];
  undefined4 stack_param_78;
  ulonglong stack_checksum;
  ulonglong iteration_counter;
  
  stack_param_2b8 = 0xfffffffffffffffe;
  stack_checksum = MEMORY_CHECKSUM ^ (ulonglong)local_buffer;
  performance_value = (float)param_2;
  PERFORMANCE_ACCUMULATOR = (longlong)(performance_value * 100000.0);
  PERFORMANCE_ACCUMULATOR = PERFORMANCE_ACCUMULATOR + PERFORMANCE_ACCUMULATOR;
  PERFORMANCE_CURRENT = performance_value;
  system_handle = GET_SYSTEM_TIME();
  system_handle = UPDATE_PERFORMANCE_COUNTER(system_handle, param_2);
  flag1 = CHECK_PERFORMANCE_FLAG(system_handle, 0x52);
  flag2 = CHECK_PERFORMANCE_FLAG(1, 0x51);
  timing_data = 0xe0;
  if (flag2 == '\0') {
    if (flag1 == '\0') goto PERFORMANCE_UPDATE_COMPLETE;
  }
  else {

// 函数：清理异常处理程序
void cleanup_exception_handler(longlong param_1)

{
  int *ref_count;
  undefined8 *exception_ptr;
  longlong handler_addr;
  ulonglong memory_mask;
  
  exception_ptr = *(undefined8 **)(param_1 + 0x218);
  if (exception_ptr == (undefined8 *)0x0) {
    return;
  }
  memory_mask = (ulonglong)exception_ptr & 0xffffffffffc00000;
  if (memory_mask != 0) {
    handler_addr = memory_mask + 0x80 + ((longlong)exception_ptr - memory_mask >> 0x10) * 0x50;
    handler_addr = handler_addr - (ulonglong)*(uint *)(handler_addr + 4);
    if ((*(void ***)(memory_mask + 0x70) == &ExceptionList) && (*(char *)(handler_addr + 0xe) == '\0')) {
      *exception_ptr = *(undefined8 *)(handler_addr + 0x20);
      *(undefined8 **)(handler_addr + 0x20) = exception_ptr;
      ref_count = (int *)(handler_addr + 0x18);
      *ref_count = *ref_count + -1;
      if (*ref_count == 0) {
        CLEANUP_EXCEPTION_HANDLERS();
        return;
      }
    }
    else {
      HANDLE_EXCEPTION_CLEANUP(memory_mask, CONCAT71(0xff000000, *(void ***)(memory_mask + 0x70) == &ExceptionList),
                                exception_ptr, memory_mask, 0xfffffffffffffffe);
    }
  }
  return;
}

// 函数：复制对象数据
undefined8 * copy_object_data(undefined8 *dest_ptr, undefined8 *src_ptr)

{
  longlong *dest_data;
  longlong src_start;
  longlong src_end;
  longlong dest_start;
  ulonglong data_size;
  longlong buffer_size;
  undefined1 *dest_buffer;
  longlong copy_length;
  ulonglong required_size;
  
  dest_buffer = (undefined1 *)((longlong)dest_ptr + 0xf);
  *dest_ptr = *src_ptr;
  *(undefined4 *)(dest_ptr + 1) = *(undefined4 *)(src_ptr + 1);
  *(undefined1 *)((longlong)dest_ptr + 0xc) = *(undefined1 *)((longlong)src_ptr + 0xc);
  *(undefined1 *)((longlong)dest_ptr + 0xd) = *(undefined1 *)((longlong)src_ptr + 0xd);
  *(undefined1 *)((longlong)dest_ptr + 0xe) = *(undefined1 *)((longlong)src_ptr + 0xe);
  buffer_size = 0x100;
  do {
    *dest_buffer = dest_buffer[(longlong)src_ptr - (longlong)dest_ptr];
    dest_buffer[1] = dest_buffer[((longlong)src_ptr - (longlong)dest_ptr) + 1];
    dest_buffer = dest_buffer + 2;
    buffer_size = buffer_size + -1;
  } while (buffer_size != 0);
  *(undefined1 *)((longlong)dest_ptr + 0x20f) = *(undefined1 *)((longlong)src_ptr + 0x20f);
  dest_data = dest_ptr + 0x43;
  *(undefined1 *)(dest_ptr + 0x42) = *(undefined1 *)(src_ptr + 0x42);
  *(undefined1 *)((longlong)dest_ptr + 0x211) = *(undefined1 *)((longlong)src_ptr + 0x211);
  if (dest_data != src_ptr + 0x43) {
    buffer_size = *dest_data;
    src_start = src_ptr[0x44];
    src_end = src_ptr[0x43];
    copy_length = src_start - src_end;
    required_size = copy_length >> 2;
    if ((ulonglong)(dest_ptr[0x45] - buffer_size >> 2) < required_size) {
      if (required_size == 0) {
        buffer_size = 0;
      }
      else {
        buffer_size = ALLOCATE_BUFFER(ENGINE_HEAP_BASE, required_size * 4, *(undefined1 *)(dest_ptr + 0x46));
      }
      if (src_end != src_start) {
        // WARNING: Subroutine does not return
        memmove(buffer_size, src_end, copy_length);
      }
      if (*dest_data != 0) {
        // WARNING: Subroutine does not return
        RELEASE_RESOURCE();
      }
      src_start = buffer_size + required_size * 4;
      *dest_data = buffer_size;
      dest_ptr[0x44] = src_start;
      dest_ptr[0x45] = src_start;
    }
    else {
      dest_start = dest_ptr[0x44];
      data_size = dest_start - buffer_size >> 2;
      if (data_size < required_size) {
        copy_length = data_size * 4 + src_end;
        if (src_end != copy_length) {
          // WARNING: Subroutine does not return
          memmove(buffer_size, src_end);
        }
        if (copy_length != src_start) {
          // WARNING: Subroutine does not return
          memmove(dest_start, copy_length, src_start - copy_length);
        }
        dest_ptr[0x44] = dest_start;
      }
      else {
        if (src_end != src_start) {
          // WARNING: Subroutine does not return
          memmove(buffer_size, src_end, copy_length);
        }
        dest_ptr[0x44] = buffer_size;
      }
    }
  }
  return dest_ptr;
}

// 函数：调整数据缓冲区大小
void resize_data_buffer(longlong param_1)

{
  longlong src_start;
  longlong src_end;
  longlong dest_capacity;
  longlong buffer_end;
  ulonglong available_space;
  longlong *dest_buffer;
  ulonglong required_size;
  
  src_start = SOURCE_BUFFER[1];
  src_end = *SOURCE_BUFFER;
  required_size = src_start - src_end;
  available_space = required_size >> 2;
  if ((ulonglong)(dest_capacity - param_1 >> 2) < available_space) {
    if (available_space == 0) {
      buffer_end = 0;
    }
    else {
      buffer_end = ALLOCATE_BUFFER(ENGINE_HEAP_BASE, available_space * 4, (char)DEST_BUFFER[3]);
    }
    if (src_end != src_start) {
      // WARNING: Subroutine does not return
      memmove(buffer_end, src_end, required_size);
    }
    if (*DEST_BUFFER != 0) {
      // WARNING: Subroutine does not return
      RELEASE_RESOURCE();
    }
    src_start = buffer_end + available_space * 4;
    *DEST_BUFFER = buffer_end;
    DEST_BUFFER[1] = src_start;
    DEST_BUFFER[2] = src_start;
  }
  else {
    buffer_end = DEST_BUFFER[1];
    available_space = buffer_end - param_1 >> 2;
    if (available_space < required_size) {
      required_size = available_space * 4 + src_end;
      if (src_end != required_size) {
        // WARNING: Subroutine does not return
        memmove(param_1, src_end);
      }
      if (required_size != src_start) {
        // WARNING: Subroutine does not return
        memmove(buffer_end, required_size, src_start - required_size);
      }
      DEST_BUFFER[1] = buffer_end;
    }
    else {
      if (src_end != src_start) {
        // WARNING: Subroutine does not return
        memmove(param_1, src_end, required_size);
      }
      DEST_BUFFER[1] = param_1;
    }
  }
  return;
}

// 函数：扩展数据缓冲区
void expand_data_buffer(void)

{
  longlong new_buffer;
  longlong src_start;
  longlong dest_capacity;
  longlong *dest_buffer;
  longlong *src_buffer;
  longlong buffer_size;
  
  if (buffer_size == 0) {
    new_buffer = 0;
  }
  else {
    new_buffer = ALLOCATE_BUFFER(ENGINE_HEAP_BASE, buffer_size * 4, (char)dest_buffer[3]);
  }
  if (src_start != dest_capacity) {
    // WARNING: Subroutine does not return
    memmove(new_buffer);
  }
  if (*dest_buffer != 0) {
    // WARNING: Subroutine does not return
    RELEASE_RESOURCE();
  }
  new_buffer = new_buffer + buffer_size * 4;
  *dest_buffer = new_buffer;
  dest_buffer[1] = new_buffer;
  dest_buffer[2] = new_buffer;
  return;
}

// 函数：收缩数据缓冲区
void shrink_data_buffer(longlong param_1)

{
  longlong buffer_end;
  longlong data_start;
  ulonglong available_space;
  longlong dest_capacity;
  longlong src_start;
  longlong dest_buffer;
  ulonglong buffer_size;
  
  buffer_end = *(longlong *)(dest_buffer + 8);
  available_space = buffer_end - param_1 >> 2;
  if (available_space < buffer_size) {
    data_start = available_space * 4 + src_start;
    if (src_start != data_start) {
      // WARNING: Subroutine does not return
      memmove();
    }
    if (data_start != dest_capacity) {
      // WARNING: Subroutine does not return
      memmove(buffer_end, data_start, dest_capacity - data_start);
    }
    *(longlong *)(dest_buffer + 8) = buffer_end;
  }
  else {
    if (src_start != dest_capacity) {
      // WARNING: Subroutine does not return
      memmove();
    }
    *(longlong *)(dest_buffer + 8) = param_1;
  }
  return;
}

// 函数：空操作函数
void perform_no_operation(void)

{
  return;
}

// 函数：检查对象状态
bool check_object_status(longlong param_1)

{
  undefined8 *object_ptr;
  byte status_byte;
  bool result;
  byte *compare_ptr;
  uint compare_value;
  int comparison_result;
  longlong temp_data;
  undefined8 *iterator_ptr;
  undefined8 *current_ptr;
  undefined8 *next_ptr;
  undefined8 *temp_ptr;
  undefined *cleanup_handler;
  byte *string_ptr;
  int stack_param;
  
  object_ptr = (undefined8 *)(param_1 + 0x2e0);
  INITIALIZE_STACK_FRAME(&cleanup_handler);
  iterator_ptr = *(undefined8 **)(param_1 + 0x2f0);
  temp_ptr = object_ptr;
  if (iterator_ptr != (undefined8 *)0x0) {
    do {
      if (stack_param == 0) {
        result = false;
        current_ptr = (undefined8 *)iterator_ptr[1];
      }
      else {
        if (*(int *)(iterator_ptr + 6) == 0) {
          result = true;
        }
        else {
          compare_ptr = string_ptr;
          do {
            compare_value = (uint)compare_ptr[iterator_ptr[5] - (longlong)string_ptr];
            comparison_result = *compare_ptr - compare_value;
            if (*compare_ptr != compare_value) break;
            compare_ptr = compare_ptr + 1;
          } while (compare_value != 0);
          result = 0 < comparison_result;
          if (comparison_result < 1) {
            current_ptr = (undefined8 *)iterator_ptr[1];
            goto OBJECT_FOUND;
          }
        }
        current_ptr = (undefined8 *)*iterator_ptr;
      }
OBJECT_FOUND:
      next_ptr = iterator_ptr;
      if (result) {
        next_ptr = temp_ptr;
      }
      iterator_ptr = current_ptr;
      temp_ptr = next_ptr;
    } while (current_ptr != (undefined8 *)0x0);
    if (next_ptr != temp_ptr) {
      if (*(int *)(next_ptr + 6) == 0) goto OBJECT_VALID;
      if (stack_param != 0) {
        compare_ptr = (byte *)next_ptr[5];
        temp_data = (longlong)string_ptr - (longlong)compare_ptr;
        do {
          status_byte = *compare_ptr;
          compare_value = (uint)compare_ptr[temp_data];
          if (status_byte != compare_value) break;
          compare_ptr = compare_ptr + 1;
        } while (compare_value != 0);
        if ((int)(status_byte - compare_value) < 1) goto OBJECT_VALID;
      }
    }
  }
  next_ptr = temp_ptr;
OBJECT_VALID:
  cleanup_handler = &OBJECT_CLEANUP_HANDLER;
  if (string_ptr == (byte *)0x0) {
    return next_ptr != temp_ptr;
  }
  // WARNING: Subroutine does not return
  RELEASE_RESOURCE();
}

// 函数：创建系统资源
undefined8
create_system_resource(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4)

{
  INITIALIZE_SYSTEM_COMPONENT(param_2, ENGINE_MODULE_BASE + 0x2c0, param_3, param_4, 0, 0xfffffffffffffffe);
  return param_2;
}

// 函数：初始化系统路径
void initialize_system_path(longlong param_1)

{
  undefined8 *system_ptr;
  int path_length;
  undefined1 local_buffer[32];
  undefined4 buffer_size;
  undefined8 stack_param_b8;
  longlong path_data;
  undefined1 path_buffer[128];
  ulonglong checksum;
  
  stack_param_b8 = 0xfffffffffffffffe;
  checksum = MEMORY_CHECKSUM ^ (ulonglong)local_buffer;
  buffer_size = 0;
  path_data = param_1;
  INITIALIZE_SYSTEM_COMPONENT(param_1, ENGINE_MODULE_BASE + 0x170);
  buffer_size = 1;
  path_length = *(int *)(param_1 + 0x10) + 8;
  RESIZE_PATH_BUFFER(param_1, path_length);
  system_ptr = (undefined8 *)((ulonglong)*(uint *)(param_1 + 0x10) + *(longlong *)(param_1 + 8));
  *system_ptr = 0x2f73656873617263; // "crashes/" in hex
  *(undefined1 *)(system_ptr + 1) = 0;
  *(int *)(param_1 + 0x10) = path_length;
  // WARNING: Subroutine does not return
  memset(path_buffer, 0, 0x80);
}