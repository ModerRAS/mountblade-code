#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 02_core_engine_part247.c - 核心引擎模块第247部分
// 本文件包含事件系统、线程安全和资源管理相关功能

/**
 * 清理事件队列中的所有事件
 * @param event_context 事件上下文指针
 */
void clear_event_queue(int64_t event_context)
{
  int lock_result;
  int64_t event_index;
  
  // 锁定事件互斥体
  lock_result = _Mtx_lock(event_context + 0x318);
  if (lock_result != 0) {
    __Throw_C_error_std__YAXH_Z(lock_result);
  }
  
  lock_result = 0;
  // 遍历并清理队列中的所有事件
  if (*(int64_t *)(event_context + 0x380) - *(int64_t *)(event_context + 0x378) >> 3 != 0) {
    event_index = 0;
    do {
      FUN_18084b2f0(*(uint64_t *)(event_index + *(int64_t *)(event_context + 0x378)));
      lock_result = lock_result + 1;
      event_index = event_index + 8;
    } while ((uint64_t)(int64_t)lock_result <
             (uint64_t)(*(int64_t *)(event_context + 0x380) - *(int64_t *)(event_context + 0x378) >> 3));
  }
  
  // 清理事件处理相关资源
  FUN_18084b380(*(uint64_t *)(event_context + 0x368));
  FUN_180849360(*(uint64_t *)(event_context + 0x368));
  *(uint64_t *)(event_context + 0x380) = *(uint64_t *)(event_context + 0x378);
  *(uint64_t *)(event_context + 0x3c0) = *(uint64_t *)(event_context + 0x3b8);
  FUN_180218120(event_context + 0x398);
  *(uint64_t *)(event_context + 0x370) = 0;
  *(uint64_t *)(event_context + 0x368) = 0;
  
  // 解锁事件互斥体
  lock_result = _Mtx_unlock(event_context + 0x318);
  if (lock_result != 0) {
    __Throw_C_error_std__YAXH_Z(lock_result);
  }
  return;
}

/**
 * 获取事件系统状态标识符（水平方向）
 * @return 事件系统状态标识符
 */
int64_t get_event_system_horizontal_id(void)
{
  int id_buffer[2];
  int8_t temp_buffer[16];
  
  FUN_180738630(id_buffer, temp_buffer, 1);
  return (int64_t)id_buffer[0];
}

/**
 * 获取事件系统状态标识符（垂直方向）
 * @return 事件系统状态标识符
 */
int64_t get_event_system_vertical_id(void)
{
  int id_buffer[2];
  int8_t temp_buffer[16];
  
  FUN_180738630(temp_buffer, id_buffer, 1);
  return (int64_t)id_buffer[0];
}

/**
 * 处理事件触发器相关逻辑
 * @param event_context 事件上下文指针
 * @param trigger_data 触发器数据指针
 * @param is_enabled 是否启用触发器
 * @return 处理结果状态码
 */
uint64_t process_event_trigger(int64_t event_context, int64_t trigger_data, char is_enabled)
{
  uint buffer_size;
  int string_length;
  int32_t format_result;
  int32_t *message_buffer;
  int32_t *temp_buffer;
  void *string_ptr;
  int64_t compare_index;
  int64_t context_backup;
  uint64_t result_code;
  
  context_backup = event_context;
  
  // 检查是否启用调试模式
  if (*(int *)(core_system_data_buffer + 0x9a0) == 0) goto skip_debug_logging;
  
  // 创建调试消息缓冲区
  message_buffer = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr, 0x10, 0x13);
  *(int8_t *)message_buffer = 0;
  buffer_size = CoreEngineSystemCleanup(message_buffer);
  
  // 设置调试消息格式
  *message_buffer = 0x5f746567;  // "_teg"
  message_buffer[1] = 0x6e657665; // "neve"
  message_buffer[2] = 0x65645f74; // "ed_t"
  message_buffer[3] = 0x206373;   // " cs"
  
  string_length = *(int *)(trigger_data + 0x10);
  if (0 < string_length) {
    if ((string_length != -0xf) && (buffer_size < string_length + 0x10U)) {
      message_buffer = (int32_t *)FUN_18062b8b0(system_memory_pool_ptr, message_buffer, string_length + 0x10U, 0x10, 0x13);
      CoreEngineSystemCleanup(message_buffer);
      string_length = *(int *)(trigger_data + 0x10);
    }
    // 复制触发器名称到消息缓冲区
    memcpy((int8_t *)((int64_t)message_buffer + 0xf), *(uint64_t *)(trigger_data + 8), (int64_t)(string_length + 1));
  }
  
  if (message_buffer == (int32_t *)0x0) {
    message_buffer = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr, 0x11, 0x13);
    *(int8_t *)message_buffer = 0;
