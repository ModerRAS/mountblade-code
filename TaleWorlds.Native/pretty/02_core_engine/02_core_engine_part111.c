#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part111.c - 核心引擎模块第111部分 - 4个函数

/**
 * 清理引擎状态并释放资源
 * 该函数负责减少引用计数并清理相关数据结构
 */
void cleanup_engine_state(void)

{
  int *reference_count;
  uint64_t *data_pointer;
  int64_t engine_context;
  uint64_t temp_data;
  
  engine_context = global_engine_context;
  // 设置引擎状态标志为1
  *(int8_t *)(*(int64_t *)(global_engine_context + 0x1af8) + 0xb1) = 1;
  engine_context = *(int64_t *)(engine_context + 0x1af8);
  reference_count = (int *)(*(int64_t *)(engine_context + 0x2e8) + 0x60);
  // 减少引用计数
  *reference_count = *reference_count - 1;
  update_reference_counter();
  data_pointer = (uint64_t *)
           (*(int64_t *)(*(int64_t *)(engine_context + 0x2e8) + 0x68) + -0x10 +
           (int64_t)*(int *)(*(int64_t *)(engine_context + 0x2e8) + 0x60) * 0x10);
  temp_data = data_pointer[1];
  // 保存数据到引擎上下文
  *(uint64_t *)(engine_context + 0x228) = *data_pointer;
  *(uint64_t *)(engine_context + 0x230) = temp_data;
  return;
}



// 全局变量地址重叠警告


/**
 * 处理引擎渲染逻辑
 * 该函数负责处理渲染相关的计算和操作，包括边界检测和颜色处理
 */
void process_engine_rendering(void)

