#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part088.c - 核心引擎模块第088部分
// 包含5个函数，主要负责渲染状态管理和文本处理

/**
 * 渲染状态更新函数
 * 处理渲染上下文的状态更新和文本渲染逻辑
 * 
 * @param render_context 渲染上下文指针
 * @param param_2 未知参数
 * @param render_target 渲染目标指针
 * @param param_4 未知参数
 * @param param_5 未知参数
 */
void update_render_state(float *render_context, undefined8 param_2, float *render_target, undefined8 param_4,
                        undefined8 param_5)
{
  longlong *engine_context;
  uint *render_flags;
  float time_delta;
  longlong context_data;
  bool is_valid;
  longlong temp_offset;
  char status_flag;
  char validation_result;
  int render_id;
  undefined4 render_param;
  int texture_id;
  float *position_ptr;
  longlong buffer_offset;
  float *texture_ptr;
  longlong matrix_offset;
  float *vertex_ptr;
  float *normal_ptr;
  int shader_id;
  float color_r;
  float color_g;
  float color_b;
  float color_a;
  float depth_value;
  float stencil_value;
  undefined4 blend_mode;
  ulonglong checksum;
  undefined1 local_stack_buffer [32];
  float *stack_param_1;
  float *stack_param_2;
  float *stack_param_3;
  undefined8 stack_param_4;
  undefined4 stack_param_5;
  float *stack_param_6;
  undefined4 stack_param_7;
  char stack_status;
  float stack_float_100;
  float stack_float_fc;
  float stack_float_f8;
  float stack_float_f4;
  float stack_float_f0;
  float stack_float_ec;
  float stack_float_e8;
  float stack_float_e4;
  float stack_float_e0;
  float stack_float_dc;
  float stack_float_d8;
  float stack_float_d4;
  undefined4 stack_c8;
  
  context_data = g_engine_context;
  checksum = g_render_checksum ^ (ulonglong)local_stack_buffer;
  *(undefined1 *)(*(longlong *)(g_engine_context + 0x1af8) + 0xb1) = 1;
  context_data = *(longlong *)(context_data + 0x1af8);
  if (*(char *)(context_data + 0xb4) != '\0') goto cleanup_render_state;
  render_id = get_render_object_id(render_context, 0,
                        *(undefined4 *)
                         (*(longlong *)(context_data + 0x220) + -4 + (longlong)*(int *)(context_data + 0x218) * 4)
                       );
  if (*(int *)(context_data + 0x1b2c) == render_id) {
    *(int *)(context_data + 0x1b34) = render_id;
  }
  if (*(int *)(context_data + 0x1b30) == render_id) {
    *(undefined1 *)(context_data + 0x1b3f) = 1;
  }
  color_b = (float)get_current_time();
  position_ptr = render_context;
  if (render_context != (float *)0xffffffffffffffff) {
    while (*(char *)position_ptr != '\0') {
      if (((*(char *)position_ptr == '#') && (*(char *)((longlong)position_ptr + 1) == '#')) ||
         (position_ptr = (float *)((longlong)position_ptr + 1), position_ptr == (float *)0xffffffffffffffff))
      break;
    }
  }
  texture_ptr = *(float **)(context_data + 0x19f0);
  color_a = *(float *)(context_data + 0x19f8);
  if (render_context == position_ptr) {
    color_r = 0.0;
  }
  else {
    param_4 = 0;
    local_stack_buffer = (float *)CONCAT44(local_stack_buffer._4_4_,0xbf800000);
    stack_param_1 = render_context;
    stack_param_2 = position_ptr;
    calculate_texture_bounds(texture_ptr, &color_g, color_a, 0x7f7fffff);
    color_r = color_g;
    if (0.0 < color_g) {
      color_r = color_g - color_a / *texture_ptr;
    }
    color_r = (float)(int)(color_r + 0.95);
    color_a = depth_value;
  }
  depth_value = *(float *)(context_data + 0x100);
  stencil_value = *(float *)(context_data + 0x104);
  color_b = color_b + depth_value;
  color_a = *(float *)(context_data + 0x1660) + *(float *)(context_data + 0x1660) + color_a + stencil_value;
  if (color_r <= 0.0) {
    color_g = 0.0;
  }
  else {
    color_g = color_r + *(float *)(context_data + 0x1674);
  }
  color_g = color_g + color_b;
  color_b = depth_value;
  stencil_value = stencil_value;
  color_a = color_a;
  status_flag = validate_render_parameters(&depth_value, render_id, &color_b);
  if (status_flag == '\0') {
    depth_value = color_a - stencil_value;
    color_g = color_g - depth_value;
    apply_render_transform(&color_g, *(undefined4 *)(context_data + 0x1660));
    goto cleanup_render_state;
  }
  status_flag = check_render_queue(context_data, render_id, 1);
  validation_result = validate_texture_coordinates(&color_b, render_id);
  if ((((status_flag == '\0') && ((validation_result == '\0' || (*(char *)(context_data + 0x410) == '\0')))) &&
      (*(int *)(context_data + 0x1ca4) != render_id)) &&
     ((*(int *)(context_data + 0x1cb0) != render_id || (*(int *)(context_data + 0x2da0) == render_id)))) {
process_render_batch:
    if ((*(int *)(context_data + 0x1b2c) != render_id) || (*(int *)(context_data + 0x2da0) != render_id)) {
      depth_value = color_a - stencil_value;
      color_g = color_g - depth_value;
      apply_render_transform(&color_g, *(undefined4 *)(context_data + 0x1660));
      if (*(int *)(context_data + 0x1b2c) == render_id) {
        buffer_offset = 9;
      }
      else {
        buffer_offset = (ulonglong)(*(int *)(context_data + 0x1b18) == render_id) + 7;
      }
      position_ptr = (float *)(context_data + 0x1628 + (buffer_offset + 10) * 0x10);
      depth_value = *position_ptr;
      stencil_value = position_ptr[1];
      color_g = position_ptr[2];
      color_a = position_ptr[3] * *(float *)(context_data + 0x1628);
      render_param = calculate_render_matrix(&depth_value);
      if (render_id == *(int *)(context_data + 0x1ca0)) {
        update_render_context(&color_b, 1, context_data);
      }
      local_stack_buffer = (float *)CONCAT44(local_stack_buffer._4_4_,*(undefined4 *)(context_data + 0x1664));
      submit_render_batch(CONCAT44(stencil_value, color_b), CONCAT44(color_a, color_b), render_param, 1);
      stack_param_1 = &depth_value;
      blend_mode = 4;
      stack_param_3 = 0;
      param_4 = CONCAT44(param_4._4_4_,0x3f800000);
      stack_param_2 = (float *)&g_empty_string;
      stack_param_1 = (float *)param_5;
      depth_value = 3.4028235e+38;
      stencil_value = 3.4028235e+38;
      color_g = -3.4028235e+38;
      color_a = -3.4028235e+38;
      local_stack_buffer = (float *)param_4;
      stack_status = process_render_command(&color_b, render_id, 4, render_target);
      buffer_offset = g_engine_context;
      if (stack_status != '\0') {
        engine_context = (longlong *)(g_engine_context + 0x1af8);
        *(undefined1 *)(g_engine_context + 0x1b3e) = 1;
        render_flags = (uint *)(*engine_context + 0x148);
        *render_flags = *render_flags | 4;
      }
      matrix_offset = 0x1d0;
      if (*(int *)(context_data + 0x1b2c) == render_id) {
        matrix_offset = 0x1e0;
      }
      position_ptr = (float *)(matrix_offset + 0x1628 + buffer_offset);
      color_g = *position_ptr;
      depth_value = position_ptr[1];
      color_r = position_ptr[2];
      color_b = position_ptr[3] * *(float *)(buffer_offset + 0x1628);
      render_param = calculate_render_matrix(&color_g);
      stack_param_1 = (float *)CONCAT44(stack_param_1._4_4_,0xf);
      local_stack_buffer = (float *)CONCAT44(local_stack_buffer._4_4_,*(undefined4 *)(context_data + 0x1698));
      process_vertex_buffer(*(undefined8 *)(context_data + 0x2e8), &depth_value, &color_g, render_param);
      render_id = format_text_output(&blend_mode, 0x40, &g_empty_string, (double)*render_target);
      context_data = g_engine_context;
      position_ptr = (float *)((longlong)&blend_mode + (longlong)render_id);
      color_g = 0.5;
      depth_value = 0.5;
      if (position_ptr == (float *)0x0) {
        position_ptr = (float *)0xffffffffffffffff;
      }
      texture_ptr = (float *)&blend_mode;
      if (&blend_mode < position_ptr) {
        while (*(char *)texture_ptr != '\0') {
          if (((*(char *)texture_ptr == '#') && (*(char *)((longlong)texture_ptr + 1) == '#')) ||
             (texture_ptr = (float *)((longlong)texture_ptr + 1), position_ptr <= texture_ptr)) break;
        }
      }
      color_a = stencil_value;
      if ((int)texture_ptr != (int)&blend_mode) {
        stack_param_2 = &color_g;
        param_4 = 0;
        stack_param_1 = (float *)0x0;
        local_stack_buffer = texture_ptr;
        render_text_overlay(*(undefined8 *)(*(longlong *)(g_engine_context + 0x1af8) + 0x2e8), &color_b,
                      &color_b, &blend_mode);
        color_a = stencil_value;
        buffer_offset = g_engine_context;
        if (*(char *)(context_data + 0x2e38) != '\0') {
          context_data = *(longlong *)(g_engine_context + 0x1af8);
          if ((texture_ptr == (float *)0x0) &&
             (texture_ptr = (float *)&blend_mode, &stack0x00000000 != (undefined1 *)0xc7)) {
            do {
              if ((*(char *)texture_ptr == '\0') ||
                 ((*(char *)texture_ptr == '#' && (*(char *)((longlong)texture_ptr + 1) == '#'))) break;
              texture_ptr = (float *)((longlong)texture_ptr + 1);
            } while (texture_ptr != (float *)0xffffffffffffffff);
          }
          color_a = *(float *)(context_data + 0x138);
          position_ptr = (float *)&blend_mode;
          render_id = *(int *)(context_data + 0x13c);
          *(float *)(context_data + 0x138) = stencil_value;
          texture_id = *(int *)(buffer_offset + 0x2e58);
          is_valid = color_a + 1.0 < stencil_value;
          shader_id = render_id;
          if (render_id < texture_id) {
            *(int *)(buffer_offset + 0x2e58) = render_id;
            shader_id = *(int *)(context_data + 0x13c);
            texture_id = render_id;
          }
          while( true ) {
            normal_ptr = (float *)memchr(position_ptr, 10, (longlong)texture_ptr - (longlong)position_ptr);
            vertex_ptr = texture_ptr;
            if (normal_ptr != (float *)0x0) {
              vertex_ptr = normal_ptr;
            }
            if ((vertex_ptr != texture_ptr) || (position_ptr != vertex_ptr)) {
              if ((is_valid) || (position_ptr != (float *)&blend_mode)) {
                local_stack_buffer = position_ptr;
                draw_text_line(&g_text_renderer, (shader_id - texture_id) * 4, &g_newline_character);
              }
              else {
                draw_text_line(&g_text_buffer, (int)vertex_ptr - (int)position_ptr, position_ptr);
              }
            }
            if (vertex_ptr == texture_ptr) break;
            position_ptr = (float *)((longlong)vertex_ptr + 1);
          }
        }
      }
      if (0.0 < color_r) {
        render_text_element(CONCAT44(color_a + *(float *)(context_data + 0x1660),
                               color_b + *(float *)(context_data + 0x1674)), render_context, 0, 1);
      }
      goto cleanup_render_state;
    }
  }
  else {
    execute_render_pipeline(render_id, context_data);
    finalize_render_batch();
    cleanup_render_resources(context_data);
    *(undefined4 *)(context_data + 0x1b44) = 0xc;
    if ((status_flag == '\0') &&
       ((*(char *)(context_data + 0x134) == '\0' && (*(int *)(context_data + 0x1cb0) != render_id))))
    goto process_render_batch;
    *(undefined4 *)(context_data + 0x2da0) = 0;
  }
  *(int *)(context_data + 0x3f0) = *(int *)(context_data + 0x3f0) + -1;
  *(int *)(context_data + 0x3f4) = *(int *)(context_data + 0x3f4) + -1;
  stack_param_1 = (float *)&g_empty_string;
  local_stack_buffer = render_target;
  finalize_render_state(&color_b, render_id, render_context);
cleanup_render_state:
  cleanup_render_resources(checksum ^ (ulonglong)local_stack_buffer);
}

/**
 * 渲染参数处理函数
 * 处理渲染参数的设置和验证
 * 
 * @param param_data 参数数据指针
 * @param param_size 参数大小
 */
void process_render_parameters(longlong param_data, undefined8 param_size)
{
  longlong *engine_context;
  uint *render_flags;
  undefined4 *param_buffer;
  float time_value;
  float *texture_ptr;
  bool is_valid;
  char status_flag;
  char validation_result;
  int render_id;
  undefined4 render_param;
  undefined4 blend_mode;
  int texture_id;
  longlong param_offset;
  char *text_ptr;
  longlong buffer_offset;
  char *char_ptr;
  longlong matrix_offset;
  char *string_ptr;
  longlong context_base;
  longlong context_offset;
  longlong context_data;
  char *temp_ptr;
  undefined8 texture_handle;
  char *text_buffer;
  char *output_ptr;
  int shader_id;
  float *vertex_buffer;
  undefined4 color_value;
  float color_r;
  float color_g;
  undefined4 extra_param;
  float color_b;
  undefined8 stack_param_1;
  undefined8 param_data_2;
  undefined4 render_mode;
  float depth_value;
  float depth_offset;
  float color_offset;
  float stencil_value;
  float matrix_value;
  
  blend_mode = (undefined4)((ulonglong)stack_param_1 >> 0x20);
  render_mode = (undefined4)((ulonglong)texture_handle >> 0x20);
  render_id = get_render_object_id(color_value, param_size, *(undefined4 *)(param_offset + -4 + param_data * 4));
  if (*(int *)(context_offset + 0x1b2c) == render_id) {
    *(int *)(context_offset + 0x1b34) = render_id;
  }
  if (*(int *)(context_offset + 0x1b30) == render_id) {
    *(undefined1 *)(context_offset + 0x1b3f) = 1;
  }
  color_r = (float)get_current_time();
  text_ptr = text_buffer;
  if (text_buffer != (char *)0xffffffffffffffff) {
    while (*text_ptr != '\0') {
      if (((*text_ptr == '#') && (text_ptr[1] == '#')) ||
         (text_ptr = text_ptr + 1, text_ptr == (char *)0xffffffffffffffff)) break;
    }
  }
  texture_ptr = *(float **)(context_offset + 0x19f0);
  color_b = *(float *)(context_offset + 0x19f8);
  if (text_buffer == text_ptr) {
    color_g = 0.0;
  }
  else {
    param_data_2 = CONCAT44(blend_mode, 0xbf800000);
    calculate_texture_bounds(texture_ptr, context_base + -0x78, color_b, 0x7f7fffff, param_data_2);
    blend_mode = (undefined4)((ulonglong)param_data_2 >> 0x20);
    color_g = *(float *)(context_base + -0x78);
    if (0.0 < color_g) {
      color_g = color_g - color_b / *texture_ptr;
    }
    color_b = *(float *)(context_base + -0x74);
    color_g = (float)(int)(color_g + 0.95);
  }
  depth_value = *(float *)(context_data + 0x100);
  depth_offset = *(float *)(context_data + 0x104);
  time_value = *(float *)(context_offset + 0x1660);
  *(float *)(context_base + -0x80) = color_r + depth_value;
  matrix_value = time_value + time_value + color_b + depth_offset;
  *(float *)(context_base + -0x7c) = matrix_value;
  if (color_g <= 0.0) {
    color_offset = 0.0;
  }
  else {
    color_offset = color_g + *(float *)(context_offset + 0x1674);
  }
  color_offset = color_offset + color_r + depth_value;
  stencil_value = depth_value;
  matrix_value = depth_offset;
  status_flag = validate_render_parameters(&stack0x00000068, render_id, &stack0x00000078);
  if (status_flag == '\0') {
    *(float *)(context_base + -0x74) = matrix_value - depth_offset;
    render_mode = *(undefined4 *)(context_offset + 0x1660);
    *(float *)(context_base + -0x78) = color_offset - depth_value;
    apply_render_transform(context_base + -0x78, render_mode);
    goto cleanup_render_params;
  }
  status_flag = check_render_queue(extra_param, render_id, 1);
  validation_result = validate_texture_coordinates(&stack0x00000078, render_id);
  if ((((status_flag == '\0') && ((validation_result == '\0' || (*(char *)(context_offset + 0x410) == '\0')))) &&
      (*(int *)(context_offset + 0x1ca4) != render_id)) &&
     ((*(int *)(context_offset + 0x1cb0) != render_id || (*(int *)(context_offset + 0x2da0) == render_id)))) {
process_render_batch:
    if ((*(int *)(context_offset + 0x1b2c) != render_id) || (*(int *)(context_offset + 0x2da0) != render_id)) {
      *(float *)(context_base + -0x74) = matrix_value - depth_offset;
      render_param = *(undefined4 *)(context_offset + 0x1660);
      *(float *)(context_base + -0x78) = color_offset - depth_value;
      apply_render_transform(context_base + -0x78, render_param);
      if (*(int *)(context_offset + 0x1b2c) == render_id) {
        buffer_offset = 9;
      }
      else {
        buffer_offset = (ulonglong)(*(int *)(context_offset + 0x1b18) == render_id) + 7;
      }
      param_buffer = (undefined4 *)(context_offset + 0x1628 + (buffer_offset + 10) * 0x10);
      depth_value = (float)*param_buffer;
      depth_offset = (float)param_buffer[1];
      color_offset = (float)param_buffer[2];
      matrix_value = (float)param_buffer[3] * *(float *)(context_offset + 0x1628);
      render_param = calculate_render_matrix(&stack0x00000068);
      if (render_id == *(int *)(context_offset + 0x1ca0)) {
        update_render_context(&stack0x00000078, 1);
      }
      submit_render_batch(CONCAT44(matrix_value, stack0x00000078),
                    *(undefined8 *)(context_base + -0x80), render_param, 1,
                    CONCAT44(blend_mode, *(undefined4 *)(context_offset + 0x1664)));
      depth_value = 3.4028235e+38;
      depth_offset = 3.4028235e+38;
      color_offset = -3.4028235e+38;
      matrix_value = -3.4028235e+38;
      status_flag = process_render_command(&stack0x00000078, render_id, 4);
      buffer_offset = g_engine_context;
      if (status_flag != '\0') {
        engine_context = (longlong *)(g_engine_context + 0x1af8);
        *(undefined1 *)(g_engine_context + 0x1b3e) = 1;
        render_flags = (uint *)(*engine_context + 0x148);
        *render_flags = *render_flags | 4;
      }
      matrix_offset = 0x1d0;
      if (*(int *)(context_offset + 0x1b2c) == render_id) {
        matrix_offset = 0x1e0;
      }
      param_buffer = (undefined4 *)(matrix_offset + 0x1628 + buffer_offset);
      blend_mode = param_buffer[1];
      render_param = param_buffer[2];
      color_r = (float)param_buffer[3];
      *(undefined4 *)(context_base + -0x78) = *param_buffer;
      *(undefined4 *)(context_base + -0x74) = blend_mode;
      *(undefined4 *)(context_base + -0x70) = render_param;
      *(float *)(context_base + -0x6c) = color_r;
      *(float *)(context_base + -0x6c) = color_r * *(float *)(buffer_offset + 0x1628);
      blend_mode = calculate_render_matrix(context_base + -0x78);
      process_vertex_buffer(*(undefined8 *)(context_data + 0x2e8), &stack0x00000068, &stack0x00000070, blend_mode,
                    CONCAT44(render_mode, *(undefined4 *)(context_offset + 0x1698)));
      render_id = format_text_output(context_base + -0x60, 0x40, &g_empty_string, (double)*vertex_buffer);
      text_ptr = (char *)(context_base + -0x60 + (longlong)render_id);
      *(undefined4 *)(context_base + -0x78) = 0x3f000000;
      *(undefined4 *)(context_base + -0x74) = 0x3f000000;
      buffer_offset = g_engine_context;
      if (text_ptr == (char *)0x0) {
        text_ptr = (char *)0xffffffffffffffff;
      }
      temp_ptr = (char *)(context_base + -0x60);
      if ((char *)(context_base - 0x60U) < text_ptr) {
        while (*temp_ptr != '\0') {
          if (((*temp_ptr == '#') && (temp_ptr[1] == '#')) ||
             (temp_ptr = temp_ptr + 1, text_ptr <= temp_ptr)) break;
        }
      }
      color_r = matrix_value;
      if (((int)temp_ptr != (int)context_base + -0x60) &&
         (text_ptr = temp_ptr,
         render_text_overlay(*(undefined8 *)(*(longlong *)(g_engine_context + 0x1af8) + 0x2e8),
                       &stack0x00000078, context_base + -0x80, context_base + -0x60, temp_ptr),
         color_r = matrix_value, matrix_offset = g_engine_context,
         *(char *)(buffer_offset + 0x2e38) != '\0')) {
        buffer_offset = *(longlong *)(g_engine_context + 0x1af8);
        if ((temp_ptr == (char *)0x0) && (temp_ptr = (char *)(context_base + -0x60), context_base != 0x5f))
        {
          while (*temp_ptr != '\0') {
            if (((*temp_ptr == '#') && (temp_ptr[1] == '#')) ||
               (temp_ptr = temp_ptr + 1, temp_ptr == (char *)0xffffffffffffffff)) break;
          }
        }
        color_b = *(float *)(buffer_offset + 0x138);
        string_ptr = (char *)(context_base + -0x60);
        render_id = *(int *)(buffer_offset + 0x13c);
        *(float *)(buffer_offset + 0x138) = matrix_value;
        texture_id = *(int *)(matrix_offset + 0x2e58);
        is_valid = color_b + 1.0 < matrix_value;
        shader_id = render_id;
        if (render_id < texture_id) {
          *(int *)(matrix_offset + 0x2e58) = render_id;
          shader_id = *(int *)(buffer_offset + 0x13c);
          texture_id = render_id;
        }
        while( true ) {
          char_ptr = (char *)memchr(string_ptr, 10, (longlong)temp_ptr - (longlong)string_ptr);
          output_ptr = temp_ptr;
          if (char_ptr != (char *)0x0) {
            output_ptr = char_ptr;
          }
          if ((output_ptr != temp_ptr) || (string_ptr != output_ptr)) {
            render_id = (int)output_ptr - (int)string_ptr;
            if ((is_valid) || (string_ptr != (char *)(context_base + -0x60))) {
              draw_text_line(&g_text_renderer, (shader_id - texture_id) * 4, &g_newline_character, render_id, string_ptr);
              text_ptr = string_ptr;
            }
            else {
              draw_text_line(&g_text_buffer, render_id, string_ptr, render_id, text_ptr);
            }
          }
          if (output_ptr == temp_ptr) break;
          string_ptr = output_ptr + 1;
        }
      }
      if (0.0 < color_g) {
        render_text_element(CONCAT44(color_r + *(float *)(context_offset + 0x1660),
                               *(float *)(context_base + -0x80) + *(float *)(context_offset + 0x1674)));
      }
      goto cleanup_render_params;
    }
  }
  else {
    execute_render_pipeline(render_id);
    finalize_render_batch();
    cleanup_render_resources();
    *(undefined4 *)(context_offset + 0x1b44) = 0xc;
    if ((status_flag == '\0') &&
       ((*(char *)(context_offset + 0x134) == '\0' && (*(int *)(context_offset + 0x1cb0) != render_id))))
    goto process_render_batch;
    *(undefined4 *)(context_offset + 0x2da0) = 0;
  }
  *(int *)(context_data + 0x3f0) = *(int *)(context_data + 0x3f0) + -1;
  *(int *)(context_data + 0x3f4) = *(int *)(context_data + 0x3f4) + -1;
  finalize_render_state(&stack0x00000078, render_id);
cleanup_render_params:
  cleanup_render_resources(*(ulonglong *)(context_base + -0x20) ^ (ulonglong)&stack0x00000000);
}

/**
 * 默认渲染处理函数
 * 处理默认的渲染操作
 */
void process_default_render(void)
{
  longlong *engine_context;
  uint *render_flags;
  undefined4 *param_buffer;
  float time_value;
  float *texture_ptr;
  bool is_valid;
  char status_flag;
  char validation_result;
  int render_id;
  undefined4 render_param;
  undefined4 blend_mode;
  int texture_id;
  char *text_ptr;
  longlong buffer_offset;
  char *char_ptr;
  longlong matrix_offset;
  char *string_ptr;
  longlong context_base;
  longlong context_offset;
  longlong context_data;
  char *temp_ptr;
  undefined8 texture_handle;
  char *text_buffer;
  char *output_ptr;
  int shader_id;
  float *vertex_buffer;
  float color_r;
  float color_g;
  undefined4 extra_param;
  float color_b;
  undefined8 stack_param_1;
  undefined8 param_data_2;
  undefined4 render_mode;
  float depth_value;
  float depth_offset;
  float color_offset;
  float stencil_value;
  float matrix_value;
  
  blend_mode = (undefined4)((ulonglong)stack_param_1 >> 0x20);
  render_mode = (undefined4)((ulonglong)texture_handle >> 0x20);
  render_id = get_render_object_id();
  if (*(int *)(context_offset + 0x1b2c) == render_id) {
    *(int *)(context_offset + 0x1b34) = render_id;
  }
  if (*(int *)(context_offset + 0x1b30) == render_id) {
    *(undefined1 *)(context_offset + 0x1b3f) = 1;
  }
  color_r = (float)get_current_time();
  text_ptr = text_buffer;
  if (text_buffer != (char *)0xffffffffffffffff) {
    while (*text_ptr != '\0') {
      if (((*text_ptr == '#') && (text_ptr[1] == '#')) ||
         (text_ptr = text_ptr + 1, text_ptr == (char *)0xffffffffffffffff)) break;
    }
  }
  texture_ptr = *(float **)(context_offset + 0x19f0);
  color_b = *(float *)(context_offset + 0x19f8);
  if (text_buffer == text_ptr) {
    color_g = 0.0;
  }
  else {
    param_data_2 = CONCAT44(blend_mode, 0xbf800000);
    calculate_texture_bounds(texture_ptr, context_base + -0x78, color_b, 0x7f7fffff, param_data_2);
    blend_mode = (undefined4)((ulonglong)param_data_2 >> 0x20);
    color_g = *(float *)(context_base + -0x78);
    if (0.0 < color_g) {
      color_g = color_g - color_b / *texture_ptr;
    }
    color_b = *(float *)(context_base + -0x74);
    color_g = (float)(int)(color_g + 0.95);
  }
  depth_value = *(float *)(context_data + 0x100);
  depth_offset = *(float *)(context_data + 0x104);
  time_value = *(float *)(context_offset + 0x1660);
  *(float *)(context_base + -0x80) = color_r + depth_value;
  matrix_value = time_value + time_value + color_b + depth_offset;
  *(float *)(context_base + -0x7c) = matrix_value;
  if (color_g <= 0.0) {
    color_offset = 0.0;
  }
  else {
    color_offset = color_g + *(float *)(context_offset + 0x1674);
  }
  color_offset = color_offset + color_r + depth_value;
  stencil_value = depth_value;
  matrix_value = depth_offset;
  status_flag = validate_render_parameters(&stack0x00000068, render_id, &stack0x00000078);
  if (status_flag == '\0') {
    *(float *)(context_base + -0x74) = matrix_value - depth_offset;
    render_mode = *(undefined4 *)(context_offset + 0x1660);
    *(float *)(context_base + -0x78) = color_offset - depth_value;
    apply_render_transform(context_base + -0x78, render_mode);
    goto cleanup_render_params;
  }
  status_flag = check_render_queue(extra_param, render_id, 1);
  validation_result = validate_texture_coordinates(&stack0x00000078, render_id);
  if ((((status_flag == '\0') && ((validation_result == '\0' || (*(char *)(context_offset + 0x410) == '\0')))) &&
      (*(int *)(context_offset + 0x1ca4) != render_id)) &&
     ((*(int *)(context_offset + 0x1cb0) != render_id || (*(int *)(context_offset + 0x2da0) == render_id)))) {
process_render_batch:
    if ((*(int *)(context_offset + 0x1b2c) != render_id) || (*(int *)(context_offset + 0x2da0) != render_id)) {
      *(float *)(context_base + -0x74) = matrix_value - depth_offset;
      render_param = *(undefined4 *)(context_offset + 0x1660);
      *(float *)(context_base + -0x78) = color_offset - depth_value;
      apply_render_transform(context_base + -0x78, render_param);
      if (*(int *)(context_offset + 0x1b2c) == render_id) {
        buffer_offset = 9;
      }
      else {
        buffer_offset = (ulonglong)(*(int *)(context_offset + 0x1b18) == render_id) + 7;
      }
      param_buffer = (undefined4 *)(context_offset + 0x1628 + (buffer_offset + 10) * 0x10);
      depth_value = (float)*param_buffer;
      depth_offset = (float)param_buffer[1];
      color_offset = (float)param_buffer[2];
      matrix_value = (float)param_buffer[3] * *(float *)(context_offset + 0x1628);
      render_param = calculate_render_matrix(&stack0x00000068);
      if (render_id == *(int *)(context_offset + 0x1ca0)) {
        update_render_context(&stack0x00000078, 1);
      }
      submit_render_batch(CONCAT44(matrix_value, stack0x00000078),
                    *(undefined8 *)(context_base + -0x80), render_param, 1,
                    CONCAT44(blend_mode, *(undefined4 *)(context_offset + 0x1664)));
      depth_value = 3.4028235e+38;
      depth_offset = 3.4028235e+38;
      color_offset = -3.4028235e+38;
      matrix_value = -3.4028235e+38;
      status_flag = process_render_command(&stack0x00000078, render_id, 4);
      buffer_offset = g_engine_context;
      if (status_flag != '\0') {
        engine_context = (longlong *)(g_engine_context + 0x1af8);
        *(undefined1 *)(g_engine_context + 0x1b3e) = 1;
        render_flags = (uint *)(*engine_context + 0x148);
        *render_flags = *render_flags | 4;
      }
      matrix_offset = 0x1d0;
      if (*(int *)(context_offset + 0x1b2c) == render_id) {
        matrix_offset = 0x1e0;
      }
      param_buffer = (undefined4 *)(matrix_offset + 0x1628 + buffer_offset);
      blend_mode = param_buffer[1];
      render_param = param_buffer[2];
      color_r = (float)param_buffer[3];
      *(undefined4 *)(context_base + -0x78) = *param_buffer;
      *(undefined4 *)(context_base + -0x74) = blend_mode;
      *(undefined4 *)(context_base + -0x70) = render_param;
      *(float *)(context_base + -0x6c) = color_r;
      *(float *)(context_base + -0x6c) = color_r * *(float *)(buffer_offset + 0x1628);
      blend_mode = calculate_render_matrix(context_base + -0x78);
      process_vertex_buffer(*(undefined8 *)(context_data + 0x2e8), &stack0x00000068, &stack0x00000070, blend_mode,
                    CONCAT44(render_mode, *(undefined4 *)(context_offset + 0x1698)));
      render_id = format_text_output(context_base + -0x60, 0x40, &g_empty_string, (double)*vertex_buffer);
      text_ptr = (char *)(context_base + -0x60 + (longlong)render_id);
      *(undefined4 *)(context_base + -0x78) = 0x3f000000;
      *(undefined4 *)(context_base + -0x74) = 0x3f000000;
      buffer_offset = g_engine_context;
      if (text_ptr == (char *)0x0) {
        text_ptr = (char *)0xffffffffffffffff;
      }
      temp_ptr = (char *)(context_base + -0x60);
      if ((char *)(context_base - 0x60U) < text_ptr) {
        while (*temp_ptr != '\0') {
          if (((*temp_ptr == '#') && (temp_ptr[1] == '#')) ||
             (temp_ptr = temp_ptr + 1, text_ptr <= temp_ptr)) break;
        }
      }
      color_r = matrix_value;
      if (((int)temp_ptr != (int)context_base + -0x60) &&
         (text_ptr = temp_ptr,
         render_text_overlay(*(undefined8 *)(*(longlong *)(g_engine_context + 0x1af8) + 0x2e8),
                       &stack0x00000078, context_base + -0x80, context_base + -0x60, temp_ptr),
         color_r = matrix_value, matrix_offset = g_engine_context,
         *(char *)(buffer_offset + 0x2e38) != '\0')) {
        buffer_offset = *(longlong *)(g_engine_context + 0x1af8);
        if ((temp_ptr == (char *)0x0) && (temp_ptr = (char *)(context_base + -0x60), context_base != 0x5f))
        {
          while (*temp_ptr != '\0') {
            if (((*temp_ptr == '#') && (temp_ptr[1] == '#')) ||
               (temp_ptr = temp_ptr + 1, temp_ptr == (char *)0xffffffffffffffff)) break;
          }
        }
        color_b = *(float *)(buffer_offset + 0x138);
        string_ptr = (char *)(context_base + -0x60);
        render_id = *(int *)(buffer_offset + 0x13c);
        *(float *)(buffer_offset + 0x138) = matrix_value;
        texture_id = *(int *)(matrix_offset + 0x2e58);
        is_valid = color_b + 1.0 < matrix_value;
        shader_id = render_id;
        if (render_id < texture_id) {
          *(int *)(matrix_offset + 0x2e58) = render_id;
          shader_id = *(int *)(buffer_offset + 0x13c);
          texture_id = render_id;
        }
        while( true ) {
          char_ptr = (char *)memchr(string_ptr, 10, (longlong)temp_ptr - (longlong)string_ptr);
          output_ptr = temp_ptr;
          if (char_ptr != (char *)0x0) {
            output_ptr = char_ptr;
          }
          if ((output_ptr != temp_ptr) || (string_ptr != output_ptr)) {
            render_id = (int)output_ptr - (int)string_ptr;
            if ((is_valid) || (string_ptr != (char *)(context_base + -0x60))) {
              draw_text_line(&g_text_renderer, (shader_id - texture_id) * 4, &g_newline_character, render_id, string_ptr);
              text_ptr = string_ptr;
            }
            else {
              draw_text_line(&g_text_buffer, render_id, string_ptr, render_id, text_ptr);
            }
          }
          if (output_ptr == temp_ptr) break;
          string_ptr = output_ptr + 1;
        }
      }
      if (0.0 < color_g) {
        render_text_element(CONCAT44(color_r + *(float *)(context_offset + 0x1660),
                               *(float *)(context_base + -0x80) + *(float *)(context_offset + 0x1674)));
      }
      goto cleanup_render_params;
    }
  }
  else {
    execute_render_pipeline(render_id);
    finalize_render_batch();
    cleanup_render_resources();
    *(undefined4 *)(context_offset + 0x1b44) = 0xc;
    if ((status_flag == '\0') &&
       ((*(char *)(context_offset + 0x134) == '\0' && (*(int *)(context_offset + 0x1cb0) != render_id))))
    goto process_render_batch;
    *(undefined4 *)(context_offset + 0x2da0) = 0;
  }
  *(int *)(context_data + 0x3f0) = *(int *)(context_data + 0x3f0) + -1;
  *(int *)(context_data + 0x3f4) = *(int *)(context_data + 0x3f4) + -1;
  finalize_render_state(&stack0x00000078, render_id);
cleanup_render_params:
  cleanup_render_resources(*(ulonglong *)(context_base + -0x20) ^ (ulonglong)&stack0x00000000);
}

/**
 * 快速渲染清理函数
 * 快速清理渲染状态和资源
 */
void quick_render_cleanup(void)
{
  undefined4 render_param;
  longlong context_base;
  longlong context_offset;
  float depth_value;
  float depth_offset;
  float color_offset;
  float stencil_value;
  float matrix_value;
  
  *(float *)(context_base + -0x74) = matrix_value - depth_offset;
  render_param = *(undefined4 *)(context_offset + 0x1660);
  *(float *)(context_base + -0x78) = color_offset - depth_value;
  apply_render_transform(context_base + -0x78, render_param);
  cleanup_render_resources(*(ulonglong *)(context_base + -0x20) ^ (ulonglong)&stack0x00000000);
}

/**
 * 渲染状态清理函数
 * 清理渲染状态和相关资源
 */
void cleanup_render_state(void)
{
  longlong context_base;
  
  cleanup_render_resources(*(ulonglong *)(context_base + -0x20) ^ (ulonglong)&stack0x00000000);
}

// 全局变量定义
// g_engine_context - 全局引擎上下文指针
// g_render_checksum - 渲染校验和
// g_empty_string - 空字符串常量
// g_text_renderer - 文本渲染器对象
// g_text_buffer - 文本缓冲区
// g_newline_character - 换行字符常量