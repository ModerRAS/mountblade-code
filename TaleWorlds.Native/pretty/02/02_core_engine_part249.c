#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 02_core_engine_part249.c - 核心引擎模块第249部分
// 本文件包含引擎渲染、资源管理和事件处理相关功能

// 函数: 处理渲染管线状态更新
// 参数: param_1 - 渲染上下文, param_2 - 操作类型, param_3 - 资源句柄, param_4 - 输出缓冲区
void update_render_pipeline_state(int64_t render_context, int operation_type, int64_t resource_handle, int64_t output_buffer)
{
  int64_t temp_ptr;
  uint temp_uint;
  int32_t temp_result;
  uint temp_uint2;
  int lock_result;
  void *temp_ptr2;
  int8_t stack_buffer_1c8 [32];
  int64_t *stack_ptr_1a8;
  int64_t stack_value_198;
  int64_t *stack_ptr_190;
  uint64_t stack_value_188;
  int32_t stack_value_180;
  int32_t stack_value_17c;
  uint64_t stack_value_178;
  int32_t stack_value_160;
  int8_t stack_buffer_150 [200];
  int32_t stack_value_88;
  int32_t stack_value_84;
  int32_t stack_value_80;
  uint64_t stack_value_58;
  
  stack_value_178 = 0xfffffffffffffffe;
  stack_value_58 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_buffer_1c8;
  if (((operation_type == 8) || (operation_type == 0x20)) &&
     ((*(int64_t *)(render_context + 0x308) != 0 || (*(int64_t *)(render_context + 0x310) != 0)))) {
    stack_ptr_190 = (int64_t *)0x0;
    get_resource_info(resource_handle, &stack_ptr_190);
    stack_value_198 = 0;
    process_resource_data(stack_ptr_190, &stack_value_198);
    if ((stack_value_198 != 0) && (-1 < *(int *)(stack_value_198 + 8))) {
      temp_result = get_resource_properties(resource_handle, &stack_value_88);
      validate_resource_handle(temp_result, &DEFAULT_STRING_CONST);
      stack_value_188 = CONCAT44(stack_value_80, stack_value_88);
      stack_value_180 = stack_value_84;
      stack_value_17c = 0x7f7fffff;
      (**(code **)(render_context + 0x310))
                (*(uint64_t *)(render_context + 0x308), operation_type == 8, *(int32_t *)(stack_value_198 + 8),
                 &stack_value_188);
    }
  }
  if (operation_type == 0x20) {
    stack_ptr_190 = (int64_t *)0x0;
    stack_value_198 = resource_handle;
    temp_result = acquire_resource_lock(resource_handle, &stack_ptr_190);
    validate_resource_handle(temp_result, &DEFAULT_STRING_CONST);
    release_resource_reference(resource_handle, 0);
    if ((stack_ptr_190 == (int64_t *)0x0) || (temp_ptr = *stack_ptr_190, temp_ptr == 0)) {
      stack_value_188 = render_context + 0x60;
      lock_result = _Mtx_lock(stack_value_188);
      if (lock_result != 0) {
        throw_thread_error(lock_result);
      }
      process_render_queue(render_context + 0x410, &stack_value_198);
    }
    else {
      stack_value_188 = render_context + 0x60;
      if (*(int64_t *)(temp_ptr + 0x80) == resource_handle) {
        lock_result = _Mtx_lock();
        if (lock_result != 0) {
          throw_thread_error(lock_result);
        }
        stack_value_198 = CONCAT44(stack_value_198._4_4_, *(int32_t *)(temp_ptr + 0x50));
        update_render_state(render_context + 0xb0, &stack_value_198);
      }
      else {
        lock_result = _Mtx_lock(stack_value_188);
        if (lock_result != 0) {
          throw_thread_error(lock_result);
        }
        process_render_queue(render_context + 0x410, &stack_value_198);
      }
    }
    lock_result = _Mtx_unlock(render_context + 0x60);
    if (lock_result != 0) {
      throw_thread_error(lock_result);
    }
  }
  else if (operation_type == 0x80) {
    stack_ptr_190 = (int64_t *)0x0;
    temp_result = acquire_resource_lock(resource_handle, &stack_ptr_190);
    validate_resource_handle(temp_result, &DEFAULT_STRING_CONST);
    if (((stack_ptr_190 != (int64_t *)0x0) && (temp_ptr = *stack_ptr_190, temp_ptr != 0)) &&
       (*(int *)(temp_ptr + 0x10) != 0)) {
      stack_value_198 = 0;
      if (*(int *)(temp_ptr + 0x10) != 1) {
        stack_value_160 = 0;
        memset(stack_buffer_150, 0, 200);
      }
      temp_uint = 8;
      if (*(char *)(temp_ptr + 0x49) != '\0') {
        temp_uint = 0x10;
      }
      temp_uint2 = temp_uint | 0x10000;
      if (*(char *)(temp_ptr + 0x48) != '\0') {
        temp_uint2 = temp_uint;
      }
      temp_ptr2 = &DEFAULT_STRING_CONST;
      if (*(void **)(temp_ptr + 0x20) != (void *)0x0) {
        temp_ptr2 = *(void **)(temp_ptr + 0x20);
      }
      stack_ptr_1a8 = &stack_value_198;
      temp_result = create_shader_object(*(uint64_t *)(render_context + 0x370), temp_ptr2, temp_uint2, 0);
      temp_ptr2 = &DEFAULT_STRING_CONST;
      if (*(void **)(temp_ptr + 0x20) != (void *)0x0) {
        temp_ptr2 = *(void **)(temp_ptr + 0x20);
      }
      validate_resource_handle(temp_result, temp_ptr2);
      *(int64_t *)(output_buffer + 8) = stack_value_198;
    }
  }
  else if (operation_type == 0x100) {
    cleanup_shader_object(*(uint64_t *)(output_buffer + 8));
  }
  cleanup_stack_protection(stack_value_58 ^ (uint64_t)stack_buffer_1c8);
}

