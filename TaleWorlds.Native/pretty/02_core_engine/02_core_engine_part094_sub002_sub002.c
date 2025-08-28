#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part094_sub002_sub002.c - 5个函数

// 函数: void add_render_parameter(uint32_t param_1)
// 向渲染系统添加参数
void add_render_parameter(uint32_t param_1)

{
  int *parameter_count_ptr;
  longlong render_context;
  longlong render_data;
  longlong global_context;
  int current_count;
  int max_count;
  int new_count;
  float offset_value;
  
  global_context = global_render_context;
  *(int8_t *)(*(longlong *)(global_render_context + 0x1af8) + 0xb1) = 1;
  render_data = *(longlong *)(global_context + 0x1af8);
  *(int8_t *)(render_data + 0xb1) = 1;
  parameter_count_ptr = (int *)(render_data + 0x218);
  render_context = *(longlong *)(global_context + 0x1af8);
  offset_value = *(float *)(global_context + 0x1684) + *(float *)(render_context + 0x204);
  *(float *)(render_context + 0x204) = offset_value;
  *(float *)(render_context + 0x100) = offset_value + *(float *)(render_context + 0x40) + *(float *)(render_context + 0x20c);
  *(int *)(render_data + 0x13c) = *(int *)(render_data + 0x13c) + 1;
  current_count = *parameter_count_ptr;
  max_count = *(int *)(render_data + 0x21c);
  if (current_count == max_count) {
    if (max_count == 0) {
      max_count = 8;
    }
    else {
      max_count = max_count / 2 + max_count;
    }
    new_count = current_count + 1;
    if (current_count + 1 < max_count) {
      new_count = max_count;
    }
    resize_parameter_array(parameter_count_ptr, new_count);
    current_count = *parameter_count_ptr;
  }
  *(int32_t *)(*(longlong *)(render_data + 0x220) + (longlong)current_count * 4) = param_1;
  *parameter_count_ptr = *parameter_count_ptr + 1;
  return;
}



// WARNING: Removing unreachable block (ram,0x000180118c7e)
// WARNING: Removing unreachable block (ram,0x000180118c85)
// WARNING: Removing unreachable block (ram,0x000180118f40)
// WARNING: Removing unreachable block (ram,0x00018011958b)
// WARNING: Removing unreachable block (ram,0x00018011913b)
// WARNING: Removing unreachable block (ram,0x00018011916e)
// WARNING: Removing unreachable block (ram,0x00018011917d)
// WARNING: Removing unreachable block (ram,0x000180119177)
// WARNING: Removing unreachable block (ram,0x00018011917f)
// WARNING: Removing unreachable block (ram,0x0001801190e0)
// WARNING: Removing unreachable block (ram,0x000180119064)
// WARNING: Removing unreachable block (ram,0x000180119019)
// WARNING: Removing unreachable block (ram,0x00018011902f)
// WARNING: Removing unreachable block (ram,0x0001801190b4)
// WARNING: Removing unreachable block (ram,0x000180119128)
// WARNING: Removing unreachable block (ram,0x000180119187)
// WARNING: Removing unreachable block (ram,0x000180119650)
// WARNING: Removing unreachable block (ram,0x000180119653)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Restarted to delay deadcode elimination for space: stack

// 函数: uint64_t process_text_rendering(char *text, ...)
// 处理文本渲染相关操作，包括文本测量、布局计算和实际渲染
uint64_t process_text_rendering(char *text, ...)

