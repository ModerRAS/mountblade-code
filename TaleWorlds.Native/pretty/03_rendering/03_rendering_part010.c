#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

/**
 * 渲染系统模块第010部分 - 渲染数据结构管理
 * 
 * 本文件包含渲染系统的数据结构管理和内存处理函数，共6个函数
 * 主要功能包括：
 * - 渲染数据结构的动态扩容和管理
 * - 渲染资源的分配和释放
 * - 渲染上下文的初始化和清理
 * - 渲染缓冲区的处理
 * - 渲染状态管理
 */

// ============================================================================
// 渲染数据结构管理函数
// ============================================================================

/**
 * 扩展渲染数据结构容量
 * 动态扩展渲染数据结构的容量以适应更多数据
 */
void extend_render_data_structure_capacity(longlong *render_context, ulonglong required_capacity)

{
  void *new_data_ptr;
  uint64_t *current_data_ptr;
  ulonglong new_capacity;
  uint64_t *allocated_buffer;
  ulonglong current_capacity;
  uint64_t *temp_ptr;
  uint64_t *source_ptr;
  uint64_t *dest_ptr;
  void *name_source;
  longlong offset;
  
  current_data_ptr = (uint64_t *)render_context[1];
  if ((ulonglong)((render_context[2] - (longlong)current_data_ptr) / 0x98) < required_capacity) {
    allocated_buffer = (uint64_t *)*render_context;
    offset = ((longlong)current_data_ptr - (longlong)allocated_buffer) / 0x98;
    new_capacity = offset * 2;
    if (offset == 0) {
      new_capacity = 1;
    }
    if (new_capacity < offset + required_capacity) {
      new_capacity = offset + required_capacity;
    }
    temp_ptr = (uint64_t *)0x0;
    if (new_capacity != 0) {
      temp_ptr = (uint64_t *)
               allocate_rendering_memory(_DAT_180c8ed18,new_capacity * 0x98,(char)render_context[3],0x6bca1af286bca1b,
                             0xfffffffffffffffe);
      current_data_ptr = (uint64_t *)render_context[1];
      allocated_buffer = (uint64_t *)*render_context;
    }
    dest_ptr = temp_ptr;
    if (allocated_buffer != current_data_ptr) {
      offset = (longlong)allocated_buffer - (longlong)dest_ptr;
      do {
        *dest_ptr = &unknown_var_720_ptr;
        dest_ptr[1] = 0;
        *(int32_t *)(dest_ptr + 2) = 0;
        *dest_ptr = &unknown_var_3432_ptr;
        dest_ptr[1] = dest_ptr + 3;
        *(int32_t *)(dest_ptr + 2) = 0;
        *(int8_t *)(dest_ptr + 3) = 0;
        *(int32_t *)(dest_ptr + 2) = *(int32_t *)((longlong)dest_ptr + offset + 0x10);
        name_source = *(void **)((longlong)dest_ptr + offset + 8);
        name_source = &system_buffer_ptr;
        if (name_source != (void *)0x0) {
          name_source = name_source;
        }
        strcpy_s(dest_ptr[1],0x80,name_source);
        dest_ptr = dest_ptr + 0x13;
      } while ((uint64_t *)((longlong)dest_ptr + offset) != current_data_ptr);
    }
    if (required_capacity != 0) {
      current_data_ptr = dest_ptr + 1;
      current_capacity = required_capacity;
      do {
        current_data_ptr[-1] = &unknown_var_720_ptr;
        *current_data_ptr = 0;
        *(int32_t *)(current_data_ptr + 1) = 0;
        current_data_ptr[-1] = &unknown_var_3432_ptr;
        *current_data_ptr = current_data_ptr + 2;
        *(int32_t *)(current_data_ptr + 1) = 0;
        *(int8_t *)(current_data_ptr + 2) = 0;
        current_data_ptr = current_data_ptr + 0x13;
        current_capacity = current_capacity - 1;
      } while (current_capacity != 0);
    }
    current_data_ptr = (uint64_t *)render_context[1];
    allocated_buffer = (uint64_t *)*render_context;
    if (allocated_buffer != current_data_ptr) {
      do {
        (**(code **)*allocated_buffer)(allocated_buffer,0);
        allocated_buffer = allocated_buffer + 0x13;
      } while (allocated_buffer != current_data_ptr);
      allocated_buffer = (uint64_t *)*render_context;
    }
    if (allocated_buffer != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      free_rendering_memory(allocated_buffer);
    }
    *render_context = (longlong)temp_ptr;
    render_context[1] = (longlong)(dest_ptr + required_capacity * 0x13);
    render_context[2] = (longlong)(temp_ptr + new_capacity * 0x13);
  }
  else {
    new_capacity = required_capacity;
    if (required_capacity != 0) {
      do {
        *current_data_ptr = &unknown_var_720_ptr;
        current_data_ptr[1] = 0;
        *(int32_t *)(current_data_ptr + 2) = 0;
        *current_data_ptr = &unknown_var_3432_ptr;
        current_data_ptr[1] = current_data_ptr + 3;
        *(int32_t *)(current_data_ptr + 2) = 0;
        *(int8_t *)(current_data_ptr + 3) = 0;
        current_data_ptr = current_data_ptr + 0x13;
        new_capacity = new_capacity - 1;
      } while (new_capacity != 0);
      current_data_ptr = (uint64_t *)render_context[1];
    }
    render_context[1] = (longlong)(current_data_ptr + required_capacity * 0x13);
  }
  return;
}

