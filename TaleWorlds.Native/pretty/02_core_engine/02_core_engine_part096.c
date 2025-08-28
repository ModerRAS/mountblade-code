#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 02_core_engine_part096.c - 7个函数

/**
 * 函数：process_render_batch
 * 功能：处理渲染批次，执行批量渲染操作
 * 这是主要的渲染处理函数，负责处理各种渲染状态和参数
 */
void process_render_batch(void)

{
  int render_index;
  int batch_count;
  char *text_ptr;
  bool is_enabled;
  char state_flag1;
  char state_flag2;
  int32_t render_flags;
  int element_count;
  uint64_t texture_handle;
  char *string_buffer;
  int64_t context_ptr;
  int current_index;
  int64_t data_ptr;
  uint loop_counter;
  int64_t render_context;
  uint64_t color_value;
  int64_t position_offset;
  uint64_t matrix_data;
  int texture_id;
  int64_t transform_ptr;
  float position_x;
  float position_y;
  float position_z;
  float scale_x;
  float scale_y;
  float alpha_value;
  float color_r;
  float color_g;
  float color_b;
  float color_a;
  int32_t blend_mode;
  int32_t stack_param1;
  double depth_value;
  float position_w;
  float temp_float1;
  int32_t temp_param1;
  float temp_float2;
  float temp_float3;
  float temp_float4;
  int temp_index;
  float scale_factor;
  float temp_float5;
  float temp_float6;
  float temp_float7;
  int64_t stack_param2;
  float temp_float8;
  float temp_float9;
  
  state_flag1 = FUN_180128040(&stack0x00000040,&stack0x00000048,1);
  if (state_flag1 != '\0') {
    *(uint *)(position_offset + 0x148) = *(uint *)(position_offset + 0x148) | 1;
  }
  state_flag1 = (char)texture_id;
  if (((((*(int *)(render_context + 0x1b18) == texture_id) || (*(char *)(render_context + 0x1b1c) != state_flag1))
       && (data_ptr = *(int64_t *)(render_context + 0x1af8), *(int64_t *)(render_context + 0x1b00) == data_ptr))
      && (((*(int *)(render_context + 0x1b2c) == texture_id || (*(char *)(render_context + 0x1b3d) != state_flag1))
          && ((state_flag2 = FUN_180128040(&stack0x00000070,&stack0x00000078), state_flag2 != '\0' &&
              ((*(char *)(render_context + 0x1d07) == state_flag1 &&
               (state_flag2 = func_0x000180124000(data_ptr,0), state_flag2 != '\0')))))))) &&
     ((*(byte *)(data_ptr + 0x1a8) & 4) == 0)) {
    *(int *)(render_context + 0x1b18) = texture_id;
    is_enabled = true;
    *(char *)(render_context + 0x1b1c) = state_flag1;
  }
  else {
    is_enabled = false;
  }
  render_flags = (int32_t)((uint64_t)stack_param1 >> 0x20);
  color_a = *(float *)(transform_ptr + 0xd8);
  render_index = *(int *)(transform_ptr + 0xc0);
  scale_y = *(float *)(transform_ptr + 0xe0);
  if ((color_a == color_b) || (scale_y == color_b)) {
    temp_float4 = -3.4028235e+38;
    temp_float3 = color_b;
    if (0 < render_index) {
      texture_handle = *(uint64_t *)(transform_ptr + 0xb8);
      do {
        alpha_value = (float)func_0x00018011a9b0(texture_handle,texture_id);
        render_flags = (int32_t)((uint64_t)stack_param1 >> 0x20);
        if (alpha_value <= temp_float3) {
          temp_float3 = alpha_value;
        }
        if (temp_float4 < alpha_value) {
          temp_float4 = alpha_value;
        }
        texture_id = texture_id + 1;
        render_context = SYSTEM_DATA_MANAGER_A;
        transform_ptr = stack_param2;
      } while (texture_id < render_index);
    }
    if (color_a == color_b) {
      color_a = temp_float3;
    }
    color_g = *(float *)(transform_ptr + 0xa0);
    if (scale_y == color_b) {
      scale_y = temp_float4;
    }
  }
  position_w = *(float *)(render_context + 0x1738);
  temp_float1 = *(float *)(render_context + 0x173c);
  temp_param1 = *(int32_t *)(render_context + 0x1740);
  temp_float2 = *(float *)(render_context + 0x1744) * *(float *)(render_context + 0x1628);
  blend_mode = func_0x000180121e20(&stack0x00000040);
  depth_value = (double)CONCAT44(render_flags,*(int32_t *)(transform_ptr + 0x1664));
  *(uint64_t *)(transform_ptr + -0x78) = CONCAT44(color_r,blend_mode);
  FUN_180122960(CONCAT44(color_r,blend_mode),*(uint64_t *)(transform_ptr + -0x70),blend_mode,1,
                depth_value);
  data_ptr = SYSTEM_DATA_MANAGER_A;
  if (0 < render_index) {
    batch_count = *(int *)(transform_ptr + 200);
    temp_index = -1;
    current_index = render_index;
    if ((int)color_g < render_index) {
      current_index = (int)color_g;
    }
    loop_counter = current_index - 1;
    color_value = (uint64_t)loop_counter;
    if (is_enabled) {
      temp_float3 = (*(float *)(transform_ptr + 0x118) - color_g) / (color_a - color_g);
      temp_float4 = alpha_value;
      if ((alpha_value <= temp_float3) && (temp_float4 = temp_float3, 0.9999 <= temp_float3)) {
        temp_float4 = 0.9999;
      }
      current_index = (int)((float)(render_index + -1) * temp_float4);
      temp_index = current_index;
      temp_float4 = (float)func_0x00018011a9b0(*(uint64_t *)(transform_ptr + 0xb8),
                                          (int64_t)(current_index + batch_count) % (int64_t)render_index & 0xffffffff)
      ;
      texture_handle = *(uint64_t *)(transform_ptr + 0xb8);
      temp_float3 = (float)func_0x00018011a9b0(texture_handle,(int64_t)(current_index + batch_count + 1) % (int64_t)render_index &
                                                0xffffffff);
      depth_value = (double)temp_float3;
      FUN_18012ea30(&rendering_buffer_2256_ptr,current_index,(double)temp_float4,current_index + 1,depth_value);
    }
    else {
      texture_handle = *(uint64_t *)(transform_ptr + 0xb8);
    }
    temp_float4 = alpha_value;
    if (color_a != scale_y) {
      temp_float4 = 1.0 / (scale_y - color_a);
    }
    scale_y = (float)func_0x00018011a9b0(texture_handle,(int64_t)batch_count % (int64_t)render_index & 0xffffffff);
    data_ptr = SYSTEM_DATA_MANAGER_A;
    temp_float3 = (scale_y - color_a) * temp_float4;
    scale_y = alpha_value;
    if ((alpha_value <= temp_float3) && (scale_y = temp_float3, 1.0 <= temp_float3)) {
      scale_y = 1.0;
    }
    scale_y = 1.0 - scale_y;
    position_w = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1948);
    temp_float1 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x194c);
    temp_param1 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x1950);
    temp_float3 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1628);
    temp_float2 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1954) * temp_float3;
    scale_factor = alpha_value;
    temp_float8 = (float)func_0x000180121e20(&stack0x00000040);
    position_w = *(float *)(data_ptr + 0x1958);
    temp_float1 = *(float *)(data_ptr + 0x195c);
    temp_param1 = *(int32_t *)(data_ptr + 0x1960);
    temp_float2 = *(float *)(data_ptr + 0x1964) * temp_float3;
    alpha_value = (float)func_0x000180121e20(&stack0x00000040);
    temp_float3 = temp_float8;
    current_index = temp_index;
    if (0 < (int)loop_counter) {
      temp_float5 = temp_float5 - temp_float6;
      *(float *)(transform_ptr + 0xb0) = *(float *)(transform_ptr + 0xb0) - *(float *)(transform_ptr + 0xa0);
      temp_float7 = alpha_value;
      do {
        render_flags = (int32_t)((uint64_t)depth_value >> 0x20);
        position_x = (float)(render_index + -1) * temp_float7;
        temp_float7 = temp_float7 + 1.0 / (float)(int)loop_counter;
        element_count = (int)(position_x + 0.5);
        position_x = (float)func_0x00018011a9b0(*(uint64_t *)(transform_ptr + 0xb8),
                                            (int64_t)(element_count + batch_count + 1) % (int64_t)render_index &
                                            0xffffffff);
        position_y = (position_x - color_a) * temp_float4;
        position_x = alpha_value;
        if ((alpha_value <= position_y) && (position_x = position_y, 1.0 <= position_y)) {
          position_x = 1.0;
        }
        temp_float9 = temp_float5 * scale_y;
        depth_value = (double)CONCAT44(render_flags,0x3f800000);
        scale_y = 1.0 - position_x;
        temp_float9 = temp_float9 + temp_float6;
        position_x = temp_float3;
        if (current_index == element_count) {
          position_x = alpha_value;
        }
        temp_float8 =
             *(float *)(transform_ptr + 0xb0) * temp_float2 + *(float *)(transform_ptr + 0xa0);
        temp_float1 = temp_float5 * scale_y + temp_float6;
        position_w = *(float *)(transform_ptr + 0xb0) * temp_float7 + *(float *)(transform_ptr + 0xa0);
        FUN_180293d20(*(uint64_t *)(*(int64_t *)(transform_ptr + -0x80) + 0x2e8),&stack0x00000070,
                      &stack0x00000040,position_x,depth_value);
        color_value = color_value - 1;
        data_ptr = SYSTEM_DATA_MANAGER_A;
        transform_ptr = stack_param2;
        temp_float2 = temp_float7;
      } while (color_value != 0);
    }
    matrix_data = *(uint64_t *)(transform_ptr + 0xa8);
    blend_mode = *(int32_t *)(transform_ptr + -0x60);
    color_r = temp_float6;
  }
  text_ptr = *(char **)(transform_ptr + 0xd0);
  if (text_ptr != (char *)0x0) {
    *(int32_t *)(transform_ptr + 0xb0) = blend_mode;
    stack_param2 = 0x3f000000;
    *(float *)(transform_ptr + 0xb4) = color_r + *(float *)(transform_ptr + 0x1660);
    string_buffer = text_ptr;
    if (text_ptr != (char *)0xffffffffffffffff) {
      while (*string_buffer != '\0') {
        if (((*string_buffer == '#') && (string_buffer[1] == '#')) ||
           (string_buffer = string_buffer + 1, string_buffer == (char *)0xffffffffffffffff)) break;
      }
    }
    if (((int)string_buffer != (int)text_ptr) &&
       (FUN_1801224c0(*(uint64_t *)(*(int64_t *)(data_ptr + 0x1af8) + 0x2e8),transform_ptr + 0xb0,
                      transform_ptr + -0x70,text_ptr,string_buffer), *(char *)(data_ptr + 0x2e38) != '\0')) {
      FUN_18013c800(transform_ptr + 0xb0,text_ptr,string_buffer);
    }
  }
  if (alpha_value < temp_float7) {
    FUN_180122320(CONCAT44(temp_float6,
                           *(float *)(transform_ptr + -0x70) + *(float *)(transform_ptr + 0x1674)),matrix_data
                  ,0,1);
  }
  return;
}





