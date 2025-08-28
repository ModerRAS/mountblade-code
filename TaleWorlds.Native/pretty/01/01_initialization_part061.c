#include "TaleWorlds.Native.Split.h"

// 01_initialization_part061.c - 11 个函数

/**
 * 初始化数据转换函数 - 将源数据转换为浮点数和整数混合格式
 * 功能：将整数数组转换为浮点数和整数混合的格式，用于初始化数据结构
 */
void InitializeDataConversion(void)

{
  int *source_ptr;
  longlong data_count;
  longlong source_base;
  longlong context_ptr;
  int *current_ptr;
  longlong loop_counter;
  longlong data_size;
  longlong offset;
  
  offset = -8 - source_base;
  loop_counter = (data_size - 4U >> 2) + 1;
  data_count = loop_counter * 4;
  current_ptr = (int *)(source_base + 8);
  do {
    source_ptr = current_ptr + 8;
    *(float *)((longlong)current_ptr + **(longlong **)(context_ptr + 0x2d0) + offset) = (float)current_ptr[-2];
    *(int *)((longlong)current_ptr + **(longlong **)(context_ptr + 0x2d0) + 4 + offset) = current_ptr[-1];
    *(float *)((longlong)current_ptr + **(longlong **)(context_ptr + 0x2d0) + 8 + offset) = (float)*current_ptr;
    *(int *)((longlong)current_ptr + **(longlong **)(context_ptr + 0x2d0) + 0xc + offset) = current_ptr[1];
    *(float *)((**(longlong **)(context_ptr + 0x2d0) - source_base) + -0x18 + (longlong)source_ptr) =
         (float)current_ptr[2];
    *(int *)((longlong)current_ptr + **(longlong **)(context_ptr + 0x2d0) + 0x14 + offset) = current_ptr[3];
    *(float *)((**(longlong **)(context_ptr + 0x2d0) - source_base) + -0x10 + (longlong)source_ptr) =
         (float)current_ptr[4];
    *(int *)((longlong)current_ptr + **(longlong **)(context_ptr + 0x2d0) + 0x1c + offset) = current_ptr[5];
    loop_counter = loop_counter + -1;
    current_ptr = source_ptr;
  } while (loop_counter != 0);
  for (; data_count < data_size; data_count = data_count + 1) {
    *(float *)(**(longlong **)(context_ptr + 0x2d0) + data_count * 8) =
         (float)*(int *)(source_base + data_count * 8);
    *(undefined4 *)(**(longlong **)(context_ptr + 0x2d0) + 4 + data_count * 8) =
         *(undefined4 *)(source_base + 4 + data_count * 8);
  }
  *(int *)(*(longlong *)(context_ptr + 0x2d0) + 8) = (int)data_size;
  return;
}





/**
 * 数据块转换函数 - 将源数据块转换为浮点数和整数混合格式
 * 功能：遍历数据块，将整数转换为浮点数和整数的混合格式
 */
void ConvertDataBlock(void)

{
  longlong start_index;
  longlong source_base;
  longlong context_ptr;
  longlong end_index;
  
  if (start_index < end_index) {
    do {
      *(float *)(**(longlong **)(context_ptr + 0x2d0) + start_index * 8) =
           (float)*(int *)(source_base + start_index * 8);
      *(undefined4 *)(**(longlong **)(context_ptr + 0x2d0) + 4 + start_index * 8) =
           *(undefined4 *)(source_base + 4 + start_index * 8);
      start_index = start_index + 1;
    } while (start_index < end_index);
  }
  *(int *)(*(longlong *)(context_ptr + 0x2d0) + 8) = (int)end_index;
  return;
}





/**
 * 设置数据大小函数 - 设置数据结构的大小
 * 功能：将数据大小信息写入到指定的数据结构中
 */
void SetDataSize(void)

{
  longlong context_ptr;
  undefined4 data_size;
  
  *(undefined4 *)(*(longlong *)(context_ptr + 0x2d0) + 8) = data_size;
  return;
}



/**
 * 初始化数据结构函数 - 初始化数据结构指针和标志位
 * 功能：设置数据结构的指针指向全局常量，并初始化各个标志位
 */
undefined8 * InitializeDataStructure(undefined8 *data_structure)