build_message:
    CoreEngineSystemCleanup(message_buffer);
  }
  else if (buffer_size < 0x11) {
    message_buffer = (int32_t *)FUN_18062b8b0(system_memory_pool_ptr, message_buffer, 0x11, 0x10, 0x13);
    goto build_message;
  }
  
  *(int16_t *)((int64_t)message_buffer + 0xf) = 10; // 换行符
  
  temp_buffer = (int32_t *)&system_buffer_ptr;
  if (message_buffer != (int32_t *)0x0) {
    temp_buffer = message_buffer;
  }
  
  // 输出调试消息
  FUN_1800623b0(system_message_context, 0, 0x1000000000000, 3, temp_buffer);
  if (message_buffer != (int32_t *)0x0) {
    CoreEngineMemoryPoolCleaner(message_buffer);
  }

skip_debug_logging:
  compare_index = 0;
  result_code = 0;
  string_ptr = &system_buffer_ptr;
  if (*(void **)(trigger_data + 8) != (void *)0x0) {
    string_ptr = *(void **)(trigger_data + 8);
  }
  
  // 处理事件触发器
  format_result = FUN_180845c40(*(uint64_t *)(context_backup + 0x368), string_ptr, &result_code);
  string_ptr = &system_buffer_ptr;
  if (*(void **)(trigger_data + 8) != (void *)0x0) {
    string_ptr = *(void **)(trigger_data + 8);
  }
  FUN_180211a30(format_result, string_ptr);
  
  // 检查是否为系统内部事件
  if (is_enabled == '\0') {
    if (6 < *(uint *)(trigger_data + 0x10)) {
      do {
        if ((&unknown_var_3520_ptr + compare_index)[*(int64_t *)(trigger_data + 8) + -0x180a10500] !=
            (&unknown_var_3520_ptr)[compare_index]) {
          return result_code;
        }
        compare_index = compare_index + 1;
      } while (compare_index < 7);
      context_backup = 0;
      FUN_180846fe0(result_code, &context_backup);
    }
  }
  else {
    format_result = FUN_1808496c0(result_code, &unknown_var_1504_ptr, 0xffffffff);
    string_ptr = &system_buffer_ptr;
    if (*(void **)(trigger_data + 8) != (void *)0x0) {
      string_ptr = *(void **)(trigger_data + 8);
    }
    FUN_180211a30(format_result, string_ptr);
  }
  return result_code;
}

/**
 * 处理事件类型相关的逻辑
 * @param event_context 事件上下文指针
 * @param event_type 事件类型标识符
 * @param is_enabled 是否启用事件类型
 * @return 处理结果状态码
 */
int64_t process_event_type(int64_t event_context, int event_type, char is_enabled)
{
  uint buffer_size;
  int32_t format_result;
  int32_t *message_buffer;
  int total_length;
  int64_t context_backup;
  void *string_data;
  int32_t *temp_buffer;
  uint temp_size;
  uint64_t result_code;
  
  if (*(int *)(core_system_data_buffer + 0x9a0) == 0) goto skip_debug_logging;
  
  string_data = &system_data_buffer_ptr;
  result_code = 0;
  temp_buffer = (int32_t *)0x0;
  temp_size = 0;
  
  // 创建调试消息缓冲区
  temp_buffer = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr, 0x10, 0x13);
  *(int8_t *)temp_buffer = 0;
  buffer_size = CoreEngineSystemCleanup(temp_buffer);
  
  // 设置调试消息格式
  *temp_buffer = 0x5f746567;  // "_teg"
  temp_buffer[1] = 0x6e657665; // "neve"
  temp_buffer[2] = 0x65645f74; // "ed_t"
  temp_buffer[3] = 0x206373;   // " cs"
  
  temp_size = 0xf;
  result_code._0_4_ = buffer_size;
  FUN_180628380(&string_data, event_type);
  
  total_length = temp_size + 1;
  if (total_length != 0) {
    buffer_size = temp_size + 2;
    if (temp_buffer == (int32_t *)0x0) {
      if ((int)buffer_size < 0x10) {
        buffer_size = 0x10;
      }
      temp_buffer = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr, (int64_t)(int)buffer_size, 0x13);
      *(int8_t *)temp_buffer = 0;
    }
    else {
      if (buffer_size <= (uint)result_code) goto buffer_ready;
      temp_buffer = (int32_t *)FUN_18062b8b0(system_memory_pool_ptr, temp_buffer, buffer_size, 0x10, 0x13);
    }
    result_code._0_4_ = CoreEngineSystemCleanup(temp_buffer);
  }
  
