#include "TaleWorlds.Native.Split.h"

/**
 * 03_rendering_part041.c - 渲染系统高级数据处理和边界计算模块
 * 
 * 该模块包含渲染系统的高级数据处理和边界计算功能，主要用于处理渲染边界、
 * 坐标变换、数据管理和资源操作等核心渲染功能。
 * 
 * 主要功能：
 * - 渲染边界区域更新和计算
 * - 坐标变换和位置处理
 * - 数据批处理和管理
 * - 内存管理和资源操作
 * - 高级渲染数据处理
 * 
 * @module 渲染系统
 * @subpackage 高级数据处理
 * @version 1.0
 * @date 2025-08-28
 */

/**
 * 更新渲染边界区域
 * 
 * 根据输入参数更新渲染对象的边界区域，支持不同类型的边界更新模式。
 * 处理边界框的最小/最大值计算和边界扩展。
 * 
 * @param render_context 渲染上下文指针
 * @param update_type 更新类型 (0x04 表示扩展更新)
 * @param min_x 最小X坐标
 * @param min_y 最小Y坐标
 * @param max_x 最大X坐标
 * @param max_y 最大Y坐标
 * @param extend_min_x 扩展最小X坐标
 * @param extend_min_y 扩展最小Y坐标
 * @param extend_max_x 扩展最大X坐标
 * @param extend_max_y 扩展最大Y坐标
 */
void update_render_boundary_region(int *render_context, char update_type, int min_x, int min_y, 
                                   int max_x, int max_y, int extend_min_x, int extend_min_y, 
                                   int extend_max_x, int extend_max_y)
{
  int current_max_x;
  short *vertex_data;
  int current_min_x;
  int current_min_y;
  int current_max_y;
  
  if (*render_context != 0) {
    // 更新边界框的最大值
    if ((render_context[7] < min_x) || (current_max_y = render_context[7], render_context[1] == 0)) {
      render_context[7] = min_x;
      current_max_y = min_x;
    }
    if ((render_context[9] < min_y) || (current_min_y = render_context[9], render_context[1] == 0)) {
      render_context[9] = min_y;
      current_min_y = min_y;
    }
    // 更新边界框的最小值
    if ((min_x < render_context[6]) || (current_min_x = render_context[6], render_context[1] == 0)) {
      render_context[6] = min_x;
      current_min_x = min_x;
    }
    if ((min_y < render_context[8]) || (current_max_x = render_context[8], render_context[1] == 0)) {
      render_context[8] = min_y;
      current_max_x = min_y;
    }
    render_context[1] = 1;
    
    // 处理扩展更新模式
    if (update_type == '\x04') {
      if (current_max_y < max_x) {
        render_context[7] = max_x;
        current_max_y = max_x;
      }
      if (current_min_y < max_y) {
        render_context[9] = max_y;
        current_min_y = max_y;
      }
      if (max_x < current_min_x) {
        render_context[6] = max_x;
        current_min_x = max_x;
      }
      if (max_y < current_max_x) {
        render_context[8] = max_y;
        current_max_x = max_y;
      }
      // 应用扩展边界
      if (current_max_y < extend_min_x) {
        render_context[7] = extend_min_x;
      }
      if (current_min_y < extend_min_y) {
        render_context[9] = extend_min_y;
      }
      if (extend_min_x < current_min_x) {
        render_context[6] = extend_min_x;
      }
      if (extend_min_y < current_max_x) {
        render_context[8] = extend_min_y;
      }
    }
    render_context[0xc] = render_context[0xc] + 1;
    return;
  }
  
  // 处理顶点数据添加
  current_max_y = render_context[0xc];
  vertex_data = (short *)((longlong)current_max_y * 0xe + *(longlong *)(render_context + 10));
  vertex_data[2] = (short)max_x;
  vertex_data[3] = (short)max_y;
  *(char *)(vertex_data + 6) = update_type;
  *vertex_data = (short)min_x;
  vertex_data[1] = (short)min_y;
  vertex_data[4] = (short)extend_min_x;
  vertex_data[5] = (short)extend_min_y;
  render_context[0xc] = current_max_y + 1;
  return;
}

/**
 * 高级渲染边界更新函数
 * 
 * 扩展的边界更新函数，支持更复杂的边界计算和更新操作。
 * 
 * @param render_data 渲染数据指针
 * @param param2 参数2
 * @param param3 参数3
 * @param param4 参数4
 * @param param5 参数5
 * @param param6 参数6
 * @param param7 参数7
 * @param param8 参数8
 * @param param9 参数9
 */
