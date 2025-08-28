#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 02_core_engine_part105.c - 核心引擎渲染与碰撞处理模块
// 本文件包含7个函数，主要用于处理渲染相关的碰撞检测和坐标变换

/**
 * 处理渲染对象的碰撞检测和坐标变换
 * 
 * @param engine_context 引擎上下文指针
 * @param position_x 对象X坐标位置
 * @param position_y 对象Y坐标位置  
 * @param text_start 文本起始位置
 * @param text_end 文本结束位置
 * @param collision_data 碰撞数据指针
 * @param scale_x X轴缩放因子
 * @param scale_y Y轴缩放因子
 */
void process_render_collision_detection(longlong engine_context, float *position_x, float *position_y, 
                                     longlong text_start, longlong text_end, longlong *collision_data,
                                     float *scale_x, float *scale_y)
{
  uint64_t *transform_data;
  float temp_x;
  float temp_y;
  float scale_factor;
  bool is_colliding;
  byte flag;
  longlong engine_base;
  uint render_flags;
  float *width_ptr;
  float *height_ptr;
  float adjusted_x;
  float adjusted_y;
  float boundary_width;
  uint64_t stack_temp_x;
  uint64_t stack_transform_x;
  uint64_t stack_transform_y;
  
  engine_base = SYSTEM_DATA_MANAGER_A;  // 获取引擎基础地址
  stack_temp_x = *(uint64_t *)position_x;
  adjusted_x = (float)stack_temp_x;
  adjusted_y = (float)((ulonglong)stack_temp_x >> 0x20);
  
  // 处理碰撞数据
  if (collision_data == (longlong *)0x0) {
    scale_factor = *(float *)(SYSTEM_DATA_MANAGER_A + 0x19f8);
    width_ptr = *(float **)(SYSTEM_DATA_MANAGER_A + 0x19f0);
    
    if (text_start == text_end) {
      collision_data = (longlong *)((ulonglong)(uint)scale_factor << 0x20);
    }
    else {
      calculate_text_dimensions(width_ptr, &stack_transform_x, scale_factor, 0x7f7fffff, 0, 
                               text_start, text_end, 0);
      boundary_width = (float)stack_transform_x;
      
      if (0.0 < (float)stack_transform_x) {
        boundary_width = (float)stack_transform_x - scale_factor / *width_ptr;
      }
      
      collision_data = (longlong *)
                CONCAT44((int)((ulonglong)stack_transform_x >> 0x20), 
                        (float)(int)(boundary_width + 0.95));
    }
  }
  else {
    collision_data = (longlong *)*collision_data;
  }
  
  // 设置默认宽度和高度指针
  width_ptr = scale_y;
  if (scale_y == (float *)0x0) {
    width_ptr = position_x;
  }
  
  height_ptr = scale_y + 2;
  if (scale_y == (float *)0x0) {
    height_ptr = position_y;
  }
  
  scale_factor = *height_ptr;
  
  // 碰撞检测逻辑
  if ((scale_factor <= collision_data._0_4_ + adjusted_x) || 
      (height_ptr[1] <= collision_data._4_4_ + adjusted_y)) {
    is_colliding = true;
  }
  else {
    is_colliding = false;
  }
  
  // 检查边界碰撞
  if (scale_y != (float *)0x0) {
    if ((adjusted_x < *width_ptr) || (adjusted_y < width_ptr[1])) {
      flag = 1;
    }
    else {
      flag = 0;
    }
    is_colliding = (bool)(is_colliding | flag);
  }
  
  // 应用缩放变换
  if ((0.0 < *scale_x) &&
     (scale_factor = ((*position_y - adjusted_x) - collision_data._0_4_) * *scale_x + adjusted_x, 
      adjusted_x < scale_factor)) {
    stack_temp_x = CONCAT44(adjusted_y, scale_factor);
    adjusted_x = scale_factor;
  }
  
  if ((0.0 < scale_x[1]) &&
     (scale_factor = ((position_y[1] - adjusted_y) - collision_data._4_4_) * scale_x[1] + adjusted_y, 
      adjusted_y < scale_factor)) {
    adjusted_x = (float)stack_temp_x;
    adjusted_y = scale_factor;
  }
  
  // 获取变换矩阵数据
  stack_transform_x = *(uint64_t *)(engine_base + 0x16c8);
  stack_transform_y = CONCAT44(*(float *)(engine_base + 0x16d4) * *(float *)(engine_base + 0x1628),
                              *(int32_t *)(engine_base + 0x16d0));
  
  // 处理碰撞响应
  if (is_colliding) {
    scale_factor = width_ptr[1];
    temp_y = height_ptr[1];
    temp_x = *width_ptr;
    render_flags = get_render_flags(&stack_transform_x);
    
    if ((render_flags & 0xff000000) != 0) {
      if (text_end == 0) {
        text_end = -1;
        do {
          text_end = text_end + 1;
        } while (*(char *)(text_start + text_end) != '\0');
        text_end = text_end + text_start;
      }
      
      if (text_start != text_end) {
        width_ptr = (float *)(*(longlong *)(engine_context + 0x68) + -0x10 +
                            (longlong)*(int *)(engine_context + 0x60) * 0x10);
        
        stack_transform_x._0_4_ = *width_ptr;
        if (*width_ptr < temp_x) {
          stack_transform_x._0_4_ = temp_x;
        }
        
        stack_transform_x._4_4_ = width_ptr[1];
        if (width_ptr[1] < scale_factor) {
          stack_transform_x._4_4_ = scale_factor;
        }
        
        stack_transform_y._0_4_ = width_ptr[2];
        if (scale_factor <= width_ptr[2]) {
          stack_transform_y._0_4_ = scale_factor;
        }
        
        stack_transform_y._4_4_ = width_ptr[3];
        if (temp_y <= width_ptr[3]) {
          stack_transform_y._4_4_ = temp_y;
        }
        
        render_text_element(*(uint64_t *)(*(longlong *)(engine_context + 0x38) + 8), 
                           engine_context, *(int32_t *)(*(longlong *)(engine_context + 0x38) + 0x10),
                           CONCAT44(adjusted_y, adjusted_x), render_flags, &stack_transform_x, 
                           text_start, text_end, 0, 1);
      }
    }
  }
  else {
    render_flags = get_render_flags(&stack_transform_x);
    
    if ((render_flags & 0xff000000) != 0) {
      if (text_end == 0) {
        text_end = -1;
        do {
          text_end = text_end + 1;
        } while (*(char *)(text_start + text_end) != '\0');
        text_end = text_end + text_start;
      }
      
      if (text_start != text_end) {
        transform_data = (uint64_t *)
                 (*(longlong *)(engine_context + 0x68) + -0x10 + 
                  (longlong)*(int *)(engine_context + 0x60) * 0x10);
        
        stack_transform_x = *transform_data;
        stack_transform_y = transform_data[1];
        
        render_text_element(*(uint64_t *)(*(longlong *)(engine_context + 0x38) + 8), 
                           engine_context, *(int32_t *)(*(longlong *)(engine_context + 0x38) + 0x10),
                           CONCAT44(adjusted_y, adjusted_x), render_flags, &stack_transform_x, 
                           text_start, text_end, 0, 0);
      }
    }
  }
  
  return;
}