buffer_ready:
  *(int16_t *)((uint64_t)temp_size + (int64_t)temp_buffer) = 10; // 换行符
  
  message_buffer = (int32_t *)&system_buffer_ptr;
  if (temp_buffer != (int32_t *)0x0) {
    message_buffer = temp_buffer;
  }
  temp_size = total_length;
  
  // 输出调试消息
  FUN_1800623b0(system_message_context, 0, 0x1000000000000, 3, message_buffer);
  string_data = &system_data_buffer_ptr;
  if (temp_buffer != (int32_t *)0x0) {
    CoreEngineMemoryPoolCleaner();
  }
  temp_buffer = (int32_t *)0x0;
  result_code = (uint64_t)result_code._4_4_ << 0x20;
  string_data = &system_state_ptr;

skip_debug_logging:
  context_backup = 0;
  format_result = FUN_180845d20(*(uint64_t *)(event_context + 0x368),
                        (int64_t)event_type * 0x10 + *(int64_t *)(event_context + 0x3b8), &context_backup);
  FUN_180211a30(format_result, &system_buffer_ptr);
  
  if ((context_backup != 0) && (is_enabled != '\0')) {
    format_result = FUN_1808496c0(context_backup, &unknown_var_1504_ptr, 0xffffffff);
    FUN_180211a30(format_result, &system_buffer_ptr);
  }
  return context_backup;
}

/**
 * 检查并处理事件系统状态变化
 * @param event_context 事件上下文指针
 * @param state_data 状态数据指针
 * @return 处理结果状态码
 */
uint64_t check_event_system_state(int64_t event_context, int64_t state_data)
{
  uint buffer_size;
  int string_length;
  int32_t *message_buffer;
  int32_t *temp_buffer;
  uint64_t process_result;
  void *string_ptr;
  uint64_t result_code;
  uint64_t error_code;
  
  error_code = 0xfffffffffffffffe;
  
  // 检查事件系统是否已启用
  if (*(char *)(event_context + 0x210) != '\0') {
    return 0;
  }
  
  if (*(int *)(core_system_data_buffer + 0x9a0) == 0) goto skip_debug_logging;
  
  // 创建调试消息缓冲区
  message_buffer = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr, 0x16, 0x13);
  *(int8_t *)message_buffer = 0;
  buffer_size = CoreEngineSystemCleanup(message_buffer);
  
  // 设置调试消息格式
  *message_buffer = 0x61657263;  // "acre"
  message_buffer[1] = 0x6f5f6574; // "o_et"
  message_buffer[2] = 0x6873656e; // "hsen"
  message_buffer[3] = 0x655f746f; // "e_to"
  message_buffer[4] = 0x746e6576; // "tnev"
  *(int16_t *)(message_buffer + 5) = 0x20; // 空格
  
  string_length = *(int *)(state_data + 0x10);
  if (0 < string_length) {
    if ((string_length != -0x15) && (buffer_size < string_length + 0x16U)) {
      message_buffer = (int32_t *)FUN_18062b8b0(system_memory_pool_ptr, message_buffer, string_length + 0x16U, 0x10, 0x13);
      CoreEngineSystemCleanup(message_buffer);
      string_length = *(int *)(state_data + 0x10);
    }
    // 复制状态信息到消息缓冲区
    memcpy((int8_t *)((int64_t)message_buffer + 0x15), *(uint64_t *)(state_data + 8),
           (int64_t)(string_length + 1));
  }
  
  if (message_buffer == (int32_t *)0x0) {
    message_buffer = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr, 0x17, 0x13);
    *(int8_t *)message_buffer = 0;
build_message:
    CoreEngineSystemCleanup(message_buffer);
  }
  else if (buffer_size < 0x17) {
    message_buffer = (int32_t *)FUN_18062b8b0(system_memory_pool_ptr, message_buffer, 0x17, 0x10, 0x13);
    goto build_message;
  }
  
  *(int16_t *)((int64_t)message_buffer + 0x15) = 10; // 换行符
  
  temp_buffer = (int32_t *)&system_buffer_ptr;
  if (message_buffer != (int32_t *)0x0) {
    temp_buffer = message_buffer;
  }
  
  // 输出调试消息
  FUN_1800623b0(system_message_context, 0, 0x1000000000000, 3, temp_buffer);
  if (message_buffer != (int32_t *)0x0) {
    CoreEngineMemoryPoolCleaner(message_buffer);
  }

