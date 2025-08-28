#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part025.c - 核心引擎内存管理和任务调度模块

// 全局变量定义
static void **g_global_context_table = (void **)0x1809feec8;
static void **g_global_shutdown_table = (void **)0x1809feeb8;
static void **g_global_allocator_table = (void **)0x1809feeb8;
static void **g_global_thread_table = (void **)0x180a21690;
static void **g_global_memory_table = (void **)0x180a21720;
static void **g_global_sync_table = (void **)0x18098bdc8;
static void **g_global_cleanup_table = (void **)0x1809feed8;
static void **g_global_debug_table = (void **)0x1809ff040;
static void **g_global_task_table = (void **)0x180a3c3e0;
static void **g_global_task_base = (void **)0x18098bcb0;
static void **g_global_log_table = (void **)0x1809ff538;
static void **g_global_error_table = (void **)0x1809ff550;
static void **g_global_exception_table = (void **)0x1809ff5b0;
static void **g_global_exit_table = (void **)0x1809ff538;
static void **g_global_crash_table = (void **)0x1809ff5b0;

// 内存管理相关常量
#define MEMORY_POOL_SIZE 0x130
#define MEMORY_POOL_OFFSET 0x138
#define MEMORY_QUEUE_SIZE 0x28
#define THREAD_ID_MASK 0x1f
#define MEMORY_ALLOC_SIZE 0x68
#define MEMORY_ALIGN_MASK 0x1f
#define MEMORY_BLOCK_SIZE 0x20
#define MEMORY_GUARD_SIZE 0x260
#define TASK_QUEUE_SIZE 0xe8

// 线程同步相关常量
#define MAX_THREAD_COUNT 0x80000000
#define THREAD_HASH_SEED1 0x7a143595
#define THREAD_HASH_SEED2 0x3d4d51cb
#define THREAD_HASH_SHIFT1 0x10
#define THREAD_HASH_SHIFT2 0x0d

// 错误代码
#define ERROR_INVALID_THREAD_ID -0x3fffff03
#define ERROR_INVALID_PROCESS_ID -0x3ffffffb
#define ERROR_TIMEOUT 0x102
#define ERROR_DEBUGGER_PRESENT 0x1
#define ERROR_MEMORY_CORRUPTION 0x5

/**
 * 处理内存块队列的清理和释放
 * @param context 上下文指针，包含内存管理信息
 */
