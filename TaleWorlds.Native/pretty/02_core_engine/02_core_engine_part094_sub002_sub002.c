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
  
  global_context = _DAT_180c8a9b0;
  *(undefined1 *)(*(longlong *)(_DAT_180c8a9b0 + 0x1af8) + 0xb1) = 1;
  render_data = *(longlong *)(global_context + 0x1af8);
  *(undefined1 *)(render_data + 0xb1) = 1;
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
  *(undefined4 *)(*(longlong *)(render_data + 0x220) + (longlong)current_count * 4) = param_1;
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
  undefined1 status_flag;
  int text_width;
  undefined4 render_flags;
  uint font_id;
  longlong layout_context;
  int alignment_offset;
  uint current_font_id;
  undefined8 position_vector;
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
  undefined8 in_stack_fffffffffffffec8;
  undefined4 stack_param1;
  undefined8 in_stack_fffffffffffffed0;
  float measured_width;
  float measured_height;
  char format_char;
  char format_buffer [7];
  undefined8 text_position;
  undefined4 is_complex_text;
  undefined4 render_state;
  float render_x;
  float render_y;
  float render_width;
  float render_height;
  float render_scale;
  undefined8 context_data;
  float text_x;
  float text_y;
  float text_width_val;
  float text_height_val;
  
  global_context = global_render_context;
  stack_param1 = (undefined4)((ulonglong)in_stack_fffffffffffffed0 >> 0x20);
  render_flags = (undefined4)((ulonglong)in_stack_fffffffffffffec8 >> 0x20);
  *(undefined1 *)(*(longlong *)(global_render_context + 0x1af8) + 0xb1) = 1;
  render_context = *(ulonglong *)(global_context + 0x1af8);
  if (*(char *)(render_context + 0xb4) != '\0') {
    return render_context & 0xffffffffffffff00;
  }
  font_id = get_font_resource_id(text,0,
                         *(undefined4 *)
                          (*(longlong *)(render_context + 0x220) + -4 +
                          (longlong)*(int *)(render_context + 0x218) * 4));
  if (*(uint *)(global_context + 0x1b2c) == font_id) {
    *(uint *)(global_context + 0x1b34) = font_id;
  }
  if (*(uint *)(global_context + 0x1b30) == font_id) {
    *(undefined1 *)(global_context + 0x1b3f) = 1;
  }
  global_context = global_render_context;
  render_context = *(ulonglong *)(global_render_context + 0x1af8);
  *(undefined1 *)(render_context + 0xb1) = 1;
  context_data = *(longlong *)(global_context + 0x1af8);
  if (*(char *)(context_data + 0xb4) != '\0') {
    return render_context & 0xffffffffffffff00;
  }
  render_mode = '\x01';
  is_complex_text = 1;
  position_vector = *(undefined8 *)(global_context + 0x165c);
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
    stack_param1 = (undefined4)((ulonglong)text_start >> 0x20);
    render_flags = (undefined4)((ulonglong)position_vector >> 0x20);
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
  position_vector = *(undefined8 *)(text_position + 0x198);
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
      *(undefined4 *)(global_context + 0x1c64) = 0;
    }
    else {
      *(undefined4 *)(global_context + 0x1c64) = 0;
      render_result = (ulonglong)(text_width != 0);
    }
  }
  else {
    render_result = (ulonglong)*(byte *)(global_context + 0x1c60);
    update_font_cache(position_vector,render_context & 0xffffffff,*(byte *)(global_context + 0x1c60));
    render_data = global_render_context;
    *(undefined4 *)(global_context + 0x1c64) = 0;
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
      *(undefined1 *)(render_data + 0x1d21) = 0;
      should_render = true;
      if ((*(char *)(render_data + 0x1d21) == '\0') && (*(char *)(render_data + 0x1d09) == '\0')) {
        status_flag = 0;
      }
      else {
        status_flag = 1;
      }
      *(undefined1 *)(render_data + 0x1d08) = status_flag;
      current_font_id = *(uint *)(global_context + 0x1ca0);
    }
    if ((((current_font_id == font_id) && (*(char *)(global_context + 0x1d21) != '\0')) &&
        (*(int *)(global_context + 0x1d2c) == 1)) && (text_separator == '\0')) {
      *(undefined1 *)(render_data + 0x1d21) = 0;
      if (*(char *)(render_data + 0x1d09) == '\0') {
        *(undefined1 *)(render_data + 0x1d08) = 0;
      }
      else {
        *(undefined1 *)(render_data + 0x1d08) = 1;
      }
    }
    else if (!should_render) goto LAB_180119279;
    render_result = (ulonglong)(text_separator == '\0');
    update_font_cache(*(undefined8 *)(context_data + 0x198),font_id,text_separator == '\0');
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
      render_text_quad(*(undefined8 *)(*(longlong *)(render_data + 0x1af8) + 0x2e8),&context_data,&text_position,
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
                  CONCAT44(render_options,*(undefined4 *)(global_context + 0x1664)));
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
         (render_text_segment(*(undefined8 *)(*(longlong *)(global_render_context + 0x1af8) + 0x2e8),&measured_width,
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
         (render_text_segment(*(undefined8 *)(*(longlong *)(global_render_context + 0x1af8) + 0x2e8),&measured_width,
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

ulonglong FUN_180119960(char *param_1,char param_2,uint param_3,float *param_4)

{
  uint *puVar1;
  undefined4 *puVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  float *pfVar11;
  longlong *plVar12;
  int iVar13;
  uint uVar14;
  char *pcVar15;
  longlong lVar16;
  longlong lVar17;
  char cVar18;
  longlong lVar19;
  longlong lVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 in_stack_fffffffffffffee8;
  undefined8 in_stack_fffffffffffffef0;
  undefined4 uVar26;
  char cStack_f8;
  char acStack_f7 [7];
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  undefined8 uStack_d8;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  float fStack_a4;
  
  lVar17 = _DAT_180c8a9b0;
  uVar26 = (undefined4)((ulonglong)in_stack_fffffffffffffef0 >> 0x20);
  uVar8 = (undefined4)((ulonglong)in_stack_fffffffffffffee8 >> 0x20);
  uVar9 = *(ulonglong *)(_DAT_180c8a9b0 + 0x1af8);
  *(undefined1 *)(uVar9 + 0xb1) = 1;
  lVar16 = *(longlong *)(lVar17 + 0x1af8);
  if (*(char *)(lVar16 + 0xb4) != '\0') {
LAB_180119d01:
    return uVar9 & 0xffffffffffffff00;
  }
  lVar19 = lVar17;
  if (((param_3 & 2) != 0) && (*(longlong *)(lVar16 + 0x210) != 0)) {
    FUN_180126d80();
    lVar19 = _DAT_180c8a9b0;
  }
  iVar7 = FUN_180121250(param_1,0,
                        *(undefined4 *)
                         (*(longlong *)(lVar16 + 0x220) + -4 +
                         (longlong)*(int *)(lVar16 + 0x218) * 4));
  if (*(int *)(lVar19 + 0x1b2c) == iVar7) {
    *(int *)(lVar19 + 0x1b34) = iVar7;
  }
  if (*(int *)(lVar19 + 0x1b30) == iVar7) {
    *(undefined1 *)(lVar19 + 0x1b3f) = 1;
  }
  pcVar15 = param_1;
  if (param_1 != (char *)0xffffffffffffffff) {
    while (*pcVar15 != '\0') {
      if (((*pcVar15 == '#') && (pcVar15[1] == '#')) ||
         (pcVar15 = pcVar15 + 1, pcVar15 == (char *)0xffffffffffffffff)) break;
    }
  }
  pfVar11 = *(float **)(lVar19 + 0x19f0);
  fVar21 = *(float *)(lVar19 + 0x19f8);
  if (param_1 == pcVar15) {
    fVar23 = 0.0;
    fStack_ec = fVar21;
  }
  else {
    pcVar15 = param_1;
    FUN_180297340(pfVar11,&fStack_f0);
    uVar26 = (undefined4)((ulonglong)pcVar15 >> 0x20);
    if (0.0 < fStack_f0) {
      fStack_f0 = fStack_f0 - fVar21 / *pfVar11;
    }
    fVar23 = (float)(int)(fStack_f0 + 0.95);
  }
  fVar21 = param_4[1];
  if (param_4[1] == 0.0) {
    fVar21 = fStack_ec;
  }
  fStack_b8 = *param_4;
  if (*param_4 == 0.0) {
    fStack_b8 = fVar23;
  }
  fVar3 = *(float *)(lVar16 + 0x100);
  fVar25 = *(float *)(lVar16 + 0x104) + *(float *)(lVar16 + 0x128);
  fStack_b8 = fVar3 + fStack_b8;
  fStack_b4 = fVar25 + fVar21;
  fStack_f0 = fStack_b8 - fVar3;
  fStack_cc = fStack_ec;
  fStack_ec = fStack_b4 - fVar25;
  fStack_d0 = fVar23;
  fStack_c0 = fVar3;
  fStack_bc = fVar25;
  func_0x000180124080(&fStack_f0,0);
  if ((param_3 & 2) == 0) {
    lVar10 = *(longlong *)(lVar19 + 0x1af8);
    lVar20 = *(longlong *)(lVar10 + 0x210);
    fVar24 = *(float *)(lVar10 + 0x278) - *(float *)(lVar10 + 0x40);
    if (lVar20 != 0) {
      iVar4 = *(int *)(lVar20 + 0xc) + 1;
      iVar13 = *(int *)(lVar20 + 0xc);
      if (-1 < iVar4) {
        iVar13 = iVar4;
      }
      fVar24 = ((*(float *)(lVar20 + 0x18) - *(float *)(lVar20 + 0x14)) *
                *(float *)((longlong)iVar13 * 0x1c + *(longlong *)(lVar20 + 0x38)) +
               *(float *)(lVar20 + 0x14)) - *(float *)(lVar10 + 0x70);
    }
  }
  else {
    fVar24 = *(float *)(*(longlong *)(lVar19 + 0x1af8) + 0x278) -
             *(float *)(*(longlong *)(lVar19 + 0x1af8) + 0x40);
  }
  fStack_e0 = ((fVar24 + *(float *)(lVar16 + 0x40)) - *(float *)(lVar16 + 0x70)) -
              *(float *)(lVar16 + 0x100);
  if (fStack_e0 <= fVar23) {
    fStack_e0 = fVar23;
  }
  fVar23 = param_4[1];
  if (param_4[1] == 0.0) {
    fVar23 = fVar21;
  }
  fVar21 = *param_4;
  if ((fVar21 != 0.0) && ((param_3 & 0x2000) == 0)) {
    fStack_e0 = fVar21;
  }
  fStack_e0 = fVar3 + fStack_e0;
  if ((fVar21 == 0.0) || ((param_3 & 0x2000) != 0)) {
    fStack_e0 = *(float *)(lVar16 + 0x70) + fStack_e0;
  }
  fVar22 = (float)(int)(*(float *)(lVar17 + 0x166c) * 0.5);
  fStack_e8 = fVar3 - fVar22;
  fVar21 = (float)(int)(*(float *)(lVar17 + 0x1670) * 0.5);
  fStack_e0 = fStack_e0 + (*(float *)(lVar17 + 0x166c) - fVar22);
  fStack_e4 = fVar25 - fVar21;
  fStack_dc = (*(float *)(lVar17 + 0x1670) - fVar21) + fVar25 + fVar23;
  uVar9 = FUN_180124190(&fStack_e8,iVar7,0);
  if ((char)uVar9 == '\0') {
    if (((param_3 & 2) != 0) && (*(longlong *)(lVar16 + 0x210) != 0)) {
      uVar9 = FUN_180134400();
    }
    goto LAB_180119d01;
  }
  uVar14 = (param_3 & 0x400) * 2;
  uVar5 = uVar14 | 4;
  if ((param_3 & 0x800) == 0) {
    uVar5 = uVar14;
  }
  uVar14 = uVar5 | 8;
  if ((param_3 & 0x1000) == 0) {
    uVar14 = uVar5;
  }
  fStack_f0 = (float)(param_3 & 8);
  uVar5 = uVar14 | 0x100;
  if ((param_3 & 8) == 0) {
    uVar5 = uVar14;
  }
  uVar14 = uVar5 | 0x12;
  if ((param_3 & 4) == 0) {
    uVar14 = uVar5;
  }
  uVar9 = CONCAT44(uVar8,uVar14);
  bVar6 = FUN_18010f170(&fStack_e8,iVar7,&cStack_f8,acStack_f7,uVar9);
  fVar21 = fStack_e0;
  cVar18 = '\0';
  if (fStack_f0 == 0.0) {
    cVar18 = param_2;
  }
  if ((bVar6 == 0) && (cStack_f8 == '\0')) {
LAB_180119e1f:
    if (cVar18 == '\0') goto LAB_180119eed;
  }
  else {
    if ((*(char *)(lVar17 + 0x1d07) == '\0') &&
       ((*(longlong *)(lVar17 + 0x1c98) == lVar16 &&
        (*(int *)(lVar17 + 0x1cfc) == *(int *)(lVar16 + 0x16c))))) {
      *(undefined1 *)(lVar17 + 0x1d06) = 1;
      iVar4 = *(int *)(lVar16 + 0x16c);
      *(int *)(lVar19 + 0x1ca0) = iVar7;
      *(int *)(*(longlong *)(lVar19 + 0x1c98) + 0x3c8 + (longlong)iVar4 * 4) = iVar7;
    }
    if (bVar6 != 0) {
      *(undefined1 *)(lVar19 + 0x1b3e) = 1;
      puVar1 = (uint *)(*(longlong *)(lVar19 + 0x1af8) + 0x148);
      *puVar1 = *puVar1 | 4;
    }
    if (cStack_f8 == '\0') goto LAB_180119e1f;
  }
  if ((acStack_f7[0] == '\0') || (cStack_f8 == '\0')) {
    lVar10 = (ulonglong)(cStack_f8 != '\0') + 0x18;
  }
  else {
    lVar10 = 0x1a;
  }
  lVar20 = *(longlong *)(lVar19 + 0x1af8);
  fStack_c8 = fStack_e0;
  puVar2 = (undefined4 *)(lVar19 + 0x1628 + (lVar10 + 10) * 0x10);
  uStack_b0 = *puVar2;
  uStack_ac = puVar2[1];
  uStack_a8 = puVar2[2];
  fStack_a4 = (float)puVar2[3] * *(float *)(lVar19 + 0x1628);
  fStack_c4 = fStack_dc;
  uStack_d8 = CONCAT44(fStack_e4,fStack_e8);
  uVar8 = func_0x000180121e20(&uStack_b0);
  FUN_180293f50(*(undefined8 *)(lVar20 + 0x2e8),&uStack_d8,&fStack_c8,uVar8,
                uVar9 & 0xffffffff00000000,CONCAT44(uVar26,0xf));
  lVar19 = _DAT_180c8a9b0;
  if (iVar7 == *(int *)(_DAT_180c8a9b0 + 0x1ca0)) {
    FUN_1801230e0(&fStack_e8,10,_DAT_180c8a9b0);
    lVar19 = _DAT_180c8a9b0;
  }
LAB_180119eed:
  if (((param_3 & 2) != 0) && (*(longlong *)(lVar16 + 0x210) != 0)) {
    FUN_180134400();
    pfVar11 = (float *)func_0x00018012df00(&fStack_c8);
    fStack_e0 = fVar21 - (*pfVar11 - fVar24);
    lVar19 = _DAT_180c8a9b0;
  }
  fVar21 = fStack_f0;
  if (fStack_f0 != 0.0) {
    FUN_18012d910(0,lVar17 + 0x16d8);
    lVar19 = _DAT_180c8a9b0;
  }
  uStack_d8 = 0;
  pcVar15 = param_1;
  if (param_1 != (char *)0xffffffffffffffff) {
    while (*pcVar15 != '\0') {
      if (((*pcVar15 == '#') && (pcVar15[1] == '#')) ||
         (pcVar15 = pcVar15 + 1, pcVar15 == (char *)0xffffffffffffffff)) break;
    }
  }
  lVar17 = lVar19;
  if (((int)pcVar15 != (int)param_1) &&
     (FUN_1801224c0(*(undefined8 *)(*(longlong *)(lVar19 + 0x1af8) + 0x2e8),&fStack_c0,&fStack_e0,
                    param_1,pcVar15,&fStack_d0,&uStack_d8,0), lVar17 = _DAT_180c8a9b0,
     *(char *)(lVar19 + 0x2e38) != '\0')) {
    FUN_18013c800(&fStack_c0,param_1,pcVar15);
    lVar17 = _DAT_180c8a9b0;
  }
  if (fVar21 != 0.0) {
    func_0x00018012d970(1);
  }
  if (((bVar6 != 0) && ((*(uint *)(lVar16 + 0xc) & 0x4000000) != 0)) &&
     (((param_3 & 1) == 0 &&
      ((((*(byte *)(lVar16 + 0x1a8) & 0x20) == 0 &&
        (iVar7 = *(int *)(lVar17 + 0x1bc0) + -1, -1 < iVar7)) && (iVar7 < *(int *)(lVar17 + 0x1bb0))
       ))))) {
    lVar16 = (longlong)iVar7;
    lVar19 = lVar16 * 0x30;
    if (*(int *)(lVar19 + *(longlong *)(lVar17 + 0x1bc8)) ==
        *(int *)(*(longlong *)(lVar17 + 0x1bb8) + lVar19)) {
      if (0 < iVar7) {
        plVar12 = (longlong *)(lVar19 + 8 + *(longlong *)(lVar17 + 0x1bb8));
        do {
          if ((*plVar12 == 0) || ((*(uint *)(*plVar12 + 0xc) & 0x10000000) == 0)) break;
          iVar7 = iVar7 + -1;
          lVar16 = lVar16 + -1;
          plVar12 = plVar12 + -6;
        } while (0 < lVar16);
      }
      FUN_18012ee20(iVar7,CONCAT71((int7)((ulonglong)lVar16 >> 8),1));
      if (*(longlong *)(lVar17 + 0x1c98) != 0) {
        *(undefined1 *)(*(longlong *)(lVar17 + 0x1c98) + 0x17c) = 1;
      }
    }
  }
  return (ulonglong)bVar6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_1801199c7(undefined4 param_1,undefined8 param_2,ulonglong param_3)

{
  uint *puVar1;
  undefined4 *puVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  byte bVar8;
  int iVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  longlong lVar12;
  float *pfVar13;
  longlong *plVar14;
  int iVar15;
  uint uVar16;
  char *pcVar17;
  longlong lVar18;
  longlong unaff_RBX;
  char *pcVar19;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  char cVar20;
  longlong lVar21;
  longlong in_R11;
  char *unaff_R14;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined4 unaff_XMM9_Da;
  float fVar26;
  undefined4 unaff_XMM9_Db;
  undefined4 unaff_XMM9_Dc;
  undefined4 unaff_XMM9_Dd;
  undefined4 unaff_XMM10_Da;
  undefined4 unaff_XMM10_Db;
  undefined4 unaff_XMM10_Dc;
  undefined4 unaff_XMM10_Dd;
  undefined4 unaff_XMM11_Da;
  undefined4 unaff_XMM11_Db;
  undefined4 unaff_XMM11_Dc;
  undefined4 unaff_XMM11_Dd;
  undefined8 in_stack_00000020;
  char cStack0000000000000040;
  char cStack0000000000000041;
  float fStack0000000000000048;
  float fStack000000000000004c;
  float in_stack_00000050;
  float fStack0000000000000054;
  float in_stack_00000058;
  
  uVar10 = (undefined4)((ulonglong)in_stack_00000020 >> 0x20);
  *(undefined4 *)(in_R11 + -0x78) = unaff_XMM9_Da;
  *(undefined4 *)(in_R11 + -0x74) = unaff_XMM9_Db;
  *(undefined4 *)(in_R11 + -0x70) = unaff_XMM9_Dc;
  *(undefined4 *)(in_R11 + -0x6c) = unaff_XMM9_Dd;
  *(undefined4 *)(in_R11 + -0x88) = unaff_XMM10_Da;
  *(undefined4 *)(in_R11 + -0x84) = unaff_XMM10_Db;
  *(undefined4 *)(in_R11 + -0x80) = unaff_XMM10_Dc;
  *(undefined4 *)(in_R11 + -0x7c) = unaff_XMM10_Dd;
  *(undefined4 *)(in_R11 + -0x98) = unaff_XMM11_Da;
  *(undefined4 *)(in_R11 + -0x94) = unaff_XMM11_Db;
  *(undefined4 *)(in_R11 + -0x90) = unaff_XMM11_Dc;
  *(undefined4 *)(in_R11 + -0x8c) = unaff_XMM11_Dd;
  if (((param_3 & 2) != 0) && (*(longlong *)(unaff_RSI + 0x210) != 0)) {
    param_1 = FUN_180126d80();
    unaff_RDI = _DAT_180c8a9b0;
  }
  iVar9 = FUN_180121250(param_1,0,
                        *(undefined4 *)
                         (*(longlong *)(unaff_RSI + 0x220) + -4 +
                         (longlong)*(int *)(unaff_RSI + 0x218) * 4));
  if (*(int *)(unaff_RDI + 0x1b2c) == iVar9) {
    *(int *)(unaff_RDI + 0x1b34) = iVar9;
  }
  if (*(int *)(unaff_RDI + 0x1b30) == iVar9) {
    *(undefined1 *)(unaff_RDI + 0x1b3f) = 1;
  }
  pcVar17 = unaff_R14;
  if (unaff_R14 != (char *)0xffffffffffffffff) {
    while (*pcVar17 != '\0') {
      if (((*pcVar17 == '#') && (pcVar17[1] == '#')) ||
         (pcVar17 = pcVar17 + 1, pcVar17 == (char *)0xffffffffffffffff)) break;
    }
  }
  pfVar13 = *(float **)(unaff_RDI + 0x19f0);
  fVar22 = *(float *)(unaff_RDI + 0x19f8);
  if (unaff_R14 == pcVar17) {
    fVar24 = 0.0;
    fStack000000000000004c = fVar22;
  }
  else {
    FUN_180297340(pfVar13,&stack0x00000048);
    if (0.0 < fStack0000000000000048) {
      fStack0000000000000048 = fStack0000000000000048 - fVar22 / *pfVar13;
    }
    fVar24 = (float)(int)(fStack0000000000000048 + 0.95);
  }
  pfVar13 = *(float **)(unaff_RBP + 0x7f);
  *(float *)(unaff_RBP + -0x6d) = fStack000000000000004c;
  *(float *)(unaff_RBP + -0x71) = fVar24;
  fVar22 = pfVar13[1];
  if (pfVar13[1] == 0.0) {
    fVar22 = fStack000000000000004c;
  }
  fVar25 = *pfVar13;
  if (*pfVar13 == 0.0) {
    fVar25 = fVar24;
  }
  fVar3 = *(float *)(unaff_RSI + 0x100);
  fVar26 = *(float *)(unaff_RSI + 0x104) + *(float *)(unaff_RSI + 0x128);
  *(float *)(unaff_RBP + -0x61) = fVar3;
  *(float *)(unaff_RBP + -0x5d) = fVar26;
  *(float *)(unaff_RBP + -0x59) = fVar3 + fVar25;
  fStack0000000000000048 = (fVar3 + fVar25) - fVar3;
  *(float *)(unaff_RBP + -0x55) = fVar26 + fVar22;
  fStack000000000000004c = (fVar26 + fVar22) - fVar26;
  func_0x000180124080(&stack0x00000048,0);
  if ((param_3 & 2) == 0) {
    lVar12 = *(longlong *)(unaff_RDI + 0x1af8);
    lVar18 = *(longlong *)(lVar12 + 0x210);
    fVar25 = *(float *)(lVar12 + 0x278) - *(float *)(lVar12 + 0x40);
    if (lVar18 != 0) {
      iVar5 = *(int *)(lVar18 + 0xc) + 1;
      iVar15 = *(int *)(lVar18 + 0xc);
      if (-1 < iVar5) {
        iVar15 = iVar5;
      }
      fVar25 = ((*(float *)(lVar18 + 0x18) - *(float *)(lVar18 + 0x14)) *
                *(float *)((longlong)iVar15 * 0x1c + *(longlong *)(lVar18 + 0x38)) +
               *(float *)(lVar18 + 0x14)) - *(float *)(lVar12 + 0x70);
    }
  }
  else {
    fVar25 = *(float *)(*(longlong *)(unaff_RDI + 0x1af8) + 0x278) -
             *(float *)(*(longlong *)(unaff_RDI + 0x1af8) + 0x40);
  }
  in_stack_00000058 =
       ((fVar25 + *(float *)(unaff_RSI + 0x40)) - *(float *)(unaff_RSI + 0x70)) -
       *(float *)(unaff_RSI + 0x100);
  if (in_stack_00000058 <= fVar24) {
    in_stack_00000058 = fVar24;
  }
  fVar24 = pfVar13[1];
  if (pfVar13[1] == 0.0) {
    fVar24 = fVar22;
  }
  uVar4 = *(uint *)(unaff_RBP + 0x77);
  fVar22 = *pfVar13;
  if ((fVar22 != 0.0) && ((uVar4 & 0x2000) == 0)) {
    in_stack_00000058 = fVar22;
  }
  in_stack_00000058 = fVar3 + in_stack_00000058;
  if ((fVar22 == 0.0) || ((uVar4 & 0x2000) != 0)) {
    in_stack_00000058 = *(float *)(unaff_RSI + 0x70) + in_stack_00000058;
  }
  fVar23 = (float)(int)(*(float *)(unaff_RBX + 0x166c) * 0.5);
  in_stack_00000050 = fVar3 - fVar23;
  fVar22 = (float)(int)(*(float *)(unaff_RBX + 0x1670) * 0.5);
  in_stack_00000058 = in_stack_00000058 + (*(float *)(unaff_RBX + 0x166c) - fVar23);
  fStack0000000000000054 = fVar26 - fVar22;
  *(float *)(unaff_RBP + -0x7d) = (*(float *)(unaff_RBX + 0x1670) - fVar22) + fVar26 + fVar24;
  uVar11 = FUN_180124190(&stack0x00000050,iVar9,0);
  if ((char)uVar11 == '\0') {
    if (((param_3 & 2) != 0) && (*(longlong *)(unaff_RSI + 0x210) != 0)) {
      uVar11 = FUN_180134400();
    }
    return uVar11 & 0xffffffffffffff00;
  }
  uVar16 = (uVar4 & 0x400) * 2;
  uVar6 = uVar16 | 4;
  if ((uVar4 & 0x800) == 0) {
    uVar6 = uVar16;
  }
  uVar16 = uVar6 | 8;
  if ((uVar4 & 0x1000) == 0) {
    uVar16 = uVar6;
  }
  fStack0000000000000048 = (float)(uVar4 & 8);
  uVar6 = uVar16 | 0x100;
  if (fStack0000000000000048 == 0.0) {
    uVar6 = uVar16;
  }
  uVar16 = uVar6 | 0x12;
  if ((uVar4 & 4) == 0) {
    uVar16 = uVar6;
  }
  pcVar17 = (char *)CONCAT44(uVar10,uVar16);
  bVar8 = FUN_18010f170(&stack0x00000050,iVar9,&stack0x00000040,(longlong)&stack0x00000040 + 1,
                        pcVar17);
  fVar22 = in_stack_00000058;
  cVar20 = '\0';
  if (fStack0000000000000048 == 0.0) {
    cVar20 = *(char *)(unaff_RBP + 0x6f);
  }
  if ((bVar8 == 0) && (cStack0000000000000040 == '\0')) {
LAB_180119e1f:
    if (cVar20 == '\0') goto LAB_180119eed;
  }
  else {
    if ((*(char *)(unaff_RBX + 0x1d07) == '\0') &&
       ((*(longlong *)(unaff_RBX + 0x1c98) == unaff_RSI &&
        (*(int *)(unaff_RBX + 0x1cfc) == *(int *)(unaff_RSI + 0x16c))))) {
      *(undefined1 *)(unaff_RBX + 0x1d06) = 1;
      iVar5 = *(int *)(unaff_RSI + 0x16c);
      *(int *)(unaff_RDI + 0x1ca0) = iVar9;
      *(int *)(*(longlong *)(unaff_RDI + 0x1c98) + 0x3c8 + (longlong)iVar5 * 4) = iVar9;
    }
    if (bVar8 != 0) {
      *(undefined1 *)(unaff_RDI + 0x1b3e) = 1;
      puVar1 = (uint *)(*(longlong *)(unaff_RDI + 0x1af8) + 0x148);
      *puVar1 = *puVar1 | 4;
    }
    if (cStack0000000000000040 == '\0') goto LAB_180119e1f;
  }
  if ((cStack0000000000000041 == '\0') || (cStack0000000000000040 == '\0')) {
    lVar12 = (ulonglong)(cStack0000000000000040 != '\0') + 0x18;
  }
  else {
    lVar12 = 0x1a;
  }
  lVar18 = *(longlong *)(unaff_RDI + 0x1af8);
  *(float *)(unaff_RBP + -0x69) = in_stack_00000058;
  *(float *)(unaff_RBP + -0x79) = in_stack_00000050;
  puVar2 = (undefined4 *)(unaff_RDI + 0x1628 + (lVar12 + 10) * 0x10);
  uVar10 = puVar2[1];
  uVar7 = puVar2[2];
  fVar24 = (float)puVar2[3];
  *(undefined4 *)(unaff_RBP + -0x51) = *puVar2;
  *(undefined4 *)(unaff_RBP + -0x4d) = uVar10;
  *(undefined4 *)(unaff_RBP + -0x49) = uVar7;
  *(float *)(unaff_RBP + -0x45) = fVar24;
  *(float *)(unaff_RBP + -0x45) = fVar24 * *(float *)(unaff_RDI + 0x1628);
  *(undefined4 *)(unaff_RBP + -0x65) = *(undefined4 *)(unaff_RBP + -0x7d);
  *(float *)(unaff_RBP + -0x75) = fStack0000000000000054;
  uVar10 = func_0x000180121e20(unaff_RBP + -0x51);
  pcVar17 = (char *)((ulonglong)pcVar17 & 0xffffffff00000000);
  FUN_180293f50(*(undefined8 *)(lVar18 + 0x2e8),unaff_RBP + -0x79,unaff_RBP + -0x69,uVar10,pcVar17);
  unaff_RDI = _DAT_180c8a9b0;
  if (iVar9 == *(int *)(_DAT_180c8a9b0 + 0x1ca0)) {
    FUN_1801230e0(&stack0x00000050,10,_DAT_180c8a9b0);
    unaff_RDI = _DAT_180c8a9b0;
  }
LAB_180119eed:
  if (((param_3 & 2) != 0) && (*(longlong *)(unaff_RSI + 0x210) != 0)) {
    FUN_180134400();
    pfVar13 = (float *)func_0x00018012df00(unaff_RBP + -0x69);
    in_stack_00000058 = fVar22 - (*pfVar13 - fVar25);
    unaff_RDI = _DAT_180c8a9b0;
  }
  uVar4 = (uint)fStack0000000000000048;
  if (fStack0000000000000048 != 0.0) {
    FUN_18012d910(0,unaff_RBX + 0x16d8);
    unaff_RDI = _DAT_180c8a9b0;
  }
  *(undefined8 *)(unaff_RBP + -0x79) = 0;
  pcVar19 = unaff_R14;
  if (unaff_R14 != (char *)0xffffffffffffffff) {
    while (*pcVar19 != '\0') {
      if (((*pcVar19 == '#') && (pcVar19[1] == '#')) ||
         (pcVar19 = pcVar19 + 1, pcVar19 == (char *)0xffffffffffffffff)) break;
    }
  }
  lVar12 = unaff_RDI;
  if (((int)pcVar19 != (int)unaff_R14) &&
     (FUN_1801224c0(*(undefined8 *)(*(longlong *)(unaff_RDI + 0x1af8) + 0x2e8),unaff_RBP + -0x61,
                    &stack0x00000058), lVar12 = _DAT_180c8a9b0, pcVar17 = pcVar19,
     *(char *)(unaff_RDI + 0x2e38) != '\0')) {
    FUN_18013c800(unaff_RBP + -0x61);
    lVar12 = _DAT_180c8a9b0;
    pcVar17 = pcVar19;
  }
  if (uVar4 != 0) {
    func_0x00018012d970(1);
  }
  if (((bVar8 != 0) && ((*(uint *)(unaff_RSI + 0xc) & 0x4000000) != 0)) &&
     (((*(uint *)(unaff_RBP + 0x77) & 1) == 0 &&
      ((((*(byte *)(unaff_RSI + 0x1a8) & 0x20) == 0 &&
        (iVar9 = *(int *)(lVar12 + 0x1bc0) + -1, -1 < iVar9)) && (iVar9 < *(int *)(lVar12 + 0x1bb0))
       ))))) {
    lVar18 = (longlong)iVar9;
    lVar21 = lVar18 * 0x30;
    if (*(int *)(lVar21 + *(longlong *)(lVar12 + 0x1bc8)) ==
        *(int *)(*(longlong *)(lVar12 + 0x1bb8) + lVar21)) {
      if (0 < iVar9) {
        plVar14 = (longlong *)(lVar21 + 8 + *(longlong *)(lVar12 + 0x1bb8));
        do {
          if ((*plVar14 == 0) || ((*(uint *)(*plVar14 + 0xc) & 0x10000000) == 0)) break;
          iVar9 = iVar9 + -1;
          lVar18 = lVar18 + -1;
          plVar14 = plVar14 + -6;
        } while (0 < lVar18);
      }
      FUN_18012ee20(iVar9,CONCAT71((int7)((ulonglong)lVar18 >> 8),1),iVar9,lVar21,pcVar17);
      if (*(longlong *)(lVar12 + 0x1c98) != 0) {
        *(undefined1 *)(*(longlong *)(lVar12 + 0x1c98) + 0x17c) = 1;
      }
    }
  }
  return (ulonglong)bVar8;
}



undefined1 FUN_180119ced(void)

{
  longlong unaff_RSI;
  int unaff_R13D;
  
  if ((unaff_R13D != 0) && (*(longlong *)(unaff_RSI + 0x210) != 0)) {
    FUN_180134400();
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





