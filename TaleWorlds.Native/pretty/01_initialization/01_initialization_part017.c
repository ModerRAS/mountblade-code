#include "TaleWorlds.Native.Split.h"

// 01_initialization_part017.c - 初始化系统 - 32 个函数

// 函数: void Cleanup_Resource_Chain(longlong context, undefined8 param_2, undefined8 param_3, undefined8 param_4)
// 清理资源链表
void Cleanup_Resource_Chain(longlong context, undefined8 param_2, undefined8 param_3, undefined8 param_4)
{
  undefined8 *resource_ptr;
  
  resource_ptr = *(undefined8 **)(context + 0x10);
  if (resource_ptr != (undefined8 *)0x0) {
    FUN_18004b790(context, *resource_ptr, param_3, param_4, 0xfffffffffffffffe);
                    // WARNING: Subroutine does not return
    FUN_18064e900(resource_ptr);
  }
  return;
}





// 函数: void Recursive_Resource_Cleanup(undefined8 context, undefined8 *resource_ptr)
// 递归清理资源
void Recursive_Resource_Cleanup(undefined8 context, undefined8 *resource_ptr)
{
  if (resource_ptr != (undefined8 *)0x0) {
    FUN_18004b790(context, *resource_ptr);
                    // WARNING: Subroutine does not return
    FUN_18064e900(resource_ptr);
  }
  return;
}