skip_debug_logging:
  process_result = process_event_trigger(event_context, state_data, 0);
  string_length = FUN_180840490(process_result, &result_code);
  
  string_ptr = &system_buffer_ptr;
  if (*(void **)(state_data + 8) != (void *)0x0) {
    string_ptr = *(void **)(state_data + 8);
  }
  FUN_180211a30(string_length, string_ptr);
  
  if (string_length != 0) {
    FUN_1800623b0(system_message_context, 0, 0, 3, &unknown_var_3528_ptr, result_code, error_code);
    return 0;
  }
  return result_code;
}

/**
 * 处理事件系统的线程安全操作
 * @param event_context 事件上下文指针
 * @param operation_code 操作代码
 * @return 处理结果状态码
 */
uint64_t process_thread_safe_event_operation(int64_t event_context, int32_t operation_code)
{
  int lock_result;
  uint buffer_size;
  uint64_t process_result;
  int32_t *message_buffer;
  uint64_t result_code;
  void *string_data;
  int32_t *temp_buffer;
  uint temp_size;
  uint64_t debug_result;
  
  // 检查事件系统是否已启用
  if (*(char *)(event_context + 0x210) != '\0') {
    return 0;
  }
  
  // 获取线程锁
  lock_result = _Mtx_lock(event_context + 0x318);
  if (lock_result != 0) {
    __Throw_C_error_std__YAXH_Z(lock_result);
  }
  
  if (*(int *)(core_system_data_buffer + 0x9a0) == 0) goto skip_debug_logging;
  
  string_data = &system_data_buffer_ptr;
  debug_result = 0;
  temp_buffer = (int32_t *)0x0;
  temp_size = 0;
  
  // 创建调试消息缓冲区
  temp_buffer = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr, 0x16, 0x13);
  *(int8_t *)temp_buffer = 0;
  buffer_size = CoreEngineSystemCleanup(temp_buffer);
  
  // 设置调试消息格式
  *temp_buffer = 0x61657263;  // "acre"
  temp_buffer[1] = 0x6f5f6574; // "o_et"
  temp_buffer[2] = 0x6873656e; // "hsen"
  temp_buffer[3] = 0x655f746f; // "e_to"
  temp_buffer[4] = 0x746e6576; // "tnev"
  *(int16_t *)(temp_buffer + 5) = 0x20; // 空格
  
  temp_size = 0x15;
  debug_result._0_4_ = buffer_size;
  FUN_180628380(&string_data, operation_code);
  
  lock_result = temp_size + 1;
  if (lock_result != 0) {
    buffer_size = temp_size + 2;
    if (temp_buffer == (int32_t *)0x0) {
      if ((int)buffer_size < 0x10) {
        buffer_size = 0x10;
      }
      temp_buffer = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr, (int64_t)(int)buffer_size, 0x13);
      *(int8_t *)temp_buffer = 0;
    }
    else {
      if (buffer_size <= (uint)debug_result) goto buffer_ready;
      temp_buffer = (int32_t *)FUN_18062b8b0(system_memory_pool_ptr, temp_buffer, buffer_size, 0x10, 0x13);
    }
    debug_result._0_4_ = CoreEngineSystemCleanup(temp_buffer);
  }

buffer_ready:
  *(int16_t *)((uint64_t)temp_size + (int64_t)temp_buffer) = 10; // 换行符
  
  message_buffer = (int32_t *)&system_buffer_ptr;
  if (temp_buffer != (int32_t *)0x0) {
    message_buffer = temp_buffer;
  }
  temp_size = lock_result;
  
  // 输出调试消息
  FUN_1800623b0(system_message_context, 0, 0x1000000000000, 3, message_buffer);
  string_data = &system_data_buffer_ptr;
  if (temp_buffer != (int32_t *)0x0) {
    CoreEngineMemoryPoolCleaner();
  }
  temp_buffer = (int32_t *)0x0;
  debug_result = (uint64_t)debug_result._4_4_ << 0x20;
  string_data = &system_state_ptr;