void advanced_render_boundary_update(longlong render_data, char param2, int param3, int param4, 
                                    char param5, int param6, int param7, int param8, int param9)
{
  int current_max_x;
  int current_max_y;
  char update_type;
  int current_min_x;
  longlong context_ptr;
  int current_min_y;
  
  if ((param3 < current_min_y) || (*(int *)(render_data + 4) == 0)) {
    *(int *)(render_data + 0x1c) = current_min_y;
    param3 = current_min_y;
  }
  if ((*(int *)(render_data + 0x24) < param4) ||
     (current_max_y = *(int *)(render_data + 0x24), *(int *)(render_data + 4) == 0)) {
    *(int *)(render_data + 0x24) = param4;
    current_max_y = param4;
  }
  if ((current_min_y < *(int *)(render_data + 0x18)) ||
     (current_min_x = *(int *)(render_data + 0x18), *(int *)(render_data + 4) == 0)) {
    *(int *)(render_data + 0x18) = current_min_y;
    current_min_x = current_min_y;
  }
  if ((param4 < *(int *)(render_data + 0x20)) ||
     (current_max_x = *(int *)(render_data + 0x20), *(int *)(render_data + 4) == 0)) {
    *(int *)(render_data + 0x20) = param4;
    current_max_x = param4;
  }
  *(char *)(render_data + 4) = 1;
  
  if (update_type == '\x04') {
    if (param3 < param6) {
      *(int *)(render_data + 0x1c) = param6;
      param3 = param6;
    }
    if (current_max_y < param7) {
      *(int *)(context_ptr + 0x24) = param7;
      current_max_y = param7;
    }
    if (param6 < current_min_x) {
      *(int *)(context_ptr + 0x18) = param6;
      current_min_x = param6;
    }
    if (param7 < current_max_x) {
      *(int *)(context_ptr + 0x20) = param7;
      current_max_x = param7;
    }
    if (param3 < param8) {
      *(int *)(context_ptr + 0x1c) = param8;
    }
    if (current_max_y < param9) {
      *(int *)(context_ptr + 0x24) = param9;
    }
    if (param8 < current_min_x) {
      *(int *)(context_ptr + 0x18) = param8;
    }
    if (param9 < current_max_x) {
      *(int *)(context_ptr + 0x20) = param9;
    }
  }
  *(int *)(context_ptr + 0x30) = *(int *)(context_ptr + 0x30) + 1;
  return;
}

/**
 * 添加渲染顶点数据
 * 
 * 向渲染数据结构中添加顶点信息，包括位置和属性数据。
 * 
 * @param render_context 渲染上下文指针
 * @param param2 参数2
 * @param param3 参数3
 * @param vertex_x 顶点X坐标
 * @param param5 参数5
 * @param vertex_y 顶点Y坐标
 * @param param7 参数7
 * @param param8 参数8
 * @param param9 参数9
 */
void add_render_vertex_data(longlong render_context, char param2, char param3, short vertex_x,
                            char param5, short vertex_y, short param7, short param8, short param9)
{
  int vertex_count;
  short *vertex_buffer;
  char data_type;
  short vertex_x_coord;
  
  vertex_count = *(int *)(render_context + 0x30);
  vertex_buffer = (short *)((longlong)vertex_count * 0xe + *(longlong *)(render_context + 0x28));
  vertex_buffer[2] = vertex_y;
  vertex_buffer[3] = param7;
  *(char *)(vertex_buffer + 6) = data_type;
  *vertex_buffer = vertex_x_coord;
  vertex_buffer[1] = vertex_x;
  vertex_buffer[4] = param8;
  vertex_buffer[5] = param9;
  *(int *)(render_context + 0x30) = vertex_count + 1;
  return;
}

/**
 * 更新渲染坐标位置
 * 
 * 根据偏移量更新渲染对象的坐标位置，并更新边界信息。
 * 
 * @param render_obj 渲染对象指针
 * @param offset_x X轴偏移量
 * @param offset_y Y轴偏移量
 */
