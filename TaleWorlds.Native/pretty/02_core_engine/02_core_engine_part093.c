#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part093.c - 核心引擎模块第093部分
// 包含3个函数：初始化函数、处理函数和渲染函数

// 全局变量定义
uint64_t *g_engine_context;          // 引擎上下文指针
uint *g_render_flags;                  // 渲染标志
float *g_font_size;                    // 字体大小
float *g_line_height;                  // 行高
float *g_text_color;                   // 文本颜色
float *g_position_x;                   // X坐标
float *g_position_y;                   // Y坐标
float *g_scale_x;                      // X缩放
float *g_scale_y;                      // Y缩放
uint *g_current_texture_id;            // 当前纹理ID
uint *g_last_texture_id;               // 上一个纹理ID
byte *g_texture_cache_enabled;         // 纹理缓存启用标志

/**
 * 初始化引擎渲染系统
 * 调用底层初始化函数来设置渲染环境
 */
void initialize_render_system(void)
{
  setup_render_context();
  return;
}

/**
 * 处理渲染上下文和文本渲染
 * @param param_1 纹理ID参数
 * @param param_2 渲染标志参数
 * @return 处理结果状态码
 */
uint64_t process_render_context(uint64_t param_1, int32_t param_2)
{
  int64_t context_ptr;
  int64_t texture_ptr;
  int64_t buffer_ptr;
  int buffer_size;
  int texture_id;
  uint64_t result;
  
  context_ptr = *g_engine_context;
  result = *(uint64_t *)(*g_engine_context + 0x1af8);
  *(int8_t *)(result + 0xb1) = 1;
  texture_ptr = *(int64_t *)(context_ptr + 0x1af8);
  
  // 检查纹理是否已初始化
  if (*(char *)(texture_ptr + 0xb4) == '\0') {
    buffer_ptr = context_ptr + 0x3054;
    buffer_size = allocate_buffer(buffer_ptr, 0xc01);
    
    if (buffer_ptr != 0) {
      if ((buffer_size == -1) || (0xc00 < buffer_size)) {
        buffer_size = 0xc00;
      }
      *(int8_t *)(buffer_size + buffer_ptr) = 0;
    }
    
    texture_id = get_texture_id(param_1, 0,
                                *(int32_t *)
                                 (*(int64_t *)(texture_ptr + 0x220) + -4 +
                                 (int64_t)*(int *)(texture_ptr + 0x218) * 4));
    texture_ptr = *g_engine_context;
    
    // 更新纹理ID状态
    if (*(int *)(*g_engine_context + 0x1b2c) == texture_id) {
      *(int *)(*g_engine_context + 0x1b34) = texture_id;
    }
    
    if (*(int *)(texture_ptr + 0x1b30) == texture_id) {
      *(int8_t *)(texture_ptr + 0x1b3f) = 1;
    }
    
    result = render_text(texture_id, param_2, buffer_ptr, context_ptr + buffer_size + 0x3054);
  }
  else {
    result = result & 0xffffffffffffff00;
  }
  
  return result;
}

/**
 * 渲染文本到指定位置
 * 处理文本缓冲区并调用渲染函数
 */
void render_text_buffer(void)
{
  int64_t buffer_ptr;
  int64_t context_ptr;
  int buffer_size;
  int texture_id;
  int32_t render_flags;
  int64_t position_ptr;
  
  buffer_ptr = position_ptr + 0x3054;
  buffer_size = allocate_buffer(buffer_ptr, 0xc01);
  
  if (buffer_ptr != 0) {
    if ((buffer_size == -1) || (0xc00 < buffer_size)) {
      buffer_size = 0xc00;
    }
    *(int8_t *)(buffer_size + buffer_ptr) = 0;
  }
  
  texture_id = get_texture_id();
  context_ptr = *g_engine_context;
  
  // 更新纹理ID状态
  if (*(int *)(*g_engine_context + 0x1b2c) == texture_id) {
    *(int *)(*g_engine_context + 0x1b34) = texture_id;
  }
  
  if (*(int *)(context_ptr + 0x1b30) == texture_id) {
    *(int8_t *)(context_ptr + 0x1b3f) = 1;
  }
  
  render_text(texture_id, render_flags, buffer_ptr, position_ptr + buffer_size + 0x3054);
  return;
}