skip_debug_logging:
  process_result = process_event_type(event_context, operation_code, 0);
  lock_result = FUN_180840490(process_result, &result_code);
  FUN_180211a30(lock_result, &system_buffer_ptr);
  process_result = result_code;
  
  if (lock_result != 0) {
    FUN_1800623b0(system_message_context, 0, 0x1000000000000, 3, &system_handler1_ptr, result_code);
    process_result = 0;
  }
  
  // 释放线程锁
  lock_result = _Mtx_unlock(event_context + 0x318);
  if (lock_result != 0) {
    __Throw_C_error_std__YAXH_Z(lock_result);
  }
  return process_result;
}

/**
 * 添加事件到事件队列
 * @param event_context 事件上下文指针
 * @param event_data 事件数据
 */
void add_event_to_queue(int64_t event_context, uint64_t event_data)
{
  int64_t lock_address;
  int lock_result;
  int32_t format_result;
  uint64_t parsed_data;
  int64_t search_result;
  void *string_ptr;
  uint64_t *queue_end;
  uint64_t *queue_start;
  uint64_t *queue_position;
  int8_t security_buffer[32];
  uint64_t debug_handle;
  void *temp_string;
  uint64_t *queue_capacity;
  uint64_t *new_queue;
  uint64_t security_check;
  
  debug_handle = 0xfffffffffffffffe;
  security_check = GET_SECURITY_COOKIE() ^ (uint64_t)security_buffer;
  
  lock_address = event_context + 0x318;
  lock_result = _Mtx_lock(lock_address);
  if (lock_result != 0) {
    __Throw_C_error_std__YAXH_Z(lock_result);
  }
  
  // 解析事件数据
  parsed_data = FUN_180624440(security_buffer, event_data);
  FUN_1806279c0(&temp_string, parsed_data);
  
  security_buffer[0] = &system_state_ptr;
  debug_handle = 0;
  
  string_ptr = &system_buffer_ptr;
  if (temp_string != (void *)0x0) {
    string_ptr = temp_string;
  }
  
  // 检查事件是否已存在
  lock_result = FUN_180848090(*(uint64_t *)(event_context + 0x368), string_ptr, 0, &debug_handle);
  string_ptr = &system_buffer_ptr;
  if (temp_string != (void *)0x0) {
    string_ptr = temp_string;
  }
  FUN_180211a30(lock_result, string_ptr);
  
  if (lock_result != 0) {
    string_ptr = &system_buffer_ptr;
    if (temp_string != (void *)0x0) {
      string_ptr = temp_string;
    }
    SystemDataInitializer(&unknown_var_3704_ptr, string_ptr);
    goto cleanup_and_exit;
  }
  
  // 检查是否为特殊事件类型
  string_ptr = &system_buffer_ptr;
  if (temp_string != (void *)0x0) {
    string_ptr = temp_string;
  }
  search_result = strstr(string_ptr, &unknown_var_3736_ptr);
  if (search_result == 0) {
    string_ptr = &system_buffer_ptr;
    if (temp_string != (void *)0x0) {
      string_ptr = temp_string;
    }
    search_result = strstr(string_ptr, &system_buffer_e358);
    if (search_result != 0) goto process_special_event;
    string_ptr = &system_buffer_ptr;
    if (temp_string != (void *)0x0) {
      string_ptr = temp_string;
    }
    search_result = strstr(string_ptr, &unknown_var_3624_ptr);
    if (search_result != 0) goto process_special_event;
  }
  else {
process_special_event:
    format_result = FUN_1808482f0(debug_handle);
    string_ptr = &system_buffer_ptr;
    if (temp_string != (void *)0x0) {
      string_ptr = temp_string;
    }
    FUN_180211a30(format_result, string_ptr);
    format_result = FUN_180840c00(*(uint64_t *)(event_context + 0x368));
    FUN_180211a30(format_result, &system_buffer_ptr);
  }
  
  // 将事件添加到队列
  queue_end = *(uint64_t **)(event_context + 0x380);
  if (queue_end < *(uint64_t **)(event_context + 0x388)) {
    *(uint64_t **)(event_context + 0x380) = queue_end + 1;
    *queue_end = debug_handle;
    goto cleanup_and_exit;
  }
  
  // 队列已满，需要扩容
  queue_start = *(uint64_t **)(event_context + 0x378);
  search_result = (int64_t)queue_end - (int64_t)queue_start >> 3;
  if (search_result == 0) {
    search_result = 1;
calculate_new_size:
    new_queue = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr, search_result * 8, *(int8_t *)(event_context + 0x390));
    queue_end = *(uint64_t **)(event_context + 0x380);
    queue_start = *(uint64_t **)(event_context + 0x378);
  }
  else {
    search_result = search_result * 2;
    if (search_result != 0) goto calculate_new_size;
    new_queue = (uint64_t *)0x0;
  }
  
  // 复制现有队列数据到新队列
  if (queue_start != queue_end) {
    memmove(new_queue, queue_start, (int64_t)queue_end - (int64_t)queue_start);
  }
  
  *new_queue = debug_handle;
  if (*(int64_t *)(event_context + 0x378) != 0) {
    CoreEngineMemoryPoolCleaner();
  }
  
  // 更新队列指针
  *(uint64_t **)(event_context + 0x378) = new_queue;
  *(uint64_t **)(event_context + 0x380) = new_queue + 1;
  *(uint64_t **)(event_context + 0x388) = new_queue + search_result;

