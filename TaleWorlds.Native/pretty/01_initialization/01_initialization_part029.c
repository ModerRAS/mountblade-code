#include "TaleWorlds.Native.Split.h"

// 01_initialization_part029.c - 初始化模块第29部分
// 包含6个函数，主要涉及对象引用管理、线程同步和内存分配

// 函数: 从容器中移除并释放对象引用
// 参数: container_ptr - 容器对象指针, object_ptr - 要移除的对象指针
// 功能: 从容器中查找并移除指定对象，然后释放其资源
void remove_and_release_object_reference(longlong container_ptr, longlong *object_ptr)

{
  longlong *current_item;
  ulonglong item_count;
  longlong target_address;
  longlong *array_ptr;
  int index;
  ulonglong container_end;
  
  index = 0;
  current_item = *(longlong **)(container_ptr + 0x48);
  item_count = *(longlong *)(container_ptr + 0x50) - (longlong)current_item >> 3;
  array_ptr = current_item;
  if (item_count != 0) {
    do {
      if ((longlong *)*array_ptr == object_ptr) {
        FUN_18020e7b0(current_item[index]);
        container_end = *(ulonglong *)(container_ptr + 0x50);
        target_address = *(longlong *)(container_ptr + 0x48) + (longlong)index * 8;
        item_count = target_address + 8;
        if (item_count < container_end) {
                    // WARNING: Subroutine does not return
          memmove(target_address, item_count, container_end - item_count);
        }
        *(ulonglong *)(container_ptr + 0x50) = container_end - 8;
        break;
      }
      index = index + 1;
      array_ptr = array_ptr + 1;
    } while ((ulonglong)(longlong)index < item_count);
  }
  if (object_ptr != (longlong *)0x0) {
    target_address = __RTCastToVoid(object_ptr);
    (**(code **)(*object_ptr + 0x28))(object_ptr, 0);
    if (target_address != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(target_address);
    }
  }
  return;
}





// 函数: 全局对象引用清理
// 功能: 清理全局对象引用，释放相关资源
void cleanup_global_object_references(void)

