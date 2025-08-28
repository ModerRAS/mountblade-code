#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part101.c - 核心引擎模块第101部分
// 包含23个函数，主要处理内存分配、数组操作、文本渲染等功能

// 全局变量
longlong _DAT;  // 引擎全局上下文指针
char _DAT;      // 常量字符串指针

// 函数：引擎初始化完成检查
void check_engine_initialization_complete(void)
{
  // 空函数，可能作为初始化完成标记
  return;
}

// 函数：重置引擎状态
void reset_engine_state(void)
{
  // 空函数，用于重置引擎状态
  return;
}

// 函数：计算文本渲染宽度
float * calculate_text_rendering_width(float *output_result, char *text_start, char render_flag)
{
  float *font_data;
  longlong engine_context;
  char *text_end;
  float line_height;
  float max_width;
  float text_width;
  float char_spacing;
  float stack_temp1;
  float stack_temp2;
  
  engine_context = _DAT;
  text_end = text_start;
  
  // 查找文本结束位置（跳过注释标记##）
  if (text_start != (char *)0xffffffffffffffff) {
    while( true ) {
      if (*text_end == '\0') break;
      if (((*text_end == '#') && (text_end[1] == '#')) ||
         (text_end = text_end + 1, text_end == (char *)0xffffffffffffffff)) break;
    }
  }
  
  font_data = *(float **)(_DAT + 0x19f0);
  max_width = *(float *)(_DAT + 0x19f8);
  
  if (text_start == text_end) {
    text_width = 0.0;
    stack_temp2 = max_width;
  }
  else {
    // 计算文本宽度
    FUN_180297340(font_data, &stack_temp1, max_width, 0x7f7fffff, 0xbf800000, text_start, text_end, 0);
    if (0.0 < stack_temp1) {
      stack_temp1 = stack_temp1 - max_width / *font_data;
    }
    text_width = (float)(int)(stack_temp1 + 0.95);
  }
  
  if (render_flag == '\0') {
    max_width = 1.0;
  }
  else {
    max_width = *(float *)(engine_context + 0x1674) + *(float *)(engine_context + 0x19f8);
  }
  
  char_spacing = *(float *)(engine_context + 0x19f8) * 20.0;
  max_width = *(float *)(engine_context + 0x165c) + max_width + *(float *)(engine_context + 0x165c) + text_width;
  output_result[1] = *(float *)(engine_context + 0x1660) + *(float *)(engine_context + 0x1660) + stack_temp2;
  
  if (char_spacing <= max_width) {
    max_width = char_spacing;
  }
  
  *output_result = max_width;
  return output_result;
}

// 函数：添加渲染元素到队列
void add_render_element_to_queue(longlong render_context, float *position_data, uint render_flags, int32_t render_type)
{
  int *queue_count;
  int current_count;
  longlong engine_context;
  int queue_capacity;
  int new_capacity;
  int32_t temp_flags;
  int element_size;
  float y_offset;
  float x_position;
  float z_position;
  float height;
  float stack_temp1;
  float stack_temp2;
  uint processed_flags;
  int32_t stack_flags[3];
  float stack_float;
  
  engine_context = _DAT;
  stack_temp1 = *position_data;
  z_position = position_data[1];
  height = (position_data[2] - stack_temp1) * 0.5 - 1.0;
  
  // 限制高度范围
  if (*(float *)(_DAT + 0x169c) <= height) {
    height = *(float *)(_DAT + 0x169c);
  }
  if (height <= 0.0) {
    height = 0.0;
  }
  
  // 处理渲染标志
  if ((render_flags >> 0x15 & 1) == 0) {
    y_offset = -1.0;
  }
  else {
    y_offset = 0.0;
  }
  y_offset = y_offset + position_data[3];
  
  queue_count = (int *)(render_context + 0x80);
  current_count = *queue_count;
  element_size = 8;
  queue_capacity = *(int *)(render_context + 0x84);
  stack_temp2 = y_offset;
  
  // 扩展队列容量
  if (current_count == queue_capacity) {
    if (queue_capacity == 0) {
      queue_capacity = 8;
    }
    else {
      queue_capacity = queue_capacity / 2 + queue_capacity;
    }
    new_capacity = current_count + 1;
    if (current_count + 1 < queue_capacity) {
      new_capacity = queue_capacity;
    }
    FUN_18011dc70(queue_count, new_capacity);
    current_count = *queue_count;
  }
  
  z_position = z_position + 1.0 + height;
  *(ulonglong *)(*(longlong *)(render_context + 0x88) + (longlong)current_count * 8) =
       CONCAT44(stack_temp2, stack_temp1);
  *queue_count = *queue_count + 1;
  
  stack_temp1 = height + *position_data;
  stack_temp2 = z_position;
  FUN_180293730(render_context, &stack_temp1, height, 6, 9);
  
  stack_temp1 = position_data[2] - height;
  processed_flags = 0;
  stack_temp2 = z_position;
  FUN_180293730(render_context, &stack_temp1, height, 9, 0xc);
  
  stack_temp1 = position_data[2];
  current_count = *queue_count;
  queue_capacity = *(int *)(render_context + 0x84);
  stack_temp2 = y_offset;
  
  // 再次扩展队列容量
  if (current_count == queue_capacity) {
    if (queue_capacity != 0) {
      element_size = queue_capacity + queue_capacity / 2;
    }
    queue_capacity = current_count + 1;
    if (current_count + 1 < element_size) {
      queue_capacity = element_size;
    }
    FUN_18011dc70(queue_count, queue_capacity);
    current_count = *queue_count;
  }
  
  *(ulonglong *)(*(longlong *)(render_context + 0x88) + (longlong)current_count * 8) =
       CONCAT44(stack_temp2, stack_temp1);
  *queue_count = *queue_count + 1;
  
  FUN_180293190(render_context, *(uint64_t *)(render_context + 0x88), *queue_count, render_type);
  
  height = *(float *)(engine_context + 0x16a0);
  if (0.0 < height) {
    stack_flags[0] = *(int32_t *)(_DAT + 0x1718);
    stack_flags[1] = *(int32_t *)(_DAT + 0x171c);
    stack_flags[2] = *(int32_t *)(_DAT + 0x1720);
    stack_float = *(float *)(_DAT + 0x1724) * *(float *)(_DAT + 0x1628);
    temp_flags = func_0x000180121e20(&stack_flags);
    FUN_1802923e0(render_context, *(uint64_t *)(render_context + 0x88), *queue_count, temp_flags, processed_flags & 0xffffff00, height);
  }
  
  *queue_count = 0;
  return;
}