// 函数: 获取动画混合权重
// 参数: param_1 - 动画控制器, param_2 - 动画轨道ID
// 返回值: 混合权重值，失败返回-1.0
float get_animation_blend_weight(uint64_t animation_controller, uint64_t track_id)
{
  int64_t blend_state;
  int blend_weights[4];
  
  blend_state = get_animation_state(animation_controller, track_id, 0);
  if (blend_state != 0) {
    blend_weights[0] = -1;
    extract_blend_weights(blend_state, blend_weights);
    return (float)blend_weights[0] * 0.001;
  }
  return -1.0;
}

// 函数: 创建和管理渲染对象
// 参数: param_1 - 渲染设备, param_2 - 输出对象指针, param_3 - 配置参数, param_4 - 渲染标志, param_5 - 附加数据
// 返回值: 创建的渲染对象指针
int64_t *create_render_object(int64_t render_device, int64_t **output_object, int *config_params, int32_t render_flags, int64_t extra_data)
{
  int32_t temp_result;
  int temp_int;
  uint temp_uint;
  uint temp_uint2;
  int64_t resource_ptr;
  uint64_t *temp_ptr8;
  uint64_t temp_value8;
  int8_t *temp_ptr1;
  int64_t *temp_ptr_long;
  uint64_t temp_ullong;
  uint temp_uint3;
  int64_t *temp_ptr_long2;
  void *stack_ptr_1a8;
  uint64_t *stack_ptr_1a0;
  int32_t stack_value_198;
  uint64_t stack_value_190;
  void *stack_ptr_188;
  uint64_t *stack_ptr_180;
  int32_t stack_value_178;
  uint64_t stack_value_170;
  void *stack_ptr_168;
  uint64_t *stack_ptr_160;
  int32_t stack_value_158;
  uint64_t stack_value_150;
  void *stack_ptr_148;
  uint64_t *stack_ptr_140;
  int32_t stack_value_138;
  uint64_t stack_value_130;
  void *stack_ptr_128;
  int64_t stack_value_120;
  int32_t stack_value_110;
  void *stack_ptr_108;
  int64_t stack_value_100;
  int32_t stack_value_f0;
  int8_t stack_buffer_e8 [32];
  void *stack_ptr_c8;
  int64_t stack_value_c0;
  int32_t stack_value_b0;
  void *stack_ptr_a8;
  int64_t stack_value_a0;
  int32_t stack_value_90;
  int8_t stack_buffer_88 [32];
  uint64_t stack_value_68;
  int64_t *stack_ptr_60;
  int64_t *stack_ptr_58;
  
  stack_value_68 = 0xfffffffffffffffe;
  if (*(char *)(render_device + 0x210) != '\0') {
    temp_ptr_long2 = *(int64_t **)(render_device + 0x1e8);
    *output_object = (int64_t)temp_ptr_long2;
    if (temp_ptr_long2 == (int64_t *)0x0) {
      return output_object;
    }
    (**(code **)(*temp_ptr_long2 + 0x28))();
    return output_object;
  }
  if (*config_params != 1) {
    resource_ptr = find_resource_by_id(render_device, config_params + 2, 1);
    if (extra_data == 0) goto LAB_1802158ec;
    if (resource_ptr != 0) goto LAB_1802158f5;
    stack_ptr_148 = &EMPTY_STRING_CONST;
    stack_value_130 = 0;
    stack_ptr_140 = (uint64_t *)0x0;
    stack_value_138 = 0;
    temp_ptr8 = (uint64_t *)allocate_string_memory(GLOBAL_MEMORY_POOL, 0x10, 0x13);
    *(int8_t *)temp_ptr8 = 0;
    stack_ptr_140 = temp_ptr8;
    temp_result = get_string_length(temp_ptr8);
    stack_value_130 = CONCAT44(stack_value_130._4_4_, temp_result);
    *temp_ptr8 = 0x2220656e656353; // "Scene" 字符串编码
    stack_value_138 = 7;
    temp_value8 = format_error_message(&stack_ptr_148, stack_buffer_88, extra_data + 0x4d8);
    stack_ptr_168 = &EMPTY_STRING_CONST;
    stack_value_150 = 0;
    stack_ptr_160 = (uint64_t *)0x0;
    stack_value_158 = 0;
    temp_ptr8 = (uint64_t *)allocate_string_memory(GLOBAL_MEMORY_POOL, 0x37, 0x13);
    *(int8_t *)temp_ptr8 = 0;
    stack_ptr_160 = temp_ptr8;
    temp_result = get_string_length(temp_ptr8);
    stack_value_150 = CONCAT44(stack_value_150._4_4_, temp_result);
    *temp_ptr8 = 0x2064656972742022; // " dirty " 字符串编码
    temp_ptr8[1] = 0x636f6c6c61206f74; // "tolla colla" 字符串编码
    *(int32_t *)(temp_ptr8 + 2) = 0x20657461; // " ate" 字符串编码
    *(int32_t *)((int64_t)temp_ptr8 + 0x14) = 0x69206e61; // "ani i" 字符串编码
    *(int32_t *)(temp_ptr8 + 3) = 0x6c61766e; // "nval" 字符串编码
    *(int32_t *)((int64_t)temp_ptr8 + 0x1c) = 0x73206469; // "dis " 字符串编码
    *(int32_t *)(temp_ptr8 + 4) = 0x646e756f; // "ound" 字符串编码
    *(int32_t *)((int64_t)temp_ptr8 + 0x24) = 0x65766520; // " eve" 字符串编码
    *(int32_t *)(temp_ptr8 + 5) = 0x7720746e; // "nt w" 字符串编码
    *(int32_t *)((int64_t)temp_ptr8 + 0x2c) = 0x20687469; // "it h" 字符串编码
    *(int32_t *)(temp_ptr8 + 6) = 0x656d616e; // "name" 字符串编码
    *(int16_t *)((int64_t)temp_ptr8 + 0x34) = 0x2220; // " \"" 字符串编码
    *(int8_t *)((int64_t)temp_ptr8 + 0x36) = 0;
    stack_value_158 = 0x36;
    temp_value8 = format_error_message(temp_value8, &stack_ptr_a8, &stack_ptr_168);
    resource_ptr = format_error_message(temp_value8, &stack_ptr_c8, config_params + 2);
    temp_ptr1 = (int8_t *)0x0;
    temp_uint3 = 0;
    temp_uint2 = *(uint *)(resource_ptr + 0x10);
    temp_ullong = (uint64_t)temp_uint2;
    temp_uint = 0;
    if (*(int64_t *)(resource_ptr + 8) == 0) {
LAB_18021573d:
      temp_uint3 = temp_uint;
      if (temp_uint2 != 0) {
        memcpy(temp_ptr1, *(uint64_t *)(resource_ptr + 8), temp_ullong);
      }
    }
    else if (temp_uint2 != 0) {
      temp_int = temp_uint2 + 1;
      if (temp_int < 0x10) {
        temp_int = 0x10;
      }
      temp_ptr1 = (int8_t *)allocate_string_memory(GLOBAL_MEMORY_POOL, (int64_t)temp_int, 0x13);
      *temp_ptr1 = 0;
      temp_uint = get_string_length(temp_ptr1);
      goto LAB_18021573d;
    }
    if (temp_ptr1 != (int8_t *)0x0) {
      temp_ptr1[temp_ullong] = 0;
    }
    if (temp_uint2 != 0xfffffffe) {
      temp_uint2 = temp_uint2 + 3;
      if (temp_ptr1 == (int8_t *)0x0) {
        if ((int)temp_uint2 < 0x10) {
          temp_uint2 = 0x10;
        }
        temp_ptr1 = (int8_t *)allocate_string_memory(GLOBAL_MEMORY_POOL, (int64_t)(int)temp_uint2, 0x13);
        *temp_ptr1 = 0;
      }
      else {
        if (temp_uint2 <= temp_uint3) goto LAB_1802157dc;
        temp_ptr1 = (int8_t *)reallocate_string_memory(GLOBAL_MEMORY_POOL, temp_ptr1, temp_uint2, 0x10, 0x13);
      }
      get_string_length(temp_ptr1);
    }
LAB_1802157dc:
    *(int16_t *)(temp_ptr1 + temp_ullong) = 0xa22;
    temp_ptr1[temp_ullong + 2] = 0;
    stack_ptr_c8 = &EMPTY_STRING_CONST;
    if (stack_value_c0 != 0) {
      free_string_memory();
    }
    stack_value_c0 = 0;
    stack_value_b0 = 0;
    stack_ptr_c8 = &GLOBAL_STRING_CONST;
    stack_ptr_a8 = &EMPTY_STRING_CONST;
    if (stack_value_a0 != 0) {
      free_string_memory();
    }
    stack_value_a0 = 0;
    stack_value_90 = 0;
    stack_ptr_a8 = &GLOBAL_STRING_CONST;
    stack_ptr_168 = &EMPTY_STRING_CONST;
    free_string_memory(stack_ptr_160);
  }
  resource_ptr = get_animation_state(render_device, config_params[10]);
  if (extra_data == 0) {
LAB_1802158ec:
    if (resource_ptr == 0) {
      temp_ptr_long2 = *(int64_t **)(render_device + 0x1e8);
      *output_object = (int64_t)temp_ptr_long2;
      if (temp_ptr_long2 == (int64_t *)0x0) {
        return output_object;
      }
      (**(code **)(*temp_ptr_long2 + 0x28))();
      return output_object;
    }
LAB_1802158f5:
    initialize_render_object(render_device, output_object);
    temp_result = 8;
    if (*output_object == 0) {
      temp_ptr_long = (int64_t *)allocate_object_memory(GLOBAL_MEMORY_POOL, 0xb8, 8, 3);
      *temp_ptr_long = (int64_t)&RENDER_OBJECT_VTABLE;
      *temp_ptr_long = (int64_t)&RENDER_OBJECT_VTABLE2;
      *(int32_t *)(temp_ptr_long + 1) = 0;
      *temp_ptr_long = (int64_t)&RENDER_OBJECT_VTABLE3;
      temp_ptr_long2 = temp_ptr_long;
      initialize_render_object_data(temp_ptr_long + 2);
      *(int32_t *)(temp_ptr_long + 10) = render_flags;
      temp_ptr_long[0xb] = extra_data;
      if (*(int *)(GLOBAL_DEBUG_FLAG + 0x9a0) != 0) {
        GLOBAL_RESOURCE_COUNTER = GLOBAL_RESOURCE_COUNTER + 1;
        log_debug_event(GLOBAL_LOGGER_HANDLE, 0, 0x1000000000000, 3, &DEBUG_RENDER_OBJECT, GLOBAL_RESOURCE_COUNTER, temp_result, temp_ptr_long);
      }
      *temp_ptr_long = (int64_t)&RENDER_OBJECT_VTABLE4;
      temp_ptr_long[0x11] = 0;
      *(int32_t *)(temp_ptr_long + 0x12) = 0xffffffff;
      stack_ptr_60 = temp_ptr_long + 0x13;
      temp_ptr_long[0x15] = 0;
      temp_ptr_long[0x16] = (int64_t)_guard_check_icall;
      configure_render_object(temp_ptr_long, resource_ptr, render_flags, extra_data);
      stack_ptr_58 = temp_ptr_long;
      (**(code **)(*temp_ptr_long + 0x28))(temp_ptr_long);
      (**(code **)(*temp_ptr_long + 0x28))(temp_ptr_long);
      temp_ptr_long2 = (int64_t *)*output_object;
      *output_object = (int64_t)temp_ptr_long;
      if (temp_ptr_long2 != (int64_t *)0x0) {
        (**(code **)(*temp_ptr_long2 + 0x38))();
      }
      (**(code **)(*temp_ptr_long + 0x38))(temp_ptr_long);
    }
    else {
      configure_render_object(*output_object, resource_ptr, render_flags, extra_data);
    }
    return output_object;
  }
  if (resource_ptr != 0) goto LAB_1802158f5;
  stack_ptr_188 = &EMPTY_STRING_CONST;
  stack_value_170 = 0;
  stack_ptr_180 = (uint64_t *)0x0;
  stack_value_178 = 0;
  temp_ptr8 = (uint64_t *)allocate_string_memory(GLOBAL_MEMORY_POOL, 0x10, 0x13);
  *(int8_t *)temp_ptr8 = 0;
  stack_ptr_180 = temp_ptr8;
  temp_result = get_string_length(temp_ptr8);
  stack_value_170 = CONCAT44(stack_value_170._4_4_, temp_result);
  *temp_ptr8 = 0x2220656e656353; // "Scene" 字符串编码
  stack_value_178 = 7;
  temp_value8 = format_error_message(&stack_ptr_188, stack_buffer_e8, extra_data + 0x4d8);
  stack_ptr_1a8 = &EMPTY_STRING_CONST;
  stack_value_190 = 0;
  stack_ptr_1a0 = (uint64_t *)0x0;
  stack_value_198 = 0;
  temp_ptr8 = (uint64_t *)allocate_string_memory(GLOBAL_MEMORY_POOL, 0x37, 0x13);
  *(int8_t *)temp_ptr8 = 0;
  stack_ptr_1a0 = temp_ptr8;
  temp_result = get_string_length(temp_ptr8);
  stack_value_190 = CONCAT44(stack_value_190._4_4_, temp_result);
  *temp_ptr8 = 0x2064656972742022; // " dirty " 字符串编码
  temp_ptr8[1] = 0x636f6c6c61206f74; // "tolla colla" 字符串编码
  *(int32_t *)(temp_ptr8 + 2) = 0x20657461; // " ate" 字符串编码
  *(int32_t *)((int64_t)temp_ptr8 + 0x14) = 0x69206e61; // "ani i" 字符串编码
  *(int32_t *)(temp_ptr8 + 3) = 0x6c61766e; // "nval" 字符串编码
  *(int32_t *)((int64_t)temp_ptr8 + 0x1c) = 0x73206469; // "dis " 字符串编码
  *(int32_t *)(temp_ptr8 + 4) = 0x646e756f; // "ound" 字符串编码
  *(int32_t *)((int64_t)temp_ptr8 + 0x24) = 0x65766520; // " eve" 字符串编码
  *(int32_t *)(temp_ptr8 + 5) = 0x7720746e; // "nt w" 字符串编码
  *(int32_t *)((int64_t)temp_ptr8 + 0x2c) = 0x20687469; // "it h" 字符串编码
  *(int32_t *)(temp_ptr8 + 6) = 0x656d616e; // "name" 字符串编码
  *(int16_t *)((int64_t)temp_ptr8 + 0x34) = 0x2220; // " \"" 字符串编码
  *(int8_t *)((int64_t)temp_ptr8 + 0x36) = 0;
  stack_value_198 = 0x36;
  temp_value8 = format_error_message(temp_value8, &stack_ptr_108, &stack_ptr_1a8);
  resource_ptr = format_error_message(temp_value8, &stack_ptr_128, config_params + 2);
  temp_ptr1 = (int8_t *)0x0;
  temp_uint3 = 0;
  temp_uint2 = *(uint *)(resource_ptr + 0x10);
  temp_ullong = (uint64_t)temp_uint2;
  temp_uint = 0;
  if (*(int64_t *)(resource_ptr + 8) == 0) {
LAB_180215380:
    temp_uint3 = temp_uint;
    if (temp_uint2 != 0) {
      memcpy(temp_ptr1, *(uint64_t *)(resource_ptr + 8), temp_ullong);
    }
  }
  else if (temp_uint2 != 0) {
    temp_int = temp_uint2 + 1;
    if (temp_int < 0x10) {
      temp_int = 0x10;
    }
    temp_ptr1 = (int8_t *)allocate_string_memory(GLOBAL_MEMORY_POOL, (int64_t)temp_int, 0x13);
    *temp_ptr1 = 0;
    temp_uint = get_string_length(temp_ptr1);
    goto LAB_180215380;
  }
  if (temp_ptr1 != (int8_t *)0x0) {
    temp_ptr1[temp_ullong] = 0;
  }
  if (temp_uint2 != 0xfffffffe) {
    temp_uint2 = temp_uint2 + 3;
    if (temp_ptr1 == (int8_t *)0x0) {
      if ((int)temp_uint2 < 0x10) {
        temp_uint2 = 0x10;
      }
      temp_ptr1 = (int8_t *)allocate_string_memory(GLOBAL_MEMORY_POOL, (int64_t)(int)temp_uint2, 0x13);
      *temp_ptr1 = 0;
    }
    else {
      if (temp_uint2 <= temp_uint3) goto LAB_18021541f;
      temp_ptr1 = (int8_t *)reallocate_string_memory(GLOBAL_MEMORY_POOL, temp_ptr1, temp_uint2, 0x10, 0x13);
    }
    get_string_length(temp_ptr1);
  }
LAB_18021541f:
  *(int16_t *)(temp_ptr1 + temp_ullong) = 0xa22;
  temp_ptr1[temp_ullong + 2] = 0;
  stack_ptr_128 = &EMPTY_STRING_CONST;
  if (stack_value_120 != 0) {
    free_string_memory();
  }
  stack_value_120 = 0;
  stack_value_110 = 0;
  stack_ptr_128 = &GLOBAL_STRING_CONST;
  stack_ptr_108 = &EMPTY_STRING_CONST;
  if (stack_value_100 != 0) {
    free_string_memory();
  }
  stack_value_100 = 0;
  stack_value_f0 = 0;
  stack_ptr_108 = &GLOBAL_STRING_CONST;
  stack_ptr_1a8 = &EMPTY_STRING_CONST;
  free_string_memory(stack_ptr_1a0);
}

