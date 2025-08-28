#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part031.c - 核心引擎模块第31部分 - 包含7个函数

// 函数: void update_entity_reference(longlong entity_id, longlong *reference_chain)
// 功能: 更新实体引用链，管理实体的引用关系
void update_entity_reference(longlong entity_id, longlong *reference_chain)

{
  longlong *current_ref;
  uint64_t temp_stack_40;
  int32_t temp_stack_38;
  longlong temp_stack_30;
  int8_t temp_array_28 [8];
  longlong temp_stack_20;
  int32_t temp_stack_18;
  longlong *temp_stack_10;
  
  // 检查是否需要更新引用
  if (*(longlong *)(entity_id + 0x1b0) != *reference_chain) {
    // 处理空引用情况
    if (*reference_chain == 0) {
      temp_stack_10 = (longlong *)0x0;
      temp_array_28[0] = 0;
      temp_stack_18 = 0;
      temp_stack_20 = entity_id;
      initialize_entity_context(temp_array_28);
      if ((*(int *)(entity_id + 0x208) != 0) || (*(int *)(entity_id + 0x204) != 0)) {
        temp_stack_40 = *(uint64_t *)(entity_id + 0x1b0);
        temp_stack_38 = 0;
        setup_entity_reference(&temp_stack_40);
        current_ref = temp_stack_10;
        update_entity_field(temp_stack_10 + 2, temp_stack_30 + 0x10);
        update_entity_field(current_ref + 7, temp_stack_30 + 0x38);
        update_entity_field(current_ref + 0xc, temp_stack_30 + 0x60);
        update_entity_field(current_ref + 0x11, temp_stack_30 + 0x88);
        update_entity_field(current_ref + 0x19, temp_stack_30 + 200);
        cleanup_entity_reference(&temp_stack_40);
      }
      release_entity_context(temp_array_28);
      if (temp_stack_10 != (longlong *)0x0) {
        (**(code **)(*temp_stack_10 + 0x38))();
      }
    }
    // 遍历引用链
    reference_chain = (longlong *)*reference_chain;
    if (reference_chain != (longlong *)0x0) {
      (**(code **)(*reference_chain + 0x28))(reference_chain);
    }
    // 更新实体引用
    current_ref = *(longlong **)(entity_id + 0x1b0);
    *(longlong **)(entity_id + 0x1b0) = reference_chain;
    if (current_ref != (longlong *)0x0) {
      (**(code **)(*current_ref + 0x38))();
    }
  }
  return;
}

// 函数: longlong calculate_entity_size(longlong entity_id)
// 功能: 计算实体的尺寸大小
longlong calculate_entity_size(longlong entity_id)

{
  longlong temp_var1;
  longlong temp_var2;
  byte entity_flag;
  
  entity_flag = *(byte *)(entity_id + 0xfd) & 0x20;
  temp_var1 = entity_id;
  if (entity_flag == 0) {
    temp_var1 = get_entity_handle(*(uint64_t *)(entity_id + 0x1b0));
  }
  temp_var2 = 2;
  if (0xffff < *(int *)(temp_var1 + 0x200)) {
    temp_var2 = 4;
  }
  if (entity_flag == 0) {
    entity_id = get_entity_handle(*(uint64_t *)(entity_id + 0x1b0));
  }
  return (*(int *)(entity_id + 0x1fc) * 3) * temp_var2;
}

// 函数: float * calculate_bounding_box(float *entity_data)
// 功能: 计算实体的边界框
float * calculate_bounding_box(float *entity_data)