{
  longlong object_handle;
  longlong *global_object_ptr;
  
  object_handle = __RTCastToVoid();
  (**(code **)(*global_object_ptr + 0x28))();
  if (object_handle != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(object_handle);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: 释放资源并解锁互斥锁
// 参数: object_ptr - 包含资源的对象指针
// 功能: 释放指定对象的资源，并解锁相关互斥锁
void release_resource_and_unlock_mutex(longlong object_ptr)

{
  int lock_result;
  longlong mutex_address;
  
  FUN_18020f150(*(undefined8 *)(*(longlong *)(object_ptr + 8) + 8));
  mutex_address = _DAT_180c86938 + 0x20;
  lock_result = _Mtx_lock(mutex_address);
  if (lock_result != 0) {
    __Throw_C_error_std__YAXH_Z(lock_result);
  }
  lock_result = _Mtx_unlock(mutex_address);
  if (lock_result != 0) {
                    // WARNING: Could not recover jumptable at 0x00018005e68f. Too many branches
                    // WARNING: Treating indirect jump as call
    __Throw_C_error_std__YAXH_Z(lock_result);
    return;
  }
  return;
}





// 函数: 处理对象状态并执行回调
// 参数: context_ptr - 上下文指针, object_ptr - 对象指针, 
//        status_flag - 状态标志, callback_param - 回调参数
// 功能: 检查对象状态，根据状态执行相应的回调函数
void process_object_state_and_callbacks(undefined8 context_ptr, longlong *object_ptr, undefined1 status_flag, undefined8 callback_param)

{
  code *status_check_func;
  longlong *thread_context;
  char is_ready;
  undefined8 retry_count;
  
  retry_count = 0xfffffffffffffffe;
  while( true ) {
    status_check_func = *(code **)(*(longlong *)*object_ptr + 0x68);
    if (status_check_func == (code *)&DEFAULT_STATUS_CHECKER) {
      is_ready = (char)((longlong *)*object_ptr)[2] != '\0';
    }
    else {
      is_ready = (*status_check_func)();
    }
    if (is_ready != '\0') break;
    thread_context = (longlong *)get_thread_local_context(context_ptr);
    is_ready = (**(code **)(*thread_context + 0x20))(thread_context, status_flag, *(code **)(*thread_context + 0x20), callback_param, retry_count);
    if (is_ready == '\0') {
      status_check_func = *(code **)(*(longlong *)*object_ptr + 0x80);
      if (status_check_func == (code *)&DEFAULT_CLEANUP_HANDLER) {
        cleanup_object_resources((longlong *)*object_ptr + 4);
      }
      else {
        (*status_check_func)();
      }
    }
  }
  if ((longlong *)*object_ptr != (longlong *)0x0) {
    (**(code **)(*(longlong *)*object_ptr + 0x38))();
  }
  return;
}





// 函数: 批量处理对象状态
// 参数: context_ptr - 上下文指针, object_array_ptr - 对象数组指针, 
//        process_flag - 处理标志
// 功能: 遍历对象数组，处理每个对象的状态变化
void batch_process_object_states(undefined8 context_ptr, longlong *object_array_ptr, char process_flag)

{
  code *status_check_func;
  bool has_processed;
  longlong *current_object;
  ulonglong object_index;
  longlong array_start;
  longlong array_end;
  char is_ready;
  
  array_end = object_array_ptr[1];
  array_start = *object_array_ptr;
  do {
    has_processed = false;
    object_index = 0;
    if (array_end - array_start >> 3 == 0) {
      return;
    }
    do {
      current_object = *(longlong **)(object_index * 8 + array_start);
      status_check_func = *(code **)(*current_object + 0x68);
      if (status_check_func == (code *)&DEFAULT_STATUS_CHECKER) {
        is_ready = (char)current_object[2] != '\0';
      }
      else {
        is_ready = (*status_check_func)();
      }
      if (is_ready == '\0') {
        has_processed = true;
        current_object = (longlong *)get_thread_local_context(context_ptr);
        if (process_flag == '\0') {
          is_ready = (**(code **)(*current_object + 0x20))(current_object, 0);
        }
        else {
          is_ready = get_global_status_flag();
        }
        if (is_ready == '\0') {
          current_object = *(longlong **)(object_index * 8 + *object_array_ptr);
          status_check_func = *(code **)(*current_object + 0x80);
          if (status_check_func == (code *)&DEFAULT_CLEANUP_HANDLER) {
            cleanup_object_resources(current_object + 4);
          }
          else {
            (*status_check_func)();
          }
        }
      }
      array_end = object_array_ptr[1];
      object_index = (ulonglong)((int)object_index + 1);
      array_start = *object_array_ptr;
    } while (object_index < (ulonglong)(array_end - array_start >> 3));
  } while (has_processed);
  return;
}



// 函数: 获取线程本地上下文
// 参数: context_manager_ptr - 上下文管理器指针
// 返回值: 找到的线程本地上下文指针，如果未找到则返回0
// 功能: 在主池和辅助池中查找属于当前线程的上下文
longlong get_thread_local_context(longlong context_manager_ptr)

{
  longlong context_ptr;
  int current_thread_id;
  ulonglong primary_index;
  ulonglong secondary_index;
  
  secondary_index = 0;
  primary_index = secondary_index;
  if (*(longlong *)(context_manager_ptr + 0x10) - *(longlong *)(context_manager_ptr + 8) >> 3 != 0) {
    do {
      current_thread_id = _Thrd_id();
      context_ptr = *(longlong *)(*(longlong *)(context_manager_ptr + 8) + primary_index * 8);
      if (*(int *)(context_ptr + 0x48) == current_thread_id) {
        return context_ptr;
      }
      primary_index = (ulonglong)((int)primary_index + 1);
    } while (primary_index < (ulonglong)(*(longlong *)(context_manager_ptr + 0x10) - *(longlong *)(context_manager_ptr + 8) >> 3));
  }
  if (*(longlong *)(context_manager_ptr + 0x30) - *(longlong *)(context_manager_ptr + 0x28) >> 3 != 0) {
    do {
      current_thread_id = _Thrd_id();
      context_ptr = *(longlong *)(*(longlong *)(context_manager_ptr + 0x28) + secondary_index * 8);
      if (*(int *)(context_ptr + 0x48) == current_thread_id) {
        return context_ptr;
      }
      secondary_index = (ulonglong)((int)secondary_index + 1);
    } while (secondary_index < (ulonglong)(*(longlong *)(context_manager_ptr + 0x30) - *(longlong *)(context_manager_ptr + 0x28) >> 3)
            );
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: 初始化对象管理器结构
// 参数: manager_ptr - 管理器指针
// 返回值: 初始化完成的管理器指针
// 功能: 初始化对象管理器的各个字段和内部结构
undefined8 * initialize_object_manager(undefined8 *manager_ptr)

{
  undefined8 heap_base;
  ulonglong buffer_size;
  undefined8 *data_array;
  ulonglong slot_index;
  ulonglong memory_block;
  undefined8 *array_ptr;
  longlong init_count;
  longlong array_size;
  
  memory_block = 0;
  data_array = manager_ptr + 0xb;
  *manager_ptr = 0;
  array_size = 0x20;
  *(undefined4 *)(manager_ptr + 1) = 0;
  manager_ptr[2] = 0;
  manager_ptr[5] = 0;
  init_count = 0x20;
  array_ptr = data_array;
  do {
    initialize_array_slot(array_ptr);
    array_ptr = array_ptr + 2;
    init_count = init_count + -1;
  } while (init_count != 0);
  *(undefined8 *)((longlong)manager_ptr + 0x25c) = 0;
  *(undefined4 *)(manager_ptr + 0x4b) = 0;
  manager_ptr[7] = 0;
  manager_ptr[8] = 0x20;
  manager_ptr[9] = data_array;
  do {
    *(undefined4 *)data_array = 0;
    heap_base = GLOBAL_HEAP_BASE_ADDRESS;
    data_array = data_array + 2;
    array_size = array_size + -1;
  } while (array_size != 0);
  init_count = 6;
  manager_ptr[10] = 0;
  manager_ptr[6] = manager_ptr + 8;
  manager_ptr[4] = 6;
  buffer_size = allocate_memory_buffer(heap_base, 0x7b0, 10);
  slot_index = memory_block;
  if (buffer_size != 0) {
    data_array = (undefined8 *)(buffer_size + 0x108);
    do {
      data_array[-1] = 0;
      *data_array = 0;
      *(undefined4 *)(data_array + 5) = 0;
      data_array[6] = 0;
      *(undefined2 *)(data_array + 7) = 0x100;
      data_array = data_array + 0x29;
      init_count = init_count + -1;
      slot_index = buffer_size;
    } while (init_count != 0);
  }
  manager_ptr[3] = slot_index;
  if (slot_index == 0) {
    manager_ptr[4] = 0;
    slot_index = memory_block;
  }
  else {
    slot_index = manager_ptr[4];
  }
  buffer_size = memory_block;
  if (slot_index != 0) {
    do {
      buffer_size = buffer_size + 1;
      *(undefined1 *)(memory_block + 0x141 + manager_ptr[3]) = 0;
      memory_block = memory_block + 0x148;
    } while (buffer_size < (ulonglong)manager_ptr[4]);
  }
  return manager_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