/**
 * 渲染文本元素的高级版本
 * 
 * @param render_context 渲染上下文
 * @param position_x X坐标位置
 * @param position_y Y坐标位置
 */
void render_text_element_advanced(uint64_t render_context, float *position_x, float *position_y)
{
  uint64_t *transform_data;
  float temp_x;
  float temp_y;
  float *dimension_ptr;
  uint64_t render_flags;
  int32_t texture_id;
  int32_t shader_id;
  float width;
  float height;
  float depth;
  float scale;
  uint64_t transform_matrix;
  bool needs_clipping;
  byte clip_flag;
  uint render_state;
  longlong frame_buffer;
  float *font_width;
  longlong text_start;
  longlong text_end;
  float *font_height;
  uint64_t texture_handle;
  longlong engine_context;
  longlong render_target;
  uint64_t shader_program;
  float boundary_width;
  float boundary_height;
  float font_scale;
  int32_t texture_coords_x;
  int32_t texture_coords_y;
  
  // 设置渲染上下文状态
  *(uint64_t *)(frame_buffer + 0x18) = texture_handle;
  *(uint64_t *)(frame_buffer + 0x20) = shader_program;
  *(ulonglong *)(render_target + 0x4f) = CONCAT44(texture_coords_y, texture_coords_x);
  
  // 处理文本尺寸计算
  if (*(uint64_t **)(render_target + 0x6f) == (uint64_t *)0x0) {
    temp_x = *(float *)(engine_context + 0x19f8);
    dimension_ptr = *(float **)(engine_context + 0x19f0);
    
    if (text_start == text_end) {
      *(float *)(render_target + 0x73) = temp_x;
      *(int32_t *)(render_target + 0x6f) = 0;
    }
    else {
      calculate_text_dimensions(dimension_ptr, render_target + -0x59, temp_x, 0x7f7fffff);
      boundary_width = *(float *)(render_target + -0x59);
      
      if (font_scale < boundary_width) {
        boundary_width = boundary_width - temp_x / *dimension_ptr;
      }
      
      *(int32_t *)(render_target + 0x73) = *(int32_t *)(render_target + -0x55);
      *(float *)(render_target + 0x6f) = (float)(int)(boundary_width + 0.95);
    }
  }
  else {
    *(uint64_t *)(render_target + 0x6f) = **(uint64_t **)(render_target + 0x6f);
  }
  
  // 设置字体尺寸指针
  dimension_ptr = *(float **)(render_target + 0x7f);
  font_width = dimension_ptr;
  
  if (dimension_ptr == (float *)0x0) {
    font_width = position_x;
  }
  
  font_height = dimension_ptr + 2;
  if (dimension_ptr == (float *)0x0) {
    font_height = position_y;
  }
  
  temp_x = *(float *)(render_target + 0x4f);
  boundary_width = *font_height;
  
  // 边界检查
  if ((boundary_width <= *(float *)(render_target + 0x6f) + temp_x) ||
     (font_height[1] <= *(float *)(render_target + 0x73) + *(float *)(render_target + 0x53))) {
    needs_clipping = true;
  }
  else {
    needs_clipping = false;
  }
  
  // 检查裁剪标志
  if (dimension_ptr != (float *)0x0) {
    if ((temp_x < *font_width) || (*(float *)(render_target + 0x53) < font_width[1])) {
      clip_flag = 1;
    }
    else {
      clip_flag = 0;
    }
    needs_clipping = (bool)(needs_clipping | clip_flag);
  }
  
  // 应用字体缩放
  if ((font_scale < **(float **)(render_target + 0x77)) &&
     (boundary_height = ((*position_y - temp_x) - *(float *)(render_target + 0x6f)) * 
                       **(float **)(render_target + 0x77) + temp_x, temp_x < boundary_height)) {
    *(ulonglong *)(render_target + 0x4f) =
         CONCAT44((int)((ulonglong)*(uint64_t *)(render_target + 0x4f) >> 0x20), boundary_height);
  }
  
  // 获取渲染状态
  texture_id = *(int32_t *)(engine_context + 0x16cc);
  shader_id = *(int32_t *)(engine_context + 0x16d0);
  temp_x = *(float *)(engine_context + 0x16d4);
  
  *(int32_t *)(render_target + -0x59) = *(int32_t *)(engine_context + 0x16c8);
  *(int32_t *)(render_target + -0x55) = texture_id;
  *(int32_t *)(render_target + -0x51) = shader_id;
  *(float *)(render_target + -0x4d) = temp_x;
  *(float *)(render_target + -0x4d) = temp_x * *(float *)(engine_context + 0x1628);
  
  // 执行渲染
  if (needs_clipping) {
    temp_x = font_width[1];
    boundary_height = font_height[1];
    temp_y = *font_width;
    render_state = get_render_flags(render_target + -0x59);
    
    if ((render_state & 0xff000000) != 0) {
      if (text_end == 0) {
        text_end = -1;
        do {
          text_end = text_end + 1;
        } while (*(char *)(text_start + text_end) != '\0');
        text_end = text_end + text_start;
      }
      
      if (text_start != text_end) {
        engine_context = *(longlong *)(render_target + 0x38);
        dimension_ptr = (float *)(*(longlong *)(render_target + 0x68) + -0x10 +
                              (longlong)*(int *)(render_target + 0x60) * 0x10);
        
        width = *dimension_ptr;
        height = dimension_ptr[1];
        depth = dimension_ptr[2];
        scale = dimension_ptr[3];
        
        *(float *)(render_target + -0x59) = width;
        *(float *)(render_target + -0x55) = height;
        *(float *)(render_target + -0x51) = depth;
        *(float *)(render_target + -0x4d) = scale;
        
        if (width < temp_y) {
          *(float *)(render_target + -0x59) = temp_y;
        }
        if (*(float *)(render_target + -0x55) < temp_x) {
          *(float *)(render_target + -0x55) = temp_x;
        }
        if (boundary_width <= *(float *)(render_target + -0x51)) {
          *(float *)(render_target + -0x51) = boundary_width;
        }
        if (boundary_height <= *(float *)(render_target + -0x4d)) {
          *(float *)(render_target + -0x4d) = boundary_height;
        }
        
        render_text_element(*(uint64_t *)(engine_context + 8));
      }
    }
  }
  else {
    render_state = get_render_flags(render_target + -0x59);
    
    if ((render_state & 0xff000000) != 0) {
      if (text_end == 0) {
        text_end = -1;
        do {
          text_end = text_end + 1;
        } while (*(char *)(text_start + text_end) != '\0');
        text_end = text_end + text_start;
      }
      
      if (text_start != text_end) {
        transform_data = (uint64_t *)
                 (*(longlong *)(render_target + 0x68) + -0x10 +
                 (longlong)*(int *)(render_target + 0x60) * 0x10);
        
        transform_matrix = transform_data[1];
        render_flags = *(uint64_t *)(*(longlong *)(render_target + 0x38) + 8);
        
        *(uint64_t *)(render_target + -0x59) = *transform_data;
        *(uint64_t *)(render_target + -0x51) = transform_matrix;
        
        render_text_element(render_flags);
      }
    }
  }
  
  return;
}