// 函数: void Cleanup_Resource_List(undefined8 context)
// 清理资源列表
void Cleanup_Resource_List(undefined8 context)
{
  undefined8 *unaff_RBX;
  
  FUN_18004b790(context, *unaff_RBX);
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void Empty_Function(void)
// 空函数 - 占位符
void Empty_Function(void)
{
  return;
}



// 函数: undefined8 * Initialize_VTable_Pointer_A(undefined8 *vtable, ulonglong flags)
// 初始化虚表指针A
undefined8 * Initialize_VTable_Pointer_A(undefined8 *vtable, ulonglong flags)
{
  *vtable = &UNK_1809fcc88;
  if ((flags & 1) != 0) {
    free(vtable, 8);
  }
  return vtable;
}



// 函数: undefined8 * Initialize_VTable_Pointer_B(undefined8 *vtable, ulonglong flags)
// 初始化虚表指针B
undefined8 * Initialize_VTable_Pointer_B(undefined8 *vtable, ulonglong flags)
{
  *vtable = &UNK_1809fcca0;
  if ((flags & 1) != 0) {
    free(vtable, 8);
  }
  return vtable;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void Format_String_To_Buffer(longlong buffer_context, undefined8 format_str, undefined8 param_3, undefined8 param_4)
// 格式化字符串到缓冲区
void Format_String_To_Buffer(longlong buffer_context, undefined8 format_str, undefined8 param_3, undefined8 param_4)
{
  longlong str_length;
  int buffer_available;
  ulonglong *printf_func;
  longlong char_index;
  undefined8 formatted_param_3;
  undefined8 formatted_param_4;
  undefined1 auStack_78 [32];
  undefined8 buffer_size;
  undefined8 *buffer_ptr;
  char formatted_string [32];
  ulonglong stack_cookie;
  
  stack_cookie = _DAT_180bf00a8 ^ (ulonglong)auStack_78;
  formatted_param_3 = param_3;
  formatted_param_4 = param_4;
  printf_func = (ulonglong *)func_0x00018004b9a0();
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
    memcpy((ulonglong)*(uint *)(buffer_context + 0x10) + *(longlong *)(buffer_context + 8), formatted_string,
           (longlong)((int)char_index + 2));
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(stack_cookie ^ (ulonglong)auStack_78);
}



// 函数: undefined8 * Initialize_VTable_Pointer_C(undefined8 *vtable, ulonglong flags)
// 初始化虚表指针C
undefined8 * Initialize_VTable_Pointer_C(undefined8 *vtable, ulonglong flags)
{
  *vtable = &UNK_1809fcce0;
  if ((flags & 1) != 0) {
    free(vtable, 8);
  }
  return vtable;
}



// 函数: undefined8 * Initialize_VTable_Pointer_D(undefined8 *vtable, ulonglong flags)
// 初始化虚表指针D
undefined8 * Initialize_VTable_Pointer_D(undefined8 *vtable, ulonglong flags)
{
  *vtable = &UNK_1809fcd18;
  if ((flags & 1) != 0) {
    free(vtable, 8);
  }
  return vtable;
}



// 函数: int Safe_VSprintf(undefined8 buffer, undefined8 format, undefined8 param_3, undefined8 param_4)
// 安全的格式化字符串输出
int Safe_VSprintf(undefined8 buffer, undefined8 format, undefined8 param_3, undefined8 param_4)
{
  int result;
  ulonglong *printf_func;
  
  printf_func = (ulonglong *)func_0x00018004b9a0();
  result = __stdio_common_vsprintf(*printf_func | 1, buffer, format, param_3, 0, param_4);
  if (result < 0) {
    result = -1;
  }
  return result;
}





// 函数: void Process_Resource_Type_A(longlong resource_context, undefined8 param_2, undefined8 param_3, undefined8 param_4)
// 处理资源类型A
void Process_Resource_Type_A(longlong resource_context, undefined8 param_2, undefined8 param_3, undefined8 param_4)
{
  FUN_1800582b0(resource_context, *(undefined8 *)(resource_context + 0x10), param_3, param_4, 0xfffffffffffffffe);
  return;
}





// 函数: void Process_Resource_Type_B(longlong resource_context, undefined8 param_2, undefined8 param_3, undefined8 param_4)
// 处理资源类型B
void Process_Resource_Type_B(longlong resource_context, undefined8 param_2, undefined8 param_3, undefined8 param_4)
{
  FUN_1800582b0(resource_context, *(undefined8 *)(resource_context + 0x10), param_3, param_4, 0xfffffffffffffffe);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void Unlock_Global_Mutex(undefined8 *resource_ptr)
// 解锁全局互斥锁
void Unlock_Global_Mutex(undefined8 *resource_ptr)
{
  int unlock_result;
  
  _DAT_180c8a9b0 = *resource_ptr;
  unlock_result = _Mtx_unlock(0x180c91970);
  if (unlock_result != 0) {
    __Throw_C_error_std__YAXH_Z(unlock_result);
  }
  return;
}





// 函数: void Process_Resource_Type_C(longlong resource_context, undefined8 param_2, undefined8 param_3, undefined8 param_4)
// 处理资源类型C
void Process_Resource_Type_C(longlong resource_context, undefined8 param_2, undefined8 param_3, undefined8 param_4)
{
  FUN_180058370(resource_context, *(undefined8 *)(resource_context + 0x10), param_3, param_4, 0xfffffffffffffffe);
  return;
}





// 函数: void Process_Resource_Type_D(longlong resource_context, undefined8 param_2, undefined8 param_3, undefined8 param_4)
// 处理资源类型D
void Process_Resource_Type_D(longlong resource_context, undefined8 param_2, undefined8 param_3, undefined8 param_4)
{
  FUN_180058370(resource_context, *(undefined8 *)(resource_context + 0x10), param_3, param_4, 0xfffffffffffffffe);
  return;
}





// 函数: void Initialize_Subsystem_A(longlong system_context)
// 初始化子系统A
void Initialize_Subsystem_A(longlong system_context)
{
  FUN_180057010(system_context + 0x60);
  return;
}





// 函数: void Initialize_Subsystem_B(longlong system_context)
// 初始化子系统B
void Initialize_Subsystem_B(longlong system_context)
{
  FUN_180057010(system_context + 0x60);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void Cleanup_Resource_Array(undefined8 context, undefined8 param_2, undefined8 param_3, undefined8 param_4)
// 清理资源数组
void Cleanup_Resource_Array(undefined8 context, undefined8 param_2, undefined8 param_3, undefined8 param_4)
{
  undefined8 *resource_item;
  longlong array_context;
  int item_count;
  longlong item_index;
  
  array_context = _DAT_180c8a9f0;
  item_count = (int)(*(longlong *)(_DAT_180c8a9f0 + 0x38) - *(longlong *)(_DAT_180c8a9f0 + 0x30) >> 3);
  item_index = 0;
  if (0 < item_count) {
    do {
      resource_item = *(undefined8 **)(*(longlong *)(array_context + 0x30) + item_index * 8);
      if (resource_item != (undefined8 *)0x0) {
        resource_item[4] = &UNK_180a3c3e0;
        if (resource_item[5] != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        resource_item[5] = 0;
        *(undefined4 *)(resource_item + 7) = 0;
        resource_item[4] = &UNK_18098bcb0;
        *resource_item = &UNK_180a3c3e0;
        if (resource_item[1] == 0) {
          resource_item[1] = 0;
          *(undefined4 *)(resource_item + 3) = 0;
          *resource_item = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
          FUN_18064e900(resource_item);
        }
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(undefined8 *)(*(longlong *)(array_context + 0x30) + item_index * 8) = 0;
      item_index = item_index + 1;
    } while (item_index < item_count);
  }
  *(undefined8 *)(array_context + 0x38) = *(undefined8 *)(array_context + 0x30);
  item_index = array_context + 0x50;
  FUN_180058370(item_index, *(undefined8 *)(array_context + 0x60), param_3, param_4, 0xfffffffffffffffe);
  *(longlong *)item_index = item_index;
  *(longlong *)(array_context + 0x58) = item_index;
  *(undefined8 *)(array_context + 0x60) = 0;
  *(undefined1 *)(array_context + 0x68) = 0;
  *(undefined8 *)(array_context + 0x70) = 0;
  return;
}





// 函数: void Process_Resource_Type_E(longlong resource_context, undefined8 param_2, undefined8 param_3, undefined8 param_4)
// 处理资源类型E
void Process_Resource_Type_E(longlong resource_context, undefined8 param_2, undefined8 param_3, undefined8 param_4)
{
  FUN_180058420(resource_context, *(undefined8 *)(resource_context + 0x10), param_3, param_4, 0xfffffffffffffffe);
  return;
}





// 函数: void Process_Resource_Type_F(longlong resource_context, undefined8 param_2, undefined8 param_3, undefined8 param_4)
// 处理资源类型F
void Process_Resource_Type_F(longlong resource_context, undefined8 param_2, undefined8 param_3, undefined8 param_4)
{
  FUN_180058420(resource_context, *(undefined8 *)(resource_context + 0x10), param_3, param_4, 0xfffffffffffffffe);
  return;
}



// 函数: undefined8 * Initialize_Memory_Manager(undefined8 *manager)
// 初始化内存管理器
undefined8 * Initialize_Memory_Manager(undefined8 *manager)
{
  *manager = &UNK_18098bcb0;
  manager[1] = 0;
  *(undefined4 *)(manager + 2) = 0;
  *manager = &UNK_1809fcc58;
  manager[1] = manager + 3;
  *(undefined4 *)(manager + 2) = 0;
  *(undefined1 *)(manager + 3) = 0;
  FUN_180142b20(manager + 0xb);
  manager[0x74] = 0;
  manager[0x75] = 0;
  manager[0x76] = 0;
  *(undefined4 *)(manager + 0x77) = 3;
  manager[0x78] = 0;
  manager[0x79] = 0;
  manager[0x7a] = 0;
  *(undefined4 *)(manager + 0x7b) = 3;
  manager[0x7c] = 0;
  manager[0x7d] = 0;
  manager[0x7e] = 0;
  *(undefined4 *)(manager + 0x7f) = 3;
  manager[0x80] = 0;
  manager[0x81] = 0;
  manager[0x82] = 0;
  *(undefined4 *)(manager + 0x83) = 3;
  manager[0x84] = 0;
  manager[0x85] = 0;
  manager[0x86] = 0;
  *(undefined4 *)(manager + 0x87) = 3;
  manager[0x88] = 0;
  manager[0x89] = 0;
  manager[0x8a] = 0;
  *(undefined4 *)(manager + 0x8b) = 3;
  manager[0x8c] = 0;
  manager[0x8d] = 0;
  manager[0x8e] = 0;
  *(undefined4 *)(manager + 0x8f) = 3;
  return manager;
}





// 函数: void Iterate_Resource_Container_A(longlong *container, undefined8 param_2, undefined8 param_3, undefined8 param_4)
// 遍历资源容器A
void Iterate_Resource_Container_A(longlong *container, undefined8 param_2, undefined8 param_3, undefined8 param_4)
{
  undefined8 *end_ptr;
  undefined8 *current_ptr;
  undefined8 cleanup_flag;
  
  cleanup_flag = 0xfffffffffffffffe;
  end_ptr = (undefined8 *)container[1];
  for (current_ptr = (undefined8 *)*container; current_ptr != end_ptr; current_ptr = current_ptr + 0x69) {
    (**(code **)*current_ptr)(current_ptr, 0, param_3, param_4, cleanup_flag);
  }
  if (*container == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void Iterate_Resource_Container_B(longlong *container, undefined8 param_2, undefined8 param_3, undefined8 param_4)
// 遍历资源容器B
void Iterate_Resource_Container_B(longlong *container, undefined8 param_2, undefined8 param_3, undefined8 param_4)
{
  undefined8 *end_ptr;
  undefined8 *current_ptr;
  undefined8 cleanup_flag;
  
  cleanup_flag = 0xfffffffffffffffe;
  end_ptr = (undefined8 *)container[1];
  for (current_ptr = (undefined8 *)*container; current_ptr != end_ptr; current_ptr = current_ptr + 0xb) {
    (**(code **)*current_ptr)(current_ptr, 0, param_3, param_4, cleanup_flag);
  }
  if (*container == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void Cleanup_Thread_Local_Storage(longlong tls_context)
// 清理线程本地存储
void Cleanup_Thread_Local_Storage(longlong tls_context)
{
  int lock_result;
  longlong data_start;
  uint item_index;
  ulonglong current_offset;
  ulonglong max_offset;
  
  lock_result = _Mtx_lock(tls_context + 0x28);
  if (lock_result != 0) {
    __Throw_C_error_std__YAXH_Z(lock_result);
  }
  max_offset = 0;
  data_start = *(longlong *)(tls_context + 8);
  current_offset = max_offset;
  if (*(longlong *)(tls_context + 0x10) - data_start >> 3 != 0) {
    do {
      if (*(longlong *)(current_offset + data_start) != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(undefined8 *)(current_offset + *(longlong *)(tls_context + 8)) = 0;
      item_index = (int)max_offset + 1;
      max_offset = (ulonglong)item_index;
      data_start = *(longlong *)(tls_context + 8);
      current_offset = current_offset + 8;
    } while ((ulonglong)(longlong)(int)item_index <
             (ulonglong)(*(longlong *)(tls_context + 0x10) - data_start >> 3));
  }
  *(longlong *)(tls_context + 0x10) = data_start;
  lock_result = _Mtx_unlock(tls_context + 0x28);
  if (lock_result != 0) {
    __Throw_C_error_std__YAXH_Z(lock_result);
  }
  return;
}





// 函数: void Cleanup_Object_Manager(longlong *object_manager)
// 清理对象管理器
void Cleanup_Object_Manager(longlong *object_manager)
{
  longlong manager_data;
  
  manager_data = *object_manager;
  if (manager_data == 0) {
    *object_manager = 0;
    if ((longlong *)object_manager[2] != (longlong *)0x0) {
      (**(code **)(*(longlong *)object_manager[2] + 0x38))();
    }
    if ((longlong *)object_manager[1] != (longlong *)0x0) {
      (**(code **)(*(longlong *)object_manager[1] + 0x38))();
    }
    return;
  }
  if (*(longlong *)(manager_data + 8) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  _Mtx_destroy_in_situ();
                    // WARNING: Subroutine does not return
  FUN_18064e900(manager_data);
}





// 函数: void Cleanup_Memory_Pool(longlong memory_pool)
// 清理内存池
void Cleanup_Memory_Pool(longlong memory_pool)
{
  int *ref_count;
  longlong pool_item;
  undefined8 *pool_ptr;
  longlong heap_base;
  ulonglong item_index;
  ulonglong pool_size;
  
  pool_size = *(ulonglong *)(memory_pool + 0x10);
  heap_base = *(longlong *)(memory_pool + 8);
  item_index = 0;
  if (pool_size != 0) {
    do {
      pool_item = *(longlong *)(heap_base + item_index * 8);
      if (pool_item != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(pool_item);
      }
      *(undefined8 *)(heap_base + item_index * 8) = 0;
      item_index = item_index + 1;
    } while (item_index < pool_size);
    pool_size = *(ulonglong *)(memory_pool + 0x10);
  }
  *(undefined8 *)(memory_pool + 0x18) = 0;
  if ((1 < pool_size) && (pool_ptr = *(undefined8 **)(memory_pool + 8), pool_ptr != (undefined8 *)0x0)) {
    pool_size = (ulonglong)pool_ptr & 0xffffffffffc00000;
    if (pool_size != 0) {
      heap_base = pool_size + 0x80 + ((longlong)pool_ptr - pool_size >> 0x10) * 0x50;
      heap_base = heap_base - (ulonglong)*(uint *)(heap_base + 4);
      if ((*(void ***)(pool_size + 0x70) == &ExceptionList) && (*(char *)(heap_base + 0xe) == '\0')) {
        *pool_ptr = *(undefined8 *)(heap_base + 0x20);
        *(undefined8 **)(heap_base + 0x20) = pool_ptr;
        ref_count = (int *)(heap_base + 0x18);
        *ref_count = *ref_count + -1;
        if (*ref_count == 0) {
          FUN_18064d630();
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





// 函数: void Cleanup_Object_Manager_List(longlong *manager_list)
// 清理对象管理器列表
void Cleanup_Object_Manager_List(longlong *manager_list)
{
  longlong list_end;
  longlong current_item;
  
  list_end = manager_list[1];
  for (current_item = *manager_list; current_item != list_end; current_item = current_item + 0x18) {
    FUN_18004bf50(current_item);
  }
  if (*manager_list == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void Cleanup_Callback_List(longlong *callback_list)
// 清理回调列表
void Cleanup_Callback_List(longlong *callback_list)
{
  longlong *list_end;
  longlong *current_callback;
  
  list_end = (longlong *)callback_list[1];
  for (current_callback = (longlong *)*callback_list; current_callback != list_end; current_callback = current_callback + 1) {
    if ((longlong *)*current_callback != (longlong *)0x0) {
      (**(code **)(*(longlong *)*current_callback + 0x38))();
    }
  }
  if (*callback_list == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// 函数: undefined8 * Initialize_Empty_Container(undefined8 *container)
// 初始化空容器
undefined8 * Initialize_Empty_Container(undefined8 *container)
{
  *container = 0;
  container[1] = 0;
  container[2] = 0;
  *(undefined4 *)(container + 3) = 3;
  return container;
}





// 函数: void Cleanup_Manager_Container(longlong *manager_container)
// 清理管理器容器
void Cleanup_Manager_Container(longlong *manager_container)
{
  longlong container_end;
  longlong current_manager;
  
  container_end = manager_container[1];
  for (current_manager = *manager_container; current_manager != container_end; current_manager = current_manager + 0x18) {
    FUN_18004bf50(current_manager);
  }
  if (*manager_container == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void Cleanup_Allocator_Pool(longlong allocator_pool)
// 清理分配器池
void Cleanup_Allocator_Pool(longlong allocator_pool)
{
  int *ref_count;
  longlong pool_item;
  undefined8 *pool_ptr;
  longlong heap_base;
  ulonglong item_index;
  ulonglong pool_size;
  
  pool_size = *(ulonglong *)(allocator_pool + 0x10);
  heap_base = *(longlong *)(allocator_pool + 8);
  item_index = 0;
  if (pool_size != 0) {
    do {
      pool_item = *(longlong *)(heap_base + item_index * 8);
      if (pool_item != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(pool_item);
      }
      *(undefined8 *)(heap_base + item_index * 8) = 0;
      item_index = item_index + 1;
    } while (item_index < pool_size);
    pool_size = *(ulonglong *)(allocator_pool + 0x10);
  }
  *(undefined8 *)(allocator_pool + 0x18) = 0;
  if ((1 < pool_size) && (pool_ptr = *(undefined8 **)(allocator_pool + 8), pool_ptr != (undefined8 *)0x0)) {
    pool_size = (ulonglong)pool_ptr & 0xffffffffffc00000;
    if (pool_size != 0) {
      heap_base = pool_size + 0x80 + ((longlong)pool_ptr - pool_size >> 0x10) * 0x50;
      heap_base = heap_base - (ulonglong)*(uint *)(heap_base + 4);
      if ((*(void ***)(pool_size + 0x70) == &ExceptionList) && (*(char *)(heap_base + 0xe) == '\0')) {
        *pool_ptr = *(undefined8 *)(heap_base + 0x20);
        *(undefined8 **)(heap_base + 0x20) = pool_ptr;
        ref_count = (int *)(heap_base + 0x18);
        *ref_count = *ref_count + -1;
        if (*ref_count == 0) {
          FUN_18064d630();
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





// 函数: void Initialize_System_Context(longlong system_context)
// 初始化系统上下文
void Initialize_System_Context(longlong system_context)

{
  undefined *temp_ptr;
  undefined1 stack_buffer1 [8];
  undefined *stack_buffer2;
  uint temp_uint;
  undefined8 stack_var1;
  undefined8 stack_var2;
  undefined8 stack_var3;
  undefined4 stack_var4;
  undefined8 stack_var5;
  undefined8 stack_var6;
  undefined8 stack_var7;
  undefined4 stack_var8;
  undefined *stack_var9;
  longlong stack_var10;
  undefined4 stack_var11;
  undefined8 cleanup_flag;
  
  cleanup_flag = 0xfffffffffffffffe;
  if (system_context == 0) {


// 函数: void Release_Memory_Block(ulonglong *memory_block)
// 释放内存块
void Release_Memory_Block(ulonglong *memory_block)

{
  int *ref_count;
  undefined8 *block_ptr;
  longlong heap_info;
  ulonglong heap_base;
  
  block_ptr = (undefined8 *)*memory_block;
  if (block_ptr == (undefined8 *)0x0) {
    return;
  }
  heap_base = (ulonglong)block_ptr & 0xffffffffffc00000;
  if (heap_base != 0) {
    heap_info = heap_base + 0x80 + ((longlong)block_ptr - heap_base >> 0x10) * 0x50;
    heap_info = heap_info - (ulonglong)*(uint *)(heap_info + 4);
    if ((*(void ***)(heap_base + 0x70) == &ExceptionList) && (*(char *)(heap_info + 0xe) == '\0')) {
      *block_ptr = *(undefined8 *)(heap_info + 0x20);
      *(undefined8 **)(heap_info + 0x20) = block_ptr;
      ref_count = (int *)(heap_info + 0x18);
      *ref_count = *ref_count + -1;
      if (*ref_count == 0) {
        FUN_18064d630();
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





// 函数: void Iterate_Callback_Container(longlong *callback_container, undefined8 param_2, undefined8 param_3, undefined8 param_4)
// 遍历回调容器
void Iterate_Callback_Container(longlong *callback_container, undefined8 param_2, undefined8 param_3, undefined8 param_4)

{
  undefined8 *end_ptr;
  undefined8 *current_ptr;
  undefined8 cleanup_flag;
  
  cleanup_flag = 0xfffffffffffffffe;
  end_ptr = (undefined8 *)callback_container[1];
  for (current_ptr = (undefined8 *)*callback_container; current_ptr != end_ptr; current_ptr = current_ptr + 4) {
    (**(code **)*current_ptr)(current_ptr, 0, param_3, param_4, cleanup_flag);
  }
  if (*callback_container == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void Validate_System_Pointer(longlong system_ptr)
// 验证系统指针
void Validate_System_Pointer(longlong system_ptr)

{
  uint temp_value;
  longlong check_result;
  
  if (system_ptr == 0) {


// 函数: void Copy_String_To_Global_Buffer(longlong string_ptr)
// 复制字符串到全局缓冲区
void Copy_String_To_Global_Buffer(longlong string_ptr)

{
  uint string_length;
  longlong char_index;
  
  char_index = -1;
  do {
    char_index = char_index + 1;
  } while (*(char *)(string_ptr + char_index) != '\0');
  string_length = (uint)char_index;
  if (0x1fff < string_length) {
    string_length = 0x1fff;
  }
                    // WARNING: Subroutine does not return
  memcpy(&DAT_180c84870, string_ptr, (longlong)(int)string_length);
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



undefined1 *
FUN_18004c330(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)(param_1 + 8);
  *plVar3 = (longlong)&UNK_18098bcb0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *plVar3 = (longlong)&UNK_180a3c3e0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined **)(param_1 + 0x38) = &UNK_18098bcb0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined **)(param_1 + 0x38) = &UNK_180a3c3e0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined **)(param_1 + 0x58) = &UNK_18098bcb0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined **)(param_1 + 0x58) = &UNK_180a3c3e0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  plVar1 = (longlong *)(param_1 + 0x80);
  *plVar1 = (longlong)&UNK_18098bcb0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *plVar1 = (longlong)&UNK_180a3c3e0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  plVar2 = (longlong *)(param_1 + 0xa0);
  *plVar2 = (longlong)&UNK_18098bcb0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *plVar2 = (longlong)&UNK_180a3c3e0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *param_1 = 0;
  (**(code **)(*plVar3 + 0x10))(plVar3,&UNK_1809fd118,&UNK_18098bcb0,param_4,0xfffffffffffffffe);
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[0x7c] = 0;
  param_1[0xc9] = 1;
  (**(code **)(*plVar1 + 0x10))(plVar1,&DAT_1809fd128);
  (**(code **)(*plVar2 + 0x10))(plVar2,&DAT_18098bc73);
  *(undefined4 *)(param_1 + 0xc0) = 0x461c4000;
  *(undefined4 *)(param_1 + 0xc4) = 0x461c4000;
  param_1[200] = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_18004c480(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  longlong lVar10;
  undefined8 *apuStackX_10 [3];
  
  *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 3;
  param_1[0x17] = &UNK_18098bcb0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x17] = &UNK_180a3c3e0;
  param_1[0x1a] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 3;
  plVar1 = param_1 + 0x21;
  *plVar1 = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 3;
  param_1[0x29] = &UNK_18098bcb0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[0x29] = &UNK_180a3c3e0;
  param_1[0x2c] = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  plVar2 = param_1 + 0x2e;
  *plVar2 = (longlong)&UNK_18098bcb0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *plVar2 = (longlong)&UNK_180a3c3e0;
  param_1[0x31] = 0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  plVar3 = param_1 + 0x32;
  *plVar3 = (longlong)&UNK_18098bcb0;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *plVar3 = (longlong)&UNK_18098bc80;
  param_1[0x33] = param_1 + 0x35;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 0x35) = 0;
  plVar7 = param_1 + 0x39;
  *plVar7 = (longlong)&UNK_18098bcb0;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  *plVar7 = (longlong)&UNK_180a3c3e0;
  param_1[0x3c] = 0;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  *(undefined8 *)((longlong)param_1 + 0x254) = 0;
  *(undefined8 *)((longlong)param_1 + 0x25c) = 0;
  param_1[0x4e] = &UNK_18098bcb0;
  param_1[0x4f] = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  param_1[0x4e] = &UNK_180a3c3e0;
  param_1[0x51] = 0;
  param_1[0x4f] = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  param_1[0x52] = &UNK_18098bcb0;
  param_1[0x53] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  param_1[0x52] = &UNK_180a3c3e0;
  param_1[0x55] = 0;
  param_1[0x53] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  param_1[0x58] = &UNK_18098bcb0;
  param_1[0x59] = 0;
  *(undefined4 *)(param_1 + 0x5a) = 0;
  param_1[0x58] = &UNK_180a3c3e0;
  param_1[0x5b] = 0;
  param_1[0x59] = 0;
  *(undefined4 *)(param_1 + 0x5a) = 0;
  puVar6 = param_1 + 0x5c;
  param_1[0x5f] = 0;
  *(undefined4 *)(param_1 + 0x61) = 3;
  *puVar6 = puVar6;
  param_1[0x5d] = puVar6;
  param_1[0x5e] = 0;
  *(undefined1 *)(param_1 + 0x5f) = 0;
  param_1[0x60] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  *(undefined4 *)(param_1 + 0x67) = 3;
  param_1[0x69] = &UNK_18098bcb0;
  param_1[0x6a] = 0;
  *(undefined4 *)(param_1 + 0x6b) = 0;
  param_1[0x69] = &UNK_180a3c3e0;
  param_1[0x6c] = 0;
  param_1[0x6a] = 0;
  *(undefined4 *)(param_1 + 0x6b) = 0;
  apuStackX_10[0] = param_1 + 0x6d;
  *apuStackX_10[0] = &UNK_18098bcb0;
  param_1[0x6e] = 0;
  *(undefined4 *)(param_1 + 0x6f) = 0;
  *apuStackX_10[0] = &UNK_180a3c3e0;
  param_1[0x70] = 0;
  param_1[0x6e] = 0;
  *(undefined4 *)(param_1 + 0x6f) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 99) = 0;
  (**(code **)(*plVar7 + 0x10))
            (plVar7,&UNK_1809fd130,&UNK_180a3c3e0,&UNK_18098bcb0,0xfffffffffffffffe);
  *(undefined4 *)(param_1 + 0x3d) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1ed) = 0x1000001;
  param_1[0x62] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined1 *)((longlong)param_1 + 0x1ec) = 0;
  LOCK();
  *(undefined1 *)(param_1 + 0x79) = 0;
  UNLOCK();
  (**(code **)(*plVar3 + 0x10))(plVar3,&UNK_1809fd140);
  (**(code **)(*plVar2 + 0x10))(plVar2,&DAT_18098bc73);
  *(undefined1 *)(param_1 + 0x2d) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0x1010101;
  *(undefined2 *)((longlong)param_1 + 0xfc) = 0x101;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0xffffffff;
  lVar10 = 8;
  do {
    puVar9 = (undefined4 *)param_1[0x22];
    if (puVar9 < (undefined4 *)param_1[0x23]) {
      param_1[0x22] = puVar9 + 1;
      *puVar9 = 0;
    }
    else {
      puVar8 = (undefined4 *)*plVar1;
      lVar4 = (longlong)puVar9 - (longlong)puVar8 >> 2;
      if (lVar4 == 0) {
        lVar4 = 1;
LAB_18004c7ef:
        puVar5 = (undefined4 *)
                 FUN_18062b420(_DAT_180c8ed18,lVar4 * 4,*(undefined1 *)(param_1 + 0x24));
        puVar9 = (undefined4 *)param_1[0x22];
        puVar8 = (undefined4 *)*plVar1;
      }
      else {
        lVar4 = lVar4 * 2;
        puVar5 = (undefined4 *)0x0;
        if (lVar4 != 0) goto LAB_18004c7ef;
      }
      if (puVar8 != puVar9) {
                    // WARNING: Subroutine does not return
        memmove(puVar5,puVar8,(longlong)puVar9 - (longlong)puVar8);
      }
      *puVar5 = 0;
      if (*plVar1 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *plVar1 = (longlong)puVar5;
      param_1[0x22] = puVar5 + 1;
      param_1[0x23] = puVar5 + lVar4;
    }
    lVar10 = lVar10 + -1;
    if (lVar10 == 0) {
      *(undefined4 *)((longlong)param_1 + 0x24) = 0;
      *(undefined4 *)((longlong)param_1 + 0x29) = 0x1010101;
      *(undefined1 *)(param_1 + 5) = 1;
      *(undefined4 *)(param_1 + 0x71) = 0x3f800000;
      *(undefined1 *)(param_1 + 0x76) = 1;
      *(undefined4 *)(param_1 + 0x25) = 0;
      param_1[0x56] = 0;
      *(undefined8 *)((longlong)param_1 + 0x224) = 0;
      *(undefined1 *)((longlong)param_1 + 0x22c) = 0;
      *(undefined4 *)(param_1 + 0x40) = 0;
      param_1[0x41] = 0;
      puVar6 = _DAT_180c8ed58;
      if (_DAT_180c8ed58 == (undefined8 *)0x0) {
        QueryPerformanceCounter(apuStackX_10);
        puVar6 = apuStackX_10[0];
      }
      param_1[0x42] = (double)((longlong)puVar6 - _DAT_180c8ed48) * _DAT_180c8ed50;
      *(undefined4 *)(param_1 + 0x44) = 0;
      *(undefined1 *)((longlong)param_1 + 0x264) = 0;
      *(undefined4 *)(param_1 + 0x4d) = 0;
      *(undefined8 *)((longlong)param_1 + 500) = 0;
      *(undefined1 *)(param_1 + 0x28) = 0;
      *(undefined1 *)((longlong)param_1 + 0x1fc) = 0;
      param_1[0x7b] = 0;
      param_1[0x57] = 0;
      lVar10 = FUN_18062b1e0(_DAT_180c8ed18,0xc,4,3);
      *(undefined1 *)(lVar10 + 8) = 0;
      param_1[6] = lVar10;
      param_1[0x27] = 0;
      *(undefined1 *)(param_1 + 7) = 0;
      *(undefined4 *)((longlong)param_1 + 0x3c) = 0xffffffff;
      param_1[0x43] = 0;
      *(undefined4 *)(param_1 + 0x26) = 0xffffffff;
      puVar6 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x30,8,3);
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar6[3] = 0;
      puVar6[4] = 0;
      puVar6[5] = 0;
      *puVar6 = &UNK_180a21690;
      *puVar6 = &UNK_180a21720;
      *(undefined4 *)(puVar6 + 1) = 0;
      *puVar6 = &UNK_1809fe070;
      puVar6[2] = 0;
      puVar6[3] = 0;
      puVar6[4] = 0;
      *(undefined4 *)(puVar6 + 5) = 3;
      param_1[0x78] = puVar6;
      return param_1;
    }
  } while( true );
}





// 函数: void FUN_18004ca00(longlong *param_1)
void FUN_18004ca00(longlong *param_1)

{
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 0x38))();
  }
  return;
}



undefined8 *
FUN_18004ca30(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_1[2] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *param_1 = &UNK_180a21720;
  *param_1 = &UNK_180a21690;
  if ((param_2 & 1) != 0) {
    free(param_1,0x30,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}





// 函数: void FUN_18004caa0(undefined8 *param_1)
void FUN_18004caa0(undefined8 *param_1)

{
  if (param_1[2] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *param_1 = &UNK_180a21720;
  *param_1 = &UNK_180a21690;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