{
  *data_structure = &GLOBAL_DATA_TABLE_180a21690;
  *data_structure = &GLOBAL_DATA_TABLE_180a21720;
  *(undefined4 *)(data_structure + 1) = 0;
  *data_structure = &GLOBAL_DATA_BASE_1809fffc8;
  data_structure[2] = 0;
  data_structure[3] = 0;
  *(undefined1 *)(data_structure + 6) = 3;
  data_structure[7] = 0;
  data_structure[8] = 0;
  *(undefined1 *)(data_structure + 0xb) = 3;
  data_structure[0xc] = 0;
  data_structure[0xd] = 0;
  *(undefined1 *)(data_structure + 0x10) = 3;
  data_structure[0x11] = 0;
  data_structure[0x12] = 0;
  *(undefined1 *)(data_structure + 0x15) = 3;
  *(undefined2 *)(data_structure + 0x18) = 0;
  data_structure[0x16] = 0;
  data_structure[0x17] = 0;
  data_structure[0x19] = 0;
  data_structure[0x1a] = 0;
  *(undefined1 *)(data_structure + 0x1d) = 3;
  *(undefined1 *)(data_structure + 6) = 0xf;
  *(undefined1 *)(data_structure + 0xb) = 0xf;
  *(undefined1 *)(data_structure + 0x10) = 0xf;
  *(undefined1 *)(data_structure + 0x15) = 0xf;
  *(undefined1 *)(data_structure + 0x1d) = 0xf;
  return data_structure;
}



/**
 * 清理数据结构函数 - 清理数据结构并释放资源
 * 功能：检查并清理数据结构的各个状态，根据标志位决定是否释放内存
 */
undefined8 * CleanupDataStructure(undefined8 *data_structure,ulonglong cleanup_flags)

{
  *data_structure = &GLOBAL_DATA_BASE_1809fffc8;
  if (data_structure[0x1a] != 0) {
                    // WARNING: Subroutine does not return
    HandleErrorCondition();
  }
  CleanupResource(data_structure[0x16]);
  data_structure[0x16] = 0;
  if (data_structure[0x17] != 0) {
                    // WARNING: Subroutine does not return
    HandleErrorCondition();
  }
  data_structure[0x17] = 0;
  if (data_structure[0x12] != 0) {
                    // WARNING: Subroutine does not return
    HandleErrorCondition();
  }
  if (data_structure[0xd] != 0) {
                    // WARNING: Subroutine does not return
    HandleErrorCondition();
  }
  if (data_structure[8] != 0) {
                    // WARNING: Subroutine does not return
    HandleErrorCondition();
  }
  if (data_structure[3] != 0) {
                    // WARNING: Subroutine does not return
    HandleErrorCondition();
  }
  *data_structure = &GLOBAL_DATA_TABLE_180a21720;
  *data_structure = &GLOBAL_DATA_TABLE_180a21690;
  if ((cleanup_flags & 1) != 0) {
    free(data_structure,0xf0);
  }
  return data_structure;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 线程同步处理函数 - 处理线程同步和资源管理
 * 功能：处理线程同步，检查状态标志，管理资源生命周期
 */
void ThreadSyncHandler(undefined1 *sync_context,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong index;
  longlong *current_resource;
  longlong *previous_resource;
  char status_flag;
  int thread_id;
  undefined4 thread_id_copy;
  longlong context_base;
  undefined *message_ptr;
  bool wait_condition;
  undefined8 timeout_value;
  
  timeout_value = 0xfffffffffffffffe;
  wait_condition = false;
  if ((*(byte *)(*(longlong *)(sync_context + 8) + 0xfd) & 0x20) != 0) {
    ProcessAsyncOperations();
    context_base = 0;
    do {
      status_flag = *(char *)(*(longlong *)(*(longlong *)(sync_context + 8) + 0x1e0) + 0x15 + context_base * 0x18);
      if (status_flag == '\x01') {
        Sleep(0);
        wait_condition = true;
      }
      index = context_base + 1;
      context_base = 0;
      if (status_flag != '\x01') {
        context_base = index;
      }
    } while (context_base < 0x10);
    if ((wait_condition) &&
       ((context_base = *(longlong *)(sync_context + 8), *(char *)(context_base + 0xfa) == '\0' ||
        (*(char *)(context_base + 0xfb) == '\0')))) {
      message_ptr = &GLOBAL_ERROR_MESSAGE_18098bc73;
      if (*(undefined **)(context_base + 0x18) != (undefined *)0x0) {
        message_ptr = *(undefined **)(context_base + 0x18);
      }
                    // WARNING: Subroutine does not return
      SendMessageToHandler(GLOBAL_HANDLER_TABLE_180c86928,&GLOBAL_MESSAGE_QUEUE_1809ffc28,message_ptr,param_4,timeout_value);
    }
  }
  context_base = *(longlong *)(sync_context + 8);
  while( true ) {
    LOCK();
    status_flag = *(char *)(context_base + 0xec);
    wait_condition = status_flag == '\0';
    if (wait_condition) {
      *(char *)(context_base + 0xec) = '\x01';
      status_flag = '\0';
    }
    UNLOCK();
    if (wait_condition) break;
    thread_id = _Thrd_id();
    if (*(int *)(context_base + 0xf0) == thread_id) goto ACQUIRE_LOCK_SUCCESS;
    Sleep();
  }
  status_flag = '\0';
ACQUIRE_LOCK_SUCCESS:
  thread_id_copy = _Thrd_id();
  *(undefined4 *)(context_base + 0xf0) = thread_id_copy;
  if (status_flag == '\0') {
    *sync_context = 1;
  }
  while (*(int *)(context_base + 0xe8) != 0) {
    Sleep(0);
  }
  if ((*(uint *)(sync_context + 0x10) & 1) == 0) {
    ProcessResourceFlags(*(undefined8 *)(sync_context + 8),(byte)(*(uint *)(sync_context + 0x10) >> 2) & 1);
  }
  current_resource = *(longlong **)(*(longlong *)(sync_context + 8) + 0x210);
  if (current_resource != (longlong *)0x0) {
    (**(code **)(*current_resource + 0x28))(current_resource);
  }
  previous_resource = *(longlong **)(sync_context + 0x18);
  *(longlong **)(sync_context + 0x18) = current_resource;
  if (previous_resource != (longlong *)0x0) {
    (**(code **)(*previous_resource + 0x38))();
  }
  return;
}





/**
 * 资源释放函数 - 释放资源并调用清理函数
 * 功能：调用资源清理函数，并执行相关资源的释放操作
 */
void ReleaseResource(longlong resource_handle)

{
  CleanupResourceContext();
  if (*(longlong **)(resource_handle + 0x18) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(resource_handle + 0x18) + 0x38))();
  }
  return;
}





