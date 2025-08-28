#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part090.c - 核心引擎模块第090部分
// 本文件包含文本处理、缓冲区操作和字符串计算相关功能

// 函数：计算文本布局参数
// 参数：layout_params - 布局参数输出缓冲区，text_data - 文本数据指针，start_pos - 起始位置
// 功能：根据文本数据计算布局所需的各项参数
void calculate_text_layout_params(undefined4 *layout_params, longlong text_data, int start_pos)
{
  float max_width;
  ushort current_char;
  longlong text_buffer;
  float *char_width_table;
  float current_width;
  float total_width;
  float scale_factor;
  
  text_buffer = *(longlong *)(text_data + 0x10);
  max_width = 0.0;
  current_width = 0.0;
  char_width_table = *(float **)(GLOBAL_CHAR_WIDTH_TABLE + 0x19f0);
  scale_factor = *(float *)(GLOBAL_CHAR_WIDTH_TABLE + 0x19f8);
  current_char_ptr = (ushort *)((longlong)start_pos * 2 + text_buffer);
  
  do {
    total_width = 0.0;
    if ((ushort *)(text_buffer + (longlong)*(int *)(text_data + 0x3c) * 2) <= current_char_ptr) {
      // 到达文本末尾，更新最终参数
      if (max_width <= current_width) {
        max_width = current_width;
      }
      if ((0.0 < current_width) || (total_width == 0.0)) {
        total_width = total_width + scale_factor;
      }
      layout_params[1] = max_width;
      layout_params[2] = total_width;
      layout_params[5] = (int)((longlong)current_char_ptr + ((longlong)start_pos * -2 - text_buffer) >> 1);
      layout_params[4] = total_width;
      *layout_params = 0;
      layout_params[3] = 0;
      return;
    }
    
    current_char = *current_char_ptr;
    current_char_ptr = current_char_ptr + 1;
    
    if (current_char == 10) {  // 换行符
      max_width = current_width;
      if (current_width <= 0.0) {
        max_width = 0.0;
      }
      current_width = 0.0;
      total_width = scale_factor;
      goto UPDATE_FINAL_PARAMS;
    }
    
    if (current_char != 0xd) {  // 不是回车符
      if ((int)(uint)current_char < (int)char_width_table[8]) {
        total_width = *(float *)(*(longlong *)(char_width_table + 10) + (ulonglong)current_char * 4);
      }
      else {
        total_width = char_width_table[0x12];
      }
      current_width = current_width + total_width * (scale_factor / *char_width_table);
    }
  } while( true );
}

// 函数：查找前一个单词边界
// 参数：text_data - 文本数据指针，position - 起始位置
// 功能：从指定位置向前查找单词边界
int find_previous_word_boundary(longlong text_data, int position)
{
  ushort current_char;
  bool continue_search;
  longlong search_pos;
  
  position = position + -1;
  if (-1 < position) {
    search_pos = (longlong)position;
    do {
      if (search_pos < 1) break;
      
      current_char = *(ushort *)(*(longlong *)(text_data + 0x10) + -2 + search_pos * 2);
      
      // 检查是否为分隔符或特殊字符
      if (((((ushort)(current_char - 0x20) < 0x3e) &&
           ((WORD_DELIMITER_MASK >> ((ulonglong)(current_char - 0x20 & 0xffff) & 0x3f) & 1) != 0)) ||
          (current_char == 9)) || ((current_char == 0x3000 || ((ushort)(current_char - 0x7b) < 3)))) {
        current_char = *(ushort *)(*(longlong *)(text_data + 0x10) + search_pos * 2);
        if (((0x3d < (ushort)(current_char - 0x20)) ||
            ((WORD_DELIMITER_MASK >> ((ulonglong)(current_char - 0x20 & 0xffff) & 0x3f) & 1) == 0)) &&
           (((current_char != 9 && (current_char != 0x3000)) && (2 < (ushort)(current_char - 0x7b))))) break;
      }
      
      position = position + -1;
      continue_search = 0 < search_pos;
      search_pos = search_pos + -1;
    } while (continue_search);
  }
  
  if (position < 0) {
    position = 0;
  }
  return position;
}

