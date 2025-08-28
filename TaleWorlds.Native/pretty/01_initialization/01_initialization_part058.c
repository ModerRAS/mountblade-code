#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 01_initialization_part058.c - 4 个函数

// 函数: void FUN_18007c490(int64_t *param_1,byte param_2,int64_t *param_3,int64_t *param_4,char param_5)
// 功能: 复杂的资源管理和回调处理函数，处理资源初始化和清理
void FUN_18007c490(int64_t *param_1, byte param_2, int64_t *param_3, int64_t *param_4, char param_5)

{
  char *status_flag;
  int64_t *resource_1;
  int64_t *resource_2;
  int64_t *resource_3;
  int64_t *resource_4;
  code *callback_func;
  char operation_result;
  void *error_handler;
  int32_t stack_param_1;
  int32_t stack_param_2;
  int32_t stack_param_3;
  int32_t stack_param_4;
  code *cleanup_callback_1;
  void *cleanup_data_1;
  uint64_t context_data;
  int32_t flag_1;
  int32_t flag_2;
  int64_t *stack_resource_1;
  byte stack_byte_1;
  int64_t *stack_resource_2;
  int64_t *stack_resource_3;
  int64_t *stack_resource_4;
  byte stack_byte_2;
  int64_t *stack_resource_5;
  int64_t *stack_resource_6;
  uint64_t stack_data;
  int64_t **resource_pointer;
  int8_t stack_buffer_1 [16];
  code *cleanup_callback_2;
  int8_t stack_buffer_2 [16];
  code *cleanup_callback_3;
  
  stack_data = 0xfffffffffffffffe;
  resource_1 = (int64_t *)*param_4;
  if (resource_1 != (int64_t *)0x0) {
    (**(code **)(*resource_1 + 0x28))(resource_1);
  }
  resource_2 = (int64_t *)*param_3;
  if (resource_2 != (int64_t *)0x0) {
    (**(code **)(*resource_2 + 0x28))(resource_2);
  }
  flag_1 = CONCAT31(flag_1._1_3_, param_2);
  context_data = param_1;
  
  // 根据资源类型进行不同的初始化
  if ((void *)*param_1 == &unknown_var_7328_ptr) {
    LOCK();
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    UNLOCK();
  }
  else {
    (**(code **)((void *)*param_1 + 0x28))(param_1);
  }
  
  // 根据操作参数执行不同的处理路径
  if (param_5 == '\0') {
    resource_3 = *(int64_t **)(param_1[0x15] + 0x88);
    callback_func = *(code **)(*resource_3 + 0x70);
    cleanup_callback_1 = (code *)&unknown_var_7904_ptr;
    cleanup_data_1 = &unknown_var_7888_ptr;
    stack_param_1 = (int32_t)context_data;
    stack_param_2 = context_data._4_4_;
    stack_param_3 = flag_1;
    stack_param_4 = flag_2;
    stack_resource_4 = param_1;
    stack_byte_2 = param_2;
    stack_resource_5 = resource_1;
    if (resource_1 != (int64_t *)0x0) {
      (**(code **)(*resource_1 + 0x28))(resource_1);
    }
    stack_resource_6 = resource_2;
    if (resource_2 != (int64_t *)0x0) {
      (**(code **)(*resource_2 + 0x28))(resource_2);
    }
    FUN_180081120(stack_buffer_2, &stack_resource_4);
    (*callback_func)(resource_3, &system_buffer_c768, param_1 + 0x17, 0, stack_buffer_2, &stack_param_1);
    if (cleanup_callback_3 != (code *)0x0) {
      (*cleanup_callback_3)(stack_buffer_2, 0, 0);
    }
    if (cleanup_callback_1 != (code *)0x0) {
      (*cleanup_callback_1)(&stack_param_1, 0, 0);
    }
  }
  else {
    resource_3 = *(int64_t **)(param_1[0x15] + 0x88);
    callback_func = *(code **)(*resource_3 + 0x60);
    resource_pointer = &stack_resource_1;
    stack_resource_1 = param_1;
    stack_byte_1 = param_2;
    stack_resource_2 = resource_1;
    if (resource_1 != (int64_t *)0x0) {
      (**(code **)(*resource_1 + 0x28))(resource_1);
    }
    stack_resource_3 = resource_2;
    if (resource_2 != (int64_t *)0x0) {
      (**(code **)(*resource_2 + 0x28))(resource_2);
    }
    FUN_180081120(stack_buffer_1, &stack_resource_1);
    operation_result = (*callback_func)(resource_3, &system_buffer_c768, param_1 + 0x17, 0, stack_buffer_1);
    if (cleanup_callback_2 != (code *)0x0) {
      (*cleanup_callback_2)(stack_buffer_1, 0, 0);
    }
    
    // 处理操作结果
    if (operation_result == '\0') {
      error_handler = &system_buffer_ptr;
      if ((void *)param_1[3] != (void *)0x0) {
        error_handler = (void *)param_1[3];
      }
      SystemDataInitializer(&unknown_var_5600_ptr, error_handler);
      status_flag = (char *)(param_1[0x3c] + 0x15 + (uint64_t)param_2 * 0x18);
      LOCK();
      if (*status_flag == '\x01') {
        *status_flag = '\x04';
      }
      UNLOCK();
      (**(code **)(*param_1 + 0x38))(param_1);
    }
  }
  
  // 清理资源
  if (resource_2 != (int64_t *)0x0) {
    (**(code **)(*resource_2 + 0x38))(resource_2);
  }
  if (resource_1 != (int64_t *)0x0) {
    (**(code **)(*resource_1 + 0x38))(resource_1);
  }
  if ((int64_t *)*param_3 != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)*param_3 + 0x38))();
  }
  if ((int64_t *)*param_4 != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)*param_4 + 0x38))();
  }
  return;
}