void update_render_coordinates(int *render_obj, float offset_x, float offset_y)
{
  int new_x;
  longlong data_ptr;
  longlong vertex_offset;
  int new_y;
  int current_x;
  
  // 调用渲染系统初始化函数
  func_0x00018028d1e0();
  
  // 计算新坐标位置
  offset_x = offset_x + (float)render_obj[4];
  offset_y = offset_y + (float)render_obj[5];
  render_obj[4] = (int)offset_x;
  render_obj[2] = (int)offset_x;
  render_obj[5] = (int)offset_y;
  render_obj[3] = (int)offset_y;
  
  new_y = (int)offset_y;
  current_x = (int)offset_x;
  
  if (*render_obj != 0) {
    // 更新边界信息
    if ((render_obj[7] < current_x) || (render_obj[1] == 0)) {
      render_obj[7] = current_x;
    }
    if ((render_obj[9] < new_y) || (render_obj[1] == 0)) {
      render_obj[9] = new_y;
    }
    if ((current_x < render_obj[6]) || (render_obj[1] == 0)) {
      render_obj[6] = current_x;
    }
    if ((new_y < render_obj[8]) || (render_obj[1] == 0)) {
      render_obj[8] = new_y;
    }
    render_obj[0xc] = render_obj[0xc] + 1;
    render_obj[1] = 1;
    return;
  }
  
  // 添加新的顶点数据
  data_ptr = *(longlong *)(render_obj + 10);
  new_x = render_obj[0xc];
  vertex_offset = (longlong)new_x * 0xe;
  *(short *)(vertex_offset + 2 + data_ptr) = (short)new_y;
  *(longlong *)(vertex_offset + 4 + data_ptr) = 0;
  *(char *)(vertex_offset + 0xc + data_ptr) = 1;
  *(short *)(vertex_offset + data_ptr) = (short)current_x;
  render_obj[0xc] = new_x + 1;
  return;
}

/**
 * 高级渲染变换处理
 * 
 * 执行高级的渲染变换操作，包括位置偏移和边界更新。
 * 
 * @param transform_data 变换数据指针
 * @param offset_x1 X轴偏移量1
 * @param offset_y1 Y轴偏移量1
 * @param offset_x2 X轴偏移量2
 * @param offset_y2 Y轴偏移量2
 * @param extend_x 扩展X坐标
 * @param extend_y 扩展Y坐标
 */
void advanced_render_transform(longlong transform_data, float offset_x1, float offset_y1, 
                               float offset_x2, float offset_y2, float extend_x, float extend_y)
{
  int y_coord;
  
  // 应用变换偏移
  offset_x1 = offset_x1 + *(float *)(transform_data + 0x10);
  offset_y1 = offset_y1 + *(float *)(transform_data + 0x14);
  offset_x2 = offset_x1 + offset_x2;
  y_coord = (int)offset_y1;
  offset_y1 = offset_y1 + offset_y2;
  extend_x = offset_x2 + extend_x;
  *(float *)(transform_data + 0x10) = extend_x;
  extend_y = offset_y1 + extend_y;
  *(float *)(transform_data + 0x14) = extend_y;
  
  // 更新边界区域
  update_render_boundary_region(transform_data, 
                               CONCAT71((uint7)(uint3)((uint)y_coord >> 8), 4),
                               (int)extend_x, (int)extend_y, (int)offset_x1, y_coord, 
                               (int)offset_x2, (int)offset_y1);
  return;
}

/**
 * 查找渲染数据项
 * 
 * 在渲染数据结构中查找指定的数据项，支持复杂的搜索条件。
 * 
 * @param result_ptr 结果指针
 * @param data_source 数据源指针
 * @param search_param 搜索参数
 * @return 找到的数据项指针
 */