/**
 * 资源上下文清理函数 - 清理资源上下文和相关数据
 * 功能：释放资源，清理上下文数据，重置状态标志
 */
void CleanupResourceContext(char *context_ptr,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong context_data;
  longlong *current_resource;
  longlong *next_resource;
  longlong resource_base;
  undefined8 timeout_value;
  
  timeout_value = 0xfffffffffffffffe;
  context_data = *(longlong *)(context_ptr + 8);
  if (context_data != 0) {
    current_resource = *(longlong **)(context_ptr + 0x18);
    if (current_resource != (longlong *)0x0) {
      (**(code **)(*current_resource + 0x28))(current_resource);
    }
    next_resource = *(longlong **)(context_data + 0x210);
    *(longlong **)(context_data + 0x210) = current_resource;
    if (next_resource != (longlong *)0x0) {
      (**(code **)(*next_resource + 0x38))();
    }
    context_data = *(longlong *)(context_ptr + 8);
    if (*context_ptr != '\0') {
      resource_base = context_data;
      if ((context_ptr[0x10] & 2U) == 0) {
        ReleaseMemoryBlock(context_data);
        ReleaseMemoryBlock(*(undefined8 *)(context_ptr + 8));
        resource_base = *(longlong *)(context_ptr + 8);
      }
      FinalizeResource(resource_base,1,param_3,param_4,timeout_value);
      *(undefined4 *)(context_data + 0xf0) = 0;
      LOCK();
      *(undefined1 *)(context_data + 0xec) = 0;
      UNLOCK();
    }
  }
  context_ptr[8] = '\0';
  context_ptr[9] = '\0';
  context_ptr[10] = '\0';
  context_ptr[0xb] = '\0';
  context_ptr[0xc] = '\0';
  context_ptr[0xd] = '\0';
  context_ptr[0xe] = '\0';
  context_ptr[0xf] = '\0';
  current_resource = *(longlong **)(context_ptr + 0x18);
  context_ptr[0x18] = '\0';
  context_ptr[0x19] = '\0';
  context_ptr[0x1a] = '\0';
  context_ptr[0x1b] = '\0';
  context_ptr[0x1c] = '\0';
  context_ptr[0x1d] = '\0';
  context_ptr[0x1e] = '\0';
  context_ptr[0x1f] = '\0';
  if (current_resource != (longlong *)0x0) {
    (**(code **)(*current_resource + 0x38))();
  }
  return;
}





/**
 * 资源引用计数增加函数 - 增加资源引用计数并处理线程同步
 * 功能：获取资源锁，增加引用计数，处理资源标志
 */
void IncrementResourceReference(longlong *resource_ptr)

