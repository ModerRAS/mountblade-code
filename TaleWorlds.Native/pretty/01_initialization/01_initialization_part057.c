#include "TaleWorlds.Native.Split.h"

// 01_initialization_part057.c - 对象管理和状态处理模块
// 本文件包含7个函数，主要处理对象状态管理、错误检查、数据处理等核心功能

/**
 * 验证对象数组的有效性
 * 功能: 检查对象数组中的每个元素是否有效，发现无效元素时触发错误处理
 * 参数: object_array - 对象数组指针
 * 注意: 如果发现任何非空对象，会调用错误处理函数并终止程序
 */
void ValidateObjectArray(longlong *object_array)

{
  longlong *current_object;
  
  // 遍历对象数组中的每个对象
  for (current_object = (longlong *)*object_array; current_object != (longlong *)object_array[1]; current_object = current_object + 4) {
    if (*current_object != 0) {
      // 发现无效对象，触发错误处理
      HandleMemoryAllocationError();
    }
  }
  // 检查对象数组本身是否为空
  if (*object_array == 0) {
    return;
  }
  // 对象数组不为空但包含无效对象，触发错误处理
  HandleMemoryAllocationError();
}

/**
 * 验证对象数组的完整性
 * 功能: 与ValidateObjectArray功能相同，确保对象数组的完整性
 * 参数: object_array - 对象数组指针
 * 注意: 这是ValidateObjectArray的重复实现，可能是为了代码冗余或不同调用场景
 */
void ValidateObjectArrayIntegrity(longlong *object_array)

{
  longlong *current_object;
  
  // 遍历对象数组中的每个对象进行验证
  for (current_object = (longlong *)*object_array; current_object != (longlong *)object_array[1]; current_object = current_object + 4) {
    if (*current_object != 0) {
      // 发现无效对象，触发错误处理
      HandleMemoryAllocationError();
    }
  }
  // 检查对象数组本身是否为空
  if (*object_array == 0) {
    return;
  }
  // 对象数组不为空但包含无效对象，触发错误处理
  HandleMemoryAllocationError();
}

/**
 * 处理对象状态转换
 * 功能: 检查并处理对象的状态转换逻辑，根据不同条件执行相应操作
 * 参数: object_context - 对象上下文指针
 * 返回值: 状态转换结果，0表示成功，1表示失败
 */
int8_t ProcessObjectStateTransition(longlong object_context)

{
  char state_flag;
  longlong state_manager;
  
  // 获取状态管理器引用
  state_manager = *(longlong *)(object_context + 0x1b8);
  state_flag = *(char *)(state_manager + 0x38c);
  // 检查是否需要状态重置
  if (state_flag == '\t') {
    state_flag = ResetStateFlags();
    *(char *)(state_manager + 0x38c) = state_flag;
  }
  // 执行状态转换处理
  state_flag = ExecuteStateTransition(object_context, object_context + 0x1e8, state_flag);
  if (state_flag == '\0') {
    // 状态转换成功，清除相关标志位
    *(byte *)(object_context + 0xfe) = *(byte *)(object_context + 0xfe) & 0xfb;
    return 0;
  }
  // 状态转换失败
  return 1;
}

// WARNING: Removing unreachable block (ram,0x00018007b857)
// WARNING: Removing unreachable block (ram,0x00018007b868)
// WARNING: Removing unreachable block (ram,0x00018007b879)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/**
 * 执行复杂的状态转换逻辑
 * 功能: 处理对象的状态转换、内存分配、数据初始化等复杂操作
 * 参数: object_context - 对象上下文
 *       state_manager - 状态管理器指针
 *       state_param - 状态参数
 *       transition_flag - 转换标志
 * 返回值: 转换结果的64位无符号整数
 */
ulonglong ExecuteStateTransition(longlong object_context, longlong *state_manager, byte state_param, char transition_flag)