// 函数: 清理渲染资源缓存
// 参数: param_1 - 渲染设备上下文
void cleanup_render_cache(int64_t render_context)
{
  uint64_t *resource_array;
  int64_t array_size;
  int lock_result;
  int32_t cleanup_result;
  uint64_t *current_resource;
  uint64_t resource_count;
  int cleanup_counter;
  
  initialize_cleanup_system();
  cleanup_counter = 0;
  lock_result = _Mtx_lock(render_context + 0x60);
  if (lock_result != 0) {
    throw_thread_error(lock_result);
  }
  resource_array = *(uint64_t **)(render_context + 0x410);
  *(uint64_t *)(render_context + 0x410) = 0;
  array_size = *(int64_t *)(render_context + 0x418);
  *(uint64_t *)(render_context + 0x418) = 0;
  *(uint64_t *)(render_context + 0x420) = 0;
  *(int32_t *)(render_context + 0x428) = 3;
  lock_result = _Mtx_unlock(render_context + 0x60);
  if (lock_result != 0) {
    throw_thread_error(lock_result);
  }
  resource_count = array_size - (int64_t)resource_array >> 3;
  current_resource = resource_array;
  if (resource_count != 0) {
    do {
      cleanup_result = release_resource_reference(*current_resource);
      validate_resource_handle(cleanup_result, &DEFAULT_STRING_CONST);
      cleanup_counter = cleanup_counter + 1;
      current_resource = current_resource + 1;
    } while ((uint64_t)(int64_t)cleanup_counter < resource_count);
  }
  if (resource_array == (uint64_t *)0x0) {
    return;
  }
  free_memory(resource_array);
}