// 函数：查找后一个单词边界
// 参数：text_data - 文本数据指针，position - 起始位置
// 功能：从指定位置向后查找单词边界
int find_next_word_boundary(undefined8 text_data, int position)
{
  ushort current_char;
  bool continue_search;
  longlong search_pos;
  longlong text_ptr;
  
  search_pos = (longlong)position;
  do {
    if (search_pos < 1) break;
    
    current_char = *(ushort *)(*(longlong *)(text_ptr + 0x10) + -2 + search_pos * 2);
    
    // 检查是否为分隔符或特殊字符
    if (((((ushort)(current_char - 0x20) < 0x3e) &&
         ((WORD_DELIMITER_MASK >> ((ulonglong)(current_char - 0x20 & 0xffff) & 0x3f) & 1) != 0)) ||
        (current_char == 9)) || ((current_char == 0x3000 || ((ushort)(current_char - 0x7b) < 3)))) {
      current_char = *(ushort *)(*(longlong *)(text_ptr + 0x10) + search_pos * 2);
      if (((0x3d < (ushort)(current_char - 0x20)) ||
          ((WORD_DELIMITER_MASK >> ((ulonglong)(current_char - 0x20 & 0xffff) & 0x3f) & 1) == 0)) &&
         (((current_char != 9 && (current_char != 0x3000)) && (2 < (ushort)(current_char - 0x7b))))) break;
    }
    
    position = position + -1;
    continue_search = 0 < search_pos;
    search_pos = search_pos + -1;
  } while (continue_search);
  
  if (position < 0) {
    position = 0;
  }
  return position;
}

// 函数：边界检查函数（简化版本）
// 参数：text_data - 文本数据指针，position - 位置
// 功能：确保位置不小于0
int validate_position_bound(undefined8 text_data, int position)
{
  if (position < 0) {
    position = 0;
  }
  return position;
}

// 函数：查找下一个字符位置
// 参数：text_data - 文本数据指针，position - 起始位置
// 功能：从指定位置查找下一个有效字符位置
int find_next_character_position(longlong text_data, int position)
{
  short current_char;
  int text_length;
  int current_pos;
  longlong search_pos;
  
  text_length = *(int *)(text_data + 0x3c);
  position = position + 1;
  current_pos = position - text_length;
  
  if (position < text_length) {
    search_pos = (longlong)position;
    do {
      if (search_pos < 1) break;
      
      current_char = *(short *)(*(longlong *)(text_data + 0x10) + -2 + search_pos * 2);
      
      // 检查字符类型
      if (((((ushort)(current_char - 0x20U) < 0x3e) &&
           ((WORD_DELIMITER_MASK >> ((ulonglong)(ushort)(current_char - 0x20U) & 0x3f) & 1) != 0)) ||
          (current_char == 9)) || ((current_char == 0x3000 || ((ushort)(current_char - 0x7bU) < 3)))) {
        current_char = *(short *)(*(longlong *)(text_data + 0x10) + search_pos * 2);
        if (((0x3d < (ushort)(current_char - 0x20U)) ||
            ((WORD_DELIMITER_MASK >> ((ulonglong)(ushort)(current_char - 0x20U) & 0x3f) & 1) == 0)) &&
           (((current_char != 9 && (current_char != 0x3000)) && (2 < (ushort)(current_char - 0x7bU))))) break;
      }
      
      position = position + 1;
      search_pos = search_pos + 1;
    } while (search_pos < text_length);
    
    current_pos = position - text_length;
  }
  
  if (position != text_length && SBORROW4(position, text_length) == current_pos < 0) {
    position = text_length;
  }
  return position;
}

// 函数：查找前一个字符位置
// 参数：text_data - 文本数据指针，position - 起始位置
// 功能：从指定位置查找前一个有效字符位置
int find_previous_character_position(undefined8 text_data, int position)
{
  short current_char;
  longlong text_buffer;
  longlong search_pos;
  int max_length;
  undefined4 temp_reg;
  
  search_pos = (longlong)position;
  do {
    if (search_pos < 1) break;
    
    current_char = *(short *)(*(longlong *)(text_buffer + 0x10) + -2 + search_pos * 2);
    
    // 检查字符类型
    if (((((ushort)(current_char - 0x20U) < 0x3e) &&
         ((WORD_DELIMITER_MASK >> ((ulonglong)(ushort)(current_char - 0x20U) & 0x3f) & 1) != 0)) ||
        (current_char == 9)) || ((current_char == 0x3000 || ((ushort)(current_char - 0x7bU) < 3)))) {
      current_char = *(short *)(*(longlong)(text_buffer + 0x10) + search_pos * 2);
      if (((0x3d < (ushort)(current_char - 0x20U)) ||
          ((WORD_DELIMITER_MASK >> ((ulonglong)(ushort)(current_char - 0x20U) & 0x3f) & 1) == 0)) &&
         (((current_char != 9 && (current_char != 0x3000)) && (2 < (ushort)(current_char - 0x7bU))))) break;
    }
    
    position = position + 1;
    search_pos = search_pos + 1;
  } while (search_pos < CONCAT44(temp_reg, max_length));
  
  if (max_length < position) {
    position = max_length;
  }
  return position;
}