{
  byte *status_flag;
  char processing_flag;
  int array_size;
  int buffer_size;
  byte allocation_flag;
  longlong current_context;
  uint64_t *memory_block;
  ulonglong result;
  uint64_t temp_var;
  longlong *object_ptr;
  longlong *temp_ptr;
  longlong *current_ptr;
  int32_t size_param;
  longlong *stack_ptr;
  longlong *stack_var1;
  longlong *stack_var2;
  longlong *stack_var3;
  longlong *stack_var4;
  longlong *stack_var5;
  longlong *stack_var6;
  longlong *stack_var7;
  int8_t stack_buffer1 [8];
  longlong stack_var8;
  int32_t stack_var9;
  longlong *stack_var10;
  longlong stack_var11;
  int32_t stack_var12;
  longlong *stack_array [2];
  code *callback_func;
  void *stack_ptr1;
  uint64_t stack_var13;
  longlong *stack_var14;
  longlong *stack_var15;
  longlong *stack_var16;
  
  stack_var13 = 0xfffffffffffffffe;
  // 遍历对象链表，查找有效的处理对象
  while ((current_context = object_context, (*(byte *)(object_context + 0xfd) & 0x20) == 0 &&
         (current_context = GetNextObjectInChain(*(uint64_t *)(object_context + 0x1b0)), current_context != object_context))) {
    if ((transition_flag != '\0') ||
       (status_flag = (byte *)(object_context + 0x100), object_context = current_context, (*status_flag & 8) != 0)) {
      transition_flag = '\x01';
      object_context = current_context;
    }
  }
  // 检查对象是否处于处理状态
  if ((*(byte *)(object_context + 0x100) & 8) != 0) {
    transition_flag = '\x01';
  }
  // 初始化对象管理器
  InitializeObjectManager(object_context);
  object_ptr = (longlong *)(*(longlong *)(current_context + 0x1e0) + (ulonglong)state_param * 0x18);
  // 检查状态管理器是否需要更新
  if ((longlong *)*state_manager != object_ptr) {
    if ((longlong *)*state_manager != (longlong *)0x0) {
      ReleaseStateManagerResources();
    }
    *state_manager = (longlong)object_ptr;
    if (object_ptr != (longlong *)0x0) {
      AcquireThreadLock();
      *(int *)(object_ptr + 2) = (int)object_ptr[2] + 1;
      ReleaseThreadLock();
    }
    // 清除处理完成标志
    if (state_manager[1] != 0) {
      status_flag = (byte *)(state_manager[1] + 0xfe);
      *status_flag = *status_flag & 0xfb;
    }
  }
  // 检查并设置对象处理状态
  AcquireThreadLock();
  allocation_flag = *(char *)((longlong)object_ptr + 0x15) == '\0';
  if (allocation_flag) {
    *(char *)((longlong)object_ptr + 0x15) = '\x01';
  }
  ReleaseThreadLock();
  if (!allocation_flag) goto LAB_18007b8fd;
  current_context = object_context;
  if ((*(byte *)(object_context + 0xfd) & 0x20) == 0) {
    current_context = GetNextObjectInChain(*(uint64_t *)(object_context + 0x1b0));
  }
  // 检查数组大小是否有效
  if (*(int *)(current_context + 0x200) < 1) {
    AcquireThreadLock();
    if (*(char *)((longlong)object_ptr + 0x15) == '\x01') {
      *(char *)((longlong)object_ptr + 0x15) = '\x03';
    }
    ReleaseThreadLock();
    goto LAB_18007b8fd;
  }
  // 初始化对象的主要数据结构
  if (*object_ptr == 0) {
    memory_block = (uint64_t *)AllocateMemory(GLOBAL_MEMORY_POOL, 0x28, 8, 0x20);
    *memory_block = &VIRTUAL_TABLE_OBJECT;
    *memory_block = &VIRTUAL_TABLE_OBJECT_HANDLER;
    *(int32_t *)(memory_block + 1) = 0;
    *memory_block = &VIRTUAL_TABLE_INITIALIZER;
    AcquireThreadLock();
    *(int8_t *)(memory_block + 2) = 0;
    ReleaseThreadLock();
    AcquireThreadLock();
    *(int32_t *)((longlong)memory_block + 0x14) = 0;
    ReleaseThreadLock();
    memory_block[3] = 0;
    memory_block[4] = object_context;
    InitializeObjectDataStructure(object_ptr);
  }
  // 初始化对象的辅助数据结构
  if (object_ptr[1] == 0) {
    memory_block = (uint64_t *)AllocateMemory(GLOBAL_MEMORY_POOL, 0x20, 8, 0x20);
    *memory_block = &VIRTUAL_TABLE_OBJECT;
    *memory_block = &VIRTUAL_TABLE_OBJECT_HANDLER;
    *(int32_t *)(memory_block + 1) = 0;
    *memory_block = &VIRTUAL_TABLE_ACCESSOR;
    AcquireThreadLock();
    *(int32_t *)(memory_block + 2) = 0;
    ReleaseThreadLock();
    memory_block[3] = 0;
    InitializeObjectDataStructure(object_ptr + 1);
  }
  // 执行对象处理的主要逻辑
  stack_var12 = 1;
  stack_var11 = object_context;
  PrepareObjectProcessing(&stack_var11);
  current_context = *(longlong *)(object_context + 0x210);
  if (current_context == 0) {
LAB_18007b44a:
    if (*(longlong *)(object_context + 0xa8) == 0) {
LAB_18007b454:
      AcquireThreadLock();
      *(int8_t *)((longlong)object_ptr + 0x15) = 4;
      ReleaseThreadLock();
      result = FinalizeObjectProcessing(&stack_var11);
      return result & 0xffffffffffffff00;
    }
  }
  else {
    if (*(int *)(current_context + 0x60) == 0) goto LAB_18007b454;
    if (current_context == 0) goto LAB_18007b44a;
  }
  // 分配并初始化处理缓冲区
  temp_var = AllocateMemory(GLOBAL_MEMORY_POOL, 0xa0, 8, 0x20);
  temp_ptr = (longlong *)CreateProcessingBuffer(temp_var);
  stack_var16 = temp_ptr;
  if (temp_ptr != (longlong *)0x0) {
    (**(code **)(*temp_ptr + 0x28))(temp_ptr);
  }
  current_context = object_context;
  if ((*(byte *)(object_context + 0xfd) & 0x20) == 0) {
    current_context = GetNextObjectInChain(*(uint64_t *)(object_context + 0x1b0));
  }
  *(int32_t *)(temp_ptr + 2) = *(int32_t *)(current_context + 0x200);
  *(byte *)(temp_ptr + 0x13) =
       *(byte *)(temp_ptr + 0x13) ^ (*(byte *)(object_context + 0xfe) >> 1 ^ *(byte *)(temp_ptr + 0x13)) & 1;
  *(byte *)((longlong)temp_ptr + 0x14) = state_param;
  processing_flag = *(char *)(object_context + 0xfa);
  *(char *)((longlong)temp_ptr + 0x15) = processing_flag;
  if (processing_flag == '\x01') {
    transition_flag = '\x01';
  }
  // 创建并初始化辅助处理对象
  current_ptr = (longlong *)AllocateMemory(GLOBAL_MEMORY_POOL, 0x30, 8, 0x20);
  *current_ptr = (longlong)&VIRTUAL_TABLE_OBJECT;
  *current_ptr = (longlong)&VIRTUAL_TABLE_OBJECT_HANDLER;
  *(int32_t *)(current_ptr + 1) = 0;
  *current_ptr = (longlong)&VIRTUAL_TABLE_PROCESSOR;
  current_ptr[4] = 0;
  current_ptr[2] = 0;
  *(byte *)(current_ptr + 5) = *(byte *)(current_ptr + 5) | 1;
  stack_var15 = current_ptr;
  (**(code **)(*current_ptr + 0x28))(current_ptr);
  allocation_flag = *(byte *)(object_context + 0xfd) & 0x20;
  current_context = object_context;
  if (allocation_flag == 0) {
    current_context = GetNextObjectInChain(*(uint64_t *)(object_context + 0x1b0));
  }
  array_size = *(int *)(current_context + 0x200);
  current_context = object_context;
  if (allocation_flag == 0) {
    current_context = GetNextObjectInChain(*(uint64_t *)(object_context + 0x1b0));
  }
  buffer_size = *(int *)(current_context + 0x1fc);
  size_param = 2;
  if (0xffff < array_size) {
    size_param = 4;
  }
  *(byte *)(current_ptr + 5) =
       *(byte *)(current_ptr + 5) ^ (*(byte *)(object_context + 0xfe) >> 1 ^ *(byte *)(current_ptr + 5)) & 1;
  *(int32_t *)((longlong)current_ptr + 0x14) = size_param;
  *(int *)(current_ptr + 2) = buffer_size * 3;
  *(int8_t *)(current_ptr + 3) = *(int8_t *)(object_context + 0xfa);
  // 根据条件选择不同的处理路径
  if ((*(longlong *)(object_context + 0xa8) == 0) || (*(longlong *)(object_context + 0x210) != 0)) {
    if (transition_flag == '\0') {
      temp_var = AllocateMemory(GLOBAL_MEMORY_POOL, 0xe0, 8, 3);
      (**(code **)(*temp_ptr + 0x28))(temp_ptr);
      (**(code **)(*current_ptr + 0x28))(current_ptr);
      callback_func = GetProcessingCallback;
      stack_ptr1 = &CALLBACK_DISPATCHER;
      stack_var7 = (longlong *)AllocateMemory(GLOBAL_MEMORY_POOL, 0x20, 8, DAT_180bf65bc);
      *stack_var7 = object_context;
      *(byte *)(stack_var7 + 1) = state_param;
      stack_var7[2] = (longlong)temp_ptr;
      stack_var7[3] = (longlong)current_ptr;
      stack_array[0] = stack_var7;
      temp_ptr = (longlong *)CreateProcessingChain(temp_var, stack_array);
      stack_var6 = temp_ptr;
      stack_var16 = temp_ptr;
      temp_var = GLOBAL_DISPATCHER;
      if (temp_ptr != (longlong *)0x0) {
        (**(code **)(*temp_ptr + 0x28))(temp_ptr);
        temp_var = GLOBAL_DISPATCHER;
        (**(code **)(*temp_ptr + 0x28))(temp_ptr);
      }
      InitializeProcessingChain(temp_var, &stack_var6);
      if (temp_ptr != (longlong *)0x0) {
        current_context = *temp_ptr;
LAB_18007b8dc:
        (**(code **)(current_context + 0x38))(temp_ptr);
      }
    }
    else {
      stack_var2 = current_ptr;
      (**(code **)(*current_ptr + 0x28))(current_ptr);
      stack_var3 = temp_ptr;
      (**(code **)(*temp_ptr + 0x28))(temp_ptr);
      ProcessObjectWithFlags(object_context, state_param, &stack_var3, &stack_var2);
      stack_var4 = current_ptr;
      (**(code **)(*current_ptr + 0x28))(current_ptr);
      stack_var5 = temp_ptr;
      (**(code **)(*temp_ptr + 0x28))(temp_ptr);
      ProcessObjectExtended(object_context, state_param, &stack_var5, &stack_var4);
      FinalizeObjectProcessing(&stack_var11);
      if (*(char *)(object_context + 0xf4) == '\x01') {
        stack_var7 = (longlong *)0x0;
        stack_var10 = (longlong *)0x0;
        stack_buffer1[0] = 0;
        stack_var12 = 3;
        stack_var8 = object_context;
        ExecuteObjectProcessing(stack_buffer1);
        temp_ptr = stack_var10;
        stack_var10 = (longlong *)0x0;
        if (temp_ptr != (longlong *)0x0) {
          (**(code **)(*temp_ptr + 0x38))();
        }
        CleanupObjectProcessing(stack_buffer1);
        if (stack_var10 != (longlong *)0x0) {
          current_context = *stack_var10;
          temp_ptr = stack_var10;
          goto LAB_18007b8dc;
        }
      }
    }
  }
  else {
    stack_var1 = temp_ptr;
    (**(code **)(*temp_ptr + 0x28))(temp_ptr);
    stack_var14 = current_ptr;
    (**(code **)(*current_ptr + 0x28))(current_ptr);
    ProcessObjectDirect(object_context, state_param, &stack_var14, &stack_var1, transition_flag);
  }
  (**(code **)(*current_ptr + 0x38))(current_ptr);
  (**(code **)(*temp_ptr + 0x38))(temp_ptr);
  FinalizeObjectProcessing(&stack_var11);
LAB_18007b8fd:
  return (ulonglong)((byte)(*(char *)((longlong)object_ptr + 0x15) - 2U) < 2);
}

