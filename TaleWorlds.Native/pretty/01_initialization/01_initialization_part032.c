#include "TaleWorlds.Native.Split.h"

// 01_initialization_part032.c - 16 个函数

/**
 * 执行线程同步和资源清理循环
 * 当对象的0xb字节不为0时，持续执行清理操作
 * @param obj 指向待清理对象的指针
 */
void 执行线程同步资源清理(longlong *obj)
{
  longlong *thread_local_ptr;
  char cleanup_result;
  int lock_result;
  uint64_t operation_code;
  longlong *queue_ptr;
  char lock_acquired;
  
  if ((char)obj[0xb] != '\0') {
    thread_local_ptr = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8);
    do {
      cleanup_result = (**(code **)(*obj + 0x20))(obj,1);
      if (cleanup_result == '\0') {
        FUN_18064e0d0(*(uint64_t *)(*thread_local_ptr + 0x10),0);
        queue_ptr = obj + 0x33;
        lock_acquired = 0;
        lock_result = _Mtx_lock();
        if (lock_result != 0) {
          __Throw_C_error_std__YAXH_Z(lock_result);
        }
        lock_acquired = '\x01';
        if ((char)obj[0x3d] == '\x01') {
          *(int8_t *)(obj + 0x3d) = 0;
        }
        else {
          operation_code = 0x32;
          FUN_1800495d0(obj + 0x2a,&queue_ptr,&operation_code);
          *(int8_t *)(obj + 0x3d) = 0;
          if (lock_acquired == '\0') goto LAB_1800607cc;
        }
        lock_result = _Mtx_unlock(queue_ptr);
        if (lock_result != 0) {
          __Throw_C_error_std__YAXH_Z(lock_result);
        }
      }
LAB_1800607cc:
    } while ((char)obj[0xb] != '\0');
  }
  return;
}



/**
 * 处理对象队列的出队和生命周期管理
 * 根据条件从队列中移除对象并管理其生命周期
 * @param queue_obj 队列对象指针
 * @param should_process 是否处理队列的标志
 * @return 成功处理返回1，否则返回0
 */
