#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 01_initialization_part017.c - 初始化系统 - 32 个函数

// 函数: void Cleanup_Resource_Chain(int64_t context, uint64_t param_2, uint64_t param_3, uint64_t param_4)
// 清理资源链表
void Cleanup_Resource_Chain(int64_t context, uint64_t param_2, uint64_t param_3, uint64_t param_4)
{
  uint64_t *resource_ptr;
  
  resource_ptr = *(uint64_t **)(context + 0x10);
  if (resource_ptr != (uint64_t *)0x0) {
    FUN_18004b790(context, *resource_ptr, param_3, param_4, 0xfffffffffffffffe);
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(resource_ptr);
  }
  return;
}





// 函数: void Recursive_Resource_Cleanup(uint64_t context, uint64_t *resource_ptr)
// 递归清理资源
void Recursive_Resource_Cleanup(uint64_t context, uint64_t *resource_ptr)
{
  if (resource_ptr != (uint64_t *)0x0) {
    FUN_18004b790(context, *resource_ptr);
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(resource_ptr);
  }
  return;
}





// 函数: void Cleanup_Resource_List(uint64_t context)
// 清理资源列表
void Cleanup_Resource_List(uint64_t context)
{
  uint64_t *unaff_RBX;
  
  FUN_18004b790(context, *unaff_RBX);
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}





// 函数: void Empty_Function(void)
// 空函数 - 占位符
void Empty_Function(void)
{
  return;
}



// 函数: uint64_t * Initialize_VTable_Pointer_A(uint64_t *vtable, uint64_t flags)
// 初始化虚表指针A
uint64_t * Initialize_VTable_Pointer_A(uint64_t *vtable, uint64_t flags)
{
  *vtable = &unknown_var_3528_ptr;
  if ((flags & 1) != 0) {
    free(vtable, 8);
  }
  return vtable;
}