longlong *find_render_data_item(longlong *result_ptr, longlong data_source, int search_param)
{
  char *data_buffer;
  longlong result_value;
  char first_char;
  char second_char;
  char third_char;
  byte fourth_char;
  char fifth_char;
  longlong buffer_offset;
  longlong *found_item;
  int search_index;
  uint search_result;
  int data_length;
  uint comparison_value;
  longlong temp_stack1[8];
  longlong temp_stack2[8];
  
  data_buffer = *(char **)(data_source + 0x90);
  search_index = 0;
  temp_stack2[1] = (int)((ulonglong)*(longlong *)(data_source + 0x98) >> 0x20);
  data_length = temp_stack2[1];
  
  // 检查数据有效性
  if ((*(longlong *)(data_source + 0x98) < 0) || (data_length = 0, temp_stack2[1] < 1)) {
    first_char = '\0';
  } else {
    first_char = *data_buffer;
    data_length = 1;
  }
  
  // 执行搜索逻辑
  if (first_char == '\0') {
    search_index = search_index + search_param;
    if (((temp_stack2[1] < search_index) || (search_index < 0)) || (temp_stack2[1] <= search_index)) {
      search_result = 0;
    } else {
      search_result = (uint)(byte)data_buffer[search_index];
    }
  } else {
    search_result = 0xffffffff;
    if (first_char == '\x03') {
      // 处理复杂数据格式
      if (data_length < temp_stack2[1]) {
        buffer_offset = (longlong)data_length;
        data_length = data_length + 1;
        first_char = data_buffer[buffer_offset];
      } else {
        first_char = '\0';
      }
      if (data_length < temp_stack2[1]) {
        buffer_offset = (longlong)data_length;
        data_length = data_length + 1;
        second_char = data_buffer[buffer_offset];
      } else {
        second_char = '\0';
      }
      if (data_length < temp_stack2[1]) {
        buffer_offset = (longlong)data_length;
        data_length = data_length + 1;
        fifth_char = data_buffer[buffer_offset];
      } else {
        fifth_char = '\0';
      }
      if (data_length < temp_stack2[1]) {
        buffer_offset = (longlong)data_length;
        data_length = data_length + 1;
        third_char = data_buffer[buffer_offset];
      } else {
        third_char = '\0';
      }
      comparison_value = (uint)CONCAT11(fifth_char, third_char);
      search_result = 0xffffffff;
      if (CONCAT11(first_char, second_char) != 0) {
        do {
          if (data_length < temp_stack2[1]) {
            buffer_offset = (longlong)data_length;
            data_length = data_length + 1;
            fourth_char = data_buffer[buffer_offset];
          } else {
            fourth_char = 0;
          }
          if (data_length < temp_stack2[1]) {
            buffer_offset = (longlong)data_length;
            data_length = data_length + 1;
            fifth_char = data_buffer[buffer_offset];
          } else {
            fifth_char = '\0';
          }
          if (data_length < temp_stack2[1]) {
            buffer_offset = (longlong)data_length;
            data_length = data_length + 1;
            third_char = data_buffer[buffer_offset];
          } else {
            third_char = '\0';
          }
        } while (((search_param < (int)comparison_value) ||
                 (search_result = (uint)fourth_char, (int)(uint)CONCAT11(fifth_char, third_char) <= search_param)) &&
                (search_index = search_index + 1, comparison_value = (uint)CONCAT11(fifth_char, third_char), 
                 search_result = 0xffffffff, search_index < (int)(uint)CONCAT11(first_char, second_char)));
      }
    }
  }
  
  // 处理搜索结果
  temp_stack1[0] = *(longlong *)(data_source + 0x80);
  temp_stack2[0] = *(longlong *)(data_source + 0x88);
  found_item = (longlong *)FUN_18028b4c0(temp_stack1, &temp_stack1[0], search_result);
  temp_stack1[1] = *(longlong *)(data_source + 0x40);
  temp_stack2[1] = *(longlong *)(data_source + 0x48);
  temp_stack1[0] = *found_item;
  temp_stack2[0] = found_item[1];
  found_item = (longlong *)FUN_18028b820(temp_stack2, &temp_stack1[1], &temp_stack1[0]);
  result_value = found_item[1];
  *result_ptr = *found_item;
  result_ptr[1] = result_value;
  return result_ptr;
}

/**
 * 批量处理渲染数据
 * 
 * 批量处理渲染数据，支持高效的数据操作和处理。
 * 
 * @param start_index 起始索引
 * @param param2 参数2
 * @param end_index 结束索引
 * @param data_ptr 数据指针
 * @param result_ptr 结果指针
 * @param out_param1 输出参数1
 * @param out_param2 输出参数2
 */