uint64_t 处理对象队列出队(longlong queue_obj,char should_process)
{
  longlong buffer_size;
  int lock_result;
  longlong *head_ptr;
  uint64_t result;
  longlong *dequeued_obj;
  
  dequeued_obj = (longlong *)0x0;
  head_ptr = (longlong *)0x0;
  if (should_process != '\0') {
    if (*(int *)(queue_obj + 0x140) < 1) {
      head_ptr = (longlong *)0x0;
    }
    else {
      lock_result = _Mtx_lock(queue_obj + 0xf0);
      if (lock_result != 0) {
        __Throw_C_error_std__YAXH_Z(lock_result);
      }
      if ((*(longlong *)(queue_obj + 200) - *(longlong *)(queue_obj + 0xd0) >> 3) +
          ((*(longlong *)(queue_obj + 0xe0) - *(longlong *)(queue_obj + 0xc0) >> 3) + -1) * 0x20 +
          (*(longlong *)(queue_obj + 0xb8) - (longlong)*(longlong **)(queue_obj + 0xa8) >> 3) != 0) {
        dequeued_obj = (longlong *)**(longlong **)(queue_obj + 0xa8);
        if (dequeued_obj != (longlong *)0x0) {
          (**(code **)(*dequeued_obj + 0x28))(dequeued_obj);
        }
        head_ptr = *(longlong **)(queue_obj + 0xa8);
        if (head_ptr + 1 == *(longlong **)(queue_obj + 0xb8)) {
          if ((longlong *)*head_ptr != (longlong *)0x0) {
            (**(code **)(*(longlong *)*head_ptr + 0x38))();
          }
          if (*(longlong *)(queue_obj + 0xb0) != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          head_ptr = (longlong *)(*(longlong *)(queue_obj + 0xc0) + 8);
          *(longlong **)(queue_obj + 0xc0) = head_ptr;
          buffer_size = *head_ptr;
          *(longlong *)(queue_obj + 0xb0) = buffer_size;
          *(longlong *)(queue_obj + 0xb8) = buffer_size + 0x100;
          *(uint64_t *)(queue_obj + 0xa8) = *(uint64_t *)(queue_obj + 0xb0);
        }
        else {
          *(longlong **)(queue_obj + 0xa8) = head_ptr + 1;
          if ((longlong *)*head_ptr != (longlong *)0x0) {
            (**(code **)(*(longlong *)*head_ptr + 0x38))();
          }
        }
      }
      lock_result = _Mtx_unlock(queue_obj + 0xf0);
      if (lock_result != 0) {
        __Throw_C_error_std__YAXH_Z(lock_result);
      }
      head_ptr = dequeued_obj;
      if (dequeued_obj != (longlong *)0x0) {
        (**(code **)(*dequeued_obj + 0x60))(dequeued_obj);
        (**(code **)(*dequeued_obj + 0x70))(dequeued_obj);
        LOCK();
        *(int *)(queue_obj + 0x140) = *(int *)(queue_obj + 0x140) + -1;
        UNLOCK();
        result = 1;
        goto LAB_180060993;
      }
    }
  }
  dequeued_obj = head_ptr;
  result = 0;
LAB_180060993:
  if (dequeued_obj != (longlong *)0x0) {
    (**(code **)(*dequeued_obj + 0x38))(dequeued_obj);
  }
  return result;
}



/**
 * 等待单个对象并处理队列操作
 * 等待指定的对象，然后执行队列处理操作
 * @param wait_obj 等待对象指针
 * @param param2 参数2
 * @param timeout 超时时间
 * @param param4 参数4
 * @return 操作成功返回true，否则返回false
 */
bool 等待对象并处理队列(longlong wait_obj,uint64_t param2,uint64_t timeout,uint64_t param4)
{
  longlong *processed_obj;
  char process_result;
  longlong *queue_obj;
  
  queue_obj = (longlong *)0x0;
  WaitForSingleObject(**(uint64_t **)(wait_obj + 0x1f0),1,timeout,param4,0xfffffffffffffffe);
  process_result = FUN_180060e40(*(uint64_t *)(wait_obj + 0x60),wait_obj + 0x78,&queue_obj);
  processed_obj = queue_obj;
  if (process_result != '\0') {
    (**(code **)(*queue_obj + 0x60))(queue_obj);
    (**(code **)(*processed_obj + 0x70))(processed_obj);
  }
  if (processed_obj != (longlong *)0x0) {
    (**(code **)(*processed_obj + 0x38))(processed_obj);
  }
  return process_result != '\0';
}



/**
 * 管理链表节点的移动和更新
 * 根据给定的参数管理链表节点的移动和更新操作
 * @param node_list 链表节点数组
 * @param state_ptr 状态指针
 * @return 操作结果状态
 */
ulonglong 管理链表节点移动(longlong *node_list,uint *state_ptr)
{
  uint node_size;
  uint max_capacity;
  longlong list_head;
  ulonglong operation_result;
  ulonglong *current_node;
  ulonglong *next_node;
  ulonglong *temp_node;
  ulonglong nodes_to_move;
  ulonglong *start_node;
  uint remaining_nodes;
  ulonglong move_count;
  
  list_head = *node_list;
  if ((*(longlong *)(state_ptr + 6) == 0) && (list_head == 0)) {
    return operation_result & 0xffffffffffffff00;
  }
  node_size = *(uint *)(node_list + 1);
  max_capacity = *(uint *)(node_list + 0x4c);
  start_node = (ulonglong *)0x0;
  current_node = *(ulonglong **)(state_ptr + 6);
  if (*(ulonglong **)(state_ptr + 6) == (ulonglong *)0x0) {
    next_node = (ulonglong *)(list_head + 8);
    if (list_head == 0) {
      next_node = start_node;
    }
    *(ulonglong **)(state_ptr + 6) = next_node;
    remaining_nodes = (node_size - *state_ptr % node_size) - 1;
    move_count = (ulonglong)remaining_nodes;
    current_node = next_node;
    if (remaining_nodes != 0) {
      do {
        if (current_node == (ulonglong *)0x0) {
          current_node = (ulonglong *)&system_buffer_0008;
        }
        temp_node = (ulonglong *)(*current_node - 8);
        if (*current_node == 0) {
          temp_node = start_node;
        }
        current_node = temp_node + 1;
        if (temp_node == (ulonglong *)0x0) {
          current_node = start_node;
        }
        *(ulonglong **)(state_ptr + 6) = current_node;
        if (current_node == (ulonglong *)0x0) {
          *(ulonglong **)(state_ptr + 6) = next_node;
          current_node = next_node;
        }
        move_count = move_count - 1;
      } while (move_count != 0);
    }
  }
  remaining_nodes = max_capacity - state_ptr[1];
  move_count = (ulonglong)remaining_nodes;
  if (node_size <= remaining_nodes) {
    move_count = (ulonglong)remaining_nodes % (ulonglong)node_size;
  }
  nodes_to_move = move_count;
  if ((int)move_count != 0) {
    do {
      if (current_node == (ulonglong *)0x0) {
        current_node = (ulonglong *)&system_buffer_0008;
      }
      move_count = *current_node;
      next_node = (ulonglong *)(move_count - 8);
      if (move_count == 0) {
        next_node = start_node;
      }
      current_node = start_node;
      if (next_node != (ulonglong *)0x0) {
        current_node = next_node + 1;
      }
      *(ulonglong **)(state_ptr + 6) = current_node;
      if (current_node == (ulonglong *)0x0) {
        current_node = (ulonglong *)(list_head + 8);
        if (list_head == 0) {
          current_node = start_node;
        }
        *(ulonglong **)(state_ptr + 6) = current_node;
      }
      nodes_to_move = nodes_to_move - 1;
    } while (nodes_to_move != 0);
  }
  state_ptr[1] = max_capacity;
  state_ptr[2] = 0;
  *(ulonglong **)(state_ptr + 4) = current_node;
  return CONCAT71((int7)(move_count >> 8),1);
}



/**
 * 交换链表头节点并释放资源
 * 交换两个链表的头节点，并释放原头节点的资源
 * @param head_ptr1 链表头指针1
 * @param head_ptr2 链表头指针2
 * @return 更新后的链表头指针1
 */
longlong * 交换链表头节点(longlong *head_ptr1,longlong *head_ptr2)
{
  longlong temp_head;
  longlong *old_head;
  
  temp_head = *head_ptr2;
  *head_ptr2 = 0;
  old_head = (longlong *)*head_ptr1;
  *head_ptr1 = temp_head;
  if (old_head != (longlong *)0x0) {
    (**(code **)(*old_head + 0x38))();
  }
  return head_ptr1;
}



/**
 * 释放链表头节点资源
 * 释放链表头节点占用的资源
 * @param head_ptr 链表头指针
 * @return 更新后的链表头指针
 */
longlong * 释放链表头节点(longlong *head_ptr)
{
  if ((longlong *)*head_ptr != (longlong *)0x0) {
    (**(code **)(*(longlong *)*head_ptr + 0x38))();
  }
  return head_ptr;
}



/**
 * 处理缓冲区插入和对象生命周期管理
 * 根据不同的模式处理缓冲区插入操作和对象的生命周期管理
 * @param buffer_obj 缓冲区对象
 * @param data_obj 数据对象
 * @return 成功插入返回1，否则返回0
 */
uint64_t 处理缓冲区插入操作(longlong buffer_obj,uint64_t data_obj)
{
  longlong *position_ptr;
  ulonglong *index_ptr;
  longlong current_pos;
  ulonglong index;
  longlong slot_count;
  longlong base_addr;
  ulonglong slot_offset;
  
  if (*(char *)(buffer_obj + 0x48) == '\0') {
    if ((ulonglong)
        ((*(longlong *)(buffer_obj + 0x30) - *(longlong *)(buffer_obj + 0x38)) -
        *(longlong *)(buffer_obj + 0x20)) < 0x8000000000000001) {
      return 0;
    }
    LOCK();
    position_ptr = (longlong *)(buffer_obj + 0x30);
    current_pos = *position_ptr;
    *position_ptr = *position_ptr + 1;
    UNLOCK();
    if (0x8000000000000000 <
        (ulonglong)((current_pos - *(longlong *)(buffer_obj + 0x20)) - *(longlong *)(buffer_obj + 0x38))) {
      LOCK();
      index_ptr = (ulonglong *)(buffer_obj + 0x28);
      index = *index_ptr;
      *index_ptr = *index_ptr + 1;
      UNLOCK();
      position_ptr = *(longlong **)(buffer_obj + 0x60);
      current_pos = *(longlong *)
               (position_ptr[3] +
               (((index & 0xffffffffffffffe0) - **(longlong **)(position_ptr[3] + position_ptr[1] * 8) >> 5) +
                position_ptr[1] & *position_ptr - 1U) * 8);
      base_addr = *(longlong *)(current_pos + 8);
      position_ptr = (longlong *)(base_addr + (ulonglong)((uint)index & 0x1f) * 8);
      FUN_180060b80(data_obj,position_ptr);
      position_ptr = (longlong *)*position_ptr;
      if (position_ptr != (longlong *)0x0) {
        (**(code **)(*position_ptr + 0x38))();
      }
      LOCK();
      position_ptr = (longlong *)(base_addr + 0x108);
      slot_count = *position_ptr;
      *position_ptr = *position_ptr + 1;
      UNLOCK();
      if (slot_count == 0x1f) {
        *(uint64_t *)(current_pos + 8) = 0;
        func_0x000180060c10(*(uint64_t *)(buffer_obj + 0x50),base_addr);
      }
      return 1;
    }
  }
  else {
    if ((ulonglong)
        ((*(longlong *)(buffer_obj + 0x30) - *(longlong *)(buffer_obj + 0x38)) -
        *(longlong *)(buffer_obj + 0x20)) < 0x8000000000000001) {
      return 0;
    }
    LOCK();
    position_ptr = (longlong *)(buffer_obj + 0x30);
    current_pos = *position_ptr;
    *position_ptr = *position_ptr + 1;
    UNLOCK();
    if (0x8000000000000000 <
        (ulonglong)((current_pos - *(longlong *)(buffer_obj + 0x20)) - *(longlong *)(buffer_obj + 0x38))) {
      LOCK();
      index_ptr = (ulonglong *)(buffer_obj + 0x28);
      index = *index_ptr;
      *index_ptr = *index_ptr + 1;
      UNLOCK();
      position_ptr = *(longlong **)(buffer_obj + 0x58);
      slot_offset = (ulonglong)((uint)index & 0x1f);
      current_pos = *(longlong *)
               (position_ptr[2] + 8 +
               (((index & 0xffffffffffffffe0) - *(longlong *)(position_ptr[2] + position_ptr[1] * 0x10) >> 5) +
                position_ptr[1] & *position_ptr - 1U) * 0x10);
      position_ptr = (longlong *)(current_pos + slot_offset * 8);
      FUN_180060b80(data_obj,position_ptr);
      position_ptr = (longlong *)*position_ptr;
      if (position_ptr != (longlong *)0x0) {
        (**(code **)(*position_ptr + 0x38))();
      }
      *(int8_t *)((current_pos - slot_offset) + 0x12f) = 1;
      return 1;
    }
  }
  LOCK();
  *(longlong *)(buffer_obj + 0x38) = *(longlong *)(buffer_obj + 0x38) + 1;
  UNLOCK();
  return 0;
}



/**
 * 批量处理缓冲区槽位
 * 批量处理缓冲区中的槽位操作，支持多个槽位的处理
 * @param count 处理数量
 * @param buffer_ptr 缓冲区指针
 * @return 处理结果
 */
uint64_t 批量处理缓冲区槽位(void)
{
  ulonglong *index_ptr;
  ulonglong start_index;
  longlong current_pos;
  longlong *buffer_info;
  longlong slot_count;
  longlong base_addr;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  
  LOCK();
  index_ptr = (ulonglong *)(unaff_RDI + 0x28);
  start_index = *index_ptr;
  *index_ptr = *index_ptr + (unaff_RSI & 0xffffffff);
  UNLOCK();
  buffer_info = *(longlong **)(unaff_RDI + 0x60);
  current_pos = *(longlong *)
           (buffer_info[3] +
           (((start_index & 0xffffffffffffffe0) - **(longlong **)(buffer_info[3] + buffer_info[1] * 8) >> 5) +
            buffer_info[1] & *buffer_info - 1U) * 8);
  base_addr = *(longlong *)(current_pos + 8);
  FUN_180060b80();
  buffer_info = *(longlong **)(base_addr + (ulonglong)((uint)start_index & 0x1f) * 8);
  if (buffer_info != (longlong *)0x0) {
    (**(code **)(*buffer_info + 0x38))();
  }
  LOCK();
  buffer_info = (longlong *)(base_addr + 0x108);
  slot_count = *buffer_info;
  *buffer_info = *buffer_info + unaff_RSI;
  UNLOCK();
  if (slot_count == 0x1f) {
    *(uint64_t *)(current_pos + 8) = 0;
    func_0x000180060c10(*(uint64_t *)(unaff_RDI + 0x50),base_addr);
  }
  return 1;
}



/**
 * 更新缓冲区位置
 * 更新缓冲区的当前位置，增加指定的偏移量
 * @param offset 偏移量
 * @param buffer_ptr 缓冲区指针
 * @return 操作结果
 */
int8_t 更新缓冲区位置(void)
{
  longlong offset;
  longlong buffer_ptr;
  
  LOCK();
  *(longlong *)(buffer_ptr + 0x38) = *(longlong *)(buffer_ptr + 0x38) + offset;
  UNLOCK();
  return 0;
}



/**
 * 尝试将对象插入缓冲区
 * 尝试将指定的对象插入到缓冲区中，处理各种边界条件
 * @param buffer_info 缓冲区信息
 * @param queue_info 队列信息
 * @param data_obj 数据对象
 * @return 成功插入返回1，否则返回0
 */
uint64_t 尝试插入缓冲区(uint64_t *buffer_info,longlong queue_info,uint64_t data_obj)
{
  char insert_result;
  longlong *current_node;
  longlong node_value;
  longlong *start_node;
  longlong *next_node;
  longlong *target_node;
  
  if (((*(longlong *)(queue_info + 0x18) == 0) || (*(int *)(queue_info + 4) != *(int *)(buffer_info + 0x4c)))
     && (insert_result = FUN_180060a50(), insert_result == '\0')) {
    return 0;
  }
  target_node = (longlong *)0x0;
  start_node = (longlong *)(*(longlong *)(queue_info + 0x10) + -8);
  if (*(longlong *)(queue_info + 0x10) == 0) {
    start_node = target_node;
  }
  insert_result = FUN_180060c60(start_node,data_obj);
  if (insert_result == '\0') {
    start_node = (longlong *)*buffer_info;
    current_node = *(longlong **)(queue_info + 0x10);
    if (current_node == (longlong *)0x0) {
      current_node = (longlong *)&system_buffer_0008;
    }
    node_value = *current_node;
    while( true ) {
      current_node = (longlong *)(node_value + -8);
      if (node_value == 0) {
        current_node = target_node;
      }
      next_node = start_node;
      if (current_node != (longlong *)0x0) {
        next_node = current_node;
      }
      current_node = (longlong *)(*(longlong *)(queue_info + 0x10) + -8);
      if (*(longlong *)(queue_info + 0x10) == 0) {
        current_node = target_node;
      }
      if (next_node == current_node) {
        return 0;
      }
      insert_result = FUN_180060c60(next_node,data_obj);
      if (insert_result != '\0') break;
      node_value = next_node[1];
    }
    *(int32_t *)(queue_info + 8) = 1;
    start_node = next_node + 1;
    if (next_node == (longlong *)0x0) {
      start_node = target_node;
    }
    *(longlong **)(queue_info + 0x10) = start_node;
  }
  else {
    *(int *)(queue_info + 8) = *(int *)(queue_info + 8) + 1;
    if (*(int *)(queue_info + 8) == 0x100) {
      LOCK();
      *(int *)(buffer_info + 0x4c) = *(int *)(buffer_info + 0x4c) + 1;
      UNLOCK();
    }
  }
  return 1;
}



/**
 * 尝试插入对象到队列
 * 尝试将对象插入到指定的队列中，并处理相关的生命周期管理
 * @param queue_obj 队列对象
 * @param param2 参数2
 * @param param3 参数3
 * @param param4 参数4
 * @return 成功插入返回true，否则返回false
 */
bool 尝试插入队列(longlong queue_obj,uint64_t param2,uint64_t param3,uint64_t param4)
{
  longlong *inserted_obj;
  char insert_result;
  longlong *queue_item;
  
  queue_item = (longlong *)0x0;
  insert_result = FUN_180060e40(*(uint64_t *)(queue_obj + 0x60),queue_obj + 0x78,&queue_item,param4,
                        0xfffffffffffffffe);
  inserted_obj = queue_item;
  if (insert_result != '\0') {
    (**(code **)(*queue_item + 0x60))(queue_item);
    (**(code **)(*inserted_obj + 0x70))(inserted_obj);
  }
  if (inserted_obj != (longlong *)0x0) {
    (**(code **)(*inserted_obj + 0x38))(inserted_obj);
  }
  return insert_result != '\0';
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180060fc0(longlong *param_1,longlong *param_2)
void FUN_180060fc0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint64_t uVar10;
  
  uVar10 = 0xfffffffffffffffe;
  plVar3 = (longlong *)param_1[6];
  plVar1 = plVar3 + 1;
  if (plVar1 == (longlong *)param_1[8]) {
    param_2 = (longlong *)*param_2;
    if (param_2 != (longlong *)0x0) {
      (**(code **)(*param_2 + 0x28))(param_2);
    }
    lVar7 = *param_1;
    lVar4 = param_1[1];
    if (lVar4 <= (param_1[9] - lVar7 >> 3) + 1) {
      lVar6 = param_1[5];
      uVar9 = lVar6 - lVar7 >> 3;
      lVar8 = param_1[9] - lVar6 >> 3;
      lVar2 = lVar8 * 8 + 8;
      if (uVar9 != 0) {
        uVar5 = uVar9 >> 1;
        if (uVar5 < 2) {
          uVar5 = 1;
        }
                    // WARNING: Subroutine does not return
        memmove(lVar7 + (uVar9 - uVar5) * 8,lVar6,lVar2);
      }
      lVar6 = lVar4;
      if (lVar4 == 0) {
        lVar6 = 1;
      }
      lVar6 = lVar4 + 2 + lVar6;
      lVar7 = FUN_18062b420(_DAT_180c8ed18,lVar6 * 8,(char)param_1[10],lVar7,uVar10);
      plVar1 = (longlong *)(lVar7 + (param_1[5] - *param_1 >> 3) * 8);
      if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
        memcpy(plVar1,param_1[5],lVar2);
      }
      *param_1 = lVar7;
      param_1[1] = lVar6;
      param_1[5] = (longlong)plVar1;
      lVar7 = *plVar1;
      param_1[3] = lVar7;
      param_1[4] = lVar7 + 0x100;
      param_1[9] = (longlong)(plVar1 + lVar8);
      lVar7 = plVar1[lVar8];
      param_1[7] = lVar7;
      param_1[8] = lVar7 + 0x100;
    }
    uVar10 = FUN_18062b420(_DAT_180c8ed18,0x100,(char)param_1[10]);
    *(uint64_t *)(param_1[9] + 8) = uVar10;
    *(longlong **)param_1[6] = param_2;
    lVar7 = param_1[9];
    param_1[9] = lVar7 + 8;
    lVar7 = *(longlong *)(lVar7 + 8);
    param_1[7] = lVar7;
    param_1[8] = lVar7 + 0x100;
    param_1[6] = lVar7;
  }
  else {
    param_1[6] = (longlong)plVar1;
    param_2 = (longlong *)*param_2;
    *plVar3 = (longlong)param_2;
    if (param_2 != (longlong *)0x0) {
      (**(code **)(*param_2 + 0x28))();
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1800611a0(longlong param_1,longlong *param_2,uint64_t param_3,uint64_t param_4)
void FUN_1800611a0(longlong param_1,longlong *param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  uint64_t uVar6;
  int8_t uVar7;
  
  uVar6 = 0xfffffffffffffffe;
  lVar5 = param_1 + 0xf0;
  iVar4 = _Mtx_lock();
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  uVar7 = 1;
  FUN_180060fc0(param_1 + 0x98,param_2);
  LOCK();
  *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
  UNLOCK();
  puVar1 = *(uint64_t **)(param_1 + 0x1f0);
  lVar2 = *(longlong *)(_DAT_180c82868 + 0x10);
  lVar3 = *(longlong *)(_DAT_180c82868 + 8);
  do {
    iVar4 = ReleaseSemaphore(*puVar1,lVar2 - lVar3 >> 3 & 0xffffffff,0,param_4,uVar6,lVar5,uVar7);
  } while (iVar4 == 0);
  FUN_1800466d0(param_1 + 0x150);
  iVar4 = _Mtx_unlock(lVar5);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x38))();
  }
  return;
}