{
  float *render_params;
  int64_t entity_list;
  bool should_continue;
  int64_t current_entity;
  int32_t color_value;
  uint render_flags;
  uint64_t entity_id;
  int64_t render_context;
  int64_t texture_data;
  int64_t *entity_pointer;
  int entity_index;
  int64_t list_offset;
  float position_x;
  float position_y;
  float position_z;
  float position_w;
  float color_r;
  float color_g;
  float color_b;
  float color_a;
  float temp_float_1;
  float temp_float_2;
  float temp_float_3;
  float temp_float_4;
  float temp_float_5;
  float temp_float_6;
  float temp_float_7;
  float temp_float_8;
  float temp_float_9;
  float temp_float_10;
  float temp_float_11;
  float temp_float_12;
  float temp_float_13;
  float temp_float_14;
  float temp_float_15;
  float temp_float_16;
  
  entity_list = global_engine_context;
  // 检查实体列表是否为空
  if (0 < *(int *)(global_engine_context + 0x1bb0)) {
    list_offset = (int64_t)*(int *)(global_engine_context + 0x1bb0) + -1;
    entity_pointer = (int64_t *)(*(int64_t *)(global_engine_context + 0x1bb8) + 8 + list_offset * 0x30);
    do {
      current_entity = *entity_pointer;
      if ((current_entity != 0) && ((*(uint *)(current_entity + 0xc) & 0x8000000) != 0)) goto LAB_180126e9d;
      entity_pointer = entity_pointer + -6;
      list_offset = list_offset + -1;
    } while (-1 < list_offset);
  }
  current_entity = 0;
LAB_180126e9d:
  list_offset = *(int64_t *)(global_engine_context + 0x1ce0);
  if ((current_entity != 0) || (list_offset != 0)) {
    entity_index = 0;
    if (0 < *(int *)(global_engine_context + 0x1c68)) {
      list_offset = 0;
      do {
        entity_list = *(int64_t *)(list_offset + *(int64_t *)(entity_list + 0x1c70));
        if ((((current_entity == 0) || (entity_list != *(int64_t *)(current_entity + 0x28))) &&
            ((*(int64_t *)(entity_list + 0x1ce8) == 0 ||
             (entity_list != *(int64_t *)(*(int64_t *)(entity_list + 0x1ce8) + 0x28))))) &&
           ((*(int64_t *)(entity_list + 0x1ce0) == 0 ||
            (entity_list != *(int64_t *)(*(int64_t *)(entity_list + 0x1ce0) + 0x28))))) {
          entity_id = get_entity_id(entity_list);
          render_context = 0x3a0;
          if (current_entity != 0) {
            render_context = 0x3b0;
          }
          render_params = (float *)(render_context + 0x1628 + global_engine_context);
          temp_float_1 = *render_params;
          temp_float_2 = render_params[1];
          temp_float_3 = render_params[2];
          temp_float_4 = render_params[3] * *(float *)(entity_list + 0x1dc8) * *(float *)(global_engine_context + 0x1628);
          position_x = *(float *)(entity_list + 0x10) + *(float *)(entity_list + 8);
          position_y = *(float *)(entity_list + 0xc) + *(float *)(entity_list + 0x14);
          color_value = calculate_color_value(&temp_float_1);
          render_entity(entity_id,entity_list + 8,&position_x,color_value,0,0xf);
        }
        entity_index = entity_index + 1;
        list_offset = list_offset + 8;
      } while (entity_index < *(int *)(entity_list + 0x1c68));
    }
    if (list_offset != 0) {
      list_offset = *(int64_t *)(entity_list + 0x1ce0);
      current_entity = *(int64_t *)(list_offset + 0x3a0);
      entity_index = *(int *)(current_entity + 0x188) + -1;
      if (-1 < entity_index) {
        entity_pointer = (int64_t *)(*(int64_t *)(current_entity + 400) + (int64_t)entity_index * 8);
        list_offset = (int64_t)entity_index;
        do {
          if ((*(char *)(*entity_pointer + 0xaf) != '\0') && (*(char *)(*entity_pointer + 0xb6) == '\0')) {
            current_entity = find_entity_by_id(*(uint64_t *)
                                         (*(int64_t *)(current_entity + 400) + (int64_t)entity_index * 8));
            break;
          }
          entity_index = entity_index + -1;
          entity_pointer = entity_pointer + -1;
          should_continue = 0 < list_offset;
          list_offset = list_offset + -1;
        } while (should_continue);
      }
      current_entity = *(int64_t *)(current_entity + 0x2e8);
      setup_render_context(current_entity,*(uint64_t *)(*(int64_t *)(current_entity + 0x38) + 0x18),
                    *(uint64_t *)(*(int64_t *)(current_entity + 0x38) + 0x20),0);
      list_offset = *(int64_t *)(list_offset + 0x3a8);
      if (((*(byte *)(list_offset + 0x432) & 1) != 0) &&
         (entity_list = *(int64_t *)(list_offset + 0x3a0), entity_list != list_offset)) {
        temp_float_10 = *(float *)(list_offset + 0x40);
        temp_float_1 = *(float *)(entity_list + 0x40);
        temp_float_2 = *(float *)(entity_list + 0x44);
        temp_float_5 = *(float *)(global_engine_context + 0x19c8);
        temp_float_6 = *(float *)(global_engine_context + 0x19cc);
        temp_float_7 = *(float *)(global_engine_context + 0x19d0);
        temp_float_3 = *(float *)(entity_list + 0x40) + *(float *)(entity_list + 0x48);
        temp_float_4 = *(float *)(entity_list + 0x44) + *(float *)(entity_list + 0x4c);
        temp_float_8 = *(float *)(global_engine_context + 0x19d4) *
                    *(float *)(entity_list + 0x1dc8) * *(float *)(global_engine_context + 0x1628);
        temp_float_9 = *(float *)(list_offset + 0x44);
        temp_float_16 = temp_float_9 + *(float *)(list_offset + 0x4c);
        temp_float_11 = temp_float_10 + *(float *)(list_offset + 0x48);
        color_value = calculate_color_value(&temp_float_5);
        render_texture(current_entity,&temp_float_1,&temp_float_10,color_value,*(int32_t *)(entity_list + 0x1634));
      }
      color_b = *(float *)(entity_list + 0x19f8);
      list_offset = *(int64_t *)(list_offset + 0x28);
      color_a = *(float *)(list_offset + 0x40) - color_b;
      color_g = *(float *)(list_offset + 0x44) - color_b;
      color_r = *(float *)(entity_list + 0x1634);
      if (*(float *)(entity_list + 0x1634) <= *(float *)(list_offset + 0x78)) {
        color_r = *(float *)(list_offset + 0x78);
      }
      color_value = *(float *)(list_offset + 0x40) + *(float *)(list_offset + 0x48) + color_b;
      temp_float_15 = *(float *)(list_offset + 0x44) + *(float *)(list_offset + 0x4c) + color_b;
      if ((((color_a <= *(float *)(list_offset + 8)) && (color_g <= *(float *)(list_offset + 0xc))) &&
          (*(float *)(list_offset + 8) + *(float *)(list_offset + 0x10) <= color_value)) &&
         (*(float *)(list_offset + 0xc) + *(float *)(list_offset + 0x14) <= temp_float_15)) {
        color_r = *(float *)(list_offset + 0x78);
        color_b = -color_b - 1.0;
        color_a = color_a - color_b;
        color_g = color_g - color_b;
        color_value = color_b + color_value;
        temp_float_15 = color_b + temp_float_15;
      }
      temp_float_5 = *(float *)(global_engine_context + 0x19b8);
      temp_float_6 = *(float *)(global_engine_context + 0x19bc);
      temp_float_7 = *(float *)(global_engine_context + 0x19c0);
      temp_float_8 = *(float *)(global_engine_context + 0x19c4);
      color_b = *(float *)(entity_list + 0x1cf4) * *(float *)(global_engine_context + 0x1628) * temp_float_8;
      if (0.0 <= temp_float_5) {
        color_a = temp_float_5;
        if (1.0 <= temp_float_5) {
          color_a = 1.0;
        }
      }
      else {
        color_a = 0.0;
      }
      if (0.0 <= temp_float_6) {
        position_x = temp_float_6;
        if (1.0 <= temp_float_6) {
          position_x = 1.0;
        }
      }
      else {
        position_x = 0.0;
      }
      if (0.0 <= temp_float_7) {
        position_y = temp_float_7;
        if (1.0 <= temp_float_7) {
          position_y = 1.0;
        }
      }
      else {
        position_y = 0.0;
      }
      render_flags = (int)(color_a * 255.0 + 0.5) | (int)(position_x * 255.0 + 0.5) << 8 |
               (int)(position_y * 255.0 + 0.5) << 0x10;
      color_a = 0.0;
      if ((0.0 <= color_b) && (color_a = color_b, 1.0 <= color_b)) {
        color_a = 1.0;
      }
      render_flags = (int)(color_a * 255.0 + 0.5) << 0x18;
      if ((render_flags & 0xff000000) != 0 || render_flags != 0) {
        temp_float_3 = color_a + 0.5;
        temp_float_4 = color_g + 0.5;
        if ((*(byte *)(current_entity + 0x30) & 1) == 0) {
          position_x = color_value - 0.49;
          position_y = temp_float_15 - 0.49;
        }
        else {
          position_x = color_value - 0.5;
          position_y = temp_float_15 - 0.5;
        }
        draw_entity(current_entity,&temp_float_3,&position_x,color_r,0xffffffff);
        apply_texture(current_entity,*(uint64_t *)(current_entity + 0x88),*(int32_t *)(current_entity + 0x80),
                      render_flags | render_flags,1,0x40400000);
        *(int32_t *)(current_entity + 0x80) = 0;
      }
      *(int *)(current_entity + 0x60) = *(int *)(current_entity + 0x60) + -1;
      update_reference_counter(current_entity);
    }
  }
  return;
}