// 函数：条件选择函数
// 参数：condition - 条件值，value1 - 值1，value2 - 值2
// 功能：根据条件选择返回值
undefined4 conditional_select(undefined8 condition, undefined4 value1, undefined4 value2)
{
  undefined4 selected_value;
  bool zero_flag;
  char sign_flag;
  char overflow_flag;
  
  if (!zero_flag && overflow_flag == sign_flag) {
    value2 = selected_value;
  }
  return value2;
}

// 函数：删除文本段
// 参数：text_data - 文本数据指针，start_pos - 起始位置，length - 删除长度
// 功能：从指定位置删除指定长度的文本
void delete_text_segment(longlong text_data, int start_pos, int length)
{
  short *text_ptr;
  longlong buffer_offset;
  short current_char;
  longlong end_pos;
  int chars_removed;
  short *dest_ptr;
  
  end_pos = *(longlong *)(text_data + 0x10);
  text_ptr = (short *)(end_pos + (longlong)start_pos * 2);
  chars_removed = calculate_string_difference(text_ptr, text_ptr + length);
  *(int *)(text_data + 0x38) = *(int *)(text_data + 0x38) - chars_removed;
  buffer_offset = (longlong)length + (longlong)start_pos;
  *(int *)(text_data + 0x3c) = *(int *)(text_data + 0x3c) - length;
  dest_ptr = (short *)(end_pos + buffer_offset * 2);
  current_char = *(short *)(end_pos + buffer_offset * 2);
  
  while (current_char != 0) {
    dest_ptr = dest_ptr + 1;
    *text_ptr = current_char;
    text_ptr = text_ptr + 1;
    current_char = *dest_ptr;
  }
  *text_ptr = 0;
  return;
}

// 函数：插入文本
// 参数：text_data - 文本数据指针，position - 插入位置，new_text - 新文本指针，new_length - 新文本长度
// 功能：在指定位置插入新文本
ulonglong insert_text(longlong text_data, int position, longlong new_text, int new_length)
{
  int text_length;
  longlong buffer_ptr;
  longlong new_text_size;
  int available_space;
  int capacity_needed;
  ulonglong result;
  uint buffer_flags;
  longlong capacity_check;
  
  text_length = *(int *)(text_data + 0x3c);
  capacity_check = (longlong)position;
  new_text_size = (longlong)new_length * 2;
  buffer_flags = *(uint *)(text_data + 0xe74) >> 0x12;
  result = calculate_string_difference(new_text, new_text_size + new_text);
  
  if (((buffer_flags & 1) == 0) && (*(int *)(text_data + 0x40) < *(int *)(text_data + 0x38) + 1 + (int)result)) {
    return result & 0xffffffffffffff00;
  }
  
  if (*(int *)(text_data + 8) < new_length + 1 + text_length) {
    if ((buffer_flags & 1) == 0) {
      return result & 0xffffffffffffff00;
    }
    
    capacity_needed = new_length;
    if (new_length < 0x101) {
      capacity_needed = 0x100;
    }
    
    available_space = new_length * 4;
    if (available_space < 0x20) {
      available_space = 0x20;
    }
    else if (capacity_needed < available_space) {
      available_space = capacity_needed;
    }
    
    expand_buffer_capacity(text_data + 8, text_length + 1 + available_space);
  }
  
  buffer_ptr = *(longlong *)(text_data + 0x10);
  if (position != text_length) {
    // 移动现有文本为新文本腾出空间
    memmove(buffer_ptr + (capacity_check + new_length) * 2, buffer_ptr + capacity_check * 2, (longlong)(text_length - position) * 2);
  }
  
  // 复制新文本到指定位置
  memcpy(buffer_ptr + capacity_check * 2, new_text, new_text_size);
}

