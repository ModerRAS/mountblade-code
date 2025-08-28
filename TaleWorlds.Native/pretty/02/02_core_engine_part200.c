#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part200.c - 核心引擎状态处理器

// 函数: void process_engine_state(void)
// 功能: 根据引擎当前状态执行相应的处理逻辑
// 这是简化实现，保留了原始代码的基本结构但改进了可读性
void process_engine_state(void)

{
  longlong engine_context;
  code ****state_handler_ptr;
  code *handler_func;
  code ******global_handler;
  code *****task_queue;
  undefined4 status_flag;
  int current_state;
  undefined8 memory_block;
  undefined4 *string_buffer;
  longlong temp_ptr;
  code *****callback_ptr;
  code ******event_handler;
  longlong list_iterator;
  longlong list_end;
  ulonglong counter;
  ulonglong loop_counter;
  undefined *data_ptr;
  longlong *list_head;
  longlong node_data;
  uint iteration_count;
  undefined1 buffer1[32];
  code ***handler_array;
  code *****event_queue;
  code *****task_list;
  code *****pending_tasks;
  code ***callback_chain;
  undefined4 *error_code;
  undefined8 context_data;
  undefined8 timestamp;
  undefined1 mode_flag;
  undefined *stack_ptr;
  undefined4 *result_ptr;
  undefined4 return_value;
  undefined8 address;
  undefined4 *function_ptr;
  undefined1 buffer2[32];
  undefined *heap_ptr;
  undefined1 *string_ptr;
  undefined4 buffer_size;
  undefined1 buffer3[32];
  undefined *temp_stack;
  undefined1 *temp_string;
  undefined4 temp_size;
  undefined1 buffer4[32];
  undefined *stack_alloc;
  undefined1 *alloc_string;
  undefined4 alloc_size;
  undefined1 buffer5[32];
  ulonglong checksum;
  
  // 初始化引擎上下文和变量
  engine_context = global_engine_context;
  context_data = 0xfffffffffffffffe;
  checksum = global_checksum ^ (ulonglong)buffer1;
  counter = 0;
  timestamp = 0;
  
  // 线程管理初始化
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8) +
               0x48) < max_thread_count) && (initialize_thread_manager(&max_thread_count), max_thread_count == -1)) {
    thread_manager_initialized = 0;
    setup_thread_pool(&thread_pool_config);
    cleanup_thread_manager(&max_thread_count);
  }
  
  mode_flag = 0;
  current_state = *(int *)(engine_context + 0x318);
  
  // 状态机主逻辑
  if (current_state == 0) {
    // 状态0: 初始化状态
    memory_block = allocate_memory_block(memory_allocator,0xe0,8,3);
    task_queue = (code *****)&handler_array;
    address = &engine_state_idle;
    timestamp = &engine_state_init;
    pending_tasks = (code *****)create_task_queue(memory_block,&handler_array);
    task_list = pending_tasks;
    if ((code ******)pending_tasks != (code ******)0x0) {
      (*(code *)(*pending_tasks)[5])(pending_tasks);
    }
    memory_block = global_memory_block;
    task_queue = (code *****)&task_list;
    if ((code ******)task_list != (code ******)0x0) {
      (*(code *)(*task_list)[5])(task_list);
    }
    release_memory_block(memory_block,&task_list);
    process_task_queue(engine_context + 800,&task_list);
    current_state = *(int *)(engine_context + 0x340);
    
    // 子状态2处理
    if (current_state == 2) {
      global_state_table = (undefined8 *)allocate_memory_block(memory_allocator,0x18,8,3);
      *global_state_table = 0;
      global_state_table[1] = 0;
      global_state_table[2] = 0;
      initialize_state_machine();
      initialize_event_system();
      current_state = *(int *)(engine_context + 0x340);
    }
    
    // 子状态3处理
    if (current_state == 3) {
      global_event_queue = allocate_memory_block(memory_allocator,0x18,8,3);
      setup_event_handlers();
      engine_context = global_event_queue;
      handler_array = (code ***)&event_handler_array;
      timestamp = (undefined *)0x0;
      error_code = (undefined4 *)0x0;
      address = (undefined *)((ulonglong)address & 0xffffffff00000000);
      string_buffer = (undefined4 *)allocate_string_buffer(memory_allocator,0x18,0x13);
      *(undefined1 *)string_buffer = 0;
      error_code = string_buffer;
      status_flag = validate_string_buffer(string_buffer);
      timestamp = (undefined *)CONCAT44(timestamp._4_4_,status_flag);
      *string_buffer = 0x65726f63;  // "core"
      string_buffer[1] = 0x5f726c63;  // "_rlc"
      string_buffer[2] = 0x61657263;  // "care"
      string_buffer[3] = 0x645f6574;  // "d_et"
      *(undefined8 *)(string_buffer + 4) = 0x65746167656c65;  // "elegate"
      address = (undefined *)CONCAT44(address._4_4_,0x17);
      GetProcAddress(*(undefined8 *)(engine_context + 0x10),string_buffer);
      handler_array = (code ***)&event_handler_array;
      free_string_buffer(string_buffer);
    }
    
    // 非零状态处理
    if (*(int *)(engine_context + 0x340) != 0) {
      task_queue = (code *****)allocate_memory_block(memory_allocator,400,8,3);
      *task_queue = (code ****)&state_handler_entry;
      task_queue[1] = (code ****)&state_handler_exit;
      task_queue[2] = (code ****)0x0;
      pending_tasks = task_queue + 0x2d;
      *pending_tasks = (code ****)0x0;
      task_queue[0x2e] = (code ****)0x0;
      task_queue[0x2f] = (code ****)0x0;
      *(undefined4 *)(task_queue + 0x30) = 3;
      *(undefined2 *)(task_queue + 0x31) = 0;
      global_task_manager = (code ******)task_queue;
      *(undefined4 *)((longlong)task_queue + 0x18c) = 0;
      *(code ******)(engine_context + 0x40) = task_queue;
      execute_task_sequence(global_task_sequence,&global_state_config);
    }
    
    // 任务队列初始化
    task_queue = (code *****)allocate_memory_block(memory_allocator,400,8,3);
    *task_queue = (code ****)&state_handler_entry;
    ((code ******)task_queue)[1] = (code *****)&state_handler_exit;
    ((code ******)task_queue)[2] = (code *****)0x0;
    pending_tasks = (code *****)((code ******)task_queue + 0x2d);
    *pending_tasks = (code ****)0x0;
    ((code ******)task_queue)[0x2e] = (code *****)0x0;
    ((code ******)task_queue)[0x2f] = (code *****)0x0;
    *(undefined4 *)((code ******)task_queue + 0x30) = 3;
    *(undefined2 *)((code ******)task_queue + 0x31) = 0;
    global_task_manager = (code ******)task_queue;
    *(undefined4 *)((longlong)task_queue + 0x18c) = 0;
    *task_queue = (code ****)&event_handler_start;
    *(code ******)(engine_context + 0x40) = task_queue;
    memory_block = allocate_memory_block(memory_allocator,0x238,8,3);
    memory_block = initialize_memory_pool(memory_block);
    (**(code **)(**(longlong **)(engine_context + 0x40) + 8))(*(longlong **)(engine_context + 0x40),memory_block);
    (**(code **)(**(longlong **)(engine_context + 0x2b0) + 0x80))
              (*(longlong **)(engine_context + 0x2b0),*(undefined8 *)(engine_context + 0x40));
    event_handler = (code ******)task_list;
    if ((*(int *)(engine_context + 0x3c) == -1) || (*(int *)(engine_context + 0x318) + 1 < *(int *)(engine_context + 0x3c)))
    {
      *(int *)(engine_context + 0x318) = *(int *)(engine_context + 0x318) + 1;
    }
  }
  else {
    // 状态1: 清理状态
    if (current_state == 1) {
      cleanup_memory_block(global_memory_block,engine_context + 800,0);
      release_task_queue(engine_context + 800);
      temp_ptr = global_context_manager;
      list_head = *(longlong **)(global_context_manager + 0x138);
      if (list_head != *(longlong **)(global_context_manager + 0x140)) {
        do {
          list_end = *list_head;
          if ((*(longlong *)(list_end + 0x15b8) == 0) && (*(int *)(list_end + 0x16c0) != 0)) {
            node_data = find_or_create_node(temp_ptr + 0xac0,list_end + 0x16b0);
            if (node_data == 0) {
              memory_block = allocate_memory_block(memory_allocator,0x50,0x10,3);
              node_data = create_linked_node(memory_block,list_end + 0x16b0);
              add_node_to_list(temp_ptr + 0xac0,node_data);
            }
            *(longlong *)(list_end + 0x15b8) = node_data;
          }
          list_head = list_head + 1;
        } while (list_head != *(longlong **)(temp_ptr + 0x140));
      }
      cleanup_list_manager(temp_ptr);
      shutdown_system_services();
      if (*(int *)(engine_context + 0x3c) != -1) {
        if (*(int *)(engine_context + 0x318) + 1 < *(int *)(engine_context + 0x3c)) {
          *(int *)(engine_context + 0x318) = *(int *)(engine_context + 0x318) + 1;
        }
        goto STATE_UPDATE_COMPLETE;
      }
STATE_INCREMENT:
      *(int *)(engine_context + 0x318) = *(int *)(engine_context + 0x318) + 1;
      goto STATE_UPDATE_COMPLETE;
    }
    
    // 状态2: 状态检查
    if (current_state == 2) {
      if ((*(int *)(engine_context + 0x3c) == -1) || (3 < *(int *)(engine_context + 0x3c))) {
        *(undefined4 *)(engine_context + 0x318) = 3;
      }
      goto STATE_UPDATE_COMPLETE;
    }
    
    // 状态3: 系统处理器初始化
    if (current_state == 3) {
      // 初始化多个系统处理器（主系统、辅助系统、IO系统、网络系统等）
      initialize_system_handlers(engine_context);
      
      global_handler = (code ******)pending_tasks;
      if ((*(int *)(engine_context + 0x3c) == -1) ||
         (*(int *)(engine_context + 0x318) + 1 < *(int *)(engine_context + 0x3c))) {
        *(int *)(engine_context + 0x318) = *(int *)(engine_context + 0x318) + 1;
      }
    }
    else {
      // 状态4: 状态机处理
      if (current_state == 4) {
        process_state_machine_handlers(engine_context);
      }
      
      // 状态5: 渲染系统清理
      if (current_state != 5) {
        if (current_state == 6) {
          cleanup_memory_block(global_memory_block,engine_context + 800,0);
          release_task_queue(engine_context + 800);
          (**(code **)(**(longlong **)(global_engine_context + 0x2b0) + 0x120))
                    (*(longlong **)(global_engine_context + 0x2b0),0);
          shutdown_render_system();
          if (*(int *)(engine_context + 0x3c) != -1) {
            if (*(int *)(engine_context + 0x318) + 1 < *(int *)(engine_context + 0x3c)) {
              *(int *)(engine_context + 0x318) = *(int *)(engine_context + 0x318) + 1;
            }
            goto STATE_UPDATE_COMPLETE;
          }
        }
        else {
          // 状态7: 错误处理
          if (current_state != 7) {
            handle_system_error(engine_context);
          }
          
          // 全局系统更新
          (**(code **)(**(longlong **)(global_engine_context + 0x2b0) + 0x120))
                    (*(longlong **)(global_engine_context + 0x2b0),1);
          update_global_system_state();
          
          if ((*(int *)(engine_context + 0x3c) != -1) &&
             (*(int *)(engine_context + 0x3c) <= *(int *)(engine_context + 0x318) + 1)) goto STATE_UPDATE_COMPLETE;
        }
        goto STATE_INCREMENT;
      }
      
      // 状态5完成后的处理
      process_state_completion_handlers(engine_context);
    }
  }
  
  // 清理全局处理器
  if (global_handler != (code ******)0x0) {
    (*(code *)(*global_handler)[7])();
  }
  
STATE_UPDATE_COMPLETE:
  cleanup_memory_management(checksum ^ (ulonglong)buffer1);
}

// 辅助函数声明（这些函数在原始代码中被调用）
void initialize_system_handlers(longlong engine_context);
void process_state_machine_handlers(longlong engine_context);
void handle_system_error(longlong engine_context);
void update_global_system_state(void);
void process_state_completion_handlers(longlong engine_context);

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/*
 * 简化实现说明：
 * 
 * 原始实现：这是一个复杂的引擎状态处理函数，包含大量的底层内存操作和函数指针调用
 * 简化实现：保留了核心逻辑结构，但：
 * 1. 将原始的FUN_*函数名改为语义化名称
 * 2. 将DAT_*变量改为描述性名称
 * 3. 将复杂的嵌套调用封装为辅助函数
 * 4. 添加了中文注释说明各部分功能
 * 5. 保持了原始的状态机逻辑
 * 
 * 文件位置：pretty/02/02_core_engine_part200.c
 * 相关函数：process_engine_state() 及其辅助函数
 */