cleanup_and_exit:
  temp_string = &system_data_buffer_ptr;
  if (temp_string != (void *)0x0) {
    CoreEngineMemoryPoolCleaner();
  }
  temp_string = (void *)0x0;
  format_result = 0;
  temp_string = &system_state_ptr;
  
  // 释放线程锁
  lock_result = _Mtx_unlock(lock_address);
  if (lock_result != 0) {
    __Throw_C_error_std__YAXH_Z(lock_result);
  }
  
  // 安全检查
  SystemSecurityChecker(security_check ^ (uint64_t)security_buffer);
}

/**
 * 初始化事件系统配置
 * @param event_context 事件上下文指针
 * @param config_data 配置数据数组
 * @param config_params 配置参数数组
 */
void initialize_event_system_config(int64_t event_context, uint64_t *config_data, int32_t *config_params)
{
  int32_t temp_result;
  uint64_t config_value;
  int check_result;
  int8_t security_buffer[32];
  int32_t config_params_copy[6];
  int32_t u_stack_54;
  int32_t u_stack_50;
  int32_t u_stack_48;
  uint64_t u_stack_44;
  int32_t u_stack_3c;
  uint u_stack_38;
  uint u_stack_34;
  uint u_stack_30;
  int32_t u_stack_2c;
  int32_t u_stack_28;
  int32_t u_stack_24;
  uint64_t security_check;
  
  security_check = GET_SECURITY_COOKIE() ^ (uint64_t)security_buffer;
  
  // 检查事件系统是否已禁用
  if (*(char *)(event_context + 0x210) == '\0') {
    config_value = config_data[1];
    u_stack_44 = 0;
    u_stack_3c = 0;
    
    // 设置事件系统配置数据
    *(uint64_t *)(event_context + 0x188) = *config_data;
    *(uint64_t *)(event_context + 400) = config_value;
    config_value = config_data[3];
    *(uint64_t *)(event_context + 0x198) = config_data[2];
    *(uint64_t *)(event_context + 0x1a0) = config_value;
    config_value = config_data[5];
    *(uint64_t *)(event_context + 0x1a8) = config_data[4];
    *(uint64_t *)(event_context + 0x1b0) = config_value;
    
    // 复制配置参数
    config_params_copy[0] = *(int32_t *)(config_data + 6);
    config_params_copy[1] = *(int32_t *)((int64_t)config_data + 0x34);
    config_params_copy[2] = *(int32_t *)(config_data + 7);
    temp_result = *(int32_t *)((int64_t)config_data + 0x3c);
    
    *(int32_t *)(event_context + 0x1b8) = config_params_copy[0];
    *(int32_t *)(event_context + 0x1bc) = config_params_copy[1];
    *(int32_t *)(event_context + 0x1c0) = config_params_copy[2];
    *(int32_t *)(event_context + 0x1c4) = temp_result;
    
    // 计算配置校验值
    u_stack_38 = *(uint *)(event_context + 0x1a8) ^ 0x80000000;
    u_stack_34 = *(uint *)(event_context + 0x1b0) ^ 0x80000000;
    u_stack_30 = *(uint *)(event_context + 0x1ac) ^ 0x80000000;
    
    u_stack_54 = *config_params;
    u_stack_50 = config_params[1];
    u_stack_48 = config_params[2];
    temp_result = config_params[3];
    
    u_stack_2c = *(int32_t *)(event_context + 0x198);
    u_stack_24 = *(int32_t *)(event_context + 0x19c);
    u_stack_28 = *(int32_t *)(event_context + 0x1a0);
    
    *(int32_t *)(event_context + 0x1c8) = u_stack_54;
    *(int32_t *)(event_context + 0x1cc) = u_stack_50;
    *(int32_t *)(event_context + 0x1d0) = u_stack_48;
    *(int32_t *)(event_context + 0x1d4) = temp_result;
    
    // 验证配置参数
    check_result = FUN_180849990(*(uint64_t *)(event_context + 0x368), 0, &config_params_copy[0], &u_stack_54);
    if (check_result != 0) {
      SystemDataInitializer(&unknown_var_3632_ptr);
    }
  }
  
  // 安全检查
  SystemSecurityChecker(security_check ^ (uint64_t)security_buffer);
}