{
  float *min_bounds;
  byte entity_flag;
  longlong *entity_ref;
  float *max_bounds;
  char lock_status;
  float *current_pos;
  uint index;
  ulonglong count;
  bool is_locked;
  float temp_float1;
  float temp_float2;
  float min_x;
  float min_y;
  float min_z;
  int32_t temp_stack_ac;
  float max_x;
  float max_y;
  float max_z;
  int32_t temp_stack_9c;
  float *bounding_data;
  int32_t temp_stack_90;
  longlong temp_stack_88;
  uint64_t temp_stack_78;
  uint64_t temp_stack_70;
  uint64_t temp_stack_68;
  uint64_t temp_stack_60;
  float temp_x;
  float temp_y;
  float temp_z;
  float temp_w;
  uint64_t temp_stack_48;
  uint64_t temp_stack_40;
  uint64_t temp_stack_38;
  
  temp_stack_38 = 0xfffffffffffffffe;
  current_pos = entity_data;
  if ((*(byte *)((longlong)entity_data + 0xfd) & 0x20) == 0) {
    current_pos = (float *)get_entity_handle(*(uint64_t *)(entity_data + 0x6c));
  }
  if ((*(longlong *)(current_pos + 0x84) != 0) && (((uint)entity_data[0x40] & 0x80) == 0)) {
    // 初始化边界框为极值
    min_bounds = entity_data + 0x9d;
    min_bounds[0] = 1e+08;  // min_x
    min_bounds[1] = 1e+08;  // min_y
    entity_data[0x9f] = 1e+08;  // min_z
    entity_data[0xa0] = 3.4028235e+38;  // max_x
    entity_data[0xa1] = -1e+08;  // max_x (min for max calculation)
    entity_data[0xa2] = -1e+08;  // max_y (min for max calculation)
    entity_data[0xa3] = -1e+08;  // max_z (min for max calculation)
    entity_data[0xa4] = 3.4028235e+38;  // max_z
    index = 0;
    entity_data[0xa9] = 0.0;  // radius
    entity_data[0xa5] = 0.0;  // center_x
    entity_data[0xa6] = 0.0;  // center_y
    entity_data[0xa7] = 0.0;  // center_z
    entity_data[0xa8] = 3.4028235e+38;  // max_radius
    temp_stack_90 = 0;
    bounding_data = current_pos;
    setup_bounding_calculation(&bounding_data);
    if (*(int *)(temp_stack_88 + 0x10) != 0) {
      do {
        current_pos = (float *)((longlong)(int)index * 0x10 + *(longlong *)(temp_stack_88 + 0x18));
        max_x = *current_pos;
        if (*min_bounds < max_x) {
          max_x = *min_bounds;
        }
        max_y = current_pos[1];
        if (entity_data[0x9e] < max_y) {
          max_y = entity_data[0x9e];
        }
        max_z = current_pos[2];
        if (entity_data[0x9f] < max_z) {
          max_z = entity_data[0x9f];
        }
        *(ulonglong *)min_bounds = CONCAT44(max_y, max_x);
        *(ulonglong *)(entity_data + 0x9f) = CONCAT44(temp_stack_9c, max_z);
        min_x = *current_pos;
        if (min_x < entity_data[0xa1]) {
          min_x = entity_data[0xa1];
        }
        min_y = current_pos[1];
        if (min_y < entity_data[0xa2]) {
          min_y = entity_data[0xa2];
        }
        min_z = current_pos[2];
        if (min_z < entity_data[0xa3]) {
          min_z = entity_data[0xa3];
        }
        *(ulonglong *)(entity_data + 0xa1) = CONCAT44(min_y, min_x);
        *(ulonglong *)(entity_data + 0xa3) = CONCAT44(temp_stack_ac, min_z);
        index = index + 1;
      } while (index < *(uint *)(temp_stack_88 + 0x10));
    }
    current_pos = *(float **)(entity_data + 0x6e);
    if ((current_pos != (float *)0x0) && (((uint)current_pos[0x4e] & 0x3000) != 0)) {
      // 应用变换矩阵
      temp_stack_78 = *(uint64_t *)(entity_data + 0x48);
      temp_stack_70 = *(uint64_t *)(entity_data + 0x4a);
      temp_stack_68 = *(uint64_t *)(entity_data + 0x4c);
      temp_stack_60 = *(uint64_t *)(entity_data + 0x4e);
      temp_x = entity_data[0x50];
      temp_y = entity_data[0x51];
      temp_z = entity_data[0x52];
      temp_w = entity_data[0x53];
      temp_stack_48 = *(uint64_t *)(entity_data + 0x54);
      temp_stack_40 = *(uint64_t *)(entity_data + 0x56);
      apply_transformation_matrix(&temp_stack_78);
      transform_bounding_box(min_bounds, min_bounds, &temp_stack_78);
      current_pos = *(float **)(entity_data + 0x6e);
      if (((uint)current_pos[0x4e] & 0x3000) == 0x2000) {
        // 应用缩放变换
        temp_stack_78 = *(uint64_t *)(entity_data + 0x48);
        temp_stack_70 = *(uint64_t *)(entity_data + 0x4a);
        temp_stack_68 = *(uint64_t *)(entity_data + 0x4c);
        temp_stack_60 = *(uint64_t *)(entity_data + 0x4e);
        temp_x = entity_data[0x50];
        temp_y = entity_data[0x51];
        temp_z = entity_data[0x52];
        temp_w = entity_data[0x53];
        temp_stack_48 = *(uint64_t *)(entity_data + 0x54);
        temp_stack_40 = *(uint64_t *)(entity_data + 0x56);
        apply_scale_transform(&temp_stack_78, 0x3fc90fdb);
        transform_bounding_box(min_bounds, min_bounds, &temp_stack_78);
        temp_stack_78 = *(uint64_t *)(entity_data + 0x48);
        temp_stack_70 = *(uint64_t *)(entity_data + 0x4a);
        temp_stack_68 = *(uint64_t *)(entity_data + 0x4c);
        temp_stack_60 = *(uint64_t *)(entity_data + 0x4e);
        temp_x = entity_data[0x50];
        temp_y = entity_data[0x51];
        temp_z = entity_data[0x52];
        temp_w = entity_data[0x53];
        temp_stack_48 = *(uint64_t *)(entity_data + 0x54);
        temp_stack_40 = *(uint64_t *)(entity_data + 0x56);
        apply_rotation_transform(&temp_stack_78);
        current_pos = (float *)transform_bounding_box(min_bounds, min_bounds, &temp_stack_78);
      }
    }
    max_bounds = bounding_data;
    if (entity_data[0xa1] < *min_bounds) {
      // 边界框无效，重置为零
      entity_data[0xa9] = 0.0;
      min_bounds[0] = 0.0;
      min_bounds[1] = 0.0;
      entity_data[0x9f] = 0.0;
      entity_data[0xa0] = 0.0;
      entity_data[0xa1] = 0.0;
      entity_data[0xa2] = 0.0;
      entity_data[0xa3] = 0.0;
      entity_data[0xa4] = 0.0;
      entity_data[0xa5] = 0.0;
      entity_data[0xa6] = 0.0;
      entity_data[0xa7] = 0.0;
      entity_data[0xa8] = 0.0;
    }
    else {
      // 计算边界框中心点
      entity_data[0xa5] = (entity_data[0xa1] + *min_bounds) * 0.5;
      entity_data[0xa6] = (entity_data[0xa2] + entity_data[0x9e]) * 0.5;
      entity_data[0xa7] = (entity_data[0xa3] + entity_data[0x9f]) * 0.5;
      entity_data[0xa8] = 3.4028235e+38;
      temp_float1 = 0.0;
      count = (ulonglong)*(uint *)(temp_stack_88 + 0x10);
      if (0 < (int)*(uint *)(temp_stack_88 + 0x10)) {
        current_pos = *(float **)(temp_stack_88 + 0x18);
        temp_float2 = temp_float1;
        do {
          temp_float1 = (*current_pos - entity_data[0xa5]) * (*current_pos - entity_data[0xa5]) +
                   (current_pos[1] - entity_data[0xa6]) * (current_pos[1] - entity_data[0xa6]) +
                   (current_pos[2] - entity_data[0xa7]) * (current_pos[2] - entity_data[0xa7]);
          if (temp_float1 <= temp_float2) {
            temp_float1 = temp_float2;
          }
          current_pos = current_pos + 4;
          count = count - 1;
          temp_float2 = temp_float1;
        } while (count != 0);
      }
      entity_data[0xa9] = SQRT(temp_float1);
    }
    if (bounding_data != (float *)0x0) {
      // 处理边界框数据的引用计数
      while( true ) {
        LOCK();
        lock_status = *(char *)(max_bounds + 0x3b);
        is_locked = lock_status == '\0';
        if (is_locked) {
          *(char *)(max_bounds + 0x3b) = '\x01';
          lock_status = '\0';
        }
        UNLOCK();
        if (is_locked) break;
        temp_float1 = (float)_Thrd_id();
        if ((max_bounds[0x3c] == temp_float1) || (max_bounds[0x3c] != 0.0)) goto LAB_180075f4f;
        Sleep();
      }
      lock_status = '\0';
LAB_180075f4f:
      LOCK();
      min_bounds = max_bounds + 0x3a;
      temp_float1 = *min_bounds;
      current_pos = (float *)(ulonglong)(uint)temp_float1;
      *min_bounds = (float)((int)*min_bounds + -1);
      UNLOCK();
      if (lock_status == '\0') {
        if ((((temp_float1 == 1.4013e-45) && (*(longlong *)(bounding_data + 0x84) != 0)) &&
            (current_pos = bounding_data, release_bounding_data(bounding_data), *(char *)(current_pos + 0x3f) == '\0')) &&
           ((*(char *)(current_pos + 0x3d) == '\0' &&
            (((*(byte *)((longlong)current_pos + 0xfd) & 0x20) == 0 ||
             ((*(byte *)((longlong)current_pos + 0xfe) & 1) == 0)))))) {
          entity_ref = *(longlong **)(current_pos + 0x84);
          current_pos[0x84] = 0.0;
          current_pos[0x85] = 0.0;
          if (entity_ref != (longlong *)0x0) {
            (**(code **)(*entity_ref + 0x38))();
          }
        }
        LOCK();
        entity_flag = *(byte *)(max_bounds + 0x3b);
        *(byte *)(max_bounds + 0x3b) = 0;
        current_pos = (float *)(ulonglong)entity_flag;
        UNLOCK();
      }
    }
  }
  return current_pos;
}