/**
 * 处理2D渲染变换
 * 
 * @param render_context 渲染上下文
 * @param position 位置指针
 */
void process_2d_render_transform(uint64_t render_context, float *position)
{
  uint64_t *transform_data;
  float temp_x;
  float temp_y;
  float *dimension_ptr;
  uint64_t render_flags;
  int32_t texture_id;
  int32_t shader_id;
  float width;
  float height;
  float depth;
  float scale;
  uint64_t transform_matrix;
  bool needs_clipping;
  byte clip_flag;
  uint render_state;
  longlong frame_buffer;
  float *font_width;
  longlong text_start;
  longlong text_end;
  float *font_height;
  float *texture_coords;
  longlong engine_context;
  uint64_t shader_program;
  float boundary_width;
  float boundary_height;
  float font_scale;
  int32_t texture_coords_x;
  int32_t texture_coords_y;
  
  // 设置渲染状态
  *(uint64_t *)(frame_buffer + 0x20) = shader_program;
  *(ulonglong *)(render_context + 0x4f) = CONCAT44(texture_coords_y, texture_coords_x);
  
  // 处理文本尺寸计算
  if (*(uint64_t **)(render_context + 0x6f) == (uint64_t *)0x0) {
    temp_x = *(float *)(engine_context + 0x19f8);
    dimension_ptr = *(float **)(engine_context + 0x19f0);
    
    if (text_start == text_end) {
      *(float *)(render_context + 0x73) = temp_x;
      *(int32_t *)(render_context + 0x6f) = 0;
    }
    else {
      calculate_text_dimensions(dimension_ptr, render_context + -0x59, temp_x, 0x7f7fffff);
      boundary_width = *(float *)(render_context + -0x59);
      
      if (font_scale < boundary_width) {
        boundary_width = boundary_width - temp_x / *dimension_ptr;
      }
      
      *(int32_t *)(render_context + 0x73) = *(int32_t *)(render_context + -0x55);
      *(float *)(render_context + 0x6f) = (float)(int)(boundary_width + 0.95);
    }
  }
  else {
    *(uint64_t *)(render_context + 0x6f) = **(uint64_t **)(render_context + 0x6f);
  }
  
  // 设置字体尺寸指针
  dimension_ptr = *(float **)(render_context + 0x7f);
  font_width = dimension_ptr;
  
  if (dimension_ptr == (float *)0x0) {
    font_width = position;
  }
  
  font_height = dimension_ptr + 2;
  if (dimension_ptr == (float *)0x0) {
    font_height = texture_coords;
  }
  
  temp_x = *(float *)(render_context + 0x4f);
  boundary_width = *font_height;
  
  // 边界检查
  if ((boundary_width <= *(float *)(render_context + 0x6f) + temp_x) ||
     (font_height[1] <= *(float *)(render_context + 0x73) + *(float *)(render_context + 0x53))) {
    needs_clipping = true;
  }
  else {
    needs_clipping = false;
  }
  
  // 检查裁剪标志
  if (dimension_ptr != (float *)0x0) {
    if ((temp_x < *font_width) || (*(float *)(render_context + 0x53) < font_width[1])) {
      clip_flag = 1;
    }
    else {
      clip_flag = 0;
    }
    needs_clipping = (bool)(needs_clipping | clip_flag);
  }
  
  // 应用字体缩放
  if ((font_scale < **(float **)(render_context + 0x77)) &&
     (boundary_height = ((*texture_coords - temp_x) - *(float *)(render_context + 0x6f)) * 
                       **(float **)(render_context + 0x77) + temp_x, temp_x < boundary_height)) {
    *(ulonglong *)(render_context + 0x4f) =
         CONCAT44((int)((ulonglong)*(uint64_t *)(render_context + 0x4f) >> 0x20), boundary_height);
  }
  
  // 获取渲染状态
  texture_id = *(int32_t *)(engine_context + 0x16cc);
  shader_id = *(int32_t *)(engine_context + 0x16d0);
  temp_x = *(float *)(engine_context + 0x16d4);
  
  *(int32_t *)(render_context + -0x59) = *(int32_t *)(engine_context + 0x16c8);
  *(int32_t *)(render_context + -0x55) = texture_id;
  *(int32_t *)(render_context + -0x51) = shader_id;
  *(float *)(render_context + -0x4d) = temp_x;
  *(float *)(render_context + -0x4d) = temp_x * *(float *)(engine_context + 0x1628);
  
  // 执行渲染
  if (needs_clipping) {
    temp_x = font_width[1];
    boundary_height = font_height[1];
    temp_y = *font_width;
    render_state = get_render_flags(render_context + -0x59);
    
    if ((render_state & 0xff000000) != 0) {
      if (text_end == 0) {
        text_end = -1;
        do {
          text_end = text_end + 1;
        } while (*(char *)(text_start + text_end) != '\0');
        text_end = text_end + text_start;
      }
      
      if (text_start != text_end) {
        engine_context = *(longlong *)(render_context + 0x38);
        dimension_ptr = (float *)(*(longlong *)(render_context + 0x68) + -0x10 +
                              (longlong)*(int *)(render_context + 0x60) * 0x10);
        
        width = *dimension_ptr;
        height = dimension_ptr[1];
        depth = dimension_ptr[2];
        scale = dimension_ptr[3];
        
        *(float *)(render_context + -0x59) = width;
        *(float *)(render_context + -0x55) = height;
        *(float *)(render_context + -0x51) = depth;
        *(float *)(render_context + -0x4d) = scale;
        
        if (width < temp_y) {
          *(float *)(render_context + -0x59) = temp_y;
        }
        if (*(float *)(render_context + -0x55) < temp_x) {
          *(float *)(render_context + -0x55) = temp_x;
        }
        if (boundary_width <= *(float *)(render_context + -0x51)) {
          *(float *)(render_context + -0x51) = boundary_width;
        }
        if (boundary_height <= *(float *)(render_context + -0x4d)) {
          *(float *)(render_context + -0x4d) = boundary_height;
        }
        
        render_text_element(*(uint64_t *)(engine_context + 8));
      }
    }
  }
  else {
    render_state = get_render_flags(render_context + -0x59);
    
    if ((render_state & 0xff000000) != 0) {
      if (text_end == 0) {
        text_end = -1;
        do {
          text_end = text_end + 1;
        } while (*(char *)(text_start + text_end) != '\0');
        text_end = text_end + text_start;
      }
      
      if (text_start != text_end) {
        transform_data = (uint64_t *)
                 (*(longlong *)(render_context + 0x68) + -0x10 +
                 (longlong)*(int *)(render_context + 0x60) * 0x10);
        
        transform_matrix = transform_data[1];
        render_flags = *(uint64_t *)(*(longlong *)(render_context + 0x38) + 8);
        
        *(uint64_t *)(render_context + -0x59) = *transform_data;
        *(uint64_t *)(render_context + -0x51) = transform_matrix;
        
        render_text_element(render_flags);
      }
    }
  }
  
  return;
}