// 函数: void FUN_18007c790(int64_t *param_1)
// 功能: 简化的资源清理和状态更新函数
void FUN_18007c790(int64_t *param_1)

{
  char *status_flag;
  void *error_handler;
  
  error_handler = &system_buffer_ptr;
  if (*(void **)(*param_1 + 0x18) != (void *)0x0) {
    error_handler = *(void **)(*param_1 + 0x18);
  }
  SystemDataInitializer(&unknown_var_5600_ptr, error_handler);
  status_flag = (char *)(*(int64_t *)(*param_1 + 0x1e0) + 0x15 +
                   (uint64_t)*(byte *)(param_1 + 1) * 0x18);
  LOCK();
  if (*status_flag == '\x01') {
    *status_flag = '\x04';
  }
  UNLOCK();
  
  // WARNING: Could not recover jumptable at 0x00018007c7e6. Too many branches
  // WARNING: Treating indirect jump as call
  (**(code **)(*(int64_t *)*param_1 + 0x38))();
  return;
}



// 函数: uint64_t * FUN_18007c7f0(uint64_t *param_1,uint64_t *param_2)
// 功能: 资源复制和引用管理函数
uint64_t * FUN_18007c7f0(uint64_t *param_1, uint64_t *param_2)

{
  int64_t *resource_ref;
  
  // 复制基本数据
  *param_1 = *param_2;
  *(int8_t *)(param_1 + 1) = *(int8_t *)(param_2 + 1);
  
  // 处理第一个资源引用
  resource_ref = (int64_t *)param_2[2];
  param_1[2] = resource_ref;
  if (resource_ref != (int64_t *)0x0) {
    (**(code **)(*resource_ref + 0x28))();
  }
  
  // 处理第二个资源引用
  resource_ref = (int64_t *)param_2[3];
  param_1[3] = resource_ref;
  if (resource_ref != (int64_t *)0x0) {
    (**(code **)(*resource_ref + 0x28))();
  }
  
  return param_1;
}



// 函数: void FUN_18007c860(int64_t param_1,int8_t param_2)
// 功能: 条件性资源处理和状态更新函数
void FUN_18007c860(int64_t param_1, int8_t param_2)

