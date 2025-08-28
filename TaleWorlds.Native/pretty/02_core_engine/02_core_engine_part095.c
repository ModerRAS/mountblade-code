#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part095.c - 核心引擎模块第095部分
// 本文件包含高级文本渲染和图形处理功能

// 函数：渲染文本标签
// 参数：render_context - 渲染上下文，text_label - 文本标签，position_data - 位置数据，size_data - 尺寸数据，
//       count - 数量，index - 索引，font_name - 字体名称，x_coord - X坐标，y_coord - Y坐标，additional_data - 附加数据
// 功能：渲染带有各种效果的文本标签，支持颜色渐变、阴影等高级渲染特性
void render_text_label(uint64_t render_context, char *text_label, uint64_t position_data, uint64_t size_data,
                     int count, int index, char *font_name, float x_coord, float y_coord, uint64_t additional_data)
{
  float *font_metrics;
  int64_t global_base;
  uint64_t temp_data1;
  bool use_special_rendering;
  uint64_t temp_data2;
  char comment_end;
  int32_t temp_value;
  char *comment_start;
  int current_index;
  int total_chars;
  uint64_t temp_data3;
  int64_t render_state;
  uint char_count;
  uint64_t text_length;
  int64_t font_data;
  float base_font_size;
  float text_width;
  float calculated_width;
  float line_height;
  float font_scaling;
  float text_height;
  float shadow_offset;
  float border_width;
  float gradient_start;
  float gradient_end;
  uint64_t dimensions;
  uint64_t size_info;
  uint64_t stack_data;
  int32_t temp_register;
  double temp_double;
  float render_width;
  float render_height;
  float baseline_offset;
  float char_spacing;
  float line_spacing;
  int64_t stack_offset;
  float render_x;
  float render_y;
  uint64_t temp_buffer;
  int64_t buffer_offset;
  uint64_t stack_buffer;
  float shadow_x;
  float shadow_y;
  int8_t color_data [16];
  
  global_base = GLOBAL_ENGINE_BASE;
  stack_offset = GLOBAL_ENGINE_BASE;
  
  // 启用特殊渲染模式
  *(int8_t *)(*(int64_t *)(GLOBAL_ENGINE_BASE + 0x1af8) + 0xb1) = 1;
  buffer_offset = *(int64_t *)(global_base + 0x1af8);
  
  if (*(char *)(buffer_offset + 0xb4) == '\0') {
    // 查找文本中的注释结束位置
    comment_start = text_label;
    if (text_label != (char *)0xffffffffffffffff) {
      while (*comment_start != '\0') {
        if (((*comment_start == '#') && (comment_start[1] == '#')) ||
           (comment_start = comment_start + 1, comment_start == (char *)0xffffffffffffffff)) break;
      }
    }
    
    font_metrics = *(float **)(global_base + 0x19f0);
    current_index = 0;
    line_height = *(float *)(global_base + 0x19f8);
    dimensions = position_data;
    size_info = size_data;
    
    if (text_label == comment_start) {
      text_width = 0.0;
    }
    else {
      // 计算文本宽度
      stack_data = CONCAT44((int)((uint64_t)stack_data >> 0x20), 0xbf800000);
      calculate_text_dimensions(font_metrics, &dimensions, line_height, 0x7f7fffff, stack_data, text_label, comment_start, 0);
      text_width = (float)dimensions;
      
      if (0.0 < (float)dimensions) {
        text_width = (float)dimensions - line_height / *font_metrics;
      }
      
      text_width = (float)(int)(text_width + 0.95);
      line_height = dimensions._4_4_;
    }
    
    font_data = buffer_offset;
    render_height = text_width;
    
    // 设置默认尺寸
    if ((float)additional_data == 0.0) {
      additional_data._0_4_ = (float)get_current_time();
    }
    
    if (additional_data._4_4_ == 0.0) {
      additional_data._4_4_ = *(float *)(global_base + 0x1660) + *(float *)(global_base + 0x1660) + line_height;
    }
    
    font_metrics = (float *)(font_data + 0x100);
    line_height = *font_metrics;
    gradient_end = *(float *)(font_data + 0x104);
    gradient_start = *font_metrics;
    temp_data1 = *(uint64_t *)font_metrics;
    temp_data3 = *(uint64_t *)font_metrics;
    
    shadow_x = line_height + (float)additional_data;
    additional_data._4_4_ = gradient_end + additional_data._4_4_;
    color_data = ZEXT416((uint)line_height);
    
    baseline_offset = line_height + *(float *)(global_base + 0x165c);
    border_width = shadow_x - *(float *)(global_base + 0x165c);
    char_spacing = gradient_end + *(float *)(global_base + 0x1660);
    line_spacing = additional_data._4_4_ - *(float *)(global_base + 0x1660);
    
    dimensions = CONCAT44(dimensions._4_4_, border_width);
    temp_buffer = CONCAT44(line_spacing, border_width);
    
    // 调整文本宽度
    if (text_width <= 0.0) {
      text_width = 0.0;
    }
    else {
      text_width = text_width + *(float *)(global_base + 0x1674);
    }
    
    text_width = shadow_x + text_width;
    render_y = additional_data._4_4_ - gradient_end;
    render_height = text_width - line_height;
    baseline_offset = gradient_end;
    char_spacing = baseline_offset;
    line_spacing = shadow_x;
    shadow_y = baseline_offset;
    
    // 计算布局参数
    calculate_layout_parameters(&render_height, *(int32_t *)(global_base + 0x1660));
    render_state = *(int64_t *)(global_base + 0x1af8);
    
    // 保存渲染状态
    *(uint64_t *)(render_state + 0x144) = 0;
    *(float *)(render_state + 0x14c) = gradient_start;
    *(int32_t *)(render_state + 0x150) = temp_value;
    *(float *)(render_state + 0x154) = text_width;
    *(float *)(render_state + 0x158) = additional_data._4_4_;
    
    font_data = *(int64_t *)(global_base + 0x1af8);
    
    // 检查是否需要特殊渲染效果
    if ((((*(float *)(font_data + 0x22c) <= additional_data._4_4_ &&
           additional_data._4_4_ != *(float *)(font_data + 0x22c)) && (gradient_end < *(float *)(font_data + 0x234))) &&
        ((*(float *)(font_data + 0x228) <= text_width && text_width != *(float *)(font_data + 0x228) &&
         (line_height < *(float *)(font_data + 0x230))))) || (*(char *)(global_base + 0x2e38) != '\0')) {
      
      // 应用特殊渲染效果
      render_height = gradient_start;
      render_y = (float)temp_value;
      render_height = text_width;
      render_y = additional_data._4_4_;
      
      comment_end = apply_special_effects(&render_height, &render_height, 1);
      if (comment_end != '\0') {
        *(uint *)(render_state + 0x148) = *(uint *)(render_state + 0x148) | 1;
      }
      
      // 检查是否启用高级渲染
      if (((*(int *)(global_base + 0x1b18) == 0) || (*(char *)(global_base + 0x1b1c) != '\0')) &&
         (((render_state = *(int64_t *)(global_base + 0x1af8), *(int64_t *)(global_base + 0x1b00) == render_state &&
           ((((*(int *)(global_base + 0x1b2c) == 0 || (*(char *)(global_base + 0x1b3d) != '\0')) &&
             (comment_end = apply_special_effects(&shadow_y, &temp_buffer, comment_end != '\0')) &&
            ((*(char *)(global_base + 0x1d07) == '\0' &&
             (comment_end = check_render_capability(render_state, 0), comment_end != '\0')))))) &&
          ((*(byte *)(render_state + 0x1a8) & 4) == 0)))) {
        *(int32_t *)(global_base + 0x1b18) = 0;
        use_special_rendering = true;
        *(int8_t *)(global_base + 0x1b1c) = 0;
      }
      else {
        use_special_rendering = false;
      }
      
      temp_data2 = size_info;
      temp_register = (int32_t)((uint64_t)stack_data >> 0x20);
      font_data = global_base;
      
      // 计算渲染边界
      if ((x_coord == 3.4028235e+38) || (y_coord == 3.4028235e+38)) {
        text_width = -3.4028235e+38;
        gradient_start = 3.4028235e+38;
        
        if (0 < count) {
          do {
            calculated_width = (float)get_character_width(temp_data2, current_index);
            temp_register = (int32_t)((uint64_t)stack_data >> 0x20);
            
            if (calculated_width <= gradient_start) {
              gradient_start = calculated_width;
            }
            
            if (text_width < calculated_width) {
              text_width = calculated_width;
            }
            
            current_index = current_index + 1;
            global_base = GLOBAL_ENGINE_BASE;
            font_data = stack_offset;
          } while (current_index < count);
        }
        
        if (x_coord == 3.4028235e+38) {
          x_coord = gradient_start;
        }
        
        if (y_coord == 3.4028235e+38) {
          y_coord = text_width;
        }
      }
      
      // 设置渲染参数
      render_height = *(float *)(global_base + 0x1738);
      render_y = *(float *)(global_base + 0x173c);
      baseline_offset = *(float *)(global_base + 0x1740);
      char_spacing = *(float *)(global_base + 0x1744) * *(float *)(global_base + 0x1628);
      temp_value = get_render_color(&render_height);
      
      temp_double = (double)CONCAT44(temp_register, *(int32_t *)(font_data + 0x1664));
      stack_buffer = temp_data1;
      
      // 执行渲染操作
      execute_render_operation(temp_data3, CONCAT44(line_spacing, shadow_x), temp_value, 1, temp_double);
      global_base = GLOBAL_ENGINE_BASE;
      
      if (0 < count) {
        current_index = -1;
        total_chars = count;
        
        if ((int)(float)additional_data < count) {
          total_chars = (int)(float)additional_data;
        }
        
        char_count = total_chars - 1;
        text_length = (uint64_t)char_count;
        temp_data2 = size_info;
        
        if (use_special_rendering) {
          // 计算插值参数
          line_height = (*(float *)(font_data + 0x118) - baseline_offset) / (border_width - baseline_offset);
          
          if (0.0 <= line_height) {
            if (0.9999 <= line_height) {
              line_height = 0.9999;
            }
          }
          else {
            line_height = 0.0;
          }
          
          total_chars = (int)((float)(count + -1) * line_height);
          current_index = total_chars;
          
          line_height = (float)get_character_width(size_info, (int64_t)(total_chars + index) % (int64_t)count & 0xffffffff);
          temp_data2 = size_info;
          text_width = (float)get_character_width(size_info, (int64_t)(total_chars + index + 1) % (int64_t)count & 0xffffffff);
          temp_double = (double)text_width;
          
          // 执行插值计算
          perform_interpolation_calculation(&INTERPOLATION_DATA, total_chars, (double)line_height, total_chars + 1, temp_double);
        }
        
        // 计算缩放因子
        if (x_coord == y_coord) {
          line_height = 0.0;
        }
        else {
          line_height = 1.0 / (y_coord - x_coord);
        }
        
        gradient_end = 0.0;
        text_width = (float)get_character_width(temp_data2, (int64_t)index % (int64_t)count & 0xffffffff);
        global_base = GLOBAL_ENGINE_BASE;
        text_width = (text_width - x_coord) * line_height;
        
        if (0.0 <= text_width) {
          if (1.0 <= text_width) {
            text_width = 1.0;
          }
        }
        else {
          text_width = 0.0;
        }
        
        char_spacing = 0.0;
        text_width = 1.0 - text_width;
        
        // 获取渐变颜色
        render_height = *(float *)(GLOBAL_ENGINE_BASE + 0x1948);
        render_y = *(float *)(GLOBAL_ENGINE_BASE + 0x194c);
        baseline_offset = *(float *)(GLOBAL_ENGINE_BASE + 0x1950);
        gradient_start = *(float *)(GLOBAL_ENGINE_BASE + 0x1628);
        char_spacing = *(float *)(GLOBAL_ENGINE_BASE + 0x1954) * gradient_start;
        
        baseline_offset = (float)get_render_color(&render_height);
        render_height = *(float *)(global_base + 0x1958);
        render_y = *(float *)(global_base + 0x195c);
        baseline_offset = *(float *)(global_base + 0x1960);
        char_spacing = *(float *)(global_base + 0x1964) * gradient_start;
        border_width = (float)get_render_color(&render_height);
        
        gradient_start = baseline_offset;
        total_chars = current_index;
        
        if (0 < (int)char_count) {
          render_y = render_y - char_spacing;
          dimensions = CONCAT44(dimensions._4_4_, (float)dimensions - baseline_offset);
          
          do {
            temp_register = (int32_t)((uint64_t)temp_double >> 0x20);
            calculated_width = (float)(count + -1) * gradient_end;
            gradient_end = gradient_end + 1.0 / (float)(int)char_count;
            total_chars = (int)(calculated_width + 0.5);
            
            calculated_width = (float)get_character_width(size_info, (int64_t)(total_chars + index + 1) % (int64_t)count & 0xffffffff);
            calculated_width = (calculated_width - x_coord) * line_height;
            
            if (0.0 <= calculated_width) {
              if (1.0 <= calculated_width) {
                calculated_width = 1.0;
              }
            }
            else {
              calculated_width = 0.0;
            }
            
            line_spacing = render_y * text_width;
            temp_double = (double)CONCAT44(temp_register, 0x3f800000);
            text_width = 1.0 - calculated_width;
            line_spacing = line_spacing + char_spacing;
            
            calculated_width = gradient_start;
            if (total_chars == current_index) {
              calculated_width = border_width;
            }
            
            char_spacing = (float)dimensions * char_spacing + baseline_offset;
            render_y = render_y * text_width + char_spacing;
            dimensions = (float)dimensions * gradient_end + baseline_offset;
            
            // 执行最终渲染
            perform_final_render(*(uint64_t *)(buffer_offset + 0x2e8), &char_spacing, &dimensions, calculated_width, temp_double);
            
            text_length = text_length - 1;
            global_base = GLOBAL_ENGINE_BASE;
            font_data = stack_offset;
            char_spacing = gradient_end;
          } while (text_length != 0);
        }
        
        gradient_end = baseline_offset;
        line_height = (float)color_data._0_4_;
      }
      
      // 处理附加文本渲染
      if (font_name != (char *)0x0) {
        stack_offset = 0x3f000000;
        dimensions = CONCAT44(gradient_end + *(float *)(font_data + 0x1660), line_height);
        comment_start = font_name;
        
        if (font_name != (char *)0xffffffffffffffff) {
          while (*comment_start != '\0') {
            if (((*comment_start == '#') && (comment_start[1] == '#')) ||
               (comment_start = comment_start + 1, comment_start == (char *)0xffffffffffffffff)) break;
          }
        }
        
        if (((int)comment_start != (int)font_name) &&
           (render_text_with_effects(*(uint64_t *)(*(int64_t *)(global_base + 0x1af8) + 0x2e8), &dimensions,
                          &shadow_x, font_name, comment_start, 0, &stack_offset, 0),
           *(char *)(global_base + 0x2e38) != '\0')) {
          apply_text_effects(&dimensions, font_name, comment_start);
        }
      }
      
      // 应用阴影效果
      if (0.0 < render_height) {
        apply_shadow_effect(CONCAT44(char_spacing, shadow_x + *(float *)(font_data + 0x1674)), text_label, 0, 1);
      }
    }
  }
  return;
}

// 函数：高级文本渲染处理
// 参数：render_context - 渲染上下文，text_content - 文本内容，render_data - 渲染数据，render_params - 渲染参数
// 功能：处理复杂的文本渲染，包括多层渲染、效果合成等高级功能
void process_advanced_text_rendering(uint64_t render_context, char *text_content, uint64_t render_data, int64_t render_params)
{
  int char_index;
  float *font_table;
  int64_t engine_state;
  uint64_t temp_data1;
  uint64_t temp_data2;
  bool enable_advanced_effects;
  char effect_status;
  int32_t temp_value;
  char *text_pointer;
  int current_pos;
  int total_length;
  uint64_t render_buffer;
  char *comment_end;
  int64_t frame_buffer;
  int texture_index;
  int64_t buffer_base;
  uint vertex_count;
  int64_t render_target;
  uint64_t index_count;
  int64_t context_data;
  uint64_t texture_coords;
  float font_size;
  float text_metrics;
  float render_width;
  float render_height;
  float depth_value;
  float blend_factor;
  float alpha_value;
  float texture_scale;
  int32_t reg_xmm6;
  float color_r;
  int32_t reg_xmm7;
  int32_t reg_xmm8;
  int32_t reg_xmm10;
  int32_t reg_xmm11;
  int32_t reg_xmm13;
  float color_g;
  int32_t reg_xmm13_db;
  int32_t reg_xmm13_dc;
  int32_t reg_xmm13_dd;
  float color_b;
  uint64_t reg_xmm14;
  int32_t reg_xmm15;
  int32_t reg_xmm15_db;
  int32_t reg_xmm15_dc;
  int32_t reg_xmm15_dd;
  uint64_t stack_data;
  int32_t temp_register;
  double temp_double;
  float stack_height;
  float stack_width;
  float stack_depth;
  int stack_index;
  float stack_spacing;
  float stack_scale;
  int64_t stack_offset;
  float stack_texture;
  uint64_t stack_buffer;
  int32_t stack_e0;
  int32_t stack_e8;
  int32_t stack_110;
  int32_t stack_118;
  
  // 保存寄存器状态
  *(uint64_t *)(context_data + -0x28) = render_buffer;
  *(uint64_t *)(context_data + -0x38) = texture_coords;
  *(int32_t *)(context_data + -0x58) = reg_xmm6;
  *(int32_t *)(context_data + -0x54) = reg_xmm6_db;
  *(int32_t *)(context_data + -0x50) = reg_xmm6_dc;
  *(int32_t *)(context_data + -0x4c) = reg_xmm6_dd;
  *(int32_t *)(context_data + -0x68) = reg_xmm7;
  *(int32_t *)(context_data + -100) = reg_xmm7_db;
  *(int32_t *)(context_data + -0x60) = reg_xmm7_dc;
  *(int32_t *)(context_data + -0x5c) = reg_xmm7_dd;
  *(int32_t *)(context_data + -0x78) = reg_xmm8;
  *(int32_t *)(context_data + -0x74) = reg_xmm8_db;
  *(int32_t *)(context_data + -0x70) = reg_xmm8_dc;
  *(int32_t *)(context_data + -0x6c) = reg_xmm8_dd;
  *(int32_t *)(context_data + -0x98) = reg_xmm10;
  *(int32_t *)(context_data + -0x94) = reg_xmm10_db;
  *(int32_t *)(context_data + -0x90) = reg_xmm10_dc;
  *(int32_t *)(context_data + -0x8c) = reg_xmm10_dd;
  *(int32_t *)(context_data + -0xa8) = reg_xmm11;
  *(int32_t *)(context_data + -0xa4) = reg_xmm11_db;
  *(int32_t *)(context_data + -0xa0) = reg_xmm11_dc;
  *(int32_t *)(context_data + -0x9c) = reg_xmm11_dd;
  *(int32_t *)(context_data + -200) = reg_xmm13;
  *(int32_t *)(context_data + -0xc4) = reg_xmm13_db;
  *(int32_t *)(context_data + -0xc0) = reg_xmm13_dc;
  *(int32_t *)(context_data + -0xbc) = reg_xmm13_dd;
  *(uint64_t *)(context_data + -0xd8) = reg_xmm14;
  *(uint64_t *)(context_data + -0xd0) = reg_xmm14;
  *(int32_t *)(context_data + -0xe8) = reg_xmm15;
  *(int32_t *)(context_data + -0xe4) = reg_xmm15_db;
  *(int32_t *)(context_data + -0xe0) = reg_xmm15_dc;
  *(int32_t *)(context_data + -0xdc) = reg_xmm15_dd;
  
  // 查找文本注释结束位置
  text_pointer = text_content;
  if (text_content != (char *)0xffffffffffffffff) {
    while (*text_pointer != '\0') {
      if (((*text_pointer == '#') && (text_pointer[1] == '#')) ||
         (text_pointer = text_pointer + 1, text_pointer == (char *)0xffffffffffffffff)) break;
    }
  }
  
  font_table = *(float **)(engine_state + 0x19f0);
  current_pos = 0;
  text_metrics = *(float *)(engine_state + 0x19f8);
  
  if (text_content == text_pointer) {
    render_width = 0.0;
  }
  else {
    // 计算文本尺寸
    stack_data = CONCAT44((int)((uint64_t)stack_data >> 0x20), 0xbf800000);
    calculate_text_dimensions(font_table, frame_buffer + 0xb0, text_metrics, 0x7f7fffff, stack_data);
    render_width = *(float *)(frame_buffer + 0xb0);
    
    if (0.0 < render_width) {
      render_width = render_width - text_metrics / *font_table;
    }
    
    text_metrics = *(float *)(frame_buffer + 0xb4);
    render_params = *(int64_t *)(frame_buffer + -0x80);
    render_width = (float)(int)(render_width + 0.95);
  }
  
  depth_value = *(float *)(frame_buffer + 0xe8);
  stack_height = render_width;
  
  // 设置渲染参数
  if (depth_value == 0.0) {
    depth_value = (float)get_current_time();
  }
  
  blend_factor = *(float *)(frame_buffer + 0xec);
  if (blend_factor == 0.0) {
    blend_factor = *(float *)(engine_state + 0x1660) + *(float *)(engine_state + 0x1660) + text_metrics;
  }
  
  font_table = (float *)(render_params + 0x100);
  text_metrics = *font_table;
  color_g = *(float *)(render_params + 0x104);
  color_r = *font_table;
  temp_value = *(int32_t *)(render_params + 0x104);
  temp_data2 = *(uint64_t *)font_table;
  render_buffer = *(uint64_t *)font_table;
  
  stack_width = *(float *)(engine_state + 0x1660);
  render_height = text_metrics + depth_value;
  blend_factor = color_g + blend_factor;
  
  *(int8_t (*) [16])(frame_buffer + -0x60) = ZEXT416((uint)text_metrics);
  
  color_b = *(float *)(engine_state + 0x165c);
  alpha_value = text_metrics + color_b;
  render_height = render_height - color_b;
  stack_width = color_g + stack_width;
  *(float *)(frame_buffer + -0x70) = render_height;
  stack_width = blend_factor - stack_width;
  *(float *)(frame_buffer + -0x6c) = blend_factor;
  stack_data = CONCAT44(stack_width, render_height);
  
  // 调整渲染尺寸
  if (render_width <= 0.0) {
    render_width = 0.0;
  }
  else {
    render_width = render_width + *(float *)(engine_state + 0x1674);
  }
  
  render_height = render_height + render_width;
  stack_width = blend_factor - color_g;
  depth_value = render_height - text_metrics;
  
  // 设置渲染状态
  blend_factor = color_g;
  stack_width = color_b;
  stack_depth = alpha_value;
  stack_texture = stack_width;
  
  // 计算布局
  calculate_layout_parameters(&depth_value, *(int32_t *)(engine_state + 0x1660));
  
  buffer_base = *(int64_t *)(engine_state + 0x1af8);
  *(uint64_t *)(buffer_base + 0x144) = 0;
  *(float *)(buffer_base + 0x14c) = color_r;
  *(int32_t *)(buffer_base + 0x150) = temp_value;
  *(float *)(buffer_base + 0x154) = render_height;
  *(float *)(buffer_base + 0x158) = blend_factor;
  
  engine_state = *(int64_t *)(engine_state + 0x1af8);
  
  // 检查是否启用高级效果
  if ((((*(float *)(engine_state + 0x22c) <= blend_factor && blend_factor != *(float *)(engine_state + 0x22c)) &&
       (color_g < *(float *)(engine_state + 0x234))) &&
      ((*(float *)(engine_state + 0x228) <= render_height && render_height != *(float *)(engine_state + 0x228) &&
       (text_metrics < *(float *)(engine_state + 0x230))))) || (*(char *)(engine_state + 0x2e38) != '\0')) {
    
    // 应用高级渲染效果
    depth_value = color_r;
    stack_width = (float)temp_value;
    depth_value = render_height;
    stack_width = blend_factor;
    
    effect_status = apply_special_effects(&depth_value, &depth_value, 1);
    if (effect_status != '\0') {
      *(uint *)(buffer_base + 0x148) = *(uint *)(buffer_base + 0x148) | 1;
    }
    
    // 检查高级渲染条件
    if (((*(int *)(engine_state + 0x1b18) == 0) || (*(char *)(engine_state + 0x1b1c) != '\0')) &&
       (((buffer_base = *(int64_t *)(engine_state + 0x1af8), *(int64_t *)(engine_state + 0x1b00) == buffer_base &&
         ((((*(int *)(engine_state + 0x1b2c) == 0 || (*(char *)(engine_state + 0x1b3d) != '\0')) &&
           (effect_status = apply_special_effects(&stack_depth, &stack_data, effect_status != '\0')) &&
          ((*(char *)(engine_state + 0x1d07) == '\0' &&
           (effect_status = check_render_capability(buffer_base, 0), effect_status != '\0')))))) &&
        ((*(byte *)(buffer_base + 0x1a8) & 4) == 0)))) {
      *(int32_t *)(engine_state + 0x1b18) = 0;
      enable_advanced_effects = true;
      *(int8_t *)(engine_state + 0x1b1c) = 0;
    }
    else {
      enable_advanced_effects = false;
    }
    
    temp_register = (int32_t)((uint64_t)stack_data >> 0x20);
    color_b = *(float *)(frame_buffer + 0xd8);
    char_index = *(int *)(frame_buffer + 0xc0);
    color_g = *(float *)(frame_buffer + 0xe0);
    
    // 计算渲染边界
    if ((color_b == 3.4028235e+38) || (color_g == 3.4028235e+38)) {
      color_r = -3.4028235e+38;
      alpha_value = 3.4028235e+38;
      
      if (0 < char_index) {
        temp_data1 = *(uint64_t *)(frame_buffer + 0xb8);
        do {
          render_height = (float)get_character_width(temp_data1, current_pos);
          temp_register = (int32_t)((uint64_t)stack_data >> 0x20);
          
          if (render_height <= alpha_value) {
            alpha_value = render_height;
          }
          
          if (color_r < render_height) {
            color_r = render_height;
          }
          
          current_pos = current_pos + 1;
          engine_state = GLOBAL_ENGINE_BASE;
          buffer_base = stack_offset;
        } while (current_pos < char_index);
      }
      
      if (color_b == 3.4028235e+38) {
        color_b = alpha_value;
      }
      
      alpha_value = *(float *)(frame_buffer + 0xa0);
      if (color_g == 3.4028235e+38) {
        color_g = color_r;
      }
    }
    
    // 设置渲染参数
    depth_value = *(float *)(engine_state + 0x1738);
    stack_width = *(float *)(engine_state + 0x173c);
    color_b = *(float *)(engine_state + 0x1740);
    stack_depth = *(float *)(engine_state + 0x1744) * *(float *)(engine_state + 0x1628);
    temp_value = get_render_color(&depth_value);
    
    temp_double = (double)CONCAT44(temp_register, *(int32_t *)(buffer_base + 0x1664));
    *(uint64_t *)(frame_buffer + -0x78) = temp_data2;
    execute_render_operation(render_buffer, *(uint64_t *)(frame_buffer + -0x70), temp_value, 1, temp_double);
    
    buffer_base = GLOBAL_ENGINE_BASE;
    
    if (0 < char_index) {
      current_pos = *(int *)(frame_buffer + 200);
      stack_index = -1;
      texture_index = char_index;
      
      if ((int)depth_value < char_index) {
        texture_index = (int)depth_value;
      }
      
      vertex_count = texture_index - 1;
      index_count = (uint64_t)vertex_count;
      
      if (enable_advanced_effects) {
        // 计算插值参数
        text_metrics = (*(float *)(buffer_base + 0x118) - alpha_value) / (render_height - alpha_value);
        
        if (0.0 <= text_metrics) {
          if (0.9999 <= text_metrics) {
            text_metrics = 0.9999;
          }
        }
        else {
          text_metrics = 0.0;
        }
        
        texture_index = (int)((float)(char_index + -1) * text_metrics);
        stack_index = texture_index;
        
        text_metrics = (float)get_character_width(*(uint64_t *)(frame_buffer + 0xb8),
                                        (int64_t)(texture_index + current_pos) % (int64_t)char_index & 0xffffffff);
        render_buffer = *(uint64_t *)(frame_buffer + 0xb8);
        color_g = (float)get_character_width(render_buffer, (int64_t)(texture_index + current_pos + 1) % (int64_t)char_index & 0xffffffff);
        temp_double = (double)color_g;
        
        // 执行插值
        perform_interpolation_calculation(&INTERPOLATION_DATA, texture_index, (double)text_metrics, texture_index + 1, temp_double);
      }
      else {
        render_buffer = *(uint64_t *)(frame_buffer + 0xb8);
      }
      
      // 计算缩放因子
      if (color_b == color_g) {
        text_metrics = 0.0;
      }
      else {
        text_metrics = 1.0 / (color_g - color_b);
      }
      
      blend_factor = 0.0;
      text_metrics = (float)get_character_width(render_buffer, (int64_t)current_pos % (int64_t)char_index & 0xffffffff);
      buffer_base = GLOBAL_ENGINE_BASE;
      text_metrics = (text_metrics - color_b) * text_metrics;
      
      if (0.0 <= text_metrics) {
        if (1.0 <= text_metrics) {
          text_metrics = 1.0;
        }
      }
      else {
        text_metrics = 0.0;
      }
      
      stack_spacing = 0.0;
      text_metrics = 1.0 - text_metrics;
      
      // 获取渲染颜色
      depth_value = *(float *)(GLOBAL_ENGINE_BASE + 0x1948);
      stack_width = *(float *)(GLOBAL_ENGINE_BASE + 0x194c);
      color_b = *(float *)(GLOBAL_ENGINE_BASE + 0x1950);
      stack_depth = *(float *)(GLOBAL_ENGINE_BASE + 0x1628);
      stack_spacing = *(float *)(GLOBAL_ENGINE_BASE + 0x1954) * stack_depth;
      
      stack_width = (float)get_render_color(&depth_value);
      depth_value = *(float *)(buffer_base + 0x1958);
      stack_width = *(float *)(buffer_base + 0x195c);
      color_b = *(float *)(buffer_base + 0x1960);
      stack_spacing = *(float *)(buffer_base + 0x1964) * stack_depth;
      alpha_value = (float)get_render_color(&depth_value);
      
      stack_depth = stack_width;
      texture_index = stack_index;
      
      if (0 < (int)vertex_count) {
        stack_width = stack_width - stack_texture;
        *(float *)(frame_buffer + 0xb0) = *(float *)(frame_buffer + 0xb0) - *(float *)(frame_buffer + 0xa0);
        
        do {
          temp_register = (int32_t)((uint64_t)temp_double >> 0x20);
          color_g = (float)(char_index + -1) * blend_factor;
          blend_factor = blend_factor + 1.0 / (float)(int)vertex_count;
          total_length = (int)(color_g + 0.5);
          
          color_g = (float)get_character_width(*(uint64_t *)(frame_buffer + 0xb8),
                                          (int64_t)(total_length + current_pos + 1) % (int64_t)char_index & 0xffffffff);
          color_g = (color_g - color_b) * text_metrics;
          
          if (0.0 <= color_g) {
            if (1.0 <= color_g) {
              color_g = 1.0;
            }
          }
          else {
            color_g = 0.0;
          }
          
          stack_scale = stack_width * text_metrics;
          temp_double = (double)CONCAT44(temp_register, 0x3f800000);
          text_metrics = 1.0 - color_g;
          stack_scale = stack_scale + stack_texture;
          
          color_g = stack_depth;
          if (texture_index == total_length) {
            color_g = alpha_value;
          }
          
          stack_width = *(float *)(frame_buffer + 0xb0) * stack_spacing + *(float *)(frame_buffer + 0xa0);
          stack_texture = stack_width * text_metrics + stack_texture;
          depth_value = *(float *)(frame_buffer + 0xb0) * blend_factor + *(float *)(frame_buffer + 0xa0);
          
          // 执行最终渲染
          perform_final_render(*(uint64_t *)(*(int64_t *)(render_params + 0x2e8)), &stack_width, &depth_value, color_g, temp_double);
          
          index_count = index_count - 1;
          buffer_base = GLOBAL_ENGINE_BASE;
          buffer_base = stack_offset;
          stack_spacing = blend_factor;
        } while (index_count != 0);
      }
      
      texture_coords = *(uint64_t *)(frame_buffer + 0xa8);
      color_b = *(float *)(frame_buffer + -0x60);
      color_g = stack_texture;
    }
    
    // 处理附加文本
    comment_end = *(char **)(frame_buffer + 0xd0);
    if (comment_end != (char *)0x0) {
      *(float *)(frame_buffer + 0xb0) = color_b;
      stack_offset = 0x3f000000;
      *(float *)(frame_buffer + 0xb4) = color_g + *(float *)(buffer_base + 0x1660);
      text_pointer = comment_end;
      
      if (comment_end != (char *)0xffffffffffffffff) {
        while (*text_pointer != '\0') {
          if (((*text_pointer == '#') && (text_pointer[1] == '#')) ||
             (text_pointer = text_pointer + 1, text_pointer == (char *)0xffffffffffffffff)) break;
        }
      }
      
      if (((int)text_pointer != (int)comment_end) &&
         (render_text_with_effects(*(uint64_t *)(*(int64_t *)(buffer_base + 0x1af8) + 0x2e8), frame_buffer + 0xb0,
                        frame_buffer + -0x70, comment_end, text_pointer), *(char *)(buffer_base + 0x2e38) != '\0')) {
        apply_text_effects(frame_buffer + 0xb0, comment_end, text_pointer);
      }
    }
    
    // 应用最终效果
    if (0.0 < stack_height) {
      apply_final_effect(CONCAT44(stack_texture, *(float *)(frame_buffer + -0x70) + *(float *)(buffer_base + 0x1674)),
                  texture_coords, 0, 1);
    }
  }
  return;
}

// 全局变量声明（可能与较小的符号重叠）