// 函数: uint64_t * Initialize_VTable_Pointer_B(uint64_t *vtable, uint64_t flags)
// 初始化虚表指针B
uint64_t * Initialize_VTable_Pointer_B(uint64_t *vtable, uint64_t flags)
{
  *vtable = &system_handler1_ptr;
  if ((flags & 1) != 0) {
    free(vtable, 8);
  }
  return vtable;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void Format_String_To_Buffer(int64_t buffer_context, uint64_t format_str, uint64_t param_3, uint64_t param_4)
// 格式化字符串到缓冲区
void Format_String_To_Buffer(int64_t buffer_context, uint64_t format_str, uint64_t param_3, uint64_t param_4)
{
  int64_t str_length;
  int buffer_available;
  uint64_t *printf_func;
  int64_t char_index;
  uint64_t formatted_param_3;
  uint64_t formatted_param_4;
  int8_t auStack_78 [32];
  uint64_t buffer_size;
  uint64_t *buffer_ptr;
  char formatted_string [32];
  uint64_t stack_cookie;
  
  stack_cookie = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_78;
  formatted_param_3 = param_3;
  formatted_param_4 = param_4;
  printf_func = (uint64_t *)func_0x00018004b9a0();
  buffer_size = 0;
  buffer_ptr = &formatted_param_3;
  __stdio_common_vsprintf(*printf_func | 1, formatted_string, 0x20, format_str);
  str_length = -1;
  do {
    char_index = str_length;
    str_length = char_index + 1;
  } while (formatted_string[char_index + 1] != '\0');
  buffer_available = (int)(char_index + 1);
  if ((0 < buffer_available) && (*(uint *)(buffer_context + 0x10) + buffer_available < 0x1f)) {
                    // WARNING: Subroutine does not return
    memcpy((uint64_t)*(uint *)(buffer_context + 0x10) + *(int64_t *)(buffer_context + 8), formatted_string,
           (int64_t)((int)char_index + 2));
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(stack_cookie ^ (uint64_t)auStack_78);
}



// 函数: uint64_t * Initialize_VTable_Pointer_C(uint64_t *vtable, uint64_t flags)
// 初始化虚表指针C
uint64_t * Initialize_VTable_Pointer_C(uint64_t *vtable, uint64_t flags)
{
  *vtable = &unknown_var_3616_ptr;
  if ((flags & 1) != 0) {
    free(vtable, 8);
  }
  return vtable;
}



// 函数: uint64_t * Initialize_VTable_Pointer_D(uint64_t *vtable, uint64_t flags)
// 初始化虚表指针D
uint64_t * Initialize_VTable_Pointer_D(uint64_t *vtable, uint64_t flags)
{
  *vtable = &unknown_var_3672_ptr;
  if ((flags & 1) != 0) {
    free(vtable, 8);
  }
  return vtable;
}



// 函数: int Safe_VSprintf(uint64_t buffer, uint64_t format, uint64_t param_3, uint64_t param_4)
// 安全的格式化字符串输出
int Safe_VSprintf(uint64_t buffer, uint64_t format, uint64_t param_3, uint64_t param_4)
{
  int result;
  uint64_t *printf_func;
  
  printf_func = (uint64_t *)func_0x00018004b9a0();
  result = __stdio_common_vsprintf(*printf_func | 1, buffer, format, param_3, 0, param_4);
  if (result < 0) {
    result = -1;
  }
  return result;
}





// 函数: void Process_Resource_Type_A(int64_t resource_context, uint64_t param_2, uint64_t param_3, uint64_t param_4)
// 处理资源类型A
void Process_Resource_Type_A(int64_t resource_context, uint64_t param_2, uint64_t param_3, uint64_t param_4)
{
  FUN_1800582b0(resource_context, *(uint64_t *)(resource_context + 0x10), param_3, param_4, 0xfffffffffffffffe);
  return;
}





// 函数: void Process_Resource_Type_B(int64_t resource_context, uint64_t param_2, uint64_t param_3, uint64_t param_4)
// 处理资源类型B
void Process_Resource_Type_B(int64_t resource_context, uint64_t param_2, uint64_t param_3, uint64_t param_4)
{
  FUN_1800582b0(resource_context, *(uint64_t *)(resource_context + 0x10), param_3, param_4, 0xfffffffffffffffe);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void Unlock_Global_Mutex(uint64_t *resource_ptr)
// 解锁全局互斥锁
void Unlock_Global_Mutex(uint64_t *resource_ptr)
{
  int unlock_result;
  
  SYSTEM_DATA_MANAGER_A = *resource_ptr;
  unlock_result = _Mtx_unlock(0x180c91970);
  if (unlock_result != 0) {
    __Throw_C_error_std__YAXH_Z(unlock_result);
  }
  return;
}





// 函数: void Process_Resource_Type_C(int64_t resource_context, uint64_t param_2, uint64_t param_3, uint64_t param_4)
// 处理资源类型C
void Process_Resource_Type_C(int64_t resource_context, uint64_t param_2, uint64_t param_3, uint64_t param_4)
{
  FUN_180058370(resource_context, *(uint64_t *)(resource_context + 0x10), param_3, param_4, 0xfffffffffffffffe);
  return;
}





// 函数: void Process_Resource_Type_D(int64_t resource_context, uint64_t param_2, uint64_t param_3, uint64_t param_4)
// 处理资源类型D
void Process_Resource_Type_D(int64_t resource_context, uint64_t param_2, uint64_t param_3, uint64_t param_4)
{
  FUN_180058370(resource_context, *(uint64_t *)(resource_context + 0x10), param_3, param_4, 0xfffffffffffffffe);
  return;
}





// 函数: void Initialize_Subsystem_A(int64_t system_context)
// 初始化子系统A
void Initialize_Subsystem_A(int64_t system_context)
{
  FUN_180057010(system_context + 0x60);
  return;
}





// 函数: void Initialize_Subsystem_B(int64_t system_context)
// 初始化子系统B
void Initialize_Subsystem_B(int64_t system_context)
{
  FUN_180057010(system_context + 0x60);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void Cleanup_Resource_Array(uint64_t context, uint64_t param_2, uint64_t param_3, uint64_t param_4)
// 清理资源数组
void Cleanup_Resource_Array(uint64_t context, uint64_t param_2, uint64_t param_3, uint64_t param_4)
{
  uint64_t *resource_item;
  int64_t array_context;
  int item_count;
  int64_t item_index;
  
  array_context = init_system_data_config;
  item_count = (int)(*(int64_t *)(init_system_data_config + 0x38) - *(int64_t *)(init_system_data_config + 0x30) >> 3);
  item_index = 0;
  if (0 < item_count) {
    do {
      resource_item = *(uint64_t **)(*(int64_t *)(array_context + 0x30) + item_index * 8);
      if (resource_item != (uint64_t *)0x0) {
        resource_item[4] = &system_data_buffer_ptr;
        if (resource_item[5] != 0) {
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        resource_item[5] = 0;
        *(int32_t *)(resource_item + 7) = 0;
        resource_item[4] = &system_state_ptr;
        *resource_item = &system_data_buffer_ptr;
        if (resource_item[1] == 0) {
          resource_item[1] = 0;
          *(int32_t *)(resource_item + 3) = 0;
          *resource_item = &system_state_ptr;
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner(resource_item);
        }
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      *(uint64_t *)(*(int64_t *)(array_context + 0x30) + item_index * 8) = 0;
      item_index = item_index + 1;
    } while (item_index < item_count);
  }
  *(uint64_t *)(array_context + 0x38) = *(uint64_t *)(array_context + 0x30);
  item_index = array_context + 0x50;
  FUN_180058370(item_index, *(uint64_t *)(array_context + 0x60), param_3, param_4, 0xfffffffffffffffe);
  *(int64_t *)item_index = item_index;
  *(int64_t *)(array_context + 0x58) = item_index;
  *(uint64_t *)(array_context + 0x60) = 0;
  *(int8_t *)(array_context + 0x68) = 0;
  *(uint64_t *)(array_context + 0x70) = 0;
  return;
}





// 函数: void Process_Resource_Type_E(int64_t resource_context, uint64_t param_2, uint64_t param_3, uint64_t param_4)
// 处理资源类型E
void Process_Resource_Type_E(int64_t resource_context, uint64_t param_2, uint64_t param_3, uint64_t param_4)
{
  FUN_180058420(resource_context, *(uint64_t *)(resource_context + 0x10), param_3, param_4, 0xfffffffffffffffe);
  return;
}





// 函数: void Process_Resource_Type_F(int64_t resource_context, uint64_t param_2, uint64_t param_3, uint64_t param_4)
// 处理资源类型F
void Process_Resource_Type_F(int64_t resource_context, uint64_t param_2, uint64_t param_3, uint64_t param_4)
{
  FUN_180058420(resource_context, *(uint64_t *)(resource_context + 0x10), param_3, param_4, 0xfffffffffffffffe);
  return;
}



// 函数: uint64_t * Initialize_Memory_Manager(uint64_t *manager)
// 初始化内存管理器
uint64_t * Initialize_Memory_Manager(uint64_t *manager)
{
  *manager = &system_state_ptr;
  manager[1] = 0;
  *(int32_t *)(manager + 2) = 0;
  *manager = &unknown_var_3480_ptr;
  manager[1] = manager + 3;
  *(int32_t *)(manager + 2) = 0;
  *(int8_t *)(manager + 3) = 0;
  FUN_180142b20(manager + 0xb);
  manager[0x74] = 0;
  manager[0x75] = 0;
  manager[0x76] = 0;
  *(int32_t *)(manager + 0x77) = 3;
  manager[0x78] = 0;
  manager[0x79] = 0;
  manager[0x7a] = 0;
  *(int32_t *)(manager + 0x7b) = 3;
  manager[0x7c] = 0;
  manager[0x7d] = 0;
  manager[0x7e] = 0;
  *(int32_t *)(manager + 0x7f) = 3;
  manager[0x80] = 0;
  manager[0x81] = 0;
  manager[0x82] = 0;
  *(int32_t *)(manager + 0x83) = 3;
  manager[0x84] = 0;
  manager[0x85] = 0;
  manager[0x86] = 0;
  *(int32_t *)(manager + 0x87) = 3;
  manager[0x88] = 0;
  manager[0x89] = 0;
  manager[0x8a] = 0;
  *(int32_t *)(manager + 0x8b) = 3;
  manager[0x8c] = 0;
  manager[0x8d] = 0;
  manager[0x8e] = 0;
  *(int32_t *)(manager + 0x8f) = 3;
  return manager;
}





// 函数: void Iterate_Resource_Container_A(int64_t *container, uint64_t param_2, uint64_t param_3, uint64_t param_4)
// 遍历资源容器A
void Iterate_Resource_Container_A(int64_t *container, uint64_t param_2, uint64_t param_3, uint64_t param_4)
{
  uint64_t *end_ptr;
  uint64_t *current_ptr;
  uint64_t cleanup_flag;
  
  cleanup_flag = 0xfffffffffffffffe;
  end_ptr = (uint64_t *)container[1];
  for (current_ptr = (uint64_t *)*container; current_ptr != end_ptr; current_ptr = current_ptr + 0x69) {
    (**(code **)*current_ptr)(current_ptr, 0, param_3, param_4, cleanup_flag);
  }
  if (*container == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}





// 函数: void Iterate_Resource_Container_B(int64_t *container, uint64_t param_2, uint64_t param_3, uint64_t param_4)
// 遍历资源容器B
void Iterate_Resource_Container_B(int64_t *container, uint64_t param_2, uint64_t param_3, uint64_t param_4)
{
  uint64_t *end_ptr;
  uint64_t *current_ptr;
  uint64_t cleanup_flag;
  
  cleanup_flag = 0xfffffffffffffffe;
  end_ptr = (uint64_t *)container[1];
  for (current_ptr = (uint64_t *)*container; current_ptr != end_ptr; current_ptr = current_ptr + 0xb) {
    (**(code **)*current_ptr)(current_ptr, 0, param_3, param_4, cleanup_flag);
  }
  if (*container == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}





// 函数: void Cleanup_Thread_Local_Storage(int64_t tls_context)
// 清理线程本地存储
void Cleanup_Thread_Local_Storage(int64_t tls_context)
{
  int lock_result;
  int64_t data_start;
  uint item_index;
  uint64_t current_offset;
  uint64_t max_offset;
  
  lock_result = _Mtx_lock(tls_context + 0x28);
  if (lock_result != 0) {
    __Throw_C_error_std__YAXH_Z(lock_result);
  }
  max_offset = 0;
  data_start = *(int64_t *)(tls_context + 8);
  current_offset = max_offset;
  if (*(int64_t *)(tls_context + 0x10) - data_start >> 3 != 0) {
    do {
      if (*(int64_t *)(current_offset + data_start) != 0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      *(uint64_t *)(current_offset + *(int64_t *)(tls_context + 8)) = 0;
      item_index = (int)max_offset + 1;
      max_offset = (uint64_t)item_index;
      data_start = *(int64_t *)(tls_context + 8);
      current_offset = current_offset + 8;
    } while ((uint64_t)(int64_t)(int)item_index <
             (uint64_t)(*(int64_t *)(tls_context + 0x10) - data_start >> 3));
  }
  *(int64_t *)(tls_context + 0x10) = data_start;
  lock_result = _Mtx_unlock(tls_context + 0x28);
  if (lock_result != 0) {
    __Throw_C_error_std__YAXH_Z(lock_result);
  }
  return;
}





// 函数: void Cleanup_Object_Manager(int64_t *object_manager)
// 清理对象管理器
void Cleanup_Object_Manager(int64_t *object_manager)
{
  int64_t manager_data;
  
  manager_data = *object_manager;
  if (manager_data == 0) {
    *object_manager = 0;
    if ((int64_t *)object_manager[2] != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)object_manager[2] + 0x38))();
    }
    if ((int64_t *)object_manager[1] != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)object_manager[1] + 0x38))();
    }
    return;
  }
  if (*(int64_t *)(manager_data + 8) != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  _Mtx_destroy_in_situ();
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(manager_data);
}





// 函数: void Cleanup_Memory_Pool(int64_t memory_pool)
// 清理内存池
void Cleanup_Memory_Pool(int64_t memory_pool)
{
  int *ref_count;
  int64_t pool_item;
  uint64_t *pool_ptr;
  int64_t heap_base;
  uint64_t item_index;
  uint64_t pool_size;
  
  pool_size = *(uint64_t *)(memory_pool + 0x10);
  heap_base = *(int64_t *)(memory_pool + 8);
  item_index = 0;
  if (pool_size != 0) {
    do {
      pool_item = *(int64_t *)(heap_base + item_index * 8);
      if (pool_item != 0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(pool_item);
      }
      *(uint64_t *)(heap_base + item_index * 8) = 0;
      item_index = item_index + 1;
    } while (item_index < pool_size);
    pool_size = *(uint64_t *)(memory_pool + 0x10);
  }
  *(uint64_t *)(memory_pool + 0x18) = 0;
  if ((1 < pool_size) && (pool_ptr = *(uint64_t **)(memory_pool + 8), pool_ptr != (uint64_t *)0x0)) {
    pool_size = (uint64_t)pool_ptr & 0xffffffffffc00000;
    if (pool_size != 0) {
      heap_base = pool_size + 0x80 + ((int64_t)pool_ptr - pool_size >> 0x10) * 0x50;
      heap_base = heap_base - (uint64_t)*(uint *)(heap_base + 4);
      if ((*(void ***)(pool_size + 0x70) == &ExceptionList) && (*(char *)(heap_base + 0xe) == '\0')) {
        *pool_ptr = *(uint64_t *)(heap_base + 0x20);
        *(uint64_t **)(heap_base + 0x20) = pool_ptr;
        ref_count = (int *)(heap_base + 0x18);
        *ref_count = *ref_count + -1;
        if (*ref_count == 0) {
          SystemDataCleaner();
          return;
        }
      }
      else {
        func_0x00018064e870(pool_size, CONCAT71(0xff000000, *(void ***)(pool_size + 0x70) == &ExceptionList),
                            pool_ptr, pool_size, 0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}





// 函数: void Cleanup_Object_Manager_List(int64_t *manager_list)
// 清理对象管理器列表
void Cleanup_Object_Manager_List(int64_t *manager_list)
{
  int64_t list_end;
  int64_t current_item;
  
  list_end = manager_list[1];
  for (current_item = *manager_list; current_item != list_end; current_item = current_item + 0x18) {
    FUN_18004bf50(current_item);
  }
  if (*manager_list == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}





// 函数: void Cleanup_Callback_List(int64_t *callback_list)
// 清理回调列表
void Cleanup_Callback_List(int64_t *callback_list)
{
  int64_t *list_end;
  int64_t *current_callback;
  
  list_end = (int64_t *)callback_list[1];
  for (current_callback = (int64_t *)*callback_list; current_callback != list_end; current_callback = current_callback + 1) {
    if ((int64_t *)*current_callback != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)*current_callback + 0x38))();
    }
  }
  if (*callback_list == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}



// 函数: uint64_t * Initialize_Empty_Container(uint64_t *container)
// 初始化空容器
uint64_t * Initialize_Empty_Container(uint64_t *container)
{
  *container = 0;
  container[1] = 0;
  container[2] = 0;
  *(int32_t *)(container + 3) = 3;
  return container;
}





// 函数: void Cleanup_Manager_Container(int64_t *manager_container)
// 清理管理器容器
void Cleanup_Manager_Container(int64_t *manager_container)
{
  int64_t container_end;
  int64_t current_manager;
  
  container_end = manager_container[1];
  for (current_manager = *manager_container; current_manager != container_end; current_manager = current_manager + 0x18) {
    FUN_18004bf50(current_manager);
  }
  if (*manager_container == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}





// 函数: void Cleanup_Allocator_Pool(int64_t allocator_pool)
// 清理分配器池
void Cleanup_Allocator_Pool(int64_t allocator_pool)
{
  int *ref_count;
  int64_t pool_item;
  uint64_t *pool_ptr;
  int64_t heap_base;
  uint64_t item_index;
  uint64_t pool_size;
  
  pool_size = *(uint64_t *)(allocator_pool + 0x10);
  heap_base = *(int64_t *)(allocator_pool + 8);
  item_index = 0;
  if (pool_size != 0) {
    do {
      pool_item = *(int64_t *)(heap_base + item_index * 8);
      if (pool_item != 0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(pool_item);
      }
      *(uint64_t *)(heap_base + item_index * 8) = 0;
      item_index = item_index + 1;
    } while (item_index < pool_size);
    pool_size = *(uint64_t *)(allocator_pool + 0x10);
  }
  *(uint64_t *)(allocator_pool + 0x18) = 0;
  if ((1 < pool_size) && (pool_ptr = *(uint64_t **)(allocator_pool + 8), pool_ptr != (uint64_t *)0x0)) {
    pool_size = (uint64_t)pool_ptr & 0xffffffffffc00000;
    if (pool_size != 0) {
      heap_base = pool_size + 0x80 + ((int64_t)pool_ptr - pool_size >> 0x10) * 0x50;
      heap_base = heap_base - (uint64_t)*(uint *)(heap_base + 4);
      if ((*(void ***)(pool_size + 0x70) == &ExceptionList) && (*(char *)(heap_base + 0xe) == '\0')) {
        *pool_ptr = *(uint64_t *)(heap_base + 0x20);
        *(uint64_t **)(heap_base + 0x20) = pool_ptr;
        ref_count = (int *)(heap_base + 0x18);
        *ref_count = *ref_count + -1;
        if (*ref_count == 0) {
          SystemDataCleaner();
          return;
        }
      }
      else {
        func_0x00018064e870(pool_size, CONCAT71(0xff000000, *(void ***)(pool_size + 0x70) == &ExceptionList),
                            pool_ptr, pool_size, 0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}





// 函数: void Initialize_System_Context(int64_t system_context)
// 初始化系统上下文
void Initialize_System_Context(int64_t system_context)

{
  void *temp_ptr;
  int8_t stack_buffer1 [8];
  void *stack_buffer2;
  uint temp_uint;
  uint64_t stack_var1;
  uint64_t stack_var2;
  uint64_t stack_var3;
  int32_t stack_var4;
  uint64_t stack_var5;
  uint64_t stack_var6;
  uint64_t stack_var7;
  int32_t stack_var8;
  void *stack_var9;
  int64_t stack_var10;
  int32_t stack_var11;
  uint64_t cleanup_flag;
  
  cleanup_flag = 0xfffffffffffffffe;
  if (system_context == 0) {


// 函数: void Release_Memory_Block(uint64_t *memory_block)
// 释放内存块
void Release_Memory_Block(uint64_t *memory_block)

{
  int *ref_count;
  uint64_t *block_ptr;
  int64_t heap_info;
  uint64_t heap_base;
  
  block_ptr = (uint64_t *)*memory_block;
  if (block_ptr == (uint64_t *)0x0) {
    return;
  }
  heap_base = (uint64_t)block_ptr & 0xffffffffffc00000;
  if (heap_base != 0) {
    heap_info = heap_base + 0x80 + ((int64_t)block_ptr - heap_base >> 0x10) * 0x50;
    heap_info = heap_info - (uint64_t)*(uint *)(heap_info + 4);
    if ((*(void ***)(heap_base + 0x70) == &ExceptionList) && (*(char *)(heap_info + 0xe) == '\0')) {
      *block_ptr = *(uint64_t *)(heap_info + 0x20);
      *(uint64_t **)(heap_info + 0x20) = block_ptr;
      ref_count = (int *)(heap_info + 0x18);
      *ref_count = *ref_count + -1;
      if (*ref_count == 0) {
        SystemDataCleaner();
        return;
      }
    }
    else {
      func_0x00018064e870(heap_base, CONCAT71(0xff000000, *(void ***)(heap_base + 0x70) == &ExceptionList),
                          block_ptr, heap_base, 0xfffffffffffffffe);
    }
  }
  return;
}





// 函数: void Iterate_Callback_Container(int64_t *callback_container, uint64_t param_2, uint64_t param_3, uint64_t param_4)
// 遍历回调容器
void Iterate_Callback_Container(int64_t *callback_container, uint64_t param_2, uint64_t param_3, uint64_t param_4)

{
  uint64_t *end_ptr;
  uint64_t *current_ptr;
  uint64_t cleanup_flag;
  
  cleanup_flag = 0xfffffffffffffffe;
  end_ptr = (uint64_t *)callback_container[1];
  for (current_ptr = (uint64_t *)*callback_container; current_ptr != end_ptr; current_ptr = current_ptr + 4) {
    (**(code **)*current_ptr)(current_ptr, 0, param_3, param_4, cleanup_flag);
  }
  if (*callback_container == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}





// 函数: void Validate_System_Pointer(int64_t system_ptr)
// 验证系统指针
void Validate_System_Pointer(int64_t system_ptr)

{
  uint temp_value;
  int64_t check_result;
  
  if (system_ptr == 0) {


// 函数: void Copy_String_To_Global_Buffer(int64_t string_ptr)
// 复制字符串到全局缓冲区
void Copy_String_To_Global_Buffer(int64_t string_ptr)

{
  uint string_length;
  int64_t char_index;
  
  char_index = -1;
  do {
    char_index = char_index + 1;
  } while (*(char *)(string_ptr + char_index) != '\0');
  string_length = (uint)char_index;
  if (0x1fff < string_length) {
    string_length = 0x1fff;
  }
                    // WARNING: Subroutine does not return
  memcpy(&system_memory_4870, string_ptr, (int64_t)(int)string_length);
}





// 函数: void System_Call_Handler(void)
// 系统调用处理器
void System_Call_Handler(void)

{
  code *system_call;
  
  FUN_1808fcdc8();
  system_call = (code *)swi(3);
  (*system_call)();
  return;
}



// 函数: int8_t * Initialize_Complex_Object(int8_t *object, uint64_t param_2, uint64_t param_3, uint64_t param_4)
// 初始化复杂对象
int8_t *
Initialize_Complex_Object(int8_t *object, uint64_t param_2, uint64_t param_3, uint64_t param_4)

{
  int64_t *component_a;
  int64_t *component_b;
  int64_t *component_c;
  
  component_c = (int64_t *)(object + 8);
  *component_c = (int64_t)&system_state_ptr;
  *(uint64_t *)(object + 0x10) = 0;
  *(int32_t *)(object + 0x18) = 0;
  *component_c = (int64_t)&system_data_buffer_ptr;
  *(uint64_t *)(object + 0x20) = 0;
  *(uint64_t *)(object + 0x10) = 0;
  *(int32_t *)(object + 0x18) = 0;
  *(void **)(object + 0x38) = &system_state_ptr;
  *(uint64_t *)(object + 0x40) = 0;
  *(int32_t *)(object + 0x48) = 0;
  *(void **)(object + 0x38) = &system_data_buffer_ptr;
  *(uint64_t *)(object + 0x50) = 0;
  *(uint64_t *)(object + 0x40) = 0;
  *(int32_t *)(object + 0x48) = 0;
  *(void **)(object + 0x58) = &system_state_ptr;
  *(uint64_t *)(object + 0x60) = 0;
  *(int32_t *)(object + 0x68) = 0;
  *(void **)(object + 0x58) = &system_data_buffer_ptr;
  *(uint64_t *)(object + 0x70) = 0;
  *(uint64_t *)(object + 0x60) = 0;
  *(int32_t *)(object + 0x68) = 0;
  component_a = (int64_t *)(object + 0x80);
  *component_a = (int64_t)&system_state_ptr;
  *(uint64_t *)(object + 0x88) = 0;
  *(int32_t *)(object + 0x90) = 0;
  *component_a = (int64_t)&system_data_buffer_ptr;
  *(uint64_t *)(object + 0x98) = 0;
  *(uint64_t *)(object + 0x88) = 0;
  *(int32_t *)(object + 0x90) = 0;
  component_b = (int64_t *)(object + 0xa0);
  *component_b = (int64_t)&system_state_ptr;
  *(uint64_t *)(object + 0xa8) = 0;
  *(int32_t *)(object + 0xb0) = 0;
  *component_b = (int64_t)&system_data_buffer_ptr;
  *(uint64_t *)(object + 0xb8) = 0;
  *(uint64_t *)(object + 0xa8) = 0;
  *(int32_t *)(object + 0xb0) = 0;
  *object = 0;
  (**(code **)(*component_c + 0x10))(component_c, &unknown_var_4696_ptr, &system_state_ptr, param_4, 0xfffffffffffffffe);
  *(uint64_t *)(object + 0x28) = 0;
  *(int32_t *)(object + 0x30) = 0;
  object[0x7c] = 0;
  object[0xc9] = 1;
  (**(code **)(*component_a + 0x10))(component_a, &system_memory_d128);
  (**(code **)(*component_b + 0x10))(component_b, &system_buffer_ptr);
  *(int32_t *)(object + 0xc0) = 0x461c4000;
  *(int32_t *)(object + 0xc4) = 0x461c4000;
  object[200] = 0;
  *(uint64_t *)(object + 0xd0) = 0;
  return object;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: uint64_t * Initialize_Advanced_System_Object(uint64_t *system_object)
// 初始化高级系统对象 - 这是一个非常复杂的初始化函数
// 原本实现：FUN_18004c480
uint64_t * Initialize_Advanced_System_Object(uint64_t *system_object)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int32_t *puVar5;
  uint64_t *puVar6;
  int64_t *plVar7;
  int32_t *puVar8;
  int32_t *puVar9;
  int64_t lVar10;
  uint64_t *apuStackX_10 [3];
  
  *(int8_t *)((int64_t)param_1 + 0x1c) = 0;
  param_1[2] = 0;
  *(int32_t *)(param_1 + 3) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(int32_t *)(param_1 + 0x12) = 3;
  param_1[0x17] = &system_state_ptr;
  param_1[0x18] = 0;
  *(int32_t *)(param_1 + 0x19) = 0;
  param_1[0x17] = &system_data_buffer_ptr;
  param_1[0x1a] = 0;
  param_1[0x18] = 0;
  *(int32_t *)(param_1 + 0x19) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(int32_t *)(param_1 + 0x1e) = 3;
  plVar1 = param_1 + 0x21;
  *plVar1 = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(int32_t *)(param_1 + 0x24) = 3;
  param_1[0x29] = &system_state_ptr;
  param_1[0x2a] = 0;
  *(int32_t *)(param_1 + 0x2b) = 0;
  param_1[0x29] = &system_data_buffer_ptr;
  param_1[0x2c] = 0;
  param_1[0x2a] = 0;
  *(int32_t *)(param_1 + 0x2b) = 0;
  plVar2 = param_1 + 0x2e;
  *plVar2 = (int64_t)&system_state_ptr;
  param_1[0x2f] = 0;
  *(int32_t *)(param_1 + 0x30) = 0;
  *plVar2 = (int64_t)&system_data_buffer_ptr;
  param_1[0x31] = 0;
  param_1[0x2f] = 0;
  *(int32_t *)(param_1 + 0x30) = 0;
  plVar3 = param_1 + 0x32;
  *plVar3 = (int64_t)&system_state_ptr;
  param_1[0x33] = 0;
  *(int32_t *)(param_1 + 0x34) = 0;
  *plVar3 = (int64_t)&unknown_var_672_ptr;
  param_1[0x33] = param_1 + 0x35;
  *(int32_t *)(param_1 + 0x34) = 0;
  *(int8_t *)(param_1 + 0x35) = 0;
  plVar7 = param_1 + 0x39;
  *plVar7 = (int64_t)&system_state_ptr;
  param_1[0x3a] = 0;
  *(int32_t *)(param_1 + 0x3b) = 0;
  *plVar7 = (int64_t)&system_data_buffer_ptr;
  param_1[0x3c] = 0;
  param_1[0x3a] = 0;
  *(int32_t *)(param_1 + 0x3b) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x254) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x25c) = 0;
  param_1[0x4e] = &system_state_ptr;
  param_1[0x4f] = 0;
  *(int32_t *)(param_1 + 0x50) = 0;
  param_1[0x4e] = &system_data_buffer_ptr;
  param_1[0x51] = 0;
  param_1[0x4f] = 0;
  *(int32_t *)(param_1 + 0x50) = 0;
  param_1[0x52] = &system_state_ptr;
  param_1[0x53] = 0;
  *(int32_t *)(param_1 + 0x54) = 0;
  param_1[0x52] = &system_data_buffer_ptr;
  param_1[0x55] = 0;
  param_1[0x53] = 0;
  *(int32_t *)(param_1 + 0x54) = 0;
  param_1[0x58] = &system_state_ptr;
  param_1[0x59] = 0;
  *(int32_t *)(param_1 + 0x5a) = 0;
  param_1[0x58] = &system_data_buffer_ptr;
  param_1[0x5b] = 0;
  param_1[0x59] = 0;
  *(int32_t *)(param_1 + 0x5a) = 0;
  puVar6 = param_1 + 0x5c;
  param_1[0x5f] = 0;
  *(int32_t *)(param_1 + 0x61) = 3;
  *puVar6 = puVar6;
  param_1[0x5d] = puVar6;
  param_1[0x5e] = 0;
  *(int8_t *)(param_1 + 0x5f) = 0;
  param_1[0x60] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  *(int32_t *)(param_1 + 0x67) = 3;
  param_1[0x69] = &system_state_ptr;
  param_1[0x6a] = 0;
  *(int32_t *)(param_1 + 0x6b) = 0;
  param_1[0x69] = &system_data_buffer_ptr;
  param_1[0x6c] = 0;
  param_1[0x6a] = 0;
  *(int32_t *)(param_1 + 0x6b) = 0;
  apuStackX_10[0] = param_1 + 0x6d;
  *apuStackX_10[0] = &system_state_ptr;
  param_1[0x6e] = 0;
  *(int32_t *)(param_1 + 0x6f) = 0;
  *apuStackX_10[0] = &system_data_buffer_ptr;
  param_1[0x70] = 0;
  param_1[0x6e] = 0;
  *(int32_t *)(param_1 + 0x6f) = 0;
  *(int32_t *)(param_1 + 4) = 0;
  *param_1 = 0;
  *(int32_t *)(param_1 + 99) = 0;
  (**(code **)(*plVar7 + 0x10))
            (plVar7,&unknown_var_4720_ptr,&system_data_buffer_ptr,&system_state_ptr,0xfffffffffffffffe);
  *(int32_t *)(param_1 + 0x3d) = 0;
  *(int32_t *)((int64_t)param_1 + 0x1ed) = 0x1000001;
  param_1[0x62] = 0;
  *(int8_t *)(param_1 + 0xc) = 0;
  *(int32_t *)(param_1 + 0x20) = 0xffffffff;
  *(int8_t *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(int8_t *)((int64_t)param_1 + 0x1ec) = 0;
  LOCK();
  *(int8_t *)(param_1 + 0x79) = 0;
  UNLOCK();
  (**(code **)(*plVar3 + 0x10))(plVar3,&unknown_var_4736_ptr);
  (**(code **)(*plVar2 + 0x10))(plVar2,&system_buffer_ptr);
  *(int8_t *)(param_1 + 0x2d) = 0;
  param_1[0x13] = 0;
  *(int32_t *)(param_1 + 0x1f) = 0x1010101;
  *(int16_t *)((int64_t)param_1 + 0xfc) = 0x101;
  *(int32_t *)((int64_t)param_1 + 0x104) = 0xffffffff;
  lVar10 = 8;
  do {
    puVar9 = (int32_t *)param_1[0x22];
    if (puVar9 < (int32_t *)param_1[0x23]) {
      param_1[0x22] = puVar9 + 1;
      *puVar9 = 0;
    }
    else {
      puVar8 = (int32_t *)*plVar1;
      lVar4 = (int64_t)puVar9 - (int64_t)puVar8 >> 2;
      if (lVar4 == 0) {
        lVar4 = 1;
LAB_18004c7ef:
        puVar5 = (int32_t *)
                 CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar4 * 4,*(int8_t *)(param_1 + 0x24));
        puVar9 = (int32_t *)param_1[0x22];
        puVar8 = (int32_t *)*plVar1;
      }
      else {
        lVar4 = lVar4 * 2;
        puVar5 = (int32_t *)0x0;
        if (lVar4 != 0) goto LAB_18004c7ef;
      }
      if (puVar8 != puVar9) {
                    // WARNING: Subroutine does not return
        memmove(puVar5,puVar8,(int64_t)puVar9 - (int64_t)puVar8);
      }
      *puVar5 = 0;
      if (*plVar1 != 0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      *plVar1 = (int64_t)puVar5;
      param_1[0x22] = puVar5 + 1;
      param_1[0x23] = puVar5 + lVar4;
    }
    lVar10 = lVar10 + -1;
    if (lVar10 == 0) {
      *(int32_t *)((int64_t)param_1 + 0x24) = 0;
      *(int32_t *)((int64_t)param_1 + 0x29) = 0x1010101;
      *(int8_t *)(param_1 + 5) = 1;
      *(int32_t *)(param_1 + 0x71) = 0x3f800000;
      *(int8_t *)(param_1 + 0x76) = 1;
      *(int32_t *)(param_1 + 0x25) = 0;
      param_1[0x56] = 0;
      *(uint64_t *)((int64_t)param_1 + 0x224) = 0;
      *(int8_t *)((int64_t)param_1 + 0x22c) = 0;
      *(int32_t *)(param_1 + 0x40) = 0;
      param_1[0x41] = 0;
      puVar6 = init_system_data_config;
      if (init_system_data_config == (uint64_t *)0x0) {
        QueryPerformanceCounter(apuStackX_10);
        puVar6 = apuStackX_10[0];
      }
      param_1[0x42] = (double)((int64_t)puVar6 - init_system_data_config) * init_system_data_config;
      *(int32_t *)(param_1 + 0x44) = 0;
      *(int8_t *)((int64_t)param_1 + 0x264) = 0;
      *(int32_t *)(param_1 + 0x4d) = 0;
      *(uint64_t *)((int64_t)param_1 + 500) = 0;
      *(int8_t *)(param_1 + 0x28) = 0;
      *(int8_t *)((int64_t)param_1 + 0x1fc) = 0;
      param_1[0x7b] = 0;
      param_1[0x57] = 0;
      lVar10 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0xc,4,3);
      *(int8_t *)(lVar10 + 8) = 0;
      param_1[6] = lVar10;
      param_1[0x27] = 0;
      *(int8_t *)(param_1 + 7) = 0;
      *(int32_t *)((int64_t)param_1 + 0x3c) = 0xffffffff;
      param_1[0x43] = 0;
      *(int32_t *)(param_1 + 0x26) = 0xffffffff;
      puVar6 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x30,8,3);
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar6[3] = 0;
      puVar6[4] = 0;
      puVar6[5] = 0;
      *puVar6 = &system_handler1_ptr;
      *puVar6 = &system_handler2_ptr;
      *(int32_t *)(puVar6 + 1) = 0;
      *puVar6 = &unknown_var_8624_ptr;
      puVar6[2] = 0;
      puVar6[3] = 0;
      puVar6[4] = 0;
      *(int32_t *)(puVar6 + 5) = 3;
      param_1[0x78] = puVar6;
      return param_1;
    }
  } while( true );
}





// 函数: void Execute_Callback_Function(int64_t *callback_ptr)
// 执行回调函数
void Execute_Callback_Function(int64_t *callback_ptr)

{
  if ((int64_t *)*callback_ptr != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)*callback_ptr + 0x38))();
  }
  return;
}



// 函数: uint64_t * Initialize_Special_Object(uint64_t *object, uint64_t flags, uint64_t param_3, uint64_t param_4)
// 初始化特殊对象
uint64_t *
Initialize_Special_Object(uint64_t *object, uint64_t flags, uint64_t param_3, uint64_t param_4)

{
  if (object[2] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *object = &system_handler2_ptr;
  *object = &system_handler1_ptr;
  if ((flags & 1) != 0) {
    free(object, 0x30, param_3, param_4, 0xfffffffffffffffe);
  }
  return object;
}





// 函数: void Reset_Special_Object(uint64_t *object)
// 重置特殊对象
void Reset_Special_Object(uint64_t *object)

{
  if (object[2] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *object = &system_handler2_ptr;
  *object = &system_handler1_ptr;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