void process_memory_block_cleanup(void **context)
{
  int *lock_status;
  int lock_value;
  unsigned long long start_index;
  unsigned long long end_index;
  long long *queue_ptr;
  long long queue_size;
  long long current_block;
  long long next_block;
  long long memory_offset;
  unsigned long long block_index;
  bool is_committed;
  
  // 设置全局上下文表
  *context = g_global_context_table;
  start_index = context[4];
  current_block = 0;
  end_index = context[5];
  
  // 遍历内存块队列
  for (block_index = end_index; block_index != start_index; block_index = block_index + 1) {
    // 每32个块处理一次对齐
    if ((block_index & THREAD_ID_MASK) == 0) {
      if (current_block != 0) {
        queue_size = context[10];
        LOCK();
        lock_status = (int *)(current_block + MEMORY_POOL_SIZE);
        lock_value = *lock_status;
        *lock_status = *lock_status - MAX_THREAD_COUNT;
        UNLOCK();
        if (lock_value == 0) {
          memory_offset = *(long long *)(queue_size + MEMORY_QUEUE_SIZE);
          do {
            *(long long *)(current_block + MEMORY_POOL_OFFSET) = memory_offset;
            *(unsigned int *)(current_block + MEMORY_POOL_SIZE) = 1;
            queue_ptr = (long long *)(queue_size + MEMORY_QUEUE_SIZE);
            LOCK();
            next_block = *queue_ptr;
            is_committed = memory_offset == next_block;
            if (is_committed) {
              *queue_ptr = current_block;
              next_block = memory_offset;
            }
            UNLOCK();
            if (is_committed) break;
            LOCK();
            lock_status = (int *)(current_block + MEMORY_POOL_SIZE);
            lock_value = *lock_status;
            *lock_status = *lock_status + (MAX_THREAD_COUNT - 1);
            UNLOCK();
            memory_offset = next_block;
          } while (lock_value == 1);
        }
      }
    // 处理内存块队列中的下一个块
    queue_ptr = (long long *)context[0xc];
    current_block = *(long long *)
                     (*(long long *)
                       (queue_ptr[3] +
                       (queue_ptr[1] +
                        ((block_index & 0xffffffffffffffe0) - **(long long **)(queue_ptr[3] + queue_ptr[1] * 8) >> 5)
                       & *queue_ptr - 1U) * 8) + 8);
    }
    else if (current_block == 0) {
      queue_ptr = (long long *)context[0xc];
      current_block = *(long long *)
                       (*(long long *)
                         (queue_ptr[3] +
                         (queue_ptr[1] +
                          ((block_index & 0xffffffffffffffe0) - **(long long **)(queue_ptr[3] + queue_ptr[1] * 8) >> 5)
                         & *queue_ptr - 1U) * 8) + 8);
    }
  }
  
  // 处理剩余的内存块
  current_block = context[8];
  if ((current_block != 0) && ((end_index != start_index || ((start_index & THREAD_ID_MASK) != 0)))) {
    queue_size = context[10];
    LOCK();
    lock_status = (int *)(current_block + MEMORY_POOL_SIZE);
    lock_value = *lock_status;
    *lock_status = *lock_status - MAX_THREAD_COUNT;
    UNLOCK();
    if (lock_value == 0) {
      memory_offset = *(long long *)(queue_size + MEMORY_QUEUE_SIZE);
      do {
        *(long long *)(current_block + MEMORY_POOL_OFFSET) = memory_offset;
        *(unsigned int *)(current_block + MEMORY_POOL_SIZE) = 1;
        queue_ptr = (long long *)(queue_size + MEMORY_QUEUE_SIZE);
        LOCK();
        next_block = *queue_ptr;
        is_committed = memory_offset == next_block;
        if (is_committed) {
          *queue_ptr = current_block;
          next_block = memory_offset;
        }
        UNLOCK();
        if (is_committed) break;
        LOCK();
        lock_status = (int *)(current_block + MEMORY_POOL_SIZE);
        lock_value = *lock_status;
        *lock_status = *lock_status + (MAX_THREAD_COUNT - 1);
        UNLOCK();
        memory_offset = next_block;
      } while (lock_value == 1);
    }
  }
  
  // 清理上下文
  if (context[0xc] != 0) {
    // 警告：子函数不返回
    trigger_emergency_cleanup();
  }
  *context = g_global_shutdown_table;
  return;
}

/**
 * 获取线程本地存储的内存分配器
 * @param thread_context 线程上下文指针
 * @return 分配的内存块指针，失败返回NULL
 */