/**
 * 处理对象的多重状态转换
 * 功能: 对象的多重状态处理，包括初始化、执行和清理
 * 参数: object_data - 对象数据指针
 */
void ProcessObjectMultipleStates(longlong *object_data)

{
  longlong object_ref;
  longlong *state_handler1;
  longlong *state_handler2;
  longlong **handler_ptr1;
  longlong **handler_ptr2;
  uint64_t processing_flag;
  int8_t stack_buffer [8];
  longlong stack_var1;
  int32_t stack_var2;
  longlong *stack_var3;
  
  processing_flag = 0xfffffffffffffffe;
  object_ref = *object_data;
  handler_ptr1 = &state_handler1;
  state_handler1 = (longlong *)object_data[3];
  if (state_handler1 != (longlong *)0x0) {
    (**(code **)(*state_handler1 + 0x28))();
  }
  handler_ptr2 = &state_handler2;
  state_handler2 = (longlong *)object_data[2];
  if (state_handler2 != (longlong *)0x0) {
    (**(code **)(*state_handler2 + 0x28))();
  }
  ProcessObjectWithFlags(object_ref, (char)object_data[1], &state_handler2, &state_handler1, processing_flag);
  object_ref = *object_data;
  handler_ptr1 = &state_handler1;
  state_handler1 = (longlong *)object_data[3];
  if (state_handler1 != (longlong *)0x0) {
    (**(code **)(*state_handler1 + 0x28))();
  }
  handler_ptr2 = &state_handler2;
  state_handler2 = (longlong *)object_data[2];
  if (state_handler2 != (longlong *)0x0) {
    (**(code **)(*state_handler2 + 0x28))();
  }
  ProcessObjectExtended(object_ref, (char)object_data[1], &state_handler2, &state_handler1);
  stack_var1 = *object_data;
  if (*(char *)(stack_var1 + 0xf4) == '\x01') {
    state_handler1 = (longlong *)0x0;
    stack_var3 = (longlong *)0x0;
    stack_buffer[0] = 0;
    stack_var2 = 3;
    ExecuteObjectProcessing(stack_buffer);
    state_handler2 = stack_var3;
    state_handler1 = stack_var3;
    stack_var3 = (longlong *)0x0;
    if (state_handler2 != (longlong *)0x0) {
      (**(code **)(*state_handler2 + 0x38))();
    }
    CleanupObjectProcessing(stack_buffer);
    if (stack_var3 != (longlong *)0x0) {
      (**(code **)(*stack_var3 + 0x38))();
    }
  }
  return;
}