/**
 * 移除指定的事件处理器
 * @param event_context 事件上下文指针
 * @param handler_id 要移除的处理器ID
 */
void remove_event_handler(int64_t event_context, int handler_id)
{
  int64_t *hash_table_entry;
  int64_t table_size;
  int *handler_entry;
  int *next_handler;
  int64_t handler_data;
  int *current_handler;
  int64_t *table_entry;
  
  table_size = *(int64_t *)(event_context + 0x38);
  table_entry = (int64_t *)
           (table_size + ((uint64_t)(int64_t)handler_id % (uint64_t)*(uint *)(event_context + 0x40)) * 8);
  current_handler = (int *)*table_entry;
  
  do {
    if (current_handler == (int *)0x0) {
      handler_data = *(int64_t *)(event_context + 0x40);
      table_entry = (int64_t *)(table_size + handler_data * 8);
      current_handler = (int *)*table_entry;
remove_handler:
      if (current_handler != *(int **)(table_size + handler_data * 8)) {
        table_size = *(int64_t *)(current_handler + 2);
        FUN_180849230(*(uint64_t *)(table_size + 0x80));
        *(uint64_t *)(table_size + 0x80) = 0;
        table_size = *(int64_t *)(current_handler + 4);
        hash_table_entry = table_entry;
        
        // 查找链表中的下一个处理器
        while (table_size == 0) {
          hash_table_entry = hash_table_entry + 1;
          table_size = *hash_table_entry;
        }
        
        handler_entry = (int *)*table_entry;
        next_handler = *(int **)(handler_entry + 4);
        if (handler_entry == current_handler) {
          *table_entry = (int64_t)next_handler;
        }
        else {
          // 遍历链表找到要移除的处理器
          for (; next_handler != current_handler; next_handler = *(int **)(next_handler + 4)) {
            handler_entry = next_handler;
          }
          *(uint64_t *)(handler_entry + 4) = *(uint64_t *)(next_handler + 4);
        }
        
        // 调用处理器的清理函数
        if (*(int64_t **)(current_handler + 2) != (int64_t *)0x0) {
          (**(code **)(**(int64_t **)(current_handler + 2) + 0x38))();
        }
        CoreEngineMemoryPoolCleaner(current_handler);
      }
      return;
    }
    
    if (handler_id == *current_handler) {
      handler_data = *(int64_t *)(event_context + 0x40);
      goto remove_handler;
    }
    current_handler = *(int **)(current_handler + 4);
  } while( true );
}

/**
 * 检查指定的事件处理器是否存在
 * @param event_context 事件上下文指针
 * @param handler_id 要检查的处理器ID
 * @return 处理器是否存在（true/false）
 */
bool is_event_handler_registered(int64_t event_context, int handler_id)
{
  int64_t table_size;
  int *handler_entry;
  int64_t table_index;
  int status_buffer[6];
  
  table_size = *(int64_t *)(event_context + 0x38);
  handler_entry = *(int **)(table_size + ((uint64_t)(int64_t)handler_id % (uint64_t)*(uint *)(event_context + 0x40)) *
                             8);
  do {
    if (handler_entry == (int *)0x0) {
      table_index = *(int64_t *)(event_context + 0x40);
      handler_entry = *(int **)(table_size + table_index * 8);
check_handler:
      if (handler_entry == *(int **)(table_size + table_index * 8)) {
        return false;
      }
      FUN_180846d30(*(uint64_t *)(*(int64_t *)(handler_entry + 2) + 0x78), status_buffer);
      return status_buffer[0] != 2;
    }
    
    if (handler_id == *handler_entry) {
      table_index = *(int64_t *)(event_context + 0x40);
      goto check_handler;
    }
    handler_entry = *(int **)(handler_entry + 4);
  } while( true );
}

/**
 * 更新事件系统的渲染参数
 * @param event_context 事件上下文指针
 */
