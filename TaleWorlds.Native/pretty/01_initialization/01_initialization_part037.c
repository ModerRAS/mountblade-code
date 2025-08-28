#include "TaleWorlds.Native.Split.h"

// 01_initialization_part037.c - 14 个函数

// 函数: void initialize_memory_pool(void *context)
void initialize_memory_pool(void *context)

{
  int *lock_counter;
  int lock_value;
  ulonglong start_address;
  ulonglong end_address;
  longlong *queue_ptr;
  longlong queue_head;
  longlong queue_tail;
  longlong current_item;
  longlong pool_entry;
  ulonglong current_offset;
  bool is_queue_empty;
  
  *context = &MEMORY_POOL_START_ADDRESS;
  start_address = context[4];
  pool_entry = 0;
  end_address = context[5];
  for (current_offset = end_address; current_offset != start_address; current_offset = current_offset + 1) {
    if ((current_offset & 0x1f) == 0) {
      if (pool_entry != 0) {
        queue_head = context[10];
        LOCK();
        lock_counter = (int *)(pool_entry + 0x130);
        lock_value = *lock_counter;
        *lock_counter = *lock_counter + -0x80000000;
        UNLOCK();
        if (lock_value == 0) {
          queue_tail = *(longlong *)(queue_head + 0x28);
          do {
            *(longlong *)(pool_entry + 0x138) = queue_tail;
            *(int32_t *)(pool_entry + 0x130) = 1;
            queue_ptr = (longlong *)(queue_head + 0x28);
            LOCK();
            current_item = *queue_ptr;
            is_queue_empty = queue_tail == current_item;
            if (is_queue_empty) {
              *queue_ptr = pool_entry;
              current_item = queue_tail;
            }
            UNLOCK();
            if (is_queue_empty) break;
            LOCK();
            lock_counter = (int *)(pool_entry + 0x130);
            lock_value = *lock_counter;
            *lock_counter = *lock_counter + 0x7fffffff;
            UNLOCK();
            queue_tail = current_item;
          } while (lock_value == 1);
        }
      }
LAB_180069842:
      queue_ptr = (longlong *)context[0xc];
      pool_entry = *(longlong *)
               (*(longlong *)
                 (queue_ptr[3] +
                 (queue_ptr[1] +
                  ((current_offset & 0xffffffffffffffe0) - **(longlong **)(queue_ptr[3] + queue_ptr[1] * 8) >> 5)
                 & *queue_ptr - 1U) * 8) + 8);
    }
    else if (pool_entry == 0) goto LAB_180069842;
  }
  pool_entry = context[8];
  if ((pool_entry != 0) && ((end_address != start_address || ((start_address & 0x1f) != 0)))) {
    queue_head = context[10];
    LOCK();
    lock_counter = (int *)(pool_entry + 0x130);
    lock_value = *lock_counter;
    *lock_counter = *lock_counter + -0x80000000;
    UNLOCK();
    if (lock_value == 0) {
      queue_tail = *(longlong *)(queue_head + 0x28);
      do {
        *(longlong *)(pool_entry + 0x138) = queue_tail;
        *(int32_t *)(pool_entry + 0x130) = 1;
        queue_ptr = (longlong *)(queue_head + 0x28);
        LOCK();
        current_item = *queue_ptr;
        is_queue_empty = queue_tail == current_item;
        if (is_queue_empty) {
          *queue_ptr = pool_entry;
          current_item = queue_tail;
        }
        UNLOCK();
        if (is_queue_empty) break;
        LOCK();
        lock_counter = (int *)(pool_entry + 0x130);
        lock_value = *lock_counter;
        *lock_counter = *lock_counter + 0x7fffffff;
        UNLOCK();
        queue_tail = current_item;
      } while (lock_value == 1);
    }
  }
  if (context[0xc] != 0) {
                    // WARNING: Subroutine does not return
    cleanup_memory_pool();
  }
  *context = &MEMORY_POOL_END_ADDRESS;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void * get_thread_local_storage(longlong *thread_context)

{
  longlong *thread_counter;
  uint *slot_status;
  ulonglong *hash_table;
  ulonglong hash_value;
  uint thread_id;
  ulonglong slot_index;
  ulonglong *thread_table;
  void *thread_data;
  longlong allocation_count;
  longlong new_size;
  void *new_table;
  ulonglong table_size;
  uint temp_thread_id;
  void *found_data;
  bool slot_available;
  bool table_expanded;
  
  thread_id = GetCurrentThreadId();
  table_size = (thread_id >> 0x10 ^ thread_id) * -0x7a143595;
  table_size = (table_size >> 0xd ^ table_size) * -0x3d4d51cb;
  hash_value = (ulonglong)(table_size >> 0x10 ^ table_size);
  thread_table = (ulonglong *)thread_context[6];
  for (hash_table = thread_table; slot_index = hash_value, hash_table != (ulonglong *)0x0; hash_table = (ulonglong *)hash_table[2])
  {
    while( true ) {
      slot_index = slot_index & *hash_table - 1;
      table_size = *(uint *)(slot_index * 0x10 + hash_table[1]);
      if (table_size == thread_id) {
        found_data = *(void **)(hash_table[1] + 8 + slot_index * 0x10);
        if (hash_table == thread_table) {
          return found_data;
        }
        do {
          hash_value = hash_value & *thread_table - 1;
          if (*(int *)(thread_table[1] + hash_value * 0x10) == 0) {
            slot_status = (uint *)(thread_table[1] + hash_value * 0x10);
            LOCK();
            slot_available = *slot_status == 0;
            if (slot_available) {
              *slot_status = thread_id;
            }
            UNLOCK();
            if (slot_available) {
              *(void **)(thread_table[1] + 8 + hash_value * 0x10) = found_data;
              return found_data;
            }
          }
          hash_value = hash_value + 1;
        } while( true );
      }
      if (table_size == 0) break;
      slot_index = slot_index + 1;
    }
  }
  LOCK();
  thread_counter = thread_context + 7;
  allocation_count = *thread_counter;
  *thread_counter = *thread_counter + 1;
  UNLOCK();
  slot_index = allocation_count + 1;
  found_data = (void *)0x0;
  while( true ) {
    if (*thread_table >> 1 <= slot_index) {
      LOCK();
      slot_status = (uint *)(thread_context + 0x4b);
      table_size = *slot_status;
      *slot_status = *slot_status | 1;
      UNLOCK();
      if ((table_size & 1) == 0) {
        hash_table = (ulonglong *)thread_context[6];
        thread_table = hash_table;
        table_size = *hash_table;
        if (*hash_table >> 1 <= slot_index) {
          do {
            hash_value = table_size;
            table_size = hash_value * 2;
          } while ((hash_value & 0x7fffffffffffffff) <= slot_index);
          thread_table = (ulonglong *)allocate_thread_table(MEMORY_ALLOCATOR,hash_value * 0x20 + 0x1f,10);
          if (thread_table == (ulonglong *)0x0) {
            LOCK();
            thread_context[7] = thread_context[7] + -1;
            UNLOCK();
            *(int32_t *)(thread_context + 0x4b) = 0;
            return (void *)0x0;
          }
          *thread_table = table_size;
          thread_table[1] = (ulonglong)(-(int)(thread_table + 3) & 7) + (longlong)(thread_table + 3);
          new_table = found_data;
          for (; table_size != 0; table_size = table_size - 1) {
            *(void *)((longlong)new_table + thread_table[1] + 8) = 0;
            *(int32_t *)((longlong)new_table + thread_table[1]) = 0;
            new_table = new_table + 2;
          }
          thread_table[2] = (ulonglong)hash_table;
          thread_context[6] = (longlong)thread_table;
        }
        *(int32_t *)(thread_context + 0x4b) = 0;
      }
    }
    if (slot_index < (*thread_table >> 2) + (*thread_table >> 1)) break;
    thread_table = (ulonglong *)thread_context[6];
  }
  new_table = (void *)*thread_context;
  while (new_table != (void *)0x0) {
    if ((*(char *)(new_table + 2) != '\0') && (*(char *)(new_table + 9) == '\0')) {
      table_expanded = true;
      LOCK();
      slot_available = *(char *)(new_table + 2) == '\x01';
      if (slot_available) {
        *(char *)(new_table + 2) = '\0';
      }
      UNLOCK();
      if (slot_available) goto LAB_180069c2b;
    }
    thread_counter = new_table + 1;
    new_table = (void *)(*thread_counter + -8);
    if (*thread_counter == 0) {
      new_table = found_data;
    }
  }
  table_expanded = false;
  hash_table = (void *)allocate_thread_table(MEMORY_ALLOCATOR,0x68,10);
  new_table = found_data;
  if (hash_table != (void *)0x0) {
    hash_table[1] = 0;
    *(int8_t *)(hash_table + 2) = 0;
    hash_table[3] = 0;
    *hash_table = &THREAD_STORAGE_INIT_ADDRESS;
    hash_table[4] = 0;
    hash_table[5] = 0;
    hash_table[6] = 0;
    hash_table[7] = 0;
    hash_table[8] = 0;
    *(int8_t *)(hash_table + 9) = 0;
    hash_table[10] = thread_context;
    *hash_table = &THREAD_STORAGE_ACTIVE_ADDRESS;
    hash_table[0xb] = 0x20;
    hash_table[0xc] = 0;
    initialize_thread_storage(hash_table);
    LOCK();
    *(int *)(thread_context + 1) = (int)thread_context[1] + 1;
    UNLOCK();
    allocation_count = *thread_context;
    do {
      new_table = (void *)(allocation_count + 8);
      if (allocation_count == 0) {
        new_table = found_data;
      }
      hash_table[1] = new_table;
      LOCK();
      new_size = *thread_context;
      slot_available = allocation_count == new_size;
      if (slot_available) {
        *thread_context = (longlong)hash_table;
        new_size = allocation_count;
      }
      UNLOCK();
      allocation_count = new_size;
      new_table = hash_table;
    } while (!slot_available);
  }
LAB_180069c2b:
  if (new_table == (void *)0x0) {
    LOCK();
    thread_context[7] = thread_context[7] + -1;
    UNLOCK();
    return (void *)0x0;
  }
  if (table_expanded) {
    LOCK();
    thread_context[7] = thread_context[7] + -1;
    UNLOCK();
  }
  do {
    hash_value = hash_value & *thread_table - 1;
    if (*(int *)(thread_table[1] + hash_value * 0x10) == 0) {
      slot_status = (uint *)(thread_table[1] + hash_value * 0x10);
      LOCK();
      table_expanded = *slot_status == 0;
      if (table_expanded) {
        *slot_status = thread_id;
      }
      UNLOCK();
      if (table_expanded) {
        *(void **)(thread_table[1] + 8 + hash_value * 0x10) = new_table;
        return new_table;
      }
    }
    hash_value = hash_value + 1;
  } while( true );
}



ulonglong add_to_thread_queue(void thread_handle,void *data)

{
  ulonglong queue_position;
  longlong *queue_header;
  void queue_data;
  longlong thread_storage;
  ulonglong available_space;
  ulonglong *queue_slot;
  
  thread_storage = get_thread_local_storage();
  if (thread_storage == 0) {
    return 0;
  }
  queue_position = *(ulonglong *)(thread_storage + 0x20);
  if ((queue_position & 0x1f) == 0) {
    available_space = (*(longlong *)(thread_storage + 0x28) - queue_position) - 0x20;
    if ((0x8000000000000000 < available_space) &&
       (queue_header = *(longlong **)(thread_storage + 0x60), queue_header != (longlong *)0x0)) {
      available_space = *queue_header - 1U & queue_header[1] + 1U;
      queue_slot = *(ulonglong **)(queue_header[3] + available_space * 8);
      if ((*queue_slot == 1) || (queue_slot[1] == 0)) {
        *queue_slot = queue_position;
        queue_header[1] = available_space;
      }
      else {
        available_space = process_thread_queue(thread_storage);
        if ((char)available_space == '\0') goto LAB_180069dc3;
        queue_header = *(longlong **)(thread_storage + 0x60);
        available_space = *queue_header - 1U & queue_header[1] + 1U;
        queue_slot = *(ulonglong **)(queue_header[3] + available_space * 8);
        *queue_slot = queue_position;
        queue_header[1] = available_space;
      }
      available_space = get_queue_data(*(void *)(thread_storage + 0x50));
      if (available_space != 0) {
        *(void *)(available_space + 0x108) = 0;
        queue_slot[1] = available_space;
        *(ulonglong *)(thread_storage + 0x40) = available_space;
        goto LAB_180069dda;
      }
      queue_header = *(longlong **)(thread_storage + 0x60);
      available_space = queue_header[1] - 1;
      queue_header[1] = *queue_header - 1U & available_space;
      queue_slot[1] = 0;
    }
LAB_180069dc3:
    available_space = available_space & 0xffffffffffffff00;
  }
  else {
LAB_180069dda:
    queue_data = *data;
    *(void *)(*(longlong *)(thread_storage + 0x40) + (ulonglong)((uint)queue_position & 0x1f) * 8) = queue_data;
    *(ulonglong *)(thread_storage + 0x20) = queue_position + 1;
    available_space = CONCAT71((int7)((ulonglong)queue_data >> 8),1);
  }
  return available_space;
}



void *
initialize_event_system(void *event_context,void *event_data,void event_param1,void event_param2)

{
  code *event_handler;
  
  *event_context = &EVENT_SYSTEM_START_ADDRESS;
  *event_context = &EVENT_SYSTEM_INIT_ADDRESS;
  *(int32_t *)(event_context + 1) = 0;
  *event_context = &EVENT_SYSTEM_HANDLER_ADDRESS;
  LOCK();
  *(int8_t *)(event_context + 2) = 0;
  UNLOCK();
  event_context[3] = 0xffffffffffffffff;
  *event_context = &EVENT_SYSTEM_CALLBACK_ADDRESS;
  event_context[6] = 0;
  event_context[7] = _guard_check_icall;
  if (event_context + 4 != event_data) {
    event_handler = (code *)event_data[2];
    if (event_handler != (code *)0x0) {
      (*event_handler)(event_context + 4,event_data,1,event_param2,0xfffffffffffffffe);
      event_handler = (code *)event_data[2];
    }
    event_context[6] = event_handler;
    event_context[7] = event_data[3];
  }
  if ((code *)event_data[2] != (code *)0x0) {
    (*(code *)event_data[2])(event_data,0,0);
  }
  return event_context;
}



void
initialize_callback_system(void callback_param1,void callback_param2,void callback_param3,void callback_param4)

{
  void callback_data;
  int32_t callback_flags;
  void callback_result;
  
  callback_result = 0xfffffffffffffffe;
  callback_flags = 0;
  callback_data = get_system_time();
  register_callback(callback_param2,callback_data,callback_param3,callback_param4,callback_flags,callback_result);
  return callback_param2;
}



void * initialize_mutex(void *mutex_param,void *mutex_context)

{
  *mutex_context = 0;
  mutex_context[1] = 0;
  mutex_context[2] = 0;
  *(int32_t *)(mutex_context + 3) = 3;
  return mutex_context;
}



void * initialize_semaphore(void *semaphore_param,void *semaphore_context)

{
  *semaphore_context = 0;
  return semaphore_context;
}



void cleanup_thread_storage(void *storage_param,ulonglong cleanup_flags,void cleanup_param3,void cleanup_param4)

{
  void cleanup_result;
  
  cleanup_result = 0xfffffffffffffffe;
  cleanup_thread_resources();
  if ((cleanup_flags & 1) != 0) {
    free(storage_param,0x260,cleanup_param3,cleanup_param4,cleanup_result);
  }
  return storage_param;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void validate_system_state(int state_code)

{
  if ((state_code != -0x3fffff03) && (state_code != -0x3ffffffb)) {
    return 0;
  }
  (**(code **)(*(longlong *)*SYSTEM_STATE_POINTER + 0x68))();
  return 1;
}



void * initialize_resource_manager(void *resource_context,ulonglong resource_flags)

{
  *resource_context = &RESOURCE_MANAGER_START_ADDRESS;
  resource_context[0x18] = &RESOURCE_MANAGER_VTABLE_ADDRESS;
  if (resource_context[0x19] != 0) {
                    // WARNING: Subroutine does not return
    trigger_system_error();
  }
  resource_context[0x19] = 0;
  *(int32_t *)(resource_context + 0x1b) = 0;
  resource_context[0x18] = &RESOURCE_MANAGER_CLEANUP_ADDRESS;
  setup_resource_manager(resource_context);
  if ((resource_flags & 1) != 0) {
    free(resource_context,0xe8);
  }
  return resource_context;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void initialize_system_components(longlong system_handle)
void initialize_system_components(longlong system_handle)

{
  longlong *component_manager;
  char init_result;
  void system_config;
  void *module_handle;
  void *module_loader;
  int8_t module_stack[40];
  longlong *module_stack_ptr;
  int module_flags;
  char module_status;
  void system_heap;
  
  system_heap = 0xfffffffffffffffe;
  SetErrorMode(1);
  init_result = (**(code **)**(void **)(SYSTEM_MODULE_POINTER + 0x18))();
  if (init_result == '\0') {
    SetUnhandledExceptionFilter(&EXCEPTION_HANDLER_ADDRESS);
  }
  system_config = allocate_system_memory(SYSTEM_MEMORY_ALLOCATOR,0x170,8,3);
  SYSTEM_COMPONENT_TABLE = initialize_component_table(system_config);
  setup_system_logging(module_stack);
  system_config = allocate_system_memory(SYSTEM_MEMORY_ALLOCATOR,1000,8,3);
  SYSTEM_LOGGER_HANDLE = setup_logger(system_config);
  initialize_system_clock();
  setup_system_monitor();
  if ((*(char *)(SYSTEM_CONFIG_ADDRESS + 0x20) == '\0') && (*(char *)(SYSTEM_CONFIG_ADDRESS + 0x21) == '\0')) {
    system_config = allocate_system_memory(0x428);
    module_stack_ptr = (longlong *)load_system_modules(system_config);
  }
  else {
    module_stack_ptr = (longlong *)allocate_system_memory(SYSTEM_MEMORY_ALLOCATOR,0x28,8,3);
    *module_stack_ptr = (longlong)&MODULE_LOADER_ADDRESS;
    *module_stack_ptr = (longlong)&MODULE_REGISTRY_ADDRESS;
    module_stack_ptr[4] = 0;
    *(int8_t *)(module_stack_ptr + 1) = 0;
    module_stack_ptr[2] = 0;
    *(int8_t *)(module_stack_ptr + 3) = 0;
    component_manager = (longlong *)module_stack_ptr[4];
    module_stack_ptr[4] = 0;
    if (component_manager != (longlong *)0x0) {
      (**(code **)(*component_manager + 0x38))();
    }
  }
  module_loader = &DEFAULT_MODULE_PATH;
  if (*(void **)(system_handle + 200) != (void *)0x0) {
    module_loader = *(void **)(system_handle + 200);
  }
  (**(code **)(*module_stack_ptr + 0x50))(module_stack_ptr,module_loader);
  (**(code **)(*module_stack_ptr + 0x60))(module_stack_ptr,module_stack);
  if (module_status == '\0') {
    module_flags = 0;
  }
  else if (MODULE_DEBUG_FLAG == '\0') {
    module_flags = (MODULE_RELEASE_FLAG != '\0') + 2;
  }
  else {
    module_flags = 1;
  }
  SYSTEM_EVENT_QUEUE = allocate_system_memory(SYSTEM_MEMORY_ALLOCATOR,0x28,8,3);
  *(void *)(SYSTEM_EVENT_QUEUE + 8) = 0;
  *(void *)(SYSTEM_EVENT_QUEUE + 0x10) = 0;
  *(void *)(SYSTEM_EVENT_QUEUE + 0x18) = 0;
  *(int32_t *)(SYSTEM_EVENT_QUEUE + 0x20) = 3;
  initialize_system_services();
  module_handle = (void *)allocate_system_memory(SYSTEM_MEMORY_ALLOCATOR,0x478,8,3);
  *module_handle = 0;
  module_handle[1] = 0;
  module_handle[2] = 0;
  *(int32_t *)(module_handle + 3) = 3;
  module_handle[4] = 0;
  module_handle[5] = 0;
  module_handle[6] = 0;
  *(int32_t *)(module_handle + 7) = 3;
  module_handle[8] = 0;
  module_handle[9] = 0;
  module_handle[10] = 0;
  *(int32_t *)(module_handle + 0xb) = 3;
  *(int8_t *)(module_handle + 0xc) = 0;
  *(void *)((longlong)module_handle + 100) = 0xffffffffffffffff;
  *(int32_t *)((longlong)module_handle + 0x6c) = 0;
  *(int16_t *)(module_handle + 0xe) = 0;
  *(int8_t *)((longlong)module_handle + 0x72) = 0;
                    // WARNING: Subroutine does not return
  memset((longlong)module_handle + 0x74,0,0x400);
}



// 函数: void cleanup_system_components(longlong system_handle)
void cleanup_system_components(longlong system_handle)

{
  *(void *)(system_handle + 0xa0) = &RESOURCE_VTABLE_ADDRESS;
  if (*(longlong *)(system_handle + 0xa8) != 0) {
                    // WARNING: Subroutine does not return
    trigger_system_error();
  }
  *(void *)(system_handle + 0xa8) = 0;
  *(int32_t *)(system_handle + 0xb8) = 0;
  *(void *)(system_handle + 0xa0) = &RESOURCE_CLEANUP_ADDRESS;
  *(void *)(system_handle + 0x80) = &RESOURCE_VTABLE_ADDRESS;
  if (*(longlong *)(system_handle + 0x88) != 0) {
                    // WARNING: Subroutine does not return
    trigger_system_error();
  }
  *(void *)(system_handle + 0x88) = 0;
  *(int32_t *)(system_handle + 0x98) = 0;
  *(void *)(system_handle + 0x80) = &RESOURCE_CLEANUP_ADDRESS;
  *(void *)(system_handle + 0x58) = &RESOURCE_VTABLE_ADDRESS;
  if (*(longlong *)(system_handle + 0x60) != 0) {
                    // WARNING: Subroutine does not return
    trigger_system_error();
  }
  *(void *)(system_handle + 0x60) = 0;
  *(int32_t *)(system_handle + 0x70) = 0;
  *(void *)(system_handle + 0x58) = &RESOURCE_CLEANUP_ADDRESS;
  *(void *)(system_handle + 0x38) = &RESOURCE_VTABLE_ADDRESS;
  if (*(longlong *)(system_handle + 0x40) != 0) {
                    // WARNING: Subroutine does not return
    trigger_system_error();
  }
  *(void *)(system_handle + 0x40) = 0;
  *(int32_t *)(system_handle + 0x50) = 0;
  *(void *)(system_handle + 0x38) = &RESOURCE_CLEANUP_ADDRESS;
  *(void *)(system_handle + 8) = &RESOURCE_VTABLE_ADDRESS;
  if (*(longlong *)(system_handle + 0x10) != 0) {
                    // WARNING: Subroutine does not return
    trigger_system_error();
  }
  *(void *)(system_handle + 0x10) = 0;
  *(int32_t *)(system_handle + 0x20) = 0;
  *(void *)(system_handle + 8) = &RESOURCE_CLEANUP_ADDRESS;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong handle_system_operation(longlong *operation_handle,longlong *operation_data,int operation_type)

{
  void *operation_result;
  void *source_data;
  
  if (operation_type == 3) {
    return SYSTEM_OPERATION_TABLE_ADDRESS;
  }
  if (operation_type == 4) {
    return *operation_handle;
  }
  if (operation_type == 0) {
    if (*operation_handle != 0) {
                    // WARNING: Subroutine does not return
      trigger_system_error();
    }
  }
  else {
    if (operation_type == 1) {
      operation_result = (void *)allocate_system_memory(SYSTEM_MEMORY_ALLOCATOR,0x20,8,MEMORY_ALIGNMENT_FLAG,0xfffffffffffffffe);
      source_data = (void *)*operation_data;
      *operation_result = *source_data;
      *(int32_t *)(operation_result + 1) = *(int32_t *)(source_data + 1);
      operation_result[2] = source_data[2];
      operation_result[3] = source_data[3];
      *operation_handle = (longlong)operation_result;
      return 0;
    }
    if (operation_type == 2) {
      *operation_handle = *operation_data;
      *operation_data = 0;
      return 0;
    }
  }
  return 0;
}



// 函数: void update_system_status(longlong system_handle,int32_t status_code)
void update_system_status(longlong system_handle,int32_t status_code)

{
  char callback_result;
  void *status_handler;
  int32_t status_stack[6];
  
  if ((*(longlong *)(system_handle + 0x1e20) != 0) &&
     (status_stack[0] = status_code, callback_result = (**(code **)(system_handle + 0x1e28))(status_stack),
     status_code = status_stack[0], callback_result == '\0')) {
    if (SYSTEM_STATUS_FLAG == '\0') {
      status_handler = &DEFAULT_STATUS_HANDLER;
      if (*(void **)(system_handle + 0x1dd0) != (void *)0x0) {
        status_handler = *(void **)(system_handle + 0x1dd0);
      }
      log_system_error(&SYSTEM_ERROR_LOG_ADDRESS,status_handler);
    }
    *(int32_t *)(system_handle + 0x1dc0) = *(int32_t *)(system_handle + 0x1e08);
    return;
  }
  *(int32_t *)(system_handle + 0x1dc0) = status_code;
  return;
}



// 函数: void update_system_flags(longlong system_handle,int32_t flag_code)
void update_system_flags(longlong system_handle,int32_t flag_code)

{
  char callback_result;
  void *flag_handler;
  int32_t flag_stack[6];
  
  if ((*(longlong *)(system_handle + 0x1db0) != 0) &&
     (flag_stack[0] = flag_code, callback_result = (**(code **)(system_handle + 0x1db8))(flag_stack),
     flag_code = flag_stack[0], callback_result == '\0')) {
    if (SYSTEM_STATUS_FLAG == '\0') {
      flag_handler = &DEFAULT_STATUS_HANDLER;
      if (*(void **)(system_handle + 0x1d60) != (void *)0x0) {
        flag_handler = *(void **)(system_handle + 0x1d60);
      }
      log_system_error(&SYSTEM_ERROR_LOG_ADDRESS,flag_handler);
    }
    *(int32_t *)(system_handle + 0x1d50) = *(int32_t *)(system_handle + 0x1d98);
    return;
  }
  *(int32_t *)(system_handle + 0x1d50) = flag_code;
  return;
}



// 函数: void update_global_status(uint64_t global_param,int32_t global_status)
void update_global_status(uint64_t global_param,int32_t global_status)

{
  longlong system_context;
  char callback_result;
  void *global_handler;
  int32_t global_stack[6];
  
  system_context = SYSTEM_CONTEXT_HANDLE;
  if ((*(longlong *)(SYSTEM_CONTEXT_HANDLE + 0x1870) != 0) &&
     (global_stack[0] = global_status, callback_result = (**(code **)(SYSTEM_CONTEXT_HANDLE + 0x1878))(global_stack),
     global_status = global_stack[0], callback_result == '\0')) {
    if (SYSTEM_STATUS_FLAG == '\0') {
      global_handler = &DEFAULT_STATUS_HANDLER;
      if (*(void **)(system_context + 0x1820) != (void *)0x0) {
        global_handler = *(void **)(system_context + 0x1820);
      }
      log_system_error(&SYSTEM_ERROR_LOG_ADDRESS,global_handler);
    }
    *(int32_t *)(system_context + 0x1810) = *(int32_t *)(system_context + 0x1858);
    return;
  }
  *(int32_t *)(system_context + 0x1810) = global_status;
  return;
}



longlong cleanup_system_context(longlong context_handle,uint cleanup_flags,uint64_t cleanup_param3,uint64_t cleanup_param4)

{
  if (*(code **)(context_handle + 0xd0) != (code *)0x0) {
    (**(code **)(context_handle + 0xd0))(context_handle + 0xc0,0,0,cleanup_param4,0xfffffffffffffffe);
  }
  cleanup_resource_manager(context_handle);
  if ((cleanup_flags & 1) != 0) {
    free(context_handle,0xe0);
  }
  return context_handle;
}



void *
initialize_thread_context(void *thread_context,void *thread_data,void thread_param3,void thread_param4)

{
  code *thread_initializer;
  void thread_param2;
  
  thread_param2 = 0xfffffffffffffffe;
  initialize_thread_system();
  *thread_context = &THREAD_CONTEXT_START_ADDRESS;
  thread_context[0x1a] = 0;
  thread_context[0x1b] = _guard_check_icall;
  if (thread_context + 0x18 != thread_data) {
    thread_initializer = (code *)thread_data[2];
    if (thread_initializer != (code *)0x0) {
      (*thread_initializer)(thread_context + 0x18,thread_data,1,thread_param4,thread_param2);
      thread_initializer = (code *)thread_data[2];
    }
    thread_context[0x1a] = thread_initializer;
    thread_context[0x1b] = thread_data[3];
  }
  if ((code *)thread_data[2] != (code *)0x0) {
    (*(code *)thread_data[2])(thread_data,0,0);
  }
  return thread_context;
}



// 函数: void execute_cleanup_handlers(longlong *handler_list,uint64_t cleanup_param2,uint64_t cleanup_param3,uint64_t cleanup_param4)
void execute_cleanup_handlers(longlong *handler_list,uint64_t cleanup_param2,uint64_t cleanup_param3,uint64_t cleanup_param4)

{
  void *current_handler;
  void *handler_end;
  void cleanup_flags;
  
  cleanup_flags = 0xfffffffffffffffe;
  current_handler = (void *)handler_list[1];
  for (handler_end = (void *)*handler_list; handler_end != current_handler; handler_end = handler_end + 0x13) {
    (**(code **)*handler_end)(handler_end,0,cleanup_param3,cleanup_param4,cleanup_flags);
  }
  if (*handler_list == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  trigger_system_error();
}



// 函数: void execute_shutdown_handlers(longlong *handler_list,uint64_t shutdown_param2,uint64_t shutdown_param3,uint64_t shutdown_param4)
void execute_shutdown_handlers(longlong *handler_list,uint64_t shutdown_param2,uint64_t shutdown_param3,uint64_t shutdown_param4)

{
  void *current_handler;
  void *handler_end;
  void shutdown_flags;
  
  shutdown_flags = 0xfffffffffffffffe;
  current_handler = (void *)handler_list[1];
  for (handler_end = (void *)*handler_list; handler_end != current_handler; handler_end = handler_end + 0x13) {
    (**(code **)*handler_end)(handler_end,0,shutdown_param3,shutdown_param4,shutdown_flags);
  }
  if (*handler_list == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  trigger_system_error();
}



// 函数: void initialize_system_monitor(void)
void initialize_system_monitor(void)

{
  longlong *monitor_counter;
  longlong monitor_value;
  char monitor_status;
  
  if (SYSTEM_MONITOR_HANDLE != 0) {
    (**(code **)(SYSTEM_MONITOR_HANDLE + 0x88))(1);
  }


// 函数: void setup_performance_monitor(longlong monitor_handle)
void setup_performance_monitor(longlong monitor_handle)

{
  *(void *)(monitor_handle + 0x20) = &PERFORMANCE_VTABLE_ADDRESS;
  if (*(longlong *)(monitor_handle + 0x28) != 0) {
                    // WARNING: Subroutine does not return
    trigger_system_error();
  }
  *(void *)(monitor_handle + 0x28) = 0;
  *(int32_t *)(monitor_handle + 0x38) = 0;
  *(void *)(monitor_handle + 0x20) = &PERFORMANCE_CLEANUP_ADDRESS;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void initialize_system_monitor(void *monitor_context)
void initialize_system_monitor(void *monitor_context)

{
  ulonglong monitor_index;
  ulonglong monitor_count;
  ulonglong monitor_size;
  void *monitor_entry;
  void *monitor_ptr;
  longlong entry_size;
  longlong total_size;
  int8_t monitor_stack[48];
  void *monitor_stack_ptr;
  void *monitor_data;
  void monitor_param;
  ulonglong monitor_hash;
  
  monitor_param = 0xfffffffffffffffe;
  monitor_hash = SYSTEM_MONITOR_HASH ^ (ulonglong)monitor_stack;
  *monitor_context = &MONITOR_SYSTEM_START_ADDRESS;
  monitor_count = 0;
  monitor_context[1] = 0;
  monitor_data = monitor_context + 2;
  *monitor_data = 0;
  *(int32_t *)(monitor_context + 3) = 0;
  monitor_context[4] = 0;
  monitor_context[7] = 0;
  monitor_ptr = monitor_context + 0xd;
  total_size = 0x20;
  entry_size = 0x20;
  monitor_entry = monitor_ptr;
  monitor_stack_ptr = monitor_context;
  do {
    initialize_monitor_entry(monitor_entry);
    monitor_entry = monitor_entry + 2;
    entry_size = entry_size + -1;
  } while (entry_size != 0);
  *(void *)((longlong)monitor_context + 0x26c) = 0;
  *(int32_t *)(monitor_context + 0x4d) = 0;
  monitor_context[9] = 0;
  monitor_context[10] = 0x20;
  monitor_context[0xb] = monitor_ptr;
  do {
    *(int32_t *)monitor_ptr = 0;
    monitor_ptr = monitor_ptr + 2;
    total_size = total_size + -1;
  } while (total_size != 0);
  monitor_context[0xc] = 0;
  monitor_context[8] = monitor_context + 10;
  monitor_context[6] = 0x15;
  entry_size = get_monitor_capacity();
  monitor_context[5] = entry_size;
  if (entry_size == 0) {
    monitor_context[6] = 0;
    monitor_index = monitor_count;
  }
  else {
    monitor_index = monitor_context[6];
  }
  monitor_size = monitor_count;
  if (monitor_index != 0) {
    do {
      *(int8_t *)(monitor_count + 0x141 + monitor_context[5]) = 0;
      monitor_size = monitor_size + 1;
      monitor_count = monitor_count + 0x148;
    } while (monitor_size < (ulonglong)monitor_context[6]);
  }
  monitor_stack_ptr = monitor_context + 0x4f;
  initialize_condition_variable();
  monitor_stack_ptr = monitor_context + 0x58;
  initialize_mutex(monitor_stack_ptr,2);
  *(int32_t *)(monitor_context + 0x65) = 0;
  *(int32_t *)((longlong)monitor_context + 0x32c) = 0x80;
  monitor_data = monitor_context + 0x66;
  *(int32_t *)(monitor_context + 0x6a) = 0x3f800000;
  *(void *)((longlong)monitor_context + 0x354) = 0x40000000;
  *(int32_t *)((longlong)monitor_context + 0x35c) = 3;
  monitor_context[0x68] = 1;
  monitor_context[0x67] = &MONITOR_DATA_START_ADDRESS;
  monitor_context[0x69] = 0;
  *(int32_t *)(monitor_context + 0x6b) = 0;
  *(int8_t *)(monitor_context + 0x6d) = 1;
  entry_size = allocate_system_memory(SYSTEM_MEMORY_ALLOCATOR,0x140038,8,3);
                    // WARNING: Subroutine does not return
  memset(entry_size + 0x20,0,0x140000);
}



void cleanup_monitor_system(void *monitor_param,ulonglong cleanup_flags)

{
  cleanup_monitor_resources();
  if ((cleanup_flags & 1) != 0) {
    free(monitor_param,0x370);
  }
  return monitor_param;
}



// 函数: void cleanup_resource_tables(longlong resource_handle)
void cleanup_resource_tables(longlong resource_handle)

{
  longlong table_size;
  void **resource_table;
  ulonglong resource_count;
  ulonglong current_index;
  
  resource_count = *(ulonglong *)(resource_handle + 0x10);
  table_size = *(longlong *)(resource_handle + 8);
  current_index = 0;
  if (resource_count != 0) {
    do {
      resource_table = *(void **)(table_size + current_index * 8);
      if (resource_table != (void *)0x0) {
        *resource_table = &RESOURCE_CLEANUP_ADDRESS;
                    // WARNING: Subroutine does not return
        trigger_system_error();
      }
      *(void *)(table_size + current_index * 8) = 0;
      current_index = current_index + 1;
    } while (current_index < resource_count);
    resource_count = *(ulonglong *)(resource_handle + 0x10);
  }
  *(void *)(resource_handle + 0x18) = 0;
  if ((1 < resource_count) && (*(longlong *)(resource_handle + 8) != 0)) {
                    // WARNING: Subroutine does not return
    trigger_system_error();
  }
  return;
}



// 函数: void cleanup_memory_tables(longlong memory_handle)
void cleanup_memory_tables(longlong memory_handle)

{
  longlong table_size;
  void **memory_table;
  ulonglong memory_count;
  ulonglong current_index;
  
  memory_count = *(ulonglong *)(memory_handle + 0x10);
  table_size = *(longlong *)(memory_handle + 8);
  current_index = 0;
  if (memory_count != 0) {
    do {
      memory_table = *(void **)(table_size + current_index * 8);
      if (memory_table != (void *)0x0) {
        *memory_table = &MEMORY_CLEANUP_ADDRESS;
                    // WARNING: Subroutine does not return
        trigger_system_error();
      }
      *(void *)(table_size + current_index * 8) = 0;
      current_index = current_index + 1;
    } while (current_index < memory_count);
    memory_count = *(ulonglong *)(memory_handle + 0x10);
  }
  *(void *)(memory_handle + 0x18) = 0;
  if ((1 < memory_count) && (*(longlong *)(memory_handle + 8) != 0)) {
                    // WARNING: Subroutine does not return
    trigger_system_error();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



void
allocate_system_resources(longlong system_context,longlong resource_context,longlong *primary_buffer,longlong *secondary_buffer,
             longlong *buffer_size)

{
  longlong available_memory;
  longlong *memory_manager;
  longlong buffer_size_value;
  ulonglong required_size;
  ulonglong allocated_size;
  ulonglong page_size;
  uint8_t alignment_flags;
  
  buffer_size_value = *(longlong *)(resource_context + 0x128);
  if (buffer_size_value != 0) {
    *primary_buffer = buffer_size_value;
    buffer_size_value = *(longlong *)(resource_context + 0x128);
  }
  available_memory = *(longlong *)(resource_context + 0x130);
  required_size = 0;
  if (available_memory == 0) {
    if (buffer_size_value == 0) {
      required_size = *(ulonglong *)(resource_context + 0x120);
    }
  }
  else {
    required_size = *(ulonglong *)(resource_context + 0x120);
    if (buffer_size_value == 0) {
      required_size = required_size + *(longlong *)(resource_context + 0x138);
    }
  }
  *(void *)(resource_context + 0x1a0) = 0;
  *(void *)(resource_context + 0x198) = 0;
  *(void *)(resource_context + 400) = 0;
  *(void *)(resource_context + 0x188) = 0;
  allocated_size = (*(longlong *)(resource_context + 0x120) - (*(ulonglong *)(resource_context + 0x118) & 0xfffffffffffff000))
          + *(ulonglong *)(resource_context + 0x118);
  page_size = allocated_size & 0xfffffffffffff000;
  buffer_size_value = (-(uint)((allocated_size & 0xfff) != 0) & 0x1000) + page_size;
  if (*(ulonglong *)(system_context + 0x360) < required_size) {
    alignment_flags = (uint8_t)(page_size >> 8);
    if (available_memory == 0) {
      if (*primary_buffer == 0) {
        buffer_size_value = allocate_system_memory(SYSTEM_MEMORY_ALLOCATOR,buffer_size_value,CONCAT71(alignment_flags,3));
        *primary_buffer = buffer_size_value;
        *(longlong *)(resource_context + 0x198) = buffer_size_value;
        *buffer_size = *primary_buffer;
      }
    }
    else {
      buffer_size_value = allocate_system_memory(SYSTEM_MEMORY_ALLOCATOR,buffer_size_value,CONCAT71(alignment_flags,3));
      *secondary_buffer = buffer_size_value;
      *(longlong *)(resource_context + 0x198) = buffer_size_value;
      *buffer_size = *secondary_buffer;
      if (*primary_buffer == 0) {
        buffer_size_value = allocate_system_memory(SYSTEM_MEMORY_ALLOCATOR,*(void *)(resource_context + 0x138),3);
        *primary_buffer = buffer_size_value;
        *(longlong *)(resource_context + 0x1a0) = buffer_size_value;
      }
    }
  }
  else if (available_memory == 0) {
    if (*primary_buffer == 0) {
      memory_manager = (longlong *)allocate_memory_buffer(system_context,buffer_size_value);
      *(longlong **)(resource_context + 400) = memory_manager;
      if (memory_manager == (longlong *)0x0) goto LAB_18006bf7f;
      buffer_size_value = *(longlong *)(system_context + 800) + *memory_manager;
      *primary_buffer = buffer_size_value;
      *buffer_size = buffer_size_value;
    }
  }
  else {
    memory_manager = (longlong *)allocate_memory_buffer(system_context,buffer_size_value);
    *(longlong **)(resource_context + 0x188) = memory_manager;
    if (memory_manager == (longlong *)0x0) {
LAB_18006bf7f:
      cleanup_memory_allocation(system_context,*(void *)(resource_context + 0x188));
      cleanup_memory_allocation(system_context,*(void *)(resource_context + 400));
      return 0;
    }
    buffer_size_value = *memory_manager + *(longlong *)(system_context + 800);
    *secondary_buffer = buffer_size_value;
    *buffer_size = buffer_size_value;
    if (*primary_buffer == 0) {
      memory_manager = (longlong *)allocate_memory_buffer(system_context,*(void *)(resource_context + 0x138));
      *(longlong **)(resource_context + 400) = memory_manager;
      if (memory_manager == (longlong *)0x0) goto LAB_18006bf7f;
      *primary_buffer = *memory_manager + *(longlong *)(system_context + 800);
    }
  }
  return 1;
}



// 函数: void shutdown_monitor_system(void *monitor_context)
void shutdown_monitor_system(void *monitor_context)

{
  *monitor_context = &MONITOR_SYSTEM_START_ADDRESS;
  cleanup_monitor_threads();
  destroy_mutex();
  destroy_condition_variable();
  cleanup_monitor_entries(monitor_context + 2);
  if ((longlong *)monitor_context[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)monitor_context[1] + 0x38))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address