/**
 * 空函数 - 预留的接口函数
 */
void reserved_function(void)
{
  return;
}

/**
 * 主要的文本渲染函数
 * @param param_1 纹理ID
 * @param param_2 渲染标志
 * @param param_3 文本起始指针
 * @param param_4 文本结束指针
 * @return 渲染成功状态
 */
uint64_t render_text(uint param_1, uint param_2, char *param_3, char *param_4)
{
  float width;
  float height;
  int64_t context_ptr;
  char text_char;
  byte byte_flag;
  int8_t byte_val;
  int int_var;
  int32_t flag_var;
  float *float_ptr;
  int64_t long_ptr;
  int index;
  uint texture_param;
  uint64_t param_64;
  char char_flag;
  uint64_t result;
  char *text_ptr;
  byte texture_flag;
  uint64_t texture_result;
  int64_t array_ptr;
  uint render_mode;
  float font_width;
  float font_height;
  float scale_x;
  float scale_y;
  float pos_x;
  float pos_y;
  float offset_x;
  float offset_y;
  float text_width;
  float text_height;
  uint64_t stack_param_1;
  uint64_t stack_param_2;
  int32_t param_val;
  float stack_width;
  float stack_height;
  char stack_char;
  char stack_array[7];
  uint64_t stack_64;
  int32_t stack_32_1;
  int32_t stack_32_2;
  float stack_scale_x;
  float stack_scale_y;
  float stack_pos_x;
  float stack_pos_y;
  float stack_offset_x;
  float stack_offset_y;
  uint64_t stack_context;
  float stack_text_x;
  float stack_text_y;
  float stack_text_width;
  float stack_text_height;
  
  context_ptr = *g_engine_context;
  param_val = (int32_t)((uint64_t)stack_param_2 >> 0x20);
  flag_var = (int32_t)((uint64_t)stack_param_1 >> 0x20);
  texture_result = *(uint64_t *)(*g_engine_context + 0x1af8);
  *(int8_t *)(texture_result + 0xb1) = 1;
  stack_context = *(int64_t *)(context_ptr + 0x1af8);
  
  // 检查渲染上下文状态
  if (*(char *)(stack_context + 0xb4) != '\0') {
    return texture_result & 0xffffffffffffff00;
  }
  
  stack_32_1 = param_2 >> 1 & 0x7fffff01;
  
  // 处理渲染标志
  if (((param_2 >> 1 & 1) == 0) && ((param_2 >> 10 & 1) == 0)) {
    float_ptr = &stack_offset_y;
    stack_offset_y = *(float *)(context_ptr + 0x165c);
    stack_offset_x = 0.0;
  }
  else {
    float_ptr = (float *)&stack_64;
    stack_64 = *(int64_t *)(context_ptr + 0x165c);
  }
  
  width = *float_ptr;
  text_height = float_ptr[1];
  
  // 处理文本指针
  if ((param_4 == (char *)0x0) && (param_4 = param_3, param_3 != (char *)0xffffffffffffffff)) {
    while (*param_4 != '\0') {
      if (((*param_4 == '#') && (param_4[1] == '#')) ||
         (param_4 = param_4 + 1, param_4 == (char *)0xffffffffffffffff)) break;
    }
  }
  
  float_ptr = *(float **)(context_ptr + 0x19f0);
  text_height = *(float *)(context_ptr + 0x19f8);
  
  if (param_3 == param_4) {
    stack_offset_y = 0.0;
    stack_height = text_height;
  }
  else {
    param_64 = CONCAT44(flag_var, 0xbf800000);
    text_ptr = param_3;
    calculate_text_dimensions(float_ptr, &stack_width, text_height, stack_context, param_64, param_3, param_4, 0);
    param_val = (int32_t)((uint64_t)text_ptr >> 0x20);
    flag_var = (int32_t)((uint64_t)param_64 >> 0x20);
    
    if (0.0 < stack_width) {
      stack_width = stack_width - text_height / *float_ptr;
    }
    
    text_height = *(float *)(context_ptr + 0x19f8);
    stack_offset_y = (float)(int)(stack_width + 0.95);
  }
  
  texture_result = (uint64_t)param_1;
  char_flag = (char)stack_32_1;
  long_ptr = *(int64_t *)(context_ptr + 0x1af8);
  stack_text_y = *(float *)(stack_context + 0x128);
  
  if (*(float *)(stack_context + 0x128) <= text_height) {
    stack_text_y = text_height;
  }
  
  array_ptr = *(int64_t *)(long_ptr + 0x210);
  font_height = *(float *)(context_ptr + 0x1660) + *(float *)(context_ptr + 0x1660) + text_height;
  text_height = *(float *)(long_ptr + 0x278) - *(float *)(long_ptr + 0x40);
  text_height = text_height + text_height + stack_height;
  
  if (*(float *)(stack_context + 0x124) <= font_height) {
    font_height = *(float *)(stack_context + 0x124);
  }
  
  if (font_height <= text_height) {
    font_height = text_height;
  }
  
  text_height = font_height + *(float *)(stack_context + 0x104);
  
  if (array_ptr != 0) {
    int_var = *(int *)(array_ptr + 0xc) + 1;
    index = *(int *)(array_ptr + 0xc);
    if (-1 < int_var) {
      index = int_var;
    }
    
    text_height = ((*(float *)(array_ptr + 0x18) - *(float *)(array_ptr + 0x14)) *
                 *(float *)((int64_t)index * 0x1c + *(int64_t *)(array_ptr + 0x38)) +
                 *(float *)(array_ptr + 0x14)) - *(float *)(long_ptr + 0x70);
  }
  
  stack_text_x = *(float *)(stack_context + 0x100);
  height = *(float *)(stack_context + 0x104);
  text_height = text_height + *(float *)(stack_context + 0x40);
  width = width + width;
  
  if (char_flag != '\0') {
    width = (float)(int)(*(float *)(stack_context + 0x70) * 0.5) - 1.0;
    stack_text_x = stack_text_x - width;
    text_height = width + text_height;
    width = width * 3.0;
  }
  
  width = text_height + width;
  
  if (stack_offset_y <= 0.0) {
    height = 0.0;
  }
  else {
    height = width + width + stack_offset_y;
  }
  
  text_height = text_height + height;
  long_ptr = stack_context;
  stack_width = text_height;
  stack_offset_x = stack_height;
  stack_height = font_height;
  stack_text_x = stack_text_x;
  stack_text_y = height;
  stack_text_width = text_height;
  stack_text_height = text_height;
  
  apply_text_transform(&stack_width);
  stack_pos_y = text_height;
  
  if (char_flag == '\0') {
    stack_pos_y = *(float *)(context_ptr + 0x166c) + *(float *)(context_ptr + 0x166c) + stack_text_x + text_height;
  }
  
  array_ptr = context_ptr;
  stack_scale_x = stack_text_x;
  stack_scale_y = height;
  stack_pos_x = text_height;
  
  if ((param_2 >> 8 & 1) == 0) {
    stack_64 = *(int64_t *)(context_ptr + 0x1af8);
    param_64 = *(uint64_t *)(stack_64 + 0x198);
    
    if (*(uint *)(context_ptr + 0x1c64) == 0) {
      int_var = setup_texture_rendering(param_64, texture_result & 0xffffffff, param_2 >> 5 & 1);
      result = (uint64_t)(int_var != 0);
    }
    else if ((*(uint *)(context_ptr + 0x1c64) & 1) == 0) {
      index = -1;
      int_var = setup_texture_rendering(param_64, texture_result & 0xffffffff);
      
      if (int_var == index) {
        result = (uint64_t)*(byte *)(context_ptr + 0x1c60);
        update_texture_state(param_64, param_1, *(byte *)(context_ptr + 0x1c60));
        array_ptr = *g_engine_context;
        *(int32_t *)(context_ptr + 0x1c64) = 0;
      }
      else {
        *(int32_t *)(context_ptr + 0x1c64) = 0;
        result = (uint64_t)(int_var != 0);
      }
    }
    else {
      result = (uint64_t)*(byte *)(context_ptr + 0x1c60);
      update_texture_state(param_64, texture_result & 0xffffffff, *(byte *)(context_ptr + 0x1c60));
      array_ptr = *g_engine_context;
      *(int32_t *)(context_ptr + 0x1c64) = 0;
    }
    
    long_ptr = stack_context;
    
    if (((*(char *)(context_ptr + 0x2e38) != '\0') && ((param_2 & 0x10) == 0)) &&
       (*(int *)(stack_64 + 0x13c) < *(int *)(context_ptr + 0x2e5c))) {
      result = 1;
    }
  }
  else {
    result = 1;
  }
  
  render_mode = param_2 >> 8 & 0xffff01;
  char_flag = (char)result;
  
  if (((char_flag != '\0') && (*(char *)(context_ptr + 0x1d04) == '\0')) && ((param_2 & 0x2008) == 0x2000)) {
    *(uint *)(long_ptr + 0x140) =
         *(uint *)(long_ptr + 0x140) | 1 << ((byte)*(int32_t *)(long_ptr + 0x13c) & 0x1f);
  }
  
  stack_32_2 = render_mode;
  char_flag = setup_render_parameters(&stack_scale_x, param_1, 0);
  *(uint *)(stack_context + 0x148) = *(uint *)(stack_context + 0x148) | 2;
  *(float *)(stack_context + 0x15c) = stack_text_x;
  *(float *)(stack_context + 0x160) = stack_text_y;
  *(float *)(stack_context + 0x164) = stack_text_width;
  *(float *)(stack_context + 0x168) = stack_text_height;
  
  if (char_flag == '\0') goto render_complete;
  
  stack_width = (float)(param_2 & 4);
  texture_param = ((uint)stack_width | 0x40) << 4;
  
  if ((char)render_mode == '\0') {
    texture_param = texture_param | 0x1000;
  }
  
  if ((param_2 & 0x40) != 0) {
    texture_param = texture_param | (param_2 & 0x80 | 0x400) >> 6;
  }
  
  param_64 = CONCAT44(flag_var, texture_param);
  char_flag = execute_render_pipeline(&stack_scale_x, param_1, &stack_char, stack_array, param_64);
  render_mode = (uint)((uint64_t)param_64 >> 0x20);
  
  if ((char)stack_32_2 == '\0') {
    texture_flag = 0;
    
    if (char_flag != '\0') {
      if (((param_2 & 0xc0) == 0) || (*(uint *)(context_ptr + 0x1ca4) == param_1)) {
        texture_flag = 1;
      }
      
      if ((char)param_2 < '\0') {
        byte_flag = 1;
        stack_64 = CONCAT44(stack_pos_x, stack_scale_x + width);
        char_flag = validate_texture_coordinates(&stack_scale_x, &stack_64);
        
        if ((char_flag == '\0') || (*(char *)(context_ptr + 0x1d07) != '\0')) {
          byte_flag = 0;
        }
        
        texture_flag = texture_flag | byte_flag;
      }
      
      if ((param_2 & 0x40) != 0) {
        texture_flag = texture_flag | *(byte *)(context_ptr + 0x415);
      }
      
      if ((*(char *)(context_ptr + 0x1dd0) != '\0') && (result != '\0')) {
        texture_flag = 0;
      }
    }
    
    texture_param = *(uint *)(context_ptr + 0x1ca0);
    
    if ((((texture_param == param_1) && (*(char *)(context_ptr + 0x1d21) != '\0')) &&
        (*(int *)(context_ptr + 0x1d2c) == 0)) && (result != '\0')) {
      *(int8_t *)(array_ptr + 0x1d21) = 0;
      texture_flag = 1;
      
      if ((*(char *)(array_ptr + 0x1d21) == '\0') && (*(char *)(array_ptr + 0x1d09) == '\0')) {
        byte_val = 0;
      }
      else {
        byte_val = 1;
      }
      
      *(int8_t *)(array_ptr + 0x1d08) = byte_val;
      texture_param = *(uint *)(context_ptr + 0x1ca0);
    }
    
    if (((texture_param == param_1) && (*(char *)(context_ptr + 0x1d21) != '\0')) &&
       ((*(int *)(context_ptr + 0x1d2c) == 1 && (result == '\0')))) {
      *(int8_t *)(array_ptr + 0x1d21) = 0;
      
      if (*(char *)(array_ptr + 0x1d09) == '\0') {
        *(int8_t *)(array_ptr + 0x1d08) = 0;
      }
      else {
        *(int8_t *)(array_ptr + 0x1d08) = 1;
      }
    }
    else if (texture_flag == 0) goto skip_texture_update;
    
    result = (uint64_t)(result == '\0');
    update_texture_state(*(uint64_t *)(stack_context + 0x198), param_1, result == '\0');
    array_ptr = *g_engine_context;
  }
  
skip_texture_update:
  if (stack_width != 0.0) {
    flush_render_buffer();
  }
  
  if ((stack_array[0] == '\0') || (stack_char == '\0')) {
    long_ptr = (uint64_t)(stack_char != '\0') + 0x18;
  }
  else {
    long_ptr = 0x1a;
  }
  
  float_ptr = (float *)(array_ptr + 0x1628 + (long_ptr + 10) * 0x10);
  stack_scale_x = *float_ptr;
  stack_scale_y = float_ptr[1];
  stack_pos_y = float_ptr[2];
  stack_pos_x = float_ptr[3] * *(float *)(array_ptr + 0x1628);
  flag_var = get_render_transform(&stack_scale_x);
  stack_width = width + stack_text_x;
  text_height = height + stack_text_y;
  char_flag = (char)result;
  stack_height = text_height;
  
  if ((char)stack_32_1 == '\0') {
    if ((stack_char != '\0') || ((param_2 & 1) != 0)) {
      stack_64 = CONCAT44(text_height, text_height);
      stack_context = CONCAT44(height, stack_text_x);
      render_to_screen(*(uint64_t *)(*(int64_t *)(array_ptr + 0x1af8) + 0x2e8), &stack_context, &stack_64,
                       flag_var, (uint64_t)render_mode << 0x20, CONCAT44(param_val, 0xf));
      
      if (param_1 == *(uint *)(*g_engine_context + 0x1ca0)) {
        update_render_state(&stack_text_x, 2);
      }
    }
    
    if ((param_2 >> 9 & 1) == 0) {
      if ((char)stack_32_2 == '\0') {
        param_64 = 1;
        
        if (char_flag != '\0') {
          param_64 = 3;
        }
        
        render_text_shadow(CONCAT44(*(float *)(context_ptr + 0x19f8) * 0.15 + stack_text_y + height, width + stack_text_x),
                          param_64, 0x3f333333);
      }
    }
    else {
      render_text_outline(CONCAT44(*(float *)(context_ptr + 0x19f8) * 0.5 + stack_text_y + height, width * 0.5 + stack_text_x));
    }
    
    if (*(char *)(context_ptr + 0x2e38) != '\0') {
      render_text_with_effects(&stack_width, &g_default_text_color, 0);
    }
    
    render_text_to_buffer(CONCAT44(stack_height, stack_width), param_3, param_4, 0);
  }
  else {
    render_text_quad(CONCAT44(stack_text_y, stack_text_x), CONCAT44(stack_text_height, stack_text_width), flag_var, 1,
                     CONCAT44(render_mode, *(int32_t *)(context_ptr + 0x1664)));
    
    if (param_1 == *(uint *)(*g_engine_context + 0x1ca0)) {
      update_render_state(&stack_text_x, 2);
    }
    
    param_64 = 1;
    
    if (char_flag != '\0') {
      param_64 = 3;
    }
    
    render_text_shadow(CONCAT44(text_height, width + stack_text_x), param_64, 0x3f800000);
    long_ptr = *g_engine_context;
    
    if (*(char *)(context_ptr + 0x2e38) == '\0') {
      stack_64 = 0;
      
      if (param_4 == (char *)0x0) {
        param_4 = (char *)0xffffffffffffffff;
      }
      
      text_ptr = param_3;
      
      if (param_3 < param_4) {
        while (*text_ptr != '\0') {
          if (((*text_ptr == '#') && (text_ptr[1] == '#')) ||
             (text_ptr = text_ptr + 1, param_4 <= text_ptr)) break;
        }
      }
      
      if (((int)text_ptr != (int)param_3) &&
         (render_text_segment(*(uint64_t *)(*(int64_t *)(*g_engine_context + 0x1af8) + 0x2e8), &stack_width,
                              &stack_text_width, param_3, text_ptr, &stack_offset_y, &stack_64, 0),
                              *(char *)(long_ptr + 0x2e38) != '\0')) {
        render_text_with_effects(&stack_width, param_3, text_ptr);
      }
    }
    else {
      stack_32_1 = CONCAT13(stack_32_1._3_1_, 0x2323);
      stack_32_2 = 0x23230a;
      render_text_with_effects(&stack_width, &stack_32_2, (int64_t)&stack_32_2 + 3);
      context_ptr = *g_engine_context;
      stack_64 = 0;
      
      if (param_4 == (char *)0x0) {
        param_4 = (char *)0xffffffffffffffff;
      }
      
      text_ptr = param_3;
      
      if (param_3 < param_4) {
        do {
          if ((*text_ptr == '\0') || ((*text_ptr == '#' && (text_ptr[1] == '#')))) break;
          text_ptr = text_ptr + 1;
        } while (text_ptr < param_4);
      }
      
      if (((int)text_ptr != (int)param_3) &&
         (render_text_segment(*(uint64_t *)(*(int64_t)(*g_engine_context + 0x1af8) + 0x2e8), &stack_width,
                              &stack_text_width, param_3, text_ptr, &stack_offset_y, &stack_64, 0),
                              *(char *)(context_ptr + 0x2e38) != '\0')) {
        render_text_with_effects(&stack_width, param_3, text_ptr);
      }
      
      render_text_with_effects(&stack_width, (int64_t)&stack_32_1 + 1, (int64_t)&stack_32_1 + 3);
    }
  }
  
render_complete:
  if ((result != '\0') && ((param_2 & 8) == 0)) {
    cleanup_render_state(param_1);
  }
  
  return result;
}

