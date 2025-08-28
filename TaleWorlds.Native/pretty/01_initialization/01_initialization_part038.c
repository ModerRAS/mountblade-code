#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 01_initialization_part038.c - 初始化模块核心功能
// 包含任务调度、内存管理、线程同步等功能

/**
 * 初始化模块主循环函数
 * 负责处理任务调度、内存分配、线程同步等核心功能
 * @param context 上下文指针，包含初始化所需的各种状态信息
 */
void Initialization_MainLoop(longlong context)

{
  longlong *buffer_ptr;
  int *counter_ptr;
  byte *byte_ptr;
  uint64_t temp_value;
  uint64_t *ptr_array;
  uint64_t *ptr_array2;
  bool has_work;
  longlong temp_long;
  char status_flag;
  longlong offset;
  longlong capacity;
  longlong *link_ptr;
  byte *string_buffer;
  longlong time_value;
  longlong time_limit;
  longlong *sync_ptr;
  uint hash_value;
  int loop_counter;
  longlong *resource_ptr;
  uint64_t *manager_ptr;
  longlong alloc_size;
  code *callback_func;
  longlong *data_ptr;
  void *temp_ptr;
  ulonglong checksum;
  int8_t stack_buffer[32];
  ulonglong security_cookie;
  void **callback_ptr;
  longlong *lock_ptr;
  longlong lock_timeout;
  longlong wait_duration;
  int8_t cleanup_flag;
  uint64_t timespec_data;
  int wait_seconds;
  int32_t temp_data;
  uint64_t thread_id;
  void *cleanup_ptr;
  byte *name_buffer;
  int name_length;
  byte name_storage[256];
  uint64_t resource_data;
  ulonglong resource_size;
  longlong resource_offset;
  longlong resource_count;
  longlong resource_capacity;
  int8_t resource_flag;
  int8_t cleanup_buffer[16];
  code *destructor1;
  code *guard_check1;
  int8_t callback_buffer[16];
  code *destructor2;
  code *guard_check2;
  uint64_t metadata1;
  uint64_t metadata2;
  uint64_t metadata3;
  uint64_t metadata4;
  int active_count;
  int32_t status_word;
  int allocation_limit;
  int32_t memory_flag;
  ulonglong allocated_size;
  ulonglong total_processed;
  
  // 初始化安全cookie和线程ID
  thread_id = 0xfffffffffffffffe;
  security_cookie = GET_SECURITY_COOKIE() ^ (ulonglong)stack_buffer;
  status_flag = *(char *)(*(longlong *)(context + 1000) + 0x58);
  do {
    // 检查初始化状态
    if ((status_flag == '\0') || (total_processed = 0, *(char *)(context + 0x400) != '\0')) {
                    // WARNING: Subroutine does not return
      FUN_1808fc050(security_cookie ^ (ulonglong)stack_buffer);
    }
    
    // 初始化任务管理器指针
    cleanup_ptr = &unknown_var_2008_ptr;
    name_buffer = name_storage;
    name_length = 0;
    name_storage[0] = 0;
    destructor1 = (code *)0x0;
    guard_check1 = _guard_check_icall;
    callback_ptr = (void **)callback_buffer;
    destructor2 = (code *)0x0;
    guard_check2 = _guard_check_icall;
    resource_capacity = -1;
    resource_size = 0xffffffffffffffff;
    resource_data = 0xffffffffffffffff;
    resource_offset = 0;
    resource_count = 0;
    resource_flag = 0;
    
    // 获取资源队列信息
    offset = *(longlong *)(context + 0x3c8);
    capacity = *(longlong *)(context + 0x3d0) - offset;
    time_value = capacity >> 0x3f;
    if (capacity / 0x1a8 + time_value == time_value) {
      // 尝试获取资源
      status_flag = FUN_18006d4e0(context + 200,&cleanup_ptr);
      if (status_flag == '\0') {
        // 等待资源可用
        offset = context + 0x378;
        cleanup_flag = 0;
        lock_timeout = offset;
        loop_counter = _Mtx_lock(offset);
        if (loop_counter != 0) {
          __Throw_C_error_std__YAXH_Z(loop_counter);
        }
        cleanup_flag = 1;
        time_value = _Xtime_get_ticks();
        time_limit = (time_value + 50000) * 100;
        time_value = time_limit / 1000000000;
        active_count = (int)time_value;
        wait_seconds = (int)time_limit + active_count * -1000000000;
        timespec_data._4_4_ = (int32_t)((ulonglong)time_value >> 0x20);
        status_word = timespec_data._4_4_;
        memory_flag = temp_data;
        timespec_data = time_value;
        allocation_limit = wait_seconds;
        loop_counter = _Mtx_current_owns(offset);
        if (loop_counter == 0) {
          __Throw_Cpp_error_std__YAXH_Z(4);
        }
        hash_value = _Cnd_timedwait(context + 0x330,offset,&active_count);
        if ((hash_value & 0xfffffffd) != 0) {
          __Throw_C_error_std__YAXH_Z(hash_value);
        }
        status_flag = FUN_18006d4e0(context + 200,&cleanup_ptr);
        if (status_flag == '\0') {
          loop_counter = _Mtx_unlock(offset);
          if (loop_counter != 0) {
            __Throw_C_error_std__YAXH_Z(loop_counter);
          }
          has_work = false;
        }
        else {
          loop_counter = _Mtx_unlock();
          if (loop_counter != 0) {
            __Throw_C_error_std__YAXH_Z(loop_counter);
          }
          has_work = true;
        }
      }
      else {
        has_work = true;
      }
    }
    else {
      // 处理队列中的资源
      name_length = *(int *)(offset + 0x10);
      temp_ptr = &system_buffer_ptr;
      if (*(void **)(offset + 8) != (void *)0x0) {
        temp_ptr = *(void **)(offset + 8);
      }
      strcpy_s(name_buffer,0x100,temp_ptr);
      resource_data = *(uint64_t *)(offset + 0x118);
      resource_size = *(ulonglong *)(offset + 0x120);
      resource_offset = *(longlong *)(offset + 0x128);
      resource_count = *(longlong *)(offset + 0x130);
      resource_capacity = *(longlong *)(offset + 0x138);
      resource_flag = *(int8_t *)(offset + 0x140);
      if (cleanup_buffer != (int8_t *)(offset + 0x148)) {
        if (destructor1 != (code *)0x0) {
          (*destructor1)(cleanup_buffer,0,0);
        }
        callback_func = *(code **)(offset + 0x158);
        if (callback_func != (code *)0x0) {
          (*callback_func)(cleanup_buffer,(int8_t *)(offset + 0x148),1);
          callback_func = *(code **)(offset + 0x158);
        }
        guard_check1 = *(code **)(offset + 0x160);
        destructor1 = callback_func;
      }
      if (callback_buffer != (int8_t *)(offset + 0x168)) {
        if (destructor2 != (code *)0x0) {
          (*destructor2)(callback_buffer,0,0);
        }
        callback_func = *(code **)(offset + 0x178);
        if (callback_func != (code *)0x0) {
          (*callback_func)(callback_buffer,(int8_t *)(offset + 0x168),1);
          callback_func = *(code **)(offset + 0x178);
        }
        guard_check2 = *(code **)(offset + 0x180);
        destructor2 = callback_func;
      }
      metadata1 = *(uint64_t *)(offset + 0x188);
      metadata2 = *(uint64_t *)(offset + 400);
      metadata3 = *(uint64_t *)(offset + 0x198);
      metadata4 = *(uint64_t *)(offset + 0x1a0);
      *(longlong *)(context + 0x3d0) = *(longlong *)(context + 0x3d0) + -0x1a8;
      FUN_180069530();
      has_work = true;
    }
    // 处理内存管理器任务
    manager_ptr = *(uint64_t **)(context + 0xc0);
    if ((void *)*manager_ptr == &unknown_var_2208_ptr) {
      status_flag = FUN_180068a90(manager_ptr + 2,&lock_ptr);
      while (status_flag != '\0') {
        data_ptr = (longlong *)manager_ptr[99];
        if (lock_ptr != (longlong *)0x0) {
          *(int8_t *)(lock_ptr + 4) = 0;
          *data_ptr = *data_ptr - lock_ptr[1];
          data_ptr[2] = data_ptr[2] + lock_ptr[1];
          resource_ptr = (longlong *)lock_ptr[3];
          sync_ptr = (longlong *)data_ptr[3];
          capacity = lock_ptr;
          if (resource_ptr != sync_ptr) {
            do {
              if ((resource_ptr == (longlong *)0x0) || ((char)resource_ptr[4] != '\0')) break;
              offset = capacity[2];
              resource_ptr[2] = offset;
              if (offset != 0) {
                *(longlong **)(offset + 0x18) = resource_ptr;
              }
              resource_ptr[1] = resource_ptr[1] + capacity[1];
              *capacity = data_ptr[0x28005];
              data_ptr[0x28005] = (longlong)capacity;
              buffer_ptr = resource_ptr + 3;
              sync_ptr = (longlong *)data_ptr[3];
              capacity = resource_ptr;
              resource_ptr = (longlong *)*buffer_ptr;
            } while ((longlong *)*buffer_ptr != sync_ptr);
          }
          resource_ptr = (longlong *)capacity[2];
          while (((capacity != sync_ptr && (resource_ptr != (longlong *)0x0)) && ((char)resource_ptr[4] == '\0')
                 )) {
            offset = resource_ptr[2];
            capacity[2] = offset;
            if (offset != 0) {
              *(longlong **)(offset + 0x18) = capacity;
            }
            capacity[1] = capacity[1] + resource_ptr[1];
            *resource_ptr = data_ptr[0x28005];
            data_ptr[0x28005] = (longlong)resource_ptr;
            sync_ptr = (longlong *)data_ptr[3];
            resource_ptr = (longlong *)capacity[2];
          }
        }
        status_flag = FUN_180068a90(manager_ptr + 2,&lock_ptr);
      }
    }
    else {
      (**(code **)((void *)*manager_ptr + 0x18))(manager_ptr);
    }
    if (has_work) {
      // 计算资源名称的哈希值
      data_ptr = *(longlong **)(context + 0xc0);
      checksum = total_processed;
      if (0 < name_length) {
        do {
          checksum = checksum * 0x1f + (longlong)(char)name_buffer[total_processed];
          hash_value = (int)total_processed + 1;
          total_processed = (ulonglong)hash_value;
        } while ((int)hash_value < name_length);
      }
      
      // 在哈希表中查找资源
      resource_ptr = (longlong *)data_ptr[0x67];
      for (offset = resource_ptr[checksum % (ulonglong)*(uint *)(data_ptr + 0x68)]; offset != 0;
          offset = *(longlong *)(offset + 0x120)) {
        loop_counter = *(int *)(offset + 0x10);
        if (name_length == loop_counter) {
          if (name_length != 0) {
            string_buffer = name_buffer;
            do {
              byte_ptr = string_buffer + (*(longlong *)(offset + 8) - (longlong)name_buffer);
              loop_counter = (uint)*string_buffer - (uint)*byte_ptr;
              if (loop_counter != 0) break;
              string_buffer = string_buffer + 1;
            } while (*byte_ptr != 0);
          }
LAB_18006c61e:
          if (loop_counter == 0) {
            if (offset != 0) {
              time_value = data_ptr[0x68];
              goto LAB_18006c642;
            }
            break;
          }
        }
        else if (name_length == 0) goto LAB_18006c61e;
      }
      time_value = data_ptr[0x68];
      offset = resource_ptr[time_value];
LAB_18006c642:
      if ((offset != resource_ptr[time_value]) && (offset = *(longlong *)(offset + 0x118), offset != 0)) {
LAB_18006c852:
        // 计算所需资源大小
        if (resource_count == 0) {
          total_processed = 0;
          if (resource_offset == 0) {
            total_processed = resource_size;
          }
        }
        else {
          total_processed = resource_size;
          if (resource_offset == 0) {
            total_processed = resource_size + resource_capacity;
          }
        }
        
        // 原子操作更新计数器
        LOCK();
        data_ptr = (longlong *)(context + 0x3f0);
        time_value = *data_ptr;
        *data_ptr = *data_ptr + total_processed;
        UNLOCK();
        LOCK();
        counter_ptr = (int *)(context + 0x3f8);
        loop_counter = *counter_ptr;
        *counter_ptr = *counter_ptr + 1;
        UNLOCK();
        
        // 检查内存限制
        manager_ptr = *(uint64_t **)(context + 0xc0);
        security_cookie = manager_ptr[0x6c];
        if (security_cookie < total_processed) {
          string_buffer = &system_buffer_ptr;
          if (name_buffer != (byte *)0x0) {
            string_buffer = name_buffer;
          }
                    // WARNING: Subroutine does not return
          FUN_180062300(system_message_context,&unknown_var_3520_ptr,total_processed,string_buffer);
        }
        
        // 执行资源分配
        if (((security_cookie < time_value + total_processed) ||
            ((ulonglong)(longlong)*(int *)(context + 0x3fc) < (longlong)loop_counter + 1U)) ||
           (status_flag = (**(code **)*manager_ptr)(manager_ptr,offset,&cleanup_ptr), status_flag == '\0')) {
          // 回滚计数器
          LOCK();
          *(longlong *)(context + 0x3f0) = *(longlong *)(context + 0x3f0) - total_processed;
          UNLOCK();
          LOCK();
          *(int *)(context + 0x3f8) = *(int *)(context + 0x3f8) + -1;
          UNLOCK();
          FUN_18006cc50(context + 0x3c8,&cleanup_ptr);
LAB_18006ca44:
          // 调用回调函数
          callback_func = *(code **)(**(longlong **)(context + 0xc0) + 0x28);
          if (callback_func != _guard_check_icall) {
            (*callback_func)();
          }
          Sleep(1);
        }
        
        // 执行后处理回调
        callback_func = *(code **)(**(longlong **)(context + 0xc0) + 0x20);
        if (callback_func != _guard_check_icall) {
          (*callback_func)();
        }
        goto LAB_18006ca95;
      }
      // 清理过期资源
      if (*(int *)((longlong)data_ptr + 0x32c) < (int)data_ptr[0x65]) {
        manager_ptr = (uint64_t *)*resource_ptr;
        sync_ptr = resource_ptr;
        if (manager_ptr == (uint64_t *)0x0) {
          sync_ptr = resource_ptr + 1;
          manager_ptr = (uint64_t *)*sync_ptr;
          if (manager_ptr == (uint64_t *)0x0) {
            do {
              sync_ptr = sync_ptr + 1;
              manager_ptr = (uint64_t *)*sync_ptr;
            } while (manager_ptr == (uint64_t *)0x0);
            time_value = data_ptr[0x68];
          }
        }
        if (manager_ptr != (uint64_t *)resource_ptr[time_value]) {
          do {
            if (*(int *)(manager_ptr[0x23] + 0x120) == 0) {
              temp_value = manager_ptr[0x23];
              *(int *)(data_ptr + 0x65) = (int)data_ptr[0x65] + -1;
              (**(code **)(*data_ptr + 0x10))(data_ptr,temp_value);
              offset = manager_ptr[0x24];
              data_ptr = sync_ptr;
              while (offset == 0) {
                data_ptr = data_ptr + 1;
                offset = *data_ptr;
              }
              ptr_array = (uint64_t *)*sync_ptr;
              ptr_array2 = (uint64_t *)ptr_array[0x24];
              if (ptr_array == manager_ptr) {
                *sync_ptr = (longlong)ptr_array2;
              }
              else {
                for (; ptr_array2 != manager_ptr; ptr_array2 = (uint64_t *)ptr_array2[0x24]) {
                  ptr_array = ptr_array2;
                }
                ptr_array[0x24] = ptr_array2[0x24];
              }
              *manager_ptr = &system_state_ptr;
              callback_ptr = (void **)manager_ptr;
                    // WARNING: Subroutine does not return
              FUN_18064e900(manager_ptr);
            }
            manager_ptr = (uint64_t *)manager_ptr[0x24];
            while (manager_ptr == (uint64_t *)0x0) {
              sync_ptr = sync_ptr + 1;
              manager_ptr = (uint64_t *)*sync_ptr;
            }
          } while (manager_ptr != *(uint64_t **)(data_ptr[0x67] + data_ptr[0x68] * 8));
        }
      }
      
      // 资源队列扩容处理
      resource_ptr = (longlong *)(context + 0x3c8);
      offset = 0;
      data_ptr = *(longlong **)(context + 0xc0);
      if (*(int *)((longlong)data_ptr + 0x32c) < (int)data_ptr[0x65]) {
        total_processed = *(ulonglong *)(context + 0x3d0);
        if (total_processed < *(ulonglong *)(context + 0x3d8)) {
          *(ulonglong *)(context + 0x3d0) = total_processed + 0x1a8;
          FUN_18006cd80(total_processed,&cleanup_ptr);
          goto LAB_18006ca44;
        }
        time_value = *resource_ptr;
        capacity = (longlong)(total_processed - time_value) / 0x1a8;
        if (capacity == 0) {
          capacity = 1;
LAB_18006c9ac:
          offset = FUN_18062b420(system_memory_pool_ptr,capacity * 0x1a8,*(int8_t *)(context + 0x3e0));
          total_processed = *(ulonglong *)(context + 0x3d0);
          time_value = *resource_ptr;
        }
        else {
          capacity = capacity * 2;
          if (capacity != 0) goto LAB_18006c9ac;
        }
        FUN_18006de00(&lock_timeout,time_value,total_processed,offset);
        temp_long = lock_timeout;
        FUN_18006cd80(lock_timeout,&cleanup_ptr);
        time_value = *(longlong *)(context + 0x3d0);
        alloc_size = *resource_ptr;
        if (alloc_size != time_value) {
          do {
            FUN_180069530(alloc_size);
            alloc_size = alloc_size + 0x1a8;
          } while (alloc_size != time_value);
          alloc_size = *resource_ptr;
        }
        if (alloc_size != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(alloc_size);
        }
        *resource_ptr = offset;
        *(longlong *)(context + 0x3d0) = temp_long + 0x1a8;
        *(longlong *)(context + 0x3d8) = capacity * 0x1a8 + offset;
        goto LAB_18006ca44;
      }
      
      // 创建新资源
      *(int *)(data_ptr + 0x65) = (int)data_ptr[0x65] + 1;
      offset = (**(code **)(*data_ptr + 8))(data_ptr,&cleanup_ptr);
      if (offset != 0) goto LAB_18006c852;
      (*guard_check2)(callback_buffer);
      callback_ptr = (void **)callback_buffer;
      if (destructor2 != (code *)0x0) {
        (*destructor2)(callback_buffer,0,0);
      }
      callback_ptr = (void **)cleanup_buffer;
      if (destructor1 != (code *)0x0) {
        (*destructor1)(cleanup_buffer,0,0);
      }
    }
    else {
      // 执行清理回调
      callback_func = *(code **)(**(longlong **)(context + 0xc0) + 0x28);
      if (callback_func != _guard_check_icall) {
        (*callback_func)();
      }
LAB_18006ca95:
      // 清理回调函数
      callback_ptr = (void **)callback_buffer;
      if (destructor2 != (code *)0x0) {
        (*destructor2)(callback_buffer,0,0);
      }
      callback_ptr = (void **)cleanup_buffer;
      if (destructor1 != (code *)0x0) {
        (*destructor1)(cleanup_buffer,0,0);
      }
    }
    
    // 重置清理指针
    callback_ptr = &cleanup_ptr;
    cleanup_ptr = &system_state_ptr;
    status_flag = *(char *)(*(longlong *)(context + 1000) + 0x58);
  } while( true );
}