{
  float render_offset_x;
  float *font_scale_ptr;
  bool should_render;
  longlong global_context;
  float font_size;
  char render_mode;
  int8_t status_flag;
  int text_width;
  int32_t render_flags;
  uint font_id;
  longlong layout_context;
  int alignment_offset;
  uint current_font_id;
  uint64_t position_vector;
  char *text_end;
  char text_separator;
  ulonglong render_result;
  char *text_start;
  ulonglong render_context;
  longlong render_data;
  float text_height;
  float baseline_offset;
  float line_spacing;
  float char_width;
  float char_height;
  float total_width;
  float total_height;
  float max_height;
  float final_width;
  uint render_options;
  uint64_t in_stack_fffffffffffffec8;
  int32_t stack_param1;
  uint64_t in_stack_fffffffffffffed0;
  float measured_width;
  float measured_height;
  char format_char;
  char format_buffer [7];
  uint64_t text_position;
  int32_t is_complex_text;
  int32_t render_state;
  float render_x;
  float render_y;
  float render_width;
  float render_height;
  float render_scale;
  uint64_t context_data;
  float text_x;
  float text_y;
  float text_width_val;
  float text_height_val;
  
  global_context = global_render_context;
  stack_param1 = (int32_t)((ulonglong)in_stack_fffffffffffffed0 >> 0x20);
  render_flags = (int32_t)((ulonglong)in_stack_fffffffffffffec8 >> 0x20);
  *(int8_t *)(*(longlong *)(global_render_context + 0x1af8) + 0xb1) = 1;
  render_context = *(ulonglong *)(global_context + 0x1af8);
  if (*(char *)(render_context + 0xb4) != '\0') {
    return render_context & 0xffffffffffffff00;
  }
  font_id = get_font_resource_id(text,0,
                         *(int32_t *)
                          (*(longlong *)(render_context + 0x220) + -4 +
                          (longlong)*(int *)(render_context + 0x218) * 4));
  if (*(uint *)(global_context + 0x1b2c) == font_id) {
    *(uint *)(global_context + 0x1b34) = font_id;
  }
  if (*(uint *)(global_context + 0x1b30) == font_id) {
    *(int8_t *)(global_context + 0x1b3f) = 1;
  }
  global_context = global_render_context;
  render_context = *(ulonglong *)(global_render_context + 0x1af8);
  *(int8_t *)(render_context + 0xb1) = 1;
  context_data = *(longlong *)(global_context + 0x1af8);
  if (*(char *)(context_data + 0xb4) != '\0') {
    return render_context & 0xffffffffffffff00;
  }
  render_mode = '\x01';
  is_complex_text = 1;
  position_vector = *(uint64_t *)(global_context + 0x165c);
  text_position._0_4_ = (float)position_vector;
  font_size = (float)text_position;
  text_position._4_4_ = (float)((ulonglong)position_vector >> 0x20);
  char_height = text_position._4_4_;
  text_end = text;
  if (text != (char *)0xffffffffffffffff) {
    while (*text_end != '\0') {
      if (((*text_end == '#') && (text_end[1] == '#')) ||
         (text_end = text_end + 1, text_end == (char *)0xffffffffffffffff)) break;
    }
  }
  font_scale_ptr = *(float **)(global_context + 0x19f0);
  line_spacing = *(float *)(global_context + 0x19f8);
  text_position = position_vector;
  if (text == text_end) {
    render_scale = 0.0;
    measured_height = line_spacing;
  }
  else {
    position_vector = CONCAT44(render_flags,0xbf800000);
    text_start = text;
    measure_text_dimensions(font_scale_ptr,&measured_width,line_spacing,context_data,position_vector,text,text_end,0);
    stack_param1 = (int32_t)((ulonglong)text_start >> 0x20);
    render_flags = (int32_t)((ulonglong)position_vector >> 0x20);
    if (0.0 < measured_width) {
      measured_width = measured_width - line_spacing / *font_scale_ptr;
    }
    line_spacing = *(float *)(global_context + 0x19f8);
    render_mode = (char)is_complex_text;
    render_scale = (float)(int)(measured_width + 0.95);
  }
  render_context = (ulonglong)font_id;
  render_data = *(longlong *)(global_context + 0x1af8);
  max_height = *(float *)(context_data + 0x128);
  if (*(float *)(context_data + 0x128) <= char_height) {
    max_height = char_height;
  }
  layout_context = *(longlong *)(render_data + 0x210);
  total_height = *(float *)(global_context + 0x1660) + *(float *)(global_context + 0x1660) + line_spacing;
  char_width = *(float *)(render_data + 0x278) - *(float *)(render_data + 0x40);
  char_height = char_height + char_height + measured_height;
  if (*(float *)(context_data + 0x124) <= total_height) {
    total_height = *(float *)(context_data + 0x124);
  }
  if (total_height <= char_height) {
    total_height = char_height;
  }
  char_height = total_height + *(float *)(context_data + 0x104);
  if (layout_context != 0) {
    text_width = *(int *)(layout_context + 0xc) + 1;
    alignment_offset = *(int *)(layout_context + 0xc);
    if (-1 < text_width) {
      alignment_offset = text_width;
    }
    char_width = ((*(float *)(layout_context + 0x18) - *(float *)(layout_context + 0x14)) *
              *(float *)((longlong)alignment_offset * 0x1c + *(longlong *)(layout_context + 0x38)) +
             *(float *)(layout_context + 0x14)) - *(float *)(render_data + 0x70);
  }
  total_width = *(float *)(context_data + 0x100);
  baseline_offset = *(float *)(context_data + 0x104);
  char_width = char_width + *(float *)(context_data + 0x40);
  text_height = font_size + font_size;
  if (render_mode != '\0') {
    text_height = (float)(int)(*(float *)(context_data + 0x70) * 0.5) - 1.0;
    total_width = total_width - text_height;
    char_width = text_height + char_width;
    text_height = font_size * 3.0;
  }
  if (render_scale <= 0.0) {
    final_width = 0.0;
  }
  else {
    final_width = font_size + font_size + render_scale;
  }
  final_width = line_spacing + final_width;
  measured_width = final_width;
  render_scale = measured_height;
  measured_height = total_height;
  text_x = total_width;
  text_y = baseline_offset;
  text_width_val = char_width;
  text_height_val = char_height;
  apply_text_transform(&measured_width);
  render_width = char_width;
  if (render_mode == '\0') {
    render_width = *(float *)(global_context + 0x166c) + *(float *)(global_context + 0x166c) + total_width + final_width;
  }
  text_position = *(longlong *)(global_context + 0x1af8);
  position_vector = *(uint64_t *)(text_position + 0x198);
  render_data = global_context;
  render_x = total_width;
  render_y = baseline_offset;
  render_height = char_height;
  if (*(uint *)(global_context + 0x1c64) == 0) {
    text_width = check_font_cache(position_vector,render_context & 0xffffffff,0);
    render_result = (ulonglong)(text_width != 0);
  }
  else if ((*(uint *)(global_context + 0x1c64) & 1) == 0) {
    alignment_offset = -1;
    text_width = check_font_cache(position_vector,render_context & 0xffffffff);
    if (text_width == alignment_offset) {
      render_result = (ulonglong)*(byte *)(global_context + 0x1c60);
      update_font_cache(position_vector,font_id,*(byte *)(global_context + 0x1c60));
      render_data = global_render_context;
      *(int32_t *)(global_context + 0x1c64) = 0;
    }
    else {
      *(int32_t *)(global_context + 0x1c64) = 0;
      render_result = (ulonglong)(text_width != 0);
    }
  }
  else {
    render_result = (ulonglong)*(byte *)(global_context + 0x1c60);
    update_font_cache(position_vector,render_context & 0xffffffff,*(byte *)(global_context + 0x1c60));
    render_data = global_render_context;
    *(int32_t *)(global_context + 0x1c64) = 0;
  }
  render_state = 0;
  text_separator = (char)render_result;
  render_mode = prepare_text_rendering(&render_x,font_id,0);
  *(uint *)(context_data + 0x148) = *(uint *)(context_data + 0x148) | 2;
  *(float *)(context_data + 0x15c) = text_x;
  *(float *)(context_data + 0x160) = text_y;
  *(float *)(context_data + 0x164) = text_width_val;
  *(float *)(context_data + 0x168) = text_height_val;
  if (render_mode == '\0') {
    return render_result;
  }
  measured_width = 0.0;
  position_vector = CONCAT44(render_flags,0x1400);
  render_mode = format_text_string(&render_x,font_id,&format_char,format_buffer,position_vector);
  render_options = (uint)((ulonglong)position_vector >> 0x20);
  if ((char)render_state == '\0') {
    should_render = false;
    if (((render_mode != '\0') && (should_render = true, *(char *)(global_context + 0x1dd0) != '\0')) && (text_separator != '\0'))
    {
      should_render = false;
    }
    current_font_id = *(uint *)(global_context + 0x1ca0);
    if (((current_font_id == font_id) && (*(char *)(global_context + 0x1d21) != '\0')) &&
       ((*(int *)(global_context + 0x1d2c) == 0 && (text_separator != '\0')))) {
      *(int8_t *)(render_data + 0x1d21) = 0;
      should_render = true;
      if ((*(char *)(render_data + 0x1d21) == '\0') && (*(char *)(render_data + 0x1d09) == '\0')) {
        status_flag = 0;
      }
      else {
        status_flag = 1;
      }
      *(int8_t *)(render_data + 0x1d08) = status_flag;
      current_font_id = *(uint *)(global_context + 0x1ca0);
    }
    if ((((current_font_id == font_id) && (*(char *)(global_context + 0x1d21) != '\0')) &&
        (*(int *)(global_context + 0x1d2c) == 1)) && (text_separator == '\0')) {
      *(int8_t *)(render_data + 0x1d21) = 0;
      if (*(char *)(render_data + 0x1d09) == '\0') {
        *(int8_t *)(render_data + 0x1d08) = 0;
      }
      else {
        *(int8_t *)(render_data + 0x1d08) = 1;
      }
    }
    else if (!should_render) goto LAB_180119279;
    render_result = (ulonglong)(text_separator == '\0');
    update_font_cache(*(uint64_t *)(context_data + 0x198),font_id,text_separator == '\0');
    render_data = global_render_context;
  }
LAB_180119279:
  if (measured_width != 0.0) {
    cleanup_render_resources();
  }
  if ((format_buffer[0] == '\0') || (format_char == '\0')) {
    layout_context = (ulonglong)(format_char != '\0') + 0x18;
  }
  else {
    layout_context = 0x1a;
  }
  font_scale_ptr = (float *)(render_data + 0x1628 + (layout_context + 10) * 0x10);
  render_x = *font_scale_ptr;
  render_y = font_scale_ptr[1];
  render_width = font_scale_ptr[2];
  render_height = font_scale_ptr[3] * *(float *)(render_data + 0x1628);
  render_flags = get_render_color(&render_x);
  measured_width = line_spacing + text_height + total_width;
  line_spacing = baseline_offset + max_height;
  measured_height = line_spacing;
  if ((char)is_complex_text == '\0') {
    if (format_char != '\0') {
      text_position = CONCAT44(char_height,char_width);
      context_data = CONCAT44(baseline_offset,total_width);
      render_text_quad(*(uint64_t *)(*(longlong *)(render_data + 0x1af8) + 0x2e8),&context_data,&text_position,
                    render_flags,(ulonglong)render_options << 0x20,CONCAT44(stack_param1,0xf));
      if (font_id == *(uint *)(global_render_context + 0x1ca0)) {
        update_render_state(&text_x,2);
      }
    }
    if ((char)render_state == '\0') {
      position_vector = 1;
      if ((char)render_result != '\0') {
        position_vector = 3;
      }
      render_text_shadow(CONCAT44(*(float *)(global_context + 0x19f8) * 0.15 + max_height + baseline_offset,font_size + total_width),
                    position_vector,0x3f333333);
    }
    if (*(char *)(global_context + 0x2e38) != '\0') {
      render_formatted_text(&measured_width,&DEFAULT_TEXT_FORMAT,0);
    }
    render_text_line(CONCAT44(measured_height,measured_width),text,text_end,0);
  }
  else {
    render_text_box(CONCAT44(text_y,text_x),CONCAT44(text_height_val,text_width_val),render_flags,1,
                  CONCAT44(render_options,*(int32_t *)(global_context + 0x1664)));
    if (font_id == *(uint *)(global_render_context + 0x1ca0)) {
      update_render_state(&text_x,2);
    }
    position_vector = 1;
    if ((char)render_result != '\0') {
      position_vector = 3;
    }
    render_text_shadow(CONCAT44(line_spacing,font_size + total_width),position_vector,0x3f800000);
    render_data = global_render_context;
    if (*(char *)(global_context + 0x2e38) == '\0') {
      text_position = 0;
      if (text_end == (char *)0x0) {
        text_end = (char *)0xffffffffffffffff;
      }
      text_start = text;
      if (text < text_end) {
        do {
          if ((*text_start == '\0') || ((*text_start == '#' && (text_start[1] == '#')))) break;
          text_start = text_start + 1;
        } while (text_start < text_end);
      }
      if (((int)text_start != (int)text) &&
         (render_text_segment(*(uint64_t *)(*(longlong *)(global_render_context + 0x1af8) + 0x2e8),&measured_width,
                        &text_width_val,text,text_start,&render_scale,&text_position,0),
         *(char *)(render_data + 0x2e38) != '\0')) {
        render_formatted_text(&measured_width,text,text_start);
      }
    }
    else {
      is_complex_text = CONCAT13(is_complex_text._3_1_,0x2323);
      render_state = 0x23230a;
      render_formatted_text(&measured_width,&render_state,(longlong)&render_state + 3);
      global_context = global_render_context;
      text_position = 0;
      if (text_end == (char *)0x0) {
        text_end = (char *)0xffffffffffffffff;
      }
      text_start = text;
      if (text < text_end) {
        while (*text_start != '\0') {
          if (((*text_start == '#') && (text_start[1] == '#')) ||
             (text_start = text_start + 1, text_end <= text_start)) break;
        }
      }
      if (((int)text_start != (int)text) &&
         (render_text_segment(*(uint64_t *)(*(longlong *)(global_render_context + 0x1af8) + 0x2e8),&measured_width,
                        &text_width_val,text,text_start,&render_scale,&text_position,0),
         *(char *)(global_context + 0x2e38) != '\0')) {
        render_formatted_text(&measured_width,text,text_start);
      }
      render_formatted_text(&measured_width,(longlong)&is_complex_text + 1,(longlong)&is_complex_text + 3);
    }
  }
  return render_result;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: ulonglong render_text_with_params(char *text, char format_char, uint render_flags, float *position_params)
// 使用指定参数渲染文本，支持格式化字符和渲染标志
ulonglong render_text_with_params(char *text, char format_char, uint render_flags, float *position_params)

{
  uint *render_state_ptr;
  int32_t *color_data;
  float base_x;
  int layout_index;
  uint font_options;
  byte render_status;
  int alignment_offset;
  int32_t stack_param;
  ulonglong render_context;
  longlong render_data;
  float *font_scale_ptr;
  longlong *layout_array;
  int text_length;
  uint current_font;
  char *text_end;
  longlong global_context;
  longlong render_context_ptr;
  char text_format;
  longlong font_context;
  longlong transform_data;
  float text_width;
  float text_height;
  float measured_width;
  float line_spacing;
  float char_width;
  float char_height;
  float final_x;
  float final_y;
  uint64_t in_stack_fffffffffffffee8;
  uint64_t in_stack_fffffffffffffef0;
  int32_t param_flags;
  char format_code;
  char format_buffer [7];
  float render_width;
  float render_height;
  float render_offset_x;
  float render_offset_y;
  float render_scale;
  uint64_t position_data;
  float text_x;
  float text_y;
  float render_box_width;
  float render_box_height;
  float text_base_x;
  float text_base_y;
  float text_total_width;
  float text_total_height;
  int32_t color_r;
  int32_t color_g;
  int32_t color_b;
  float color_alpha;
  
  global_context = global_render_context;
  param_flags = (int32_t)((ulonglong)in_stack_fffffffffffffef0 >> 0x20);
  stack_param = (int32_t)((ulonglong)in_stack_fffffffffffffee8 >> 0x20);
  render_context = *(ulonglong *)(global_render_context + 0x1af8);
  *(int8_t *)(render_context + 0xb1) = 1;
  render_context_ptr = *(longlong *)(global_context + 0x1af8);
  if (*(char *)(render_context_ptr + 0xb4) != '\0') {
LAB_180119d01:
    return render_context & 0xffffffffffffff00;
  }
  font_context = global_context;
  if (((render_flags & 2) != 0) && (*(longlong *)(render_context_ptr + 0x210) != 0)) {
    initialize_ui_renderer();
    font_context = global_render_context;
  }
  font_options = get_font_resource_id(text,0,
                        *(int32_t *)
                         (*(longlong *)(render_context_ptr + 0x220) + -4 +
                         (longlong)*(int *)(render_context_ptr + 0x218) * 4));
  if (*(int *)(font_context + 0x1b2c) == font_options) {
    *(int *)(font_context + 0x1b34) = font_options;
  }
  if (*(int *)(font_context + 0x1b30) == font_options) {
    *(int8_t *)(font_context + 0x1b3f) = 1;
  }
  text_end = text;
  if (text != (char *)0xffffffffffffffff) {
    while (*text_end != '\0') {
      if (((*text_end == '#') && (text_end[1] == '#')) ||
         (text_end = text_end + 1, text_end == (char *)0xffffffffffffffff)) break;
    }
  }
  font_scale_ptr = *(float **)(font_context + 0x19f0);
  text_width = *(float *)(font_context + 0x19f8);
  if (text == text_end) {
    char_height = 0.0;
    render_height = text_width;
  }
  else {
    text_end = text;
    measure_text_dimensions(font_scale_ptr,&render_width);
    param_flags = (int32_t)((ulonglong)text_end >> 0x20);
    if (0.0 < render_width) {
      render_width = render_width - text_width / *font_scale_ptr;
    }
    char_height = (float)(int)(render_width + 0.95);
  }
  text_width = position_params[1];
  if (position_params[1] == 0.0) {
    text_width = render_height;
  }
  text_total_height = *position_params;
  if (*position_params == 0.0) {
    text_total_height = char_height;
  }
  base_x = *(float *)(render_context_ptr + 0x100);
  text_total_width = *(float *)(render_context_ptr + 0x104) + *(float *)(render_context_ptr + 0x128);
  text_total_height = base_x + text_total_height;
  text_total_width = text_total_width + text_width;
  render_width = text_total_height - base_x;
  render_box_height = render_height;
  render_height = text_total_width - text_total_width;
  text_base_y = char_height;
  text_base_x = base_x;
  text_total_width = text_total_width;
  apply_text_transform(&render_width,0);
  if ((render_flags & 2) == 0) {
    transform_data = *(longlong *)(font_context + 0x1af8);
    font_context = *(longlong *)(transform_data + 0x210);
    line_spacing = *(float *)(transform_data + 0x278) - *(float *)(transform_data + 0x40);
    if (font_context != 0) {
      layout_index = *(int *)(font_context + 0xc) + 1;
      text_length = *(int *)(font_context + 0xc);
      if (-1 < layout_index) {
        text_length = layout_index;
      }
      line_spacing = ((*(float *)(font_context + 0x18) - *(float *)(font_context + 0x14)) *
                *(float *)((longlong)text_length * 0x1c + *(longlong *)(font_context + 0x38)) +
               *(float *)(font_context + 0x14)) - *(float *)(transform_data + 0x70);
    }
  }
  else {
    line_spacing = *(float *)(*(longlong *)(font_context + 0x1af8) + 0x278) -
             *(float *)(*(longlong *)(font_context + 0x1af8) + 0x40);
  }
  render_scale = ((line_spacing + *(float *)(render_context_ptr + 0x40)) - *(float *)(render_context_ptr + 0x70)) -
              *(float *)(render_context_ptr + 0x100);
  if (render_scale <= char_height) {
    render_scale = char_height;
  }
  char_height = position_params[1];
  if (position_params[1] == 0.0) {
    char_height = text_width;
  }
  text_width = *position_params;
  if ((text_width != 0.0) && ((render_flags & 0x2000) == 0)) {
    render_scale = text_width;
  }
  render_scale = base_x + render_scale;
  if ((text_width == 0.0) || ((render_flags & 0x2000) != 0)) {
    render_scale = *(float *)(render_context_ptr + 0x70) + render_scale;
  }
  text_height = (float)(int)(*(float *)(global_context + 0x166c) * 0.5);
  render_offset_x = base_x - text_height;
  text_width = (float)(int)(*(float *)(global_context + 0x1670) * 0.5);
  render_scale = render_scale + (*(float *)(global_context + 0x166c) - text_height);
  render_offset_y = text_total_width - text_width;
  position_data = (*(float *)(global_context + 0x1670) - text_width) + text_total_width + char_height;
  render_context = prepare_text_rendering(&render_offset_x,font_options,0);
  if ((char)render_context == '\0') {
    if (((render_flags & 2) != 0) && (*(longlong *)(render_context_ptr + 0x210) != 0)) {
      render_context = cleanup_ui_renderer();
    }
    goto LAB_180119d01;
  }
  current_font = (render_flags & 0x400) * 2;
  font_options = current_font | 4;
  if ((render_flags & 0x800) == 0) {
    font_options = current_font;
  }
  current_font = font_options | 8;
  if ((render_flags & 0x1000) == 0) {
    current_font = font_options;
  }
  render_width = (float)(render_flags & 8);
  font_options = current_font | 0x100;
  if ((render_flags & 8) == 0) {
    font_options = current_font;
  }
  current_font = font_options | 0x12;
  if ((render_flags & 4) == 0) {
    current_font = font_options;
  }
  render_context = CONCAT44(stack_param,current_font);
  render_status = format_text_string(&render_offset_x,font_options,&format_code,format_buffer,render_context);
  text_width = render_scale;
  text_format = '\0';
  if (render_width == 0.0) {
    text_format = format_char;
  }
  if ((render_status == 0) && (format_code == '\0')) {
LAB_180119e1f:
    if (text_format == '\0') goto LAB_180119eed;
  }
  else {
    if ((*(char *)(global_context + 0x1d07) == '\0') &&
       ((*(longlong *)(global_context + 0x1c98) == render_context_ptr &&
        (*(int *)(global_context + 0x1cfc) == *(int *)(render_context_ptr + 0x16c))))) {
      *(int8_t *)(global_context + 0x1d06) = 1;
      layout_index = *(int *)(render_context_ptr + 0x16c);
      *(int *)(font_context + 0x1ca0) = font_options;
      *(int *)(*(longlong *)(font_context + 0x1c98) + 0x3c8 + (longlong)layout_index * 4) = font_options;
    }
    if (render_status != 0) {
      *(int8_t *)(font_context + 0x1b3e) = 1;
      render_state_ptr = (uint *)(*(longlong *)(font_context + 0x1af8) + 0x148);
      *render_state_ptr = *render_state_ptr | 4;
    }
    if (format_code == '\0') goto LAB_180119e1f;
  }
  if ((format_buffer[0] == '\0') || (format_code == '\0')) {
    transform_data = (ulonglong)(format_code != '\0') + 0x18;
  }
  else {
    transform_data = 0x1a;
  }
  font_context = *(longlong *)(font_context + 0x1af8);
  render_box_width = render_scale;
  color_data = (int32_t *)(font_context + 0x1628 + (transform_data + 10) * 0x10);
  color_r = *color_data;
  color_g = color_data[1];
  color_b = color_data[2];
  color_alpha = (float)color_data[3] * *(float *)(font_context + 0x1628);
  render_box_height = position_data;
  position_data = CONCAT44(render_offset_y,render_offset_x);
  stack_param = get_render_color(&color_r);
  render_text_quad(*(uint64_t *)(font_context + 0x2e8),&position_data,&render_box_width,stack_param,
                render_context & 0xffffffff00000000,CONCAT44(param_flags,0xf));
  font_context = global_render_context;
  if (font_options == *(int *)(global_render_context + 0x1ca0)) {
    update_render_state(&render_offset_x,10,global_render_context);
    font_context = global_render_context;
  }
LAB_180119eed:
  if (((render_flags & 2) != 0) && (*(longlong *)(render_context_ptr + 0x210) != 0)) {
    cleanup_ui_renderer();
    font_scale_ptr = (float *)get_render_transform(&render_box_width);
    render_scale = text_width - (*font_scale_ptr - line_spacing);
    font_context = global_render_context;
  }
  text_width = render_width;
  if (render_width != 0.0) {
    set_render_state(0,global_context + 0x16d8);
    font_context = global_render_context;
  }
  position_data = 0;
  text_end = text;
  if (text != (char *)0xffffffffffffffff) {
    while (*text_end != '\0') {
      if (((*text_end == '#') && (text_end[1] == '#')) ||
         (text_end = text_end + 1, text_end == (char *)0xffffffffffffffff)) break;
    }
  }
  global_context = font_context;
  if (((int)text_end != (int)text) &&
     (render_text_segment(*(uint64_t *)(*(longlong *)(font_context + 0x1af8) + 0x2e8),&text_base_x,&render_scale,
                    text,text_end,&text_base_y,&position_data,0), global_context = global_render_context,
     *(char *)(font_context + 0x2e38) != '\0')) {
    render_formatted_text(&text_base_x,text,text_end);
    global_context = global_render_context;
  }
  if (text_width != 0.0) {
    restore_render_state(1);
  }
  if (((render_status != 0) && ((*(uint *)(render_context_ptr + 0xc) & 0x4000000) != 0)) &&
     (((render_flags & 1) == 0 &&
      ((((*(byte *)(render_context_ptr + 0x1a8) & 0x20) == 0 &&
        (font_options = *(int *)(global_context + 0x1bc0) + -1, -1 < font_options)) && (font_options < *(int *)(global_context + 0x1bb0))
       ))))) {
    render_context_ptr = (longlong)font_options;
    font_context = render_context_ptr * 0x30;
    if (*(int *)(font_context + *(longlong *)(global_context + 0x1bc8)) ==
        *(int *)(*(longlong *)(global_context + 0x1bb8) + font_context)) {
      if (0 < font_options) {
        layout_array = (longlong *)(font_context + 8 + *(longlong *)(global_context + 0x1bb8));
        do {
          if ((*layout_array == 0) || ((*(uint *)(*layout_array + 0xc) & 0x10000000) == 0)) break;
          font_options = font_options + -1;
          render_context_ptr = render_context_ptr + -1;
          layout_array = layout_array + -6;
        } while (0 < render_context_ptr);
      }
      update_text_layout(font_options,CONCAT71((int7)((ulonglong)render_context_ptr >> 8),1));
      if (*(longlong *)(global_context + 0x1c98) != 0) {
        *(int8_t *)(*(longlong *)(global_context + 0x1c98) + 0x17c) = 1;
      }
    }
  }
  return (ulonglong)render_status;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: ulonglong render_text_internal(int32_t font_handle, uint64_t render_context, ulonglong render_flags)
// 内部文本渲染函数，处理底层的文本渲染操作
ulonglong render_text_internal(int32_t font_handle, uint64_t render_context, ulonglong render_flags)

{
  uint *render_state_ptr;
  int32_t *color_data;
  float base_x;
  uint font_options;
  int layout_index;
  uint render_mode;
  int32_t stack_param;
  ulonglong context_handle;
  longlong render_data;
  float *position_params;
  longlong *layout_array;
  int text_length;
  uint current_font;
  char *text_end;
  longlong global_context;
  longlong font_context;
  char *text_start;
  longlong transform_data;
  float text_width;
  float text_height;
  float line_spacing;
  float char_width;
  float char_height;
  float render_x;
  float render_y;
  uint64_t stack_data;
  char format_char;
  char format_buffer[7];
  float measured_width;
  float measured_height;
  float render_offset_x;
  float render_offset_y;
  float render_width;
  float render_height;
  float text_box_x;
  float text_box_y;
  float text_total_width;
  float text_total_height;
  int32_t color_r;
  int32_t color_g;
  int32_t color_b;
  float color_alpha;
  
  stack_param = (int32_t)((ulonglong)stack_data >> 0x20);
  *(int32_t *)(context_handle + -0x78) = color_r;
  *(int32_t *)(context_handle + -0x74) = color_g;
  *(int32_t *)(context_handle + -0x70) = color_b;
  *(int32_t *)(context_handle + -0x6c) = color_alpha;
  *(int32_t *)(context_handle + -0x88) = render_x;
  *(int32_t *)(context_handle + -0x84) = render_y;
  *(int32_t *)(context_handle + -0x80) = render_width;
  *(int32_t *)(context_handle + -0x7c) = render_height;
  *(int32_t *)(context_handle + -0x98) = text_box_x;
  *(int32_t *)(context_handle + -0x94) = text_box_y;
  *(int32_t *)(context_handle + -0x90) = text_total_width;
  *(int32_t *)(context_handle + -0x8c) = text_total_height;
  if (((render_flags & 2) != 0) && (*(longlong *)(render_context + 0x210) != 0)) {
    font_handle = initialize_ui_renderer();
    global_context = global_render_context;
  }
  font_options = get_font_resource_id(font_handle,0,
                        *(int32_t *)
                         (*(longlong *)(render_context + 0x220) + -4 +
                         (longlong)*(int *)(render_context + 0x218) * 4));
  if (*(int *)(global_context + 0x1b2c) == font_options) {
    *(int *)(global_context + 0x1b34) = font_options;
  }
  if (*(int *)(global_context + 0x1b30) == font_options) {
    *(int8_t *)(global_context + 0x1b3f) = 1;
  }
  text_start = text_end;
  if (text_end != (char *)0xffffffffffffffff) {
    while (*text_start != '\0') {
      if (((*text_start == '#') && (text_start[1] == '#')) ||
         (text_start = text_start + 1, text_start == (char *)0xffffffffffffffff)) break;
    }
  }
  position_params = *(float **)(global_context + 0x19f0);
  text_width = *(float *)(global_context + 0x19f8);
  if (text_end == text_start) {
    char_height = 0.0;
    measured_height = text_width;
  }
  else {
    measure_text_dimensions(position_params,&measured_width);
    if (0.0 < measured_width) {
      measured_width = measured_width - text_width / *position_params;
    }
    char_height = (float)(int)(measured_width + 0.95);
  }
  position_params = *(float **)(transform_data + 0x7f);
  *(float *)(transform_data + -0x6d) = measured_height;
  *(float *)(transform_data + -0x71) = char_height;
  text_width = position_params[1];
  if (position_params[1] == 0.0) {
    text_width = measured_height;
  }
  text_total_height = *position_params;
  if (*position_params == 0.0) {
    text_total_height = char_height;
  }
  base_x = *(float *)(render_context + 0x100);
  text_total_width = *(float *)(render_context + 0x104) + *(float *)(render_context + 0x128);
  *(float *)(transform_data + -0x61) = base_x;
  *(float *)(transform_data + -0x5d) = text_total_width;
  *(float *)(transform_data + -0x59) = base_x + text_total_height;
  measured_width = (base_x + text_total_height) - base_x;
  *(float *)(transform_data + -0x55) = text_total_width + text_width;
  measured_height = (text_total_width + text_width) - text_total_width;
  apply_text_transform(&measured_width,0);
  if ((render_flags & 2) == 0) {
    render_data = *(longlong *)(global_context + 0x1af8);
    font_context = *(longlong *)(render_data + 0x210);
    text_total_height = *(float *)(render_data + 0x278) - *(float *)(render_data + 0x40);
    if (font_context != 0) {
      layout_index = *(int *)(font_context + 0xc) + 1;
      text_length = *(int *)(font_context + 0xc);
      if (-1 < layout_index) {
        text_length = layout_index;
      }
      text_total_height = ((*(float *)(font_context + 0x18) - *(float *)(font_context + 0x14)) *
                *(float *)((longlong)text_length * 0x1c + *(longlong *)(font_context + 0x38)) +
               *(float *)(font_context + 0x14)) - *(float *)(render_data + 0x70);
    }
  }
  else {
    text_total_height = *(float *)(*(longlong *)(global_context + 0x1af8) + 0x278) -
             *(float *)(*(longlong *)(global_context + 0x1af8) + 0x40);
  }
  render_offset_x =
       ((text_total_height + *(float *)(render_context + 0x40)) - *(float *)(render_context + 0x70)) -
       *(float *)(render_context + 0x100);
  if (render_offset_x <= char_height) {
    render_offset_x = char_height;
  }
  char_height = position_params[1];
  if (position_params[1] == 0.0) {
    char_height = text_width;
  }
  render_mode = *(uint *)(transform_data + 0x77);
  text_width = *position_params;
  if ((text_width != 0.0) && ((render_mode & 0x2000) == 0)) {
    render_offset_x = text_width;
  }
  render_offset_x = base_x + render_offset_x;
  if ((text_width == 0.0) || ((render_mode & 0x2000) != 0)) {
    render_offset_x = *(float *)(render_context + 0x70) + render_offset_x;
  }
  line_spacing = (float)(int)(*(float *)(global_context + 0x166c) * 0.5);
  render_offset_y = base_x - line_spacing;
  text_width = (float)(int)(*(float *)(global_context + 0x1670) * 0.5);
  render_offset_x = render_offset_x + (*(float *)(global_context + 0x166c) - line_spacing);
  render_height = text_total_width - text_width;
  *(float *)(transform_data + -0x7d) = (*(float *)(global_context + 0x1670) - text_width) + text_total_width + char_height;
  context_handle = prepare_text_rendering(&render_offset_y,font_options,0);
  if ((char)context_handle == '\0') {
    if (((render_flags & 2) != 0) && (*(longlong *)(render_context + 0x210) != 0)) {
      context_handle = cleanup_ui_renderer();
    }
    return context_handle & 0xffffffffffffff00;
  }
  current_font = (render_mode & 0x400) * 2;
  font_options = current_font | 4;
  if ((render_mode & 0x800) == 0) {
    font_options = current_font;
  }
  current_font = font_options | 8;
  if ((render_mode & 0x1000) == 0) {
    current_font = font_options;
  }
  measured_width = (float)(render_mode & 8);
  font_options = current_font | 0x100;
  if (measured_width == 0.0) {
    font_options = current_font;
  }
  current_font = font_options | 0x12;
  if ((render_mode & 4) == 0) {
    current_font = font_options;
  }
  text_start = (char *)CONCAT44(stack_param,current_font);
  render_mode = format_text_string(&render_offset_y,font_options,&format_char,(longlong)&format_char + 1,
                        text_start);
  text_width = render_offset_x;
  format_char = '\0';
  if (measured_width == 0.0) {
    format_char = *(char *)(transform_data + 0x6f);
  }
  if ((render_mode == 0) && (format_char == '\0')) {
LAB_180119e1f:
    if (format_char == '\0') goto LAB_180119eed;
  }
  else {
    if ((*(char *)(global_context + 0x1d07) == '\0') &&
       ((*(longlong *)(global_context + 0x1c98) == render_context &&
        (*(int *)(global_context + 0x1cfc) == *(int *)(render_context + 0x16c))))) {
      *(int8_t *)(global_context + 0x1d06) = 1;
      layout_index = *(int *)(render_context + 0x16c);
      *(int *)(global_context + 0x1ca0) = font_options;
      *(int *)(*(longlong *)(global_context + 0x1c98) + 0x3c8 + (longlong)layout_index * 4) = font_options;
    }
    if (render_mode != 0) {
      *(int8_t *)(global_context + 0x1b3e) = 1;
      render_state_ptr = (uint *)(*(longlong *)(global_context + 0x1af8) + 0x148);
      *render_state_ptr = *render_state_ptr | 4;
    }
    if (format_char == '\0') goto LAB_180119e1f;
  }
  if ((render_height == '\0') || (format_char == '\0')) {
    render_data = (ulonglong)(format_char != '\0') + 0x18;
  }
  else {
    render_data = 0x1a;
  }
  font_context = *(longlong *)(global_context + 0x1af8);
  *(float *)(transform_data + -0x69) = render_offset_x;
  *(float *)(transform_data + -0x79) = render_offset_y;
  color_data = (int32_t *)(global_context + 0x1628 + (render_data + 10) * 0x10);
  stack_param = color_data[1];
  color_b = color_data[2];
  char_height = (float)color_data[3];
  *(int32_t *)(transform_data + -0x51) = *color_data;
  *(int32_t *)(transform_data + -0x4d) = stack_param;
  *(int32_t *)(transform_data + -0x49) = color_b;
  *(float *)(transform_data + -0x45) = char_height;
  *(float *)(transform_data + -0x45) = char_height * *(float *)(global_context + 0x1628);
  *(int32_t *)(transform_data + -0x65) = *(int32_t *)(transform_data + -0x7d);
  *(float *)(transform_data + -0x75) = render_height;
  stack_param = get_render_color(transform_data + -0x51);
  text_start = (char *)((ulonglong)text_start & 0xffffffff00000000);
  render_text_quad(*(uint64_t *)(font_context + 0x2e8),transform_data + -0x79,transform_data + -0x69,stack_param,text_start);
  global_context = global_render_context;
  if (font_options == *(int *)(global_render_context + 0x1ca0)) {
    update_render_state(&render_offset_y,10,global_render_context);
    global_context = global_render_context;
  }
LAB_180119eed:
  if (((render_flags & 2) != 0) && (*(longlong *)(render_context + 0x210) != 0)) {
    cleanup_ui_renderer();
    position_params = (float *)get_render_transform(transform_data + -0x69);
    render_offset_x = text_width - (*position_params - text_total_height);
    global_context = global_render_context;
  }
  render_mode = (uint)measured_width;
  if (measured_width != 0.0) {
    set_render_state(0,global_context + 0x16d8);
    global_context = global_render_context;
  }
  *(uint64_t *)(transform_data + -0x79) = 0;
  text_start = text_end;
  if (text_end != (char *)0xffffffffffffffff) {
    while (*text_start != '\0') {
      if (((*text_start == '#') && (text_start[1] == '#')) ||
         (text_start = text_start + 1, text_start == (char *)0xffffffffffffffff)) break;
    }
  }
  render_data = global_context;
  if (((int)text_start != (int)text_end) &&
     (render_text_segment(*(uint64_t *)(*(longlong *)(global_context + 0x1af8) + 0x2e8),transform_data + -0x61,
                    &render_offset_x), render_data = global_render_context, text_start = text_start,
     *(char *)(global_context + 0x2e38) != '\0')) {
    render_formatted_text(transform_data + -0x61);
    render_data = global_render_context;
    text_start = text_start;
  }
  if (render_mode != 0) {
    restore_render_state(1);
  }
  if (((render_mode != 0) && ((*(uint *)(render_context + 0xc) & 0x4000000) != 0)) &&
     (((*(uint *)(transform_data + 0x77) & 1) == 0 &&
      ((((*(byte *)(render_context + 0x1a8) & 0x20) == 0 &&
        (font_options = *(int *)(render_data + 0x1bc0) + -1, -1 < font_options)) && (font_options < *(int *)(render_data + 0x1bb0))
       ))))) {
    font_context = (longlong)font_options;
    transform_data = font_context * 0x30;
    if (*(int *)(transform_data + *(longlong *)(render_data + 0x1bc8)) ==
        *(int *)(*(longlong *)(render_data + 0x1bb8) + transform_data)) {
      if (0 < font_options) {
        layout_array = (longlong *)(transform_data + 8 + *(longlong *)(render_data + 0x1bb8));
        do {
          if ((*layout_array == 0) || ((*(uint *)(*layout_array + 0xc) & 0x10000000) == 0)) break;
          font_options = font_options + -1;
          font_context = font_context + -1;
          layout_array = layout_array + -6;
        } while (0 < font_context);
      }
      update_text_layout(font_options,CONCAT71((int7)((ulonglong)font_context >> 8),1),font_options,transform_data,text_start);
      if (*(longlong *)(render_data + 0x1c98) != 0) {
        *(int8_t *)(*(longlong *)(render_data + 0x1c98) + 0x17c) = 1;
      }
    }
  }
  return (ulonglong)render_mode;
}



// 函数: int8_t check_render_state(void)
// 检查渲染状态，并在需要时清理UI渲染器
int8_t check_render_state(void)

{
  longlong render_context;
  int render_flags;
  
  if ((render_flags != 0) && (*(longlong *)(render_context + 0x210) != 0)) {
    cleanup_ui_renderer();
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