/**
 * 函数：process_text_elements
 * 功能：处理文本元素，执行文本渲染相关操作
 * 这是一个简化的文本处理函数，主要用于处理文本渲染
 */
void process_text_elements(void)

{
  char *text_ptr;
  int64_t transform_ptr;
  int64_t context_ptr;
  char *string_data;
  int64_t render_data;
  float alpha_value;
  float color_value;
  int32_t blend_mode;
  uint64_t stack_param1;
  uint64_t stack_param2;
  
  *(int32_t *)(transform_ptr + 0xb0) = blend_mode;
  stack_param2 = 0x3f000000;
  *(float *)(transform_ptr + 0xb4) = color_value + *(float *)(render_data + 0x1660);
  text_ptr = string_data;
  if (string_data != (char *)0xffffffffffffffff) {
    while (*text_ptr != '\0') {
      if (((*text_ptr == '#') && (text_ptr[1] == '#')) ||
         (text_ptr = text_ptr + 1, text_ptr == (char *)0xffffffffffffffff)) break;
    }
  }
  if ((int)text_ptr != (int)string_data) {
    FUN_1801224c0(*(uint64_t *)(*(int64_t *)(context_ptr + 0x1af8) + 0x2e8),transform_ptr + 0xb0,
                  transform_ptr + -0x70);
    if (*(char *)(context_ptr + 0x2e38) != '\0') {
      FUN_18013c800(transform_ptr + 0xb0);
    }
  }
  if (alpha_value < stack_param1._4_4_) {
    FUN_180122320(*(float *)(transform_ptr + -0x70) + *(float *)(render_data + 0x1674));
  }
  return;
}