/**
 * 释放对象资源
 * 功能: 释放对象占用的资源，包括清理相关数据结构
 * 参数: object_ptr - 对象指针
 */
void ReleaseObjectResources(longlong object_ptr)

{
  // 释放主要资源
  if (*(longlong **)(object_ptr + 0x18) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(object_ptr + 0x18) + 0x38))();
  }
  // 释放辅助资源
  if (*(longlong **)(object_ptr + 0x10) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(object_ptr + 0x10) + 0x38))();
  }
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/**
 * 初始化对象管理器
 * 功能: 为对象管理器分配必要的内存空间并进行初始化
 * 参数: object_context - 对象上下文
 */
void InitializeObjectManager(longlong object_context)

{
  uint64_t manager_memory;
  
  // 检查管理器是否已经初始化
  if (*(longlong *)(object_context + 0x1e0) == 0) {
    manager_memory = AllocateMemory(GLOBAL_MEMORY_POOL, 0x180, 8, 0x1c);
    // 初始化内存空间
    memset(manager_memory, 0, 0x180);
  }
  return;
}

/**
 * 清理对象管理器资源
 * 功能: 清理对象管理器占用的资源，包括释放相关数据结构
 * 参数: object_manager - 对象管理器指针
 */
void CleanupObjectManagerResources(longlong *object_manager)

{
  // 清理辅助对象
  if ((longlong *)object_manager[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)object_manager[1] + 0x38))();
  }
  // 清理主要对象
  if ((longlong *)*object_manager != (longlong *)0x0) {
    (**(code **)(*(longlong *)*object_manager + 0x38))();
  }
  return;
}

// WARNING: Removing unreachable block (ram,0x00018007c17d)
// WARNING: Removing unreachable block (ram,0x00018007c188)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/**
 * 执行对象的完整复制操作
 * 功能: 在对象之间执行完整的属性复制和状态同步
 * 参数: target_object - 目标对象
 *       source_object - 源对象（可为空）
 *       template_object - 模板对象
 */
void ExecuteObjectCopyOperation(longlong target_object, longlong source_object, longlong template_object)