{
  longlong resource_handle;
  char lock_status;
  int thread_id;
  bool lock_acquired;
  
  resource_handle = *resource_ptr;
  thread_id = _Thrd_id();
  while( true ) {
    LOCK();
    lock_status = *(char *)(resource_handle + 0xec);
    lock_acquired = lock_status == '\0';
    if (lock_acquired) {
      *(char *)(resource_handle + 0xec) = '\x01';
      lock_status = '\0';
    }
    UNLOCK();
    if (lock_acquired) break;
    if (*(int *)(resource_handle + 0xf0) == thread_id) goto LOCK_ACQUIRED;
    Sleep(0);
  }
  lock_status = '\0';
LOCK_ACQUIRED:
  LOCK();
  *(int *)(resource_handle + 0xe8) = *(int *)(resource_handle + 0xe8) + 1;
  UNLOCK();
  if ((*(uint *)(resource_ptr + 1) & 1) == 0) {
    ProcessResourceFlags(*resource_ptr,(byte)(*(uint *)(resource_ptr + 1) >> 2) & 1);
  }
  if (lock_status == '\0') {
    LOCK();
    *(undefined1 *)(resource_handle + 0xec) = 0;
    UNLOCK();
  }
  resource_ptr[2] = *(longlong *)(*resource_ptr + 0x210);
  return;
}





/**
 * 资源释放包装函数 - 包装资源释放功能
 * 功能：调用资源释放处理函数
 */
void ReleaseResourceWrapper(void)

{
  HandleResourceRelease();
  return;
}





/**
 * 资源引用计数减少函数 - 减少资源引用计数并处理释放
 * 功能：获取资源锁，减少引用计数，当计数为0时释放资源
 */
void HandleResourceRelease(longlong *resource_ptr)

{
  int *reference_count;
  longlong resource_handle;
  char lock_status;
  int thread_id;
  bool lock_acquired;
  
  resource_handle = *resource_ptr;
  if (resource_handle != 0) {
    while( true ) {
      LOCK();
      lock_status = *(char *)(resource_handle + 0xec);
      lock_acquired = lock_status == '\0';
      if (lock_acquired) {
        *(char *)(resource_handle + 0xec) = '\x01';
        lock_status = '\0';
      }
      UNLOCK();
      if (lock_acquired) break;
      thread_id = _Thrd_id();
      if ((*(int *)(resource_handle + 0xf0) == thread_id) || (*(int *)(resource_handle + 0xf0) != 0)) goto LOCK_ACQUIRED;
      Sleep();
    }
    lock_status = '\0';
LOCK_ACQUIRED:
    LOCK();
    reference_count = (int *)(resource_handle + 0xe8);
    thread_id = *reference_count;
    *reference_count = *reference_count + -1;
    UNLOCK();
    if (lock_status == '\0') {
      if (thread_id == 1) {
        FinalizeResource(*resource_ptr,0);
      }
      LOCK();
      *(undefined1 *)(resource_handle + 0xec) = 0;
      UNLOCK();
    }
    *resource_ptr = 0;
  }
  return;
}



/**
 * 资源引用计数减少函数（返回值版本）- 减少引用计数并返回状态
 * 功能：线程安全地减少资源引用计数，返回操作状态
 */
uint DecrementResourceReference(void)

{
  uint *reference_count;
  byte lock_status;
  char status_flag;
  int thread_id;
  uint return_value;
  longlong resource_handle;
  undefined8 *resource_ptr;
  bool lock_acquired;
  
  while( true ) {
    LOCK();
    status_flag = *(char *)(resource_handle + 0xec);
    lock_acquired = status_flag == '\0';
    if (lock_acquired) {
      *(char *)(resource_handle + 0xec) = '\x01';
      status_flag = '\0';
    }
    UNLOCK();
    if (lock_acquired) break;
    thread_id = _Thrd_id();
    if ((*(int *)(resource_handle + 0xf0) == thread_id) || (*(int *)(resource_handle + 0xf0) != 0))
    goto LOCK_ACQUIRED;
    Sleep();
  }
  status_flag = '\0';
LOCK_ACQUIRED:
  LOCK();
  reference_count = (uint *)(resource_handle + 0xe8);
  return_value = *reference_count;
  *reference_count = *reference_count - 1;
  UNLOCK();
  if (status_flag == '\0') {
    if (return_value == 1) {
      FinalizeResource(*resource_ptr,0);
    }
    LOCK();
    lock_status = *(byte *)(resource_handle + 0xec);
    *(byte *)(resource_handle + 0xec) = 0;
    return_value = (uint)lock_status;
    UNLOCK();
  }
  *resource_ptr = 0;
  return return_value;
}