/**
 * 函数：execute_render_command
 * 功能：执行渲染命令，处理具体的渲染操作
 * 这是一个非常简化的渲染命令执行函数
 */
void execute_render_command(void)

{
  int64_t transform_ptr;
  int64_t render_data;
  
  FUN_180122320(*(float *)(transform_ptr + -0x70) + *(float *)(render_data + 0x1674));
  return;
}





/**
 * 函数：empty_function
 * 功能：空函数，没有任何操作
 * 这是一个占位符函数，不执行任何操作
 */
void empty_function(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 函数：process_text_with_params
 * 功能：处理带参数的文本，执行文本渲染操作
 * 这个函数处理带有特定参数的文本渲染
 */
void process_text_with_params(void)

{
  char *text_ptr;
  int64_t context_ptr;
  char *string_end;
  int64_t transform_ptr;
  int64_t render_data;
  float alpha_value;
  float color_value;
  int32_t blend_mode;
  uint64_t stack_param1;
  
  context_ptr = SYSTEM_DATA_MANAGER_A;
  text_ptr = *(char **)(transform_ptr + 0xd0);
  if (text_ptr != (char *)0x0) {
    *(int32_t *)(transform_ptr + 0xb0) = blend_mode;
    *(float *)(transform_ptr + 0xb4) = color_value + *(float *)(render_data + 0x1660);
    string_end = text_ptr;
    if (text_ptr != (char *)0xffffffffffffffff) {
      while (*string_end != '\0') {
        if (((*string_end == '#') && (string_end[1] == '#')) ||
           (string_end = string_end + 1, string_end == (char *)0xffffffffffffffff)) break;
      }
    }
    if ((int)string_end != (int)text_ptr) {
      FUN_1801224c0(*(uint64_t *)(*(int64_t *)(context_ptr + 0x1af8) + 0x2e8),transform_ptr + 0xb0,
                    transform_ptr + -0x70,text_ptr,string_end);
      if (*(char *)(context_ptr + 0x2e38) != '\0') {
        FUN_18013c800(transform_ptr + 0xb0,text_ptr,string_end);
      }
    }
  }
  if (alpha_value < stack_param1._4_4_) {
    FUN_180122320(*(float *)(transform_ptr + -0x70) + *(float *)(render_data + 0x1674));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/**
 * 函数：render_text_with_effects
 * 功能：渲染带特效的文本，处理文本渲染和特效
 * 这个函数负责渲染带有各种视觉特效的文本
 */
uint64_t render_text_with_effects(char *text_data,uint64_t position_data,char effect_flag,uint64_t render_params)

{
  float position_x;
  float position_y;
  float position_z;
  int64_t context_ptr;
  int64_t render_data;
  byte is_enabled;
  int32_t render_flags;
  uint64_t result;
  char *text_ptr;
  float *font_data;
  float font_size;
  float extraout_XMM0_Da;
  float text_width;
  uint64_t stack_param;
  int32_t stack_buffer1;
  int32_t stack_buffer2;
  int32_t stack_buffer3;
  float stack_buffer4;
  
  render_data = SYSTEM_DATA_MANAGER_A;
  result = *(uint64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8);
  *(int8_t *)(result + 0xb1) = 1;
  context_ptr = *(int64_t *)(render_data + 0x1af8);
  if (*(char *)(context_ptr + 0xb4) == '\0') {
    position_x = *(float *)(context_ptr + 0x100);
    position_y = *(float *)(context_ptr + 0x104);
    text_ptr = text_data;
    if (text_data != (char *)0xffffffffffffffff) {
      while (*text_ptr != '\0') {
        if (((*text_ptr == '#') && (text_ptr[1] == '#')) ||
           (text_ptr = text_ptr + 1, text_ptr == (char *)0xffffffffffffffff)) break;
      }
    }
    font_data = *(float **)(render_data + 0x19f0);
    text_width = *(float *)(render_data + 0x19f8);
    stack_param = position_data;
    if (text_data == text_ptr) {
      text_width = 0.0;
    }
    else {
      FUN_180297340(font_data,&stack_param,text_width,render_params,0xbf800000,text_data,text_ptr,0);
      font_size = (float)stack_param;
      if (0.0 < (float)stack_param) {
        font_size = (float)stack_param - text_width / *font_data;
      }
      text_width = (float)(int)(font_size + 0.95);
    }
    if (*(int *)(context_ptr + 0x1a0) == 0) {
      stack_buffer1 = 0xd;
      *(float *)(context_ptr + 0x100) =
           (float)(int)(*(float *)(render_data + 0x166c) * 0.5) + *(float *)(context_ptr + 0x100);
      position_x = *(float *)(render_data + 0x166c);
      position_y = *(float *)(render_data + 0x1670);
      stack_buffer2 = *(int32_t *)(render_data + 0x166c);
      stack_buffer3 = *(int32_t *)(render_data + 0x1670);
      FUN_18013e000(render_data + 0x1b90,&stack_buffer1);
      *(float *)(render_data + 0x166c) = position_x + position_x;
      *(float *)(render_data + 0x1670) = position_y + position_y;
      stack_param = (uint64_t)(uint)text_width;
      is_enabled = FUN_180119960(text_data,0,0x1000,&stack_param);
      FUN_18012dad0(1);
      *(float *)(context_ptr + 0x100) =
           *(float *)(context_ptr + 0x100) - (float)(int)(*(float *)(render_data + 0x166c) * 0.5);
    }
    else {
      func_0x00018011aa50(context_ptr + 0x288);
      font_data = (float *)func_0x00018012df80(&stack_param);
      text_width = *font_data - extraout_XMM0_Da;
      stack_param = (uint64_t)(uint)extraout_XMM0_Da;
      if (text_width <= 0.0) {
        text_width = 0.0;
      }
      is_enabled = FUN_180119960(text_data,0,0x3000,&stack_param);
      if (effect_flag != '\0') {
        font_size = *(float *)(render_data + 0x19f8);
        position_z = *(float *)(context_ptr + 0x2a0);
        stack_buffer1 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x16c8);
        stack_buffer2 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x16cc);
        stack_buffer3 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x16d0);
        stack_buffer4 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x16d4) * *(float *)(SYSTEM_DATA_MANAGER_A + 0x1628);
        render_flags = func_0x000180121e20(&stack_buffer1);
        FUN_180122f40(CONCAT44(font_size * 0.067 + position_y,text_width + position_z + font_size * 0.4 + position_x),render_flags,
                      font_size * 0.866);
      }
    }
    result = (uint64_t)is_enabled;
  }
  else {
    result = result & 0xffffffffffffff00;
  }
  return result;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/**
 * 函数：render_text_element
 * 功能：渲染文本元素，处理单个文本元素的渲染
 * 这个函数负责渲染单个文本元素，支持多种渲染模式
 */
