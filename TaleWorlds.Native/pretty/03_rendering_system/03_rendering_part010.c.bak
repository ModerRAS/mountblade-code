#include "TaleWorlds.Native.Split.h"

// 03_rendering_part010.c - 渲染系统组件第10部分
// 包含6个函数，主要处理渲染对象、内存管理和资源初始化

// 函数: void resize_rendering_array(longlong *array_data, ulonglong new_size)
// 功能: 调整渲染数组的大小，处理内存重新分配和元素迁移
void resize_rendering_array(longlong *array_data, ulonglong new_size)

{
  void *temp_ptr1;
  uint64_t *temp_ptr2;
  ulonglong calculated_size;
  uint64_t *start_ptr;
  uint64_t *end_ptr;
  ulonglong new_capacity;
  uint64_t *alloc_ptr;
  uint64_t *current_ptr;
  void *src_ptr;
  longlong offset;
  
  end_ptr = (uint64_t *)array_data[1];
  if ((ulonglong)((array_data[2] - (longlong)end_ptr) / 0x98) < new_size) {
    start_ptr = (uint64_t *)*array_data;
    offset = ((longlong)end_ptr - (longlong)start_ptr) / 0x98;
    calculated_size = offset * 2;
    if (offset == 0) {
      calculated_size = 1;
    }
    if (calculated_size < offset + new_size) {
      calculated_size = offset + new_size;
    }
    alloc_ptr = (uint64_t *)0x0;
    if (calculated_size != 0) {
      alloc_ptr = (uint64_t *)
               allocate_rendering_memory(_global_memory_pool,calculated_size * 0x98,(char)array_data[3],0x6bca1af286bca1b,
                             0xfffffffffffffffe);
      end_ptr = (uint64_t *)array_data[1];
      start_ptr = (uint64_t *)*array_data;
    }
    current_ptr = alloc_ptr;
    if (start_ptr != end_ptr) {
      offset = (longlong)start_ptr - (longlong)alloc_ptr;
      do {
        *current_ptr = &rendering_vtable_entry1;
        current_ptr[1] = 0;
        *(int32_t *)(current_ptr + 2) = 0;
        *current_ptr = &rendering_vtable_entry2;
        current_ptr[1] = current_ptr + 3;
        *(int32_t *)(current_ptr + 2) = 0;
        *(int8_t *)(current_ptr + 3) = 0;
        *(int32_t *)(current_ptr + 2) = *(int32_t *)((longlong)current_ptr + offset + 0x10);
        temp_ptr1 = *(void **)((longlong)current_ptr + offset + 8);
        src_ptr = &default_rendering_string;
        if (temp_ptr1 != (void *)0x0) {
          src_ptr = temp_ptr1;
        }
        strcpy_s(current_ptr[1],0x80,src_ptr);
        current_ptr = current_ptr + 0x13;
      } while ((uint64_t *)((longlong)current_ptr + offset) != end_ptr);
    }
    if (new_size != 0) {
      end_ptr = current_ptr + 1;
      calculated_size = new_size;
      do {
        end_ptr[-1] = &rendering_vtable_entry1;
        *end_ptr = 0;
        *(int32_t *)(end_ptr + 1) = 0;
        end_ptr[-1] = &rendering_vtable_entry2;
        *end_ptr = end_ptr + 2;
        *(int32_t *)(end_ptr + 1) = 0;
        *(int8_t *)(end_ptr + 2) = 0;
        end_ptr = end_ptr + 0x13;
        calculated_size = calculated_size - 1;
      } while (calculated_size != 0);
    }
    end_ptr = (uint64_t *)array_data[1];
    start_ptr = (uint64_t *)*array_data;
    if (start_ptr != end_ptr) {
      do {
        (**(code **)*start_ptr)(start_ptr,0);
        start_ptr = start_ptr + 0x13;
      } while (start_ptr != end_ptr);
      start_ptr = (uint64_t *)*array_data;
    }
    if (start_ptr != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      free_rendering_memory(start_ptr);
    }
    *array_data = (longlong)alloc_ptr;
    array_data[1] = (longlong)(current_ptr + new_size * 0x13);
    array_data[2] = (longlong)(alloc_ptr + calculated_size * 0x13);
  }
  else {
    calculated_size = new_size;
    if (new_size != 0) {
      do {
        *end_ptr = &rendering_vtable_entry1;
        end_ptr[1] = 0;
        *(int32_t *)(end_ptr + 2) = 0;
        *end_ptr = &rendering_vtable_entry2;
        end_ptr[1] = end_ptr + 3;
        *(int32_t *)(end_ptr + 2) = 0;
        *(int8_t *)(end_ptr + 3) = 0;
        end_ptr = end_ptr + 0x13;
        calculated_size = calculated_size - 1;
      } while (calculated_size != 0);
      end_ptr = (uint64_t *)array_data[1];
    }
    array_data[1] = (longlong)(end_ptr + new_size * 0x13);
  }
  return;
}