void update_event_rendering_params(int64_t event_context)
{
  int8_t security_buffer[32];
  float render_params[16];
  int32_t texture_params[2];
  int32_t u_stack_38;
  int32_t u_stack_2c;
  int32_t u_stack_24;
  uint64_t security_check;
  
  security_check = GET_SECURITY_COOKIE() ^ (uint64_t)security_buffer;
  
  // 获取当前渲染参数
  FUN_1808452a0(*(uint64_t *)(event_context + 0x368), &render_params[3], &render_params[2]);
  FUN_18010f010(&unknown_var_3776_ptr);
  FUN_18010f010(&unknown_var_3800_ptr, (double)render_params[2]);
  FUN_18010f010(&unknown_var_3744_ptr, (double)render_params[1]);
  FUN_18010f010(&unknown_var_3760_ptr, (double)render_params[0]);
  FUN_18010f010(&unknown_var_3856_ptr, (double)render_params[4]);
  FUN_18010f010(&unknown_var_3880_ptr, (double)render_params[3]);
  
  // 获取纹理参数
  FUN_180845090(*(uint64_t *)(event_context + 0x368), texture_params);
  FUN_18010f010(&unknown_var_3816_ptr, u_stack_2c);
  FUN_18010f010(&unknown_var_3840_ptr, u_stack_24);
  FUN_18010f010(&unknown_var_3928_ptr, texture_params[0]);
  FUN_18010f010(&unknown_var_3968_ptr, u_stack_38);
  
  // 初始化并更新渲染参数
  render_params[0] = 0.0;
  FUN_180846210(*(uint64_t *)(event_context + 0x368), &unknown_var_3896_ptr, &render_params[0], 0);
  render_params[1] = 0.0;
  FUN_180846210(*(uint64_t *)(event_context + 0x368), &unknown_var_3912_ptr, &render_params[1], 0);
  render_params[2] = 0.0;
  FUN_180846210(*(uint64_t *)(event_context + 0x368), &unknown_var_4048_ptr, &render_params[2], 0);
  render_params[3] = 0.0;
  FUN_180846210(*(uint64_t *)(event_context + 0x368), &unknown_var_4064_ptr, &render_params[3], 0);
  render_params[4] = 0.0;
  FUN_180846210(*(uint64_t *)(event_context + 0x368), &unknown_var_7676_ptr, &render_params[4], 0);
  render_params[5] = 0.0;
  FUN_180846210(*(uint64_t *)(event_context + 0x368), &unknown_var_4008_ptr, &render_params[5], 0);
  render_params[6] = 0.0;
  FUN_180846210(*(uint64_t *)(event_context + 0x368), &unknown_var_4032_ptr, &render_params[6], 0);
  render_params[7] = 0.0;
  FUN_180846210(*(uint64_t *)(event_context + 0x368), &unknown_var_4112_ptr, &render_params[7], 0);
  render_params[8] = 0.0;
  FUN_180846210(*(uint64_t *)(event_context + 0x368), &unknown_var_4128_ptr, &render_params[8], 0);
  render_params[9] = 0.0;
  FUN_180846210(*(uint64_t *)(event_context + 0x368), &unknown_var_4072_ptr, &render_params[9], 0);
  render_params[10] = 0.0;
  FUN_180846210(*(uint64_t *)(event_context + 0x368), &unknown_var_4096_ptr, &render_params[10], 0);
  
  // 应用渲染参数更新
  FUN_18010f010(&unknown_var_4184_ptr);
  FUN_18010f010(&unknown_var_4208_ptr);
  FUN_18010f010(&unknown_var_4184_ptr);
  FUN_18010f010(&unknown_var_4152_ptr, (double)render_params[0]);
  FUN_18010f010(&unknown_var_4168_ptr, (double)render_params[1]);
  FUN_18010f010(&unknown_var_4280_ptr, (double)render_params[2]);
  FUN_18010f010(&unknown_var_4304_ptr, (double)render_params[3]);
  FUN_18010f010(&unknown_var_4232_ptr, (double)render_params[4]);
  FUN_18010f010(&unknown_var_4248_ptr, (double)render_params[5]);
  FUN_18010f010(&unknown_var_4368_ptr, (double)render_params[6]);
  FUN_18010f010(&unknown_var_4384_ptr, (double)render_params[7]);
  FUN_18010f010(&unknown_var_4320_ptr, (double)render_params[8]);
  FUN_18010f010(&unknown_var_4344_ptr, (double)render_params[9]);
  FUN_18010f010(&unknown_var_4440_ptr, (double)render_params[10]);
  FUN_18010f010(&unknown_var_4184_ptr);
  
  // 安全检查
  SystemSecurityChecker(security_check ^ (uint64_t)security_buffer);
}