// 函数: void update_entity_animation(longlong *entity_data)
// 功能: 更新实体动画状态
void update_entity_animation(longlong *entity_data)

{
  ushort frame_index;
  longlong *animation_data;
  uint frame_count;
  int temp_int1;
  int temp_int2;
  int temp_int3;
  longlong temp_long1;
  float current_frame;
  float target_frame;
  float interpolation_factor;
  int8_t temp_array_138 [8];
  longlong *temp_stack_130;
  int32_t temp_stack_128;
  longlong *temp_stack_120;
  longlong *temp_stack_118;
  int32_t temp_stack_110;
  longlong temp_stack_108;
  uint64_t temp_stack_100;
  uint64_t temp_stack_f8;
  int8_t temp_stack_f0;
  uint64_t temp_stack_e8;
  uint64_t temp_stack_d8;
  uint64_t temp_stack_c8;
  uint64_t temp_stack_c0;
  int8_t temp_stack_b8;
  uint64_t temp_stack_b0;
  uint64_t temp_stack_a0;
  uint64_t temp_stack_90;
  
  temp_stack_90 = 0xfffffffffffffffe;
  while( true ) {
    if (((int)entity_data[0x41] != 0) &&
       ((current_frame = *(float *)(entity_data + 0x5b) - *(float *)((longlong)entity_data + 0x2dc), current_frame <= -0.01
        || (0.01 <= current_frame)))) {
      animation_data = entity_data;
      if ((((*(byte *)((longlong)entity_data + 0xfd) & 0x40) == 0) || (entity_data[0x42] == 0)) &&
         (entity_data[0x36] != 0)) {
        animation_data = (longlong *)get_animation_data();
      }
      temp_int3 = 0;
      if (animation_data == entity_data) {
        temp_stack_120 = (longlong *)0x0;
        temp_array_138[0] = 0;
        temp_stack_128 = 0;
        temp_stack_130 = animation_data;
        initialize_animation_context(temp_array_138);
        animation_data = temp_stack_120 + 0x16;
        frame_index = *(ushort *)(temp_stack_120 + 0x18);
        current_frame = *(float *)(temp_stack_120[0x17] + -4 + (ulonglong)frame_index * 4);
        target_frame = *(float *)((longlong)entity_data + 0x2dc);
        if (current_frame < *(float *)((longlong)entity_data + 0x2dc)) {
          *(float *)((longlong)entity_data + 0x2dc) = current_frame;
          frame_index = *(ushort *)(temp_stack_120 + 0x18);
          target_frame = current_frame;
        }
        frame_count = (uint)frame_index;
        if (frame_index < 2) {
          temp_int3 = frame_count - 1;
          current_frame = 0.0;
          temp_int2 = temp_int3;
        }
        else {
          temp_int2 = frame_count - 1;
          if (0 < (int)(frame_count - 2)) {
            do {
              temp_int1 = temp_int2 + temp_int3 >> 1;
              if (*(float *)(temp_stack_120[0x17] + (longlong)temp_int1 * 4) <= target_frame) {
                temp_int3 = temp_int1;
                temp_int1 = temp_int2;
              }
              temp_int2 = temp_int1;
            } while (temp_int3 < temp_int2 + -1);
          }
          current_frame = *(float *)(temp_stack_120[0x17] + (longlong)temp_int3 * 4);
          current_frame = (target_frame - current_frame) / (*(float *)(temp_stack_120[0x17] + (longlong)temp_int2 * 4) - current_frame);
          if (0.0 <= current_frame) {
            if (1.0 <= current_frame) {
              current_frame = 1.0;
            }
          }
          else {
            current_frame = 0.0;
          }
        }
        if (-1 < temp_int3) {
          (**(code **)(*entity_data + 0x28))(entity_data);
          temp_stack_100 = 0;
          temp_stack_f8 = 0;
          temp_stack_d8 = 0;
          temp_stack_e8 = 0;
          temp_stack_f0 = 0;
          setup_animation_frame(&temp_stack_100, entity_data, 0);
          (**(code **)(*entity_data + 0x38))(entity_data);
          interpolate_animation_frame(&temp_stack_100, animation_data, temp_int2, temp_int3, current_frame);
          cleanup_animation_frame(&temp_stack_100);
        }
        release_animation_context(temp_array_138);
        if (temp_stack_120 != (longlong *)0x0) {
          (**(code **)(*temp_stack_120 + 0x38))();
        }
      }
      else {
        temp_stack_110 = 0;
        temp_stack_118 = animation_data;
        setup_external_animation(&temp_stack_118);
        temp_long1 = temp_stack_108 + 0xb0;
        frame_index = *(ushort *)(temp_stack_108 + 0xc0);
        current_frame = *(float *)(*(longlong *)(temp_stack_108 + 0xb8) + -4 + (ulonglong)frame_index * 4);
        target_frame = *(float *)((longlong)entity_data + 0x2dc);
        if (current_frame < *(float *)((longlong)entity_data + 0x2dc)) {
          *(float *)((longlong)entity_data + 0x2dc) = current_frame;
          frame_index = *(ushort *)(temp_stack_108 + 0xc0);
          target_frame = current_frame;
        }
        frame_count = (uint)frame_index;
        if (frame_index < 2) {
          temp_int3 = frame_count - 1;
          current_frame = 0.0;
          temp_int2 = temp_int3;
        }
        else {
          temp_int2 = frame_count - 1;
          if (0 < (int)(frame_count - 2)) {
            do {
              temp_int1 = temp_int2 + temp_int3 >> 1;
              if (*(float *)(*(longlong *)(temp_stack_108 + 0xb8) + (longlong)temp_int1 * 4) <= target_frame) {
                temp_int3 = temp_int1;
                temp_int1 = temp_int2;
              }
              temp_int2 = temp_int1;
            } while (temp_int3 < temp_int2 + -1);
          }
          current_frame = *(float *)(*(longlong *)(temp_stack_108 + 0xb8) + (longlong)temp_int3 * 4);
          current_frame = (target_frame - current_frame) /
                  (*(float *)(*(longlong *)(temp_stack_108 + 0xb8) + (longlong)temp_int2 * 4) - current_frame);
          if (0.0 <= current_frame) {
            if (1.0 <= current_frame) {
              current_frame = 1.0;
            }
          }
          else {
            current_frame = 0.0;
          }
        }
        if (-1 < temp_int3) {
          (**(code **)(*entity_data + 0x28))(entity_data);
          temp_stack_c8 = 0;
          temp_stack_c0 = 0;
          temp_stack_a0 = 0;
          temp_stack_b0 = 0;
          temp_stack_b8 = 0;
          setup_animation_frame(&temp_stack_c8, entity_data, 0);
          (**(code **)(*entity_data + 0x38))(entity_data);
          interpolate_animation_frame(&temp_stack_c8, temp_long1, temp_int2, temp_int3, current_frame);
          cleanup_animation_frame(&temp_stack_c8);
        }
        release_external_animation(&temp_stack_118);
      }
      *(int32_t *)(entity_data + 0x5b) = *(int32_t *)((longlong)entity_data + 0x2dc);
    }
    if ((*(byte *)((longlong)entity_data + 0xfd) & 0x20) != 0) break;
    entity_data = (longlong *)entity_data[0x36];
  }
  return;
}