// 函数: 查找渲染材质索引
// 参数: param_1 - 材质管理器, param_2 - 材质名称
// 返回值: 材质索引，失败返回-1
int find_material_index(int64_t material_manager, int64_t material_name)
{
  byte *name_ptr1;
  int comparison_result;
  int loop_counter;
  int material_count;
  int64_t current_material;
  byte *name_ptr2;
  void *error_ptr;
  int name_length;
  int64_t material_data;
  int64_t *material_entry;
  uint64_t stack_guard;
  
  stack_guard = 0xfffffffffffffffe;
  current_material = get_material_database_handle(*(uint64_t *)(material_manager + 0x1f8));
  if (current_material == 0) {
    comparison_result = _Mtx_lock(material_manager + 0x318);
    if (comparison_result != 0) {
      throw_thread_error(comparison_result);
    }
    comparison_result = 0;
    material_count = (int)((*(int64_t *)(material_manager + 0x3a0) - *(int64_t *)(material_manager + 0x398)) / 0x98);
    if (0 < material_count) {
      current_material = 0;
      name_length = *(int *)(material_name + 0x10);
      material_entry = (int64_t *)(*(int64_t *)(material_manager + 0x398) + 8);
      do {
        comparison_result = (int)material_entry[1];
        if (name_length == comparison_result) {
          if (name_length != 0) {
            name_ptr2 = *(byte **)(material_name + 8);
            material_data = *material_entry - (int64_t)name_ptr2;
            do {
              name_ptr1 = name_ptr2 + material_data;
              comparison_result = (uint)*name_ptr2 - (uint)*name_ptr1;
              if (comparison_result != 0) break;
              name_ptr2 = name_ptr2 + 1;
            } while (*name_ptr1 != 0);
          }
LAB_180215c6e:
          if (comparison_result == 0) goto LAB_180215cc5;
        }
        else if (name_length == 0) goto LAB_180215c6e;
        comparison_result = comparison_result + 1;
        current_material = current_material + 1;
        material_entry = material_entry + 0x13;
      } while (current_material < material_count);
    }
    error_ptr = &DEFAULT_STRING_CONST;
    if (*(void **)(material_name + 8) != (void *)0x0) {
      error_ptr = *(void **)(material_name + 8);
    }
    log_warning(GLOBAL_LOGGER_HANDLE, 0, 0x1000000000000, 3, &MATERIAL_NOT_FOUND, error_ptr, stack_guard);
    comparison_result = -1;
LAB_180215cc5:
    material_count = _Mtx_unlock(material_manager + 0x318);
    if (material_count != 0) {
      throw_thread_error(material_count);
    }
  }
  else {
    comparison_result = *(int *)(current_material + 0x54);
  }
  return comparison_result;
}