void **get_thread_local_allocator(long long *thread_context)
{
  long long *counter_ptr;
  unsigned int *slot_ptr;
  unsigned long long *hash_table;
  unsigned long long hash_value;
  unsigned int thread_id;
  unsigned long long current_hash;
  unsigned long long *table_ptr;
  void **allocator_ptr;
  long long allocation_count;
  long long max_allocations;
  void **new_allocator;
  unsigned long long table_size;
  unsigned long long new_size;
  unsigned int slot_status;
  void **temp_ptr;
  bool slot_available;
  bool is_primary_table;
  
  // 获取当前线程ID并计算哈希值
  thread_id = GetCurrentThreadId();
  current_hash = (thread_id >> THREAD_HASH_SHIFT1 ^ thread_id) * -THREAD_HASH_SEED1;
  current_hash = (current_hash >> THREAD_HASH_SHIFT2 ^ current_hash) * -THREAD_HASH_SEED2;
  hash_value = (unsigned long long)(current_hash >> THREAD_HASH_SHIFT1 ^ current_hash);
  
  table_ptr = (unsigned long long *)thread_context[6];
  
  // 在哈希表中查找线程本地存储
  for (hash_table = table_ptr; hash_value = current_hash, hash_table != (unsigned long long *)0x0; hash_table = (unsigned long long *)hash_table[2])
  {
    while( true ) {
      current_hash = current_hash & *hash_table - 1;
      slot_status = *(unsigned int *)(current_hash * MEMORY_BLOCK_SIZE + hash_table[1]);
      if (slot_status == thread_id) {
        new_allocator = *(void **)(hash_table[1] + 8 + current_hash * MEMORY_BLOCK_SIZE);
        if (hash_table == table_ptr) {
          return new_allocator;
        }
        // 在主表中查找空闲槽位
        do {
          hash_value = hash_value & *table_ptr - 1;
          if (*(int *)(table_ptr[1] + hash_value * MEMORY_BLOCK_SIZE) == 0) {
            slot_ptr = (unsigned int *)(table_ptr[1] + hash_value * MEMORY_BLOCK_SIZE);
            LOCK();
            slot_available = *slot_ptr == 0;
            if (slot_available) {
              *slot_ptr = thread_id;
            }
            UNLOCK();
            if (slot_available) {
              *(void **)(table_ptr[1] + 8 + hash_value * MEMORY_BLOCK_SIZE) = new_allocator;
              return new_allocator;
            }
          }
          hash_value = hash_value + 1;
        } while( true );
      }
      if (slot_status == 0) break;
      current_hash = current_hash + 1;
    }
  }
  
  // 如果没有找到，创建新的分配器
  LOCK();
  counter_ptr = thread_context + 7;
  allocation_count = *counter_ptr;
  *counter_ptr = *counter_ptr + 1;
  UNLOCK();
  current_hash = allocation_count + 1;
  new_allocator = (void **)0x0;
  
  while( true ) {
    // 检查是否需要扩展哈希表
    if (*table_ptr >> 1 <= current_hash) {
      LOCK();
      slot_ptr = (unsigned int *)(thread_context + 0x4b);
      slot_status = *slot_ptr;
      *slot_ptr = *slot_ptr | 1;
      UNLOCK();
      if ((slot_status & 1) == 0) {
        hash_table = (unsigned long long *)thread_context[6];
        table_ptr = hash_table;
        table_size = *hash_table;
        if (*hash_table >> 1 <= current_hash) {
          do {
            new_size = table_size;
            table_size = new_size * 2;
          } while ((new_size & 0x7fffffffffffffff) <= current_hash);
          table_ptr = (unsigned long long *)allocate_aligned_memory(get_global_heap(),new_size * MEMORY_BLOCK_SIZE + MEMORY_ALIGN_MASK,10);
          if (table_ptr == (unsigned long long *)0x0) {
            LOCK();
            thread_context[7] = thread_context[7] - 1;
            UNLOCK();
            *(unsigned int *)(thread_context + 0x4b) = 0;
            return (void **)0x0;
          }
          *table_ptr = table_size;
          table_ptr[1] = (unsigned long long)(-(int)(table_ptr + 3) & 7) + (long long)(table_ptr + 3);
          temp_ptr = new_allocator;
          for (; table_size != 0; table_size = table_size - 1) {
            *(void **)((long long)temp_ptr + table_ptr[1] + 8) = 0;
            *(unsigned int *)((long long)temp_ptr + table_ptr[1]) = 0;
            temp_ptr = temp_ptr + 2;
          }
          table_ptr[2] = (unsigned long long)hash_table;
          thread_context[6] = (long long)table_ptr;
        }
        *(unsigned int *)(thread_context + 0x4b) = 0;
      }
    }
    
    // 检查是否需要重新哈希
    if (current_hash < (*table_ptr >> 2) + (*table_ptr >> 1)) break;
    table_ptr = (unsigned long long *)thread_context[6];
  }
  
  // 查找可用的分配器槽位
  temp_ptr = (void **)*thread_context;
  while (temp_ptr != (void **)0x0) {
    if ((*(char *)(temp_ptr + 2) != '\0') && (*(char *)(temp_ptr + 9) == '\0')) {
      is_primary_table = true;
      LOCK();
      slot_available = *(char *)(temp_ptr + 2) == '\x01';
      if (slot_available) {
        *(char *)(temp_ptr + 2) = '\0';
      }
      UNLOCK();
      if (slot_available) goto found_allocator;
    }
    counter_ptr = temp_ptr + 1;
    temp_ptr = (void **)(*counter_ptr - 8);
    if (*counter_ptr == 0) {
      temp_ptr = new_allocator;
    }
  }
  
  is_primary_table = false;
  allocator_ptr = (void **)allocate_aligned_memory(get_global_heap(),MEMORY_ALLOC_SIZE,10);
  temp_ptr = new_allocator;
  if (allocator_ptr != (void **)0x0) {
    allocator_ptr[1] = 0;
    *(unsigned char *)(allocator_ptr + 2) = 0;
    allocator_ptr[3] = 0;
    *allocator_ptr = g_global_allocator_table;
    allocator_ptr[4] = 0;
    allocator_ptr[5] = 0;
    allocator_ptr[6] = 0;
    allocator_ptr[7] = 0;
    allocator_ptr[8] = 0;
    *(unsigned char *)(allocator_ptr + 9) = 0;
    allocator_ptr[10] = thread_context;
    *allocator_ptr = g_global_context_table;
    allocator_ptr[0xb] = MEMORY_BLOCK_SIZE;
    allocator_ptr[0xc] = 0;
    register_allocator(allocator_ptr);
    LOCK();
    *(int *)(thread_context + 1) = (int)thread_context[1] + 1;
    UNLOCK();
    allocation_count = *thread_context;
    do {
      temp_ptr = (void **)(allocation_count + 8);
      if (allocation_count == 0) {
        temp_ptr = new_allocator;
      }
      allocator_ptr[1] = temp_ptr;
      LOCK();
      max_allocations = *thread_context;
      slot_available = allocation_count == max_allocations;
      if (slot_available) {
        *thread_context = (long long)allocator_ptr;
        max_allocations = allocation_count;
      }
      UNLOCK();
      allocation_count = max_allocations;
      temp_ptr = allocator_ptr;
    } while (!slot_available);
  }
  
found_allocator:
  if (temp_ptr == (void **)0x0) {
    LOCK();
    thread_context[7] = thread_context[7] - 1;
    UNLOCK();
    return (void **)0x0;
  }
  if (is_primary_table) {
    LOCK();
    thread_context[7] = thread_context[7] - 1;
    UNLOCK();
  }
  
  // 在哈希表中注册新的分配器
  do {
    hash_value = hash_value & *table_ptr - 1;
    if (*(int *)(table_ptr[1] + hash_value * MEMORY_BLOCK_SIZE) == 0) {
      slot_ptr = (unsigned int *)(table_ptr[1] + hash_value * MEMORY_BLOCK_SIZE);
      LOCK();
      slot_available = *slot_ptr == 0;
      if (slot_available) {
        *slot_ptr = thread_id;
      }
      UNLOCK();
      if (slot_available) {
        *(void **)(table_ptr[1] + 8 + hash_value * MEMORY_BLOCK_SIZE) = temp_ptr;
        return temp_ptr;
      }
    }
    hash_value = hash_value + 1;
  } while( true );
}