// 函数: longlong * clone_entity(longlong *source_entity, longlong *target_entity)
// 功能: 克隆实体，创建实体的副本
longlong * clone_entity(longlong *source_entity, longlong *target_entity)

{
  byte *byte_ptr;
  int32_t temp_uint1;
  longlong temp_long1;
  int32_t temp_uint2;
  int32_t temp_uint3;
  int32_t temp_uint4;
  uint64_t temp_ullong1;
  uint64_t temp_ullong2;
  uint64_t temp_ullong3;
  uint64_t temp_ullong4;
  uint64_t temp_ullong5;
  longlong temp_long2;
  longlong temp_long3;
  longlong temp_long4;
  longlong temp_long5;
  longlong temp_long6;
  longlong temp_long7;
  longlong temp_long8;
  uint64_t temp_ullong6;
  longlong *cloned_entity;
  void *temp_ptr;
  longlong *temp_stackX_8;
  longlong *temp_stackX_10;
  int32_t temp_uint5;
  
  temp_stackX_10 = target_entity;
  temp_ullong6 = allocate_entity_memory(_DAT_180c8ed18, 0x300, 0x10, 9, 0, 0xfffffffffffffffe);
  cloned_entity = (longlong *)initialize_entity_data(temp_ullong6, 0, 0);
  *target_entity = (longlong)cloned_entity;
  if (cloned_entity != (longlong *)0x0) {
    (**(code **)(*cloned_entity + 0x28))(cloned_entity);
  }
  temp_uint5 = 1;
  *(byte *)(*target_entity + 0xfd) = *(byte *)(*target_entity + 0xfd) & 0xdf;
  temp_long2 = source_entity[0x18];
  temp_long1 = *target_entity;
  *(longlong *)(temp_long1 + 0xb8) = source_entity[0x17];
  *(longlong *)(temp_long1 + 0xc0) = temp_long2;
  *(byte *)(*target_entity + 0xfd) = *(byte *)(*target_entity + 0xfd) & 0xbf;
  temp_uint1 = *(int32_t *)((longlong)source_entity + 0xcc);
  temp_long2 = source_entity[0x1a];
  temp_uint2 = *(int32_t *)((longlong)source_entity + 0xd4);
  temp_long3 = source_entity[0x1b];
  temp_uint3 = *(int32_t *)((longlong)source_entity + 0xdc);
  temp_long4 = source_entity[0x1c];
  temp_uint4 = *(int32_t *)((longlong)source_entity + 0xe4);
  temp_long1 = *target_entity;
  *(int *)(temp_long1 + 200) = (int)source_entity[0x19];
  *(int32_t *)(temp_long1 + 0xcc) = temp_uint1;
  *(int *)(temp_long1 + 0xd0) = (int)temp_long2;
  *(int32_t *)(temp_long1 + 0xd4) = temp_uint2;
  *(int *)(temp_long1 + 0xd8) = (int)temp_long3;
  *(int32_t *)(temp_long1 + 0xdc) = temp_uint3;
  *(int *)(temp_long1 + 0xe0) = (int)temp_long4;
  *(int32_t *)(temp_long1 + 0xe4) = temp_uint4;
  if ((*(byte *)((longlong)source_entity + 0xfd) & 0x20) == 0) {
    update_entity_reference(*target_entity, source_entity + 0x36);
  }
  else {
    temp_long1 = *target_entity;
    temp_stackX_8 = source_entity;
    (**(code **)(*source_entity + 0x28))(source_entity);
    update_entity_reference(temp_long1, &temp_stackX_8);
    (**(code **)(*source_entity + 0x38))(source_entity);
  }
  *(longlong *)(*target_entity + 0xa8) = source_entity[0x15];
  byte_ptr = (byte *)(*target_entity + 0xfd);
  *byte_ptr = *byte_ptr ^ (*(byte *)(*target_entity + 0xfd) ^ *(byte *)((longlong)source_entity + 0xfd)) & 2;
  *(int *)(*target_entity + 0x100) = (int)source_entity[0x20];
  temp_long2 = source_entity[0x48];
  temp_long1 = *target_entity;
  *(longlong *)(temp_long1 + 0x238) = source_entity[0x47];
  *(longlong *)(temp_long1 + 0x240) = temp_long2;
  temp_long2 = source_entity[0x4a];
  temp_long1 = *target_entity;
  *(longlong *)(temp_long1 + 0x248) = source_entity[0x49];
  *(longlong *)(temp_long1 + 0x250) = temp_long2;
  temp_uint1 = *(int32_t *)((longlong)source_entity + 0x2ac);
  temp_long2 = source_entity[0x56];
  temp_uint2 = *(int32_t *)((longlong)source_entity + 0x2b4);
  temp_long1 = *target_entity;
  *(int *)(temp_long1 + 0x2a8) = (int)source_entity[0x55];
  *(int32_t *)(temp_long1 + 0x2ac) = temp_uint1;
  *(int *)(temp_long1 + 0x2b0) = (int)temp_long2;
  *(int32_t *)(temp_long1 + 0x2b4) = temp_uint2;
  temp_uint1 = *(int32_t *)((longlong)source_entity + 700);
  temp_long2 = source_entity[0x58];
  temp_uint2 = *(int32_t *)((longlong)source_entity + 0x2c4);
  temp_long1 = *target_entity;
  *(int *)(temp_long1 + 0x2b8) = (int)source_entity[0x57];
  *(int32_t *)(temp_long1 + 700) = temp_uint1;
  *(int *)(temp_long1 + 0x2c0) = (int)temp_long2;
  *(int32_t *)(temp_long1 + 0x2c4) = temp_uint2;
  *(int *)(*target_entity + 0x108) = (int)source_entity[0x21];
  if ((longlong *)(*target_entity + 0x218) != source_entity + 0x43) {
    copy_entity_data((longlong *)(*target_entity + 0x218), source_entity[0x43], source_entity[0x44]);
  }
  temp_ptr = &system_buffer_ptr;
  if ((void *)source_entity[3] != (void *)0x0) {
    temp_ptr = (void *)source_entity[3];
  }
  (**(code **)(*(longlong *)(*target_entity + 0x10) + 0x10))((longlong *)(*target_entity + 0x10), temp_ptr);
  *(int8_t *)(*target_entity + 0xf6) = *(int8_t *)((longlong)source_entity + 0xf6);
  temp_ullong6 = *(uint64_t *)((longlong)source_entity + 0x27c);
  temp_ullong1 = *(uint64_t *)((longlong)source_entity + 0x284);
  temp_ullong2 = *(uint64_t *)((longlong)source_entity + 0x28c);
  temp_ullong3 = *(uint64_t *)((longlong)source_entity + 0x294);
  temp_ullong4 = *(uint64_t *)((longlong)source_entity + 0x29c);
  temp_uint1 = *(int32_t *)((longlong)source_entity + 0x2a4);
  temp_long1 = *target_entity;
  *(uint64_t *)(temp_long1 + 0x274) = *(uint64_t *)((longlong)source_entity + 0x274);
  *(uint64_t *)(temp_long1 + 0x27c) = temp_ullong6;
  *(uint64_t *)(temp_long1 + 0x284) = temp_ullong1;
  *(uint64_t *)(temp_long1 + 0x28c) = temp_ullong2;
  *(uint64_t *)(temp_long1 + 0x294) = temp_ullong3;
  *(uint64_t *)(temp_long1 + 0x29c) = temp_ullong4;
  *(int32_t *)(temp_long1 + 0x2a4) = temp_uint1;
  *(int8_t *)(*target_entity + 0xff) = *(int8_t *)((longlong)source_entity + 0xff);
  *(int *)(*target_entity + 0x270) = (int)source_entity[0x4e];
  temp_long2 = source_entity[0x25];
  temp_long3 = source_entity[0x26];
  temp_long4 = source_entity[0x27];
  temp_long5 = source_entity[0x28];
  temp_long6 = source_entity[0x29];
  temp_long7 = source_entity[0x2a];
  temp_long8 = source_entity[0x2b];
  temp_long1 = *target_entity;
  *(longlong *)(temp_long1 + 0x120) = source_entity[0x24];
  *(longlong *)(temp_long1 + 0x128) = temp_long2;
  *(longlong *)(temp_long1 + 0x130) = temp_long3;
  *(longlong *)(temp_long1 + 0x138) = temp_long4;
  *(longlong *)(temp_long1 + 0x140) = temp_long5;
  *(longlong *)(temp_long1 + 0x148) = temp_long6;
  *(longlong *)(temp_long1 + 0x150) = temp_long7;
  *(longlong *)(temp_long1 + 0x158) = temp_long8;
  temp_long2 = source_entity[0x2d];
  temp_long3 = source_entity[0x2e];
  temp_long4 = source_entity[0x2f];
  temp_long5 = source_entity[0x30];
  temp_uint1 = *(int32_t *)((longlong)source_entity + 0x184);
  temp_long6 = source_entity[0x31];
  temp_uint2 = *(int32_t *)((longlong)source_entity + 0x18c);
  temp_long7 = source_entity[0x32];
  temp_uint3 = *(int32_t *)((longlong)source_entity + 0x194);
  temp_long8 = source_entity[0x33];
  temp_uint4 = *(int32_t *)((longlong)source_entity + 0x19c);
  temp_long1 = *target_entity;
  *(longlong *)(temp_long1 + 0x160) = source_entity[0x2c];
  *(longlong *)(temp_long1 + 0x168) = temp_long2;
  *(longlong *)(temp_long1 + 0x170) = temp_long3;
  *(longlong *)(temp_long1 + 0x178) = temp_long4;
  *(int *)(temp_long1 + 0x180) = (int)temp_long5;
  *(int32_t *)(temp_long1 + 0x184) = temp_uint1;
  *(int *)(temp_long1 + 0x188) = (int)temp_long6;
  *(int32_t *)(temp_long1 + 0x18c) = temp_uint2;
  *(int *)(temp_long1 + 400) = (int)temp_long7;
  *(int32_t *)(temp_long1 + 0x194) = temp_uint3;
  *(int *)(temp_long1 + 0x198) = (int)temp_long8;
  *(int32_t *)(temp_long1 + 0x19c) = temp_uint4;
  byte_ptr = (byte *)(*target_entity + 0xfd);
  *byte_ptr = *byte_ptr ^ (*(byte *)(*target_entity + 0xfd) ^ *(byte *)((longlong)source_entity + 0xfd)) & 1;
  *(int8_t *)(*target_entity + 0xf7) = *(int8_t *)((longlong)source_entity + 0xf7);
  *(int *)(*target_entity + 0x208) = (int)source_entity[0x41];
  *(int *)(*target_entity + 0x1f8) = (int)source_entity[0x3f];
  *(int32_t *)(*target_entity + 0x1fc) = *(int32_t *)((longlong)source_entity + 0x1fc);
  *(int *)(*target_entity + 0x200) = (int)source_entity[0x40];
  *(int32_t *)(*target_entity + 0x204) = *(int32_t *)((longlong)source_entity + 0x204);
  *(int *)(*target_entity + 0x2d8) = (int)source_entity[0x5b];
  temp_uint1 = *(int32_t *)((longlong)source_entity + 0x2dc);
  *(int32_t *)(*target_entity + 0x2dc) = temp_uint1;
  temp_long1 = *target_entity;
  cloned_entity = (longlong *)source_entity[0x4d];
  if (cloned_entity != (longlong *)0x0) {
    temp_stackX_8 = cloned_entity;
    (**(code **)(*cloned_entity + 0x28))(cloned_entity, temp_uint1, (int)temp_long5, (int)temp_long7, temp_uint5);
  }
  temp_stackX_8 = *(longlong **)(temp_long1 + 0x268);
  *(longlong **)(temp_long1 + 0x268) = cloned_entity;
  if (temp_stackX_8 != (longlong *)0x0) {
    (**(code **)(*temp_stackX_8 + 0x38))();
  }
  update_entity_flags(*target_entity, source_entity + 0x37);
  return target_entity;
}