void batch_process_render_data(int start_index, char param2, int end_index, longlong data_ptr,
                               char result_ptr, int out_param1, int out_param2)
{
  longlong temp_value;
  char byte1;
  char byte2;
  char byte3;
  byte byte4;
  char byte5;
  longlong found_item;
  longlong *item_ptr;
  uint search_value;
  int comparison_count;
  int current_index;
  uint item_value;
  longlong context_ptr;
  longlong *result_item_ptr;
  uint stack_param1;
  uint stack_param2;
  
  if (start_index < end_index) {
    context_ptr = (longlong)start_index;
    start_index = start_index + 1;
    byte1 = *(char *)(context_ptr + data_ptr);
  } else {
    byte1 = 0;
  }
  if (start_index < end_index) {
    context_ptr = (longlong)start_index;
    start_index = start_index + 1;
    byte2 = *(char *)(context_ptr + data_ptr);
  } else {
    byte2 = 0;
  }
  if (start_index < end_index) {
    context_ptr = (longlong)start_index;
    start_index = start_index + 1;
    byte5 = *(char *)(context_ptr + data_ptr);
  } else {
    byte5 = 0;
  }
  if (start_index < end_index) {
    context_ptr = (longlong)start_index;
    start_index = start_index + 1;
    byte3 = *(char *)(context_ptr + data_ptr);
  } else {
    byte3 = 0;
  }
  item_value = (uint)CONCAT11(byte5, byte3);
  search_value = stack_param2;
  
  if (CONCAT11(byte1, byte2) != 0) {
    do {
      if (start_index < end_index) {
        context_ptr = (longlong)start_index;
        start_index = start_index + 1;
        byte4 = *(byte *)(context_ptr + data_ptr);
      } else {
        byte4 = 0;
      }
      if (start_index < end_index) {
        context_ptr = (longlong)start_index;
        start_index = start_index + 1;
        byte5 = *(char *)(context_ptr + data_ptr);
      } else {
        byte5 = 0;
      }
      if (start_index < end_index) {
        context_ptr = (longlong)start_index;
        start_index = start_index + 1;
        byte3 = *(char *)(context_ptr + data_ptr);
      } else {
        byte3 = 0;
      }
    } while (((comparison_count < (int)item_value) ||
             (search_value = (uint)byte4, (int)(uint)CONCAT11(byte5, byte3) <= comparison_count)) &&
            (current_index = current_index + 1, item_value = (uint)CONCAT11(byte5, byte3), 
             search_value = stack_param2, current_index < (int)(uint)CONCAT11(byte1, byte2)));
  }
  
  // 处理批量结果
  result_ptr._0_4_ = *(int *)(context_ptr + 0x88);
  result_ptr._4_4_ = *(int *)(context_ptr + 0x8c);
  found_item = FUN_18028b4c0(&stack_param1, &stack_param2, search_value, data_ptr,
                             *(int *)(context_ptr + 0x80));
  out_param1 = *(int *)(context_ptr + 0x40);
  stack_param1 = *(int *)(context_ptr + 0x44);
  out_param2 = *(int *)(context_ptr + 0x48);
  stack_param2 = *(int *)(context_ptr + 0x4c);
  result_ptr._0_4_ = *(int *)(found_item + 8);
  result_ptr._4_4_ = *(int *)(found_item + 0xc);
  item_ptr = (longlong *)FUN_18028b820(&stack_param1, &out_param1, &stack_param2);
  temp_value = item_ptr[1];
  *result_item_ptr = *item_ptr;
  result_item_ptr[1] = temp_value;
  return;
}

/**
 * 渲染数据流处理
 * 
 * 处理渲染数据流，支持连续的数据处理操作。
 * 
 * @param start_index 起始索引
 * @param param2 参数2
 * @param end_index 结束索引
 * @param data_ptr 数据指针
 * @param result_ptr 结果指针
 * @param out_param1 输出参数1
 * @param out_param2 输出参数2
 */