// 全局变量地址重叠警告


/**
 * 处理引擎渲染逻辑（变体1）
 * 该函数是process_engine_rendering的变体，处理不同的渲染参数
 */
void process_engine_rendering_variant1(void)

{
  float *render_params;
  int32_t *color_data;
  byte texture_flag;
  int64_t entity_list;
  bool should_continue;
  int32_t color_r;
  int32_t color_g;
  int32_t color_b;
  int32_t color_a;
  uint render_flags;
  uint64_t entity_id;
  int64_t render_context;
  int64_t texture_data;
  int64_t *entity_pointer;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  uint alpha_value;
  int64_t unaff_RDI;
  int64_t unaff_R12;
  int entity_index;
  int64_t list_offset;
  float position_x;
  float position_y;
  float position_z;
  float position_w;
  float color_red;
  float color_green;
  float color_blue;
  float color_alpha;
  float temp_float_1;
  float temp_float_2;
  float temp_float_3;
  float temp_float_4;
  float temp_float_5;
  float temp_float_6;
  float temp_float_7;
  float temp_float_8;
  float temp_float_9;
  
  entity_index = 0;
  if (0 < *(int *)(unaff_RDI + 0x1c68)) {
    list_offset = 0;
    do {
      render_context = *(int64_t *)(list_offset + *(int64_t *)(unaff_RDI + 0x1c70));
      if ((((unaff_RBX == 0) || (render_context != *(int64_t *)(unaff_RBX + 0x28))) &&
          ((*(int64_t *)(unaff_RDI + 0x1ce8) == 0 ||
           (render_context != *(int64_t *)(*(int64_t *)(unaff_RDI + 0x1ce8) + 0x28))))) &&
         ((*(int64_t *)(unaff_RDI + 0x1ce0) == 0 ||
          (render_context != *(int64_t *)(*(int64_t *)(unaff_RDI + 0x1ce0) + 0x28))))) {
        entity_id = get_entity_id(render_context);
        color_alpha = *(float *)(unaff_RDI + 0x1dc8);
        texture_data = 0x3a0;
        if (unaff_RBX != 0) {
          texture_data = 0x3b0;
        }
        color_green = *(float *)(global_engine_context + 0x1628);
        color_data = (int32_t *)(texture_data + 0x1628 + global_engine_context);
        color_b = color_data[1];
        color_r = color_data[2];
        color_blue = (float)color_data[3];
        *(int32_t *)(unaff_RBP + -0x69) = *color_data;
        *(int32_t *)(unaff_RBP + -0x65) = color_b;
        *(int32_t *)(unaff_RBP + -0x61) = color_r;
        *(float *)(unaff_RBP + -0x5d) = color_blue;
        temp_float_7 = *(float *)(render_context + 0x10);
        temp_float_9 = *(float *)(render_context + 8);
        *(float *)(unaff_RBP + -0x5d) = color_blue * color_alpha * color_green;
        color_alpha = *(float *)(render_context + 0xc);
        color_green = *(float *)(render_context + 0x14);
        *(float *)(unaff_RBP + 0x67) = temp_float_7 + temp_float_9;
        *(float *)(unaff_RBP + 0x6b) = color_alpha + color_green;
        color_b = calculate_color_value(unaff_RBP + -0x69);
        render_entity(entity_id,render_context + 8,unaff_RBP + 0x67,color_b,0);
      }
      entity_index = entity_index + 1;
      list_offset = list_offset + 8;
    } while (entity_index < *(int *)(unaff_RDI + 0x1c68));
  }
  if (unaff_R12 != 0) {
    list_offset = *(int64_t *)(unaff_RDI + 0x1ce0);
    render_context = *(int64_t *)(list_offset + 0x3a0);
    entity_index = *(int *)(render_context + 0x188) + -1;
    if (-1 < entity_index) {
      entity_pointer = (int64_t *)(*(int64_t *)(render_context + 400) + (int64_t)entity_index * 8);
      texture_data = (int64_t)entity_index;
      do {
        if ((*(char *)(*entity_pointer + 0xaf) != '\0') && (*(char *)(*entity_pointer + 0xb6) == '\0')) {
          render_context = find_entity_by_id(*(uint64_t *)
                                        (*(int64_t *)(render_context + 400) + (int64_t)entity_index * 8));
          break;
        }
        entity_index = entity_index + -1;
        entity_pointer = entity_pointer + -1;
        should_continue = 0 < texture_data;
        texture_data = texture_data + -1;
      } while (should_continue);
    }
    render_context = *(int64_t *)(render_context + 0x2e8);
    setup_render_context(render_context,*(uint64_t *)(*(int64_t *)(render_context + 0x38) + 0x18),
                  *(uint64_t *)(*(int64_t *)(render_context + 0x38) + 0x20),0);
    texture_data = *(int64_t *)(list_offset + 0x3a8);
    if (((*(byte *)(texture_data + 0x432) & 1) != 0) &&
       (entity_list = *(int64_t *)(list_offset + 0x3a0), entity_list != texture_data)) {
      color_alpha = *(float *)(texture_data + 0x40);
      color_green = *(float *)(unaff_RDI + 0x1dc8);
      render_params = (float *)(entity_list + 0x40);
      temp_float_1 = *render_params;
      color_a = *(int32_t *)(entity_list + 0x44);
      temp_float_5 = *render_params;
      color_g = *(int32_t *)(entity_list + 0x44);
      color_b = *(int32_t *)(global_engine_context + 0x19cc);
      color_r = *(int32_t *)(global_engine_context + 0x19d0);
      color_blue = *(float *)(global_engine_context + 0x19d4);
      temp_float_9 = *(float *)(global_engine_context + 0x1628);
      temp_float_8 = *render_params + *(float *)(entity_list + 0x48);
      position_w = *(float *)(entity_list + 0x44) + *(float *)(entity_list + 0x4c);
      *(int32_t *)(unaff_RBP + -0x59) = *(int32_t *)(global_engine_context + 0x19c8);
      *(int32_t *)(unaff_RBP + -0x55) = color_b;
      *(int32_t *)(unaff_RBP + -0x51) = color_r;
      *(float *)(unaff_RBP + -0x4d) = color_blue;
      temp_float_7 = *(float *)(texture_data + 0x44);
      temp_float_4 = temp_float_7 + *(float *)(texture_data + 0x4c);
      *(float *)(unaff_RBP + -0x4d) = color_blue * color_green * temp_float_9;
      color_green = color_alpha + *(float *)(texture_data + 0x48);
      *(float *)(unaff_RBP + -0x69) = color_alpha;
      *(float *)(unaff_RBP + -0x65) = temp_float_7;
      *(float *)(unaff_RBP + -0x61) = color_green;
      *(float *)(unaff_RBP + -0x5d) = temp_float_4;
      *(float *)(unaff_RBP + -0x69) = temp_float_5;
      *(int32_t *)(unaff_RBP + -0x65) = color_g;
      *(float *)(unaff_RBP + -0x61) = temp_float_8;
      *(float *)(unaff_RBP + -0x5d) = position_w;
      *(float *)(unaff_RBP + -0x69) = temp_float_1;
      *(int32_t *)(unaff_RBP + -0x65) = color_a;
      *(float *)(unaff_RBP + -0x61) = temp_float_8;
      *(float *)(unaff_RBP + -0x5d) = position_w;
      *(float *)(unaff_RBP + -0x49) = color_alpha;
      *(float *)(unaff_RBP + -0x45) = temp_float_7;
      *(float *)(unaff_RBP + -0x41) = color_green;
      *(float *)(unaff_RBP + -0x3d) = temp_float_4;
      color_b = calculate_color_value(unaff_RBP + -0x59);
      render_texture(render_context,unaff_RBP + -0x69,unaff_RBP + -0x49,color_b,
                    *(int32_t *)(unaff_RDI + 0x1634));
    }
    color_alpha = *(float *)(unaff_RDI + 0x19f8);
    texture_data = *(int64_t *)(list_offset + 0x28);
    temp_float_9 = *(float *)(list_offset + 0x40) - color_alpha;
    temp_float_7 = *(float *)(list_offset + 0x44) - color_alpha;
    color_green = *(float *)(unaff_RDI + 0x1634);
    if (*(float *)(unaff_RDI + 0x1634) <= *(float *)(list_offset + 0x78)) {
      color_green = *(float *)(list_offset + 0x78);
    }
    temp_float_5 = *(float *)(list_offset + 0x40) + *(float *)(list_offset + 0x48) + color_alpha;
    color_blue = *(float *)(list_offset + 0x44) + *(float *)(list_offset + 0x4c) + color_alpha;
    if ((((temp_float_9 <= *(float *)(texture_data + 8)) && (temp_float_7 <= *(float *)(texture_data + 0xc))) &&
        (*(float *)(texture_data + 8) + *(float *)(texture_data + 0x10) <= temp_float_5)) &&
       (*(float *)(texture_data + 0xc) + *(float *)(texture_data + 0x14) <= color_blue)) {
      color_green = *(float *)(list_offset + 0x78);
      color_alpha = -color_alpha - 1.0;
      temp_float_9 = temp_float_9 - color_alpha;
      temp_float_7 = temp_float_7 - color_alpha;
      temp_float_5 = color_alpha + temp_float_5;
      color_blue = color_alpha + color_blue;
    }
    color_alpha = *(float *)(global_engine_context + 0x19b8);
    color_b = *(int32_t *)(global_engine_context + 0x19bc);
    color_r = *(int32_t *)(global_engine_context + 0x19c0);
    temp_float_1 = *(float *)(global_engine_context + 0x19c4);
    temp_float_4 = *(float *)(unaff_RDI + 0x1cf4) * *(float *)(global_engine_context + 0x1628) * temp_float_1;
    *(float *)(unaff_RBP + -0x59) = color_alpha;
    *(int32_t *)(unaff_RBP + -0x55) = color_b;
    *(int32_t *)(unaff_RBP + -0x51) = color_r;
    *(float *)(unaff_RBP + -0x4d) = temp_float_1;
    if (0.0 <= color_alpha) {
      if (1.0 <= color_alpha) {
        color_alpha = 1.0;
      }
    }
    else {
      color_alpha = 0.0;
    }
    temp_float_1 = *(float *)(unaff_RBP + -0x55);
    if (0.0 <= temp_float_1) {
      if (1.0 <= temp_float_1) {
        temp_float_1 = 1.0;
      }
    }
    else {
      temp_float_1 = 0.0;
    }
    temp_float_8 = *(float *)(unaff_RBP + -0x51);
    if (0.0 <= temp_float_8) {
      if (1.0 <= temp_float_8) {
        temp_float_8 = 1.0;
      }
    }
    else {
      temp_float_8 = 0.0;
    }
    alpha_value = (int)(color_alpha * 255.0 + 0.5) | (int)(temp_float_1 * 255.0 + 0.5) << 8 |
             (int)(temp_float_8 * 255.0 + 0.5) << 0x10;
    color_alpha = 0.0;
    if ((0.0 <= temp_float_4) && (color_alpha = temp_float_4, 1.0 <= temp_float_4)) {
      color_alpha = 1.0;
    }
    render_flags = (int)(color_alpha * 255.0 + 0.5) << 0x18;
    if ((alpha_value & 0xff000000) != 0 || render_flags != 0) {
      texture_flag = *(byte *)(render_context + 0x30);
      *(float *)(unaff_RBP + 0x6f) = temp_float_9 + 0.5;
      *(float *)(unaff_RBP + 0x73) = temp_float_7 + 0.5;
      if ((texture_flag & 1) == 0) {
        temp_float_5 = temp_float_5 - 0.49;
        color_blue = color_blue - 0.49;
      }
      else {
        temp_float_5 = temp_float_5 - 0.5;
        color_blue = color_blue - 0.5;
      }
      *(float *)(unaff_RBP + 0x67) = temp_float_5;
      *(float *)(unaff_RBP + 0x6b) = color_blue;
      draw_entity(render_context,unaff_RBP + 0x6f,unaff_RBP + 0x67,color_green,0xffffffff);
      apply_texture(render_context,*(uint64_t *)(render_context + 0x88),*(int32_t *)(render_context + 0x80),
                    alpha_value | render_flags,1);
      *(int32_t *)(render_context + 0x80) = 0;
    }
    *(int *)(render_context + 0x60) = *(int *)(render_context + 0x60) + -1;
    update_reference_counter(render_context);
  }
  return;
}



