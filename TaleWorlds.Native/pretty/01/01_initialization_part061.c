#include "TaleWorlds.Native.Split.h"

// 01_initialization_part061.c - 11 个函数

/**
 * 初始化数据转换函数 - 将源数据转换为浮点数和整数混合格式
 * 功能：将整数数组转换为浮点数和整数混合的格式，用于初始化数据结构
 */
void InitializeDataConversion(void)

{
  int *source_ptr;
  int64_t data_count;
  int64_t source_base;
  int64_t context_ptr;
  int *current_ptr;
  int64_t loop_counter;
  int64_t data_size;
  int64_t offset;
  
  offset = -8 - source_base;
  loop_counter = (data_size - 4U >> 2) + 1;
  data_count = loop_counter * 4;
  current_ptr = (int *)(source_base + 8);
  do {
    source_ptr = current_ptr + 8;
    *(float *)((int64_t)current_ptr + **(int64_t **)(context_ptr + 0x2d0) + offset) = (float)current_ptr[-2];
    *(int *)((int64_t)current_ptr + **(int64_t **)(context_ptr + 0x2d0) + 4 + offset) = current_ptr[-1];
    *(float *)((int64_t)current_ptr + **(int64_t **)(context_ptr + 0x2d0) + 8 + offset) = (float)*current_ptr;
    *(int *)((int64_t)current_ptr + **(int64_t **)(context_ptr + 0x2d0) + 0xc + offset) = current_ptr[1];
    *(float *)((**(int64_t **)(context_ptr + 0x2d0) - source_base) + -0x18 + (int64_t)source_ptr) =
         (float)current_ptr[2];
    *(int *)((int64_t)current_ptr + **(int64_t **)(context_ptr + 0x2d0) + 0x14 + offset) = current_ptr[3];
    *(float *)((**(int64_t **)(context_ptr + 0x2d0) - source_base) + -0x10 + (int64_t)source_ptr) =
         (float)current_ptr[4];
    *(int *)((int64_t)current_ptr + **(int64_t **)(context_ptr + 0x2d0) + 0x1c + offset) = current_ptr[5];
    loop_counter = loop_counter + -1;
    current_ptr = source_ptr;
  } while (loop_counter != 0);
  for (; data_count < data_size; data_count = data_count + 1) {
    *(float *)(**(int64_t **)(context_ptr + 0x2d0) + data_count * 8) =
         (float)*(int *)(source_base + data_count * 8);
    *(int32_t *)(**(int64_t **)(context_ptr + 0x2d0) + 4 + data_count * 8) =
         *(int32_t *)(source_base + 4 + data_count * 8);
  }
  *(int *)(*(int64_t *)(context_ptr + 0x2d0) + 8) = (int)data_size;
  return;
}





/**
 * 数据块转换函数 - 将源数据块转换为浮点数和整数混合格式
 * 功能：遍历数据块，将整数转换为浮点数和整数的混合格式
 */
void ConvertDataBlock(void)

{
  int64_t start_index;
  int64_t source_base;
  int64_t context_ptr;
  int64_t end_index;
  
  if (start_index < end_index) {
    do {
      *(float *)(**(int64_t **)(context_ptr + 0x2d0) + start_index * 8) =
           (float)*(int *)(source_base + start_index * 8);
      *(int32_t *)(**(int64_t **)(context_ptr + 0x2d0) + 4 + start_index * 8) =
           *(int32_t *)(source_base + 4 + start_index * 8);
      start_index = start_index + 1;
    } while (start_index < end_index);
  }
  *(int *)(*(int64_t *)(context_ptr + 0x2d0) + 8) = (int)end_index;
  return;
}





/**
 * 设置数据大小函数 - 设置数据结构的大小
 * 功能：将数据大小信息写入到指定的数据结构中
 */
void SetDataSize(void)

{
  int64_t context_ptr;
  int32_t data_size;
  
  *(int32_t *)(*(int64_t *)(context_ptr + 0x2d0) + 8) = data_size;
  return;
}



/**
 * 初始化数据结构函数 - 初始化数据结构指针和标志位
 * 功能：设置数据结构的指针指向全局常量，并初始化各个标志位
 */
