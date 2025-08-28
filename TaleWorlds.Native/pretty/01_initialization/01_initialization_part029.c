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





// 函数: void FUN_18005e770(undefined8 param_1,longlong *param_2,char param_3)
void FUN_18005e770(undefined8 param_1,longlong *param_2,char param_3)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  
  lVar6 = param_2[1];
  lVar5 = *param_2;
  do {
    bVar2 = false;
    uVar4 = 0;
    if (lVar6 - lVar5 >> 3 == 0) {
      return;
    }
    do {
      plVar3 = *(longlong **)(uVar4 * 8 + lVar5);
      pcVar1 = *(code **)(*plVar3 + 0x68);
      if (pcVar1 == (code *)&UNK_1800467f0) {
        cVar7 = (char)plVar3[2] != '\0';
      }
      else {
        cVar7 = (*pcVar1)();
      }
      if (cVar7 == '\0') {
        bVar2 = true;
        plVar3 = (longlong *)FUN_18005e890(param_1);
        if (param_3 == '\0') {
          cVar7 = (**(code **)(*plVar3 + 0x20))(plVar3,0);
        }
        else {
          cVar7 = FUN_18020ee40();
        }
        if (cVar7 == '\0') {
          plVar3 = *(longlong **)(uVar4 * 8 + *param_2);
          pcVar1 = *(code **)(*plVar3 + 0x80);
          if (pcVar1 == (code *)&UNK_180049760) {
            FUN_1800496b0(plVar3 + 4);
          }
          else {
            (*pcVar1)();
          }
        }
      }
      lVar6 = param_2[1];
      uVar4 = (ulonglong)((int)uVar4 + 1);
      lVar5 = *param_2;
    } while (uVar4 < (ulonglong)(lVar6 - lVar5 >> 3));
  } while (bVar2);
  return;
}



longlong FUN_18005e890(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  uVar3 = uVar4;
  if (*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8) >> 3 != 0) {
    do {
      iVar2 = _Thrd_id();
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + uVar3 * 8);
      if (*(int *)(lVar1 + 0x48) == iVar2) {
        return lVar1;
      }
      uVar3 = (ulonglong)((int)uVar3 + 1);
    } while (uVar3 < (ulonglong)(*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8) >> 3));
  }
  if (*(longlong *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x28) >> 3 != 0) {
    do {
      iVar2 = _Thrd_id();
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + uVar4 * 8);
      if (*(int *)(lVar1 + 0x48) == iVar2) {
        return lVar1;
      }
      uVar4 = (ulonglong)((int)uVar4 + 1);
    } while (uVar4 < (ulonglong)(*(longlong *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x28) >> 3)
            );
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_18005e950(undefined8 *param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  
  uVar5 = 0;
  puVar3 = param_1 + 0xb;
  *param_1 = 0;
  lVar8 = 0x20;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  lVar7 = 0x20;
  puVar6 = puVar3;
  do {
    func_0x000180059bb0(puVar6);
    puVar6 = puVar6 + 2;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  *(undefined8 *)((longlong)param_1 + 0x25c) = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  param_1[7] = 0;
  param_1[8] = 0x20;
  param_1[9] = puVar3;
  do {
    *(undefined4 *)puVar3 = 0;
    uVar1 = _DAT_180c8ed18;
    puVar3 = puVar3 + 2;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  lVar7 = 6;
  param_1[10] = 0;
  param_1[6] = param_1 + 8;
  param_1[4] = 6;
  uVar2 = FUN_18062b420(uVar1,0x7b0,10);
  uVar4 = uVar5;
  if (uVar2 != 0) {
    puVar3 = (undefined8 *)(uVar2 + 0x108);
    do {
      puVar3[-1] = 0;
      *puVar3 = 0;
      *(undefined4 *)(puVar3 + 5) = 0;
      puVar3[6] = 0;
      *(undefined2 *)(puVar3 + 7) = 0x100;
      puVar3 = puVar3 + 0x29;
      lVar7 = lVar7 + -1;
      uVar4 = uVar2;
    } while (lVar7 != 0);
  }
  param_1[3] = uVar4;
  if (uVar4 == 0) {
    param_1[4] = 0;
    uVar4 = uVar5;
  }
  else {
    uVar4 = param_1[4];
  }
  uVar2 = uVar5;
  if (uVar4 != 0) {
    do {
      uVar2 = uVar2 + 1;
      *(undefined1 *)(uVar5 + 0x141 + param_1[3]) = 0;
      uVar5 = uVar5 + 0x148;
    } while (uVar2 < (ulonglong)param_1[4]);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