/**
 * 资源池清理函数
 * 清理资源池中的所有资源并释放内存
 * @param pool_handle 资源池句柄
 */
void ResourcePool_Cleanup(longlong pool_handle)

{
  longlong pool_base;
  uint64_t *resource_ptr;
  ulonglong resource_count;
  ulonglong index;
  
  resource_count = *(ulonglong *)(pool_handle + 0x10);
  pool_base = *(longlong *)(pool_handle + 8);
  index = 0;
  if (resource_count != 0) {
    do {
      resource_ptr = *(uint64_t **)(pool_base + index * 8);
      if (resource_ptr != (uint64_t *)0x0) {
        *resource_ptr = &system_state_ptr;
                    // WARNING: Subroutine does not return
        FUN_18064e900(resource_ptr);
      }
      *(uint64_t *)(pool_base + index * 8) = 0;
      index = index + 1;
    } while (index < resource_count);
    resource_count = *(ulonglong *)(pool_handle + 0x10);
  }
  *(uint64_t *)(pool_handle + 0x18) = 0;
  if ((1 < resource_count) && (*(longlong *)(pool_handle + 8) != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(pool_base);
  }
  return;
}



/**
 * 资源队列分配函数
 * 从资源队列中分配一个新的资源槽位
 * @param queue_ptr 资源队列指针
 * @param resource_data 资源数据指针
 * @return 分配的资源槽位地址
 */
ulonglong ResourceQueue_Allocate(longlong *queue_ptr,longlong resource_data)

{
  longlong old_buffer;
  ulonglong current_pos;
  longlong queue_end;
  longlong queue_start;
  code *callback_func;
  longlong new_buffer;
  ulonglong new_position;
  
  current_pos = queue_ptr[1];
  if (current_pos < (ulonglong)queue_ptr[2]) {
    queue_ptr[1] = current_pos + 0x1a8;
    new_position = current_pos;
    FUN_180068ff0();
    *(uint64_t *)(current_pos + 0x118) = *(uint64_t *)(resource_data + 0x118);
    *(uint64_t *)(current_pos + 0x120) = *(uint64_t *)(resource_data + 0x120);
    *(uint64_t *)(current_pos + 0x128) = *(uint64_t *)(resource_data + 0x128);
    *(uint64_t *)(current_pos + 0x130) = *(uint64_t *)(resource_data + 0x130);
    *(uint64_t *)(current_pos + 0x138) = *(uint64_t *)(resource_data + 0x138);
    *(int8_t *)(current_pos + 0x140) = *(int8_t *)(resource_data + 0x140);
    *(uint64_t *)(current_pos + 0x158) = 0;
    *(code **)(current_pos + 0x160) = _guard_check_icall;
    if (current_pos + 0x148 != resource_data + 0x148) {
      callback_func = *(code **)(resource_data + 0x158);
      if (callback_func != (code *)0x0) {
        (*callback_func)(current_pos + 0x148,resource_data + 0x148,1);
        callback_func = *(code **)(resource_data + 0x158);
      }
      *(code **)(current_pos + 0x158) = callback_func;
      *(uint64_t *)(current_pos + 0x160) = *(uint64_t *)(resource_data + 0x160);
    }
    *(uint64_t *)(current_pos + 0x178) = 0;
    *(code **)(current_pos + 0x180) = _guard_check_icall;
    if (current_pos + 0x168 != resource_data + 0x168) {
      callback_func = *(code **)(resource_data + 0x178);
      if (callback_func != (code *)0x0) {
        (*callback_func)(current_pos + 0x168,resource_data + 0x168,1);
        callback_func = *(code **)(resource_data + 0x178);
      }
      *(code **)(current_pos + 0x178) = callback_func;
      *(uint64_t *)(current_pos + 0x180) = *(uint64_t *)(resource_data + 0x180);
    }
    *(uint64_t *)(current_pos + 0x188) = *(uint64_t *)(resource_data + 0x188);
    *(uint64_t *)(current_pos + 400) = *(uint64_t *)(resource_data + 400);
    *(uint64_t *)(current_pos + 0x198) = *(uint64_t *)(resource_data + 0x198);
    *(uint64_t *)(current_pos + 0x1a0) = *(uint64_t *)(resource_data + 0x1a0);
    return current_pos;
  }
  
  // 队列已满，需要扩展
  new_buffer = *queue_ptr;
  queue_start = (longlong)(current_pos - new_buffer) / 0x1a8;
  if (queue_start == 0) {
    queue_start = 1;
  }
  else {
    queue_start = queue_start * 2;
    if (queue_start == 0) {
      old_buffer = 0;
      goto expand_queue;
    }
  }
  old_buffer = FUN_18062b420(system_memory_pool_ptr,queue_start * 0x1a8,(char)queue_ptr[3]);
  current_pos = queue_ptr[1];
  new_buffer = *queue_ptr;
expand_queue:
  FUN_18006de00(&new_position,new_buffer,current_pos,old_buffer);
  FUN_18006cd80(new_position,resource_data);
  new_buffer = queue_ptr[1];
  queue_end = *queue_ptr;
  if (queue_end != new_buffer) {
    do {
      FUN_180069530(queue_end);
      queue_end = queue_end + 0x1a8;
    } while (queue_end != new_buffer);
    queue_end = *queue_ptr;
  }
  if (queue_end != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(queue_end);
  }
  current_pos = queue_start * 0x1a8 + old_buffer;
  *queue_ptr = old_buffer;
  queue_ptr[1] = new_position + 0x1a8;
  queue_ptr[2] = current_pos;
  return current_pos;
}



/**
 * 资源队列扩展函数
 * 扩展资源队列的容量以适应更多资源
 * @param param1 未使用参数
 * @param param2 未使用参数  
 * @param queue_ptr 资源队列指针
 */
void ResourceQueue_Expand(uint64_t param1,uint64_t param2,longlong *queue_ptr)

{
  longlong old_buffer;
  longlong queue_end;
  longlong range_start;
  longlong range_end;
  longlong capacity;
  longlong new_buffer;
  longlong new_position;
  longlong unused_param1 = param1;
  longlong unused_param2 = param2;
  
  // 计算新的队列容量  
  capacity = SUB168(SEXT816(range_end - range_start) * SEXT816(param2 - param1),8);
  capacity = (capacity >> 7) - (capacity >> 0x3f);
  if (capacity == 0) {
    capacity = 1;
  }
  else {
    capacity = capacity * 2;
    if (capacity == 0) {
      new_buffer = 0;
      goto expand_complete;
    }
  }
  
  // 分配新的缓冲区
  new_buffer = FUN_18062b420(system_memory_pool_ptr,capacity * 0x1a8,(char)queue_ptr[3]);
  range_end = queue_ptr[1];
  range_start = *queue_ptr;
expand_complete:
  FUN_18006de00(&new_position,range_start,range_end,new_buffer);
  queue_end = new_position;
  FUN_18006cd80(new_position);
  old_buffer = queue_ptr[1];
  new_buffer = *queue_ptr;
  if (new_buffer != old_buffer) {
    do {
      FUN_180069530(new_buffer);
      new_buffer = new_buffer + 0x1a8;
    } while (new_buffer != old_buffer);
    new_buffer = *queue_ptr;
  }
  if (new_buffer != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(new_buffer);
  }
  *queue_ptr = new_buffer;
  queue_ptr[1] = queue_end + 0x1a8;
  queue_ptr[2] = capacity * 0x1a8 + new_buffer;
  return;
}





/**
 * 资源释放函数
 * 释放指定的资源并清理相关数据
 */
void Resource_Release(void)

{
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



/**
 * 资源复制函数
 * 复制资源数据到新的位置
 * @param dest_ptr 目标位置指针
 * @param src_ptr 源位置指针
 * @param param3 未使用参数
 * @param param4 未使用参数
 * @return 目标位置指针
 */
longlong Resource_Copy_Callback(longlong dest_ptr,longlong src_ptr,longlong param3,uint64_t param4)

{
  code *callback_func;
  uint64_t temp_value;
  
  temp_value = 0xfffffffffffffffe;
  FUN_180068ff0();
  *(uint64_t *)(dest_ptr + 0x118) = *(uint64_t *)(src_ptr + 0x118);
  *(uint64_t *)(dest_ptr + 0x120) = *(uint64_t *)(src_ptr + 0x120);
  *(uint64_t *)(dest_ptr + 0x128) = *(uint64_t *)(src_ptr + 0x128);
  *(uint64_t *)(dest_ptr + 0x130) = *(uint64_t *)(src_ptr + 0x130);
  *(uint64_t *)(dest_ptr + 0x138) = *(uint64_t *)(src_ptr + 0x138);
  *(int8_t *)(dest_ptr + 0x140) = *(int8_t *)(src_ptr + 0x140);
  *(uint64_t *)(dest_ptr + 0x158) = 0;
  *(code **)(dest_ptr + 0x160) = _guard_check_icall;
  if (dest_ptr + 0x148 != src_ptr + 0x148) {
    callback_func = *(code **)(src_ptr + 0x158);
    if (callback_func != (code *)0x0) {
      (*callback_func)(dest_ptr + 0x148,src_ptr + 0x148,1,param4,temp_value);
      callback_func = *(code **)(src_ptr + 0x158);
    }
    *(code **)(dest_ptr + 0x158) = callback_func;
    *(uint64_t *)(dest_ptr + 0x160) = *(uint64_t *)(src_ptr + 0x160);
  }
  *(uint64_t *)(dest_ptr + 0x178) = 0;
  *(code **)(dest_ptr + 0x180) = _guard_check_icall;
  if (dest_ptr + 0x168 != src_ptr + 0x168) {
    callback_func = *(code **)(src_ptr + 0x178);
    if (callback_func != (code *)0x0) {
      (*callback_func)(dest_ptr + 0x168,src_ptr + 0x168,1);
      callback_func = *(code **)(src_ptr + 0x178);
    }
    *(code **)(dest_ptr + 0x178) = callback_func;
    *(uint64_t *)(dest_ptr + 0x180) = *(uint64_t *)(src_ptr + 0x180);
  }
  *(uint64_t *)(dest_ptr + 0x188) = *(uint64_t *)(src_ptr + 0x188);
  *(uint64_t *)(dest_ptr + 400) = *(uint64_t *)(src_ptr + 400);
  *(uint64_t *)(dest_ptr + 0x198) = *(uint64_t *)(src_ptr + 0x198);
  *(uint64_t *)(dest_ptr + 0x1a0) = *(uint64_t *)(src_ptr + 0x1a0);
  return dest_ptr;
}