/**
 * 关闭句柄
 * 关闭指定的句柄
 * @param handle_ptr 句柄指针
 */
void 关闭句柄(uint64_t *handle_ptr)

{
  CloseHandle(*handle_ptr);
  return;
}





/**
 * 销毁互斥锁和清理资源
 * 销毁互斥锁并清理相关资源
 * @param mutex_ptr 互斥锁指针
 */
void 销毁互斥锁清理资源(uint64_t *mutex_ptr)

{
  *mutex_ptr = &unknown_var_6384_ptr;
  if (*(char *)((longlong)mutex_ptr + 0xb1) != '\0') {
    FUN_180639250();
  }
  _Mtx_destroy_in_situ();
  *mutex_ptr = &unknown_var_5224_ptr;
  mutex_ptr[7] = &unknown_var_3456_ptr;
  if (mutex_ptr[8] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  mutex_ptr[8] = 0;
  *(int32_t *)(mutex_ptr + 10) = 0;
  mutex_ptr[7] = &unknown_var_720_ptr;
  mutex_ptr[1] = &unknown_var_3456_ptr;
  if (mutex_ptr[2] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  mutex_ptr[2] = 0;
  *(int32_t *)(mutex_ptr + 4) = 0;
  mutex_ptr[1] = &unknown_var_720_ptr;
  return;
}



/**
 * 释放互斥锁和内存
 * 释放互斥锁并根据标志释放内存
 * @param mutex_ptr 互斥锁指针
 * @param flags 释放标志
 * @param param3 参数3
 * @param param4 参数4
 * @return 互斥锁指针
 */
uint64_t *
释放互斥锁和内存(uint64_t *mutex_ptr,ulonglong flags,uint64_t param3,uint64_t param4)

{
  uint64_t alloc_flags;
  
  alloc_flags = 0xfffffffffffffffe;
  *mutex_ptr = &unknown_var_6384_ptr;
  if (*(char *)((longlong)mutex_ptr + 0xb1) != '\0') {
    FUN_180639250();
  }
  _Mtx_destroy_in_situ();
  FUN_1805065c0(mutex_ptr);
  if ((flags & 1) != 0) {
    free(mutex_ptr,0xb8,param3,param4,alloc_flags);
  }
  return mutex_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 初始化线程池和相关资源
 * 初始化线程池以及相关的内存资源
 * @param param1 参数1
 * @param config_ptr 配置指针
 */
void 初始化线程池资源(uint64_t param1,longlong config_ptr)

{
  longlong lVar1;
  longlong lVar2;
  uint64_t *puVar3;
  int8_t auStack_268 [32];
  longlong lStack_248;
  uint64_t *puStack_238;
  int8_t auStack_230 [8];
  longlong lStack_228;
  uint uStack_220;
  longlong lStack_210;
  int8_t auStack_208 [80];
  uint64_t uStack_1b8;
  void *puStack_1a8;
  int8_t *puStack_1a0;
  int32_t uStack_198;
  int8_t auStack_190 [88];
  int8_t auStack_138 [256];
  ulonglong uStack_38;
  
  lVar2 = _DAT_180c86928;
  lVar1 = _DAT_180c82868;
  uStack_1b8 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_268;
  lStack_210 = _DAT_180c86928;
  puStack_1a8 = &unknown_var_7512_ptr;
  puStack_1a0 = auStack_190;
  auStack_190[0] = 0;
  uStack_198 = 6;
  strcpy_s(auStack_190,0x10,&unknown_var_9216_ptr);
  puVar3 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0x208,8,3);
  lStack_248 = lVar1 + 0x70;
  puStack_238 = puVar3;
  FUN_18020e0e0(puVar3,&puStack_1a8,3,lVar1 + 0x2e0);
  *puVar3 = &unknown_var_9056_ptr;
  puStack_238 = puVar3;
  FUN_18020e840(puVar3);
  FUN_18005ea90(lVar1 + 0x48,&puStack_238);
  *(uint64_t **)(lVar2 + 400) = puVar3;
  puStack_1a8 = &unknown_var_720_ptr;
  FUN_180627e10(_DAT_180c86870 + 0x170,auStack_230,&system_buffer_c8c8);
  if (0 < *(int *)(param_2 + 0x10)) {
    FUN_1806277c0(auStack_230,uStack_220 + *(int *)(param_2 + 0x10));
                    // WARNING: Subroutine does not return
    memcpy((ulonglong)uStack_220 + lStack_228,*(uint64_t *)(param_2 + 8),
           (longlong)(*(int *)(param_2 + 0x10) + 1));
  }
  FUN_18062c100(auStack_208,auStack_230);
  FUN_18062c1e0(auStack_208,1);
                    // WARNING: Subroutine does not return
  memset(auStack_138,0,0x100);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 处理线程池任务类型4
 * 处理线程池中类型4的任务，包括任务的创建、执行和清理
 * @param task_ptr 任务指针
 */
void 处理线程池任务类型4(longlong *task_ptr)

{
  uint64_t *puVar1;
  code *pcVar2;
  longlong lVar3;
  uint64_t uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plStackX_8;
  longlong **pplStackX_10;
  longlong *plStackX_18;
  longlong *plStackX_20;
  
  lVar3 = _DAT_180c86928;
  plStackX_8 = param_1;
  uVar4 = FUN_18062b1e0(_DAT_180c8ed18,0x70,8,3,0xfffffffffffffffe);
  plVar5 = (longlong *)FUN_1800636f0(uVar4,0,lVar3);
  plStackX_18 = plVar5;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x28))(plVar5);
  }
  puVar1 = *(uint64_t **)(lVar3 + 400);
  pcVar2 = *(code **)*puVar1;
  pplStackX_10 = &plStackX_8;
  plStackX_8 = plVar5;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x28))(plVar5);
  }
  (*pcVar2)(puVar1,&plStackX_8);
  uVar4 = FUN_18062b1e0(_DAT_180c8ed18,0x70,8,3);
  plVar6 = (longlong *)FUN_1800636f0(uVar4,4,lVar3);
  plStackX_20 = plVar6;
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x28))(plVar6);
  }
  puVar1 = *(uint64_t **)(lVar3 + 400);
  pcVar2 = *(code **)*puVar1;
  pplStackX_10 = &plStackX_8;
  plStackX_8 = plVar6;
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x28))(plVar6);
  }
  (*pcVar2)(puVar1,&plStackX_8);
  uVar4 = FUN_18062b1e0(_DAT_180c8ed18,0x70,8,3);
  plVar7 = (longlong *)FUN_1800636f0(uVar4,0,lVar3);
  if (plVar7 != (longlong *)0x0) {
    pplStackX_10 = (longlong **)plVar7;
    (**(code **)(*plVar7 + 0x28))(plVar7);
  }
  plStackX_18 = plVar7;
  if (plVar5 != (longlong *)0x0) {
    pplStackX_10 = (longlong **)plVar5;
    (**(code **)(*plVar5 + 0x38))(plVar5);
  }
  puVar1 = *(uint64_t **)(lVar3 + 400);
  pcVar2 = *(code **)*puVar1;
  pplStackX_10 = &plStackX_8;
  plStackX_8 = plVar7;
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x28))(plVar7);
  }
  (*pcVar2)(puVar1,&plStackX_8);
  FUN_18020f150(*(uint64_t *)(lVar3 + 400));
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x38))(plVar6);
  }
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x38))(plVar7);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 处理线程池任务类型3
 * 处理线程池中类型3的任务，包括任务的创建、执行和清理
 * @param task_ptr 任务指针
 */