/**
 * 将数据写入内存分配器
 * @param allocator 分配器句柄
 * @param data_ptr 数据指针
 * @param data 数据内容
 * @return 成功返回1，失败返回0
 */
unsigned long long write_to_allocator(void *allocator, void **data_ptr)
{
  unsigned long long write_result;
  long long *queue_ptr;
  void *data_content;
  long long allocator_base;
  unsigned long long available_space;
  unsigned long long *block_ptr;
  
  allocator_base = get_thread_local_allocator();
  if (allocator_base == 0) {
    return 0;
  }
  
  write_result = *(unsigned long long *)(allocator_base + MEMORY_BLOCK_SIZE);
  
  // 检查是否需要对齐内存块
  if ((write_result & MEMORY_ALIGN_MASK) == 0) {
    available_space = (*(long long *)(allocator_base + MEMORY_QUEUE_SIZE) - write_result) - MEMORY_BLOCK_SIZE;
    if ((0x8000000000000000 < available_space) &&
       (queue_ptr = *(long long **)(allocator_base + 0x60), queue_ptr != (long long *)0x0)) {
      available_space = *queue_ptr - 1U & queue_ptr[1] + 1U;
      block_ptr = *(unsigned long long **)(queue_ptr[3] + available_space * 8);
      if ((*block_ptr == 1) || (block_ptr[1] == 0)) {
        *block_ptr = write_result;
        queue_ptr[1] = available_space;
      }
      else {
        available_space = register_allocator(allocator_base);
        if ((char)available_space == '\0') goto handle_unaligned_write;
        queue_ptr = *(long long **)(allocator_base + 0x60);
        available_space = *queue_ptr - 1U & queue_ptr[1] + 1U;
        block_ptr = *(unsigned long long **)(queue_ptr[3] + available_space * 8);
        *block_ptr = write_result;
        queue_ptr[1] = available_space;
      }
      available_space = get_allocator_handle(*(void *)(allocator_base + MEMORY_BLOCK_SIZE));
      if (available_space != 0) {
        *(void *)(available_space + MEMORY_BLOCK_SIZE) = 0;
        block_ptr[1] = available_space;
        *(unsigned long long *)(allocator_base + 0x40) = available_space;
        goto aligned_write_complete;
      }
      queue_ptr = *(long long **)(allocator_base + 0x60);
      available_space = queue_ptr[1] - 1;
      queue_ptr[1] = *queue_ptr - 1U & available_space;
      block_ptr[1] = 0;
    }
  handle_unaligned_write:
    available_space = available_space & 0xffffffffffffff00;
  }
  else {
  aligned_write_complete:
    data_content = *data_ptr;
    *(void *)(*(long long *)(allocator_base + 0x40) + (unsigned long long)((unsigned int)write_result & MEMORY_ALIGN_MASK) * 8) = data_content;
    *(unsigned long long *)(allocator_base + MEMORY_BLOCK_SIZE) = write_result + 1;
    available_space = ((int)((unsigned long long)data_content >> 8) << 8) | 1;
  }
  return available_space;
}

