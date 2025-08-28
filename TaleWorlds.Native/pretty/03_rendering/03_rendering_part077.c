#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 03_rendering_part077.c - 渲染系统高级数据处理和渲染控制模块
// 包含9个核心函数，涵盖渲染对象处理、数据复制、内存管理、资源清理、
// 状态检查、对象创建、对象销毁、渲染参数设置和高级渲染控制等功能

// 函数别名定义
#define rendering_system_process_render_objects_batch FUN_18030cab0
#define rendering_system_copy_render_object_data FUN_18030ccf0
#define rendering_system_check_render_object_state FUN_18030cd70
#define rendering_system_reset_render_object_data FUN_18030cdf0
#define rendering_system_create_render_object_helper FUN_18030ce70
#define rendering_system_initialize_render_object_controller FUN_18030cef0
#define rendering_system_destroy_render_object_controller FUN_18030d110
#define rendering_system_cleanup_render_object_controller FUN_18030d150
#define rendering_system_create_render_object_manager FUN_18030d400
#define rendering_system_process_render_objects_batch_helper FUN_18030d4d0
#define rendering_system_process_render_objects_single_helper FUN_18030d51b
#define rendering_system_empty_function_1 FUN_18030d67f
#define rendering_system_release_render_object_manager FUN_18030d690
#define rendering_system_add_render_object_to_queue FUN_18030d6e0
#define rendering_system_render_objects_with_parameters FUN_18030d960

// 全局变量定义
#define RENDER_OBJECT_POOL_SIZE 0x128
#define RENDER_OBJECT_FLAG_MASK 0xfffffffffffffffe
#define RENDER_OBJECT_COLOR_COMPONENTS 0x003921569
#define RENDER_OBJECT_DATA_SIZE 0xd0
#define RENDER_OBJECT_VERTEX_COUNT 3

// 函数: 渲染系统批量处理渲染对象
// 参数: render_context - 渲染上下文指针, param_2 - 渲染参数
void rendering_system_process_render_objects_batch(int64_t *render_context, uint64_t render_params)

{
  uint64_t *object_ptr;
  int32_t *data_ptr;
  int32_t temp_var1;
  int32_t temp_var2;
  int32_t temp_var3;
  uint64_t temp_var4;
  int64_t context_start;
  int64_t context_end;
  uint64_t *temp_ptr;
  int64_t allocated_memory;
  int64_t loop_counter;
  int64_t object_count;
  int64_t batch_size;
  uint64_t memory_flag;
  
  memory_flag = RENDER_OBJECT_FLAG_MASK;
  context_start = render_context[1];
  context_end = *render_context;
  batch_size = (context_start - context_end) / RENDER_OBJECT_POOL_SIZE;
  if (batch_size == 0) {
    batch_size = 1;
  }
  else {
    batch_size = batch_size * 2;
    if (batch_size == 0) {
      allocated_memory = 0;
      goto memory_allocation_complete;
    }
  }
  allocated_memory = FUN_18062b420(system_memory_pool_ptr, batch_size * RENDER_OBJECT_POOL_SIZE, (char)render_context[3]);
  context_start = render_context[1];
  context_end = *render_context;
memory_allocation_complete:
  loop_counter = allocated_memory;
  if (context_end != context_start) {
    context_end = context_end - allocated_memory;
    object_ptr = (uint64_t *)(allocated_memory + 0x110);
    do {
      FUN_1808fcf5c(loop_counter, (int64_t)object_ptr + context_end + -0x110, 0x58, 2, FUN_18030ccf0, FUN_1800f88f0,
                    memory_flag, loop_counter);
      *(int32_t *)(object_ptr + -0xc) = *(int32_t *)(context_end + -0x60 + (int64_t)object_ptr);
      temp_ptr = (uint64_t *)(context_end + -0x5c + (int64_t)object_ptr);
      temp_var4 = temp_ptr[1];
      *(uint64_t *)((int64_t)object_ptr + -0x5c) = *temp_ptr;
      *(uint64_t *)((int64_t)object_ptr + -0x54) = temp_var4;
      temp_ptr = (uint64_t *)(context_end + -0x4c + (int64_t)object_ptr);
      temp_var4 = temp_ptr[1];
      *(uint64_t *)((int64_t)object_ptr + -0x4c) = *temp_ptr;
      *(uint64_t *)((int64_t)object_ptr + -0x44) = temp_var4;
      temp_ptr = (uint64_t *)(context_end + -0x3c + (int64_t)object_ptr);
      temp_var4 = temp_ptr[1];
      *(uint64_t *)((int64_t)object_ptr + -0x3c) = *temp_ptr;
      *(uint64_t *)((int64_t)object_ptr + -0x34) = temp_var4;
      data_ptr = (int32_t *)(context_end + -0x2c + (int64_t)object_ptr);
      temp_var1 = data_ptr[1];
      temp_var2 = data_ptr[2];
      temp_var3 = data_ptr[3];
      *(int32_t *)((int64_t)object_ptr + -0x2c) = *data_ptr;
      *(int32_t *)(object_ptr + -5) = temp_var1;
      *(int32_t *)((int64_t)object_ptr + -0x24) = temp_var2;
      *(int32_t *)(object_ptr + -4) = temp_var3;
      temp_ptr = (uint64_t *)(context_end + -0x1c + (int64_t)object_ptr);
      temp_var4 = temp_ptr[1];
      *(uint64_t *)((int64_t)object_ptr + -0x1c) = *temp_ptr;
      *(uint64_t *)((int64_t)object_ptr + -0x14) = temp_var4;
      object_ptr[-1] = &system_state_ptr;
      *object_ptr = 0;
      *(int32_t *)(object_ptr + 1) = 0;
      object_ptr[-1] = &system_data_buffer_ptr;
      object_ptr[2] = 0;
      *object_ptr = 0;
      *(int32_t *)(object_ptr + 1) = 0;
      *(int32_t *)(object_ptr + 1) = *(int32_t *)(context_end + 8 + (int64_t)object_ptr);
      *object_ptr = *(uint64_t *)(context_end + (int64_t)object_ptr);
      *(int32_t *)((int64_t)object_ptr + 0x14) = *(int32_t *)(context_end + 0x14 + (int64_t)object_ptr);
      *(int32_t *)(object_ptr + 2) = *(int32_t *)(context_end + 0x10 + (int64_t)object_ptr);
      *(int32_t *)(context_end + 8 + (int64_t)object_ptr) = 0;
      *(uint64_t *)(context_end + (int64_t)object_ptr) = 0;
      *(uint64_t *)(context_end + 0x10 + (int64_t)object_ptr) = 0;
      loop_counter = loop_counter + RENDER_OBJECT_POOL_SIZE;
      object_count = (int64_t)object_ptr + context_end + 0x18;
      object_ptr = object_ptr + 0x25;
    } while (object_count != context_start);
  }
  FUN_1800f8570(loop_counter, render_params);
  context_start = render_context[1];
  context_end = *render_context;
  if (context_end != context_start) {
    do {
      FUN_1800f8930(context_end);
      context_end = context_end + RENDER_OBJECT_POOL_SIZE;
    } while (context_end != context_start);
    context_end = *render_context;
  }
  if (context_end == 0) {
    *render_context = allocated_memory;
    render_context[1] = loop_counter + RENDER_OBJECT_POOL_SIZE;
    render_context[2] = batch_size * RENDER_OBJECT_POOL_SIZE + allocated_memory;
    return;
  }
  FUN_18064e900(context_end);
}