// 函数: 查找纹理资源索引
// 参数: param_1 - 纹理管理器, param_2 - 纹理名称
// 返回值: 纹理索引，失败返回-1
int find_texture_index(int64_t texture_manager, int64_t texture_name)
{
  byte *name_ptr1;
  int comparison_result;
  byte *name_ptr3;
  void *error_ptr;
  int texture_index;
  int loop_counter;
  int texture_count;
  int64_t current_texture;
  int64_t *texture_entry;
  int64_t name_offset;
  
  texture_index = 0;
  texture_count = (int)((*(int64_t *)(texture_manager + 0x3e0) - *(int64_t *)(texture_manager + 0x3d8)) / 0x28);
  if (0 < texture_count) {
    comparison_result = *(int *)(texture_name + 0x10);
    name_offset = 0;
    texture_entry = (int64_t *)(*(int64_t *)(texture_manager + 0x3d8) + 8);
    do {
      loop_counter = (int)texture_entry[1];
      if (comparison_result == loop_counter) {
        if (comparison_result != 0) {
          name_ptr3 = *(byte **)(texture_name + 8);
          name_offset = *texture_entry - (int64_t)name_ptr3;
          do {
            name_ptr1 = name_ptr3 + name_offset;
            loop_counter = (uint)*name_ptr3 - (uint)*name_ptr1;
            if (loop_counter != 0) break;
            name_ptr3 = name_ptr3 + 1;
          } while (*name_ptr1 != 0);
        }
LAB_180215d8e:
        if (loop_counter == 0) {
          return texture_index;
        }
      }
      else if (comparison_result == 0) goto LAB_180215d8e;
      texture_index = texture_index + 1;
      name_offset = name_offset + 1;
      texture_entry = texture_entry + 5;
    } while (name_offset < texture_count);
  }
  error_ptr = &DEFAULT_STRING_CONST;
  if (*(void **)(texture_name + 8) != (void *)0x0) {
    error_ptr = *(void **)(texture_name + 8);
  }
  log_warning(GLOBAL_LOGGER_HANDLE, 0, 0x1000000000000, 3, &TEXTURE_NOT_FOUND, error_ptr);
  return -1;
}