// 函数：处理文本布局
ulonglong process_text_layout(longlong render_context, float *position_data, uint layout_flags, char *text_start, int text_id, int font_id)
{
  int32_t temp_var1;
  longlong context_var1;
  longlong context_var2;
  uint64_t temp_var4;
  uint64_t temp_var5;
  uint64_t temp_var6;
  uint64_t temp_var7;
  char char_flag;
  int int_var1;
  int32_t temp_var10;
  char *text_current;
  ulonglong result;
  float *font_data;
  char *text_end;
  int char_count;
  longlong render_target;
  bool text_found;
  float text_width;
  float x_position;
  float y_position;
  float width;
  float height;
  uint64_t stack_temp1;
  uint stack_flags;
  float stack_float1;
  float stack_float2;
  ulonglong stack_ulong;
  uint64_t stack_render_params[4];  // 渲染参数数组
  float stack_float3;
  float stack_float4;
  float stack_float5;
  float stack_float6;
  float stack_float7;
  
  context_var2 = _DAT;
  text_current = text_start;
  
  // 查找文本结束位置
  if (text_start != (char *)0xffffffffffffffff) {
    while (*text_current != '\0') {
      if (((*text_current == '#') && (text_current[1] == '#')) ||
         (text_current = text_current + 1, text_current == (char *)0xffffffffffffffff)) break;
    }
  }
  
  font_data = *(float **)(_DAT + 0x19f0);
  char_count = 0;
  y_position = *(float *)(_DAT + 0x19f8);
  stack_flags = layout_flags;
  
  if (text_start == text_current) {
    x_position = 0.0;
    stack_float2 = y_position;
  }
  else {
    stack_ulong = CONCAT44((int)(stack_ulong >> 0x20), 0xbf800000);
    FUN_180297340(font_data, &stack_temp1, y_position, 0x7f7fffff, stack_ulong, text_start, text_current, 0);
    x_position = (float)stack_temp1;
    if (0.0 < (float)stack_temp1) {
      x_position = (float)stack_temp1 - y_position / *font_data;
    }
    text_current = (char *)(ulonglong)(uint)(int)(x_position + 0.95);
    stack_float2 = stack_temp1._4_4_;
    x_position = (float)(int)(x_position + 0.95);
  }
  
  if (1.0 < position_data[2] - *position_data) {
    y_position = position_data[2] - *(float *)(context_var2 + 0x165c);
    height = *position_data + *(float *)(context_var2 + 0x165c);
    stack_float6 = position_data[1] + *(float *)(context_var2 + 0x1660);
    stack_float7 = position_data[3];
    render_target = context_var2;
    stack_float3 = x_position;
    stack_float5 = height;
    stack_float4 = y_position;
    
    if ((stack_flags & 1) != 0) {
      font_data = *(float **)(context_var2 + 0x19f0);
      y_position = *(float *)(context_var2 + 0x19f8);
      FUN_180297340(font_data, &stack_temp1, y_position, 0x7f7fffff, 0xbf800000, &_DAT, 0, 0);
      if (0.0 < (float)stack_temp1) {
        stack_temp1._0_4_ = (float)stack_temp1 - y_position / *font_data;
      }
      y_position = (float)stack_temp1 + 0.95;
      stack_temp1 = 0;
      y_position = y_position - (float)(int)y_position;
      height = *(float *)(context_var2 + 0x165c) + *position_data + x_position + 2.0;
      if (y_position <= height) {
        height = y_position;
      }
      stack_ulong = 0;
      stack_float1 = position_data[2] - *(float *)(context_var2 + 0x165c);
      stack_render_params[0] = (char *)CONCAT44((position_data[1] + *(float *)(context_var2 + 0x1660)) - (float)(int)(*(float *)(context_var2 + 0x19f8) * 0.25), height);
      stack_float3 = position_data[3] - *(float *)(context_var2 + 0x1660);
      stack_float4 = y_position;
      FUN_1801224c0(render_context, &stack_render_params[0], &stack_float1, &_DAT, 0, 0, &stack_temp1, 0);
      render_target = _DAT;
    }
    
    result = stack_temp1;
    stack_float1 = (float)((uint)stack_float1 & 0xffffff00);
    stack_temp1 = stack_temp1 & 0xffffffffffffff00;
    
    if ((font_id != 0) &&
       (((*(int *)(context_var2 + 0x1b18) == text_id || (*(int *)(context_var2 + 0x1b18) == font_id)) ||
        (*(int *)(context_var2 + 0x1b2c) == font_id))) {
      render_target = *(longlong *)(render_target + 0x1af8);
      y_position = *(float *)(context_var2 + 0x19f8) * 0.5;
      stack_temp1 = CONCAT71(SUB87(result, 1), 1);
      temp_var10 = *(int32_t *)(render_target + 0x144);
      temp_var1 = *(int32_t *)(render_target + 0x148);
      temp_var4 = *(uint64_t *)(render_target + 0x14c);
      temp_var5 = *(uint64_t *)(render_target + 0x154);
      temp_var6 = *(uint64_t *)(render_target + 0x15c);
      temp_var7 = *(uint64_t *)(render_target + 0x164);
      stack_render_params[0] = (char *)CONCAT44(position_data[1] + *(float *)(context_var2 + 0x1660) + y_position, (position_data[2] - *(float *)(context_var2 + 0x165c)) - y_position);
      char_flag = FUN_18010fd40(font_id, &stack_render_params[0], y_position);
      render_target = _DAT;
      stack_float1 = (float)((uint)stack_float1 & 0xff);
      if (char_flag != '\0') {
        stack_float1 = 1.4013e-45;
      }
      context_var1 = *(longlong *)(_DAT + 0x1af8);
      *(int32_t *)(context_var1 + 0x144) = temp_var10;
      *(int32_t *)(context_var1 + 0x148) = temp_var1;
      *(uint64_t *)(context_var1 + 0x14c) = temp_var4;
      *(uint64_t *)(context_var1 + 0x154) = temp_var5;
      *(uint64_t *)(context_var1 + 0x15c) = temp_var6;
      *(uint64_t *)(context_var1 + 0x164) = temp_var7;
      if (((stack_flags & 4) == 0) && (*(float *)(render_target + 0x42c) == 0.0)) {
        stack_float1 = 1.4013e-45;
      }
      stack_float4 = y_position - (y_position + y_position);
    }
    
    text_current = text_start;
    if (text_start != (char *)0xffffffffffffffff) {
      while (*text_current != '\0') {
        if (((*text_current == '#') && (text_current[1] == '#')) ||
           (text_current = text_current + 1, text_current == (char *)0xffffffffffffffff)) break;
      }
    }
    
    if (x_position <= y_position - height) {
      stack_temp1 = 0;
      FUN_1801224c0(render_context, &stack_float5, &stack_float4, text_start, text_current, &stack_float3, &stack_temp1, 0);
    }
    else {
      result = stack_ulong & 0xffffffff00000000;
      stack_render_params[0] = (char *)0x0;
      font_data = (float *)FUN_180297340(*(uint64_t *)(render_target + 0x19f0), &stack_render_params[1], *(int32_t *)(render_target + 0x19f8), (y_position - height) - 4.0, result, text_start, text_current, &stack_undefined[0]);
      y_position = *font_data;
      text_found = stack_render_params[0] == text_start;
      text_end = stack_render_params[0];
      if (text_found) {
        if (stack_render_params[0] < text_current) {
          int_var1 = FUN_180121550(&stack_undefined[0], text_start, text_current);
          text_end = text_start + int_var1;
          result = result & 0xffffffff00000000;
          font_data = (float *)FUN_180297340(*(uint64_t *)(render_target + 0x19f0), &stack_render_params[1], *(int32_t *)(render_target + 0x19f8), 0x7f7fffff, result, text_start, text_end, 0);
          y_position = *font_data;
        }
        text_found = text_end == text_start;
      }
      text_current = text_end;
      if (text_start <= text_end && !text_found) {
        do {
          if ((text_end[-1] != ' ') && (text_current = text_end, text_end[-1] != '\t')) break;
          text_current = text_end + -1;
          result = result & 0xffffffff00000000;
          font_data = (float *)FUN_180297340(*(uint64_t *)(render_target + 0x19f0), &stack_render_params[1], *(int32_t *)(render_target + 0x19f8), 0x7f7fffff, result, text_current, text_end, 0);
          y_position = y_position - *font_data;
          text_end = text_current;
        } while (text_start < text_current);
      }
      stack_render_params[0] = (char *)0x0;
      FUN_1801224c0(render_context, &stack_float5, &stack_float4, text_start, text_current, &stack_float3, &stack_undefined[0], 0);
      y_position = stack_float5 + y_position + 1.0;
      if (((char)stack_temp1 == '\0') && (y_position + 5.0 < position_data[2] || y_position + 5.0 == position_data[2])) {
        stack_undefined[1] = *(int32_t *)(_DAT + 0x16c8);
        stack_undefined[2] = *(int32_t *)(_DAT + 0x16cc);
        stack_undefined[3] = *(int32_t *)(_DAT + 0x16d0);
        stack_float3 = *(float *)(_DAT + 0x16d4) * *(float *)(_DAT + 0x1628);
        temp_var1 = func_0x000180121e20(&stack_render_params[1]);
        render_target = *(longlong *)(*(longlong *)(render_context + 0x38) + 8);
        stack_float2 = (float)(int)((*(float *)(render_target + 0x60) + *(float *)(render_target + 0xc)) - 0.5) + stack_float6;
        stack_temp1 = (ulonglong)(uint)(stack_float2 + 1.0) << 0x20;
        do {
          text_current = (char *)((ulonglong)text_current & 0xffffffff00000000);
          x_position = (float)char_count + (float)char_count;
          stack_float3 = x_position + y_position;
          stack_temp1 = CONCAT44(stack_temp1._4_4_, y_position + 1.0 + x_position);
          FUN_180293f50(render_context, &stack_float3, &stack_temp1, temp_var1, text_current, 0xf);
          char_count = char_count + 1;
        } while (char_count < 3);
      }
    }
    result = (ulonglong)stack_float1._0_1_;
  }
  else {
    result = (ulonglong)text_current & 0xffffffffffffff00;
  }
  return result;
}

// 函数：处理字符渲染
int8_t process_character_rendering(float param_1, float param_2, ulonglong param_3, uint64_t param_4)
{
  float temp_float1;
  float temp_float2;
  float temp_float3;
  byte byte_flag;
  int32_t temp_var5;
  int32_t temp_var6;
  longlong context_var1;
  longlong context_var2;
  uint64_t temp_var9;
  uint64_t temp_var10;
  uint64_t temp_var11;
  char char_flag1;
  int int_var1;
  int32_t temp_var14;
  float *font_data;
  char *text_ptr;
  longlong stack_context;
  char char_flag2;
  uint uint_var1;
  char *text_ptr2;
  longlong text_id;
  longlong font_id;
  char *text_start;
  float *position_data;
  longlong render_context;
  bool bool_flag;
  float char_width;
  float line_height;
  uint64_t temp_result;
  uint64_t temp_result2;
  uint64_t temp_result3;
  float stack_float1;
  float stack_float2;
  float stack_float3;
  float stack_float4;
  float stack_float5;
  float stack_float6;
  float stack_float7;
  float stack_float8;
  int32_t stack_flags[3];
  float stack_float9;
  
  temp_var14 = (int32_t)((ulonglong)temp_result >> 0x20);
  stack_float8 = temp_result3 - param_2;
  param_2 = temp_result2 + param_2;
  stack_float7 = param_1 + *(float *)(render_context + 0x1660);
  *(float *)(stack_context + -0x7d) = position_data[3];
  stack_float6 = param_2;
  stack_float8 = stack_float8;
  
  if ((param_3 & 1) != 0) {
    font_data = *(float **)(render_context + 0x19f0);
    line_height = *(float *)(render_context + 0x19f8);
    FUN_180297340(font_data, stack_context + 0x5f, line_height, param_4, CONCAT44(temp_var14, temp_result._0_4_));
    char_width = *(float *)(stack_context + 0x5f);
    if (temp_result2 < char_width) {
      char_width = char_width - line_height / *font_data;
    }
    line_height = *(float *)(font_id + 0x165c);
    temp_float1 = position_data[1];
    temp_float2 = *(float *)(font_id + 0x1660);
    temp_float3 = *(float *)(font_id + 0x19f8);
    *(char **)(stack_context + 0x5f) = text_ptr2;
    stack_float8 = stack_float8 - (float)(int)(char_width + 0.95);
    char_width = line_height + *position_data + temp_result._0_4_ + 2.0;
    if (stack_float8 <= char_width) {
      char_width = stack_float8;
    }
    line_height = position_data[2] - line_height;
    text_start = (char *)CONCAT44((temp_float1 + temp_float2) - (float)(int)(temp_float3 * 0.25), char_width);
    char_width = position_data[3];
    temp_float1 = *(float *)(font_id + 0x1660);
    *(float *)(stack_context + 0x6f) = line_height;
    *(float *)(stack_context + 0x73) = char_width - temp_float1;
    text_ptr = text_ptr2;
    stack_float8 = stack_float8;
    FUN_1801224c0(line_height, &text_start, stack_context + 0x6f, &_DAT);
    temp_var14 = (int32_t)((ulonglong)text_ptr >> 0x20);
    render_context = _DAT;
  }
  
  int_var1 = *(int *)(stack_context + 0x7f);
  char_flag2 = (char)text_ptr2;
  *(char *)(stack_context + 0x6f) = char_flag2;
  *(char *)(stack_context + 0x5f) = char_flag2;
  
  if ((int_var1 != 0) &&
     (((*(int *)(font_id + 0x1b18) == *(int *)(stack_context + 0x77) ||
       (*(int *)(font_id + 0x1b18) == int_var1)) || (*(int *)(font_id + 0x1b2c) == int_var1)))) {
    context_var1 = *(longlong *)(render_context + 0x1af8);
    line_height = *(float *)(font_id + 0x19f8) * 0.5;
    *(int8_t *)(stack_context + 0x5f) = 1;
    temp_var5 = *(int32_t *)(context_var1 + 0x144);
    temp_var6 = *(int32_t *)(context_var1 + 0x148);
    temp_result = *(uint64_t *)(context_var1 + 0x14c);
    temp_var9 = *(uint64_t *)(context_var1 + 0x154);
    temp_var10 = *(uint64_t *)(context_var1 + 0x15c);
    temp_var11 = *(uint64_t *)(context_var1 + 0x164);
    text_start = (char *)CONCAT44(position_data[1] + *(float *)(font_id + 0x1660) + line_height, (position_data[2] - *(float *)(font_id + 0x165c)) - line_height);
    char_flag1 = FUN_18010fd40(int_var1, &text_start, line_height);
    context_var1 = _DAT;
    uint_var1 = *(uint *)(stack_context + 0x6f) & 0xff;
    if (char_flag1 != '\0') {
      uint_var1 = 1;
    }
    byte_flag = *(byte *)(stack_context + 0x67);
    *(uint *)(stack_context + 0x6f) = uint_var1;
    context_var2 = *(longlong *)(context_var1 + 0x1af8);
    *(int32_t *)(context_var2 + 0x144) = temp_var5;
    *(int32_t *)(context_var2 + 0x148) = temp_var6;
    *(uint64_t *)(context_var2 + 0x14c) = temp_result;
    *(uint64_t *)(context_var2 + 0x154) = temp_var9;
    *(uint64_t *)(context_var2 + 0x15c) = temp_var10;
    *(uint64_t *)(context_var2 + 0x164) = temp_var11;
    if (((byte_flag & 4) == 0) && (*(float *)(context_var1 + 0x42c) == temp_result2)) {
      *(int8_t *)(stack_context + 0x6f) = 1;
    }
    stack_float8 = stack_float8 - (line_height + line_height);
  }
  
  text_ptr = text_start;
  if (text_start != (char *)0xffffffffffffffff) {
    do {
      if ((*text_ptr == '\0') || ((*text_ptr == '#' && (text_ptr[1] == '#')))) break;
      text_ptr = text_ptr + 1;
    } while (text_ptr != (char *)0xffffffffffffffff);
  }
  
  if (temp_result._0_4_ <= stack_float8 - param_2) {
    *(char **)(stack_context + 0x5f) = text_ptr2;
    FUN_1801224c0();
  }
  else {
    text_start = text_ptr2;
    font_data = (float *)FUN_180297340(*(uint64_t *)(font_id + 0x19f0), &stack_flags[0], *(int32_t *)(font_id + 0x19f8), (stack_float8 - param_2) - 4.0, CONCAT44(temp_var14, temp_result2));
    stack_float8 = *font_data;
    bool_flag = text_start == text_start;
    text_ptr = text_start;
    temp_result = temp_result2;
    if (bool_flag) {
      if (text_start < text_ptr) {
        int_var1 = FUN_180121550(&stack_flags[0]);
        text_ptr = text_start + int_var1;
        font_data = (float *)FUN_180297340(*(uint64_t *)(font_id + 0x19f0), &stack_flags[0], *(int32_t *)(font_id + 0x19f8));
        stack_float8 = *font_data;
        temp_result = temp_result3;
      }
      bool_flag = text_ptr == text_start;
    }
    if (text_start <= text_ptr && !bool_flag) {
      do {
        if ((text_ptr[-1] != ' ') && (text_ptr[-1] != '\t')) break;
        text_ptr = text_ptr + -1;
        font_data = (float *)FUN_180297340(*(uint64_t *)(font_id + 0x19f0), &stack_flags[0], *(int32_t *)(font_id + 0x19f8));
        stack_float8 = stack_float8 - *font_data;
        temp_result = temp_result._0_4_;
      } while (text_start < text_ptr);
    }
    FUN_1801224c0(temp_result, &stack_flags[1], &stack_flags[2]);
    stack_float8 = stack_float6 + stack_float8 + 1.0;
    if ((*(char *)(stack_context + 0x5f) == char_flag2) &&
       (stack_float8 + 5.0 < position_data[2] || stack_float8 + 5.0 == position_data[2])) {
      stack_flags[0] = *(int32_t *)(_DAT + 0x16c8);
      stack_flags[1] = *(int32_t *)(_DAT + 0x16cc);
      stack_flags[2] = *(int32_t *)(_DAT + 0x16d0);
      stack_float9 = *(float *)(_DAT + 0x16d4) * *(float *)(_DAT + 0x1628);
      temp_var14 = func_0x000180121e20(&stack_flags[0]);
      context_var1 = *(longlong *)(*(longlong *)(render_context + 0x38) + 8);
      stack_float5 = (float)(int)((*(float *)(context_var1 + 0x60) + *(float *)(context_var1 + 0xc)) - 0.5) + stack_float7;
      *(float *)(stack_context + 99) = stack_float5 + 1.0;
      do {
        stack_float4 = (float)(int)text_ptr2;
        stack_float4 = stack_float4 + stack_float4;
        line_height = stack_float8 + 1.0 + stack_float4;
        stack_float4 = stack_float4 + stack_float8;
        *(float *)(stack_context + 0x5f) = line_height;
        FUN_180293f50(line_height, &stack_float4, stack_context + 0x5f, temp_var14, temp_result2);
        uint_var1 = (int)text_ptr2 + 1;
        text_ptr2 = (char *)(ulonglong)uint_var1;
      } while ((int)uint_var1 < 3);
    }
  }
  return *(int8_t *)(stack_context + 0x6f);
}

// 函数：清理渲染缓存
void clear_render_cache(void)
{
  // 空函数，用于清理渲染缓存
  return;
}

// 函数：释放渲染资源
void free_render_resources(longlong resource_handle, uint64_t param_2, uint64_t param_3, uint64_t param_4)
{
  longlong resource_data;
  
  resource_data = *(longlong *)(resource_handle + 8);
  if (resource_data != 0) {
    if (_DAT != 0) {
      *(int *)(_DAT + 0x3a8) = *(int *)(_DAT + 0x3a8) + -1;
    }
    // 警告：子函数不返回
    FUN_180059ba0(resource_data, _DAT, param_3, param_4, 0xfffffffffffffffe);
  }
  return;
}

// 函数：向整型数组添加元素
void add_element_to_int_array(int *array_ptr, int32_t *element)
{
  int current_size;
  int capacity;
  int new_size;
  int new_capacity;
  
  current_size = *array_ptr;
  capacity = array_ptr[1];
  
  if (current_size == capacity) {
    if (capacity == 0) {
      capacity = 8;
    }
    else {
      capacity = capacity / 2 + capacity;
    }
    new_size = current_size + 1;
    if (current_size + 1 < capacity) {
      new_size = capacity;
    }
    FUN_18011dbd0(array_ptr, new_size);
    current_size = *array_ptr;
  }
  
  *(int32_t *)(*(longlong *)(array_ptr + 2) + (longlong)current_size * 4) = *element;
  *array_ptr = *array_ptr + 1;
  return;
}

// 函数：向64位数组添加元素
void add_element_to_uint64_array(int *array_ptr, uint64_t *element)
{
  int current_size;
  int capacity;
  int new_size;
  int new_capacity;
  
  current_size = *array_ptr;
  capacity = array_ptr[1];
  
  if (current_size == capacity) {
    if (capacity == 0) {
      capacity = 8;
    }
    else {
      capacity = capacity / 2 + capacity;
    }
    new_size = current_size + 1;
    if (current_size + 1 < capacity) {
      new_size = capacity;
    }
    FUN_18011dc70(array_ptr, new_size);
    current_size = *array_ptr;
  }
  
  *(uint64_t *)(*(longlong *)(array_ptr + 2) + (longlong)current_size * 8) = *element;
  *array_ptr = *array_ptr + 1;
  return;
}

// 函数：调整字节数组容量
void resize_byte_array_capacity(int *array_ptr, int new_capacity)
{
  uint64_t new_buffer;
  
  if (array_ptr[1] < new_capacity) {
    if (_DAT != 0) {
      *(int *)(_DAT + 0x3a8) = *(int *)(_DAT + 0x3a8) + 1;
    }
    new_buffer = func_0x000180120ce0((longlong)new_capacity, _DAT);
    if (*(longlong *)(array_ptr + 2) != 0) {
      // 警告：子函数不返回
      memcpy(new_buffer, *(longlong *)(array_ptr + 2), (longlong)*array_ptr);
    }
    *(uint64_t *)(array_ptr + 2) = new_buffer;
    array_ptr[1] = new_capacity;
  }
  return;
}

// 函数：扩展字节数组
void expand_byte_array(void)
{
  longlong context_ptr;
  uint64_t new_buffer;
  int *array_ptr;
  int new_size;
  
  if (context_ptr != 0) {
    *(int *)(context_ptr + 0x3a8) = *(int *)(context_ptr + 0x3a8) + 1;
  }
  new_buffer = func_0x000180120ce0((longlong)new_size, _DAT);
  if (*(longlong *)(array_ptr + 2) != 0) {
    // 警告：子函数不返回
    memcpy(new_buffer, *(longlong *)(array_ptr + 2), (longlong)*array_ptr);
  }
  *(uint64_t *)(array_ptr + 2) = new_buffer;
  array_ptr[1] = new_size;
  return;
}

// 函数：初始化内存管理器
void initialize_memory_manager(void)
{
  // 空函数，用于初始化内存管理器
  return;
}

// 函数：设置数组大小
void set_array_size(int *array_ptr, int new_size)
{
  int current_capacity;
  int new_capacity;
  int temp_size;
  
  current_capacity = array_ptr[1];
  if (current_capacity < new_size) {
    if (current_capacity == 0) {
      current_capacity = 8;
    }
    else {
      current_capacity = current_capacity / 2 + current_capacity;
    }
    new_capacity = new_size;
    if (new_size < current_capacity) {
      new_capacity = current_capacity;
    }
    FUN_18011da00(array_ptr, new_capacity);
  }
  *array_ptr = new_size;
  return;
}

// 函数：确保数组容量
void ensure_array_capacity(int *array_ptr, int required_capacity)
{
  int current_capacity;
  int new_capacity;
  int temp_size;
  
  current_capacity = array_ptr[1];
  if (current_capacity < required_capacity) {
    if (current_capacity == 0) {
      current_capacity = 8;
    }
    else {
      current_capacity = current_capacity / 2 + current_capacity;
    }
    new_capacity = required_capacity;
    if (required_capacity < current_capacity) {
      new_capacity = current_capacity;
    }
    FUN_18011dd10(array_ptr, new_capacity);
  }
  *array_ptr = required_capacity;
  return;
}

// 函数：调整结构体数组容量
void resize_struct_array_capacity(int *array_ptr, int new_capacity)
{
  uint64_t new_buffer;
  
  if (array_ptr[1] < new_capacity) {
    if (_DAT != 0) {
      *(int *)(_DAT + 0x3a8) = *(int *)(_DAT + 0x3a8) + 1;
    }
    new_buffer = func_0x000180120ce0((longlong)new_capacity * 0x28, _DAT);
    if (*(longlong *)(array_ptr + 2) != 0) {
      // 警告：子函数不返回
      memcpy(new_buffer, *(longlong *)(array_ptr + 2), (longlong)*array_ptr * 0x28);
    }
    *(uint64_t *)(array_ptr + 2) = new_buffer;
    array_ptr[1] = new_capacity;
  }
  return;
}

// 函数：扩展结构体数组
void expand_struct_array(void)
{
  longlong context_ptr;
  uint64_t new_buffer;
  int *array_ptr;
  longlong new_size;
  
  if (context_ptr != 0) {
    *(int *)(context_ptr + 0x3a8) = *(int)(context_ptr + 0x3a8) + 1;
  }
  new_buffer = func_0x000180120ce0(new_size * 0x28, _DAT);
  if (*(longlong *)(array_ptr + 2) != 0) {
    // 警告：子函数不返回
    memcpy(new_buffer, *(longlong *)(array_ptr + 2), (longlong)*array_ptr * 0x28);
  }
  *(uint64_t *)(array_ptr + 2) = new_buffer;
  array_ptr[1] = (int)new_size;
  return;
}

// 函数：初始化渲染器
void initialize_renderer(void)
{
  // 空函数，用于初始化渲染器
  return;
}

// 函数：调整浮点数数组容量
void resize_float_array_capacity(int *array_ptr, int new_capacity)
{
  uint64_t new_buffer;
  
  if (array_ptr[1] < new_capacity) {
    if (_DAT != 0) {
      *(int *)(_DAT + 0x3a8) = *(int)(_DAT + 0x3a8) + 1;
    }
    new_buffer = func_0x000180120ce0((longlong)new_capacity << 2, _DAT);
    if (*(longlong *)(array_ptr + 2) != 0) {
      // 警告：子函数不返回
      memcpy(new_buffer, *(longlong *)(array_ptr + 2), (longlong)*array_ptr << 2);
    }
    *(uint64_t *)(array_ptr + 2) = new_buffer;
    array_ptr[1] = new_capacity;
  }
  return;
}

// 函数：扩展浮点数数组
void expand_float_array(void)
{
  longlong context_ptr;
  uint64_t new_buffer;
  int *array_ptr;
  longlong new_size;
  
  if (context_ptr != 0) {
    *(int *)(context_ptr + 0x3a8) = *(int)(context_ptr + 0x3a8) + 1;
  }
  new_buffer = func_0x000180120ce0(new_size << 2, _DAT);
  if (*(longlong *)(array_ptr + 2) != 0) {
    // 警告：子函数不返回
    memcpy(new_buffer, *(longlong *)(array_ptr + 2), (longlong)*array_ptr << 2);
  }
  *(uint64_t *)(array_ptr + 2) = new_buffer;
  array_ptr[1] = (int)new_size;
  return;
}

// 函数：清理资源
void cleanup_resources(void)
{
  // 空函数，用于清理资源
  return;
}

// 函数：调整64位数组容量
void resize_uint64_array_capacity(int *array_ptr, int new_capacity)
{
  uint64_t new_buffer;
  
  if (array_ptr[1] < new_capacity) {
    if (_DAT != 0) {
      *(int *)(_DAT + 0x3a8) = *(int)(_DAT + 0x3a8) + 1;
    }
    new_buffer = func_0x000180120ce0((longlong)new_capacity << 3, _DAT);
    if (*(longlong *)(array_ptr + 2) != 0) {
      // 警告：子函数不返回
      memcpy(new_buffer, *(longlong *)(array_ptr + 2), (longlong)*array_ptr << 3);
    }
    *(uint64_t *)(array_ptr + 2) = new_buffer;
    array_ptr[1] = new_capacity;
  }
  return;
}

// 函数：扩展64位数组
void expand_uint64_array(void)
{
  longlong context_ptr;
  uint64_t new_buffer;
  int *array_ptr;
  longlong new_size;
  
  if (context_ptr != 0) {
    *(int *)(context_ptr + 0x3a8) = *(int)(context_ptr + 0x3a8) + 1;
  }
  new_buffer = func_0x000180120ce0(new_size << 3, _DAT);
  if (*(longlong *)(array_ptr + 2) != 0) {
    // 警告：子函数不返回
    memcpy(new_buffer, *(longlong *)(array_ptr + 2), (longlong)*array_ptr << 3);
  }
  *(uint64_t *)(array_ptr + 2) = new_buffer;
  array_ptr[1] = (int)new_size;
  return;
}

// 函数：重置计数器
void reset_counter(void)
{
  // 空函数，用于重置计数器
  return;
}

// 函数：调整16位数组容量
void resize_uint16_array_capacity(int *array_ptr, int new_capacity)
{
  uint64_t new_buffer;
  
  if (array_ptr[1] < new_capacity) {
    if (_DAT != 0) {
      *(int *)(_DAT + 0x3a8) = *(int)(_DAT + 0x3a8) + 1;
    }
    new_buffer = func_0x000180120ce0((longlong)new_capacity * 2, _DAT);
    if (*(longlong *)(array_ptr + 2) != 0) {
      // 警告：子函数不返回
      memcpy(new_buffer, *(longlong *)(array_ptr + 2), (longlong)*array_ptr * 2);
    }
    *(uint64_t *)(array_ptr + 2) = new_buffer;
    array_ptr[1] = new_capacity;
  }
  return;
}

// 函数：扩展16位数组
void expand_uint16_array(void)
{
  longlong context_ptr;
  uint64_t new_buffer;
  int *array_ptr;
  longlong new_size;
  
  if (context_ptr != 0) {
    *(int *)(context_ptr + 0x3a8) = *(int)(context_ptr + 0x3a8) + 1;
  }
  new_buffer = func_0x000180120ce0(new_size * 2, _DAT);
  if (*(longlong *)(array_ptr + 2) != 0) {
    // 警告：子函数不返回
    memcpy(new_buffer, *(longlong *)(array_ptr + 2), (longlong)*array_ptr * 2);
  }
  *(uint64_t *)(array_ptr + 2) = new_buffer;
  array_ptr[1] = (int)new_size;
  return;
}