void 处理线程池任务类型3(longlong *task_ptr)

{
  uint64_t *puVar1;
  code *pcVar2;
  longlong lVar3;
  uint64_t uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plStackX_8;
  longlong **pplStackX_10;
  longlong *plStackX_18;
  longlong *plStackX_20;
  
  lVar3 = _DAT_180c86928;
  plStackX_8 = param_1;
  uVar4 = FUN_18062b1e0(_DAT_180c8ed18,0x70,8,3,0xfffffffffffffffe);
  plVar5 = (longlong *)FUN_1800636f0(uVar4,0,lVar3);
  plStackX_18 = plVar5;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x28))(plVar5);
  }
  puVar1 = *(uint64_t **)(lVar3 + 400);
  pcVar2 = *(code **)*puVar1;
  pplStackX_10 = &plStackX_8;
  plStackX_8 = plVar5;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x28))(plVar5);
  }
  (*pcVar2)(puVar1,&plStackX_8);
  uVar4 = FUN_18062b1e0(_DAT_180c8ed18,0x70,8,3);
  plVar6 = (longlong *)FUN_1800636f0(uVar4,3,lVar3);
  plStackX_20 = plVar6;
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x28))(plVar6);
  }
  puVar1 = *(uint64_t **)(lVar3 + 400);
  pcVar2 = *(code **)*puVar1;
  pplStackX_10 = &plStackX_8;
  plStackX_8 = plVar6;
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x28))(plVar6);
  }
  (*pcVar2)(puVar1,&plStackX_8);
  uVar4 = FUN_18062b1e0(_DAT_180c8ed18,0x70,8,3);
  plVar7 = (longlong *)FUN_1800636f0(uVar4,0,lVar3);
  if (plVar7 != (longlong *)0x0) {
    pplStackX_10 = (longlong **)plVar7;
    (**(code **)(*plVar7 + 0x28))(plVar7);
  }
  plStackX_18 = plVar7;
  if (plVar5 != (longlong *)0x0) {
    pplStackX_10 = (longlong **)plVar5;
    (**(code **)(*plVar5 + 0x38))(plVar5);
  }
  puVar1 = *(uint64_t **)(lVar3 + 400);
  pcVar2 = *(code **)*puVar1;
  pplStackX_10 = &plStackX_8;
  plStackX_8 = plVar7;
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x28))(plVar7);
  }
  (*pcVar2)(puVar1,&plStackX_8);
  FUN_18020f150(*(uint64_t *)(lVar3 + 400));
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x38))(plVar6);
  }
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x38))(plVar7);
  }
  return;
}