// 函数: 重置渲染状态
// 参数: param_1 - 渲染设备
void reset_render_state(int64_t render_device)
{
  int reset_result;
  
  if (*(char *)(render_device + 0x210) == '\0') {
    reset_result = check_render_state_validity(*(uint64_t *)(render_device + 0x368));
    if (reset_result == 0) {
      *(uint64_t *)(render_device + 0x380) = *(uint64_t *)(render_device + 0x378);
      return;
    }
    log_warning(GLOBAL_LOGGER_HANDLE, 0, 0x1000000000000, 3, &RENDER_STATE_RESET);
  }
  return;
}

// 函数: 执行渲染对象方法
// 参数: param_1 - 渲染对象
void execute_render_object_method(int64_t *render_object)
{
  (**(code **)(*render_object + 0x68))();
  return;
}

// 函数: 处理渲染事件
// 参数: param_1 - 渲染设备, param_2 - 事件数据, param_3 - 事件类型, param_4 - 事件参数, param_5 - 附加数据
// 返回值: 事件处理结果
uint64_t process_render_event(int64_t render_device, int64_t event_data, uint64_t event_type, int32_t *event_params, uint64_t extra_data)
{
  int32_t temp_result;
  uint64_t return_value;
  int64_t event_handler;
  uint64_t process_result;
  void *error_message;
  int64_t stack_temp;
  
  if ((*(char *)(render_device + 0x210) == '\0') &&
     (return_value = GLOBAL_DEBUG_FLAG, *(int *)(GLOBAL_DEBUG_FLAG + 0xb60) == 1)) {
    if ((*(int64_t *)(render_device + 0x18) != 0) && (0 < *(int *)(event_data + 0x10))) {
      (**(code **)(render_device + 0x20))(event_data, event_type, extra_data, render_device + 8);
    }
    event_handler = find_event_handler(render_device, event_data, 0);
    if (event_handler != 0) {
      temp_result = get_event_handler_info(event_handler, &stack_temp);
      validate_resource_handle(temp_result, &DEFAULT_STRING_CONST);
      if (stack_temp != 0) {
        setup_event_handler(stack_temp, event_type, &EVENT_HANDLER_DEFAULT);
        trigger_event_system();
        apply_event_parameters(stack_temp, *event_params);
        process_result = get_event_result(stack_temp);
        return process_result;
      }
    }
    error_message = &DEFAULT_STRING_CONST;
    if (*(void **)(event_data + 8) != (void *)0x0) {
      error_message = *(void **)(event_data + 8);
    }
    process_result = log_warning(GLOBAL_LOGGER_HANDLE, 0, 0x1000000000000, 3, &EVENT_HANDLER_ERROR, error_message);
    return process_result & 0xffffffffffffff00;
  }
  return return_value & 0xffffffffffffff00;
}