int8_t render_text_element(void)

{
  float position_x;
  float position_y;
  float position_z;
  int8_t result;
  int32_t render_flags;
  char *text_ptr;
  float *font_data;
  int64_t context_ptr;
  char *string_data;
  int64_t render_context;
  char effect_flag;
  float font_size;
  uint64_t stack_param1;
  uint64_t extraout_XMM0_Qa;
  float text_width;
  int32_t stack_param2;
  int32_t stack_param3;
  int32_t stack_param4;
  float stack_param5;
  int32_t stack_param6;
  int32_t stack_param7;
  int32_t stack_param8;
  float stack_param9;
  
  position_x = *(float *)(render_context + 0x100);
  position_y = *(float *)(render_context + 0x104);
  text_ptr = string_data;
  if (string_data != (char *)0xffffffffffffffff) {
    while (*text_ptr != '\0') {
      if (((*text_ptr == '#') && (text_ptr[1] == '#')) ||
         (text_ptr = text_ptr + 1, text_ptr == (char *)0xffffffffffffffff)) break;
    }
  }
  font_data = *(float **)(context_ptr + 0x19f0);
  text_width = *(float *)(context_ptr + 0x19f8);
  if (string_data == text_ptr) {
    text_width = 0.0;
  }
  else {
    FUN_180297340(font_data,&stack0x000000d8,text_width,in_R9,0xbf800000);
    font_size = stack_param9;
    if (0.0 < stack_param9) {
      font_size = stack_param9 - text_width / *font_data;
    }
    text_width = (float)(int)(font_size + 0.95);
  }
  if (*(int *)(render_context + 0x1a0) == 0) {
    stack_param2 = 0xd;
    *(float *)(render_context + 0x100) =
         (float)(int)(*(float *)(context_ptr + 0x166c) * 0.5) + *(float *)(render_context + 0x100);
    position_x = *(float *)(context_ptr + 0x166c);
    position_y = *(float *)(context_ptr + 0x1670);
    stack_param3 = *(int32_t *)(context_ptr + 0x166c);
    stack_param4 = *(int32_t *)(context_ptr + 0x1670);
    stack_param1 = FUN_18013e000(context_ptr + 0x1b90,&stack0x00000040);
    *(float *)(context_ptr + 0x166c) = position_x + position_x;
    *(float *)(context_ptr + 0x1670) = position_y + position_y;
    stack_param8 = 0;
    stack_param9 = text_width;
    result = FUN_180119960(stack_param1,0,0x1000,&stack0x000000d8);
    FUN_18012dad0(1);
    *(float *)(render_context + 0x100) =
         *(float *)(render_context + 0x100) - (float)(int)(*(float *)(context_ptr + 0x166c) * 0.5);
  }
  else {
    func_0x00018011aa50(render_context + 0x288);
    font_data = (float *)func_0x00018012df80(&stack0x000000d8);
    stack_param9 = (float)extraout_XMM0_Qa;
    text_width = *font_data - stack_param9;
    stack_param8 = 0;
    if (text_width <= 0.0) {
      text_width = 0.0;
    }
    result = FUN_180119960(extraout_XMM0_Qa,0,0x3000,&stack0x000000d8);
    if (effect_flag != '\0') {
      font_size = *(float *)(context_ptr + 0x19f8);
      position_z = *(float *)(render_context + 0x2a0);
      stack_param2 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x16c8);
      stack_param3 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x16cc);
      stack_param4 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x16d0);
      stack_param5 =
           *(float *)(SYSTEM_DATA_MANAGER_A + 0x16d4) * *(float *)(SYSTEM_DATA_MANAGER_A + 0x1628);
      render_flags = func_0x000180121e20(&stack0x00000040);
      FUN_180122f40(CONCAT44(font_size * 0.067 + position_y,text_width + position_z + font_size * 0.4 + position_x),render_flags,
                    font_size * 0.866);
    }
  }
  return result;
}