/**
 * 执行核心线程池函数
 * 执行线程池的核心功能函数
 */
void 执行核心线程池函数(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}





/**
 * 执行线程池任务包装器1
 * 执行线程池任务的包装器函数1
 * @param param1 参数1
 * @param param2 参数2
 * @param param3 参数3
 * @param param4 参数4
 */
void 执行线程池任务包装器1(uint64_t param1,uint64_t param2,int32_t param3,uint64_t param4)

{
  FUN_180061f80(param1,param2,0xffffffff00000000,param3,param4,&stack0x00000028);
  return;
}





/**
 * 执行线程池任务包装器2
 * 执行线程池任务的包装器函数2
 * @param param1 参数1
 * @param param2 参数2
 * @param param3 参数3
 * @param param4 参数4
 */
void 执行线程池任务包装器2(uint64_t param1,uint64_t param2,uint64_t param3,uint64_t param4)

{
  uint64_t uStackX_18;
  uint64_t uStackX_20;
  
  uStackX_18 = param_3;
  uStackX_20 = param_4;
  FUN_180061f80(param_1,0,0xffffffff00000000,0xd,param_2,&uStackX_18);
  return;
}





/**
 * 执行线程池任务包装器3
 * 执行线程池任务的包装器函数3
 * @param param1 参数1
 * @param param2 参数2
 * @param param3 参数3
 * @param param4 参数4
 */