// 函数：移动文本块
// 参数：无明确参数（使用寄存器变量）
// 功能：移动文本块到新位置
void move_text_block(void)
{
  longlong text_buffer;
  longlong source_offset;
  longlong dest_offset;
  int source_pos;
  int dest_pos;
  int length;
  undefined4 temp_reg;
  
  text_buffer = *(longlong *)(source_offset + 0x10);
  if (dest_pos != source_pos) {
    // 移动文本块
    memmove(text_buffer + (CONCAT44(temp_reg, dest_pos) + dest_offset) * 2,
            text_buffer + CONCAT44(temp_reg, source_pos) * 2, (longlong)(source_pos - dest_pos) * 2);
  }
  
  // 复制文本到目标位置
  memcpy(text_buffer + CONCAT44(temp_reg, source_pos) * 2);
}

// 函数：空函数（占位符）
// 功能：无实际功能，可能用作占位符
void empty_function_placeholder(void)
{
  return;
}

// 函数：查找文本位置
// 参数：text_data - 文本数据指针，x_coord - X坐标，y_coord - Y坐标
// 功能：根据坐标查找对应的文本位置
int find_text_position_by_coords(longlong text_data, float x_coord, float y_coord)
{
  int text_length;
  int current_pos;
  int segment_start;
  uint segment_length;
  ulonglong layout_data;
  float total_width;
  float segment_width;
  float char_width;
  float accumulated_width;
  undefined8 layout_params;
  float segment_height;
  undefined8 temp_param1;
  uint temp_param2;
  
  text_length = *(int *)(text_data + 0x3c);
  segment_start = 0;
  layout_params = 0;
  temp_param1 = 0;
  accumulated_width = 0.0;
  temp_param2 = 0;
  current_pos = segment_start;
  
  if (text_length < 1) {
    return text_length;
  }
  
  while( true ) {
    calculate_text_layout_params(&layout_params, text_data, current_pos);
    layout_data = (ulonglong)temp_param2;
    
    if ((int)temp_param2 < 1) {
      return text_length;
    }
    
    if ((current_pos == 0) && (y_coord < (float)temp_param1 + accumulated_width)) {
      return 0;
    }
    
    if (y_coord < temp_param1._4_4_ + accumulated_width) break;
    
    accumulated_width = accumulated_width + segment_height;
    current_pos = current_pos + temp_param2;
    
    if (text_length <= current_pos) {
      return text_length;
    }
  }
  
  if (text_length <= current_pos) {
    return text_length;
  }
  
  if (x_coord < (float)layout_params) {
    return current_pos;
  }
  
  segment_length = temp_param2;
  
  if ((x_coord < layout_params._4_4_) && (accumulated_width = (float)layout_params, 0 < (int)temp_param2)) {
    do {
      char_width = (float)get_character_width_at_position(text_data, current_pos, segment_start);
      segment_length = (uint)layout_data;
      
      if (x_coord < char_width + accumulated_width) {
        if (x_coord < char_width * 0.5 + accumulated_width) {
          return segment_start + current_pos;
        }
        return segment_start + current_pos + 1;
      }
      
      segment_start = segment_start + 1;
      accumulated_width = char_width + accumulated_width;
    } while (segment_start < (int)segment_length);
  }
  
  current_pos = segment_length + current_pos;
  
  if (*(short *)(*(longlong *)(text_data + 0x10) + -2 + (longlong)current_pos * 2) == 10) {
    current_pos = current_pos + -1;
  }
  
  return current_pos;
}

// 函数：设置文本选择范围
// 参数：text_data - 文本数据指针，selection_range - 选择范围指针，x_coord - X坐标，y_coord - Y坐标
// 功能：根据坐标设置文本选择范围
void set_text_selection_range(undefined8 text_data, undefined4 *selection_range, undefined4 x_coord, undefined4 y_coord)
{
  undefined4 selected_pos;
  undefined1 temp_buffer [12];
  undefined4 temp_value;
  
  if (*(char *)(selection_range + 4) != '\0') {
    calculate_text_layout_params(temp_buffer, text_data, 0);
    y_coord = temp_value;
  }
  
  selected_pos = find_text_position_by_coords(text_data, x_coord, y_coord);
  *selection_range = selected_pos;
  selection_range[1] = selected_pos;
  selection_range[2] = selected_pos;
  *(undefined1 *)((longlong)selection_range + 0xf) = 0;
  return;
}