/**
 * 处理3D渲染变换
 * 
 * @param render_context 渲染上下文
 * @param transform_matrix 变换矩阵
 * @param scale_factor 缩放因子
 */
void process_3d_render_transform(uint64_t render_context, uint64_t transform_matrix, uint64_t scale_factor)
{
  uint64_t *transform_data;
  float temp_x;
  float temp_y;
  float *dimension_ptr;
  uint64_t render_flags;
  int32_t texture_id;
  int32_t shader_id;
  float width;
  float height;
  float depth;
  float scale;
  uint64_t matrix_data;
  bool needs_clipping;
  byte clip_flag;
  uint render_state;
  float *font_width;
  longlong text_start;
  longlong text_end;
  float *font_height;
  float *texture_coords;
  longlong engine_context;
  float *position_data;
  float font_scale;
  float model_scale;
  
  dimension_ptr = *(float **)(engine_context + 0x19f0);
  
  if (text_start == text_end) {
    *(float *)(render_context + 0x73) = model_scale;
    *(int32_t *)(render_context + 0x6f) = 0;
  }
  else {
    calculate_text_dimensions(dimension_ptr, render_context + -0x59, scale_factor, 0x7f7fffff);
    width = *(float *)(render_context + -0x59);
    
    if (font_scale < width) {
      width = width - model_scale / *dimension_ptr;
    }
    
    *(int32_t *)(render_context + 0x73) = *(int32_t *)(render_context + -0x55);
    *(float *)(render_context + 0x6f) = (float)(int)(width + 0.95);
  }
  
  // 设置渲染参数
  dimension_ptr = *(float **)(render_context + 0x7f);
  font_width = dimension_ptr;
  
  if (dimension_ptr == (float *)0x0) {
    font_width = position_data;
  }
  
  font_height = dimension_ptr + 2;
  if (dimension_ptr == (float *)0x0) {
    font_height = texture_coords;
  }
  
  width = *(float *)(render_context + 0x4f);
  temp_x = *font_height;
  
  // 边界检查
  if ((temp_x <= *(float *)(render_context + 0x6f) + width) ||
     (font_height[1] <= *(float *)(render_context + 0x73) + *(float *)(render_context + 0x53))) {
    needs_clipping = true;
  }
  else {
    needs_clipping = false;
  }
  
  // 检查裁剪标志
  if (dimension_ptr != (float *)0x0) {
    if ((width < *font_width) || (*(float *)(render_context + 0x53) < font_width[1])) {
      clip_flag = 1;
    }
    else {
      clip_flag = 0;
    }
    needs_clipping = (bool)(needs_clipping | clip_flag);
  }
  
  // 应用缩放
  if ((font_scale < **(float **)(render_context + 0x77)) &&
     (temp_y = ((*texture_coords - width) - *(float *)(render_context + 0x6f)) * 
               **(float **)(render_context + 0x77) + width, width < temp_y)) {
    *(ulonglong *)(render_context + 0x4f) =
         CONCAT44((int)((ulonglong)*(uint64_t *)(render_context + 0x4f) >> 0x20), temp_y);
  }
  
  // 获取渲染状态
  texture_id = *(int32_t *)(engine_context + 0x16cc);
  shader_id = *(int32_t *)(engine_context + 0x16d0);
  width = *(float *)(engine_context + 0x16d4);
  
  *(int32_t *)(render_context + -0x59) = *(int32_t *)(engine_context + 0x16c8);
  *(int32_t *)(render_context + -0x55) = texture_id;
  *(int32_t *)(render_context + -0x51) = shader_id;
  *(float *)(render_context + -0x4d) = width;
  *(float *)(render_context + -0x4d) = width * *(float *)(engine_context + 0x1628);
  
  // 执行渲染
  if (needs_clipping) {
    width = font_width[1];
    temp_y = font_height[1];
    temp_y = *font_width;
    render_state = get_render_flags(render_context + -0x59);
    
    if ((render_state & 0xff000000) != 0) {
      if (text_end == 0) {
        text_end = -1;
        do {
          text_end = text_end + 1;
        } while (*(char *)(text_start + text_end) != '\0');
        text_end = text_end + text_start;
      }
      
      if (text_start != text_end) {
        engine_context = *(longlong *)(render_context + 0x38);
        dimension_ptr = (float *)(*(longlong *)(render_context + 0x68) + -0x10 +
                              (longlong)*(int *)(render_context + 0x60) * 0x10);
        
        width = *dimension_ptr;
        height = dimension_ptr[1];
        depth = dimension_ptr[2];
        scale = dimension_ptr[3];
        
        *(float *)(render_context + -0x59) = width;
        *(float *)(render_context + -0x55) = height;
        *(float *)(render_context + -0x51) = depth;
        *(float *)(render_context + -0x4d) = scale;
        
        if (width < temp_y) {
          *(float *)(render_context + -0x59) = temp_y;
        }
        if (*(float *)(render_context + -0x55) < width) {
          *(float *)(render_context + -0x55) = width;
        }
        if (temp_x <= *(float *)(render_context + -0x51)) {
          *(float *)(render_context + -0x51) = temp_x;
        }
        if (temp_y <= *(float *)(render_context + -0x4d)) {
          *(float *)(render_context + -0x4d) = temp_y;
        }
        
        render_text_element(*(uint64_t *)(engine_context + 8));
      }
    }
  }
  else {
    render_state = get_render_flags(render_context + -0x59);
    
    if ((render_state & 0xff000000) != 0) {
      if (text_end == 0) {
        text_end = -1;
        do {
          text_end = text_end + 1;
        } while (*(char *)(text_start + text_end) != '\0');
        text_end = text_end + text_start;
      }
      
      if (text_start != text_end) {
        transform_data = (uint64_t *)
                 (*(longlong *)(render_context + 0x68) + -0x10 +
                 (longlong)*(int *)(render_context + 0x60) * 0x10);
        
        matrix_data = transform_data[1];
        render_flags = *(uint64_t *)(*(longlong *)(render_context + 0x38) + 8);
        
        *(uint64_t *)(render_context + -0x59) = *transform_data;
        *(uint64_t *)(render_context + -0x51) = matrix_data;
        
        render_text_element(render_flags);
      }
    }
  }
  
  return;
}