/**
 * 函数：simple_render_operation
 * 功能：执行简单的渲染操作，处理基础渲染任务
 * 这是一个简化的渲染操作函数，用于执行基础的渲染任务
 */
int8_t simple_render_operation(void)

{
  float position_x;
  float position_y;
  int8_t result;
  int64_t context_ptr;
  int64_t render_context;
  uint64_t stack_param1;
  int32_t stack_param2;
  int32_t stack_param3;
  int32_t stack_param4;
  int32_t stack_param5;
  int32_t stack_param6;
  
  stack_param2 = 0xd;
  *(float *)(render_context + 0x100) =
       (float)(int)(*(float *)(context_ptr + 0x166c) * 0.5) + *(float *)(render_context + 0x100);
  position_x = *(float *)(context_ptr + 0x166c);
  position_y = *(float *)(context_ptr + 0x1670);
  stack_param3 = *(int32_t *)(context_ptr + 0x166c);
  stack_param4 = *(int32_t *)(context_ptr + 0x1670);
  stack_param1 = FUN_18013e000(context_ptr + 0x1b90,&stack0x00000040);
  *(float *)(context_ptr + 0x166c) = position_x + position_x;
  *(float *)(context_ptr + 0x1670) = position_y + position_y;
  stack_param6 = 0;
  result = FUN_180119960(stack_param1,0,0x1000,&stack0x000000d8);
  FUN_18012dad0(1);
  *(float *)(render_context + 0x100) =
       *(float *)(render_context + 0x100) - (float)(int)(*(float *)(context_ptr + 0x166c) * 0.5);
  return result;
}





