#include "TaleWorlds.Native.Split.h"

// 01_initialization_part048.c - 初始化模块第48部分
// 本文件包含6个函数，主要涉及引用计数管理、状态检查、资源清理和设备处理

/**
 * 减少引用计数并清理资源
 * 当引用计数降为0时执行清理操作
 * 原函数名: FUN_180076a80
 * 
 * @param object_ptr 对象指针，包含引用计数和其他状态信息
 */
void DecrementReferenceAndCleanup(longlong object_ptr)

{
  char *ref_count_ptr;
  longlong *callback_ptr;
  int lock_result;
  bool cleanup_flag;
  
  // 获取互斥锁
  lock_result = _Mtx_lock(0x180c91910);
  if (lock_result != 0) {
    __Throw_C_error_std__YAXH_Z(lock_result);
  }
  
  // 减少引用计数
  ref_count_ptr = (char *)(object_ptr + 0xfc);
  *ref_count_ptr = *ref_count_ptr - 1;
  
  // 如果引用计数降为0，执行清理操作
  if (*ref_count_ptr == '\0') {
    // 等待清理标志位可用
    while( true ) {
      LOCK();
      cleanup_flag = *(char *)(object_ptr + 0xec) == '\0';
      if (cleanup_flag) {
        *(char *)(object_ptr + 0xec) = '\x01';  // 设置清理标志
      }
      UNLOCK();
      if (cleanup_flag) break;
      Sleep();  // 等待其他线程完成清理
    }
    
    // 等待所有操作完成
    while (*(int *)(object_ptr + 0xe8) != 0) {
      Sleep(0);
    }
    
    // 检查是否需要执行回调
    if ((((*(longlong *)(object_ptr + 0x210) != 0) &&
         (FUN_1800791a0(object_ptr), *(char *)(object_ptr + 0xfc) == '\0')) &&
        (*(char *)(object_ptr + 0xf4) == '\0')) &&
       (((*(byte *)(object_ptr + 0xfd) & 0x20) == 0 || ((*(byte *)(object_ptr + 0xfe) & 1) == 0)))) {
      callback_ptr = *(longlong **)(object_ptr + 0x210);
      *(undefined8 *)(object_ptr + 0x210) = 0;
      if (callback_ptr != (longlong *)0x0) {
        (**(code **)(*callback_ptr + 0x38))();  // 执行清理回调
      }
    }
    
    // 清理完成，重置标志位
    LOCK();
    if (*(char *)(object_ptr + 0xec) == '\x01') {
      *(char *)(object_ptr + 0xec) = '\0';
    }
    UNLOCK();
  }
  
  // 释放互斥锁
  lock_result = _Mtx_unlock(0x180c91910);
  if (lock_result != 0) {
    __Throw_C_error_std__YAXH_Z(lock_result);
  }
  return;
}



/**
 * 检查对象状态是否有效
 * 验证对象是否处于可操作状态
 * 原函数名: FUN_180076b90
 * 
 * @param object_ptr 对象指针
 * @return 状态有效性标志，1表示有效，0表示无效
 */
undefined8 CheckObjectStatusValid(longlong object_ptr)