{
  int bit_index;
  int32_t flag1;
  int32_t flag2;
  int32_t flag3;
  uint64_t temp_var;
  longlong *ptr1;
  longlong context1;
  longlong *ptr2;
  uint64_t *memory_block;
  uint *flag_ptr;
  uint source_flags;
  uint template_flags;
  void *data_ptr;
  uint mask_result;
  uint bit_mask;
  ulonglong operation_result;
  uint temp_flag1;
  uint temp_flag2;
  int8_t stack_buffer [32];
  uint64_t stack_var1;
  longlong *stack_var2;
  uint64_t stack_var3;
  longlong *stack_var4;
  longlong stack_var5;
  ulonglong stack_var6;
  
  stack_var1 = 0xfffffffffffffffe;
  stack_var6 = GLOBAL_CHECKSUM ^ (ulonglong)stack_buffer;
  // 复制向量数据（如果源对象不存在或与目标对象数据相同）
  if ((source_object == 0) ||
     (((*(float *)(target_object + 0x238) == *(float *)(source_object + 0x44) &&
       (*(float *)(target_object + 0x23c) == *(float *)(source_object + 0x48))) &&
      (*(float *)(target_object + 0x240) == *(float *)(source_object + 0x4c))))) {
    temp_var = *(uint64_t *)(template_object + 0x4c);
    *(uint64_t *)(target_object + 0x238) = *(uint64_t *)(template_object + 0x44);
    *(uint64_t *)(target_object + 0x240) = temp_var;
  }
  // 复制第二组向量数据
  if ((source_object == 0) ||
     (((*(float *)(target_object + 0x248) == *(float *)(source_object + 0x54) &&
       (*(float *)(target_object + 0x24c) == *(float *)(source_object + 0x58))) &&
      (*(float *)(target_object + 0x250) == *(float *)(source_object + 0x5c))))) {
    temp_var = *(uint64_t *)(template_object + 0x5c);
    *(uint64_t *)(target_object + 0x248) = *(uint64_t *)(template_object + 0x54);
    *(uint64_t *)(target_object + 0x250) = temp_var;
  }
  // 复制第三组向量数据
  if ((source_object == 0) ||
     (((*(float *)(target_object + 0x2a8) == *(float *)(source_object + 100) &&
       (*(float *)(target_object + 0x2ac) == *(float *)(source_object + 0x68))) &&
      (*(float *)(target_object + 0x2b0) == *(float *)(source_object + 0x6c))))) {
    temp_var = *(uint64_t *)(template_object + 0x6c);
    *(uint64_t *)(target_object + 0x2a8) = *(uint64_t *)(template_object + 100);
    *(uint64_t *)(target_object + 0x2b0) = temp_var;
  }
  // 复制第四组向量数据
  if ((source_object == 0) ||
     (((*(float *)(target_object + 0x2b8) == *(float *)(source_object + 0x74) &&
       (*(float *)(target_object + 700) == *(float *)(source_object + 0x78))) &&
      (*(float *)(target_object + 0x2c0) == *(float *)(source_object + 0x7c))))) {
    temp_var = *(uint64_t *)(template_object + 0x7c);
    *(uint64_t *)(target_object + 0x2b8) = *(uint64_t *)(template_object + 0x74);
    *(uint64_t *)(target_object + 0x2c0) = temp_var;
  }
  // 处理状态标志位
  if (source_object == 0) {
    *(int32_t *)(target_object + 0x100) = *(int32_t *)(template_object + 0x30);
  }
  else {
    // 逐位处理状态标志
    temp_flag2 = 1;
    source_flags = 2;
    do {
      flag_ptr = (uint *)(target_object + 0x100);
      bit_mask = *(uint *)(source_object + 0x30);
      template_flags = *(uint *)(template_object + 0x30);
      // 处理每个标志位
      if ((temp_flag2 & bit_mask) != (temp_flag2 & template_flags)) {
        if ((temp_flag2 & template_flags) == 0) {
          bit_mask = *(uint *)(target_object + 0x100) & ~(1 << (source_flags - 2 & 0x1f));
        }
        else {
          bit_mask = *flag_ptr | 1 << (source_flags - 2 & 0x1f);
        }
        *flag_ptr = bit_mask;
        bit_mask = *(uint *)(source_object + 0x30);
        template_flags = *(uint *)(template_object + 0x30);
      }
      mask_result = temp_flag2 << 1 & template_flags;
      if ((temp_flag2 << 1 & bit_mask) != mask_result) {
        if (mask_result == 0) {
          bit_mask = *flag_ptr & ~(1 << (source_flags - 1 & 0x1f));
        }
        else {
          bit_mask = *(uint *)(target_object + 0x100) | 1 << (source_flags - 1 & 0x1f);
        }
        *(uint *)(target_object + 0x100) = bit_mask;
        bit_mask = *(uint *)(source_object + 0x30);
        template_flags = *(uint *)(template_object + 0x30);
      }
      mask_result = temp_flag2 << 2 & template_flags;
      if ((temp_flag2 << 2 & bit_mask) != mask_result) {
        if (mask_result == 0) {
          bit_mask = *flag_ptr & ~(1 << (source_flags & 0x1f));
        }
        else {
          bit_mask = *(uint *)(target_object + 0x100) | 1 << (source_flags & 0x1f);
        }
        *(uint *)(target_object + 0x100) = bit_mask;
        bit_mask = *(uint *)(source_object + 0x30);
        template_flags = *(uint *)(template_object + 0x30);
      }
      mask_result = temp_flag2 << 3 & template_flags;
      if ((temp_flag2 << 3 & bit_mask) != mask_result) {
        if (mask_result == 0) {
          bit_mask = *flag_ptr & ~(1 << (source_flags + 1 & 0x1f));
        }
        else {
          bit_mask = *(uint *)(target_object + 0x100) | 1 << (source_flags + 1 & 0x1f);
        }
        *(uint *)(target_object + 0x100) = bit_mask;
        bit_mask = *(uint *)(source_object + 0x30);
        template_flags = *(uint *)(template_object + 0x30);
      }
      mask_result = temp_flag2 << 4 & template_flags;
      if ((temp_flag2 << 4 & bit_mask) != mask_result) {
        if (mask_result == 0) {
          bit_mask = *flag_ptr & ~(1 << (source_flags + 2 & 0x1f));
        }
        else {
          bit_mask = *(uint *)(target_object + 0x100) | 1 << (source_flags + 2 & 0x1f);
        }
        *(uint *)(target_object + 0x100) = bit_mask;
        bit_mask = *(uint *)(source_object + 0x30);
        template_flags = *(uint *)(template_object + 0x30);
      }
      mask_result = temp_flag2 << 5 & template_flags;
      if ((temp_flag2 << 5 & bit_mask) != mask_result) {
        if (mask_result == 0) {
          *flag_ptr = *flag_ptr & ~(1 << (source_flags + 3 & 0x1f));
          bit_mask = *(uint *)(source_object + 0x30);
          template_flags = *(uint *)(template_object + 0x30);
        }
        else {
          *(uint *)(target_object + 0x100) = *(uint *)(target_object + 0x100) | 1 << (source_flags + 3 & 0x1f);
          bit_mask = *(uint *)(source_object + 0x30);
          template_flags = *(uint *)(template_object + 0x30);
        }
      }
      flag_ptr = (uint *)(target_object + 0x100);
      mask_result = temp_flag2 << 6 & template_flags;
      if ((temp_flag2 << 6 & bit_mask) != mask_result) {
        if (mask_result == 0) {
          bit_mask = *flag_ptr & ~(1 << (source_flags + 4 & 0x1f));
        }
        else {
          bit_mask = *(uint *)(target_object + 0x100) | 1 << (source_flags + 4 & 0x1f);
        }
        *flag_ptr = bit_mask;
        bit_mask = *(uint *)(source_object + 0x30);
        template_flags = *(uint *)(template_object + 0x30);
      }
      mask_result = temp_flag2 << 7 & template_flags;
      if ((temp_flag2 << 7 & bit_mask) != mask_result) {
        if (mask_result == 0) {
          bit_mask = *flag_ptr & ~(1 << (source_flags + 5 & 0x1f));
        }
        else {
          bit_mask = *(uint *)(target_object + 0x100) | 1 << (source_flags + 5 & 0x1f);
        }
        *(uint *)(target_object + 0x100) = bit_mask;
        bit_mask = *(uint *)(source_object + 0x30);
        template_flags = *(uint *)(template_object + 0x30);
      }
      mask_result = temp_flag2 << 8 & template_flags;
      if ((temp_flag2 << 8 & bit_mask) != mask_result) {
        if (mask_result == 0) {
          bit_mask = *flag_ptr & ~(1 << (source_flags + 6 & 0x1f));
        }
        else {
          bit_mask = *(uint *)(target_object + 0x100) | 1 << (source_flags + 6 & 0x1f);
        }
        *(uint *)(target_object + 0x100) = bit_mask;
        bit_mask = *(uint *)(source_object + 0x30);
        template_flags = *(uint *)(template_object + 0x30);
      }
      mask_result = temp_flag2 << 9 & template_flags;
      if ((temp_flag2 << 9 & bit_mask) != mask_result) {
        if (mask_result == 0) {
          bit_mask = *flag_ptr & ~(1 << (source_flags + 7 & 0x1f));
        }
        else {
          bit_mask = *(uint *)(target_object + 0x100) | 1 << (source_flags + 7 & 0x1f);
        }
        *(uint *)(target_object + 0x100) = bit_mask;
        bit_mask = *(uint *)(source_object + 0x30);
        template_flags = *(uint *)(template_object + 0x30);
      }
      mask_result = temp_flag2 << 10 & template_flags;
      if ((temp_flag2 << 10 & bit_mask) != mask_result) {
        if (mask_result == 0) {
          bit_mask = *flag_ptr & ~(1 << (source_flags + 8 & 0x1f));
        }
        else {
          bit_mask = *(uint *)(target_object + 0x100) | 1 << (source_flags + 8 & 0x1f);
        }
        *(uint *)(target_object + 0x100) = bit_mask;
        bit_mask = *(uint *)(source_object + 0x30);
        template_flags = *(uint *)(template_object + 0x30);
      }
      template_flags = temp_flag2 << 0xb & template_flags;
      if ((temp_flag2 << 0xb & bit_mask) != template_flags) {
        if (template_flags == 0) {
          bit_mask = *flag_ptr & ~(1 << (source_flags + 9 & 0x1f));
        }
        else {
          bit_mask = *(uint *)(target_object + 0x100) | 1 << (source_flags + 9 & 0x1f);
        }
        *(uint *)(target_object + 0x100) = bit_mask;
      }
      bit_mask = temp_flag2 << 0xc & *(uint *)(template_object + 0x30);
      if ((temp_flag2 << 0xc & *(uint *)(source_object + 0x30)) != bit_mask) {
        if (bit_mask == 0) {
          bit_mask = *(uint *)(target_object + 0x100) & ~(1 << (source_flags + 10 & 0x1f));
        }
        else {
          bit_mask = *(uint *)(target_object + 0x100) | 1 << (source_flags + 10 & 0x1f);
        }
        *(uint *)(target_object + 0x100) = bit_mask;
      }
      bit_mask = temp_flag2 << 0xd & *(uint *)(template_object + 0x30);
      if ((temp_flag2 << 0xd & *(uint *)(source_object + 0x30)) != bit_mask) {
        if (bit_mask == 0) {
          bit_mask = *(uint *)(target_object + 0x100) & ~(1 << (source_flags + 0xb & 0x1f));
        }
        else {
          bit_mask = *(uint *)(target_object + 0x100) | 1 << (source_flags + 0xb & 0x1f);
        }
        *(uint *)(target_object + 0x100) = bit_mask;
      }
      bit_mask = temp_flag2 << 0xe & *(uint *)(template_object + 0x30);
      if ((temp_flag2 << 0xe & *(uint *)(source_object + 0x30)) != bit_mask) {
        flag_ptr = (uint *)(target_object + 0x100);
        if (bit_mask == 0) {
          *flag_ptr = *flag_ptr & ~(1 << (source_flags + 0xc & 0x1f));
        }
        else {
          *flag_ptr = *flag_ptr | 1 << (source_flags + 0xc & 0x1f);
        }
      }
      bit_mask = temp_flag2 << 0xf & *(uint *)(template_object + 0x30);
      if ((temp_flag2 << 0xf & *(uint *)(source_object + 0x30)) != bit_mask) {
        if (bit_mask == 0) {
          bit_mask = *(uint *)(target_object + 0x100) & ~(1 << (source_flags + 0xd & 0x1f));
        }
        else {
          bit_mask = *(uint *)(target_object + 0x100) | 1 << (source_flags + 0xd & 0x1f);
        }
        *(uint *)(target_object + 0x100) = bit_mask;
      }
      temp_flag2 = temp_flag2 << 0x10 | temp_flag2 >> 0x10;
      bit_index = source_flags + 0xe;
      source_flags = source_flags + 0x10;
    } while (bit_index < 0x20);
  }
  // 复制其他属性数据
  *(int32_t *)(target_object + 0x208) = *(int32_t *)(template_object + 0x84);
  *(int32_t *)(target_object + 0x1f8) = *(int32_t *)(template_object + 0x88);
  *(int32_t *)(target_object + 0x1fc) = *(int32_t *)(template_object + 0x8c);
  *(int32_t *)(target_object + 0x200) = *(int32_t *)(template_object + 0x90);
  *(int32_t *)(target_object + 0x204) = *(int32_t *)(template_object + 0x94);
  temp_var = *(uint64_t *)(template_object + 0xa0);
  *(uint64_t *)(target_object + 0x274) = *(uint64_t *)(template_object + 0x98);
  *(uint64_t *)(target_object + 0x27c) = temp_var;
  temp_var = *(uint64_t *)(template_object + 0xb0);
  *(uint64_t *)(target_object + 0x284) = *(uint64_t *)(template_object + 0xa8);
  *(uint64_t *)(target_object + 0x28c) = temp_var;
  flag1 = *(int32_t *)(template_object + 0xbc);
  flag2 = *(int32_t *)(template_object + 0xc0);
  flag3 = *(int32_t *)(template_object + 0xc4);
  *(int32_t *)(target_object + 0x294) = *(int32_t *)(template_object + 0xb8);
  *(int32_t *)(target_object + 0x298) = flag1;
  *(int32_t *)(target_object + 0x29c) = flag2;
  *(int32_t *)(target_object + 0x2a0) = flag3;
  *(int32_t *)(target_object + 0x2a4) = *(int32_t *)(template_object + 200);
  stack_var4 = (longlong *)0x0;
  stack_var5 = 0;
  if (source_object != 0) {
    ptr1 = (longlong *)(source_object + 0x158);
    if ((*ptr1 == 0) && (*(longlong *)(source_object + 0x160) == 0)) {
      ptr1 = (longlong *)(source_object + 0x34);
    }
    stack_var4 = (longlong *)*ptr1;
    stack_var5 = ptr1[1];
  }
  stack_var3 = 0;
  ptr2 = (longlong *)(target_object + 0x1b8);
  stack_var2 = (longlong *)*ptr2;
  *ptr2 = 0;
  if (stack_var2 != (longlong *)0x0) {
    (**(code **)(*stack_var2 + 0x38))();
  }
  ptr1 = (longlong *)(template_object + 0x158);
  if ((*ptr1 == 0) && (*(longlong *)(template_object + 0x160) == 0)) {
    ptr1 = (longlong *)(template_object + 0x34);
  }
  context1 = CreateObjectReference(*(uint64_t *)(target_object + 0xa8), &GLOBAL_OBJECT_FACTORY, ptr1);
  if (context1 != 0) {
    UpdateObjectReference(ptr2, context1 + 0xb0);
  }
  if (*ptr2 == 0) {
    data_ptr = &GLOBAL_ERROR_HANDLER;
    if (*(void **)(target_object + 0x18) != (void *)0x0) {
      data_ptr = *(void **)(target_object + 0x18);
    }
    RegisterErrorHandler(&GLOBAL_ERROR_DISPATCHER, data_ptr);
    ptr1 = (longlong *)CreateObjectLink(GLOBAL_LINK_MANAGER, &stack_var4, 0);
    context1 = *ptr1;
    *ptr1 = 0;
    stack_var2 = (longlong *)*ptr2;
    *ptr2 = context1;
    if (stack_var2 != (longlong *)0x0) {
      (**(code **)(*stack_var2 + 0x38))();
    }
    if (stack_var4 != (longlong *)0x0) {
      (**(code **)(*stack_var4 + 0x38))();
    }
  }
  FinalizeObjectInitialization(target_object);
  // 处理特殊对象属性
  if ((*(longlong *)(target_object + 600) == 0) &&
     ((*(uint *)(*(longlong *)(target_object + 0x1b8) + 0x388) >> 0x19 & 1) != 0)) {
    memory_block = (uint64_t *)AllocateMemory(GLOBAL_MEMORY_POOL, 0x58, 8, 0x1c);
    *(uint64_t *)((longlong)memory_block + 0x2c) = 0xffffffffffffffff;
    *(int32_t *)(memory_block + 9) = 0xffffffff;
    *memory_block = 0;
    memory_block[2] = 0;
    memory_block[7] = 0;
    *(int32_t *)(memory_block + 5) = 0xffffffff;
    *(int32_t *)(memory_block + 4) = 0xffffffff;
    memory_block[3] = 0;
    *(int32_t *)(memory_block + 8) = 0;
    *(int32_t *)(memory_block + 1) = 0;
    *(int8_t *)((longlong)memory_block + 0x44) = 0;
    *(int8_t *)((longlong)memory_block + 0x24) = 0;
    *(uint64_t **)(target_object + 600) = memory_block;
  }
  *(int8_t *)(target_object + 0xf6) = *(int8_t *)(template_object + 0xcc);
  // 处理数据引用
  if ((uint64_t *)(target_object + 0x218) != (uint64_t *)(template_object + 0xd0)) {
    CopyDataReference((uint64_t *)(target_object + 0x218), *(uint64_t *)(template_object + 0xd0),
                      *(uint64_t *)(template_object + 0xd8));
  }
  // 复制渲染相关属性
  *(int32_t *)(*(longlong *)(target_object + 0x268) + 0x10) = *(int32_t *)(template_object + 0xf0);
  *(int32_t *)(*(longlong *)(target_object + 0x268) + 0x14) = *(int32_t *)(template_object + 0x144);
  *(int8_t *)(*(longlong *)(target_object + 0x268) + 0x18) = *(int8_t *)(template_object + 0x148);
  *(int8_t *)(*(longlong *)(target_object + 0x268) + 0x19) = *(int8_t *)(template_object + 0x149);
  *(int8_t *)(*(longlong *)(target_object + 0x268) + 0x1a) = *(int8_t *)(template_object + 0x14a);
  *(int32_t *)(*(longlong *)(target_object + 0x268) + 0x44) = *(int32_t *)(template_object + 0x118);
  *(int32_t *)(*(longlong *)(target_object + 0x268) + 0x48) = *(int32_t *)(template_object + 0x11c);
  *(int32_t *)(*(longlong *)(target_object + 0x268) + 0x4c) = *(int32_t *)(template_object + 0x120);
  *(int32_t *)(*(longlong *)(target_object + 0x268) + 0x50) = *(int32_t *)(template_object + 0x124);
  *(int32_t *)(*(longlong *)(target_object + 0x268) + 0x54) = *(int32_t *)(template_object + 0x128);
  *(int32_t *)(*(longlong *)(target_object + 0x268) + 0x58) = *(int32_t *)(template_object + 300);
  *(int32_t *)(*(longlong *)(target_object + 0x268) + 0x5c) = *(int32_t *)(template_object + 0x130);
  *(int32_t *)(*(longlong *)(target_object + 0x268) + 0x60) = *(int32_t *)(template_object + 0x134);
  *(int32_t *)(*(longlong *)(target_object + 0x268) + 100) = *(int32_t *)(template_object + 0x138);
  *(int32_t *)(*(longlong *)(target_object + 0x268) + 0x68) = *(int32_t *)(template_object + 0x13c);
  *(int32_t *)(*(longlong *)(target_object + 0x268) + 0x6c) = *(int32_t *)(template_object + 0x140);
  context1 = *(longlong *)(target_object + 0x268);
  temp_flag1 = *(uint *)(template_object + 0x108);
  operation_result = (ulonglong)temp_flag1;
  if (*(longlong *)(template_object + 0x100) != 0) {
    InitializeDataBuffer(context1 + 0x20, operation_result);
  }
  if (temp_flag1 != 0) {
    // 复制数据缓冲区内容
    memcpy(*(uint64_t *)(context1 + 0x28), *(uint64_t *)(template_object + 0x100), temp_flag1);
  }
  *(int32_t *)(context1 + 0x30) = 0;
  if (*(longlong *)(context1 + 0x28) != 0) {
    *(int8_t *)(operation_result + *(longlong *)(context1 + 0x28)) = 0;
  }
  *(int32_t *)(context1 + 0x3c) = *(int32_t *)(template_object + 0x114);
  // 执行完整性检查
  ExecuteIntegrityCheck(stack_var6 ^ (ulonglong)stack_buffer);
}