// 函数: 处理全局渲染事件
uint64_t process_global_render_event(void)
{
  int32_t temp_result;
  int64_t event_handler;
  uint64_t process_result;
  int32_t *unaff_R15;
  int64_t in_stack_00000050;
  
  event_handler = find_global_event_handler();
  if (event_handler != 0) {
    temp_result = get_event_handler_info(event_handler, &stack0x00000050);
    validate_resource_handle(temp_result, &DEFAULT_STRING_CONST);
    event_handler = in_stack_00000050;
    if (in_stack_00000050 != 0) {
      setup_event_handler(in_stack_00000050);
      trigger_event_system();
      apply_event_parameters(event_handler, *unaff_R15);
      process_result = get_event_result(event_handler);
      return process_result;
    }
  }
  process_result = log_warning(GLOBAL_LOGGER_HANDLE, 0, 0x1000000000000, 3, &GLOBAL_EVENT_ERROR);
  return process_result & 0xffffffffffffff00;
}

// 函数: 处理渲染设备事件
uint64_t process_device_render_event(void)
{
  uint64_t process_result;
  int64_t unaff_RBX;
  int64_t unaff_RDI;
  int64_t stack_temp;
  
  stack_temp = unaff_RBX;
  if (*(int64_t *)(unaff_RDI + 8) != 0) {
    stack_temp = *(int64_t *)(unaff_RDI + 8);
  }
  process_result = log_warning(GLOBAL_LOGGER_HANDLE, 0, 0x1000000000000, 3, &DEVICE_EVENT_ERROR);
  return process_result & 0xffffffffffffff00;
}

// 函数: 检查渲染设备状态
int8_t check_render_device_status(void)
{
  return 0;
}

// 函数: 设置渲染参数
// 参数: param_1 - 渲染对象, param_2 - 参数类型, param_3 - 参数值, param_4 - 附加数据
void set_render_parameters(int64_t *render_object, uint64_t param_type, uint64_t param_value, uint64_t extra_data)
{
  int32_t stack_temp_8;
  int32_t stack_temp_c;
  
  stack_temp_8 = 0x3f800000;
  stack_temp_c = 0;
  (**(code **)(*render_object + 0x58))(0x3f800000, 0, param_value, &stack_temp_8, extra_data);
  return;
}

// 函数: 处理渲染命令
// 参数: param_1 - 渲染设备, param_2 - 命令类型, param_3 - 命令数据, param_4 - 命令参数, param_5 - 附加数据
uint64_t process_render_command(int64_t render_device, int command_type, uint64_t command_data, int32_t *command_params, uint64_t extra_data)
{
  int64_t *temp_ptr;
  int lock_result;
  int32_t temp_result;
  uint64_t command_result;
  int64_t resource_handle;
  int64_t *stack_temp;
  
  if ((*(char *)(render_device + 0x210) == '\0') && (*(int *)(GLOBAL_DEBUG_FLAG + 0xb60) == 1)) {
    lock_result = *(int *)(*(int64_t *)(render_device + 0x1f8) + 0x50);
    if (command_type < lock_result) {
      if ((*(int64_t *)(render_device + 0x18) != 0) && (-1 < command_type)) {
        temp_ptr = (int64_t *)(render_device + 0x318);
        stack_temp = temp_ptr;
        lock_result = _Mtx_lock(temp_ptr);
        if (lock_result != 0) {
          throw_thread_error(lock_result);
        }
        resource_handle = (int64_t)command_type * 0x98 + *(int64_t *)(render_device + 0x398);
        if (0 < *(int *)(resource_handle + 0x10)) {
          (**(code **)(render_device + 0x20))(resource_handle, command_data, extra_data);
        }
        lock_result = _Mtx_unlock(temp_ptr);
        if (lock_result != 0) {
          throw_thread_error(lock_result);
        }
      }
      command_result = get_animation_state(render_device, command_type, 0);
      temp_result = get_event_handler_info(command_result, &stack_temp);
      validate_resource_handle(temp_result, &DEFAULT_STRING_CONST);
      temp_ptr = stack_temp;
      setup_event_handler(stack_temp, command_data, &EVENT_HANDLER_DEFAULT);
      trigger_event_system();
      apply_event_parameters(temp_ptr, *command_params);
      command_result = get_event_result(temp_ptr);
    }
    else {
      create_render_object_from_template(render_device, &stack_temp,
                    (int64_t)(command_type - lock_result) * 0x60 +
                    *(int64_t *)(*(int64_t *)(render_device + 0x1f8) + 0x30), command_params, 0xfffffffffffffffe);
      (**(code **)(*stack_temp + 0xa8))(stack_temp, command_data);
      (**(code **)(*stack_temp + 0x148))(stack_temp, extra_data);
      (**(code **)(*stack_temp + 0x60))();
      if (stack_temp != (int64_t *)0x0) {
        (**(code **)(*stack_temp + 0x38))();
      }
      command_result = 1;
    }
  }
  else {
    command_result = 0;
  }
  return command_result;
}