/**
 * 初始化任务管理器
 * @param task_manager 任务管理器指针
 * @param config 配置参数
 * @param priority 优先级
 * @param flags 标志位
 * @return 初始化的任务管理器指针
 */
void **initialize_task_manager(void **task_manager, void **config, void *priority, void *flags)
{
  void *vtable_ptr;
  
  *task_manager = g_global_thread_table;
  *task_manager = g_global_memory_table;
  *(unsigned int *)(task_manager + 1) = 0;
  *task_manager = g_global_sync_table;
  LOCK();
  *(unsigned char *)(task_manager + 2) = 0;
  UNLOCK();
  task_manager[3] = 0xffffffffffffffff;
  *task_manager = g_global_cleanup_table;
  task_manager[6] = 0;
  task_manager[7] = _guard_check_icall;
  
  // 配置任务管理器
  if (task_manager + 4 != config) {
    vtable_ptr = (void *)config[2];
    if (vtable_ptr != (void *)0x0) {
      ((void (*)(void *, void *, long long, void *, long long))vtable_ptr)(task_manager + 4, config, 1, flags, 0xfffffffffffffffe);
      vtable_ptr = (void *)config[2];
    }
    task_manager[6] = vtable_ptr;
    task_manager[7] = config[3];
  }
  
  // 启动任务管理器
  if ((void *)config[2] != (void *)0x0) {
    ((void (*)(void *, long long, long long))config[2])(config, 0, 0);
  }
  return task_manager;
}

/**
 * 创建任务队列
 * @param queue_handle 队列句柄
 * @param config 配置参数
 * @param priority 优先级
 * @param flags 标志位
 * @return 创建的队列句柄
 */
void *create_task_queue(void *queue_handle, void *config, void *priority, void *flags)
{
  void *timeout_value;
  unsigned int queue_size;
  void *queue_config;
  
  timeout_value = (void *)0xfffffffffffffffe;
  queue_size = 0;
  queue_config = get_current_thread_context();
  schedule_task(config, queue_config, priority, flags, queue_size, timeout_value);
  return config;
}

/**
 * 初始化队列结构
 * @param queue_ptr 队列指针
 * @param config 配置参数
 * @return 初始化的队列指针
 */
void **initialize_queue_structure(void *queue_ptr, void **config)
{
  *config = 0;
  config[1] = 0;
  config[2] = 0;
  *(unsigned int *)(config + 3) = 3;
  return config;
}

/**
 * 重置队列指针
 * @param queue_ptr 队列指针
 * @param config 配置参数
 * @return 重置后的配置指针
 */
void **reset_queue_pointer(void *queue_ptr, void **config)
{
  *config = 0;
  return config;
}

/**
 * 释放内存资源
 * @param memory_ptr 内存指针
 * @param size 内存大小
 * @param flags 标志位
 * @param context 上下文
 * @return 释放后的内存指针
 */
void *release_memory_resources(void *memory_ptr, unsigned long long size, void *flags, void *context)
{
  void *timeout_value;
  
  timeout_value = (void *)0xfffffffffffffffe;
  trigger_global_cleanup();
  if ((size & 1) != 0) {
    free_memory(memory_ptr, MEMORY_GUARD_SIZE, flags, context, timeout_value);
  }
  return memory_ptr;
}

/**
 * 处理系统信号和异常
 * @param signal_code 信号代码
 * @return 处理结果
 */
void *handle_system_signal(int signal_code)
{
  if ((signal_code != ERROR_INVALID_THREAD_ID) && (signal_code != ERROR_INVALID_PROCESS_ID)) {
    return 0;
  }
  ((void (*)(void))(*(long long **)get_global_heap())[0x68])();
  return (void *)1;
}

/**
 * 清理任务资源
 * @param task_ptr 任务指针
 * @param flags 标志位
 * @return 清理后的任务指针
 */