/**
 * 处理精灵渲染
 */
void process_sprite_rendering(void)
{
  int32_t *sprite_data;
  float temp_x;
  float temp_y;
  float sprite_width;
  float *dimension_ptr;
  uint64_t render_flags;
  int32_t texture_id;
  int32_t shader_id;
  float width;
  float height;
  float depth;
  float scale;
  int32_t sprite_info;
  bool needs_clipping;
  byte clip_flag;
  uint render_state;
  float *font_width;
  longlong text_start;
  longlong text_end;
  float *font_height;
  float *texture_coords;
  longlong engine_context;
  float *position_data;
  float font_scale;
  
  // 设置精灵参数
  dimension_ptr = *(float **)(engine_context + 0x7f);
  font_width = dimension_ptr;
  
  if (dimension_ptr == (float *)0x0) {
    font_width = position_data;
  }
  
  font_height = dimension_ptr + 2;
  if (dimension_ptr == (float *)0x0) {
    font_height = texture_coords;
  }
  
  temp_x = *(float *)(engine_context + 0x4f);
  temp_y = *font_height;
  
  // 边界检查
  if ((temp_y <= *(float *)(engine_context + 0x6f) + temp_x) ||
     (font_height[1] <= *(float *)(engine_context + 0x73) + *(float *)(engine_context + 0x53))) {
    needs_clipping = true;
  }
  else {
    needs_clipping = false;
  }
  
  // 检查裁剪标志
  if (dimension_ptr != (float *)0x0) {
    if ((temp_x < *font_width) || (*(float *)(engine_context + 0x53) < font_width[1])) {
      clip_flag = 1;
    }
    else {
      clip_flag = 0;
    }
    needs_clipping = (bool)(needs_clipping | clip_flag);
  }
  
  // 应用缩放
  if ((font_scale < **(float **)(engine_context + 0x77)) &&
     (sprite_width = ((*texture_coords - temp_x) - *(float *)(engine_context + 0x6f)) * 
               **(float **)(engine_context + 0x77) + temp_x, temp_x < sprite_width)) {
    *(ulonglong *)(engine_context + 0x4f) =
         CONCAT44((int)((ulonglong)*(uint64_t *)(engine_context + 0x4f) >> 0x20), sprite_width);
  }
  
  // 获取渲染状态
  texture_id = *(int32_t *)(engine_context + 0x16cc);
  shader_id = *(int32_t *)(engine_context + 0x16d0);
  temp_x = *(float *)(engine_context + 0x16d4);
  
  *(int32_t *)(engine_context + -0x59) = *(int32_t *)(engine_context + 0x16c8);
  *(int32_t *)(engine_context + -0x55) = texture_id;
  *(int32_t *)(engine_context + -0x51) = shader_id;
  *(float *)(engine_context + -0x4d) = temp_x;
  *(float *)(engine_context + -0x4d) = temp_x * *(float *)(engine_context + 0x1628);
  
  // 执行渲染
  if (needs_clipping) {
    temp_x = font_width[1];
    sprite_width = font_height[1];
    sprite_width = *font_width;
    render_state = get_render_flags(engine_context + -0x59);
    
    if ((render_state & 0xff000000) != 0) {
      if (text_end == 0) {
        text_end = -1;
        do {
          text_end = text_end + 1;
        } while (*(char *)(text_start + text_end) != '\0');
        text_end = text_end + text_start;
      }
      
      if (text_start != text_end) {
        engine_context = *(longlong *)(engine_context + 0x38);
        dimension_ptr = (float *)(*(longlong *)(engine_context + 0x68) + -0x10 +
                              (longlong)*(int *)(engine_context + 0x60) * 0x10);
        
        width = *dimension_ptr;
        height = dimension_ptr[1];
        depth = dimension_ptr[2];
        scale = dimension_ptr[3];
        
        *(float *)(engine_context + -0x59) = width;
        *(float *)(engine_context + -0x55) = height;
        *(float *)(engine_context + -0x51) = depth;
        *(float *)(engine_context + -0x4d) = scale;
        
        if (width < sprite_width) {
          *(float *)(engine_context + -0x59) = sprite_width;
        }
        if (*(float *)(engine_context + -0x55) < temp_x) {
          *(float *)(engine_context + -0x55) = temp_x;
        }
        if (temp_y <= *(float *)(engine_context + -0x51)) {
          *(float *)(engine_context + -0x51) = temp_y;
        }
        if (sprite_width <= *(float *)(engine_context + -0x4d)) {
          *(float *)(engine_context + -0x4d) = sprite_width;
        }
        
        render_text_element(*(uint64_t *)(engine_context + 8));
      }
    }
  }
  else {
    render_state = get_render_flags(engine_context + -0x59);
    
    if ((render_state & 0xff000000) != 0) {
      if (text_end == 0) {
        text_end = -1;
        do {
          text_end = text_end + 1;
        } while (*(char *)(text_start + text_end) != '\0');
        text_end = text_end + text_start;
      }
      
      if (text_start != text_end) {
        sprite_data = (int32_t *)
                 (*(longlong *)(engine_context + 0x68) + -0x10 +
                 (longlong)*(int *)(engine_context + 0x60) * 0x10);
        
        texture_id = sprite_data[1];
        shader_id = sprite_data[2];
        sprite_info = sprite_data[3];
        render_flags = *(uint64_t *)(*(longlong *)(engine_context + 0x38) + 8);
        
        *(int32_t *)(engine_context + -0x59) = *sprite_data;
        *(int32_t *)(engine_context + -0x55) = texture_id;
        *(int32_t *)(engine_context + -0x51) = shader_id;
        *(int32_t *)(engine_context + -0x4d) = sprite_info;
        
        render_text_element(render_flags);
      }
    }
  }
  
  return;
}