/**
 * 资源状态重置函数 - 重置资源状态并清理指针
 * 功能：根据条件释放资源，重置锁状态，清理资源指针
 */
undefined1 ResetResourceStatus(void)

{
  undefined1 previous_status;
  int release_condition;
  longlong resource_handle;
  undefined8 *resource_ptr;
  
  if (release_condition == 1) {
    FinalizeResource(*resource_ptr,0);
  }
  LOCK();
  previous_status = *(undefined1 *)(resource_handle + 0xec);
  *(undefined1 *)(resource_handle + 0xec) = 0;
  UNLOCK();
  *resource_ptr = 0;
  return previous_status;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 数据表更新函数 - 更新数据表结构和索引
 * 功能：检查版本号，分配内存，更新索引表，处理数据块复制
 */
void UpdateDataTable(longlong table_handle)

{
  longlong *index_ptr;
  longlong *temp_ptr;
  byte *data_ptr;
  char table_size;
  undefined4 buffer_handle;
  uint index_value;
  longlong *data_buffer;
  longlong allocated_memory;
  int base_index;
  int current_index;
  longlong table_base;
  ulonglong data_count;
  char *status_ptr;
  uint *global_counter;
  int total_items;
  uint current_offset;
  int block_start;
  int block_end;
  undefined4 *source_data;
  uint *target_ptr;
  ulonglong start_block;
  ulonglong end_block;
  bool allocation_success;
  
  if (*(int *)(table_handle + 0x28) != *(int *)(GLOBAL_VERSION_TABLE_180c86870 + 0x224)) {
    total_items = *(int *)(table_handle + 0x1c) + *(int *)(table_handle + 0x18);
    *(int *)(table_handle + 0x28) = *(int )(GLOBAL_VERSION_TABLE_180c86870 + 0x224);
    if (0 < total_items) {
      table_base = (longlong)*(int *)(GLOBAL_MEMORY_TABLE_180c86890 + 0xe78) * 0x128 + GLOBAL_MEMORY_TABLE_180c86890 + 0xc28;
      buffer_handle = AllocateMemoryBlock(table_base,total_items);
      *(undefined4 *)(table_handle + 0x30) = buffer_handle;
      InitializeMemoryBlock(table_base,buffer_handle);
      if (*(longlong *)(table_handle + 0x10) == 0) {
        if (*(int *)(table_handle + 0x18) != 0) {
          *(undefined4 *)(table_handle + 0x2c) = *(undefined4 *)(table_handle + 0x30);
          return;
        }
      }
      else {
        table_size = *(char *)(table_handle + 0x44);
        data_count = (ulonglong)table_size;
        index_ptr = (longlong *)(table_handle + 0x38);
        total_items = (int)table_size;
        if (*(int *)(table_handle + 0x40) == (int)table_size) {
          data_buffer = (longlong *)*index_ptr;
        }
        else {
          *(int *)(table_handle + 0x40) = total_items;
          if (*index_ptr != 0) {
                    // WARNING: Subroutine does not return
            HandleErrorCondition();
          }
          *index_ptr = 0;
          if (table_size == '\0') {
            data_buffer = (longlong *)0x0;
            *index_ptr = 0;
          }
          else {
            data_buffer = (longlong *)AllocateDataBuffer(GLOBAL_MEMORY_POOL_180c8ed18,(longlong)table_size * 4);
            *index_ptr = (longlong)data_buffer;
          }
        }
        if (data_buffer != (longlong *)0x0) {
          block_start = 0;
          current_offset = (uint)table_size;
          block_end = block_start;
          if ((0 < total_items) && (0xf < current_offset)) {
            current_index = *(int *)(table_handle + 0x2c);
            temp_ptr = (longlong *)((longlong)data_buffer + (longlong)(table_size + -1) * 4);
            if ((((longlong *)(table_handle + 0x2c) < data_buffer) || (temp_ptr < (longlong *)(table_handle + 0x2c)))
               && ((index_ptr < data_buffer || (block_end = 0, temp_ptr < index_ptr)))) {
              index_value = current_offset & 0x8000000f;
              if ((int)index_value < 0) {
                index_value = (index_value - 1 | 0xfffffff0) + 1;
              }
              data_buffer = data_buffer + 4;
              base_index = 8;
              do {
                *(int *)(data_buffer + -4) = block_start + current_index;
                *(int *)((longlong)data_buffer + -0x1c) = block_start + 1 + current_index;
                *(int *)(data_buffer + -3) = block_start + 2 + current_index;
                *(int *)((longlong)data_buffer + -0x14) = block_start + 3 + current_index;
                block_start = block_start + 0x10;
                *(int *)(data_buffer + -2) = base_index + -4 + current_index;
                *(int *)((longlong)data_buffer + -0xc) = base_index + -3 + current_index;
                *(int *)(data_buffer + -1) = base_index + -2 + current_index;
                *(int *)((longlong)data_buffer + -4) = base_index + -1 + current_index;
                *(int *)data_buffer = base_index + current_index;
                *(int *)((longlong)data_buffer + 4) = base_index + 1 + current_index;
                *(int *)(data_buffer + 1) = base_index + 2 + current_index;
                *(int *)((longlong)data_buffer + 0xc) = base_index + 3 + current_index;
                *(int *)(data_buffer + 2) = base_index + 4 + current_index;
                *(int *)((longlong)data_buffer + 0x14) = base_index + 5 + current_index;
                *(int *)(data_buffer + 3) = base_index + 6 + current_index;
                *(int *)((longlong)data_buffer + 0x1c) = base_index + 7 + current_index;
                data_buffer = data_buffer + 8;
                base_index = base_index + 0x10;
                block_end = block_start;
              } while (block_start < (int)(current_offset - index_value));
            }
          }
          for (table_base = (longlong)block_end; table_base < (longlong)data_count; table_base = table_base + 1) {
            block_start = *(int *)(table_handle + 0x2c) + block_end;
            block_end = block_end + 1;
            *(int *)(*index_ptr + table_base * 4) = block_start;
          }
          block_end = *(int *)(table_handle + 0x18);
          block_start = 0;
          if (0 < (longlong)block_end) {
            table_base = 0;
            do {
              current_index = *(int *)(table_handle + 0x30) + block_start;
              block_start = block_start + 1;
              data_ptr = (byte *)(*(longlong *)(table_handle + 0x10) + table_base);
              table_base = table_base + 1;
              *(int *)(*index_ptr + (ulonglong)*data_ptr * 4) = current_index;
            } while (table_base < block_end);
          }
        }
        global_counter = (uint *)((longlong)*(int )(GLOBAL_MEMORY_TABLE_180c86890 + 0xc20) * 0x128 +
                          GLOBAL_MEMORY_TABLE_180c86890 + 0x9d0);
        if (total_items == 0) {
          current_offset = (int)table_size - 1;
        }
        else {
          LOCK();
          current_offset = *global_counter;
          *global_counter = *global_counter + (int)table_size;
          UNLOCK();
          start_block = (ulonglong)(current_offset >> 0xb);
          end_block = (ulonglong)(table_size + -1 + current_offset >> 0xb);
          if (start_block <= end_block) {
            status_ptr = (char *)((longlong)global_counter + start_block + 0x108);
            table_base = (end_block - start_block) + 1;
            target_ptr = global_counter + start_block * 2 + 2;
            do {
              block_end = (int)start_block;
              if (*(longlong *)target_ptr == 0) {
                allocated_memory = AllocateLargeMemoryBlock(GLOBAL_MEMORY_POOL_180c8ed18,0x2000,0x25);
                LOCK();
                allocation_success = *(longlong *)(global_counter + (longlong)block_end * 2 + 2) == 0;
                if (allocation_success) {
                  *(longlong *)(global_counter + (longlong)block_end * 2 + 2) = allocated_memory;
                }
                UNLOCK();
                if (allocation_success) {
                  LOCK();
                  *(undefined1 *)((longlong)block_end + 0x108 + (longlong)global_counter) = 0;
                  UNLOCK();
                }
                else {
                  if (allocated_memory != 0) {
                    // WARNING: Subroutine does not return
                    HandleErrorCondition();
                  }
                  do {
                  } while (*status_ptr != '\0');
                }
              }
              else {
                do {
                } while (*status_ptr != '\0');
              }
              start_block = (ulonglong)(block_end + 1);
              target_ptr = target_ptr + 2;
              status_ptr = status_ptr + 1;
              table_base = table_base + -1;
            } while (table_base != 0);
          }
        }
        source_data = *(undefined4 **)(table_handle + 0x38);
        index_value = current_offset >> 0xb;
        *(uint *)(table_handle + 0x2c) = current_offset;
        if (index_value == (int)table_size + current_offset >> 0xb) {
                    // WARNING: Subroutine does not return
          memcpy(*(longlong *)(global_counter + (ulonglong)index_value * 2 + 2) +
                 (ulonglong)(current_offset + index_value * -0x800) * 4,source_data,(data_count & 0xffffffff) << 2);
        }
        if (total_items != 0) {
          data_count = data_count & 0xffffffff;
          do {
            buffer_handle = *source_data;
            source_data = source_data + 1;
            *(undefined4 *)
             (*(longlong *)(global_counter + (ulonglong)(current_offset >> 0xb) * 2 + 2) +
             (ulonglong)(current_offset + (current_offset >> 0xb) * -0x800) * 4) = buffer_handle;
            data_count = data_count - 1;
            current_offset = current_offset + 1;
          } while (data_count != 0);
        }
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18007f90f(undefined4 param_1)
void FUN_18007f90f(undefined4 param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  byte *pbVar3;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  char *pcVar13;
  uint *puVar14;
  int iVar15;
  uint uVar16;
  longlong unaff_RDI;
  int iVar17;
  int iVar18;
  undefined4 *puVar19;
  uint *puVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  bool bVar23;
  
  iVar15 = *(int *)(unaff_RDI + 0x1c) + *(int *)(unaff_RDI + 0x18);
  *(undefined4 *)(unaff_RDI + 0x28) = param_1;
  if (0 < iVar15) {
    lVar11 = (longlong)*(int *)(_DAT_180c86890 + 0xe78) * 0x128 + _DAT_180c86890 + 0xc28;
    uVar5 = FUN_180080380(lVar11,iVar15);
    *(undefined4 *)(unaff_RDI + 0x30) = uVar5;
    FUN_1800802e0(lVar11,uVar5);
    if (*(longlong *)(unaff_RDI + 0x10) == 0) {
      if (*(int *)(unaff_RDI + 0x18) != 0) {
        *(undefined4 *)(unaff_RDI + 0x2c) = *(undefined4 *)(unaff_RDI + 0x30);
        return;
      }
    }
    else {
      cVar4 = *(char *)(unaff_RDI + 0x44);
      uVar12 = (ulonglong)cVar4;
      plVar1 = (longlong *)(unaff_RDI + 0x38);
      iVar15 = (int)cVar4;
      if (*(int *)(unaff_RDI + 0x40) == (int)cVar4) {
        plVar7 = (longlong *)*plVar1;
      }
      else {
        *(int *)(unaff_RDI + 0x40) = iVar15;
        if (*plVar1 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *plVar1 = 0;
        if (cVar4 == '\0') {
          plVar7 = (longlong *)0x0;
          *plVar1 = 0;
        }
        else {
          plVar7 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,(longlong)cVar4 * 4);
          *plVar1 = (longlong)plVar7;
        }
      }
      if (plVar7 != (longlong *)0x0) {
        iVar17 = 0;
        uVar16 = (uint)cVar4;
        iVar18 = iVar17;
        if ((0 < iVar15) && (0xf < uVar16)) {
          iVar10 = *(int *)(unaff_RDI + 0x2c);
          plVar2 = (longlong *)((longlong)plVar7 + (longlong)(cVar4 + -1) * 4);
          if ((((longlong *)(unaff_RDI + 0x2c) < plVar7) ||
              (plVar2 < (longlong *)(unaff_RDI + 0x2c))) &&
             ((plVar1 < plVar7 || (iVar18 = 0, plVar2 < plVar1)))) {
            uVar6 = uVar16 & 0x8000000f;
            if ((int)uVar6 < 0) {
              uVar6 = (uVar6 - 1 | 0xfffffff0) + 1;
            }
            plVar7 = plVar7 + 4;
            iVar9 = 8;
            do {
              *(int *)(plVar7 + -4) = iVar17 + iVar10;
              *(int *)((longlong)plVar7 + -0x1c) = iVar17 + 1 + iVar10;
              *(int *)(plVar7 + -3) = iVar17 + 2 + iVar10;
              *(int *)((longlong)plVar7 + -0x14) = iVar17 + 3 + iVar10;
              iVar17 = iVar17 + 0x10;
              *(int *)(plVar7 + -2) = iVar9 + -4 + iVar10;
              *(int *)((longlong)plVar7 + -0xc) = iVar9 + -3 + iVar10;
              *(int *)(plVar7 + -1) = iVar9 + -2 + iVar10;
              *(int *)((longlong)plVar7 + -4) = iVar9 + -1 + iVar10;
              *(int *)plVar7 = iVar9 + iVar10;
              *(int *)((longlong)plVar7 + 4) = iVar9 + 1 + iVar10;
              *(int *)(plVar7 + 1) = iVar9 + 2 + iVar10;
              *(int *)((longlong)plVar7 + 0xc) = iVar9 + 3 + iVar10;
              *(int *)(plVar7 + 2) = iVar9 + 4 + iVar10;
              *(int *)((longlong)plVar7 + 0x14) = iVar9 + 5 + iVar10;
              *(int *)(plVar7 + 3) = iVar9 + 6 + iVar10;
              *(int *)((longlong)plVar7 + 0x1c) = iVar9 + 7 + iVar10;
              plVar7 = plVar7 + 8;
              iVar9 = iVar9 + 0x10;
              iVar18 = iVar17;
            } while (iVar17 < (int)(uVar16 - uVar6));
          }
        }
        for (lVar11 = (longlong)iVar18; lVar11 < (longlong)uVar12; lVar11 = lVar11 + 1) {
          iVar17 = *(int *)(unaff_RDI + 0x2c) + iVar18;
          iVar18 = iVar18 + 1;
          *(int *)(*plVar1 + lVar11 * 4) = iVar17;
        }
        iVar18 = *(int *)(unaff_RDI + 0x18);
        iVar17 = 0;
        if (0 < (longlong)iVar18) {
          lVar11 = 0;
          do {
            iVar10 = *(int *)(unaff_RDI + 0x30) + iVar17;
            iVar17 = iVar17 + 1;
            pbVar3 = (byte *)(*(longlong *)(unaff_RDI + 0x10) + lVar11);
            lVar11 = lVar11 + 1;
            *(int *)(*plVar1 + (ulonglong)*pbVar3 * 4) = iVar10;
          } while (lVar11 < iVar18);
        }
      }
      puVar14 = (uint *)((longlong)*(int *)(_DAT_180c86890 + 0xc20) * 0x128 + _DAT_180c86890 + 0x9d0
                        );
      if (iVar15 == 0) {
        uVar16 = (int)cVar4 - 1;
      }
      else {
        LOCK();
        uVar16 = *puVar14;
        *puVar14 = *puVar14 + (int)cVar4;
        UNLOCK();
        uVar21 = (ulonglong)(uVar16 >> 0xb);
        uVar22 = (ulonglong)(cVar4 + -1 + uVar16 >> 0xb);
        if (uVar21 <= uVar22) {
          pcVar13 = (char *)((longlong)puVar14 + uVar21 + 0x108);
          lVar11 = (uVar22 - uVar21) + 1;
          puVar20 = puVar14 + uVar21 * 2 + 2;
          do {
            iVar18 = (int)uVar21;
            if (*(longlong *)puVar20 == 0) {
              lVar8 = FUN_18062b420(_DAT_180c8ed18,0x2000,0x25);
              LOCK();
              bVar23 = *(longlong *)(puVar14 + (longlong)iVar18 * 2 + 2) == 0;
              if (bVar23) {
                *(longlong *)(puVar14 + (longlong)iVar18 * 2 + 2) = lVar8;
              }
              UNLOCK();
              if (bVar23) {
                LOCK();
                *(undefined1 *)((longlong)iVar18 + 0x108 + (longlong)puVar14) = 0;
                UNLOCK();
              }
              else {
                if (lVar8 != 0) {
                    // WARNING: Subroutine does not return
                  FUN_18064e900();
                }
                do {
                } while (*pcVar13 != '\0');
              }
            }
            else {
              do {
              } while (*pcVar13 != '\0');
            }
            uVar21 = (ulonglong)(iVar18 + 1);
            puVar20 = puVar20 + 2;
            pcVar13 = pcVar13 + 1;
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
        }
      }
      puVar19 = *(undefined4 **)(unaff_RDI + 0x38);
      uVar6 = uVar16 >> 0xb;
      *(uint *)(unaff_RDI + 0x2c) = uVar16;
      if (uVar6 == (int)cVar4 + uVar16 >> 0xb) {
                    // WARNING: Subroutine does not return
        memcpy(*(longlong *)(puVar14 + (ulonglong)uVar6 * 2 + 2) +
               (ulonglong)(uVar16 + uVar6 * -0x800) * 4,puVar19,(uVar12 & 0xffffffff) << 2);
      }
      if (iVar15 != 0) {
        uVar12 = uVar12 & 0xffffffff;
        do {
          uVar5 = *puVar19;
          puVar19 = puVar19 + 1;
          *(undefined4 *)
           (*(longlong *)(puVar14 + (ulonglong)(uVar16 >> 0xb) * 2 + 2) +
           (ulonglong)(uVar16 + (uVar16 >> 0xb) * -0x800) * 4) = uVar5;
          uVar12 = uVar12 - 1;
          uVar16 = uVar16 + 1;
        } while (uVar12 != 0);
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