void **cleanup_task_resources(void **task_ptr, unsigned long long flags)
{
  *task_ptr = g_global_debug_table;
  task_ptr[0x18] = g_global_task_table;
  if (task_ptr[0x19] != 0) {
    // 警告：子函数不返回
    trigger_emergency_cleanup();
  }
  task_ptr[0x19] = 0;
  *(unsigned int *)(task_ptr + 0x1b) = 0;
  task_ptr[0x18] = g_global_task_base;
  register_task_manager(task_ptr);
  if ((flags & 1) != 0) {
    free_memory(task_ptr, TASK_QUEUE_SIZE);
  }
  return task_ptr;
}

/**
 * 处理系统崩溃和错误报告
 * @param error_code 错误代码
 * @param context 上下文
 */
void handle_system_crash(void *error_code, void *context)
{
  bool is_debugger_attached;
  char debug_status;
  int wait_result;
  int debug_flag;
  long long crash_context;
  void *error_info;
  void *crash_data;
  void *exception_data;
  bool is_main_thread;
  void *stack_ptr[4];
  void *stack_ptr2[4];
  unsigned int stack_size;
  long long stack_offset;
  unsigned int exception_code;
  
  wait_result = WaitForSingleObject(get_global_event_handle(), 0);
  if (wait_result != 0) {
    return;
  }
  
  is_main_thread = true;
  debug_status = ((void (*)(void))(*(void **)get_global_heap()))();
  if ((debug_status == '\0') && (wait_result = IsDebuggerPresent(), wait_result != 0)) {
    is_debugger_attached = true;
  }
  else {
    is_debugger_attached = false;
  }
  
  // 检查是否是主线程
  if (get_debug_context() != 0) {
    wait_result = *(int *)(*(long long **)(get_debug_context() + 8) + 0x48);
    debug_flag = _Thrd_id();
    is_main_thread = debug_flag == wait_result;
  }
  
  crash_data = (void *)0x0;
  if (!is_debugger_attached) {
    crash_context = get_crash_information(&stack_ptr[2], 0);
    crash_data = *(void **)(crash_context + 8);
    *(unsigned int *)(crash_context + 0x10) = 0;
    *(void **)(crash_context + 8) = 0;
    *(void **)(crash_context + 0x18) = 0;
    stack_ptr[2] = g_global_task_table;
    if (stack_offset != 0) {
      // 警告：子函数不返回
      trigger_emergency_cleanup();
    }
    stack_offset = 0;
    exception_code = 0;
    stack_ptr[2] = g_global_task_base;
  }
  
  // 准备崩溃报告
  stack_ptr[0] = g_global_task_table;
  stack_ptr2[1] = 0;
  stack_ptr[1] = (void *)0x0;
  stack_size = 0;
  log_error_message(&stack_ptr[0], g_global_log_table, context);
  log_error_message(get_error_context(), 5, 0xffffffff00000000, g_global_error_table);
  
  error_info = get_default_error_data();
  if (stack_ptr[1] != (void *)0x0) {
    error_info = stack_ptr[1];
  }
  log_error_message(get_error_context(), 5, 0xffffffff00000000, g_global_exception_table, error_info);
  
  error_info = get_default_error_data();
  if (crash_data != (void *)0x0) {
    error_info = crash_data;
  }
  log_debug_message(get_error_context(), 5, 0xffffffff00000000, 3, error_info);
  log_exception_details();
  
  error_info = get_default_error_data();
  if (stack_ptr[1] != (void *)0x0) {
    error_info = stack_ptr[1];
  }
  OutputDebugStringA(error_info);
  
  crash_context = get_crash_context();
  if (((is_main_thread) && (crash_context != 0)) && (*(char *)(crash_context + 0x1609) != '\x01')) {
    generate_crash_report(*(void *)(get_system_context() + 8), *(char *)(get_process_context() + 0x2028) != '\0',
                         *(unsigned int *)(crash_context + 0x160c));
    *(unsigned char *)(crash_context + 0x1609) = 1;
  }
  
  // 处理异常退出
  if (get_exception_flag() == '\0') {
    cleanup_system_resources();
  }
  else {
    crash_data = get_exception_handler(&stack_ptr[0]);
    execute_cleanup_tasks(crash_data);
  }
  
  // 释放事件句柄并退出
  release_event_handle(&get_global_event_handle(), 1);
  _Exit(5);
  return;
}

// 警告：移除了不可达的代码块
// 警告：全局变量在同一地址重叠