// 函数: void initialize_entity_rendering(longlong *entity_data, uint64_t param2, uint64_t param3, uint64_t param4)
// 功能: 初始化实体渲染相关数据
void initialize_entity_rendering(longlong *entity_data, uint64_t param2, uint64_t param3, uint64_t param4)

{
  longlong *render_data;
  uint64_t temp_ullong1;
  longlong *temp_stack_40;
  longlong *temp_stack_38;
  int8_t temp_array_30 [8];
  uint64_t temp_stack_28;
  longlong *temp_stack_18;
  int16_t temp_ushort;
  char temp_char;
  
  temp_ullong1 = 0xfffffffffffffffe;
  if (entity_data[0x42] == 0) {
    entity_data[0x3f] = 0;
    entity_data[0x40] = 0;
    *(int32_t *)(entity_data + 0x41) = 0;
    initialize_render_system();
  }
  else {
    (**(code **)(*entity_data + 0x28))();
    temp_stack_40 = (longlong *)0x0;
    temp_stack_38 = (longlong *)0x0;
    temp_stack_18 = (longlong *)0x0;
    temp_stack_28 = 0;
    temp_array_30[0] = 0;
    setup_render_context(&temp_stack_40, entity_data, 0, param4, temp_ullong1);
    (**(code **)(*entity_data + 0x38))(entity_data);
    render_data = temp_stack_38;
    *(int32_t *)(temp_stack_38 + 2) = 0;
    *(int32_t *)(temp_stack_38 + 7) = 0;
    *(int32_t *)(temp_stack_38 + 0x11) = 0;
    *(int32_t *)(temp_stack_38 + 0xc) = 0;
    *(int16_t *)(temp_stack_38 + 0x18) = 0;
    if (temp_stack_38[0x17] != 0) {
                    // WARNING: Subroutine does not return
      handle_render_error();
    }
    temp_stack_38[0x17] = 0;
    release_render_resources(temp_stack_38[0x16]);
    render_data[0x16] = 0;
    *(int32_t *)(render_data + 0x19) = 0;
    temp_ushort = 0x101;
    if ((temp_stack_40 != (longlong *)0x0) && (temp_stack_38 != (longlong *)0x0)) {
      if (temp_char != '\0') {
        calculate_bounding_box();
      }
      release_render_context(temp_array_30);
      if ((char)temp_ushort != '\0') {
        cleanup_render_data(temp_stack_40);
      }
      if (temp_ushort._1_1_ != '\0') {
        cleanup_render_data(temp_stack_40);
      }
      render_data = temp_stack_38;
      temp_stack_38 = (longlong *)0x0;
      if (render_data != (longlong *)0x0) {
        (**(code **)(*render_data + 0x38))();
      }
    }
    release_render_context(temp_array_30);
    if (temp_stack_18 != (longlong *)0x0) {
      (**(code **)(*temp_stack_18 + 0x38))();
    }
    if (temp_stack_38 != (longlong *)0x0) {
      (**(code **)(*temp_stack_38 + 0x38))();
    }
    if (temp_stack_40 != (longlong *)0x0) {
      (**(code **)(*temp_stack_40 + 0x38))();
      return;
    }
  }
  return;
}