/**
 * 处理纹理渲染
 * 
 * @param render_context 渲染上下文
 * @param texture_data 纹理数据指针
 */
void process_texture_rendering(uint64_t render_context, float *texture_data)
{
  float *dimension_ptr;
  int32_t *texture_info;
  float temp_x;
  float temp_y;
  float sprite_width;
  uint64_t render_flags;
  int32_t texture_id;
  int32_t shader_id;
  float width;
  float height;
  float depth;
  float scale;
  int32_t sprite_info;
  bool needs_clipping;
  byte clip_flag;
  uint render_state;
  longlong frame_buffer;
  longlong text_start;
  longlong text_end;
  longlong engine_context;
  longlong render_target;
  float font_scale;
  float texture_width;
  float texture_height;
  
  temp_x = *(float *)(render_target + 0x4f);
  temp_y = *texture_data;
  
  // 边界检查
  if ((temp_y <= texture_width + temp_x) || 
      (texture_data[1] <= texture_height + *(float *)(render_target + 0x53))) {
    needs_clipping = true;
  }
  else {
    needs_clipping = false;
  }
  
  // 检查裁剪标志
  if (frame_buffer != 0) {
    if ((temp_x < *texture_data) || (*(float *)(render_target + 0x53) < texture_data[1])) {
      clip_flag = 1;
    }
    else {
      clip_flag = 0;
    }
    needs_clipping = (bool)(needs_clipping | clip_flag);
  }
  
  // 应用缩放
  if ((font_scale < **(float **)(render_target + 0x77)) &&
     (sprite_width = ((*texture_data - temp_x) - texture_width) * 
               **(float **)(render_target + 0x77) + temp_x, temp_x < sprite_width)) {
    *(ulonglong *)(render_target + 0x4f) =
         CONCAT44((int)((ulonglong)*(uint64_t *)(render_target + 0x4f) >> 0x20), sprite_width);
  }
  
  // 获取渲染状态
  texture_id = *(int32_t *)(engine_context + 0x16cc);
  shader_id = *(int32_t *)(engine_context + 0x16d0);
  temp_x = *(float *)(engine_context + 0x16d4);
  
  *(int32_t *)(render_target + -0x59) = *(int32_t *)(engine_context + 0x16c8);
  *(int32_t *)(render_target + -0x55) = texture_id;
  *(int32_t *)(render_target + -0x51) = shader_id;
  *(float *)(render_target + -0x4d) = temp_x;
  *(float *)(render_target + -0x4d) = temp_x * *(float *)(engine_context + 0x1628);
  
  // 执行渲染
  if (needs_clipping) {
    temp_x = texture_data[1];
    sprite_width = texture_data[1];
    sprite_width = *texture_data;
    render_state = get_render_flags(render_target + -0x59);
    
    if ((render_state & 0xff000000) != 0) {
      if (text_end == 0) {
        text_end = -1;
        do {
          text_end = text_end + 1;
        } while (*(char *)(text_start + text_end) != '\0');
        text_end = text_end + text_start;
      }
      
      if (text_start != text_end) {
        engine_context = *(longlong *)(render_target + 0x38);
        dimension_ptr = (float *)(*(longlong *)(render_target + 0x68) + -0x10 +
                              (longlong)*(int *)(render_target + 0x60) * 0x10);
        
        width = *dimension_ptr;
        height = dimension_ptr[1];
        depth = dimension_ptr[2];
        scale = dimension_ptr[3];
        
        *(float *)(render_target + -0x59) = width;
        *(float *)(render_target + -0x55) = height;
        *(float *)(render_target + -0x51) = depth;
        *(float *)(render_target + -0x4d) = scale;
        
        if (width < sprite_width) {
          *(float *)(render_target + -0x59) = sprite_width;
        }
        if (*(float *)(render_target + -0x55) < temp_x) {
          *(float *)(render_target + -0x55) = temp_x;
        }
        if (temp_y <= *(float *)(render_target + -0x51)) {
          *(float *)(render_target + -0x51) = temp_y;
        }
        if (sprite_width <= *(float *)(render_target + -0x4d)) {
          *(float *)(render_target + -0x4d) = sprite_width;
        }
        
        render_text_element(*(uint64_t *)(engine_context + 8));
      }
    }
  }
  else {
    render_state = get_render_flags(render_target + -0x59);
    
    if ((render_state & 0xff000000) != 0) {
      if (text_end == 0) {
        text_end = -1;
        do {
          text_end = text_end + 1;
        } while (*(char *)(text_start + text_end) != '\0');
        text_end = text_end + text_start;
      }
      
      if (text_start != text_end) {
        texture_info = (int32_t *)
                 (*(longlong *)(render_target + 0x68) + -0x10 +
                 (longlong)*(int *)(render_target + 0x60) * 0x10);
        
        texture_id = texture_info[1];
        shader_id = texture_info[2];
        sprite_info = texture_info[3];
        render_flags = *(uint64_t *)(*(longlong *)(render_target + 0x38) + 8);
        
        *(int32_t *)(render_target + -0x59) = *texture_info;
        *(int32_t *)(render_target + -0x55) = texture_id;
        *(int32_t *)(render_target + -0x51) = shader_id;
        *(int32_t *)(render_target + -0x4d) = sprite_info;
        
        render_text_element(render_flags);
      }
    }
  }
  
  return;
}