uint64_t * InitializeDataStructure(uint64_t *data_structure)

{
  *data_structure = &GLOBAL_DATA_TABLE_180a21690;
  *data_structure = &GLOBAL_DATA_TABLE_180a21720;
  *(int32_t *)(data_structure + 1) = 0;
  *data_structure = &GLOBAL_DATA_BASE_1809fffc8;
  data_structure[2] = 0;
  data_structure[3] = 0;
  *(int8_t *)(data_structure + 6) = 3;
  data_structure[7] = 0;
  data_structure[8] = 0;
  *(int8_t *)(data_structure + 0xb) = 3;
  data_structure[0xc] = 0;
  data_structure[0xd] = 0;
  *(int8_t *)(data_structure + 0x10) = 3;
  data_structure[0x11] = 0;
  data_structure[0x12] = 0;
  *(int8_t *)(data_structure + 0x15) = 3;
  *(int16_t *)(data_structure + 0x18) = 0;
  data_structure[0x16] = 0;
  data_structure[0x17] = 0;
  data_structure[0x19] = 0;
  data_structure[0x1a] = 0;
  *(int8_t *)(data_structure + 0x1d) = 3;
  *(int8_t *)(data_structure + 6) = 0xf;
  *(int8_t *)(data_structure + 0xb) = 0xf;
  *(int8_t *)(data_structure + 0x10) = 0xf;
  *(int8_t *)(data_structure + 0x15) = 0xf;
  *(int8_t *)(data_structure + 0x1d) = 0xf;
  return data_structure;
}



/**
 * 清理数据结构函数 - 清理数据结构并释放资源
 * 功能：检查并清理数据结构的各个状态，根据标志位决定是否释放内存
 */
uint64_t * CleanupDataStructure(uint64_t *data_structure,uint64_t cleanup_flags)

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
void ThreadSyncHandler(int8_t *sync_context,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t index;
  int64_t *current_resource;
  int64_t *previous_resource;
  char status_flag;
  int thread_id;
  int32_t thread_id_copy;
  int64_t context_base;
  void *message_ptr;
  bool wait_condition;
  uint64_t timeout_value;
  
  timeout_value = 0xfffffffffffffffe;
  wait_condition = false;
  if ((*(byte *)(*(int64_t *)(sync_context + 8) + 0xfd) & 0x20) != 0) {
    ProcessAsyncOperations();
    context_base = 0;
    do {
      status_flag = *(char *)(*(int64_t *)(*(int64_t *)(sync_context + 8) + 0x1e0) + 0x15 + context_base * 0x18);
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
       ((context_base = *(int64_t *)(sync_context + 8), *(char *)(context_base + 0xfa) == '\0' ||
        (*(char *)(context_base + 0xfb) == '\0')))) {
      message_ptr = &GLOBAL_ERROR_MESSAGE_18098bc73;
      if (*(void **)(context_base + 0x18) != (void *)0x0) {
        message_ptr = *(void **)(context_base + 0x18);
      }
                    // WARNING: Subroutine does not return
      SendMessageToHandler(GLOBAL_HANDLER_TABLE_180c86928,&GLOBAL_MESSAGE_QUEUE_1809ffc28,message_ptr,param_4,timeout_value);
    }
  }
  context_base = *(int64_t *)(sync_context + 8);
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
  *(int32_t *)(context_base + 0xf0) = thread_id_copy;
  if (status_flag == '\0') {
    *sync_context = 1;
  }
  while (*(int *)(context_base + 0xe8) != 0) {
    Sleep(0);
  }
  if ((*(uint *)(sync_context + 0x10) & 1) == 0) {
    ProcessResourceFlags(*(uint64_t *)(sync_context + 8),(byte)(*(uint *)(sync_context + 0x10) >> 2) & 1);
  }
  current_resource = *(int64_t **)(*(int64_t *)(sync_context + 8) + 0x210);
  if (current_resource != (int64_t *)0x0) {
    (**(code **)(*current_resource + 0x28))(current_resource);
  }
  previous_resource = *(int64_t **)(sync_context + 0x18);
  *(int64_t **)(sync_context + 0x18) = current_resource;
  if (previous_resource != (int64_t *)0x0) {
    (**(code **)(*previous_resource + 0x38))();
  }
  return;
}