{
  byte status_flags;
  longlong status_ptr;
  byte device_status;
  
  status_flags = *(byte *)(object_ptr + 0xfd);
  status_ptr = object_ptr;
  
  // 根据标志位决定检查路径
  if ((status_flags & 0x20) == 0) {
    status_ptr = func_0x000180085de0(*(undefined8 *)(object_ptr + 0x1b0));
  }
  
  // 检查计数器
  if (0 < *(int *)(status_ptr + 0x200)) {
    status_ptr = *(longlong *)(object_ptr + 0x1b8);
    device_status = *(byte *)(status_ptr + 0x38c);
    if (device_status == 9) {
      device_status = func_0x00018022d300();  // 更新设备状态
      *(byte *)(status_ptr + 0x38c) = device_status;
      status_flags = *(byte *)(object_ptr + 0xfd);
    }
    
    // 再次检查标志位
    if ((status_flags & 0x20) == 0) {
      object_ptr = func_0x000180085de0(*(undefined8 *)(object_ptr + 0x1b0));
    }
    
    // 验证设备状态
    if ((*(longlong *)(object_ptr + 0x1e0) == 0) ||
       (*(byte *)(*(longlong *)(object_ptr + 0x1e0) + 0x15 + (ulonglong)device_status * 0x18) < 2)) {
      return 0;  // 状态无效
    }
  }
  return 1;  // 状态有效
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/**
 * 处理对象操作和哈希表管理
 * 执行复杂的对象操作，包括哈希表插入和状态更新
 * 原函数名: FUN_180076c50
 * 
 * @param object_ptr 对象指针
 * @param operation_params 操作参数指针
 * @return 操作结果码
 */
int ProcessObjectOperations(longlong object_ptr, longlong *operation_params)

{
  longlong *hash_entry_ptr1;
  longlong *hash_entry_ptr2;
  ulonglong *hash_key_ptr;
  char operation_result;
  int result_code;
  uint hash_value;
  longlong temp_ptr;
  char *string_ptr;
  longlong list_ptr;
  ulonglong computed_hash;
  ulonglong final_hash;
  ulonglong *existing_entry;
  uint hash_modifier;
  ulonglong list_size;
  undefined4 extraout_XMM0_Da;
  undefined4 temp_var;
  undefined8 stack_var1;
  undefined8 *stack_ptr1;
  undefined8 *stack_ptr2;
  uint in_stack_param;
  undefined8 stack_var2;
  ulonglong *stack_ptr3;
  longlong *stack_ptr4;
  code *callback_ptr1;
  code *callback_ptr2;
  undefined8 stack_var3;
  undefined8 stack_var4;
  undefined8 stack_var5;
  undefined4 stack_var6;
  
  stack_var2 = 0xfffffffffffffffe;
  result_code = 0;
  
  // 检查是否需要执行初始化操作
  if (((*(longlong *)(object_ptr + 0x1b8) != 0) && (result_code = 0, (*(byte *)(operation_params + 1) & 4) == 0)) &&
     (*(char *)((longlong)operation_params + 0x12) == '\0')) {
    result_code = FUN_18022d470();  // 执行初始化
  }
  
  // 检查是否需要执行状态检查
  if ((*(byte *)(operation_params + 1) & 0x20) == 0) {
    operation_result = FUN_180076b90(object_ptr);
    if (operation_result == '\0') {
      if ((char)operation_params[2] != '\0') {
        // 执行回调操作
        stack_ptr3 = (ulonglong *)0x0;
        stack_ptr4 = (longlong *)0x0;
        callback_ptr1 = (code *)0x0;
        callback_ptr2 = _guard_check_icall;
        FUN_1800b6f90(extraout_XMM0_Da, object_ptr, &stack_ptr3);
        if (callback_ptr1 != (code *)0x0) {
          (*callback_ptr1)(&stack_ptr3, 0, 0);
        }
      }
      operation_result = FUN_180076b90(object_ptr);
      if (operation_result == '\0') {
        result_code = result_code + 1;
        if (*operation_params != 0) {
          stack_var1 = object_ptr;
          FUN_18005ea90(*operation_params, &stack_var1);
        }
      }
    }
    else if ((char)operation_params[2] != '\0') {
      FUN_18007b1e0(object_ptr, 0);
    }
  }
  
  // 检查是否需要执行哈希表操作
  if ((*(byte *)(operation_params + 1) & 0x10) == 0) {
    return result_code;
  }
  
  // 初始化哈希表操作参数
  stack_var3 = 0;
  stack_var4 = 0;
  stack_var5 = 0;
  stack_var6 = 3;
  stack_ptr1 = *(undefined8 **)(object_ptr + 0x1b8);
  hash_modifier = *(uint *)(object_ptr + 0x100) >> 0x16;
  string_ptr = "";
  if ((char *)stack_ptr1[3] != (char *)0x0) {
    string_ptr = (char *)stack_ptr1[3];
  }
  
  // 计算哈希值
  hash_value = 0x1505;
  operation_result = *string_ptr;
  while (operation_result != '\0') {
    string_ptr = string_ptr + 1;
    hash_value = hash_value * 0x21 + (int)operation_result;
    operation_result = *string_ptr;
  }
  computed_hash = (ulonglong)hash_value;
  if ((hash_modifier & 1) != 0) {
    computed_hash = (ulonglong)hash_value | 0x400000000;
  }
  
  // 检查哈希表中是否已存在该条目
  list_ptr = operation_params[9];
  if (list_ptr != 0) {
    hash_entry_ptr1 = (longlong *)(*(longlong *)(list_ptr + 8) + *(ulonglong *)(list_ptr + 0x10) * 8);
    existing_entry = (ulonglong *)*hash_entry_ptr1;
    hash_entry_ptr2 = (longlong *)
             (*(longlong *)(list_ptr + 8) + (computed_hash % (*(ulonglong *)(list_ptr + 0x10) & 0xffffffff)) * 8)
    ;
    for (hash_key_ptr = (ulonglong *)*hash_entry_ptr2;
        (stack_ptr3 = existing_entry, stack_ptr4 = hash_entry_ptr1, hash_key_ptr != (ulonglong *)0x0 &&
        (stack_ptr3 = hash_key_ptr, stack_ptr4 = hash_entry_ptr2, computed_hash != *hash_key_ptr));
        hash_key_ptr = (ulonglong *)hash_key_ptr[1]) {
    }
    if (stack_ptr3 != existing_entry) goto HASH_ENTRY_FOUND;
  }
  
  // 扩展哈希表容量
  hash_entry_ptr1 = operation_params + 5;
  list_ptr = operation_params[7] - *hash_entry_ptr1;
  if ((ulonglong)(list_ptr / 0x18) < 0x100) {
    temp_ptr = FUN_18062b420(_DAT_180c8ed18, 0x1800, (char)operation_params[8]);
    list_ptr = *hash_entry_ptr1;
    if (list_ptr != operation_params[6]) {
                    // WARNING: Subroutine does not return
      memmove(temp_ptr, list_ptr, operation_params[6] - list_ptr);
    }
    if (list_ptr != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *hash_entry_ptr1 = temp_ptr;
    operation_params[6] = temp_ptr;
    operation_params[7] = temp_ptr + 0x1800;
    list_ptr = 0;
  }
  
  // 创建新的哈希条目
  stack_ptr2 = &stack_var1;
  stack_var1 = 0;
  temp_var = FUN_1801cdb50(list_ptr, stack_ptr1, &stack_var3, 0, in_stack_param & 0xffffff00, 0,
                         (byte)hash_modifier & 1, hash_entry_ptr1, 1, 0, 0, &stack_var1, stack_var2);
  stack_ptr1 = &stack_var1;
  stack_var1 = 0;
  operation_result = FUN_1801de280(temp_var, hash_entry_ptr1, &stack_var1);
  if (operation_result == '\0') {
    result_code = result_code + 1;
  }
  operation_params[6] = *hash_entry_ptr1;
  list_ptr = operation_params[9];
  final_hash = computed_hash % (ulonglong)*(uint *)(list_ptr + 0x10);
  
  // 在哈希表中查找插入位置
  for (existing_entry = *(ulonglong **)(*(longlong *)(list_ptr + 8) + final_hash * 8); existing_entry != (ulonglong *)0x0
      ; existing_entry = (ulonglong *)existing_entry[1]) {
    if (computed_hash == *existing_entry) goto HASH_ENTRY_FOUND;
  }
  
  // 插入新的哈希条目
  hash_entry_ptr1 = *(longlong **)(list_ptr + 0x30);
  list_size = (longlong)(int)hash_entry_ptr1[2] + 0xfU & 0xfffffffffffffff0;
  *(int *)(hash_entry_ptr1 + 2) = (int)list_size + 0x10;
  existing_entry = (ulonglong *)(*hash_entry_ptr1 + list_size);
  *existing_entry = computed_hash;
  existing_entry[1] = 0;
  FUN_18066c220(list_ptr + 0x20, &stack_var1, *(undefined4 *)(list_ptr + 0x10), *(undefined4 *)(list_ptr + 0x18),
                1);
  if ((char)stack_var1 != '\0') {
    final_hash = computed_hash % (ulonglong)stack_var1._4_4_;
    FUN_180083b20(list_ptr, stack_var1._4_4_);
  }
  existing_entry[1] = *(ulonglong *)(*(longlong *)(list_ptr + 8) + final_hash * 8);
  *(ulonglong **)(*(longlong *)(list_ptr + 8) + final_hash * 8) = existing_entry;
  *(longlong *)(list_ptr + 0x18) = *(longlong *)(list_ptr + 0x18) + 1;
  
HASH_ENTRY_FOUND:
  FUN_180080df0(&stack_var3);
  return result_code;
}





// 函数: void CleanupObjectList(longlong *object_list)
// 功能: 清理对象列表，释放所有相关资源
// 原函数名: FUN_180077020
void CleanupObjectList(longlong *object_list)

{
  undefined8 *list_item;
  undefined8 *list_end;
  
  list_end = (undefined8 *)object_list[1];
  for (list_item = (undefined8 *)*object_list; list_item != list_end; list_item = list_item + 6) {
    *list_item = &UNK_180a3c3e0;  // 设置默认值
    if (list_item[1] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();  // 释放内存
    }
    list_item[1] = 0;
    *(undefined4 *)(list_item + 3) = 0;
    *list_item = &UNK_18098bcb0;  // 重置状态
  }
  if (*object_list != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();  // 释放列表内存
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/**
 * 执行对象状态清理和重置
 * 清理对象的各种状态标志和相关资源
 * 原函数名: FUN_180077040
 * 
 * @param object_ptr 对象指针
 * @return 清理状态标志
 */
ulonglong CleanupObjectState(longlong object_ptr)

{
  int *status_counter;
  byte cleanup_flag;
  longlong component_ptr;
  ulonglong result_flag;
  longlong temp_ptr;
  longlong component_offset;
  
  // 清理组件状态
  if (*(longlong *)(object_ptr + 0x1b8) != 0) {
    component_offset = 0xb8;
    temp_ptr = _DAT_180c86870;
    do {
      component_ptr = *(longlong *)(component_offset + *(longlong *)(object_ptr + 0x1b8));
      if ((((component_ptr != 0) && (*(longlong *)(*(longlong *)(object_ptr + 0x1b8) + 0x328 + component_offset) == 0)) &&
          ((*(uint *)(component_ptr + 0x328) & 0x20000000) == 0)) && (*(longlong *)(component_ptr + 0x370) == 0)) {
        if (*(longlong *)(component_ptr + 0x1d8) == 0) {
          FUN_18023b050(component_ptr, 0);  // 初始化组件
          temp_ptr = _DAT_180c86870;
          status_counter = (int *)(*(longlong *)(component_offset + *(longlong *)(object_ptr + 0x1b8)) + 0x3a8);
          *status_counter = *status_counter + 1;
        }
        else if (temp_ptr != 0) {
          *(longlong *)(component_ptr + 0x340) = (longlong)*(int *)(temp_ptr + 0x224);
        }
      }
      component_offset = component_offset + 8;
    } while (component_offset < 0x138);
  }
  
  // 清理主对象状态
  cleanup_flag = *(byte *)(object_ptr + 0xf9);
  if (cleanup_flag != 0) {
    if (*(longlong *)(object_ptr + 0x1d8) != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();  // 释放资源
    }
    *(undefined8 *)(object_ptr + 0x1d8) = 0;
    LOCK();
    cleanup_flag = *(byte *)(object_ptr + 0xf9);
    *(byte *)(object_ptr + 0xf9) = 0;
    UNLOCK();
  }
  result_flag = (ulonglong)cleanup_flag;
  
  // 清理扩展状态
  if (*(longlong *)(object_ptr + 0x1e8) != 0) {
    FUN_180080060();  // 执行清理
    result_flag = *(ulonglong *)(object_ptr + 0x1f0);
    *(undefined8 *)(object_ptr + 0x1e8) = 0;
    if (result_flag != 0) {
      *(byte *)(result_flag + 0xfe) = *(byte *)(result_flag + 0xfe) & 0xfb;
    }
  }
  return result_flag;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address


// 函数: void ProcessDeviceOperations(longlong *device_params)
// 功能: 处理设备相关操作，包括状态检查和回调执行
// 原函数名: FUN_180077150
void ProcessDeviceOperations(longlong *device_params)

{
  undefined8 device_config;
  ulonglong *temp_ptr1;
  ulonglong config_mask;
  longlong *status_ptr;
  longlong device_base;
  byte device_flags;
  undefined1 stack_buffer [32];
  ulonglong *stack_ptr1;
  undefined8 stack_var1;
  undefined *stack_ptr2;
  ulonglong *stack_ptr3;
  ulonglong stack_var2;
  ulonglong stack_buffer2 [2];
  undefined8 stack_var3;
  char stack_flag1;
  char stack_flag2;
  char stack_flag3;
  ulonglong security_cookie;
  
  stack_var3 = 0xfffffffffffffffe;
  security_cookie = _DAT_180bf00a8 ^ (ulonglong)stack_buffer;
  device_config = *(undefined8 *)(device_params[0x37] + 0x1e0);
  stack_ptr2 = &UNK_18098bc80;
  stack_ptr3 = stack_buffer2;
  stack_buffer2[0] = stack_buffer2[0] & 0xffffffffffffff00;
  stack_var2._0_4_ = 0x12;
  strcpy_s(stack_buffer2, 0x20, &UNK_1809ffa98);
  config_mask = FUN_180240430(device_config, &stack_ptr2, 0);
  stack_ptr2 = &UNK_18098bcb0;
  
  if (config_mask != 0) {
    device_base = device_params[0x37];
    if ((*(ulonglong *)(device_base + 0x140) & config_mask) != 0) {
      device_flags = *(byte *)((longlong)device_params + 0xfd) & 0x20;
      status_ptr = device_params;
      if (device_flags == 0) {
        status_ptr = (longlong *)func_0x000180085de0(device_params[0x36]);
      }
      if (((*(uint *)(status_ptr + 0x20) & 0x8000000) == 0) && (device_flags != 0)) {
        stack_ptr1 = (ulonglong *)device_params;
        (**(code **)(*device_params + 0x28))(device_params);
        stack_ptr2 = (undefined *)0x0;
        stack_ptr3 = (ulonglong *)0x0;
        stack_ptr1 = &stack_var2;
        stack_var1 = 0;
        stack_buffer2[0] = 0;
        stack_var2._0_4_ = (uint)stack_var2 & 0xffffff00;
        FUN_18022f2e0(&stack_ptr2, device_params, 0);
        (**(code **)(*device_params + 0x38))(device_params);
        FUN_180237d00(&stack_ptr2);
        FUN_18022f390(&stack_ptr2);
        FUN_18022f410(&stack_ptr2);
        device_base = device_params[0x37];
      }
      if ((*(ulonglong *)(device_base + 0x140) & config_mask) != 0) goto OPERATION_COMPLETE;
    }
    status_ptr = device_params;
    if ((*(byte *)((longlong)device_params + 0xfd) & 0x20) == 0) {
      status_ptr = (longlong *)func_0x000180085de0(device_params[0x36]);
    }
    if ((*(uint *)(status_ptr + 0x20) & 0x8000000) != 0) {
      stack_ptr1 = (ulonglong *)device_params;
      (**(code **)(*device_params + 0x28))(device_params);
      stack_ptr2 = (undefined *)0x0;
      stack_ptr3 = (ulonglong *)0x0;
      stack_ptr1 = &stack_var2;
      stack_var1 = 0;
      stack_buffer2[0] = 0;
      stack_var2._0_4_ = (uint)stack_var2 & 0xffffff00;
      FUN_18022f2e0(&stack_ptr2, device_params, 0);
      (**(code **)(*device_params + 0x38))(device_params);
      FUN_180238950(&stack_ptr2);
      if (stack_ptr3 != (ulonglong *)0x0) {
        if (stack_flag3 != '\0') {
          FUN_180075b70(stack_ptr2);
        }
        FUN_18007f6a0(&stack_var2);
        if (stack_flag1 != '\0') {
          FUN_180079520(stack_ptr2);
        }
        if (stack_flag2 != '\0') {
          FUN_180079520(stack_ptr2);
        }
        temp_ptr1 = stack_ptr3;
        stack_ptr1 = stack_ptr3;
        stack_ptr3 = (ulonglong *)0x0;
        if (temp_ptr1 != (ulonglong *)0x0) {
          (**(code **)(*temp_ptr1 + 0x38))();
        }
      }
      FUN_18022f410(&stack_ptr2);
    }
  }
  
OPERATION_COMPLETE:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(security_cookie ^ (ulonglong)stack_buffer);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/**
 * 处理设备状态更新和计数
 * 根据设备状态更新内部计数器和标志位
 * 原函数名: FUN_180077420
 * 
 * @param device_ptr 设备指针
 * @param context_ptr 上下文指针
 * @return 处理结果状态
 */
undefined8 ProcessDeviceStatusUpdate(longlong device_ptr, longlong context_ptr)

{
  uint *counter_ptr;
  longlong *data_ptr;
  uint counter_value;
  code *callback_func;
  bool processing_complete;
  byte device_status;
  char status_char;
  int operation_result;
  uint hash_index;
  longlong component_ptr;
  longlong list_ptr;
  ulonglong hash_value;
  code *device_callback;
  bool entry_found;
  undefined8 stack_param1;
  undefined4 stack_param2;
  undefined4 stack_param3;
  undefined2 stack_param4;
  undefined1 stack_param5;
  undefined4 stack_param6;
  undefined1 stack_param7;
  undefined8 stack_param8;
  longlong stack_param9;
  undefined8 stack_param10;
  undefined8 stack_param11;
  undefined4 stack_param12;
  undefined8 stack_param13;
  
  component_ptr = device_ptr;
  if ((*(byte *)(device_ptr + 0xfd) & 0x20) == 0) {
    component_ptr = func_0x000180085de0(*(undefined8 *)(device_ptr + 0x1b0));
  }
  list_ptr = *(longlong *)(device_ptr + 0x1b8);
  device_status = *(byte *)(list_ptr + 0x38c);
  if (device_status == 9) {
    device_status = func_0x00018022d300();  // 更新设备状态
    *(byte *)(list_ptr + 0x38c) = device_status;
  }
  
  // 检查设备状态是否需要特殊处理
  if ((*(longlong *)(component_ptr + 0x1e0) == 0) ||
     (((list_ptr = (ulonglong)device_status * 0x18,
       *(char *)(*(longlong *)(component_ptr + 0x1e0) + 0x15 + list_ptr) != '\x03' &&
       (*(char *)(*(longlong *)(component_ptr + 0x1e0) + 0x15 + list_ptr) != '\x04')) &&
      (*(char *)(*(longlong *)(component_ptr + 0x1e0) + list_ptr + 0x15) != '\x02')))) {
    *(int *)(context_ptr + 0x124e8) = *(int *)(context_ptr + 0x124e8) + 1;
  }
  else if (*(char *)(*(longlong *)(component_ptr + 0x1e0) + list_ptr + 0x15) != '\x04') {
    // 初始化栈参数
    stack_param1 = 0;
    stack_param2 = 0;
    stack_param3 = 0xffffffff;
    stack_param4 = 1;
    stack_param5 = 0;
    stack_param6 = 0xffffffff;
    stack_param7 = 1;
    stack_param8 = 0;
    stack_param9 = 0;
    stack_param10 = 0;
    stack_param11 = 0;
    stack_param12 = 3;
    stack_param13 = 0;
    
    // 执行设备操作
    operation_result = FUN_18022d470(*(undefined8 *)(device_ptr + 0x1b8), &stack_param1);
    if (operation_result < 1) {
      if (stack_param9 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      processing_complete = false;
      
      // 检查是否需要处理特殊标志
      if ((*(byte *)(device_ptr + 0xfd) & 8) != 0) {
        component_ptr = 0xb8;
        device_callback = (code *)&UNK_1802426a0;
        do {
          list_ptr = *(longlong *)(component_ptr + *(longlong *)(device_ptr + 0x1b8));
          if (((list_ptr != 0) && (component_ptr = *(longlong *)(list_ptr + 0x370), component_ptr != 0)) &&
             ((status_char = func_0x0001802434e0(), status_char != '\0' &&
              ((*(char *)(component_ptr + 0xde) != '\0' &&
               (processing_complete = true, (*(byte *)(context_ptr + 0x1bd8) & 0x20) != 0)))))) {
            callback_func = *(code **)(**(longlong **)(context_ptr + 0x3580) + 0xb8);
            if (callback_func == device_callback) {
              component_ptr = (*(longlong **)(context_ptr + 0x3580))[0xda];
            }
            else {
              component_ptr = (*callback_func)();
            }
            counter_ptr = (uint *)(component_ptr + 0x3f68);
            LOCK();
            counter_value = *counter_ptr;
            *counter_ptr = *counter_ptr + 1;
            UNLOCK();
            hash_index = counter_value >> 10;
            hash_value = (ulonglong)hash_index;
            
            // 检查是否需要分配新的哈希表项
            if (*(longlong *)(component_ptr + 0x3f70 + (ulonglong)hash_index * 8) == 0) {
              component_ptr = FUN_18062b420(_DAT_180c8ed18, 0x2000, 0x25);
              data_ptr = (longlong *)(component_ptr + 0x3f70 + hash_value * 8);
              LOCK();
              entry_found = *data_ptr == 0;
              if (entry_found) {
                *data_ptr = component_ptr;
              }
              UNLOCK();
              if (entry_found) {
                LOCK();
                *(undefined1 *)(hash_value + 0x48 + (longlong)counter_ptr) = 0;
                UNLOCK();
              }
              else {
                if (component_ptr != 0) {
                    // WARNING: Subroutine does not return
                  FUN_18064e900();
                }
                do {
                } while (*(char *)(hash_value + 0x48 + (longlong)counter_ptr) != '\0');
              }
            }
            else {
              do {
              } while (*(char *)(hash_value + 0x48 + (longlong)counter_ptr) != '\0');
            }
            
            // 插入哈希表项
            *(longlong *)
             (*(longlong *)(component_ptr + 0x3f70 + hash_value * 8) + (ulonglong)(counter_value + hash_index * -0x400) * 8)
                 = list_ptr;
            device_callback = (code *)&UNK_1802426a0;
          }
          component_ptr = component_ptr + 8;
        } while (component_ptr < 0x138);
        
        if (processing_complete) {
          return 0;
        }
      }
      
      *(byte *)(device_ptr + 0xfe) = *(byte *)(device_ptr + 0xfe) | 4;
      return 1;
    }
    
    if (stack_param9 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  return 0;
}