{
  char operation_result;
  int64_t resource_data;
  
  resource_data = param_1;
  
  // 检查标志位并获取资源数据
  if ((*(byte *)(param_1 + 0xfd) & 0x20) == 0) {
    resource_data = func_0x000180085de0(*(uint64_t *)(param_1 + 0x1b0));
  }
  
  // 如果有有效的资源计数，进行处理
  if (0 < *(int *)(resource_data + 0x200)) {
    resource_data = *(int64_t *)(param_1 + 0x1b8);
    operation_result = *(char *)(resource_data + 0x38c);
    if (operation_result == '\t') {
      operation_result = func_0x00018022d300();
      *(char *)(resource_data + 0x38c) = operation_result;
    }
    operation_result = FUN_18007b240(param_1, param_1 + 0x1e8, operation_result, param_2);
    if (operation_result == '\0') {
      *(byte *)(param_1 + 0xfe) = *(byte *)(param_1 + 0xfe) & 0xfb;
    }
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00018007cad0)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: void FUN_18007c8e0(int64_t param_1,byte param_2,int64_t *param_3,int64_t *param_4)
// 功能: 线程安全的资源处理和状态管理函数
void FUN_18007c8e0(int64_t param_1, byte param_2, int64_t *param_3, int64_t *param_4)

{
  int64_t resource_offset;
  char *status_flag;
  int main_thread_id;
  int current_thread_id;
  uint64_t resource_data;
  int64_t *temp_resource;
  int64_t *stack_resource_1;
  int64_t *stack_resource_2;
  int64_t *stack_resource_3;
  int64_t **resource_pointer;
  int64_t stack_context;
  byte stack_byte_1;
  int64_t *stack_resource_4;
  int64_t *stack_resource_5;
  int64_t stack_data_1;
  byte stack_byte_2;
  int64_t *stack_resource_6;
  int64_t *stack_resource_7;
  int64_t *resource_array [2];
  code *callback_func_1;
  code *callback_func_2;
  uint64_t stack_data_2;
  int64_t *stack_resource_8;
  
  stack_data_2 = 0xfffffffffffffffe;
  main_thread_id = *(int *)(*(int64_t *)(*(int64_t *)(system_context_ptr + 8) + 8) + 0x48);
  current_thread_id = _Thrd_id();
  
  // 根据线程ID选择不同的处理路径
  if (current_thread_id == main_thread_id) {
    resource_offset = (uint64_t)param_2 * 0x18;
    resource_data = *(uint64_t *)(*(int64_t *)(param_1 + 0x1e0) + resource_offset);
    resource_pointer = &stack_resource_3;
    stack_resource_3 = (int64_t *)*param_3;
    if (stack_resource_3 != (int64_t *)0x0) {
      (**(code **)(*stack_resource_3 + 0x28))();
    }
    FUN_180255880(resource_data, &stack_resource_3);
    resource_data = *(uint64_t *)(*(int64_t *)(param_1 + 0x1e0) + 8 + resource_offset);
    resource_pointer = &stack_resource_1;
    stack_resource_1 = (int64_t *)*param_4;
    if (stack_resource_1 != (int64_t *)0x0) {
      (**(code **)(*stack_resource_1 + 0x28))();
    }
    FUN_180255b70(resource_data, &stack_resource_1);
    status_flag = (char *)(*(int64_t *)(param_1 + 0x1e0) + 0x15 + resource_offset);
    LOCK();
    if (*status_flag == '\x01') {
      *status_flag = '\x03';
    }
    UNLOCK();
  }
  else {
    // 非主线程处理路径
    resource_data = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr, 0x40, 8, 0x20);
    resource_pointer = resource_array;
    stack_resource_2 = &stack_context;
    stack_resource_4 = (int64_t *)*param_3;
    stack_context = param_1;
    stack_byte_1 = param_2;
    if (stack_resource_4 != (int64_t *)0x0) {
      (**(code **)(*stack_resource_4 + 0x28))();
    }
    stack_resource_5 = (int64_t *)*param_4;
    if (stack_resource_5 != (int64_t *)0x0) {
      (**(code **)(*stack_resource_5 + 0x28))();
    }
    stack_resource_2 = &stack_context;
    stack_data_1 = stack_context;
    stack_byte_2 = stack_byte_1;
    stack_resource_6 = stack_resource_4;
    stack_resource_4 = (int64_t *)0x0;
    stack_resource_7 = stack_resource_5;
    stack_resource_5 = (int64_t *)0x0;
    stack_resource_1 = &stack_data_1;
    callback_func_1 = FUN_180082e70;
    callback_func_2 = FUN_180082da0;
    stack_resource_3 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr, 0x20, 8, system_allocation_flags);
    *stack_resource_3 = stack_data_1;
    *(byte *)(stack_resource_3 + 1) = stack_byte_2;
    stack_resource_3[2] = (int64_t)stack_resource_6;
    stack_resource_3[3] = (int64_t)stack_resource_7;
    stack_resource_7 = (int64_t *)0x0;
    stack_resource_6 = (int64_t *)0x0;
    resource_array[0] = stack_resource_3;
    if (stack_resource_5 != (int64_t *)0x0) {
      (**(code **)(*stack_resource_5 + 0x38))();
    }
    if (stack_resource_4 != (int64_t *)0x0) {
      (**(code **)(*stack_resource_4 + 0x38))();
    }
    temp_resource = (int64_t *)FUN_18005c2a0(resource_data, resource_array);
    stack_resource_8 = temp_resource;
    if (temp_resource != (int64_t *)0x0) {
      (**(code **)(*temp_resource + 0x28))(temp_resource);
    }
    resource_pointer = &stack_resource_2;
    stack_resource_2 = temp_resource;
    if (temp_resource != (int64_t *)0x0) {
      (**(code **)(*temp_resource + 0x28))(temp_resource);
    }
    FUN_18005e370(system_context_ptr, &stack_resource_2);
    status_flag = (char *)(*(int64_t *)(param_1 + 0x1e0) + 0x15 + (uint64_t)param_2 * 0x18);
    LOCK();
    if (*status_flag == '\x01') {
      *status_flag = '\x02';
    }
    UNLOCK();
    if (temp_resource != (int64_t *)0x0) {
      (**(code **)(*temp_resource + 0x38))(temp_resource);
    }
  }
  
  // 清理资源
  if ((int64_t *)*param_3 != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)*param_3 + 0x38))();
  }
  if ((int64_t *)*param_4 != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)*param_4 + 0x38))();
  }
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address