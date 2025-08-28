#include "TaleWorlds.Native.Split.h"
// 02_core_engine_part130.c - 核心引擎模块第130部分
// 包含8个函数，主要处理UI元素位置计算、边界框处理和坐标变换
// 全局变量定义
int64_t *global_engine_context;          // 全局引擎上下文指针
float global_ui_scale_factor;               // UI缩放因子
float global_horizontal_offset;            // 水平偏移量
float global_vertical_offset;              // 垂直偏移量
// 函数: 更新UI元素位置和状态
void update_ui_element_position_and_status(void)
{
  int *status_ptr;
  char *flag_ptr;
  int32_t *position_ptr;
  float scale_value;
  int state_value;
  int mode_value;
  int64_t context_base;
  int64_t element_ptr;
  int64_t temp_ptr;
  int32_t position_x;
  int32_t position_y;
  int element_index;
  int64_t data_ptr;
  int64_t dimension_ptr;
  int64_t bounds_ptr;
  float adjusted_value;
  uint flag_bits;
  int32_t temp_flag;
  context_base = global_engine_context;
  element_ptr = *(int64_t *)(global_engine_context + 0x1af8);
  if ((((*(int64_t *)(global_engine_context + 0x1c98) == element_ptr) &&
       (*(char *)(global_engine_context + 0x1d21) != '\0')) && (*(int *)(global_engine_context + 0x1d38) == 0)) &&
    (((*(int *)(global_engine_context + 0x1d98) == 0 && (*(int *)(global_engine_context + 0x1d28) == 0)) &&
      (state_value = *(int *)(global_engine_context + 0x1cfc), state_value == 0)))) {
    mode_value = *(int *)(global_engine_context + 0x1d2c);
    position_x = *(int32_t *)(element_ptr + 0x3d0);
    position_y = *(int32_t *)(element_ptr + 0x3d8);
    element_index = mode_value;
    if (mode_value == 1) {
      element_index = 1;
    }
    temp_flag = (int)*(uint64_t *)(element_ptr + 0x3d0);
    if (element_index == 2) {
      adjusted_value = *(float *)(element_ptr + 100);
      if (*(float *)(element_ptr + 100) <= *(float *)(element_ptr + 0x54)) {
        adjusted_value = *(float *)(element_ptr + 0x54);
      }
      flag_ptr = (char *)(global_engine_context + 0x1d09);
      adjusted_value = adjusted_value - *(float *)(element_ptr + 0x90);
      *(int8_t *)(global_engine_context + 0x1d21) = 0;
      *(bool *)(context_base + 0x1d08) = *flag_ptr != '\0';
      *(int32_t *)(context_base + 0x1d2c) = 2;
      *(int *)(context_base + 0x1d34) = mode_value;
      *(int32_t *)(context_base + 0x1d28) = 1;
      *(int32_t *)(context_base + 0x1d24) = 2;
      position_ptr = (int32_t *)(*(int64_t *)(context_base + 0x1c98) + ((int64_t)state_value + 0x3d) * 0x10);
      *position_ptr = position_x;
      position_ptr[1] = adjusted_value;
      position_ptr[2] = position_y;
      position_ptr[3] = adjusted_value;
      element_index = *(int *)(context_base + 0x1d2c);
      temp_flag = position_x;
    }
    if (element_index == 3) {
      flag_bits = *(uint *)(element_ptr + 0x90) ^ 0x80000000;
      *(bool *)(context_base + 0x1d08) = *(char *)(context_base + 0x1d09) != '\0';
      *(int8_t *)(context_base + 0x1d21) = 0;
      *(int32_t *)(context_base + 0x1d2c) = 3;
      *(int *)(context_base + 0x1d34) = mode_value;
      *(int32_t *)(context_base + 0x1d28) = 1;
      *(int32_t *)(context_base + 0x1d24) = 2;
      position_ptr = (int32_t *)
               (*(int64_t *)(context_base + 0x1c98) + ((int64_t)*(int *)(context_base + 0x1cfc) + 0x3d) * 0x10);
      *position_ptr = temp_flag;
      position_ptr[1] = flag_bits;
      position_ptr[2] = position_y;
      position_ptr[3] = flag_bits;
    }
  }
  element_ptr = global_engine_context;
  if ((1 < *(int *)(global_engine_context + 0x1ad0)) || (*(char *)(global_engine_context + 2) == '\0')) {
    context_base = *(int64_t *)(global_engine_context + 0x1af8);
    if (*(int64_t *)(context_base + 0x210) != 0) {
      cleanup_render_resources();
    }
    flag_bits = *(uint *)(context_base + 0xc);
    if ((flag_bits >> 0x1d & 1) == 0) {
      update_display_settings();
      flag_bits = *(uint *)(context_base + 0xc);
    }
    dimension_ptr = global_engine_context;
    bounds_ptr = 0;
    if (((flag_bits >> 0x18 & 1) == 0) && (flag_ptr = (char *)(global_engine_context + 0x2e38), *flag_ptr != '\0')
       ) {
      process_ui_element_bounds(&global_ui_scale_factor);
      if (*(int64_t *)(dimension_ptr + 0x2e40) != 0) {
        data_ptr = get_standard_output_stream();
        if (*(int64_t *)(dimension_ptr + 0x2e40) == data_ptr) {
          flush_output_buffer();
        }
        else {
          close_file_handle();
        }
        *(uint64_t *)(dimension_ptr + 0x2e40) = 0;
      }
      status_ptr = (int *)(dimension_ptr + 0x2e48);
      data_ptr = *(int64_t *)(dimension_ptr + 0x2e50);
      if ((data_ptr != 0) && (1 < *status_ptr + -1)) {
        if (*(code **)(global_engine_context + 0x100) != (code *)0x0) {
          (**(code **)(global_engine_context + 0x100))(*(uint64_t *)(global_engine_context + 0x108),data_ptr);
          data_ptr = *(int64_t *)(dimension_ptr + 0x2e50);
        }
        dimension_ptr = global_engine_context;
        if (data_ptr != 0) {
          status_ptr[0] = 0;
          status_ptr[1] = 0;
          if (dimension_ptr != 0) {
            status_ptr = (int *)(dimension_ptr + 0x3a8);
            *status_ptr = *status_ptr + -1;
          }
// 释放内存资源
          free_memory_block(data_ptr,global_engine_context + 0xa8);
        }
      }
      dimension_ptr = global_engine_context;
      *flag_ptr = '\0';
    }
    if (((*(int64_t *)(context_base + 0x408) != 0) && ((*(byte *)(context_base + 0x432) & 2) != 0)) &&
       (data_ptr = *(int64_t *)(*(int64_t *)(context_base + 0x408) + 0x68), data_ptr != 0)) {
      scale_value = *(float *)(context_base + 0x11c);
      adjusted_value = *(float *)(context_base + 0x74);
      *(float *)(data_ptr + 0x118) =
           (*(float *)(context_base + 0x118) + *(float *)(context_base + 0x70)) - *(float *)(data_ptr + 0x70);
      *(float *)(data_ptr + 0x11c) = (scale_value + adjusted_value) - *(float *)(data_ptr + 0x74);
    }
    *(int *)(element_ptr + 0x1ad0) = *(int *)(element_ptr + 0x1ad0) + -1;
    if ((*(uint *)(context_base + 0xc) & 0x4000000) != 0) {
      *(int *)(element_ptr + 0x1bc0) = *(int *)(element_ptr + 0x1bc0) + -1;
    }
    if (*(int *)(element_ptr + 0x1ad0) != 0) {
      bounds_ptr = *(int64_t *)
                (*(int64_t *)(element_ptr + 0x1ad8) + -8 + (int64_t)*(int *)(element_ptr + 0x1ad0) * 8);
    }
    *(int64_t *)(dimension_ptr + 0x1af8) = bounds_ptr;
    if (bounds_ptr != 0) {
      scale_value = *(float *)(dimension_ptr + 0x19fc) * *(float *)(bounds_ptr + 0x2d8) * *(float *)(bounds_ptr + 0x2dc)
      ;
      *(float *)(dimension_ptr + 0x1a10) = scale_value;
      *(float *)(dimension_ptr + 0x19f8) = scale_value;
    }
    if (*(int64_t *)(element_ptr + 0x1af8) != 0) {
      element_ptr = *(int64_t *)(*(int64_t *)(element_ptr + 0x1af8) + 0x28);
      if (element_ptr != 0) {
        *(int32_t *)(element_ptr + 0x54) = *(int32_t *)(dimension_ptr + 0x1a90);
      }
      if (((*(int64_t *)(dimension_ptr + 0x1c78) != element_ptr) &&
          (*(int64_t *)(dimension_ptr + 0x1c78) = element_ptr, element_ptr != 0)) &&
         (*(code **)(dimension_ptr + 0x15c0) != (code *)0x0)) {
// 调用回调函数
        (**(code **)(dimension_ptr + 0x15c0))();
        return;
      }
    }
  }
  return;
}
// 函数: 计算UI元素的最佳位置
void calculate_ui_element_optimal_position(float *output_position,float *reference_position,float *element_size,int *anchor_mode,float *boundary_bounds,
                  float *offset_bounds,int calculation_mode)
{
  float ref_height;
  float element_height;
  float element_width;
  uint64_t position_data;
  int current_anchor;
  int test_anchor;
  float *boundary_ptr;
  int64_t loop_index;
  float test_x;
  float test_y;
  float test_width;
  float test_height;
  float optimal_height;
  uint64_t stack_guard;
  int32_t anchor_sequence;
  int32_t anchor_values;
  uint64_t guard_value;
  guard_value = global_ui_scale_factor ^ (uint64_t)&stack_guard;
  ref_height = reference_position[1];
  element_height = *element_size;
  element_width = element_size[1];
  optimal_height = boundary_bounds[1];
  if ((boundary_bounds[1] <= ref_height) && (optimal_height = ref_height, boundary_bounds[3] - element_width <= ref_height)) {
    optimal_height = boundary_bounds[3] - element_width;
  }
  ref_height = *reference_position;
  test_width = *boundary_bounds;
  test_height = test_width;
  if ((test_width <= ref_height) && (test_height = ref_height, boundary_bounds[2] - element_height <= ref_height)) {
    test_height = boundary_bounds[2] - element_height;
  }
  if (calculation_mode == 1) {
    current_anchor = *anchor_mode;
    stack_guard = 0x100000003;
    anchor_sequence = 0;
    anchor_values = 2;
    loop_index = -(uint64_t)(current_anchor != -1);
    do {
      test_anchor = current_anchor;
      if ((loop_index == -1) || (test_anchor = *(int *)((int64_t)&stack_guard + loop_index * 4), test_anchor != current_anchor)) {
        test_x = 0.0;
        test_y = 0.0;
        if (test_anchor == 3) {
          test_y = *offset_bounds;
          test_x = offset_bounds[3];
        }
        else if (test_anchor == 1) {
          test_y = *offset_bounds;
LAB_anchor_mode_1:
          test_x = offset_bounds[1] - element_width;
        }
        else if (test_anchor == 0) {
          test_x = offset_bounds[3];
          test_y = offset_bounds[2] - element_height;
        }
        else if (test_anchor == 2) {
          test_y = offset_bounds[2] - element_height;
          goto LAB_anchor_mode_1;
        }
        if ((((test_width <= test_y) && (boundary_bounds[1] <= test_x)) &&
            (element_height + test_y < boundary_bounds[2] || element_height + test_y == boundary_bounds[2])) &&
           (element_width + test_x < boundary_bounds[3] || element_width + test_x == boundary_bounds[3])) {
          *anchor_mode = test_anchor;
          *output_position = test_y;
          output_position[1] = test_x;
          goto LAB_position_found;
        }
      }
      loop_index = loop_index + 1;
    } while (loop_index < 4);
  }
  current_anchor = *anchor_mode;
  stack_guard = 0x300000001;
  anchor_sequence = 2;
  anchor_values = 0;
  loop_index = -(uint64_t)(current_anchor != -1);
  do {
    test_anchor = current_anchor;
    if ((loop_index == -1) || (test_anchor = *(int *)((int64_t)&stack_guard + loop_index * 4), test_anchor != current_anchor)) {
      if (test_anchor == 0) {
        test_y = *offset_bounds;
      }
      else {
        test_y = boundary_bounds[2];
      }
      boundary_ptr = offset_bounds + 2;
      if (test_anchor != 1) {
        boundary_ptr = boundary_bounds;
      }
      test_width = boundary_bounds[1];
      if (test_anchor == 2) {
        test_x = offset_bounds[1];
      }
      else {
        test_x = boundary_bounds[3];
        if (test_anchor == 3) {
          test_width = offset_bounds[3];
        }
      }
      if ((element_height <= test_y - *boundary_ptr) && (element_width <= test_x - test_width)) {
        if (test_anchor == 0) {
          test_y = *offset_bounds;
          *anchor_mode = 0;
          output_position[1] = optimal_height;
          *output_position = test_y - element_height;
        }
        else if (test_anchor == 1) {
          test_y = offset_bounds[2];
          *anchor_mode = 1;
          *output_position = test_y;
          output_position[1] = optimal_height;
        }
        else if (test_anchor == 2) {
          test_y = offset_bounds[1];
          *anchor_mode = 2;
          *output_position = test_height;
          output_position[1] = test_y - element_width;
        }
        else {
          if (test_anchor == 3) {
            optimal_height = offset_bounds[3];
          }
          *anchor_mode = test_anchor;
          *output_position = test_height;
          output_position[1] = optimal_height;
        }
        goto LAB_position_found;
      }
    }
    loop_index = loop_index + 1;
    if (3 < loop_index) {
      *anchor_mode = -1;
      position_data = *(uint64_t *)reference_position;
      test_y = *element_size + (float)position_data;
      if (boundary_bounds[2] <= test_y) {
        test_y = boundary_bounds[2];
      }
      test_y = test_y - *element_size;
      if (test_y < *boundary_bounds) {
        test_y = *boundary_bounds;
      }
      stack_guard._4_4_ = (float)((uint64_t)position_data >> 0x20);
      stack_guard._4_4_ = element_size[1] + stack_guard._4_4_;
      if (boundary_bounds[3] <= stack_guard._4_4_) {
        stack_guard._4_4_ = boundary_bounds[3];
      }
      stack_guard._4_4_ = stack_guard._4_4_ - element_size[1];
      if (stack_guard._4_4_ < boundary_bounds[1]) {
        stack_guard._4_4_ = boundary_bounds[1];
      }
      *output_position = test_y;
      output_position[1] = stack_guard._4_4_;
      stack_guard = position_data;
LAB_position_found:
// 安全检查函数
      perform_security_check(guard_value ^ (uint64_t)&stack_guard);
    }
  } while( true );
}
// 函数: 计算UI元素的边界框
float * calculate_ui_element_bounding_box(float *bounding_box,int64_t element_data)
{
  int64_t index;
  int64_t context_base;
  int64_t array_ptr;
  float scale_x;
  float scale_y;
  context_base = global_engine_context;
  *bounding_box = 3.4028235e+38;
  bounding_box[1] = 3.4028235e+38;
  bounding_box[2] = -3.4028235e+38;
  bounding_box[3] = -3.4028235e+38;
  index = (int64_t)*(int *)(element_data + 0x3c);
  if (*(int *)(element_data + 0x3c) < 0) {
    *(uint64_t *)bounding_box = *(uint64_t *)(*(int64_t *)(element_data + 0x28) + 8);
    index = *(int64_t *)(element_data + 0x28);
    scale_y = *(float *)(index + 8) + *(float *)(index + 0x10);
    scale_x = *(float *)(index + 0xc) + *(float *)(index + 0x14);
  }
  else {
    array_ptr = *(int64_t *)(context_base + 0x1608);
    *(uint64_t *)bounding_box = *(uint64_t *)(array_ptr + 0x10 + index * 0x24);
    scale_y = *(float *)(array_ptr + 0x18 + index * 0x24) + *(float *)(array_ptr + 0x10 + index * 0x24);
    scale_x = *(float *)(array_ptr + 0x1c + index * 0x24) + *(float *)(array_ptr + 0x14 + index * 0x24);
  }
  *(uint64_t *)(bounding_box + 2) = CONCAT44(scale_x,scale_y);
  scale_x = *(float *)(context_base + 0x16b8);
  scale_y = *(float *)(context_base + 0x16b4);
  if (bounding_box[3] - bounding_box[1] <= scale_x + scale_x) {
    scale_x = 0.0;
  }
  else {
    scale_x = -scale_x;
  }
  if (bounding_box[2] - *bounding_box <= scale_y + scale_y) {
    scale_y = 0.0;
  }
  else {
    scale_y = -scale_y;
  }
  bounding_box[1] = bounding_box[1] - scale_x;
  bounding_box[3] = bounding_box[3] + scale_x;
  *bounding_box = *bounding_box - scale_y;
  bounding_box[2] = bounding_box[2] + scale_y;
  return bounding_box;
}
// 函数: 计算UI元素的绝对位置
uint64_t * calculate_ui_element_absolute_position(uint64_t *output_position,int64_t element_data)
{
  uint element_flags;
  int64_t context_base;
  int64_t element_ptr;
  int *anchor_mode_ptr;
  float padding_size;
  float element_x;
  float element_y;
  uint64_t position_data;
  float boundary_min_x;
  float boundary_min_y;
  float boundary_max_x;
  float boundary_max_y;
  int8_t bounding_box_buffer [64];
  element_flags = *(uint *)(element_data + 0xc);
  if ((element_flags >> 0x1c & 1) == 0) {
    if ((element_flags >> 0x1a & 1) == 0) {
      if ((element_flags >> 0x19 & 1) == 0) {
        *output_position = *(uint64_t *)(element_data + 0x40);
      }
      else {
        padding_size = *(float *)(global_engine_context + 0x16bc);
        element_ptr = global_engine_context;
        get_element_screen_position(&element_x);
        calculate_ui_element_bounding_box(bounding_box_buffer,element_data);
        if (((*(char *)(element_ptr + 0x1d06) == '\0') && (*(char *)(element_ptr + 0x1d07) != '\0')) &&
           ((*(byte *)(element_ptr + 8) & 4) == 0)) {
          boundary_max_x = element_x + 16.0;
          boundary_max_y = element_y + 8.0;
        }
        else {
          padding_size = padding_size * 24.0;
          boundary_max_x = padding_size + element_x;
          boundary_max_y = padding_size + element_y;
        }
        boundary_min_y = element_y - 8.0;
        boundary_min_x = element_x - 16.0;
        anchor_mode_ptr = (int *)(element_data + 0xd4);
        calculate_ui_element_optimal_position(&position_data,&element_x,element_data + 0x48,anchor_mode_ptr,bounding_box_buffer,&boundary_min_x,0);
        if (*anchor_mode_ptr == -1) {
          *output_position = CONCAT44(element_y + 2.0,element_x + 2.0);
        }
        else {
          *output_position = position_data;
        }
      }
    }
    else {
      element_ptr = element_data;
      calculate_ui_element_bounding_box(bounding_box_buffer);
      boundary_min_x = *(float *)(element_data + 0x40) - 1.0;
      boundary_max_x = *(float *)(element_data + 0x40) + 1.0;
      boundary_min_y = *(float *)(element_ptr + 0x44) - 1.0;
      boundary_max_y = *(float *)(element_ptr + 0x44) + 1.0;
      calculate_ui_element_optimal_position(output_position,element_data + 0x40,element_ptr + 0x48,element_ptr + 0xd4,bounding_box_buffer,&boundary_min_x,0);
    }
  }
  else {
    padding_size = *(float *)(global_engine_context + 0x166c);
    element_ptr = *(int64_t *)(element_data + 0x398);
    context_base = global_engine_context;
    calculate_ui_element_bounding_box(bounding_box_buffer);
    if (*(char *)(element_ptr + 0x17e) == '\0') {
      boundary_min_x = *(float *)(element_ptr + 0x40) + padding_size;
      boundary_max_x = ((*(float *)(element_ptr + 0x40) + *(float *)(element_ptr + 0x48)) - padding_size) -
                  *(float *)(element_ptr + 0xa4);
      boundary_min_y = -3.4028235e+38;
      boundary_max_y = 3.4028235e+38;
    }
    else {
      boundary_min_y = 0.0;
      element_flags = *(uint *)(element_ptr + 0xc) & 1;
      if (element_flags == 0) {
        padding_size = *(float *)(context_base + 0x19fc) * *(float *)(element_ptr + 0x2d8) * *(float *)(element_ptr + 0x2dc) +
                *(float *)(context_base + 0x1660) + *(float *)(context_base + 0x1660);
      }
      else {
        padding_size = 0.0;
      }
      if ((*(uint *)(element_ptr + 0xc) >> 10 & 1) == 0) {
        boundary_max_y = 0.0;
      }
      else {
        boundary_max_y = *(float *)(context_base + 0x19fc) * *(float *)(element_ptr + 0x2d8) *
                    *(float *)(element_ptr + 0x2dc) + *(float *)(element_ptr + 0x184) +
                    *(float *)(context_base + 0x1660) + *(float *)(context_base + 0x1660);
      }
      boundary_max_y = *(float *)(element_ptr + 0x44) + padding_size + boundary_max_y;
      if (element_flags == 0) {
        boundary_min_y = *(float *)(context_base + 0x19fc) * *(float *)(element_ptr + 0x2d8) *
                    *(float *)(element_ptr + 0x2dc) +
                    *(float *)(context_base + 0x1660) + *(float *)(context_base + 0x1660);
      }
      boundary_min_y = *(float *)(element_ptr + 0x44) + boundary_min_y;
      boundary_min_x = -3.4028235e+38;
      boundary_max_x = 3.4028235e+38;
    }
    calculate_ui_element_optimal_position(output_position,element_data + 0x40,element_data + 0x48,element_data + 0xd4,bounding_box_buffer,&boundary_min_x,0);
  }
  return output_position;
}
// 函数: 处理UI元素的边界约束
void process_ui_element_boundary_constraints(uint64_t position_data,int64_t element_data)
{
  int64_t element_ptr;
  uint element_flags;
  int64_t context_base;
  int64_t parent_element;
  int32_t constraint_value;
  float element_width;
  float element_height;
  float boundary_width;
  float boundary_height;
  float parent_width;
  float parent_height;
  element_ptr = *(int64_t *)(element_data + 0x398);
  calculate_ui_element_bounding_box();
  if (*(char *)(element_ptr + 0x17e) == '\0') {
    constraint_value = 0xff7fffff;
    element_height = *(float *)(element_ptr + 0x40) + global_horizontal_offset;
    boundary_height = ((*(float *)(element_ptr + 0x40) + *(float *)(element_ptr + 0x48)) - global_horizontal_offset) -
            *(float *)(element_ptr + 0xa4);
    *(float *)(context_base + 7) = element_height;
    *(int32_t *)(context_base + 0xb) = 0xff7fffff;
    *(float *)(context_base + 0xf) = boundary_height;
    *(int32_t *)(context_base + 0x13) = 0x7f7fffff;
    *(float *)(context_base + 7) = element_height;
    *(int32_t *)(context_base + 0xb) = 0xff7fffff;
    *(float *)(context_base + 0xf) = boundary_height;
    *(int32_t *)(context_base + 0x13) = 0x7f7fffff;
  }
  else {
    boundary_height = 0.0;
    element_flags = *(uint *)(element_ptr + 0xc) & 1;
    if (element_flags == 0) {
      element_width = *(float *)(parent_element + 0x19fc) * *(float *)(element_ptr + 0x2d8) * *(float *)(element_ptr + 0x2dc) +
              *(float *)(parent_element + 0x1660) + *(float *)(parent_element + 0x1660);
    }
    else {
      element_width = 0.0;
    }
    if ((*(uint *)(element_ptr + 0xc) >> 10 & 1) == 0) {
      boundary_width = 0.0;
    }
    else {
      boundary_width = *(float *)(parent_element + 0x19fc) * *(float *)(element_ptr + 0x2d8) * *(float *)(element_ptr + 0x2dc) +
              *(float *)(element_ptr + 0x184) + *(float *)(parent_element + 0x1660) + *(float *)(parent_element + 0x1660);
    }
    boundary_width = *(float *)(element_ptr + 0x44) + element_width + boundary_width;
    if (element_flags == 0) {
      boundary_height = *(float *)(parent_element + 0x19fc) * *(float *)(element_ptr + 0x2d8) * *(float *)(element_ptr + 0x2dc) +
              *(float *)(parent_element + 0x1660) + *(float *)(parent_element + 0x1660);
    }
    boundary_height = *(float *)(element_ptr + 0x44) + boundary_height;
    constraint_value = 0x7f7fffff;
    *(int32_t *)(context_base + 7) = 0xff7fffff;
    *(float *)(context_base + 0xb) = boundary_height;
    *(int32_t *)(context_base + 0xf) = 0x7f7fffff;
    *(float *)(context_base + 0x13) = boundary_width;
    *(int32_t *)(context_base + 7) = 0xff7fffff;
    *(float *)(context_base + 0xb) = boundary_height;
    *(int32_t *)(context_base + 0xf) = 0x7f7fffff;
    *(float *)(context_base + 0x13) = boundary_width;
  }
  calculate_ui_element_optimal_position(constraint_value,element_data + 0x40,element_data + 0x48,element_data + 0xd4,context_base + 0x17);
  return;
}
// 函数: 计算工具提示位置
void calculate_tooltip_position(uint64_t *output_position,int64_t element_data)
{
  uint tooltip_flags;
  int64_t context_base;
  uint64_t *position_ptr;
  int64_t parent_element;
  int *anchor_mode_ptr;
  float tooltip_padding;
  float element_x;
  float element_y;
  float boundary_min_x;
  float boundary_min_y;
  float boundary_max_x;
  float boundary_max_y;
  if ((tooltip_flags >> 0x1a & 1) == 0) {
    if ((tooltip_flags >> 0x19 & 1) == 0) {
      *output_position = *(uint64_t *)(element_data + 0x40);
    }
    else {
      tooltip_padding = *(float *)(parent_element + 0x16bc);
      get_element_screen_position(context_base + 0x6f);
      calculate_ui_element_bounding_box(context_base + 0x17,parent_element);
      if (((*(char *)(parent_element + 0x1d06) == '\0') && (*(char *)(parent_element + 0x1d07) != '\0')) &&
         ((*(byte *)(parent_element + 8) & 4) == 0)) {
        boundary_max_x = *(float *)(context_base + 0x6f);
        element_y = *(float *)(context_base + 0x73);
        *(float *)(context_base + 7) = boundary_max_x - 16.0;
        *(float *)(context_base + 0xb) = element_y - 8.0;
        *(float *)(context_base + 0xf) = boundary_max_x + 16.0;
        *(float *)(context_base + 0x13) = element_y + 8.0;
        *(float *)(context_base + 7) = boundary_max_x - 16.0;
        *(float *)(context_base + 0xb) = element_y - 8.0;
        *(float *)(context_base + 0xf) = boundary_max_x + 16.0;
        *(float *)(context_base + 0x13) = element_y + 8.0;
      }
      else {
        boundary_max_x = *(float *)(context_base + 0x6f);
        element_y = *(float *)(context_base + 0x73);
        tooltip_padding = tooltip_padding * 24.0;
        boundary_width = tooltip_padding + boundary_max_x;
        tooltip_padding = tooltip_padding + element_y;
        *(float *)(context_base + 7) = boundary_max_x - 16.0;
        *(float *)(context_base + 0xb) = element_y - 8.0;
        *(float *)(context_base + 0xf) = boundary_width;
        *(float *)(context_base + 0x13) = tooltip_padding;
        *(float *)(context_base + 7) = boundary_max_x - 16.0;
        *(float *)(context_base + 0xb) = element_y - 8.0;
        *(float *)(context_base + 0xf) = boundary_width;
        *(float *)(context_base + 0x13) = tooltip_padding;
      }
      anchor_mode_ptr = (int *)(parent_element + 0xd4);
      calculate_ui_element_optimal_position(context_base + 0x77,context_base + 0x6f,parent_element + 0x48,anchor_mode_ptr,context_base + 0x17);
      if (*anchor_mode_ptr == -1) {
        *position_ptr = CONCAT44(element_y + 2.0,boundary_max_x + 2.0);
      }
      else {
        *position_ptr = *(uint64_t *)(context_base + 0x77);
      }
    }
  }
  else {
    calculate_ui_element_bounding_box(context_base + 0x17);
    tooltip_padding = *(float *)(element_data + 0x40);
    boundary_max_x = *(float *)(parent_element + 0x44);
    *(float *)(context_base + 7) = tooltip_padding - 1.0;
    element_y = boundary_max_x - 1.0;
    *(float *)(context_base + 0xf) = tooltip_padding + 1.0;
    *(float *)(context_base + 0xb) = element_y;
    *(float *)(context_base + 0x13) = boundary_max_x + 1.0;
    calculate_ui_element_optimal_position(element_y,element_data + 0x40,parent_element + 0x48,parent_element + 0xd4,context_base + 0x17);
  }
  return;
}
// 函数: 处理工具提示位置计算的简化版本
void calculate_tooltip_position_simplified(void)
{
  int64_t context_base;
  uint64_t *position_ptr;
  int64_t parent_element;
  int *anchor_mode_ptr;
  float tooltip_padding;
  float element_x;
  float element_y;
  float boundary_width;
  float boundary_height;
  tooltip_padding = *(float *)(parent_element + 0x16bc);
  get_element_screen_position(context_base + 0x6f);
  calculate_ui_element_bounding_box(context_base + 0x17,parent_element);
  if (((*(char *)(parent_element + 0x1d06) == '\0') && (*(char *)(parent_element + 0x1d07) != '\0')) &&
     ((*(byte *)(parent_element + 8) & 4) == 0)) {
    boundary_height = *(float *)(context_base + 0x6f);
    boundary_width = *(float *)(context_base + 0x73);
    *(float *)(context_base + 7) = boundary_height - 16.0;
    *(float *)(context_base + 0xb) = boundary_width - 8.0;
    *(float *)(context_base + 0xf) = boundary_height + 16.0;
    *(float *)(context_base + 0x13) = boundary_width + 8.0;
    *(float *)(context_base + 7) = boundary_height - 16.0;
    *(float *)(context_base + 0xb) = boundary_width - 8.0;
    *(float *)(context_base + 0xf) = boundary_height + 16.0;
    *(float *)(context_base + 0x13) = boundary_width + 8.0;
  }
  else {
    boundary_height = *(float *)(context_base + 0x6f);
    boundary_width = *(float *)(context_base + 0x73);
    tooltip_padding = tooltip_padding * 24.0;
    element_y = tooltip_padding + boundary_height;
    tooltip_padding = tooltip_padding + boundary_width;
    *(float *)(context_base + 7) = boundary_height - 16.0;
    *(float *)(context_base + 0xb) = boundary_width - 8.0;
    *(float *)(context_base + 0xf) = element_y;
    *(float *)(context_base + 0x13) = tooltip_padding;
    *(float *)(context_base + 7) = boundary_height - 16.0;
    *(float *)(context_base + 0xb) = boundary_width - 8.0;
    *(float *)(context_base + 0xf) = element_y;
    *(float *)(context_base + 0x13) = tooltip_padding;
  }
  anchor_mode_ptr = (int *)(parent_element + 0xd4);
  calculate_ui_element_optimal_position(context_base + 0x77,context_base + 0x6f,parent_element + 0x48,anchor_mode_ptr,context_base + 0x17);
  if (*anchor_mode_ptr == -1) {
    *position_ptr = CONCAT44(boundary_width + 2.0,boundary_height + 2.0);
  }
  else {
    *position_ptr = *(uint64_t *)(context_base + 0x77);
  }
  return;
}
// 函数: 处理工具提示位置计算的另一个简化版本
void calculate_tooltip_position_alternative(void)
{
  int64_t context_base;
  uint64_t *position_ptr;
  int64_t parent_element;
  int *anchor_mode_ptr;
  float tooltip_padding;
  float element_x;
  float element_y;
  float boundary_width;
  float boundary_height;
  tooltip_padding = *(float *)(parent_element + 0x16bc);
  get_element_screen_position();
  calculate_ui_element_bounding_box(context_base + 0x17,parent_element);
  if (((*(char *)(parent_element + 0x1d06) == '\0') && (*(char *)(parent_element + 0x1d07) != '\0')) &&
     ((*(byte *)(parent_element + 8) & 4) == 0)) {
    boundary_height = *(float *)(context_base + 0x6f);
    boundary_width = *(float *)(context_base + 0x73);
    *(float *)(context_base + 7) = boundary_height - 16.0;
    *(float *)(context_base + 0xb) = boundary_width - 8.0;
    *(float *)(context_base + 0xf) = boundary_height + 16.0;
    *(float *)(context_base + 0x13) = boundary_width + 8.0;
    *(float *)(context_base + 7) = boundary_height - 16.0;
    *(float *)(context_base + 0xb) = boundary_width - 8.0;
    *(float *)(context_base + 0xf) = boundary_height + 16.0;
    *(float *)(context_base + 0x13) = boundary_width + 8.0;
  }
  else {
    boundary_height = *(float *)(context_base + 0x6f);
    boundary_width = *(float *)(context_base + 0x73);
    tooltip_padding = tooltip_padding * 24.0;
    element_y = tooltip_padding + boundary_height;
    tooltip_padding = tooltip_padding + boundary_width;
    *(float *)(context_base + 7) = boundary_height - 16.0;
    *(float *)(context_base + 0xb) = boundary_width - 8.0;
    *(float *)(context_base + 0xf) = element_y;
    *(float *)(context_base + 0x13) = tooltip_padding;
    *(float *)(context_base + 7) = boundary_height - 16.0;
    *(float *)(context_base + 0xb) = boundary_width - 8.0;
    *(float *)(context_base + 0xf) = element_y;
    *(float *)(context_base + 0x13) = tooltip_padding;
  }
  anchor_mode_ptr = (int *)(parent_element + 0xd4);
  calculate_ui_element_optimal_position(context_base + 0x77,context_base + 0x6f,parent_element + 0x48,anchor_mode_ptr,context_base + 0x17);
  if (*anchor_mode_ptr == -1) {
    *position_ptr = CONCAT44(boundary_width + 2.0,boundary_height + 2.0);
  }
  else {
    *position_ptr = *(uint64_t *)(context_base + 0x77);
  }
  return;
}
// 函数: 设置工具提示偏移位置
void set_tooltip_offset_position(void)
{
  uint64_t *position_ptr;
  float horizontal_offset;
  float vertical_offset;
  *position_ptr = CONCAT44(vertical_offset + 2.0,horizontal_offset + 2.0);
  return;
}
// 函数: 获取计算后的位置
void get_calculated_position(void)
{
  int64_t context_base;
  uint64_t *position_ptr;
  *position_ptr = *(uint64_t *)(context_base + 0x77);
  return;
}