// 函数声明（简化实现）
void setup_render_context(void);
uint64_t setup_texture_rendering(uint64_t param_1, uint param_2, int param_3);
void update_texture_state(uint64_t param_1, uint param_2, byte param_3);
int allocate_buffer(int64_t param_1, int param_2);
uint get_texture_id(uint64_t param_1, int param_2, int32_t param_3);
void calculate_text_dimensions(float *param_1, float *param_2, float param_3, int64_t param_4, uint64_t param_5, char *param_6, char *param_7, int param_8);
void apply_text_transform(float *param_1);
uint get_render_transform(float *param_1);
char setup_render_parameters(float *param_1, uint param_2, int param_3);
char execute_render_pipeline(float *param_1, uint param_2, char *param_3, char *param_4, uint64_t param_5);
char validate_texture_coordinates(float *param_1, int64_t *param_2);
void flush_render_buffer(void);
void render_to_screen(uint64_t param_1, int64_t *param_2, int64_t *param_3, uint param_4, uint64_t param_5, uint64_t param_6);
void update_render_state(float *param_1, int param_2);
void render_text_shadow(uint64_t param_1, uint param_2, uint param_3);
void render_text_outline(uint64_t param_1);
void render_text_with_effects(float *param_1, void *param_2, int param_3);
void render_text_to_buffer(uint64_t param_1, char *param_2, char *param_3, int param_4);
void render_text_quad(uint64_t param_1, uint64_t param_2, uint param_3, int param_4, uint64_t param_5);
char render_text_segment(uint64_t param_1, float *param_2, float *param_3, char *param_4, char *param_5, float *param_6, int64_t *param_7, int param_8);
void cleanup_render_state(uint param_1);

// 全局常量
uint64_t g_default_text_color;  // 默认文本颜色