/**
 * 资源释放函数 - 释放资源并调用清理函数
 * 功能：调用资源清理函数，并执行相关资源的释放操作
 */
void ReleaseResource(int64_t resource_handle)

{
  CleanupResourceContext();
  if (*(int64_t **)(resource_handle + 0x18) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(resource_handle + 0x18) + 0x38))();
  }
  return;
}





/**
 * 资源上下文清理函数 - 清理资源上下文和相关数据
 * 功能：释放资源，清理上下文数据，重置状态标志
 */
void CleanupResourceContext(char *context_ptr,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t context_data;
  int64_t *current_resource;
  int64_t *next_resource;
  int64_t resource_base;
  uint64_t timeout_value;
  
  timeout_value = 0xfffffffffffffffe;
  context_data = *(int64_t *)(context_ptr + 8);
  if (context_data != 0) {
    current_resource = *(int64_t **)(context_ptr + 0x18);
    if (current_resource != (int64_t *)0x0) {
      (**(code **)(*current_resource + 0x28))(current_resource);
    }
    next_resource = *(int64_t **)(context_data + 0x210);
    *(int64_t **)(context_data + 0x210) = current_resource;
    if (next_resource != (int64_t *)0x0) {
      (**(code **)(*next_resource + 0x38))();
    }
    context_data = *(int64_t *)(context_ptr + 8);
    if (*context_ptr != '\0') {
      resource_base = context_data;
      if ((context_ptr[0x10] & 2U) == 0) {
        ReleaseMemoryBlock(context_data);
        ReleaseMemoryBlock(*(uint64_t *)(context_ptr + 8));
        resource_base = *(int64_t *)(context_ptr + 8);
      }
      FinalizeResource(resource_base,1,param_3,param_4,timeout_value);
      *(int32_t *)(context_data + 0xf0) = 0;
      LOCK();
      *(int8_t *)(context_data + 0xec) = 0;
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
  current_resource = *(int64_t **)(context_ptr + 0x18);
  context_ptr[0x18] = '\0';
  context_ptr[0x19] = '\0';
  context_ptr[0x1a] = '\0';
  context_ptr[0x1b] = '\0';
  context_ptr[0x1c] = '\0';
  context_ptr[0x1d] = '\0';
  context_ptr[0x1e] = '\0';
  context_ptr[0x1f] = '\0';
  if (current_resource != (int64_t *)0x0) {
    (**(code **)(*current_resource + 0x38))();
  }
  return;
}





/**
 * 资源引用计数增加函数 - 增加资源引用计数并处理线程同步
 * 功能：获取资源锁，增加引用计数，处理资源标志
 */
void IncrementResourceReference(int64_t *resource_ptr)

{
  int64_t resource_handle;
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
    *(int8_t *)(resource_handle + 0xec) = 0;
    UNLOCK();
  }
  resource_ptr[2] = *(int64_t *)(*resource_ptr + 0x210);
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
void HandleResourceRelease(int64_t *resource_ptr)

{
  int *reference_count;
  int64_t resource_handle;
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
      *(int8_t *)(resource_handle + 0xec) = 0;
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
  int64_t resource_handle;
  uint64_t *resource_ptr;
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
int8_t ResetResourceStatus(void)

{
  int8_t previous_status;
  int release_condition;
  int64_t resource_handle;
  uint64_t *resource_ptr;
  
  if (release_condition == 1) {
    FinalizeResource(*resource_ptr,0);
  }
  LOCK();
  previous_status = *(int8_t *)(resource_handle + 0xec);
  *(int8_t *)(resource_handle + 0xec) = 0;
  UNLOCK();
  *resource_ptr = 0;
  return previous_status;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 数据表更新函数 - 更新数据表结构和索引
 * 功能：检查版本号，分配内存，更新索引表，处理数据块复制
 */
void UpdateDataTable(int64_t table_handle)

{
  int64_t *index_ptr;
  int64_t *temp_ptr;
  byte *data_ptr;
  char table_size;
  int32_t buffer_handle;
  uint index_value;
  int64_t *data_buffer;
  int64_t allocated_memory;
  int base_index;
  int current_index;
  int64_t table_base;
  uint64_t data_count;
  char *status_ptr;
  uint *global_counter;
  int total_items;
  uint current_offset;
  int block_start;
  int block_end;
  int32_t *source_data;
  uint *target_ptr;
  uint64_t start_block;
  uint64_t end_block;
  bool allocation_success;
  
  if (*(int *)(table_handle + 0x28) != *(int *)(GLOBAL_VERSION_TABLE_180c86870 + 0x224)) {
    total_items = *(int *)(table_handle + 0x1c) + *(int *)(table_handle + 0x18);
    *(int *)(table_handle + 0x28) = *(int )(GLOBAL_VERSION_TABLE_180c86870 + 0x224);
    if (0 < total_items) {
      table_base = (int64_t)*(int *)(GLOBAL_MEMORY_TABLE_180c86890 + 0xe78) * 0x128 + GLOBAL_MEMORY_TABLE_180c86890 + 0xc28;
      buffer_handle = AllocateMemoryBlock(table_base,total_items);
      *(int32_t *)(table_handle + 0x30) = buffer_handle;
      InitializeMemoryBlock(table_base,buffer_handle);
      if (*(int64_t *)(table_handle + 0x10) == 0) {
        if (*(int *)(table_handle + 0x18) != 0) {
          *(int32_t *)(table_handle + 0x2c) = *(int32_t *)(table_handle + 0x30);
          return;
        }
      }
      else {
        table_size = *(char *)(table_handle + 0x44);
        data_count = (uint64_t)table_size;
        index_ptr = (int64_t *)(table_handle + 0x38);
        total_items = (int)table_size;
        if (*(int *)(table_handle + 0x40) == (int)table_size) {
          data_buffer = (int64_t *)*index_ptr;
        }
        else {
          *(int *)(table_handle + 0x40) = total_items;
          if (*index_ptr != 0) {
                    // WARNING: Subroutine does not return
            HandleErrorCondition();
          }
          *index_ptr = 0;
          if (table_size == '\0') {
            data_buffer = (int64_t *)0x0;
            *index_ptr = 0;
          }
          else {
            data_buffer = (int64_t *)AllocateDataBuffer(GLOBAL_MEMORY_POOL_180c8ed18,(int64_t)table_size * 4);
            *index_ptr = (int64_t)data_buffer;
          }
        }
        if (data_buffer != (int64_t *)0x0) {
          block_start = 0;
          current_offset = (uint)table_size;
          block_end = block_start;
          if ((0 < total_items) && (0xf < current_offset)) {
            current_index = *(int *)(table_handle + 0x2c);
            temp_ptr = (int64_t *)((int64_t)data_buffer + (int64_t)(table_size + -1) * 4);
            if ((((int64_t *)(table_handle + 0x2c) < data_buffer) || (temp_ptr < (int64_t *)(table_handle + 0x2c)))
               && ((index_ptr < data_buffer || (block_end = 0, temp_ptr < index_ptr)))) {
              index_value = current_offset & 0x8000000f;
              if ((int)index_value < 0) {
                index_value = (index_value - 1 | 0xfffffff0) + 1;
              }
              data_buffer = data_buffer + 4;
              base_index = 8;
              do {
                *(int *)(data_buffer + -4) = block_start + current_index;
                *(int *)((int64_t)data_buffer + -0x1c) = block_start + 1 + current_index;
                *(int *)(data_buffer + -3) = block_start + 2 + current_index;
                *(int *)((int64_t)data_buffer + -0x14) = block_start + 3 + current_index;
                block_start = block_start + 0x10;
                *(int *)(data_buffer + -2) = base_index + -4 + current_index;
                *(int *)((int64_t)data_buffer + -0xc) = base_index + -3 + current_index;
                *(int *)(data_buffer + -1) = base_index + -2 + current_index;
                *(int *)((int64_t)data_buffer + -4) = base_index + -1 + current_index;
                *(int *)data_buffer = base_index + current_index;
                *(int *)((int64_t)data_buffer + 4) = base_index + 1 + current_index;
                *(int *)(data_buffer + 1) = base_index + 2 + current_index;
                *(int *)((int64_t)data_buffer + 0xc) = base_index + 3 + current_index;
                *(int *)(data_buffer + 2) = base_index + 4 + current_index;
                *(int *)((int64_t)data_buffer + 0x14) = base_index + 5 + current_index;
                *(int *)(data_buffer + 3) = base_index + 6 + current_index;
                *(int *)((int64_t)data_buffer + 0x1c) = base_index + 7 + current_index;
                data_buffer = data_buffer + 8;
                base_index = base_index + 0x10;
                block_end = block_start;
              } while (block_start < (int)(current_offset - index_value));
            }
          }
          for (table_base = (int64_t)block_end; table_base < (int64_t)data_count; table_base = table_base + 1) {
            block_start = *(int *)(table_handle + 0x2c) + block_end;
            block_end = block_end + 1;
            *(int *)(*index_ptr + table_base * 4) = block_start;
          }
          block_end = *(int *)(table_handle + 0x18);
          block_start = 0;
          if (0 < (int64_t)block_end) {
            table_base = 0;
            do {
              current_index = *(int *)(table_handle + 0x30) + block_start;
              block_start = block_start + 1;
              data_ptr = (byte *)(*(int64_t *)(table_handle + 0x10) + table_base);
              table_base = table_base + 1;
              *(int *)(*index_ptr + (uint64_t)*data_ptr * 4) = current_index;
            } while (table_base < block_end);
          }
        }
        global_counter = (uint *)((int64_t)*(int )(GLOBAL_MEMORY_TABLE_180c86890 + 0xc20) * 0x128 +
                          GLOBAL_MEMORY_TABLE_180c86890 + 0x9d0);
        if (total_items == 0) {
          current_offset = (int)table_size - 1;
        }
        else {
          LOCK();
          current_offset = *global_counter;
          *global_counter = *global_counter + (int)table_size;
          UNLOCK();
          start_block = (uint64_t)(current_offset >> 0xb);
          end_block = (uint64_t)(table_size + -1 + current_offset >> 0xb);
          if (start_block <= end_block) {
            status_ptr = (char *)((int64_t)global_counter + start_block + 0x108);
            table_base = (end_block - start_block) + 1;
            target_ptr = global_counter + start_block * 2 + 2;
            do {
              block_end = (int)start_block;
              if (*(int64_t *)target_ptr == 0) {
                allocated_memory = AllocateLargeMemoryBlock(GLOBAL_MEMORY_POOL_180c8ed18,0x2000,0x25);
                LOCK();
                allocation_success = *(int64_t *)(global_counter + (int64_t)block_end * 2 + 2) == 0;
                if (allocation_success) {
                  *(int64_t *)(global_counter + (int64_t)block_end * 2 + 2) = allocated_memory;
                }
                UNLOCK();
                if (allocation_success) {
                  LOCK();
                  *(int8_t *)((int64_t)block_end + 0x108 + (int64_t)global_counter) = 0;
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
              start_block = (uint64_t)(block_end + 1);
              target_ptr = target_ptr + 2;
              status_ptr = status_ptr + 1;
              table_base = table_base + -1;
            } while (table_base != 0);
          }
        }
        source_data = *(int32_t **)(table_handle + 0x38);
        index_value = current_offset >> 0xb;
        *(uint *)(table_handle + 0x2c) = current_offset;
        if (index_value == (int)table_size + current_offset >> 0xb) {
                    // WARNING: Subroutine does not return
          memcpy(*(int64_t *)(global_counter + (uint64_t)index_value * 2 + 2) +
                 (uint64_t)(current_offset + index_value * -0x800) * 4,source_data,(data_count & 0xffffffff) << 2);
        }
        if (total_items != 0) {
          data_count = data_count & 0xffffffff;
          do {
            buffer_handle = *source_data;
            source_data = source_data + 1;
            *(int32_t *)
             (*(int64_t *)(global_counter + (uint64_t)(current_offset >> 0xb) * 2 + 2) +
             (uint64_t)(current_offset + (current_offset >> 0xb) * -0x800) * 4) = buffer_handle;
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



/**
 * 数据表更新函数（参数版本）- 更新数据表结构和索引
 * 功能：检查版本号，分配内存，更新索引表，处理数据块复制
 */
void UpdateDataTableWithVersion(int32_t version_number)

{
  int64_t *index_ptr;
  int64_t *temp_ptr;
  byte *data_ptr;
  char table_size;
  int32_t buffer_handle;
  uint index_value;
  int64_t *data_buffer;
  int64_t allocated_memory;
  int base_index;
  int current_index;
  int64_t table_base;
  uint64_t data_count;
  char *status_ptr;
  uint *global_counter;
  int total_items;
  uint current_offset;
  int block_start;
  int block_end;
  int32_t *source_data;
  uint *target_ptr;
  uint64_t start_block;
  uint64_t end_block;
  bool allocation_success;
  int64_t table_handle;
  
  total_items = *(int *)(table_handle + 0x1c) + *(int *)(table_handle + 0x18);
  *(int32_t *)(table_handle + 0x28) = version_number;
  if (0 < total_items) {
    table_base = (int64_t)*(int )(GLOBAL_MEMORY_TABLE_180c86890 + 0xe78) * 0x128 + GLOBAL_MEMORY_TABLE_180c86890 + 0xc28;
    buffer_handle = AllocateMemoryBlock(table_base,total_items);
    *(int32_t *)(table_handle + 0x30) = buffer_handle;
    InitializeMemoryBlock(table_base,buffer_handle);
    if (*(int64_t *)(table_handle + 0x10) == 0) {
      if (*(int )(table_handle + 0x18) != 0) {
        *(int32_t *)(table_handle + 0x2c) = *(int32_t *)(table_handle + 0x30);
        return;
      }
    }
    else {
      table_size = *(char *)(table_handle + 0x44);
      data_count = (uint64_t)table_size;
      index_ptr = (int64_t *)(table_handle + 0x38);
      total_items = (int)table_size;
      if (*(int )(table_handle + 0x40) == (int)table_size) {
        data_buffer = (int64_t *)*index_ptr;
      }
      else {
        *(int )(table_handle + 0x40) = total_items;
        if (*index_ptr != 0) {
                    // WARNING: Subroutine does not return
          HandleErrorCondition();
        }
        *index_ptr = 0;
        if (table_size == '\0') {
          data_buffer = (int64_t *)0x0;
          *index_ptr = 0;
        }
        else {
          data_buffer = (int64_t *)AllocateDataBuffer(GLOBAL_MEMORY_POOL_180c8ed18,(int64_t)table_size * 4);
          *index_ptr = (int64_t)data_buffer;
        }
      }
      if (data_buffer != (int64_t *)0x0) {
        block_start = 0;
        current_offset = (uint)table_size;
        block_end = block_start;
        if ((0 < total_items) && (0xf < current_offset)) {
          current_index = *(int )(table_handle + 0x2c);
          temp_ptr = (int64_t *)((int64_t)data_buffer + (int64_t)(table_size + -1) * 4);
          if ((((int64_t *)(table_handle + 0x2c) < data_buffer) ||
              (temp_ptr < (int64_t *)(table_handle + 0x2c))) &&
             ((index_ptr < data_buffer || (block_end = 0, temp_ptr < index_ptr)))) {
            index_value = current_offset & 0x8000000f;
            if ((int)index_value < 0) {
              index_value = (index_value - 1 | 0xfffffff0) + 1;
            }
            data_buffer = data_buffer + 4;
            base_index = 8;
            do {
              *(int *)(data_buffer + -4) = block_start + current_index;
              *(int *)((int64_t)data_buffer + -0x1c) = block_start + 1 + current_index;
              *(int *)(data_buffer + -3) = block_start + 2 + current_index;
              *(int *)((int64_t)data_buffer + -0x14) = block_start + 3 + current_index;
              block_start = block_start + 0x10;
              *(int *)(data_buffer + -2) = base_index + -4 + current_index;
              *(int *)((int64_t)data_buffer + -0xc) = base_index + -3 + current_index;
              *(int *)(data_buffer + -1) = base_index + -2 + current_index;
              *(int *)((int64_t)data_buffer + -4) = base_index + -1 + current_index;
              *(int *)data_buffer = base_index + current_index;
              *(int *)((int64_t)data_buffer + 4) = base_index + 1 + current_index;
              *(int *)(data_buffer + 1) = base_index + 2 + current_index;
              *(int *)((int64_t)data_buffer + 0xc) = base_index + 3 + current_index;
              *(int *)(data_buffer + 2) = base_index + 4 + current_index;
              *(int *)((int64_t)data_buffer + 0x14) = base_index + 5 + current_index;
              *(int *)(data_buffer + 3) = base_index + 6 + current_index;
              *(int *)((int64_t)data_buffer + 0x1c) = base_index + 7 + current_index;
              data_buffer = data_buffer + 8;
              base_index = base_index + 0x10;
              block_end = block_start;
            } while (block_start < (int)(current_offset - index_value));
          }
        }
        for (table_base = (int64_t)block_end; table_base < (int64_t)data_count; table_base = table_base + 1) {
          block_start = *(int )(table_handle + 0x2c) + block_end;
          block_end = block_end + 1;
          *(int *)(*index_ptr + table_base * 4) = block_start;
        }
        block_end = *(int )(table_handle + 0x18);
        block_start = 0;
        if (0 < (int64_t)block_end) {
          table_base = 0;
          do {
            current_index = *(int )(table_handle + 0x30) + block_start;
            block_start = block_start + 1;
            data_ptr = (byte *)(*(int64_t *)(table_handle + 0x10) + table_base);
            table_base = table_base + 1;
            *(int *)(*index_ptr + (uint64_t)*data_ptr * 4) = current_index;
          } while (table_base < block_end);
        }
      }
      global_counter = (uint *)((int64_t)*(int )(GLOBAL_MEMORY_TABLE_180c86890 + 0xc20) * 0x128 + GLOBAL_MEMORY_TABLE_180c86890 + 0x9d0);
      if (total_items == 0) {
        current_offset = (int)table_size - 1;
      }
      else {
        LOCK();
        current_offset = *global_counter;
        *global_counter = *global_counter + (int)table_size;
        UNLOCK();
        start_block = (uint64_t)(current_offset >> 0xb);
        end_block = (uint64_t)(table_size + -1 + current_offset >> 0xb);
        if (start_block <= end_block) {
          status_ptr = (char *)((int64_t)global_counter + start_block + 0x108);
          table_base = (end_block - start_block) + 1;
          target_ptr = global_counter + start_block * 2 + 2;
          do {
            block_end = (int)start_block;
            if (*(int64_t *)target_ptr == 0) {
              allocated_memory = AllocateLargeMemoryBlock(GLOBAL_MEMORY_POOL_180c8ed18,0x2000,0x25);
              LOCK();
              allocation_success = *(int64_t *)(global_counter + (int64_t)block_end * 2 + 2) == 0;
              if (allocation_success) {
                *(int64_t *)(global_counter + (int64_t)block_end * 2 + 2) = allocated_memory;
              }
              UNLOCK();
              if (allocation_success) {
                LOCK();
                *(int8_t *)((int64_t)block_end + 0x108 + (int64_t)global_counter) = 0;
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
            start_block = (uint64_t)(block_end + 1);
            target_ptr = target_ptr + 2;
            status_ptr = status_ptr + 1;
            table_base = table_base + -1;
          } while (table_base != 0);
        }
      }
      source_data = *(int32_t **)(table_handle + 0x38);
      index_value = current_offset >> 0xb;
      *(uint )(table_handle + 0x2c) = current_offset;
      if (index_value == (int)table_size + current_offset >> 0xb) {
                    // WARNING: Subroutine does not return
        memcpy(*(int64_t *)(global_counter + (uint64_t)index_value * 2 + 2) +
               (uint64_t)(current_offset + index_value * -0x800) * 4,source_data,(data_count & 0xffffffff) << 2);
      }
      if (total_items != 0) {
        data_count = data_count & 0xffffffff;
        do {
          buffer_handle = *source_data;
          source_data = source_data + 1;
          *(int32_t *)
           (*(int64_t *)(global_counter + (uint64_t)(current_offset >> 0xb) * 2 + 2) +
           (uint64_t)(current_offset + (current_offset >> 0xb) * -0x800) * 4) = buffer_handle;
          data_count = data_count - 1;
          current_offset = current_offset + 1;
        } while (data_count != 0);
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