void 执行线程池任务包装器3(uint64_t param1,uint64_t param2,uint64_t param3,uint64_t param4)

{
  uint64_t uStackX_20;
  
  uStackX_20 = param_4;
  FUN_180061f80(param_1,param_2,0xffffffff00000000,0xd,param_3,&uStackX_20);
  return;
}





/**
 * 执行线程池任务包装器4
 * 执行线程池任务的包装器函数4
 */
void 执行线程池任务包装器4(void)

{
  FUN_180061f80();
  return;
}





/**
 * 执行线程池任务包装器5
 * 执行线程池任务的包装器函数5
 */
void 执行线程池任务包装器5(void)

{
  FUN_180061f80();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 处理线程池任务类型6
 * 处理线程池中类型6的任务，包括任务的创建、执行和清理
 * @param task_ptr 任务指针
 */
void 处理线程池任务类型6(longlong *task_ptr)

{
  uint64_t *puVar1;
  code *pcVar2;
  longlong lVar3;
  uint64_t uVar4;
  longlong *plVar5;
  longlong *plStackX_8;
  longlong *plStackX_10;
  longlong **pplStackX_18;
  
  lVar3 = _DAT_180c86928;
  if (*(char *)(_DAT_180c86928 + 0x18) != '\0') {
    plStackX_8 = param_1;
    uVar4 = FUN_18062b1e0(_DAT_180c8ed18,0x70,8,3,0xfffffffffffffffe);
    plVar5 = (longlong *)FUN_1800636f0(uVar4,6,lVar3);
    plStackX_10 = plVar5;
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x28))(plVar5);
    }
    puVar1 = *(uint64_t **)(lVar3 + 400);
    pcVar2 = *(code **)*puVar1;
    pplStackX_18 = &plStackX_8;
    plStackX_8 = plVar5;
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x28))(plVar5);
    }
    (*pcVar2)(puVar1,&plStackX_8);
    FUN_18020f150(*(uint64_t *)(lVar3 + 400));
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x38))(plVar5);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 初始化时间相关资源
 * 初始化时间相关的资源和数据结构
 */
void 初始化时间相关资源(void)

{
  int8_t auStack_208 [48];
  int32_t uStack_1d8;
  uint64_t uStack_190;
  uint64_t uStack_188;
  uint64_t uStack_180;
  uint64_t uStack_178;
  int8_t auStack_138 [256];
  ulonglong uStack_38;
  
  uStack_178 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_208;
  uStack_1d8 = 0;
  uStack_180 = _DAT_180c86928;
  uStack_190 = _time64(0);
  uStack_188 = _localtime64(&uStack_190);
                    // WARNING: Subroutine does not return
  memset(auStack_138,0,0xff);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