// 全局变量地址重叠警告


/**
 * 处理引擎渲染逻辑（变体2）
 * 该函数是process_engine_rendering的另一个变体，处理不同的渲染参数和纹理
 */
void process_engine_rendering_variant2(void)

{
  float *render_params;
  int32_t *color_data;
  byte texture_flag;
  int64_t entity_list;
  bool should_continue;
  int32_t color_r;
  int32_t color_g;
  int32_t color_b;
  int32_t color_a;
  uint render_flags;
  uint64_t entity_id;
  int64_t render_context;
  int64_t texture_data;
  int64_t *entity_pointer;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  uint alpha_value;
  int64_t unaff_RDI;
  int64_t unaff_R12;
  int entity_index;
  int64_t list_offset;
  float position_x;
  float position_y;
  float position_z;
  float position_w;
  float color_red;
  float color_green;
  float color_blue;
  float color_alpha;
  float temp_float_1;
  float temp_float_2;
  float temp_float_3;
  float temp_float_4;
  float temp_float_5;
  float temp_float_6;
  float temp_float_7;
  float temp_float_8;
  float temp_float_9;
  
  entity_index = 0;
  if (0 < *(int *)(unaff_RDI + 0x1c68)) {
    list_offset = 0;
    do {
      render_context = *(int64_t *)(list_offset + *(int64_t *)(unaff_RDI + 0x1c70));
      if ((((unaff_RBX == 0) || (render_context != *(int64_t *)(unaff_RBX + 0x28))) &&
          ((*(int64_t *)(unaff_RDI + 0x1ce8) == 0 ||
           (render_context != *(int64_t *)(*(int64_t *)(unaff_RDI + 0x1ce8) + 0x28))))) &&
         ((*(int64_t *)(unaff_RDI + 0x1ce0) == 0 ||
          (render_context != *(int64_t *)(*(int64_t *)(unaff_RDI + 0x1ce0) + 0x28))))) {
        entity_id = get_entity_id(render_context);
        color_alpha = *(float *)(unaff_RDI + 0x1dc8);
        texture_data = 0x3a0;
        if (unaff_RBX != 0) {
          texture_data = 0x3b0;
        }
        color_green = *(float *)(global_engine_context + 0x1628);
        color_data = (int32_t *)(texture_data + 0x1628 + global_engine_context);
        color_b = color_data[1];
        color_r = color_data[2];
        color_blue = (float)color_data[3];
        *(int32_t *)(unaff_RBP + -0x69) = *color_data;
        *(int32_t *)(unaff_RBP + -0x65) = color_b;
        *(int32_t *)(unaff_RBP + -0x61) = color_r;
        *(float *)(unaff_RBP + -0x5d) = color_blue;
        temp_float_7 = *(float *)(render_context + 0x10);
        temp_float_9 = *(float *)(render_context + 8);
        *(float *)(unaff_RBP + -0x5d) = color_blue * color_alpha * color_green;
        color_alpha = *(float *)(render_context + 0xc);
        color_green = *(float *)(render_context + 0x14);
        *(float *)(unaff_RBP + 0x67) = temp_float_7 + temp_float_9;
        *(float *)(unaff_RBP + 0x6b) = color_alpha + color_green;
        color_b = calculate_color_value(unaff_RBP + -0x69);
        render_entity(entity_id,render_context + 8,unaff_RBP + 0x67,color_b,0);
      }
      entity_index = entity_index + 1;
      list_offset = list_offset + 8;
    } while (entity_index < *(int *)(unaff_RDI + 0x1c68));
  }
  if (unaff_R12 != 0) {
    list_offset = *(int64_t *)(unaff_RDI + 0x1ce0);
    render_context = *(int64_t *)(list_offset + 0x3a0);
    entity_index = *(int *)(render_context + 0x188) + -1;
    if (-1 < entity_index) {
      entity_pointer = (int64_t *)(*(int64_t *)(render_context + 400) + (int64_t)entity_index * 8);
      texture_data = (int64_t)entity_index;
      do {
        if ((*(char *)(*entity_pointer + 0xaf) != '\0') && (*(char *)(*entity_pointer + 0xb6) == '\0')) {
          render_context = find_entity_by_id(*(uint64_t *)
                                        (*(int64_t *)(render_context + 400) + (int64_t)entity_index * 8));
          break;
        }
        entity_index = entity_index + -1;
        entity_pointer = entity_pointer + -1;
        should_continue = 0 < texture_data;
        texture_data = texture_data + -1;
      } while (should_continue);
    }
    render_context = *(int64_t *)(render_context + 0x2e8);
    setup_render_context(render_context,*(uint64_t *)(*(int64_t *)(render_context + 0x38) + 0x18),
                  *(uint64_t *)(*(int64_t *)(render_context + 0x38) + 0x20),0);
    texture_data = *(int64_t *)(list_offset + 0x3a8);
    if (((*(byte *)(texture_data + 0x432) & 1) != 0) &&
       (entity_list = *(int64_t *)(list_offset + 0x3a0), entity_list != texture_data)) {
      color_alpha = *(float *)(texture_data + 0x40);
      color_green = *(float *)(unaff_RDI + 0x1dc8);
      render_params = (float *)(entity_list + 0x40);
      temp_float_1 = *render_params;
      color_a = *(int32_t *)(entity_list + 0x44);
      temp_float_5 = *render_params;
      color_g = *(int32_t *)(entity_list + 0x44);
      color_b = *(int32_t *)(global_engine_context + 0x19cc);
      color_r = *(int32_t *)(global_engine_context + 0x19d0);
      color_blue = *(float *)(global_engine_context + 0x19d4);
      temp_float_9 = *(float *)(global_engine_context + 0x1628);
      temp_float_8 = *render_params + *(float *)(entity_list + 0x48);
      position_w = *(float *)(entity_list + 0x44) + *(float *)(entity_list + 0x4c);
      *(int32_t *)(unaff_RBP + -0x59) = *(int32_t *)(global_engine_context + 0x19c8);
      *(int32_t *)(unaff_RBP + -0x55) = color_b;
      *(int32_t *)(unaff_RBP + -0x51) = color_r;
      *(float *)(unaff_RBP + -0x4d) = color_blue;
      temp_float_7 = *(float *)(texture_data + 0x44);
      temp_float_4 = temp_float_7 + *(float *)(texture_data + 0x4c);
      *(float *)(unaff_RBP + -0x4d) = color_blue * color_green * temp_float_9;
      color_green = color_alpha + *(float *)(texture_data + 0x48);
      *(float *)(unaff_RBP + -0x69) = color_alpha;
      *(float *)(unaff_RBP + -0x65) = temp_float_7;
      *(float *)(unaff_RBP + -0x61) = color_green;
      *(float *)(unaff_RBP + -0x5d) = temp_float_4;
      *(float *)(unaff_RBP + -0x69) = temp_float_5;
      *(int32_t *)(unaff_RBP + -0x65) = color_g;
      *(float *)(unaff_RBP + -0x61) = temp_float_8;
      *(float *)(unaff_RBP + -0x5d) = position_w;
      *(float *)(unaff_RBP + -0x69) = temp_float_1;
      *(int32_t *)(unaff_RBP + -0x65) = color_a;
      *(float *)(unaff_RBP + -0x61) = temp_float_8;
      *(float *)(unaff_RBP + -0x5d) = position_w;
      *(float *)(unaff_RBP + -0x49) = color_alpha;
      *(float *)(unaff_RBP + -0x45) = temp_float_7;
      *(float *)(unaff_RBP + -0x41) = color_green;
      *(float *)(unaff_RBP + -0x3d) = temp_float_4;
      color_b = calculate_color_value(unaff_RBP + -0x59);
      render_texture(render_context,unaff_RBP + -0x69,unaff_RBP + -0x49,color_b,
                    *(int32_t *)(unaff_RDI + 0x1634));
    }
    color_alpha = *(float *)(unaff_RDI + 0x19f8);
    texture_data = *(int64_t *)(list_offset + 0x28);
    temp_float_9 = *(float *)(list_offset + 0x40) - color_alpha;
    temp_float_7 = *(float *)(list_offset + 0x44) - color_alpha;
    color_green = *(float *)(unaff_RDI + 0x1634);
    if (*(float *)(unaff_RDI + 0x1634) <= *(float *)(list_offset + 0x78)) {
      color_green = *(float *)(list_offset + 0x78);
    }
    temp_float_5 = *(float *)(list_offset + 0x40) + *(float *)(list_offset + 0x48) + color_alpha;
    color_blue = *(float *)(list_offset + 0x44) + *(float *)(list_offset + 0x4c) + color_alpha;
    if ((((temp_float_9 <= *(float *)(texture_data + 8)) && (temp_float_7 <= *(float *)(texture_data + 0xc))) &&
        (*(float *)(texture_data + 8) + *(float *)(texture_data + 0x10) <= temp_float_5)) &&
       (*(float *)(texture_data + 0xc) + *(float *)(texture_data + 0x14) <= color_blue)) {
      color_green = *(float *)(list_offset + 0x78);
      color_alpha = -color_alpha - 1.0;
      temp_float_9 = temp_float_9 - color_alpha;
      temp_float_7 = temp_float_7 - color_alpha;
      temp_float_5 = color_alpha + temp_float_5;
      color_blue = color_alpha + color_blue;
    }
    color_alpha = *(float *)(global_engine_context + 0x19b8);
    color_b = *(int32_t *)(global_engine_context + 0x19bc);
    color_r = *(int32_t *)(global_engine_context + 0x19c0);
    temp_float_1 = *(float *)(global_engine_context + 0x19c4);
    temp_float_4 = *(float *)(unaff_RDI + 0x1cf4) * *(float *)(global_engine_context + 0x1628) * temp_float_1;
    *(float *)(unaff_RBP + -0x59) = color_alpha;
    *(int32_t *)(unaff_RBP + -0x55) = color_b;
    *(int32_t *)(unaff_RBP + -0x51) = color_r;
    *(float *)(unaff_RBP + -0x4d) = temp_float_1;
    if (0.0 <= color_alpha) {
      if (1.0 <= color_alpha) {
        color_alpha = 1.0;
      }
    }
    else {
      color_alpha = 0.0;
    }
    temp_float_1 = *(float *)(unaff_RBP + -0x55);
    if (0.0 <= temp_float_1) {
      if (1.0 <= temp_float_1) {
        temp_float_1 = 1.0;
      }
    }
    else {
      temp_float_1 = 0.0;
    }
    temp_float_8 = *(float *)(unaff_RBP + -0x51);
    if (0.0 <= temp_float_8) {
      if (1.0 <= temp_float_8) {
        temp_float_8 = 1.0;
      }
    }
    else {
      temp_float_8 = 0.0;
    }
    alpha_value = (int)(color_alpha * 255.0 + 0.5) | (int)(temp_float_1 * 255.0 + 0.5) << 8 |
             (int)(temp_float_8 * 255.0 + 0.5) << 0x10;
    color_alpha = 0.0;
    if ((0.0 <= temp_float_4) && (color_alpha = temp_float_4, 1.0 <= temp_float_4)) {
      color_alpha = 1.0;
    }
    render_flags = (int)(color_alpha * 255.0 + 0.5) << 0x18;
    if ((alpha_value & 0xff000000) != 0 || render_flags != 0) {
      texture_flag = *(byte *)(render_context + 0x30);
      *(float *)(unaff_RBP + 0x6f) = temp_float_9 + 0.5;
      *(float *)(unaff_RBP + 0x73) = temp_float_7 + 0.5;
      if ((texture_flag & 1) == 0) {
        temp_float_5 = temp_float_5 - 0.49;
        color_blue = color_blue - 0.49;
      }
      else {
        temp_float_5 = temp_float_5 - 0.5;
        color_blue = color_blue - 0.5;
      }
      *(float *)(unaff_RBP + 0x67) = temp_float_5;
      *(float *)(unaff_RBP + 0x6b) = color_blue;
      draw_entity(render_context,unaff_RBP + 0x6f,unaff_RBP + 0x67,color_green,0xffffffff);
      apply_texture(render_context,*(uint64_t *)(render_context + 0x88),*(int32_t *)(render_context + 0x80),
                    alpha_value | render_flags,1);
      *(int32_t *)(render_context + 0x80) = 0;
    }
    *(int *)(render_context + 0x60) = *(int *)(render_context + 0x60) + -1;
    update_reference_counter(render_context);
  }
  return;
}



// 全局变量地址重叠警告