// 函数: 复制渲染对象数据
// 参数: dest_ptr - 目标指针, src_ptr - 源指针
// 返回值: 目标指针
uint64_t *rendering_system_copy_render_object_data(uint64_t *dest_ptr, uint64_t *src_ptr)

{
  *dest_ptr = *src_ptr;
  dest_ptr[1] = src_ptr[1];
  *(int32_t *)(dest_ptr + 2) = *(int32_t *)(src_ptr + 2);
  FUN_1808fcf5c(dest_ptr + 3, src_ptr + 3, 0x20, 2, FUN_180627a70, FUN_180627b90);
  return dest_ptr;
}



// 函数: 检查渲染对象状态
// 参数: object_handle - 对象句柄
// 返回值: 对象状态数据或0
uint64_t rendering_system_check_render_object_state(int64_t object_handle)

{
  int64_t *object_ptr;
  char is_empty;
  
  object_ptr = *(int64_t **)(object_handle + 0x48);
  if (*(code **)(*object_ptr + 0xc0) == (code *)&unknown_var_9120_ptr) {
    is_empty = ((object_ptr[8] - object_ptr[7] & 0xfffffffffffffff0U) == 0);
  }
  else {
    is_empty = ((**(code **)(*object_ptr + 0xc0))(object_ptr));
  }
  if (is_empty == '\0') {
    return *(uint64_t *)object_ptr[7];
  }
  return 0;
}



// 函数: 重置渲染对象数据
// 参数: object_ptr - 对象指针
// 返回值: 对象指针
uint64_t *rendering_system_reset_render_object_data(uint64_t *object_ptr)

{
  FUN_1808fc838(object_ptr + 3, 0x20, 2, FUN_180627850, FUN_180627b90);
  *object_ptr = 0xffffffffffffffff;
  object_ptr[1] = 0;
  *(int32_t *)(object_ptr + 2) = 0;
  return object_ptr;
}



// 函数: 创建渲染对象辅助函数
// 参数: param_1 - 参数1, dest_ptr - 目标指针, param_3 - 参数3, param_4 - 参数4
// 返回值: 目标指针
uint64_t *rendering_system_create_render_object_helper(uint64_t param_1, uint64_t *dest_ptr, uint64_t param_3, uint64_t param_4)