/**
 * 处理UI元素渲染
 * 
 * @param render_context 渲染上下文
 * @param ui_data UI数据指针
 * @param element_id 元素ID
 */
void process_ui_element_rendering(uint64_t render_context, float *ui_data, longlong element_id)
{
  float *dimension_ptr;
  float temp_x;
  float temp_y;
  float element_width;
  float element_height;
  float ui_width;
  float ui_height;
  float ui_depth;
  float ui_scale;
  uint render_flags;
  longlong text_start;
  longlong text_end;
  longlong engine_context;
  longlong render_target;
  float element_scale;
  
  temp_x = ui_data[1];
  temp_y = *(float *)(element_id + 4);
  element_width = *ui_data;
  render_flags = get_render_flags();
  
  if ((render_flags & 0xff000000) != 0) {
    if (text_end == 0) {
      text_end = -1;
      do {
        text_end = text_end + 1;
      } while (*(char *)(text_start + text_end) != '\0');
      text_end = text_end + text_start;
    }
    
    if (text_start != text_end) {
      engine_context = *(longlong *)(render_target + 0x38);
      dimension_ptr = (float *)(*(longlong *)(render_target + 0x68) + -0x10 +
                            (longlong)*(int *)(render_target + 0x60) * 0x10);
      
      ui_width = *dimension_ptr;
      ui_height = dimension_ptr[1];
      ui_depth = dimension_ptr[2];
      ui_scale = dimension_ptr[3];
      
      *(float *)(render_target + -0x59) = ui_width;
      *(float *)(render_target + -0x55) = ui_height;
      *(float *)(render_target + -0x51) = ui_depth;
      *(float *)(render_target + -0x4d) = ui_scale;
      
      if (ui_width < element_width) {
        *(float *)(render_target + -0x59) = element_width;
      }
      if (*(float *)(render_target + -0x55) < temp_x) {
        *(float *)(render_target + -0x55) = temp_x;
      }
      if (element_scale <= *(float *)(render_target + -0x51)) {
        *(float *)(render_target + -0x51) = element_scale;
      }
      if (temp_y <= *(float *)(render_target + -0x4d)) {
        *(float *)(render_target + -0x4d) = temp_y;
      }
      
      render_text_element(*(uint64_t *)(engine_context + 8));
    }
  }
  
  return;
}