// 函数: 获取渲染对象属性
int32_t get_render_object_property(uint64_t render_object, uint64_t property_id)
{
  int64_t property_value;
  int32_t property_data[2];
  int8_t temp_buffer[8];
  
  property_value = find_event_handler(render_object, property_id, 0);
  if (property_value != 0) {
    extract_property_data(property_value, temp_buffer, property_data);
    return property_data[0];
  }
  return 0;
}

// 函数: 获取渲染对象状态
int32_t get_render_object_status(uint64_t render_object, uint64_t status_id)
{
  int64_t status_value;
  int32_t status_data[2];
  int8_t temp_buffer[8];
  
  status_value = get_animation_state(render_object, status_id, 0);
  if (status_value != 0) {
    extract_property_data(status_value, temp_buffer, status_data);
    return status_data[0];
  }
  return 0;
}

// 全局常量定义
#define DEFAULT_STRING_CONST system_buffer_ptr
#define EMPTY_STRING_CONST unknown_var_3456
#define GLOBAL_STRING_CONST unknown_var_720
#define GLOBAL_MEMORY_POOL system_memory_pool_ptr
#define GLOBAL_LOGGER_HANDLE system_message_context
#define GLOBAL_DEBUG_FLAG core_system_data_buffer
#define GLOBAL_RESOURCE_COUNTER core_system_buffer
#define EVENT_HANDLER_DEFAULT system_memory_02f0
#define MATERIAL_NOT_FOUND unknown_var_4496
#define TEXTURE_NOT_FOUND unknown_var_4680
#define RENDER_STATE_RESET unknown_var_4728
#define EVENT_HANDLER_ERROR unknown_var_4600
#define GLOBAL_EVENT_ERROR unknown_var_4600
#define DEVICE_EVENT_ERROR unknown_var_4600
#define DEBUG_RENDER_OBJECT unknown_var_7304
#define RENDER_OBJECT_VTABLE unknown_var_3552
#define RENDER_OBJECT_VTABLE2 unknown_var_3696
#define RENDER_OBJECT_VTABLE3 unknown_var_7872
#define RENDER_OBJECT_VTABLE4 unknown_var_2656

// 函数指针映射表（简化实现）
#define get_resource_info FUN_1808455f0
#define process_resource_data FUN_180846fe0
#define get_resource_properties FUN_180844f40
#define validate_resource_handle FUN_180211a30
#define acquire_resource_lock FUN_180847110
#define release_resource_reference FUN_18084a7a0
#define process_render_queue FUN_18005ea90
#define update_render_state FUN_1800571e0
#define throw_thread_error __Throw_C_error_std__YAXH_Z
#define create_shader_object FUN_180739270
#define cleanup_shader_object FUN_18073ebd0
#define cleanup_stack_protection FUN_1808fc050
#define get_animation_state FUN_180213700
#define extract_blend_weights FUN_180845ef0
#define find_resource_by_id FUN_180213440
#define allocate_string_memory FUN_18062b420
#define get_string_length FUN_18064e990
#define format_error_message FUN_180627ce0
#define free_string_memory FUN_18064e900
#define initialize_render_object FUN_180159210
#define allocate_object_memory FUN_18062b1e0
#define initialize_render_object_data FUN_18015c2b0
#define log_debug_event FUN_1800623b0
#define configure_render_object FUN_180406a00
#define _guard_check_icall _guard_check_icall
#define reallocate_string_memory FUN_18062b8b0
#define initialize_cleanup_system FUN_180156300
#define release_resource_reference2 FUN_180849230
#define free_memory FUN_18064e900
#define get_material_database_handle FUN_18020fa10
#define check_render_state_validity FUN_18084b380
#define log_warning FUN_1800623b0
#define find_event_handler FUN_180213440
#define get_event_handler_info FUN_180840490
#define setup_event_handler FUN_180407630
#define trigger_event_system FUN_1802164f0
#define apply_event_parameters FUN_18084a280
#define get_event_result FUN_180406800
#define find_global_event_handler FUN_180213440
#define get_property_data FUN_180846050
#define extract_property_data FUN_180846050
#define create_render_object_from_template FUN_1801582f0