// 函数：扩展文本选择范围
// 参数：text_data - 文本数据指针，selection_range - 选择范围指针，x_coord - X坐标，y_coord - Y坐标
// 功能：根据坐标扩展文本选择范围
void extend_text_selection_range(undefined8 text_data, undefined4 *selection_range, undefined4 x_coord, undefined4 y_coord)
{
  undefined4 selected_pos;
  undefined1 temp_buffer [12];
  undefined4 temp_value;
  
  if (*(char *)(selection_range + 4) != '\0') {
    calculate_text_layout_params(temp_buffer, text_data, 0);
    y_coord = temp_value;
  }
  
  if (selection_range[1] == selection_range[2]) {
    selection_range[1] = *selection_range;
  }
  
  selected_pos = find_text_position_by_coords(text_data, x_coord, y_coord);
  selection_range[2] = selected_pos;
  *selection_range = selected_pos;
  return;
}

// 全局变量声明（可能与较小的符号重叠）

// 函数：计算文本尺寸
// 参数：dimensions - 尺寸输出数组，text_data - 文本数据指针，target_width - 目标宽度，calculation_mode - 计算模式
// 功能：计算文本的显示尺寸
void calculate_text_dimensions(float *dimensions, longlong text_data, float target_width, int calculation_mode)
{
  ushort current_char;
  float *width_table;
  longlong text_buffer;
  float max_width;
  float current_width;
  float char_width;
  float line_height;
  longlong char_offset;
  float layout_height;
  float line_spacing;
  float ascent;
  float descent;
  float x_advance;
  
  max_text_width = *(float *)(text_data + 0x3c);
  current_width = 0.0;
  total_width = 0.0;
  
  if (target_width == max_text_width) {
    if (calculation_mode == 0) {
      // 计算整个文本的尺寸
      dimensions[0] = 0.0;
      dimensions[1] = 0.0;
      dimensions[2] = 1.0;
      line_height = 0.0;
      
      if (0 < (int)max_text_width) {
        do {
          current_width = line_height;
          calculate_text_layout_params(&layout_height, text_data, current_width);
          total_width = (float)((int)current_width + (int)x_advance);
          line_height = total_width;
        } while ((int)total_width < (int)max_text_width);
      }
      
      dimensions[5] = current_width;
      dimensions[3] = total_width;
      dimensions[4] = 0.0;
    }
    else {
      // 使用不同的计算模式
      calculate_text_layout_params(&layout_height, text_data, 0);
      dimensions[1] = 0.0;
      dimensions[2] = line_spacing - descent;
      *dimensions = ascent;
      dimensions[3] = 0.0;
      dimensions[4] = max_text_width;
    }
  }
  else {
    dimensions[1] = 0.0;
    calculate_text_layout_params(&layout_height, text_data, 0);
    line_height = 0.0;
    current_width = x_advance;
    
    while ((int)current_width <= (int)target_width) {
      total_width = (float)((int)line_height + (int)x_advance);
      dimensions[1] = char_width + dimensions[1];
      calculate_text_layout_params(&layout_height, text_data, total_width);
      char_width = line_height;
      line_height = total_width;
      current_width = (float)((int)x_advance + (int)total_width);
    }
    
    dimensions[3] = line_height;
    dimensions[4] = x_advance;
    dimensions[5] = char_width;
    dimensions[2] = line_spacing - descent;
    *dimensions = layout_height;
    
    text_buffer = GLOBAL_CHAR_TABLE_BASE;
    
    if ((int)line_height < (int)target_width) {
      char_offset = (longlong)(int)line_height * 2;
      do {
        current_char = *(ushort *)(char_offset + *(longlong *)(text_data + 0x10));
        
        if (current_char == 10) {
          char_width = -1.0;
        }
        else {
          width_table = *(float **)(text_buffer + 0x19f0);
          
          if ((int)(uint)current_char < (int)width_table[8]) {
            char_width = *(float *)(*(longlong *)(width_table + 10) + (ulonglong)current_char * 4);
          }
          else {
            char_width = width_table[0x12];
          }
          
          char_width = (*(float *)(text_buffer + 0x19f8) / *width_table) * char_width;
        }
        
        line_height = (float)((int)line_height + 1);
        char_offset = char_offset + 2;
        *dimensions = char_width + *dimensions;
      } while ((int)line_height < (int)target_width);
    }
  }
  return;
}