// 函数: void cleanup_rendering_resources(longlong resource_handle, uint64_t param2, uint64_t param3, uint64_t param4)
// 功能: 清理渲染资源，释放相关内存
void cleanup_rendering_resources(longlong resource_handle, uint64_t param2, uint64_t param3, uint64_t param4)

{
  uint64_t *current_ptr;
  uint64_t *end_ptr;
  uint64_t cleanup_flag;
  
  cleanup_flag = 0xfffffffffffffffe;
  end_ptr = *(uint64_t **)(resource_handle + 0x128);
  for (current_ptr = *(uint64_t **)(resource_handle + 0x120); current_ptr != end_ptr; current_ptr = current_ptr + 0xb) {
    (**(code **)*current_ptr)(current_ptr,0,param3,param4,cleanup_flag);
  }
  if (*(longlong *)(resource_handle + 0x120) == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  free_all_rendering_resources();
}



// 函数: uint64_t *initialize_rendering_object(uint64_t *object_ptr, ulonglong flags, uint64_t param3, uint64_t param4)
// 功能: 初始化渲染对象，设置虚函数表
uint64_t *
initialize_rendering_object(uint64_t *object_ptr, ulonglong flags, uint64_t param3, uint64_t param_4)

{
  uint64_t init_flag;
  
  init_flag = 0xfffffffffffffffe;
  initialize_rendering_system();
  *object_ptr = &rendering_object_vtable;
  if ((flags & 1) != 0) {
    free(object_ptr,0x1c8,param3,param4,init_flag);
  }
  return object_ptr;
}



// 函数: longlong *create_rendering_context(longlong context_handle, longlong *output_ptr)
// 功能: 创建渲染上下文，初始化相关数据结构
longlong * create_rendering_context(longlong context_handle, longlong *output_ptr)

{
  uint64_t allocation_handle;
  longlong *context_data;
  void *name_ptr;
  
  allocation_handle = allocate_context_memory(_global_memory_pool,0x470,0x10,0x15,0,0xfffffffffffffffe);
  context_data = (longlong *)initialize_context_data(allocation_handle);
  *output_ptr = (longlong)context_data;
  if (context_data != (longlong *)0x0) {
    (**(code **)(*context_data + 0x28))(context_data);
  }
  *(longlong *)(*output_ptr + 0xa8) = context_handle;
  name_ptr = &default_context_name;
  if (*(void **)(context_handle + 0x70) != (void *)0x0) {
    name_ptr = *(void **)(context_handle + 0x70);
  }
  (**(code **)(*(longlong *)(*output_ptr + 0x10) + 0x10))((longlong *)(*output_ptr + 0x10),name_ptr);
  return output_ptr;
}



// 函数: void setup_rendering_pipeline(longlong pipeline_handle, uint64_t param2, uint64_t param3, uint64_t param4)
// 功能: 设置渲染管线，配置渲染状态和参数
void setup_rendering_pipeline(longlong pipeline_handle, uint64_t param2, uint64_t param3, uint64_t param4)

{
  uint64_t pipeline_data;
  longlong *context_ptr;
  uint64_t texture_handle;
  longlong shader_handle;
  int compare_result;
  uint64_t *node_ptr;
  uint64_t *parent_ptr;
  uint64_t *current_node;
  longlong *stack_ptr;
  
  if (*(longlong *)(pipeline_handle + 0xb0) == 0) {
    node_ptr = (uint64_t *)create_rendering_context(pipeline_handle,&stack_ptr,param3,param4,0xfffffffffffffffe);
    pipeline_data = *node_ptr;
    *node_ptr = 0;
    context_ptr = *(longlong **)(pipeline_handle + 0xb0);
    *(uint64_t *)(pipeline_handle + 0xb0) = pipeline_data;
    if (context_ptr != (longlong *)0x0) {
      (**(code **)(*context_ptr + 0x38))();
    }
    if (stack_ptr != (longlong *)0x0) {
      (**(code **)(*stack_ptr + 0x38))();
    }
    *(int8_t *)(*(longlong *)(pipeline_handle + 0xb0) + 0xb1) = 1;
    shader_handle = _shader_database_address;
    context_ptr = *(longlong **)(pipeline_handle + 0xb0);
    compare_result = (**(code **)(*context_ptr + 0x60))(context_ptr);
    *(int8_t *)((longlong)context_ptr + 0xb2) = 1;
    load_shader_data((longlong)compare_result * 0x98 + shader_handle + 8,context_ptr);
  }
  current_node = (uint64_t *)(_render_state_tree + 0x180);
  node_ptr = *(uint64_t **)(_render_state_tree + 400);
  parent_ptr = current_node;
  if (node_ptr != (uint64_t *)0x0) {
    do {
      compare_result = memcmp(node_ptr + 4,pipeline_handle + 0xc,0x10);
      if (compare_result < 0) {
        current_node = (uint64_t *)*node_ptr;
      }
      else {
        current_node = (uint64_t *)node_ptr[1];
        parent_ptr = node_ptr;
      }
      node_ptr = current_node;
    } while (current_node != (uint64_t *)0x0);
    if ((parent_ptr != current_node) && (compare_result = memcmp(pipeline_handle + 0xc,parent_ptr + 4,0x10), -1 < compare_result))
    goto LAB_1802733d5;
  }
  parent_ptr = current_node;
LAB_1802733d5:
  if (parent_ptr != current_node) {
    pipeline_data = parent_ptr[6];
    texture_handle = parent_ptr[7];
    context_ptr = *(longlong **)(pipeline_handle + 0xb0);
    *(int32_t *)(context_ptr + 0x170) = 0;
    **(int8_t **)(context_ptr + 0x168) = 0;
    initialize_texture_buffer(context_ptr + 0x160,&default_texture_config,pipeline_data);
    *(uint64_t *)(context_ptr + 0x148) = pipeline_data;
    context_ptr = *(longlong **)(pipeline_handle + 0xb0);
    *(int32_t *)(context_ptr + 0x1a8) = 0;
    **(int8_t **)(context_ptr + 0x1a0) = 0;
    initialize_texture_buffer(context_ptr + 0x198,&default_texture_config,texture_handle);
    *(uint64_t *)(context_ptr + 0x150) = texture_handle;
  }
  return;
}





// 函数: void destroy_rendering_pipeline(longlong pipeline_handle)
// 功能: 销毁渲染管线，释放相关资源
void destroy_rendering_pipeline(longlong pipeline_handle)

{
  longlong *context_data;
  longlong *temp_ptr;
  longlong **context_ptr;
  
  context_data = *(longlong **)(pipeline_handle + 0xb0);
  if (context_data != (longlong *)0x0) {
    context_ptr = &context_data;
    (**(code **)(*context_data + 0x28))();
    cleanup_rendering_state();
    temp_ptr = *(longlong **)(pipeline_handle + 0xb0);
    *(uint64_t *)(pipeline_handle + 0xb0) = 0;
    if (temp_ptr != (longlong *)0x0) {
                    // WARNING: Could not recover jumptable at 0x0001802734c5. Too many branches
                    // WARNING: Treating indirect jump as call
      (**(code **)(*temp_ptr + 0x38))();
      return;
    }
  }
  return;
}



// 函数: void update_rendering_state(longlong state_handle, uint64_t param2, uint64_t param3, uint64_t param4)
// 功能: 更新渲染状态，处理状态变化和资源管理
void update_rendering_state(longlong state_handle, uint64_t param2, uint64_t param3, uint64_t param4)

{
  longlong **state_ptr;
  char init_flag;
  int status_code;
  uint64_t *temp_ptr;
  longlong *context_ptr;
  longlong *buffer_ptr;
  longlong *queue_ptr;
  longlong array_size;
  void *resource_name;
  longlong *element_ptr;
  longlong *next_ptr;
  longlong *current_context;
  longlong *stack_context;
  longlong **queue_lock;
  uint64_t allocation_flag;
  
  current_context = *(longlong **)(state_handle + 0xb0);
  if (current_context == (longlong *)0x0) {
    init_flag = check_rendering_capability(0,*(uint64_t *)(*(longlong *)(state_handle + 0x88) + 8),param3,param4
                                ,0xfffffffffffffffe);
    if (init_flag != '\0') {
      temp_ptr = (uint64_t *)create_rendering_context(state_handle,&queue_lock);
      allocation_flag = *temp_ptr;
      *temp_ptr = 0;
      current_context = *(longlong **)(state_handle + 0xb0);
      *(uint64_t *)(state_handle + 0xb0) = allocation_flag;
      if (current_context != (longlong *)0x0) {
        (**(code **)(*current_context + 0x38))();
      }
      if (queue_lock != (longlong **)0x0) {
        (*(code *)(*queue_lock)[7])();
      }
      *(int8_t *)(*(longlong *)(state_handle + 0xb0) + 0xb1) = 1;
      initialize_rendering_thread();
    }
    return;
  }
  queue_lock = &current_context;
  (**(code **)(*current_context + 0x28))();
  cleanup_rendering_state();
  resource_name = &default_resource_name;
  if (*(void **)(state_handle + 0x70) != (void *)0x0) {
    resource_name = *(void **)(state_handle + 0x70);
  }
  context_ptr = (longlong *)(*(longlong *)(state_handle + 0xb0) + 0x10);
  (**(code **)(*context_ptr + 0x10))(context_ptr,resource_name);
  array_size = _shader_database_address;
  context_ptr = *(longlong **)(state_handle + 0xb0);
  status_code = (**(code **)(*context_ptr + 0x60))(context_ptr);
  *(int8_t *)((longlong)context_ptr + 0xb2) = 1;
  queue_ptr = (longlong *)((longlong)status_code * 0x98 + array_size + 8);
  allocation_flag = 0xfffffffffffffffe;
  state_ptr = (longlong **)(queue_ptr + 8);
  queue_lock = state_ptr;
  status_code = _Mtx_lock(state_ptr);
  if (status_code != 0) {
    __Throw_C_error_std__YAXH_Z(status_code);
  }
  current_context = context_ptr;
  if (context_ptr != (longlong *)0x0) {
    (**(code **)(*context_ptr + 0x28))(context_ptr);
  }
  element_ptr = (longlong *)queue_ptr[1];
  buffer_ptr = (longlong *)0x0;
  if (element_ptr < (longlong *)queue_ptr[2]) {
    queue_ptr[1] = (longlong)(element_ptr + 1);
    *element_ptr = (longlong)context_ptr;
    current_context = (longlong *)0x0;
    goto LAB_1802abf36;
  }
  next_ptr = (longlong *)*queue_ptr;
  array_size = (longlong)element_ptr - (longlong)next_ptr >> 3;
  if (array_size == 0) {
    array_size = 1;
LAB_1802abea0:
    buffer_ptr = (longlong *)allocate_rendering_memory(_global_memory_pool,array_size * 8,(char)queue_ptr[3],param4,allocation_flag);
    element_ptr = (longlong *)queue_ptr[1];
    next_ptr = (longlong *)*queue_ptr;
    context_ptr = buffer_ptr;
  }
  else {
    array_size = array_size * 2;
    context_ptr = buffer_ptr;
    if (array_size != 0) goto LAB_1802abea0;
  }
  for (; next_ptr != element_ptr; next_ptr = next_ptr + 1) {
    *buffer_ptr = *next_ptr;
    *next_ptr = 0;
    buffer_ptr = buffer_ptr + 1;
  }
  *buffer_ptr = (longlong)context_ptr;
  current_context = (longlong *)0x0;
  context_ptr = (longlong *)queue_ptr[1];
  element_ptr = (longlong *)*queue_ptr;
  if (element_ptr != context_ptr) {
    do {
      if ((longlong *)*element_ptr != (longlong *)0x0) {
        (**(code **)(*(longlong *)*element_ptr + 0x38))();
      }
      element_ptr = element_ptr + 1;
    } while (element_ptr != context_ptr);
    element_ptr = (longlong *)*queue_ptr;
  }
  if (element_ptr != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
    free_rendering_memory(element_ptr);
  }
  *queue_ptr = (longlong)context_ptr;
  queue_ptr[1] = (longlong)(buffer_ptr + 1);
  queue_ptr[2] = (longlong)(context_ptr + array_size);
LAB_1802abf36:
  *(int8_t *)(queue_ptr + 0x12) = 1;
  status_code = _Mtx_unlock(state_ptr);
  if (status_code != 0) {
    __Throw_C_error_std__YAXH_Z(status_code);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: uint64_t *create_rendering_buffer(uint64_t buffer_handle, longlong config_ptr)
// 功能: 创建渲染缓冲区，根据配置参数初始化缓冲区数据
uint64_t * create_rendering_buffer(uint64_t buffer_handle, longlong config_ptr)

{
  int32_t width;
  int32_t height;
  int32_t depth;
  uint64_t pixel_format;
  uint64_t *buffer_ptr;
  
  buffer_ptr = (uint64_t *)allocate_buffer_memory(_global_memory_pool,0x1c8,8,3,0xfffffffffffffffe);
  *buffer_ptr = &rendering_buffer_vtable1;
  *buffer_ptr = &rendering_buffer_vtable2;
  *(int32_t *)(buffer_ptr + 1) = 0;
  *(int32_t *)((longlong)buffer_ptr + 0xc) = 0;
  *(int32_t *)(buffer_ptr + 2) = 0;
  *(int32_t *)((longlong)buffer_ptr + 0x14) = 0;
  initialize_buffer_data(buffer_ptr + 3);
  if (config_ptr != 0) {
    pixel_format = *(uint64_t *)(config_ptr + 0x10);
    buffer_ptr[1] = *(uint64_t *)(config_ptr + 8);
    buffer_ptr[2] = pixel_format;
    *(int32_t *)(buffer_ptr + 3) = *(int32_t *)(config_ptr + 0x18);
    *(int32_t *)((longlong)buffer_ptr + 0x1c) = *(int32_t *)(config_ptr + 0x1c);
    pixel_format = *(uint64_t *)(config_ptr + 0x28);
    buffer_ptr[4] = *(uint64_t *)(config_ptr + 0x20);
    buffer_ptr[5] = pixel_format;
    pixel_format = *(uint64_t *)(config_ptr + 0x38);
    buffer_ptr[6] = *(uint64_t *)(config_ptr + 0x30);
    buffer_ptr[7] = pixel_format;
    pixel_format = *(uint64_t *)(config_ptr + 0x48);
    buffer_ptr[8] = *(uint64_t *)(config_ptr + 0x40);
    buffer_ptr[9] = pixel_format;
    pixel_format = *(uint64_t *)(config_ptr + 0x58);
    buffer_ptr[10] = *(uint64_t *)(config_ptr + 0x50);
    buffer_ptr[0xb] = pixel_format;
    pixel_format = *(uint64_t *)(config_ptr + 0x68);
    buffer_ptr[0xc] = *(uint64_t *)(config_ptr + 0x60);
    buffer_ptr[0xd] = pixel_format;
    pixel_format = *(uint64_t *)(config_ptr + 0x78);
    buffer_ptr[0xe] = *(uint64_t *)(config_ptr + 0x70);
    buffer_ptr[0xf] = pixel_format;
    pixel_format = *(uint64_t *)(config_ptr + 0x88);
    buffer_ptr[0x10] = *(uint64_t *)(config_ptr + 0x80);
    buffer_ptr[0x11] = pixel_format;
    pixel_format = *(uint64_t *)(config_ptr + 0x98);
    buffer_ptr[0x12] = *(uint64_t *)(config_ptr + 0x90);
    buffer_ptr[0x13] = pixel_format;
    pixel_format = *(uint64_t *)(config_ptr + 0xa8);
    buffer_ptr[0x14] = *(uint64_t *)(config_ptr + 0xa0);
    buffer_ptr[0x15] = pixel_format;
    pixel_format = *(uint64_t *)(config_ptr + 0xb8);
    buffer_ptr[0x16] = *(uint64_t *)(config_ptr + 0xb0);
    buffer_ptr[0x17] = pixel_format;
    pixel_format = *(uint64_t *)(config_ptr + 200);
    buffer_ptr[0x18] = *(uint64_t *)(config_ptr + 0xc0);
    buffer_ptr[0x19] = pixel_format;
    pixel_format = *(uint64_t *)(config_ptr + 0xd8);
    buffer_ptr[0x1a] = *(uint64_t *)(config_ptr + 0xd0);
    buffer_ptr[0x1b] = pixel_format;
    pixel_format = *(uint64_t *)(config_ptr + 0xe8);
    buffer_ptr[0x1c] = *(uint64_t *)(config_ptr + 0xe0);
    buffer_ptr[0x1d] = pixel_format;
    pixel_format = *(uint64_t *)(config_ptr + 0xf8);
    buffer_ptr[0x1e] = *(uint64_t *)(config_ptr + 0xf0);
    buffer_ptr[0x1f] = pixel_format;
    pixel_format = *(uint64_t *)(config_ptr + 0x108);
    buffer_ptr[0x20] = *(uint64_t *)(config_ptr + 0x100);
    buffer_ptr[0x21] = pixel_format;
    pixel_format = *(uint64_t *)(config_ptr + 0x118);
    buffer_ptr[0x22] = *(uint64_t *)(config_ptr + 0x110);
    buffer_ptr[0x23] = pixel_format;
    width = *(int32_t *)(config_ptr + 0x124);
    height = *(int32_t *)(config_ptr + 0x128);
    depth = *(int32_t *)(config_ptr + 300);
    *(int32_t *)(buffer_ptr + 0x24) = *(int32_t *)(config_ptr + 0x120);
    *(int32_t *)((longlong)buffer_ptr + 0x124) = width;
    *(int32_t *)(buffer_ptr + 0x25) = height;
    *(int32_t *)((longlong)buffer_ptr + 300) = depth;
    *(int32_t *)(buffer_ptr + 0x26) = *(int32_t *)(config_ptr + 0x130);
    *(int8_t *)((longlong)buffer_ptr + 0x134) = *(int8_t *)(config_ptr + 0x134);
    if (buffer_ptr + 0x27 != (uint64_t *)(config_ptr + 0x138)) {
      copy_buffer_data(buffer_ptr + 0x27,*(uint64_t *)(config_ptr + 0x138),*(uint64_t *)(config_ptr + 0x140))
      ;
    }
    *(int32_t *)(buffer_ptr + 0x2b) = *(int32_t *)(config_ptr + 0x158);
    *(int32_t *)((longlong)buffer_ptr + 0x15c) = *(int32_t *)(config_ptr + 0x15c);
    *(int32_t *)(buffer_ptr + 0x2c) = *(int32_t *)(config_ptr + 0x160);
    *(int32_t *)((longlong)buffer_ptr + 0x164) = *(int32_t *)(config_ptr + 0x164);
    pixel_format = *(uint64_t *)(config_ptr + 0x170);
    buffer_ptr[0x2d] = *(uint64_t *)(config_ptr + 0x168);
    buffer_ptr[0x2e] = pixel_format;
    pixel_format = *(uint64_t *)(config_ptr + 0x180);
    buffer_ptr[0x2f] = *(uint64_t *)(config_ptr + 0x178);
    buffer_ptr[0x30] = pixel_format;
    pixel_format = *(uint64_t *)(config_ptr + 400);
    buffer_ptr[0x31] = *(uint64_t *)(config_ptr + 0x188);
    buffer_ptr[0x32] = pixel_format;
    pixel_format = *(uint64_t *)(config_ptr + 0x1a0);
    buffer_ptr[0x33] = *(uint64_t *)(config_ptr + 0x198);
    buffer_ptr[0x34] = pixel_format;
    *(int32_t *)(buffer_ptr + 0x35) = *(int32_t *)(config_ptr + 0x1a8);
    *(int32_t *)((longlong)buffer_ptr + 0x1ac) = *(int32_t *)(config_ptr + 0x1ac);
    *(int32_t *)(buffer_ptr + 0x36) = *(int32_t *)(config_ptr + 0x1b0);
    *(int32_t *)((longlong)buffer_ptr + 0x1b4) = *(int32_t *)(config_ptr + 0x1b4);
    *(int32_t *)(buffer_ptr + 0x37) = *(int32_t *)(config_ptr + 0x1b8);
    *(int32_t *)((longlong)buffer_ptr + 0x1bc) = *(int32_t *)(config_ptr + 0x1bc);
    *(int32_t *)(buffer_ptr + 0x38) = *(int32_t *)(config_ptr + 0x1c0);
    *(int32_t *)((longlong)buffer_ptr + 0x1c4) = *(int32_t *)(config_ptr + 0x1c4);
  }
  return buffer_ptr;
}





// 函数: void transfer_rendering_context(longlong source_context, longlong target_context)
// 功能: 转移渲染上下文，处理资源所有权和内存管理
void transfer_rendering_context(longlong source_context, longlong target_context)

{
  longlong *source_ptr;
  longlong *target_ptr;
  longlong **context_ptr;
  
  if (*(longlong *)(target_context + 0xb0) == 0) {
    source_ptr = *(longlong **)(source_context + 0xb0);
    if (source_ptr != (longlong *)0x0) {
      target_ptr = source_ptr;
      (**(code **)(*source_ptr + 0x28))(source_ptr);
    }
    target_ptr = *(longlong **)(target_context + 0xb0);
    *(longlong **)(target_context + 0xb0) = source_ptr;
    if (target_ptr != (longlong *)0x0) {
      (**(code **)(*target_ptr + 0x38))();
    }
  }
  else {
    context_ptr = &target_ptr;
    target_ptr = *(longlong **)(source_context + 0xb0);
    if (target_ptr != (longlong *)0x0) {
      (**(code **)(*target_ptr + 0x28))(target_ptr);
    }
    cleanup_rendering_state();
  }
  if (*(longlong *)(source_context + 0xb0) != 0) {
    *(longlong *)(*(longlong *)(source_context + 0xb0) + 0xa8) = target_context;
    update_context_reference();
  }
  target_ptr = *(longlong **)(source_context + 0xb0);
  *(uint64_t *)(source_context + 0xb0) = 0;
  if (target_ptr != (longlong *)0x0) {
    (**(code **)(*target_ptr + 0x38))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