// 函数: void update_entity_flags(longlong entity_id, longlong *flag_data)
// 功能: 更新实体标志位
void update_entity_flags(longlong entity_id, longlong *flag_data)

{
  byte flag_byte;
  longlong temp_long1;
  int8_t temp_uchar1;
  byte flag_mask;
  uint flag_value;
  longlong temp_long2;
  longlong *flag_ref;
  
  if (*flag_data != *(longlong *)(entity_id + 0x1b8)) {
    if (*(char *)(entity_id + 0xb1) != '\0') {
                    // WARNING: Subroutine does not return
      handle_flag_error();
    }
    release_flag_reference(entity_id + 0x1b8);
    temp_long1 = *(longlong *)(entity_id + 0x1b8);
    if (temp_long1 != 0) {
      temp_long2 = 0;
      flag_byte = *(byte *)(entity_id + 0xfd);
      flag_mask = (byte)((uint)*(int32_t *)(*(longlong *)(temp_long1 + 0x1e0) + 0x1588) >> 0x1b) << 7;
      *(byte *)(entity_id + 0xfd) = flag_mask | flag_byte & 0x7f;
      flag_value = *(uint *)(temp_long1 + 0x138) & 0x3000;
      if (flag_value == 0x1000) {
        *(int8_t *)(entity_id + 0xf7) = 1;
      }
      else {
        temp_uchar1 = 0;
        if (flag_value == 0x2000) {
          temp_uchar1 = 2;
        }
        *(int8_t *)(entity_id + 0xf7) = temp_uchar1;
      }
      flag_mask = flag_mask | flag_byte & 0x77;
      *(byte *)(entity_id + 0xfd) = flag_mask;
      flag_ref = (longlong *)(temp_long1 + 0xb8);
      do {
        if (0xf < temp_long2) break;
        if ((*flag_ref != 0) && (*(int *)(*flag_ref + 0x36c) != 0)) {
          flag_mask = flag_mask | 8;
          *(byte *)(entity_id + 0xfd) = flag_mask;
        }
        temp_long2 = temp_long2 + 1;
        flag_ref = flag_ref + 1;
      } while ((flag_mask & 8) == 0);
      update_entity_state(entity_id);
    }
  }
  return;
}

// 函数: void increment_entity_reference_count(longlong entity_id)
// 功能: 增加实体引用计数
void increment_entity_reference_count(longlong entity_id)

{
  int mutex_result;
  
  mutex_result = _Mtx_lock(0x180c91910);
  if (mutex_result != 0) {
    __Throw_C_error_std__YAXH_Z(mutex_result);
  }
  *(char *)(entity_id + 0xfc) = *(char *)(entity_id + 0xfc) + '\x01';
  mutex_result = _Mtx_unlock(0x180c91910);
  if (mutex_result != 0) {
    __Throw_C_error_std__YAXH_Z(mutex_result);
  }
  return;
}