// 函数：删除选中文本
// 参数：text_data - 文本数据指针，selection_data - 选择数据指针，start_pos - 起始位置，length - 删除长度
// 功能：删除选中的文本段
void delete_selected_text(longlong text_data, longlong selection_data, int start_pos, int length)
{
  undefined2 *temp_buffer;
  undefined2 *buffer_ptr;
  longlong remaining_chars;
  
  remaining_chars = (longlong)length;
  temp_buffer = (undefined2 *)allocate_temp_buffer(selection_data + 0x18, start_pos, length, 0);
  
  if ((temp_buffer != (undefined2 *)0x0) && (0 < length)) {
    buffer_ptr = temp_buffer;
    do {
      *buffer_ptr = *(undefined2 *)
                 (*(longlong *)(text_data + 0x10) + ((longlong)start_pos * 2 - (longlong)temp_buffer) + -2 +
                 (longlong)(buffer_ptr + 1));
      remaining_chars = remaining_chars + -1;
      buffer_ptr = buffer_ptr + 1;
    } while (remaining_chars != 0);
  }
  
  delete_text_segment(text_data, start_pos, length);
  *(undefined1 *)(selection_data + 0xf) = 0;
  return;
}

// 函数：处理文本选择
// 参数：text_data - 文本数据指针，selection_range - 选择范围指针
// 功能：处理文本选择逻辑，确保选择范围有效
void process_text_selection(longlong text_data, int *selection_range)
{
  int text_length;
  int selection_start;
  int selection_end;
  
  text_length = *(int *)(text_data + 0x3c);
  selection_start = selection_range[1];
  selection_end = selection_range[2];
  
  if (selection_start != selection_end) {
    if (text_length < selection_start) {
      selection_range[1] = text_length;
      selection_start = text_length;
    }
    if (text_length < selection_end) {
      selection_range[2] = text_length;
      selection_end = text_length;
    }
    if (selection_start == selection_end) {
      *selection_range = selection_start;
    }
  }
  
  if (text_length < *selection_range) {
    *selection_range = text_length;
  }
  
  if (selection_start != selection_end) {
    if (selection_start < selection_end) {
      delete_selected_text(text_data, selection_range, selection_start, selection_end - selection_start);
      selection_range[2] = selection_range[1];
      *selection_range = selection_range[1];
      *(undefined1 *)((longlong)selection_range + 0xf) = 0;
      return;
    }
    delete_selected_text(text_data, selection_range, selection_end, selection_start - selection_end);
    selection_range[1] = selection_range[2];
    *selection_range = selection_range[2];
    *(undefined1 *)((longlong)selection_range + 0xf) = 0;
  }
  return;
}

// 函数：处理文本插入
// 参数：text_data - 文本数据指针，selection_range - 选择范围指针，new_text - 新文本指针，insert_length - 插入长度
// 功能：在指定位置插入新文本
undefined8 process_text_insertion(longlong text_data, int *selection_range, undefined8 new_text, int insert_length)
{
  int text_length;
  char insert_result;
  undefined8 operation_result;
  int selection_start;
  int selection_end;
  
  text_length = *(int *)(text_data + 0x3c);
  selection_start = selection_range[1];
  selection_end = selection_range[2];
  
  if (selection_start != selection_end) {
    if (text_length < selection_start) {
      selection_range[1] = text_length;
      selection_start = text_length;
    }
    if (text_length < selection_end) {
      selection_range[2] = text_length;
      selection_end = text_length;
    }
    if (selection_start == selection_end) {
      *selection_range = selection_start;
    }
  }
  
  if (text_length < *selection_range) {
    *selection_range = text_length;
  }
  
  process_text_selection(text_data, selection_range);
  insert_result = insert_text(text_data, *selection_range, new_text, insert_length);
  
  if (insert_result == '\0') {
    if (*(short *)((longlong)selection_range + 0xe16) != 0) {
      *(short *)((longlong)selection_range + 0xe16) = *(short *)((longlong)selection_range + 0xe16) + -1;
    }
    operation_result = 0;
  }
  else {
    update_text_layout(selection_range, *selection_range, insert_length);
    *selection_range = *selection_range + insert_length;
    operation_result = 1;
    *(undefined1 *)((longlong)selection_range + 0xf) = 0;
  }
  return operation_result;
}