void process_render_data_stream(int start_index, char param2, int end_index, longlong data_ptr,
                                char result_ptr, int out_param1, int out_param2)
{
  longlong temp_value;
  byte byte1;
  char byte2;
  char byte3;
  longlong found_item;
  longlong *item_ptr;
  int max_count;
  uint search_value;
  int comparison_count;
  int current_index;
  uint stream_value;
  longlong context_ptr;
  longlong *result_item_ptr;
  uint stack_param1;
  uint stack_param2;
  
  // 处理数据流
  do {
    if (start_index < end_index) {
      context_ptr = (longlong)start_index;
      start_index = start_index + 1;
      byte1 = *(byte *)(context_ptr + data_ptr);
    } else {
      byte1 = 0;
    }
    if (start_index < end_index) {
      context_ptr = (longlong)start_index;
      start_index = start_index + 1;
      byte2 = *(char *)(context_ptr + data_ptr);
    } else {
      byte2 = 0;
    }
    if (start_index < end_index) {
      context_ptr = (longlong)start_index;
      start_index = start_index + 1;
      byte3 = *(char *)(context_ptr + data_ptr);
    } else {
      byte3 = 0;
    }
  } while (((comparison_count < (int)stream_value) ||
           (search_value = (uint)byte1, (int)(uint)CONCAT11(byte2, byte3) <= comparison_count)) &&
          (current_index = current_index + 1, stream_value = (uint)CONCAT11(byte2, byte3), 
           search_value = stack_param2, current_index < max_count));
  
  // 处理流处理结果
  result_ptr._0_4_ = *(int *)(context_ptr + 0x88);
  result_ptr._4_4_ = *(int *)(context_ptr + 0x8c);
  found_item = FUN_18028b4c0(&stack_param1, &stack_param2, search_value, data_ptr,
                             *(int *)(context_ptr + 0x80));
  out_param1 = *(int *)(context_ptr + 0x40);
  stack_param1 = *(int *)(context_ptr + 0x44);
  out_param2 = *(int *)(context_ptr + 0x48);
  stack_param2 = *(int *)(context_ptr + 0x4c);
  result_ptr._0_4_ = *(int *)(found_item + 8);
  result_ptr._4_4_ = *(int *)(found_item + 0xc);
  item_ptr = (longlong *)FUN_18028b820(&stack_param1, &out_param1, &stack_param2);
  temp_value = item_ptr[1];
  *result_item_ptr = *item_ptr;
  result_item_ptr[1] = temp_value;
  return;
}

/**
 * 初始化渲染系统组件
 * 
 * 初始化渲染系统的关键组件，设置初始状态和参数。
 */
void initialize_render_system_component(void)
{
  longlong temp_value;
  int *config_ptr;
  longlong *item_ptr;
  int config_param;
  longlong context_data;
  longlong result_ptr;
  int stack_param1;
  int stack_param2;
  int in_param1;
  int stack_param3;
  int in_param2;
  int stack_param4;
  
  // 设置初始化参数
  stack_param1 = *(int *)(context_ptr + 0x88);
  stack_param2 = *(int *)(context_ptr + 0x8c);
  config_ptr = (int *)
           FUN_18028b4c0(&stack_param3, &stack_param4, config_param, context_data,
                         *(int *)(context_ptr + 0x80));
  in_param1 = *(int *)(context_ptr + 0x40);
  stack_param3 = *(int *)(context_ptr + 0x44);
  in_param2 = *(int *)(context_ptr + 0x48);
  stack_param4 = *(int *)(context_ptr + 0x4c);
  stack_param1 = config_ptr[2];
  stack_param2 = config_ptr[3];
  item_ptr = (longlong *)
           FUN_18028b820(&stack_param1, &in_param1, &stack_param4, context_data, *config_ptr);
  temp_value = item_ptr[1];
  *result_ptr = *item_ptr;
  result_ptr[1] = temp_value;
  return;
}

/**
 * 渲染系统状态重置
 * 
 * 重置渲染系统的状态，清理临时数据并恢复默认设置。
 */
void reset_render_system_state(void)
{
  longlong temp_value;
  int *config_ptr;
  longlong *item_ptr;
  int config_param;
  longlong context_data;
  longlong result_ptr;
  int stack_param1;
  int stack_param2;
  int in_param1;
  int stack_param3;
  int in_param2;
  int stack_param4;
  
  // 重置系统状态
  stack_param1 = *(int *)(context_ptr + 0x88);
  stack_param2 = *(int *)(context_ptr + 0x8c);
  config_ptr = (int *)
           FUN_18028b4c0(&stack_param3, &stack_param4, config_param, context_data,
                         *(int *)(context_ptr + 0x80));
  in_param1 = *(int *)(context_ptr + 0x40);
  stack_param3 = *(int *)(context_ptr + 0x44);
  in_param2 = *(int *)(context_ptr + 0x48);
  stack_param4 = *(int *)(context_ptr + 0x4c);
  stack_param1 = config_ptr[2];
  stack_param2 = config_ptr[3];
  item_ptr = (longlong *)
           FUN_18028b820(&stack_param1, &in_param1, &stack_param4, context_data, *config_ptr);
  temp_value = item_ptr[1];
  *result_ptr = *item_ptr;
  result_ptr[1] = temp_value;
  return;
}