// ============================================================================
// 渲染资源清理函数
// ============================================================================

/**
 * 清理渲染资源队列
 * 清理渲染资源队列中的所有资源
 */
void cleanup_render_resource_queue(longlong render_manager,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *queue_start;
  uint64_t *queue_end;
  uint64_t cleanup_flag;
  
  cleanup_flag = 0xfffffffffffffffe;
  queue_start = *(uint64_t **)(render_manager + 0x128);
  for (queue_end = *(uint64_t **)(render_manager + 0x120); queue_end != queue_start; queue_end = queue_end + 0xb) {
    (**(code **)*queue_end)(queue_end,0,param_3,param_4,cleanup_flag);
  }
  if (*(longlong *)(render_manager + 0x120) == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  free_rendering_memory();
}

// ============================================================================
// 渲染内存管理函数
// ============================================================================

uint64_t *
initialize_rendering_memory_pool(uint64_t *memory_pool,ulonglong memory_flags,uint64_t param_3,uint64_t param_4)

{
  uint64_t memory_flag;
  
  memory_flag = 0xfffffffffffffffe;
  initialize_rendering_system();
  *memory_pool = &unknown_var_5192_ptr;
  if ((memory_flags & 1) != 0) {
    free(memory_pool,0x1c8,param_3,param_4,memory_flag);
  }
  return memory_pool;
}

// ============================================================================
// 渲染上下文管理函数
// ============================================================================

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong * create_rendering_context(longlong context_params,longlong *context_handle)

{
  uint64_t memory_handle;
  longlong *context_ptr;
  void *name_ptr;
  
  memory_handle = allocate_rendering_memory(_DAT_180c8ed18,0x470,0x10,0x15,0,0xfffffffffffffffe);
  context_ptr = (longlong *)initialize_rendering_context_internal(memory_handle);
  *context_handle = (longlong)context_ptr;
  if (context_ptr != (longlong *)0x0) {
    (**(code **)(*context_ptr + 0x28))(context_ptr);
  }
  *(longlong *)(*context_handle + 0xa8) = context_params;
  name_ptr = &system_buffer_ptr;
  if (*(void **)(context_params + 0x70) != (void *)0x0) {
    name_ptr = *(void **)(context_params + 0x70);
  }
  (**(code **)(*(longlong *)(*context_handle + 0x10) + 0x10))((longlong *)(*context_handle + 0x10),name_ptr);
  return context_handle;
}

// ============================================================================
// 渲染状态更新函数
// ============================================================================

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/**
 * 更新渲染状态
 * 更新渲染系统的状态信息
 */
void update_rendering_state(longlong render_state,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t state_handle;
  longlong *context_ptr;
  uint64_t render_data;
  longlong texture_offset;
  int comparison_result;
  uint64_t *texture_list;
  uint64_t *current_texture;
  uint64_t *previous_texture;
  uint64_t *texture_manager;
  longlong *render_context;
  
  if (*(longlong *)(render_state + 0xb0) == 0) {
    texture_list = (uint64_t *)create_rendering_context(render_state,&render_context,param_3,param_4,0xfffffffffffffffe);
    state_handle = *texture_list;
    *texture_list = 0;
    context_ptr = *(longlong **)(render_state + 0xb0);
    *(uint64_t *)(render_state + 0xb0) = state_handle;
    if (context_ptr != (longlong *)0x0) {
      (**(code **)(*context_ptr + 0x38))();
    }
    if (render_context != (longlong *)0x0) {
      (**(code **)(*render_context + 0x38))();
    }
    *(int8_t *)(*(longlong *)(render_state + 0xb0) + 0xb1) = 1;
    texture_offset = _DAT_180c86930;
    context_ptr = *(longlong **)(render_state + 0xb0);
    comparison_result = (**(code **)(*context_ptr + 0x60))(context_ptr);
    *(int8_t *)((longlong)context_ptr + 0xb2) = 1;
    update_texture_data((longlong)comparison_result * 0x98 + texture_offset + 8,context_ptr);
  }
  texture_manager = (uint64_t *)(_DAT_180c8a9d0 + 0x180);
  texture_list = *(uint64_t **)(_DAT_180c8a9d0 + 400);
  current_texture = texture_manager;
  if (texture_list != (uint64_t *)0x0) {
    do {
      comparison_result = memcmp(texture_list + 4,render_state + 0xc,0x10);
      if (comparison_result < 0) {
        previous_texture = (uint64_t *)*texture_list;
      }
      else {
        previous_texture = (uint64_t *)texture_list[1];
        current_texture = texture_list;
      }
      texture_list = previous_texture;
    } while (previous_texture != (uint64_t *)0x0);
    if ((current_texture != texture_manager) && (comparison_result = memcmp(render_state + 0xc,current_texture + 4,0x10), -1 < comparison_result))
    goto LAB_1802733d5;
  }
  current_texture = texture_manager;
LAB_1802733d5:
  if (current_texture != texture_manager) {
    state_handle = current_texture[6];
    render_data = current_texture[7];
    context_ptr = *(longlong **)(render_state + 0xb0);
    *(int32_t *)(context_ptr + 0x170) = 0;
    **(int8_t **)(context_ptr + 0x168) = 0;
    initialize_render_buffer(context_ptr + 0x160,&unknown_var_7284_ptr,state_handle);
    *(uint64_t *)(context_ptr + 0x148) = state_handle;
    context_ptr = *(longlong **)(render_state + 0xb0);
    *(int32_t *)(context_ptr + 0x1a8) = 0;
    **(int8_t **)(context_ptr + 0x1a0) = 0;
    initialize_render_buffer(context_ptr + 0x198,&unknown_var_7284_ptr,render_data);
    *(uint64_t *)(context_ptr + 0x150) = render_data;
  }
  return;
}

// ============================================================================
// 渲染上下文销毁函数
// ============================================================================

/**
 * 销毁渲染上下文
 * 销毁指定的渲染上下文并释放相关资源
 */
void destroy_rendering_context(longlong render_context)

{
  longlong *context_ptr;
  longlong *temp_context;
  longlong **context_handle;
  
  context_ptr = *(longlong **)(render_context + 0xb0);
  if (context_ptr != (longlong *)0x0) {
    context_handle = &context_ptr;
    (**(code **)(*context_ptr + 0x28))();
    cleanup_rendering_system();
    temp_context = *(longlong **)(render_context + 0xb0);
    *(uint64_t *)(render_context + 0xb0) = 0;
    if (temp_context != (longlong *)0x0) {
                    // WARNING: Could not recover jumptable at 0x0001802734c5. Too many branches
                    // WARNING: Treating indirect jump as call
      (**(code **)(*temp_context + 0x38))();
      return;
    }
  }
  return;
}

// ============================================================================
// 渲染缓冲区处理函数
// ============================================================================

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/**
 * 处理渲染缓冲区
 * 处理渲染缓冲区的数据和管理
 */
void process_rendering_buffer(longlong buffer_manager,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong **buffer_handle;
  char buffer_status;
  int operation_result;
  uint64_t *buffer_ptr;
  longlong *buffer_data;
  longlong *buffer_start;
  longlong *buffer_end;
  longlong buffer_size;
  void *buffer_name;
  longlong *item_ptr;
  longlong *next_item;
  longlong *current_buffer;
  longlong **buffer_lock;
  uint64_t memory_flag;
  
  current_buffer = *(longlong **)(buffer_manager + 0xb0);
  if (current_buffer == (longlong *)0x0) {
    buffer_status = check_buffer_status(0,*(uint64_t *)(*(longlong *)(buffer_manager + 0x88) + 8),param_3,param_4
                                ,0xfffffffffffffffe);
    if (buffer_status != '\0') {
      buffer_ptr = (uint64_t *)create_rendering_context(buffer_manager,&buffer_lock);
      memory_flag = *buffer_ptr;
      *buffer_ptr = 0;
      current_buffer = *(longlong **)(buffer_manager + 0xb0);
      *(uint64_t *)(buffer_manager + 0xb0) = memory_flag;
      if (current_buffer != (longlong *)0x0) {
        (**(code **)(*current_buffer + 0x38))();
      }
      if (buffer_lock != (longlong **)0x0) {
        (*(code *)(*buffer_lock)[7])();
      }
      *(int8_t *)(*(longlong *)(buffer_manager + 0xb0) + 0xb1) = 1;
      initialize_buffer_management();
    }
    return;
  }
  buffer_lock = &current_buffer;
  (**(code **)(*current_buffer + 0x28))();
  cleanup_rendering_system();
  buffer_name = &system_buffer_ptr;
  if (*(void **)(buffer_manager + 0x70) != (void *)0x0) {
    buffer_name = *(void **)(buffer_manager + 0x70);
  }
  buffer_end = (longlong *)(*(longlong *)(buffer_manager + 0xb0) + 0x10);
  (**(code **)(*buffer_end + 0x10))(buffer_end,buffer_name);
  buffer_size = _DAT_180c86930;
  buffer_end = *(longlong **)(buffer_manager + 0xb0);
  operation_result = (**(code **)(*buffer_end + 0x60))(buffer_end);
  *(int8_t *)((longlong)buffer_end + 0xb2) = 1;
  buffer_data = (longlong *)((longlong)operation_result * 0x98 + buffer_size + 8);
  memory_flag = 0xfffffffffffffffe;
  buffer_handle = (longlong **)(buffer_data + 8);
  buffer_lock = buffer_handle;
  operation_result = _Mtx_lock(buffer_handle);
  if (operation_result != 0) {
    __Throw_C_error_std__YAXH_Z(operation_result);
  }
  current_buffer = buffer_end;
  if (buffer_end != (longlong *)0x0) {
    (**(code **)(*buffer_end + 0x28))(buffer_end);
  }
  next_item = (longlong *)buffer_data[1];
  item_ptr = (longlong *)0x0;
  if (next_item < (longlong *)buffer_data[2]) {
    buffer_data[1] = (longlong)(next_item + 1);
    *next_item = (longlong)buffer_end;
    current_buffer = (longlong *)0x0;
    goto LAB_1802abf36;
  }
  buffer_start = (longlong *)*buffer_data;
  buffer_size = (longlong)next_item - (longlong)buffer_start >> 3;
  if (buffer_size == 0) {
    buffer_size = 1;
LAB_1802abea0:
    item_ptr = (longlong *)allocate_rendering_memory(_DAT_180c8ed18,buffer_size * 8,(char)buffer_data[3],param_4,memory_flag);
    next_item = (longlong *)buffer_data[1];
    buffer_start = (longlong *)*buffer_data;
    buffer_end = item_ptr;
  }
  else {
    buffer_size = buffer_size * 2;
    buffer_end = item_ptr;
    if (buffer_size != 0) goto LAB_1802abea0;
  }
  for (; buffer_start != next_item; buffer_start = buffer_start + 1) {
    *item_ptr = *buffer_start;
    *buffer_start = 0;
    item_ptr = item_ptr + 1;
  }
  *item_ptr = (longlong)buffer_end;
  current_buffer = (longlong *)0x0;
  buffer_end = (longlong *)buffer_data[1];
  next_item = (longlong *)*buffer_data;
  if (next_item != buffer_end) {
    do {
      if ((longlong *)*next_item != (longlong *)0x0) {
        (**(code **)(*(longlong *)*next_item + 0x38))();
      }
      next_item = next_item + 1;
    } while (next_item != buffer_end);
    next_item = (longlong *)*buffer_data;
  }
  if (next_item != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
    free_rendering_memory(next_item);
  }
  *buffer_data = (longlong)buffer_end;
  buffer_data[1] = (longlong)(item_ptr + 1);
  buffer_data[2] = (longlong)(buffer_end + buffer_size);
LAB_1802abf36:
  *(int8_t *)(buffer_data + 0x12) = 1;
  operation_result = _Mtx_unlock(buffer_handle);
  if (operation_result != 0) {
    __Throw_C_error_std__YAXH_Z(operation_result);
  }
  return;
}

// ============================================================================
// 渲染对象创建函数
// ============================================================================

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/**
 * 创建渲染对象
 * 创建新的渲染对象并初始化其属性
 */
uint64_t * create_rendering_object(uint64_t object_params,longlong template_data)

{
  int32_t render_flags_1;
  int32_t render_flags_2;
  int32_t render_flags_3;
  uint64_t texture_data;
  uint64_t *render_object;
  
  render_object = (uint64_t *)allocate_rendering_memory(_DAT_180c8ed18,0x1c8,8,3,0xfffffffffffffffe);
  *render_object = &unknown_var_5192_ptr;
  *render_object = &unknown_var_8792_ptr;
  *(int32_t *)(render_object + 1) = 0;
  *(int32_t *)((longlong)render_object + 0xc) = 0;
  *(int32_t *)(render_object + 2) = 0;
  *(int32_t *)((longlong)render_object + 0x14) = 0;
  initialize_render_object_properties(render_object + 3);
  if (template_data != 0) {
    texture_data = *(uint64_t *)(template_data + 0x10);
    render_object[1] = *(uint64_t *)(template_data + 8);
    render_object[2] = texture_data;
    *(int32_t *)(render_object + 3) = *(int32_t *)(template_data + 0x18);
    *(int32_t *)((longlong)render_object + 0x1c) = *(int32_t *)(template_data + 0x1c);
    texture_data = *(uint64_t *)(template_data + 0x28);
    render_object[4] = *(uint64_t *)(template_data + 0x20);
    render_object[5] = texture_data;
    texture_data = *(uint64_t *)(template_data + 0x38);
    render_object[6] = *(uint64_t *)(template_data + 0x30);
    render_object[7] = texture_data;
    texture_data = *(uint64_t *)(template_data + 0x48);
    render_object[8] = *(uint64_t *)(template_data + 0x40);
    render_object[9] = texture_data;
    texture_data = *(uint64_t *)(template_data + 0x58);
    render_object[10] = *(uint64_t *)(template_data + 0x50);
    render_object[0xb] = texture_data;
    texture_data = *(uint64_t *)(template_data + 0x68);
    render_object[0xc] = *(uint64_t *)(template_data + 0x60);
    render_object[0xd] = texture_data;
    texture_data = *(uint64_t *)(template_data + 0x78);
    render_object[0xe] = *(uint64_t *)(template_data + 0x70);
    render_object[0xf] = texture_data;
    texture_data = *(uint64_t *)(template_data + 0x88);
    render_object[0x10] = *(uint64_t *)(template_data + 0x80);
    render_object[0x11] = texture_data;
    texture_data = *(uint64_t *)(template_data + 0x98);
    render_object[0x12] = *(uint64_t *)(template_data + 0x90);
    render_object[0x13] = texture_data;
    texture_data = *(uint64_t *)(template_data + 0xa8);
    render_object[0x14] = *(uint64_t *)(template_data + 0xa0);
    render_object[0x15] = texture_data;
    texture_data = *(uint64_t *)(template_data + 0xb8);
    render_object[0x16] = *(uint64_t *)(template_data + 0xb0);
    render_object[0x17] = texture_data;
    texture_data = *(uint64_t *)(template_data + 200);
    render_object[0x18] = *(uint64_t *)(template_data + 0xc0);
    render_object[0x19] = texture_data;
    texture_data = *(uint64_t *)(template_data + 0xd8);
    render_object[0x1a] = *(uint64_t *)(template_data + 0xd0);
    render_object[0x1b] = texture_data;
    texture_data = *(uint64_t *)(template_data + 0xe8);
    render_object[0x1c] = *(uint64_t *)(template_data + 0xe0);
    render_object[0x1d] = texture_data;
    texture_data = *(uint64_t *)(template_data + 0xf8);
    render_object[0x1e] = *(uint64_t *)(template_data + 0xf0);
    render_object[0x1f] = texture_data;
    texture_data = *(uint64_t *)(template_data + 0x108);
    render_object[0x20] = *(uint64_t *)(template_data + 0x100);
    render_object[0x21] = texture_data;
    texture_data = *(uint64_t *)(template_data + 0x118);
    render_object[0x22] = *(uint64_t *)(template_data + 0x110);
    render_object[0x23] = texture_data;
    render_flags_1 = *(int32_t *)(template_data + 0x124);
    render_flags_2 = *(int32_t *)(template_data + 0x128);
    render_flags_3 = *(int32_t *)(template_data + 300);
    *(int32_t *)(render_object + 0x24) = *(int32_t *)(template_data + 0x120);
    *(int32_t *)((longlong)render_object + 0x124) = render_flags_1;
    *(int32_t *)(render_object + 0x25) = render_flags_2;
    *(int32_t *)((longlong)render_object + 300) = render_flags_3;
    *(int32_t *)(render_object + 0x26) = *(int32_t *)(template_data + 0x130);
    *(int8_t *)((longlong)render_object + 0x134) = *(int8_t *)(template_data + 0x134);
    if (render_object + 0x27 != (uint64_t *)(template_data + 0x138)) {
      copy_render_object_data(render_object + 0x27,*(uint64_t *)(template_data + 0x138),*(uint64_t *)(template_data + 0x140))
      ;
    }
    *(int32_t *)(render_object + 0x2b) = *(int32_t *)(template_data + 0x158);
    *(int32_t *)((longlong)render_object + 0x15c) = *(int32_t *)(template_data + 0x15c);
    *(int32_t *)(render_object + 0x2c) = *(int32_t *)(template_data + 0x160);
    *(int32_t *)((longlong)render_object + 0x164) = *(int32_t *)(template_data + 0x164);
    texture_data = *(uint64_t *)(template_data + 0x170);
    render_object[0x2d] = *(uint64_t *)(template_data + 0x168);
    render_object[0x2e] = texture_data;
    texture_data = *(uint64_t *)(template_data + 0x180);
    render_object[0x2f] = *(uint64_t *)(template_data + 0x178);
    render_object[0x30] = texture_data;
    texture_data = *(uint64_t *)(template_data + 400);
    render_object[0x31] = *(uint64_t *)(template_data + 0x188);
    render_object[0x32] = texture_data;
    texture_data = *(uint64_t *)(template_data + 0x1a0);
    render_object[0x33] = *(uint64_t *)(template_data + 0x198);
    render_object[0x34] = texture_data;
    *(int32_t *)(render_object + 0x35) = *(int32_t *)(template_data + 0x1a8);
    *(int32_t *)((longlong)render_object + 0x1ac) = *(int32_t *)(template_data + 0x1ac);
    *(int32_t *)(render_object + 0x36) = *(int32_t *)(template_data + 0x1b0);
    *(int32_t *)((longlong)render_object + 0x1b4) = *(int32_t *)(template_data + 0x1b4);
    *(int32_t *)(render_object + 0x37) = *(int32_t *)(template_data + 0x1b8);
    *(int32_t *)((longlong)render_object + 0x1bc) = *(int32_t *)(template_data + 0x1bc);
    *(int32_t *)(render_object + 0x38) = *(int32_t *)(template_data + 0x1c0);
    *(int32_t *)((longlong)render_object + 0x1c4) = *(int32_t *)(template_data + 0x1c4);
  }
  return render_object;
}

// ============================================================================
// 渲染上下文转移函数
// ============================================================================

/**
 * 转移渲染上下文
 * 将渲染上下文从一个管理器转移到另一个管理器
 */
void transfer_rendering_context(longlong source_manager,longlong target_manager)

{
  longlong *source_context;
  longlong *target_context;
  longlong **context_handle;
  
  if (*(longlong *)(target_manager + 0xb0) == 0) {
    source_context = *(longlong **)(source_manager + 0xb0);
    if (source_context != (longlong *)0x0) {
      target_context = source_context;
      (**(code **)(*source_context + 0x28))(source_context);
    }
    target_context = *(longlong **)(target_manager + 0xb0);
    *(longlong **)(target_manager + 0xb0) = source_context;
    if (target_context != (longlong *)0x0) {
      (**(code **)(*target_context + 0x38))();
    }
  }
  else {
    context_handle = &target_context;
    target_context = *(longlong **)(source_manager + 0xb0);
    if (target_context != (longlong *)0x0) {
      (**(code **)(*target_context + 0x28))(target_context);
    }
    cleanup_rendering_system();
  }
  if (*(longlong *)(source_manager + 0xb0) != 0) {
    *(longlong *)(*(longlong *)(source_manager + 0xb0) + 0xa8) = target_manager;
    update_rendering_context_data();
  }
  target_context = *(longlong **)(source_manager + 0xb0);
  *(uint64_t *)(source_manager + 0xb0) = 0;
  if (target_context != (longlong *)0x0) {
    (**(code **)(*target_context + 0x38))();
  }
  return;
}

// ============================================================================
// 文件结束标志
// ============================================================================

/**
 * 渲染系统模块第010部分结束
 * 
 * 本文件共包含6个函数，涵盖了渲染系统的数据结构管理功能：
 * - 数据结构容量扩展
 * - 资源队列清理
 * - 内存池管理
 * - 上下文创建和销毁
 * - 状态更新
 * - 对象创建和上下文转移
 * 
 * 下一部分将继续渲染系统的其他功能模块
 */