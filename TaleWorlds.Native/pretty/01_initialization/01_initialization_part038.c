#include "TaleWorlds.Native.Split.h"

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
  undefined8 temp_value;
  undefined8 *ptr_array;
  undefined8 *ptr_array2;
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
  undefined8 *manager_ptr;
  longlong alloc_size;
  code *callback_func;
  longlong *data_ptr;
  undefined *temp_ptr;
  ulonglong checksum;
  undefined1 stack_buffer[32];
  ulonglong security_cookie;
  undefined **callback_ptr;
  longlong *lock_ptr;
  longlong lock_timeout;
  longlong wait_duration;
  undefined1 cleanup_flag;
  undefined8 timespec_data;
  int wait_seconds;
  undefined4 temp_data;
  undefined8 thread_id;
  undefined *cleanup_ptr;
  byte *name_buffer;
  int name_length;
  byte name_storage[256];
  undefined8 resource_data;
  ulonglong resource_size;
  longlong resource_offset;
  longlong resource_count;
  longlong resource_capacity;
  undefined1 resource_flag;
  undefined1 cleanup_buffer[16];
  code *destructor1;
  code *guard_check1;
  undefined1 callback_buffer[16];
  code *destructor2;
  code *guard_check2;
  undefined8 metadata1;
  undefined8 metadata2;
  undefined8 metadata3;
  undefined8 metadata4;
  int active_count;
  undefined4 status_word;
  int allocation_limit;
  undefined4 memory_flag;
  ulonglong allocated_size;
  ulonglong total_processed;
  
  // 初始化安全cookie和线程ID
  thread_id = 0xfffffffffffffffe;
  security_cookie = _DAT_180bf00a8 ^ (ulonglong)stack_buffer;
  status_flag = *(char *)(*(longlong *)(context + 1000) + 0x58);
  do {
    // 检查初始化状态
    if ((status_flag == '\0') || (total_processed = 0, *(char *)(context + 0x400) != '\0')) {
                    // WARNING: Subroutine does not return
      FUN_1808fc050(security_cookie ^ (ulonglong)stack_buffer);
    }
    
    // 初始化任务管理器指针
    cleanup_ptr = &UNK_1809feda8;
    name_buffer = name_storage;
    name_length = 0;
    name_storage[0] = 0;
    destructor1 = (code *)0x0;
    guard_check1 = _guard_check_icall;
    callback_ptr = (undefined **)callback_buffer;
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
        timespec_data._4_4_ = (undefined4)((ulonglong)time_value >> 0x20);
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
      temp_ptr = &DAT_18098bc73;
      if (*(undefined **)(offset + 8) != (undefined *)0x0) {
        temp_ptr = *(undefined **)(offset + 8);
      }
      strcpy_s(name_buffer,0x100,temp_ptr);
      resource_data = *(undefined8 *)(offset + 0x118);
      resource_size = *(ulonglong *)(offset + 0x120);
      resource_offset = *(longlong *)(offset + 0x128);
      resource_count = *(longlong *)(offset + 0x130);
      resource_capacity = *(longlong *)(offset + 0x138);
      resource_flag = *(undefined1 *)(offset + 0x140);
      if (cleanup_buffer != (undefined1 *)(offset + 0x148)) {
        if (destructor1 != (code *)0x0) {
          (*destructor1)(cleanup_buffer,0,0);
        }
        callback_func = *(code **)(offset + 0x158);
        if (callback_func != (code *)0x0) {
          (*callback_func)(cleanup_buffer,(undefined1 *)(offset + 0x148),1);
          callback_func = *(code **)(offset + 0x158);
        }
        guard_check1 = *(code **)(offset + 0x160);
        destructor1 = callback_func;
      }
      if (callback_buffer != (undefined1 *)(offset + 0x168)) {
        if (destructor2 != (code *)0x0) {
          (*destructor2)(callback_buffer,0,0);
        }
        callback_func = *(code **)(offset + 0x178);
        if (callback_func != (code *)0x0) {
          (*callback_func)(callback_buffer,(undefined1 *)(offset + 0x168),1);
          callback_func = *(code **)(offset + 0x178);
        }
        guard_check2 = *(code **)(offset + 0x180);
        destructor2 = callback_func;
      }
      metadata1 = *(undefined8 *)(offset + 0x188);
      metadata2 = *(undefined8 *)(offset + 400);
      metadata3 = *(undefined8 *)(offset + 0x198);
      metadata4 = *(undefined8 *)(offset + 0x1a0);
      *(longlong *)(context + 0x3d0) = *(longlong *)(context + 0x3d0) + -0x1a8;
      FUN_180069530();
      has_work = true;
    }
    // 处理内存管理器任务
    manager_ptr = *(undefined8 **)(context + 0xc0);
    if ((undefined *)*manager_ptr == &UNK_1809fee70) {
      status_flag = FUN_180068a90(manager_ptr + 2,&lock_ptr);
      while (status_flag != '\0') {
        data_ptr = (longlong *)manager_ptr[99];
        if (lock_ptr != (longlong *)0x0) {
          *(undefined1 *)(lock_ptr + 4) = 0;
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
      (**(code **)((undefined *)*manager_ptr + 0x18))(manager_ptr);
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
        manager_ptr = *(undefined8 **)(context + 0xc0);
        security_cookie = manager_ptr[0x6c];
        if (security_cookie < total_processed) {
          string_buffer = &DAT_18098bc73;
          if (name_buffer != (byte *)0x0) {
            string_buffer = name_buffer;
          }
                    // WARNING: Subroutine does not return
          FUN_180062300(_DAT_180c86928,&UNK_1809ff390,total_processed,string_buffer);
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
      if (*(int *)((longlong)plVar23 + 0x32c) < (int)plVar23[0x65]) {
        puVar20 = (undefined8 *)*plVar18;
        plVar15 = plVar18;
        if (puVar20 == (undefined8 *)0x0) {
          plVar15 = plVar18 + 1;
          puVar20 = (undefined8 *)*plVar15;
          if (puVar20 == (undefined8 *)0x0) {
            do {
              plVar15 = plVar15 + 1;
              puVar20 = (undefined8 *)*plVar15;
            } while (puVar20 == (undefined8 *)0x0);
            lVar10 = plVar23[0x68];
          }
        }
        if (puVar20 != (undefined8 *)plVar18[lVar10]) {
          do {
            if (*(int *)(puVar20[0x23] + 0x120) == 0) {
              uVar4 = puVar20[0x23];
              *(int *)(plVar23 + 0x65) = (int)plVar23[0x65] + -1;
              (**(code **)(*plVar23 + 0x10))(plVar23,uVar4);
              lVar13 = puVar20[0x24];
              plVar23 = plVar15;
              while (lVar13 == 0) {
                plVar23 = plVar23 + 1;
                lVar13 = *plVar23;
              }
              puVar5 = (undefined8 *)*plVar15;
              puVar6 = (undefined8 *)puVar5[0x24];
              if (puVar5 == puVar20) {
                *plVar15 = (longlong)puVar6;
              }
              else {
                for (; puVar6 != puVar20; puVar6 = (undefined8 *)puVar6[0x24]) {
                  puVar5 = puVar6;
                }
                puVar5[0x24] = puVar6[0x24];
              }
              *puVar20 = &UNK_18098bcb0;
              ppuStack_248 = (undefined **)puVar20;
                    // WARNING: Subroutine does not return
              FUN_18064e900(puVar20);
            }
            puVar20 = (undefined8 *)puVar20[0x24];
            while (puVar20 == (undefined8 *)0x0) {
              plVar15 = plVar15 + 1;
              puVar20 = (undefined8 *)*plVar15;
            }
          } while (puVar20 != *(undefined8 **)(plVar23[0x67] + plVar23[0x68] * 8));
        }
      }
      plVar18 = (longlong *)(param_1 + 0x3c8);
      lVar13 = 0;
      plVar23 = *(longlong **)(param_1 + 0xc0);
      if (*(int *)((longlong)plVar23 + 0x32c) < (int)plVar23[0x65]) {
        uVar19 = *(ulonglong *)(param_1 + 0x3d0);
        if (uVar19 < *(ulonglong *)(param_1 + 0x3d8)) {
          *(ulonglong *)(param_1 + 0x3d0) = uVar19 + 0x1a8;
          FUN_18006cd80(uVar19,&puStack_1f8);
          goto LAB_18006ca44;
        }
        lVar10 = *plVar18;
        lVar14 = (longlong)(uVar19 - lVar10) / 0x1a8;
        if (lVar14 == 0) {
          lVar14 = 1;
LAB_18006c9ac:
          lVar13 = FUN_18062b420(_DAT_180c8ed18,lVar14 * 0x1a8,*(undefined1 *)(param_1 + 0x3e0));
          uVar19 = *(ulonglong *)(param_1 + 0x3d0);
          lVar10 = *plVar18;
        }
        else {
          lVar14 = lVar14 * 2;
          if (lVar14 != 0) goto LAB_18006c9ac;
        }
        FUN_18006de00(&lStack_238,lVar10,uVar19,lVar13);
        lVar8 = lStack_238;
        FUN_18006cd80(lStack_238,&puStack_1f8);
        lVar10 = *(longlong *)(param_1 + 0x3d0);
        lVar21 = *plVar18;
        if (lVar21 != lVar10) {
          do {
            FUN_180069530(lVar21);
            lVar21 = lVar21 + 0x1a8;
          } while (lVar21 != lVar10);
          lVar21 = *plVar18;
        }
        if (lVar21 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(lVar21);
        }
        *plVar18 = lVar13;
        *(longlong *)(param_1 + 0x3d0) = lVar8 + 0x1a8;
        *(longlong *)(param_1 + 0x3d8) = lVar14 * 0x1a8 + lVar13;
        goto LAB_18006ca44;
      }
      *(int *)(plVar23 + 0x65) = (int)plVar23[0x65] + 1;
      lVar13 = (**(code **)(*plVar23 + 8))(plVar23,&puStack_1f8);
      if (lVar13 != 0) goto LAB_18006c852;
      (*pcStack_78)(auStack_90);
      ppuStack_248 = (undefined **)auStack_90;
      if (pcStack_80 != (code *)0x0) {
        (*pcStack_80)(auStack_90,0,0);
      }
      ppuStack_248 = (undefined **)auStack_b0;
      if (pcStack_a0 != (code *)0x0) {
        (*pcStack_a0)(auStack_b0,0,0);
      }
    }
    else {
      pcVar22 = *(code **)(**(longlong **)(param_1 + 0xc0) + 0x28);
      if (pcVar22 != _guard_check_icall) {
        (*pcVar22)();
      }
LAB_18006ca95:
      ppuStack_248 = (undefined **)auStack_90;
      if (pcStack_80 != (code *)0x0) {
        (*pcStack_80)(auStack_90,0,0);
      }
      ppuStack_248 = (undefined **)auStack_b0;
      if (pcStack_a0 != (code *)0x0) {
        (*pcStack_a0)(auStack_b0,0,0);
      }
    }
    ppuStack_248 = &puStack_1f8;
    puStack_1f8 = &UNK_18098bcb0;
    cVar9 = *(char *)(*(longlong *)(param_1 + 1000) + 0x58);
  } while( true );
}





// 函数: void FUN_18006cb90(longlong param_1)
void FUN_18006cb90(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = *(ulonglong *)(param_1 + 0x10);
  lVar1 = *(longlong *)(param_1 + 8);
  uVar4 = 0;
  if (uVar3 != 0) {
    do {
      puVar2 = *(undefined8 **)(lVar1 + uVar4 * 8);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(undefined8 *)(lVar1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
    uVar3 = *(ulonglong *)(param_1 + 0x10);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  if ((1 < uVar3) && (*(longlong *)(param_1 + 8) != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_18006cc50(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  longlong lVar6;
  ulonglong uStackX_8;
  
  uVar2 = param_1[1];
  if (uVar2 < (ulonglong)param_1[2]) {
    param_1[1] = uVar2 + 0x1a8;
    uStackX_8 = uVar2;
    FUN_180068ff0();
    *(undefined8 *)(uVar2 + 0x118) = *(undefined8 *)(param_2 + 0x118);
    *(undefined8 *)(uVar2 + 0x120) = *(undefined8 *)(param_2 + 0x120);
    *(undefined8 *)(uVar2 + 0x128) = *(undefined8 *)(param_2 + 0x128);
    *(undefined8 *)(uVar2 + 0x130) = *(undefined8 *)(param_2 + 0x130);
    *(undefined8 *)(uVar2 + 0x138) = *(undefined8 *)(param_2 + 0x138);
    *(undefined1 *)(uVar2 + 0x140) = *(undefined1 *)(param_2 + 0x140);
    *(undefined8 *)(uVar2 + 0x158) = 0;
    *(code **)(uVar2 + 0x160) = _guard_check_icall;
    if (uVar2 + 0x148 != param_2 + 0x148) {
      pcVar5 = *(code **)(param_2 + 0x158);
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(uVar2 + 0x148,param_2 + 0x148,1);
        pcVar5 = *(code **)(param_2 + 0x158);
      }
      *(code **)(uVar2 + 0x158) = pcVar5;
      *(undefined8 *)(uVar2 + 0x160) = *(undefined8 *)(param_2 + 0x160);
    }
    *(undefined8 *)(uVar2 + 0x178) = 0;
    *(code **)(uVar2 + 0x180) = _guard_check_icall;
    if (uVar2 + 0x168 != param_2 + 0x168) {
      pcVar5 = *(code **)(param_2 + 0x178);
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(uVar2 + 0x168,param_2 + 0x168,1);
        pcVar5 = *(code **)(param_2 + 0x178);
      }
      *(code **)(uVar2 + 0x178) = pcVar5;
      *(undefined8 *)(uVar2 + 0x180) = *(undefined8 *)(param_2 + 0x180);
    }
    *(undefined8 *)(uVar2 + 0x188) = *(undefined8 *)(param_2 + 0x188);
    *(undefined8 *)(uVar2 + 400) = *(undefined8 *)(param_2 + 400);
    *(undefined8 *)(uVar2 + 0x198) = *(undefined8 *)(param_2 + 0x198);
    *(undefined8 *)(uVar2 + 0x1a0) = *(undefined8 *)(param_2 + 0x1a0);
    return uVar2;
  }
  lVar6 = *param_1;
  lVar4 = (longlong)(uVar2 - lVar6) / 0x1a8;
  if (lVar4 == 0) {
    lVar4 = 1;
  }
  else {
    lVar4 = lVar4 * 2;
    if (lVar4 == 0) {
      lVar1 = 0;
      goto LAB_18006ccef;
    }
  }
  lVar1 = FUN_18062b420(_DAT_180c8ed18,lVar4 * 0x1a8,(char)param_1[3]);
  uVar2 = param_1[1];
  lVar6 = *param_1;
LAB_18006ccef:
  FUN_18006de00(&uStackX_8,lVar6,uVar2,lVar1);
  FUN_18006cd80(uStackX_8,param_2);
  lVar6 = param_1[1];
  lVar3 = *param_1;
  if (lVar3 != lVar6) {
    do {
      FUN_180069530(lVar3);
      lVar3 = lVar3 + 0x1a8;
    } while (lVar3 != lVar6);
    lVar3 = *param_1;
  }
  if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar3);
  }
  uVar2 = lVar4 * 0x1a8 + lVar1;
  *param_1 = lVar1;
  param_1[1] = uStackX_8 + 0x1a8;
  param_1[2] = uVar2;
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18006cc8d(undefined8 param_1,undefined8 param_2,longlong param_3)
void FUN_18006cc8d(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong in_RAX;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *unaff_RDI;
  longlong in_R10;
  longlong in_stack_00000050;
  
  lVar4 = SUB168(SEXT816(in_RAX) * SEXT816(param_3 - in_R10),8);
  lVar4 = (lVar4 >> 7) - (lVar4 >> 0x3f);
  if (lVar4 == 0) {
    lVar4 = 1;
  }
  else {
    lVar4 = lVar4 * 2;
    if (lVar4 == 0) {
      lVar3 = 0;
      goto LAB_18006ccef;
    }
  }
  lVar3 = FUN_18062b420(_DAT_180c8ed18,lVar4 * 0x1a8,(char)unaff_RDI[3]);
  param_3 = unaff_RDI[1];
  in_R10 = *unaff_RDI;
LAB_18006ccef:
  FUN_18006de00(&stack0x00000050,in_R10,param_3,lVar3);
  lVar2 = in_stack_00000050;
  FUN_18006cd80(in_stack_00000050);
  lVar1 = unaff_RDI[1];
  lVar5 = *unaff_RDI;
  if (lVar5 != lVar1) {
    do {
      FUN_180069530(lVar5);
      lVar5 = lVar5 + 0x1a8;
    } while (lVar5 != lVar1);
    lVar5 = *unaff_RDI;
  }
  if (lVar5 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar5);
  }
  *unaff_RDI = lVar3;
  unaff_RDI[1] = lVar2 + 0x1a8;
  unaff_RDI[2] = lVar4 * 0x1a8 + lVar3;
  return;
}





// 函数: void FUN_18006cd43(void)
void FUN_18006cd43(void)

{
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



longlong FUN_18006cd80(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  FUN_180068ff0();
  *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)(param_2 + 0x118);
  *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_2 + 0x120);
  *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_2 + 0x128);
  *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(param_2 + 0x130);
  *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(param_2 + 0x138);
  *(undefined1 *)(param_1 + 0x140) = *(undefined1 *)(param_2 + 0x140);
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(code **)(param_1 + 0x160) = _guard_check_icall;
  if (param_1 + 0x148 != param_2 + 0x148) {
    pcVar1 = *(code **)(param_2 + 0x158);
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(param_1 + 0x148,param_2 + 0x148,1,param_4,uVar2);
      pcVar1 = *(code **)(param_2 + 0x158);
    }
    *(code **)(param_1 + 0x158) = pcVar1;
    *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(param_2 + 0x160);
  }
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(code **)(param_1 + 0x180) = _guard_check_icall;
  if (param_1 + 0x168 != param_2 + 0x168) {
    pcVar1 = *(code **)(param_2 + 0x178);
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(param_1 + 0x168,param_2 + 0x168,1);
      pcVar1 = *(code **)(param_2 + 0x178);
    }
    *(code **)(param_1 + 0x178) = pcVar1;
    *(undefined8 *)(param_1 + 0x180) = *(undefined8 *)(param_2 + 0x180);
  }
  *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(param_2 + 0x188);
  *(undefined8 *)(param_1 + 400) = *(undefined8 *)(param_2 + 400);
  *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)(param_2 + 0x198);
  *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(param_2 + 0x1a0);
  return param_1;
}