{
  *dest_ptr = &system_state_ptr;
  dest_ptr[1] = 0;
  *(int32_t *)(dest_ptr + 2) = 0;
  *dest_ptr = &unknown_var_3432_ptr;
  dest_ptr[1] = dest_ptr + 3;
  *(int8_t *)(dest_ptr + 3) = 0;
  *(int32_t *)(dest_ptr + 2) = 0x15;
  strcpy_s(dest_ptr[1], 0x80, &unknown_var_4936_ptr, param_4, 0, RENDER_OBJECT_FLAG_MASK);
  return dest_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: 初始化渲染对象控制器
// 参数: controller_ptr - 控制器指针
// 返回值: 控制器指针
uint64_t *rendering_system_initialize_render_object_controller(uint64_t *controller_ptr)

{
  int64_t *temp_ptr;
  int64_t temp_var;
  uint64_t *object_ptr;
  int64_t loop_var;
  uint64_t *temp_ptr2;
  uint64_t *temp_ptr3;
  
  FUN_180244190();
  *controller_ptr = &unknown_var_5008_ptr;
  controller_ptr[0x1e] = &system_state_ptr;
  temp_ptr3 = (uint64_t *)0x0;
  controller_ptr[0x1f] = 0;
  *(int32_t *)(controller_ptr + 0x20) = 0;
  controller_ptr[0x1e] = &system_data_buffer_ptr;
  controller_ptr[0x21] = 0;
  controller_ptr[0x1f] = 0;
  *(int32_t *)(controller_ptr + 0x20) = 0;
  FUN_1808fc838(controller_ptr + 0x26, 0x20, 2, FUN_180056e10, FUN_18004c030);
  FUN_1808fc838(controller_ptr + 0x2e, 0x20, 2, FUN_180056e10, FUN_18004c030);
  controller_ptr[0x36] = 0;
  object_ptr = controller_ptr + 0x37;
  controller_ptr[0x3a] = 0;
  *(int32_t *)(controller_ptr + 0x3c) = 3;
  *object_ptr = object_ptr;
  controller_ptr[0x38] = object_ptr;
  controller_ptr[0x39] = 0;
  *(int8_t *)(controller_ptr + 0x3a) = 0;
  controller_ptr[0x3b] = 0;
  object_ptr = (uint64_t *)FUN_18062b1e0(system_memory_pool_ptr, 0x20, 8, 3);
  *object_ptr = 0;
  object_ptr[1] = 0;
  object_ptr[2] = 0;
  *(int32_t *)(object_ptr + 3) = 3;
  controller_ptr[0x22] = object_ptr;
  controller_ptr[0x23] = 0;
  *(uint64_t *)((int64_t)controller_ptr + 0x124) = 0;
  *(int8_t *)(controller_ptr + 0x24) = 0;
  temp_ptr = (int64_t *)controller_ptr[0x36];
  controller_ptr[0x36] = 0;
  if (temp_ptr != (int64_t *)0x0) {
    ((**(code **)(*temp_ptr + 0x38))();
  }
  *(int32_t *)((int64_t)controller_ptr + 0xcc) = 0;
  temp_var = render_system_data_resource;
  if (render_system_data_resource == 0) {
    return controller_ptr;
  }
  object_ptr = *(uint64_t **)(render_system_data_resource + 0x20);
  if (object_ptr < *(uint64_t **)(render_system_data_resource + 0x28)) {
    *(uint64_t **)(render_system_data_resource + 0x20) = object_ptr + 1;
    *object_ptr = controller_ptr;
    return controller_ptr;
  }
  temp_ptr3 = *(uint64_t **)(render_system_data_resource + 0x18);
  loop_var = (int64_t)object_ptr - (int64_t)temp_ptr3 >> 3;
  if (loop_var == 0) {
    loop_var = 1;
  }
  else {
    loop_var = loop_var * 2;
    if (loop_var == 0) goto memory_allocation_complete;
  }
  temp_ptr2 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr, loop_var * 8, *(int8_t *)(render_system_data_resource + 0x30));
  object_ptr = *(uint64_t **)(temp_var + 0x20);
  temp_ptr3 = *(uint64_t **)(temp_var + 0x18);
memory_allocation_complete:
  if (temp_ptr3 != object_ptr) {
    memmove(temp_ptr2, temp_ptr3, (int64_t)object_ptr - (int64_t)temp_ptr3);
  }
  *temp_ptr2 = controller_ptr;
  if (*(int64_t *)(temp_var + 0x18) == 0) {
    *(uint64_t **)(temp_var + 0x18) = temp_ptr2;
    *(uint64_t **)(temp_var + 0x20) = temp_ptr2 + 1;
    *(uint64_t **)(temp_var + 0x28) = temp_ptr2 + loop_var;
    return controller_ptr;
  }
  FUN_18064e900();
}



// 函数: 销毁渲染对象控制器
// 参数: controller_ptr - 控制器指针, flags - 标志位
// 返回值: 控制器指针
uint64_t rendering_system_destroy_render_object_controller(uint64_t controller_ptr, uint64_t flags)

{
  FUN_18030d150();
  if ((flags & 1) != 0) {
    free(controller_ptr, 0x1e8);
  }
  return controller_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: 清理渲染对象控制器
// 参数: controller_ptr - 控制器指针
void rendering_system_cleanup_render_object_controller(uint64_t *controller_ptr)

{
  uint64_t *object_ptr;
  uint64_t *temp_ptr;
  uint loop_counter;
  uint64_t index;
  uint64_t *array_ptr;
  int64_t data_ptr;
  int64_t *temp_ptr2;
  uint64_t array_size;
  uint64_t loop_var;
  
  *controller_ptr = &unknown_var_5008_ptr;
  index = 0;
  if (render_system_data_resource != 0) {
    object_ptr = *(uint64_t **)(render_system_data_resource + 0x20);
    temp_ptr = *(uint64_t **)(render_system_data_resource + 0x18);
    loop_var = (int64_t)object_ptr - (int64_t)temp_ptr >> 3;
    array_size = index;
    array_ptr = temp_ptr;
    if (loop_var != 0) {
      do {
        if ((uint64_t *)*array_ptr == controller_ptr) {
          array_ptr = temp_ptr + (int)array_size + 1;
          if (array_ptr < object_ptr) {
            memmove(temp_ptr + (int)array_size, array_ptr, (int64_t)object_ptr - (int64_t)array_ptr,
                    (int64_t)object_ptr - (int64_t)array_ptr, RENDER_OBJECT_FLAG_MASK);
          }
          *(uint64_t **)(render_system_data_resource + 0x20) = object_ptr + -1;
          break;
        }
        loop_counter = (int)array_size + 1;
        array_size = (uint64_t)loop_counter;
        array_ptr = array_ptr + 1;
      } while ((uint64_t)(int64_t)(int)loop_counter < loop_var);
    }
  }
  FUN_1800b8500(controller_ptr + 0x26);
  FUN_1800b8500(controller_ptr + 0x2a);
  object_ptr = controller_ptr + 0x37;
  for (temp_ptr = (uint64_t *)controller_ptr[0x38]; temp_ptr != object_ptr;
      temp_ptr = (uint64_t *)func_0x00018066bd70(temp_ptr)) {
    data_ptr = temp_ptr[6];
    if (data_ptr != 0) {
      FUN_180057830(data_ptr);
      FUN_18064e900(data_ptr);
    }
  }
  temp_ptr = (uint64_t *)controller_ptr[0x39];
  if (temp_ptr != (uint64_t *)0x0) {
    FUN_18004b790(object_ptr, *temp_ptr);
    FUN_18064e900(temp_ptr);
  }
  *object_ptr = object_ptr;
  controller_ptr[0x38] = object_ptr;
  controller_ptr[0x39] = 0;
  *(int8_t *)(controller_ptr + 0x3a) = 0;
  controller_ptr[0x3b] = 0;
  temp_ptr2 = (int64_t *)controller_ptr[0x22];
  data_ptr = *temp_ptr2;
  array_size = index;
  if (temp_ptr2[1] - data_ptr >> 3 != 0) {
    do {
      data_ptr = *(int64_t *)(data_ptr + array_size);
      if (data_ptr != 0) {
        *(int64_t *)(data_ptr + 0x10) = *(int64_t *)(data_ptr + 8);
        if (*(int64_t *)(data_ptr + 8) != 0) {
          FUN_18064e900();
        }
        FUN_18064e900(data_ptr);
      }
      loop_counter = (int)index + 1;
      index = (uint64_t)loop_counter;
      temp_ptr2 = (int64_t *)controller_ptr[0x22];
      data_ptr = *temp_ptr2;
      array_size = array_size + 8;
    } while ((uint64_t)(int64_t)(int)loop_counter < (uint64_t)(temp_ptr2[1] - data_ptr >> 3));
  }
  if (temp_ptr2 != (int64_t *)0x0) {
    if (*temp_ptr2 != 0) {
      FUN_18064e900();
    }
    FUN_18064e900(temp_ptr2);
  }
  controller_ptr[0x22] = 0;
  FUN_18004b730(object_ptr);
  if ((int64_t *)controller_ptr[0x36] != (int64_t *)0x0) {
    ((**(code **)(*(int64_t *)controller_ptr[0x36] + 0x38))();
  }
  FUN_1808fc8a8(controller_ptr + 0x2e, 0x20, 2, FUN_18004c030);
  FUN_1808fc8a8(controller_ptr + 0x26, 0x20, 2, FUN_18004c030);
  controller_ptr[0x1e] = &system_data_buffer_ptr;
  if (controller_ptr[0x1f] != 0) {
    FUN_18064e900();
  }
  controller_ptr[0x1f] = 0;
  *(int32_t *)(controller_ptr + 0x21) = 0;
  controller_ptr[0x1e] = &system_state_ptr;
  *controller_ptr = &unknown_var_9896_ptr;
  controller_ptr[0x15] = &system_data_buffer_ptr;
  if (controller_ptr[0x16] != 0) {
    FUN_18064e900();
  }
  controller_ptr[0x16] = 0;
  *(int32_t *)(controller_ptr + 0x18) = 0;
  controller_ptr[0x15] = &system_state_ptr;
  controller_ptr[0x11] = &system_data_buffer_ptr;
  if (controller_ptr[0x12] != 0) {
    FUN_18064e900();
  }
  controller_ptr[0x12] = 0;
  *(int32_t *)(controller_ptr + 0x14) = 0;
  controller_ptr[0x11] = &system_state_ptr;
  if ((int64_t *)controller_ptr[7] != (int64_t *)0x0) {
    ((**(code **)(*(int64_t *)controller_ptr[7] + 0x38))();
  }
  if ((int64_t *)controller_ptr[2] != (int64_t *)0x0) {
    ((**(code **)(*(int64_t *)controller_ptr[2] + 0x38))();
  }
  *controller_ptr = &system_handler2_ptr;
  *controller_ptr = &system_handler1_ptr;
  return;
}



// 函数: 创建渲染对象管理器
// 参数: manager_handle - 管理器句柄
// 返回值: 0表示成功
uint64_t rendering_system_create_render_object_manager(int64_t manager_handle)

{
  uint64_t return_value;
  int64_t *manager_ptr;
  int64_t *temp_ptr;
  
  manager_ptr = (int64_t *)FUN_18062b1e0(system_memory_pool_ptr, 200, 8, 3, RENDER_OBJECT_FLAG_MASK);
  FUN_180049830(manager_ptr);
  *manager_ptr = (int64_t)&unknown_var_5304_ptr;
  manager_ptr[0x18] = manager_handle;
  temp_ptr = manager_ptr;
  ((**(code **)(*manager_ptr + 0x28))(manager_ptr));
  temp_ptr = *(int64_t **)(manager_handle + 0x1b0);
  *(int64_t **)(manager_handle + 0x1b0) = manager_ptr;
  if (temp_ptr != (int64_t *)0x0) {
    ((**(code **)(*temp_ptr + 0x38))();
  }
  return_value = system_context_ptr;
  temp_ptr = *(int64_t **)(manager_handle + 0x1b0);
  if (temp_ptr != (int64_t *)0x0) {
    ((**(code **)(*temp_ptr + 0x28))());
  }
  FUN_18005e110(return_value, &temp_ptr);
  return 0;
}



// 函数: 渲染系统批量处理渲染对象辅助函数
// 参数: render_context - 渲染上下文
void rendering_system_process_render_objects_batch_helper(int64_t render_context)

{
  uint64_t render_manager;
  int64_t data_ptr;
  uint loop_counter;
  uint64_t data_index;
  int64_t object_array;
  uint64_t array_index;
  uint64_t object_count;
  uint64_t stack_data_d8;
  int32_t stack_data_d0;
  int16_t stack_data_cc;
  uint64_t stack_data_c8;
  uint64_t stack_data_c0;
  int32_t stack_data_b8;
  int8_t stack_data_b4;
  int32_t stack_data_b0;
  uint64_t stack_data_ac;
  int16_t stack_data_a4;
  uint64_t stack_data_a0;
  int32_t stack_data_98;
  uint64_t stack_data_90;
  int32_t stack_data_88;
  int8_t stack_data_84;
  uint64_t stack_data_70;
  uint64_t stack_data_68;
  uint64_t stack_data_60;
  uint64_t stack_data_58;
  uint64_t stack_data_50;
  int32_t stack_data_48;
  int32_t stack_data_44;
  int32_t stack_data_40;
  int32_t stack_data_3c;
  int32_t stack_data_38;
  int32_t stack_data_34;
  int32_t stack_data_30;
  int32_t stack_data_2c;
  uint64_t temp_var;
  
  object_count = 0;
  object_array = *(int64_t *)(render_context + 0xc0);
  render_manager = *(uint64_t *)(render_system_data_resource + 0x38);
  array_index = object_count;
  if ((*(int64_t **)(object_array + 0x110))[1] - **(int64_t **)(object_array + 0x110) >> 3 != 0) {
    do {
      temp_var = 0;
      object_array = *(int64_t *)(object_count + **(int64_t **)(object_array + 0x110));
      data_ptr = *(int64_t *)(object_array + 8);
      data_index = temp_var;
      if (*(int64_t *)(object_array + 0x10) - data_ptr >> 3 != 0) {
        do {
          stack_data_68 = 0x3f800000;
          stack_data_60 = 0;
          stack_data_58 = 0x3f80000000000000;
          stack_data_50 = 0;
          stack_data_c8 = 0;
          stack_data_a0 = 0;
          stack_data_98 = 0;
          stack_data_90 = 0;
          stack_data_70 = 0;
          stack_data_48 = 0;
          stack_data_44 = 0;
          stack_data_40 = 0x3f800000;
          stack_data_3c = 0;
          stack_data_38 = 0;
          stack_data_34 = 0;
          stack_data_30 = 0;
          stack_data_2c = 0x3f800000;
          stack_data_d8 = 0;
          stack_data_d0 = 0xffffffff;
          stack_data_cc = 0xff00;
          stack_data_c0 = 0xffffffffffffffff;
          stack_data_b8 = 0xffffffff;
          stack_data_b4 = 0xff;
          stack_data_b0 = 0xffffffff;
          stack_data_ac = 0;
          stack_data_a4 = 0x400;
          stack_data_88 = 0;
          stack_data_84 = 0;
          FUN_180077750(*(uint64_t *)(*(int64_t *)(object_array + 8) + data_index), render_manager, &stack_data_68, 0,
                        &stack_data_d8);
          data_ptr = *(int64_t *)(object_array + 8);
          loop_counter = (int)temp_var + 1;
          temp_var = (uint64_t)loop_counter;
          data_index = data_index + 8;
        } while ((uint64_t)(int64_t)(int)loop_counter <
                 (uint64_t)(*(int64_t *)(object_array + 0x10) - data_ptr >> 3));
      }
      *(int64_t *)(object_array + 0x10) = data_ptr;
      loop_counter = (int)array_index + 1;
      object_array = *(int64_t *)(render_context + 0xc0);
      object_count = object_count + 8;
      array_index = (uint64_t)loop_counter;
    } while ((uint64_t)(int64_t)(int)loop_counter <
             (uint64_t)((*(int64_t **)(object_array + 0x110))[1] - **(int64_t **)(object_array + 0x110) >> 3));
  }
  return;
}





// 函数: 渲染系统单个渲染对象处理辅助函数
// 参数: param_1 - 参数1, param_2 - 参数2, render_context - 渲染上下文, param_4 - 参数4
void rendering_system_process_render_objects_single_helper(uint64_t param_1, uint64_t param_2, int64_t render_context, uint64_t param_4)

{
  int64_t object_ptr;
  uint64_t object_data;
  int64_t data_start;
  uint64_t register_rbx;
  int64_t register_rbp;
  uint loop_counter;
  uint64_t register_rsi;
  uint64_t data_index;
  uint64_t register_rdi;
  uint64_t temp_var;
  int64_t register_r11;
  int64_t register_r13;
  uint64_t register_r14;
  uint64_t object_index;
  int register_r15d;
  
  *(uint64_t *)(register_r11 + 8) = register_rbx;
  *(uint64_t *)(register_r11 + 0x10) = register_rsi;
  *(uint64_t *)(register_r11 + 0x18) = register_rdi;
  *(uint64_t *)(register_r11 + -0x28) = register_r14;
  object_index = param_4 & 0xffffffff;
  do {
    data_index = param_4 & 0xffffffff;
    object_ptr = *(int64_t *)(object_index + **(int64_t **)(render_context + 0x110));
    data_start = *(int64_t *)(object_ptr + 8);
    temp_var = param_4;
    if (*(int64_t *)(object_ptr + 0x10) - data_start >> 3 != 0) {
      do {
        data_start = *(int64_t *)(object_ptr + 8);
        *(uint64_t *)(register_rbp + -9) = 0x3f800000;
        *(uint64_t *)(register_rbp + -1) = 0;
        *(uint64_t *)(register_rbp + 7) = 0x3f80000000000000;
        *(uint64_t *)(register_rbp + 0xf) = 0;
        object_data = *(uint64_t *)(data_start + param_4);
        *(uint64_t *)(register_rbp + -0x69) = temp_var;
        *(uint64_t *)(register_rbp + -0x41) = temp_var;
        *(int *)(register_rbp + -0x39) = (int)temp_var;
        *(uint64_t *)(register_rbp + -0x31) = temp_var;
        *(uint64_t *)(register_rbp + -0x11) = temp_var;
        *(int32_t *)(register_rbp + 0x17) = 0;
        *(int32_t *)(register_rbp + 0x1b) = 0;
        *(int32_t *)(register_rbp + 0x1f) = 0x3f800000;
        *(int32_t *)(register_rbp + 0x23) = 0;
        *(int32_t *)(register_rbp + 0x27) = 0;
        *(int32_t *)(register_rbp + 0x2b) = 0;
        *(int32_t *)(register_rbp + 0x2f) = 0;
        *(int32_t *)(register_rbp + 0x33) = 0x3f800000;
        *(uint64_t *)(register_rbp + -0x79) = 0;
        *(int32_t *)(register_rbp + -0x71) = 0xffffffff;
        *(int16_t *)(register_rbp + -0x6d) = 0xff00;
        *(uint64_t *)(register_rbp + -0x61) = 0xffffffffffffffff;
        *(int32_t *)(register_rbp + -0x59) = 0xffffffff;
        *(int8_t *)(register_rbp + -0x55) = 0xff;
        *(int32_t *)(register_rbp + -0x51) = 0xffffffff;
        *(uint64_t *)(register_rbp + -0x4d) = 0;
        *(int16_t *)(register_rbp + -0x45) = 0x400;
        *(int32_t *)(register_rbp + -0x29) = 0;
        *(int8_t *)(register_rbp + -0x25) = 0;
        FUN_180077750(object_data, 0, register_rbp + -9, 0, register_rbp + -0x79);
        data_start = *(int64_t *)(object_ptr + 8);
        param_4 = param_4 + 8;
        loop_counter = (int)data_index + 1;
        data_index = (uint64_t)loop_counter;
        temp_var = 0;
      } while ((uint64_t)(int64_t)(int)loop_counter <
               (uint64_t)(*(int64_t *)(object_ptr + 0x10) - data_start >> 3));
    }
    *(int64_t *)(object_ptr + 0x10) = data_start;
    register_r15d = register_r15d + 1;
    render_context = *(int64_t *)(register_r13 + 0xc0);
    object_index = object_index + 8;
    param_4 = temp_var;
  } while ((uint64_t)(int64_t)register_r15d <
           (uint64_t)((*(int64_t **)(render_context + 0x110))[1] - **(int64_t **)(render_context + 0x110) >> 3)
          );
  return;
}





// 函数: 空函数1
// 功能：空函数，无任何操作
void rendering_system_empty_function_1(void)

{
  return;
}



// 函数: 释放渲染对象管理器
// 参数: manager_ptr - 管理器指针, flags - 标志位, param_3 - 参数3, param_4 - 参数4
// 返回值: 管理器指针
uint64_t rendering_system_release_render_object_manager(uint64_t manager_ptr, uint64_t flags, uint64_t param_3, uint64_t param_4)

{
  uint64_t memory_flag;
  
  memory_flag = RENDER_OBJECT_FLAG_MASK;
  FUN_180049470();
  if ((flags & 1) != 0) {
    free(manager_ptr, 200, param_3, param_4, memory_flag);
  }
  return manager_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: 添加渲染对象到队列
// 参数: render_context - 渲染上下文, render_object - 渲染对象, param_3 - 参数3
void rendering_system_add_render_object_to_queue(int64_t render_context, int64_t *render_object, int param_3)

{
  uint64_t *array_ptr;
  int compare_result;
  int64_t data_ptr;
  int64_t *new_entry;
  int64_t *existing_entry;
  int64_t *queue_ptr;
  int64_t *temp_ptr;
  uint64_t stack_data_e8;
  int32_t stack_data_e0;
  int32_t stack_data_dc;
  int16_t stack_data_d8;
  char stack_data_d6;
  int32_t stack_data_d4;
  int8_t stack_data_d0;
  uint64_t stack_data_c8;
  int64_t stack_data_c0 [3];
  int32_t stack_data_a8;
  uint64_t stack_data_a0;
  uint64_t stack_data_98;
  int32_t stack_data_90;
  int32_t stack_data_8c;
  int16_t stack_data_88;
  int8_t stack_data_86;
  int32_t stack_data_84;
  int8_t stack_data_80;
  uint64_t stack_data_78;
  int64_t stack_data_70 [3];
  int32_t stack_data_58;
  uint64_t stack_data_50;
  uint64_t stack_data_48;
  
  stack_data_48 = RENDER_OBJECT_FLAG_MASK;
  queue_ptr = *(int64_t **)(render_context + 0x110);
  new_entry = (int64_t *)0x0;
  if (*queue_ptr != queue_ptr[1]) goto LAB_18030d811;
  temp_ptr = (int64_t *)FUN_18062b1e0(system_memory_pool_ptr, 0x28, 8, CONCAT71((int7)((uint64_t)queue_ptr >> 8), 3));
  new_entry = temp_ptr + 1;
  *new_entry = 0;
  temp_ptr[2] = 0;
  temp_ptr[3] = 0;
  *(int32_t *)(temp_ptr + 4) = 3;
  array_ptr = *(uint64_t **)(render_context + 0x110);
  queue_ptr = (int64_t *)array_ptr[1];
  if (queue_ptr < (int64_t *)array_ptr[2]) {
    array_ptr[1] = (uint64_t)(queue_ptr + 1);
    *queue_ptr = (int64_t)temp_ptr;
    goto LAB_18030d811;
  }
  existing_entry = (int64_t *)*array_ptr;
  data_ptr = (int64_t)queue_ptr - (int64_t)existing_entry >> 3;
  if (data_ptr == 0) {
    data_ptr = 1;
LAB_18030d7a4:
    new_entry = (int64_t *)FUN_18062b420(system_memory_pool_ptr, data_ptr * 8, (char)array_ptr[3]);
    queue_ptr = (int64_t *)array_ptr[1];
    existing_entry = (int64_t *)*array_ptr;
  }
  else {
    data_ptr = data_ptr * 2;
    if (data_ptr != 0) goto LAB_18030d7a4;
  }
  if (existing_entry != queue_ptr) {
    memmove(new_entry, existing_entry, (int64_t)queue_ptr - (int64_t)existing_entry);
  }
  *new_entry = (int64_t)temp_ptr;
  if (*array_ptr != 0) {
    FUN_18064e900();
  }
  *array_ptr = (uint64_t)new_entry;
  array_ptr[1] = (uint64_t)(new_entry + 1);
  array_ptr[2] = (uint64_t)(new_entry + data_ptr);
LAB_18030d811:
  data_ptr = *(int64_t *)**(uint64_t **)(render_context + 0x110);
  stack_data_98 = 0;
  stack_data_90 = 0;
  stack_data_8c = 0xffffffff;
  stack_data_88 = 1;
  stack_data_86 = 0;
  stack_data_84 = 0xffffffff;
  stack_data_80 = 1;
  stack_data_78 = 0;
  stack_data_70[0] = 0;
  stack_data_70[1] = 0;
  stack_data_70[2] = 0;
  stack_data_58 = 3;
  stack_data_50 = 0;
  stack_data_e8 = 0;
  stack_data_e0 = 0;
  stack_data_dc = 0xffffffff;
  stack_data_d8 = 1;
  stack_data_d6 = '\0';
  stack_data_d4 = 0xffffffff;
  stack_data_d0 = 1;
  stack_data_c8 = 0;
  temp_ptr = stack_data_c0;
  stack_data_c0[0] = 0;
  stack_data_c0[1] = 0;
  stack_data_c0[2] = 0;
  stack_data_a8 = 3;
  stack_data_a0 = 0;
  FUN_18022d470(render_object[0x37], &stack_data_98);
  if ((stack_data_d6 != '\0') || (compare_result = FUN_18022d470(render_object[0x37], &stack_data_e8), compare_result == 0)) {
    temp_ptr = render_object;
    FUN_18005ea90(data_ptr + 8, &temp_ptr);
    if (*(int *)(render_context + 0x11c) < param_3) {
      *(int *)(render_context + 0x11c) = param_3;
    }
    *(int *)((int64_t)render_object + 0x104) = *(int *)(render_context + 0x118) + param_3;
  }
  temp_ptr = stack_data_c0;
  if (stack_data_c0[0] == 0) {
    temp_ptr = stack_data_70;
    if (stack_data_70[0] == 0) {
      return;
    }
    FUN_18064e900();
  }
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: 使用参数渲染对象
// 参数: render_context - 渲染上下文, start_pos - 起始位置, end_pos - 结束位置, render_flag - 渲染标志
//        param_5 - 参数5, param_6 - 参数6, render_data - 渲染数据, transform_matrix - 变换矩阵
void rendering_system_render_objects_with_parameters(uint64_t render_context, int64_t start_pos, int64_t end_pos, int8_t render_flag,
                                                    int32_t param_5, int32_t param_6, int64_t *render_data, float *transform_matrix)

{
  float scale_factor;
  float position_offset;
  float *vertex_ptr;
  int64_t vertex_count;
  uint64_t color_data;
  uint alpha_value;
  float *texture_coord;
  int64_t texture_offset;
  int32_t render_mode;
  int64_t object_handle;
  uint64_t render_params;
  int64_t stack_data_b8;
  uint64_t stack_data_98;
  int32_t stack_data_90;
  int32_t stack_data_8c;
  int16_t stack_data_88;
  int8_t stack_data_86;
  int32_t stack_data_84;
  int8_t stack_data_80;
  uint64_t stack_data_78;
  int64_t stack_data_70;
  uint64_t stack_data_68;
  uint64_t stack_data_60;
  int32_t stack_data_58;
  uint64_t stack_data_50;
  
  if (transform_matrix[0x21] == 0.0) {
    FUN_18030eaf0(render_context, start_pos, end_pos, render_flag, param_5, param_6, render_data, transform_matrix);
  }
  else if (transform_matrix[0x21] == 2.8026e-45) {
    scale_factor = *transform_matrix;
    end_pos = end_pos - start_pos;
    vertex_ptr = (float *)(start_pos + 0x24);
    stack_data_b8 = RENDER_OBJECT_VERTEX_COUNT;
    do {
      *transform_matrix = scale_factor;
      vertex_count = RENDER_OBJECT_VERTEX_COUNT;
      texture_coord = vertex_ptr;
      do {
        object_handle = FUN_18030f1e0(render_context);
        FUN_180076910(object_handle, render_data);
        position_offset = transform_matrix[8];
        alpha_value = (uint)position_offset >> 0x10 & 0xff;
        *(float *)(object_handle + 0x238) = (float)alpha_value * 0.003921569;
        *(float *)(object_handle + 0x23c) = (float)((uint)position_offset >> 8 & 0xff) * 0.003921569;
        *(float *)(object_handle + 0x240) = (float)((uint)position_offset & 0xff) * 0.003921569;
        *(float *)(object_handle + 0x244) = (float)((uint)position_offset >> 0x18) * 0.003921569;
        if (*(int64_t *)(object_handle + 0x2c8) == 0) {
          *(uint *)(object_handle + 0x100) = *(uint *)(object_handle + 0x100) | 8;
          color_data = FUN_18062b1e0(system_memory_pool_ptr, RENDER_OBJECT_DATA_SIZE, 4, 9);
          memset(color_data, 0, RENDER_OBJECT_DATA_SIZE);
        }
        transform_matrix[0x1b] = texture_coord[-7] - texture_coord[-9];
        transform_matrix[0x1c] = *texture_coord - texture_coord[-8];
        transform_matrix[0x1d] = *(float *)(end_pos + -0x24 + (int64_t)texture_coord);
        transform_matrix[0x1f] = *(float *)(end_pos + -0x1c + (int64_t)texture_coord);
        transform_matrix[0x1e] = *(float *)(end_pos + -0x20 + (int64_t)texture_coord);
        transform_matrix[0x20] = *(float *)(end_pos + (int64_t)texture_coord);
        FUN_18030ef70(alpha_value, object_handle, transform_matrix);
        *transform_matrix = transform_matrix[0x1b] + *transform_matrix;
        FUN_18030d6e0(render_context);
        texture_coord = texture_coord + 2;
        vertex_count = vertex_count + -1;
      } while (vertex_count != 0);
      transform_matrix[1] = transform_matrix[1] + transform_matrix[0x1c];
      vertex_ptr = vertex_ptr + 8;
      stack_data_b8 = stack_data_b8 + -1;
    } while (stack_data_b8 != 0);
  }
  else {
    vertex_count = FUN_18030f1e0();
    FUN_180076910(vertex_count, render_data);
    scale_factor = transform_matrix[8];
    *(float *)(vertex_count + 0x238) = (float)((uint)scale_factor >> 0x10 & 0xff) * 0.003921569;
    *(float *)(vertex_count + 0x23c) = (float)((uint)scale_factor >> 8 & 0xff) * 0.003921569;
    *(float *)(vertex_count + 0x240) = (float)((uint)scale_factor & 0xff) * 0.003921569;
    *(float *)(vertex_count + 0x244) = (float)((uint)scale_factor >> 0x18) * 0.003921569;
    render_mode = FUN_18007e930(vertex_count);
    FUN_18030ef70(render_mode, vertex_count, transform_matrix);
    FUN_18030d6e0(render_context);
  }
  if (*render_data != 0) {
    stack_data_98 = 0;
    stack_data_90 = 0;
    stack_data_8c = 0xffffffff;
    stack_data_88 = 1;
    stack_data_86 = 0;
    stack_data_84 = 0xffffffff;
    stack_data_80 = 1;
    stack_data_78 = 0;
    stack_data_70 = 0;
    stack_data_68 = 0;
    stack_data_60 = 0;
    stack_data_58 = 3;
    stack_data_50 = 0;
    FUN_18022d470(*render_data, &stack_data_98);
    if (stack_data_70 != 0) {
      FUN_18064e900();
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



