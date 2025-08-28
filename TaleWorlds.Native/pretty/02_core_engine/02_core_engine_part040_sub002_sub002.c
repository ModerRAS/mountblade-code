#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 02_core_engine_part040_sub002_sub002.c - 1 个函数

// 函数：处理骨骼动画系统的权重计算和顶点混合
// param_1: 骨骼动画系统上下文指针
void process_bone_animation_weights(int64_t animation_context)

{
  int *bone_count_ptr;
  uint *vertex_count_ptr;
  uint64_t *matrix_ptr;
  uint64_t *transform_ptr;
  float weight_value;
  uint64_t matrix_data;
  uint64_t transform_data;
  int8_t bone_id [16];
  bool has_influence;
  int *vertex_index_ptr;
  int vertex_index;
  int64_t bone_offset;
  int *influence_count_ptr;
  int *vertex_start_ptr;
  int *vertex_end_ptr;
  int *weight_start_ptr;
  int64_t transform_offset;
  float *weight_array;
  uint vertex_id;
  int *bone_mapping_ptr;
  int64_t base_address;
  int64_t bone_address;
  int64_t vertex_address;
  int64_t transform_address;
  int *influence_ptr;
  int *temp_ptr;
  int temp_index;
  uint64_t memory_size;
  int32_t *data_ptr;
  uint64_t alloc_size;
  int64_t buffer_address;
  uint *flag_ptr;
  uint flag_value;
  int *vertex_ptr;
  int8_t (*bone_array) [16];
  uint64_t array_size;
  int8_t (*temp_bone_array) [16];
  uint64_t temp_array_size;
  int64_t *offset_ptr;
  int64_t temp_offset;
  uint64_t total_size;
  int8_t (*final_bone_array) [16];
  int64_t loop_index;
  bool needs_normalization;
  float normal_x;
  float normal_y;
  float normal_z;
  float magnitude;
  float influence_x;
  float influence_y;
  float influence_z;
  float vertex_x;
  float vertex_y;
  float vertex_z;
  float blend_x;
  float blend_y;
  float blend_z;
  float cross_x;
  float cross_y;
  float cross_z;
  float normal_magnitude;
  float norm_x;
  float norm_y;
  float norm_z;
  float inv_magnitude;
  int stack_var_10;
  uint64_t stack_var_18;
  uint64_t stack_var_20;
  int *stack_ptr_218;
  int *stack_ptr_210;
  int *stack_ptr_208;
  int32_t stack_var_200;
  int *stack_ptr_1f8;
  int *stack_ptr_1f0;
  int stack_var_1e8;
  int8_t (*stack_bone_array) [16];
  uint64_t stack_var_1d8;
  int64_t stack_var_1d0;
  uint stack_var_1c8;
  uint stack_var_1c0;
  int32_t stack_var_1bc;
  uint64_t stack_var_1b8;
  int *stack_ptr_1b0;
  int32_t stack_var_1a8;
  uint64_t stack_var_1a0;
  uint64_t stack_var_198;
  int *stack_ptr_190;
  int32_t stack_var_188;
  uint64_t stack_var_180;
  float stack_var_178;
  float stack_var_174;
  int64_t stack_var_170;
  int64_t *stack_ptr_168;
  int64_t *stack_ptr_160;
  int32_t stack_var_158;
  int8_t stack_bone_buffer [16];
  uint64_t stack_var_140;
  int32_t stack_var_138;
  int32_t *stack_ptr_130;
  uint64_t stack_var_128;
  uint64_t stack_var_120;
  int32_t stack_var_118;
  uint64_t stack_var_110;
  uint64_t stack_var_108;
  uint64_t stack_var_100;
  uint64_t stack_var_f8;
  uint64_t stack_var_f0;
  uint64_t stack_var_e8;
  uint64_t stack_var_e0;
  uint64_t stack_var_d8;
  uint64_t stack_var_d0;
  uint64_t stack_var_c8;
  uint64_t stack_var_c0;
  uint64_t stack_var_b8;
  int32_t stack_var_b0;
  
  // 初始化栈变量
  stack_var_110 = 0xfffffffffffffffe;
  bone_count_ptr = (int *)(animation_context + 0x60);
  temp_index = *bone_count_ptr;
  vertex_index = *(int *)(animation_context + 0x88);
  memory_size = (uint64_t)vertex_index;
  stack_var_1e8 = *(int *)(animation_context + 0x10);
  stack_ptr_130 = (int32_t *)0x0;
  stack_var_128 = 0;
  stack_var_120 = 0;
  stack_var_118 = 3;
  
  // 分配顶点影响标志数组
  allocate_influence_flags(&stack_ptr_130, memory_size);
  total_size = memory_size;
  data_ptr = stack_ptr_130;
  
  // 初始化影响标志
  if (0 < vertex_index) {
    for (; total_size != 0; total_size = total_size - 1) {
      *data_ptr = 1;
      data_ptr = data_ptr + 1;
    }
  }
  
  // 初始化骨骼ID数组
  stack_bone_buffer = ZEXT816(0);
  stack_var_140 = 0;
  stack_var_138 = 3;
  transform_offset = (uint64_t)*(ushort *)(animation_context + 0xc0) + 1;
  if (transform_offset == 0) {
    transform_offset = 0;
    stack_bone_buffer = ZEXT816(0) << 0x40;
  }
  else {
    initialize_bone_id_array(stack_bone_buffer, transform_offset);
    transform_offset = stack_bone_buffer._0_8_;
  }
  
  // 处理每个骨骼的变换
  stack_bone_array = (int8_t (*) [16])(uint64_t)*(ushort *)(animation_context + 0xc0);
  loop_index = -1;
  do {
    int64_t current_bone = loop_index + 1;
    int64_t bone_matrix_offset = current_bone * 0x20;
    int64_t transform_start = *(int64_t *)(transform_offset + bone_matrix_offset);
    int64_t transform_end = *(int64_t *)(transform_offset + 8 + bone_matrix_offset);
    total_size = transform_end - transform_start >> 4;
    
    // 检查是否需要重新分配变换矩阵内存
    if (total_size < memory_size) {
      alloc_size = memory_size - total_size;
      if ((uint64_t)(*(int64_t *)(transform_offset + 0x10 + bone_matrix_offset) - transform_end >> 4) < alloc_size) {
        if (total_size == 0) {
          total_size = 1;
        }
        else {
          total_size = total_size * 2;
        }
        if (total_size < memory_size) {
          total_size = memory_size;
        }
        if (total_size == 0) {
          bone_offset = 0;
        }
        else {
          bone_offset = allocate_transform_matrix(MATRIX_ALLOCATOR, total_size << 4, *(int8_t *)(transform_offset + 0x18 + bone_matrix_offset));
          transform_start = *(int64_t *)(transform_offset + 8 + bone_matrix_offset);
          transform_end = *(int64_t *)(transform_offset + bone_matrix_offset);
        }
        
        // 复制现有变换数据
        if (transform_end != transform_start) {
          memmove(bone_offset, transform_end, transform_start - transform_end);
        }
        
        // 清零新增部分
        if (alloc_size != 0) {
          memset(bone_offset, 0, alloc_size * 0x10);
        }
        
        // 释放旧内存并更新指针
        if (*(int64_t *)(transform_offset + bone_matrix_offset) != 0) {
          free_transform_matrix();
        }
        *(int64_t *)(transform_offset + bone_matrix_offset) = bone_offset;
        *(int64_t *)(transform_offset + 8 + bone_matrix_offset) = bone_offset;
        *(uint64_t *)(transform_offset + 0x10 + bone_matrix_offset) = total_size * 0x10 + bone_offset;
      }
      else {
        // 直接扩展现有内存
        if (alloc_size != 0) {
          memset(transform_start, 0, alloc_size * 0x10);
        }
        *(int64_t *)(transform_offset + 8 + bone_matrix_offset) = transform_start;
      }
    }
    else {
      // 设置新的变换矩阵结束位置
      *(uint64_t *)(transform_offset + 8 + bone_matrix_offset) = memory_size * 0x10 + transform_end;
    }
    
    // 计算法向量用于权重混合
    array_size = 0;
    total_size = array_size;
    alloc_size = array_size;
    temp_array_size = memory_size;
    if (0 < (int64_t)memory_size) {
      do {
        int64_t vertex_array = *(int64_t *)(animation_context + 0x90);
        int64_t vertex_data = (int64_t)*(int *)(vertex_array + 8 + total_size);
        int64_t normal_data = (int64_t)*(int *)(vertex_array + 4 + total_size) * 0x5c;
        
        if (loop_index == -1) {
          // 使用全局变换矩阵
          bone_offset = *(int64_t *)(animation_context + 0x68);
          temp_offset = *(int64_t *)(animation_context + 0x18);
          normal_data = (int64_t)*(int *)(normal_data + bone_offset);
          vertex_array = (int64_t)*(int *)((int64_t)*(int *)(vertex_array + total_size) * 0x5c + bone_offset);
          
          // 读取法向量
          blend_x = *(float *)(temp_offset + 8 + vertex_array * 0x10);
          blend_y = *(float *)(temp_offset + 8 + normal_data * 0x10) - blend_x;
          weight_value = *(float *)(temp_offset + 4 + vertex_array * 0x10);
          cross_z = *(float *)(temp_offset + 4 + normal_data * 0x10);
          cross_x = *(float *)(temp_offset + vertex_array * 0x10);
          vertex_array = (int64_t)*(int *)(vertex_data * 0x5c + bone_offset);
          blend_x = *(float *)(temp_offset + 8 + vertex_array * 0x10) - blend_x;
          influence_y = *(float *)(temp_offset + 4 + vertex_array * 0x10);
          influence_z = *(float *)(temp_offset + normal_data * 0x10);
          cross_y = *(float *)(temp_offset + vertex_array * 0x10);
        }
        else {
          // 使用骨骼特定的变换矩阵
          bone_offset = *(int64_t *)(animation_context + 0x68);
          temp_offset = *(int64_t *)(loop_index * 0x50 + *(int64_t *)(animation_context + 0xb0) + 8);
          normal_data = (int64_t)*(int *)(normal_data + bone_offset);
          vertex_array = (int64_t)*(int *)((int64_t)*(int *)(vertex_array + total_size) * 0x5c + bone_offset);
          
          // 读取法向量
          blend_x = *(float *)(temp_offset + 8 + vertex_array * 0x10);
          blend_y = *(float *)(temp_offset + 8 + normal_data * 0x10) - blend_x;
          weight_value = *(float *)(temp_offset + 4 + vertex_array * 0x10);
          cross_z = *(float *)(temp_offset + 4 + normal_data * 0x10);
          cross_x = *(float *)(temp_offset + vertex_array * 0x10);
          vertex_array = (int64_t)*(int *)(vertex_data * 0x5c + bone_offset);
          blend_x = *(float *)(temp_offset + 8 + vertex_array * 0x10) - blend_x;
          influence_y = *(float *)(temp_offset + 4 + vertex_array * 0x10);
          influence_z = *(float *)(temp_offset + normal_data * 0x10);
          cross_y = *(float *)(temp_offset + vertex_array * 0x10);
        }
        
        // 计算叉积
        cross_z = (influence_z - cross_x) * (influence_y - weight_value) - (cross_z - weight_value) * (cross_y - cross_x);
        cross_x = blend_y * (cross_y - cross_x) - blend_x * (influence_z - cross_x);
        blend_x = blend_x * (cross_z - weight_value) - blend_y * (influence_y - weight_value);
        
        // 计算向量的模长
        stack_var_174 = SQRT(cross_x * cross_x + blend_x * blend_x + cross_z * cross_z);
        if (stack_var_174 <= 0.0) {
          blend_x = 0.0;
          cross_x = 0.0;
          stack_var_178 = 1.0;
          stack_var_174 = 1.0;
        }
        else {
          stack_var_178 = 1.0 / stack_var_174;
          blend_x = blend_x * stack_var_178;
          cross_x = stack_var_178 * cross_x;
          stack_var_178 = stack_var_178 * cross_z;
        }
        
        // 保存标准化后的法向量
        stack_var_180 = CONCAT44(cross_x, blend_x);
        weight_array = (float *)(*(int64_t *)(stack_bone_buffer._0_8_ + bone_matrix_offset) + alloc_size);
        *weight_array = blend_x;
        weight_array[1] = cross_x;
        weight_array[2] = stack_var_178;
        weight_array[3] = stack_var_174;
        
        temp_array_size = temp_array_size - 1;
        total_size = total_size + 0xc;
        alloc_size = alloc_size + 0x10;
      } while (temp_array_size != 0);
    }
    
    transform_offset = stack_bone_buffer._0_8_;
    loop_index = current_bone;
  } while (current_bone < (int64_t)stack_bone_array);
  
  // 初始化顶点索引数组
  stack_var_170 = 0;
  stack_ptr_168 = (int64_t *)0x0;
  stack_ptr_160 = (int64_t *)0x0;
  stack_var_158 = 3;
  initialize_vertex_index_array(&stack_var_170, (int64_t)temp_index);
  
  total_size = array_size;
  stack_var_20 = memory_size;
  if (0 < (int64_t)memory_size) {
    do {
      loop_index = stack_var_170;
      influence_count_ptr = (int *)0x0;
      transform_offset = *(int64_t *)(animation_context + 0x90);
      bone_address = (uint64_t)*(uint *)(transform_offset + total_size) * 0x20;
      vertex_ptr = *(int **)(bone_address + 8 + stack_var_170);
      temp_index = (int)total_size;
      
      // 添加顶点索引到第一个映射
      if (vertex_ptr < *(int **)(bone_address + 0x10 + stack_var_170)) {
        *(int **)(bone_address + 8 + stack_var_170) = vertex_ptr + 1;
        *vertex_ptr = temp_index;
      }
      else {
        // 重新分配更大的数组
        int *old_start = *(int **)(bone_address + stack_var_170);
        bone_address = (int64_t)vertex_ptr - (int64_t)old_start >> 2;
        if (bone_address == 0) {
          bone_address = 1;
LAB_REALLOC_FIRST_ARRAY:
          influence_count_ptr = (int *)allocate_vertex_index(VERTEX_INDEX_ALLOCATOR, bone_address * 4, *(int8_t *)(bone_address + 0x18 + stack_var_170));
          vertex_ptr = *(int **)(bone_address + 8 + loop_index);
          old_start = *(int **)(bone_address + loop_index);
        }
        else {
          bone_address = bone_address * 2;
          if (bone_address != 0) goto LAB_REALLOC_FIRST_ARRAY;
        }
        
        // 复制旧数据
        if (old_start != vertex_ptr) {
          memmove(influence_count_ptr, old_start, (int64_t)vertex_ptr - (int64_t)old_start);
        }
        *influence_count_ptr = temp_index;
        
        // 释放旧内存
        if (*(int64_t *)(bone_address + loop_index) != 0) {
          free_vertex_index();
        }
        *(int **)(bone_address + loop_index) = influence_count_ptr;
        *(int **)(bone_address + 8 + loop_index) = influence_count_ptr + 1;
        *(int **)(bone_address + 0x10 + loop_index) = influence_count_ptr + bone_address;
      }
      
      // 添加顶点索引到第二个映射（重复上述逻辑）
      loop_index = stack_var_170;
      influence_count_ptr = (int *)0x0;
      bone_address = (uint64_t)*(uint *)(transform_offset + 4 + total_size) * 0x20;
      vertex_ptr = *(int **)(bone_address + 8 + stack_var_170);
      if (vertex_ptr < *(int **)(bone_address + 0x10 + stack_var_170)) {
        *(int **)(bone_address + 8 + stack_var_170) = vertex_ptr + 1;
        *vertex_ptr = temp_index;
      }
      else {
        int *old_start = *(int **)(bone_address + stack_var_170);
        bone_address = (int64_t)vertex_ptr - (int64_t)old_start >> 2;
        if (bone_address == 0) {
          bone_address = 1;
LAB_REALLOC_SECOND_ARRAY:
          influence_count_ptr = (int *)allocate_vertex_index(VERTEX_INDEX_ALLOCATOR, bone_address * 4, *(int8_t *)(bone_address + 0x18 + stack_var_170));
          vertex_ptr = *(int **)(bone_address + 8 + loop_index);
          old_start = *(int **)(bone_address + loop_index);
        }
        else {
          bone_address = bone_address * 2;
          if (bone_address != 0) goto LAB_REALLOC_SECOND_ARRAY;
        }
        if (old_start != vertex_ptr) {
          memmove(influence_count_ptr, old_start, (int64_t)vertex_ptr - (int64_t)old_start);
        }
        *influence_count_ptr = temp_index;
        if (*(int64_t *)(bone_address + loop_index) != 0) {
          free_vertex_index();
        }
        *(int **)(bone_address + loop_index) = influence_count_ptr;
        *(int **)(bone_address + 8 + loop_index) = influence_count_ptr + 1;
        *(int **)(bone_address + 0x10 + loop_index) = influence_count_ptr + bone_address;
      }
      
      // 添加顶点索引到第三个映射（重复上述逻辑）
      loop_index = stack_var_170;
      transform_offset = (uint64_t)*(uint *)(transform_offset + 8 + total_size) * 0x20;
      vertex_ptr = *(int **)(transform_offset + 8 + stack_var_170);
      if (vertex_ptr < *(int **)(transform_offset + 0x10 + stack_var_170)) {
        *(int **)(transform_offset + 8 + stack_var_170) = vertex_ptr + 1;
        *vertex_ptr = temp_index;
      }
      else {
        influence_count_ptr = *(int **)(transform_offset + stack_var_170);
        bone_address = (int64_t)vertex_ptr - (int64_t)influence_count_ptr >> 2;
        if (bone_address == 0) {
          bone_address = 1;
LAB_REALLOC_THIRD_ARRAY:
          vertex_start_ptr = (int *)allocate_vertex_index(VERTEX_INDEX_ALLOCATOR, bone_address * 4, *(int8_t *)(transform_offset + 0x18 + stack_var_170));
          vertex_ptr = *(int **)(transform_offset + 8 + loop_index);
          influence_count_ptr = *(int **)(transform_offset + loop_index);
        }
        else {
          bone_address = bone_address * 2;
          if (bone_address != 0) goto LAB_REALLOC_THIRD_ARRAY;
          vertex_start_ptr = (int *)0x0;
        }
        if (influence_count_ptr != vertex_ptr) {
          memmove(vertex_start_ptr, influence_count_ptr, (int64_t)vertex_ptr - (int64_t)influence_count_ptr);
        }
        *vertex_start_ptr = temp_index;
        if (*(int64_t *)(transform_offset + loop_index) != 0) {
          free_vertex_index();
        }
        *(int **)(transform_offset + loop_index) = vertex_start_ptr;
        *(int **)(transform_offset + 8 + loop_index) = vertex_start_ptr + 1;
        *(int **)(transform_offset + 0x10 + loop_index) = vertex_start_ptr + bone_address;
      }
      
      array_size = array_size + 0xc;
      stack_var_20 = stack_var_20 - 1;
      total_size = (uint64_t)(temp_index + 1);
    } while (stack_var_20 != 0);
  }
  
  // 处理顶点混合权重
  flag_value = 0;
  stack_var_18 = 0;
  if (*bone_count_ptr < 1) {
LAB_CLEANUP_AND_RETURN:
    cleanup_vertex_index_array(&stack_var_170);
    transform_offset = (int64_t)stack_var_1e8;
    stack_var_1d8 = (uint64_t)*(ushort *)(animation_context + 0xc0);
    stack_var_18 = -1;
    do {
      stack_ptr_218 = (int *)0x0;
      stack_ptr_210 = (int *)0x0;
      stack_ptr_208 = (int *)0x0;
      stack_var_200 = 3;
      if (transform_offset == 0) {
        initialize_empty_influence_array(0);
        stack_ptr_210 = stack_ptr_218;
      }
      else {
        initialize_influence_array(&stack_ptr_218, transform_offset);
      }
      
      // 处理每个骨骼的影响
      offset_ptr = (int64_t *)((stack_var_18 + 1) * 0x20 + stack_bone_buffer._0_8_);
      loop_index = 0;
      stack_ptr_1f0 = (int *)0x0;
      if (0 < (int64_t)memory_size) {
        stack_ptr_1f8 = (int *)0x0;
        do {
          bone_address = 0;
          stack_var_180 = *(int64_t *)(animation_context + 0x90) + (int64_t)stack_ptr_1f8;
          flag_value = stack_ptr_130[(int64_t)stack_ptr_1f0];
          if (flag_value == 0) {
            // 处理无影响的顶点
            do {
              if (stack_var_18 == -1) {
                // 使用全局变换矩阵
                bone_address = (int64_t)*(int *)(stack_var_180 + bone_address * 4) * 0x5c + *(int64_t *)(animation_context + 0x68);
                matrix_data = ((uint64_t *)(loop_index + *offset_ptr))[1];
                *(uint64_t *)(bone_address + 4) = *(uint64_t *)(loop_index + *offset_ptr);
                *(uint64_t *)(bone_address + 0xc) = matrix_data;
                matrix_data = ((uint64_t *)(loop_index + *offset_ptr))[1];
                *(uint64_t *)(bone_address + 0x34) = *(uint64_t *)(loop_index + *offset_ptr);
                *(uint64_t *)(bone_address + 0x3c) = matrix_data;
                
                // 标准化法向量
                blend_x = *(float *)(bone_address + 8);
                cross_z = *(float *)(bone_address + 4);
                cross_x = *(float *)(bone_address + 0xc);
                magnitude = cross_x * cross_x + cross_z * cross_z + blend_x * blend_x;
                bone_id = rsqrtss(ZEXT416((uint)magnitude), ZEXT416((uint)magnitude));
                influence_y = bone_id._0_4_;
                magnitude = influence_y * 0.5 * (3.0 - magnitude * influence_y * influence_y);
                *(float *)(bone_address + 4) = magnitude * cross_z;
                *(float *)(bone_address + 8) = magnitude * blend_x;
                *(float *)(bone_address + 0xc) = magnitude * cross_x;
                
                blend_x = *(float *)(bone_address + 0x38);
                cross_z = *(float *)(bone_address + 0x34);
                cross_x = *(float *)(bone_address + 0x3c);
                magnitude = cross_x * cross_x + cross_z * cross_z + blend_x * blend_x;
                bone_id = rsqrtss(ZEXT416((uint)magnitude), ZEXT416((uint)magnitude));
                influence_y = bone_id._0_4_;
                magnitude = influence_y * 0.5 * (3.0 - magnitude * influence_y * influence_y);
                *(float *)(bone_address + 0x34) = cross_z * magnitude;
                *(float *)(bone_address + 0x38) = blend_x * magnitude;
                *(float *)(bone_address + 0x3c) = cross_x * magnitude;
              }
              else {
                // 使用骨骼特定的变换矩阵
                matrix_data = ((uint64_t *)(loop_index + *offset_ptr))[1];
                matrix_ptr = (uint64_t *)
                            (*(int64_t *)(*(int64_t *)(animation_context + 0xb0) + 0x30 + stack_var_18 * 0x50) +
                            (int64_t)*(int *)(stack_var_180 + bone_address * 4) * 0x10);
                *matrix_ptr = *(uint64_t *)(loop_index + *offset_ptr);
                matrix_ptr[1] = matrix_data;
                weight_array = (float *)((int64_t)*(int *)(stack_var_180 + bone_address * 4) * 0x10 +
                                       *(int64_t *)
                                        (*(int64_t *)(animation_context + 0xb0) + 0x30 + stack_var_18 * 0x50));
                blend_x = weight_array[1];
                cross_z = *weight_array;
                cross_x = weight_array[2];
                magnitude = cross_x * cross_x + cross_z * cross_z + blend_x * blend_x;
                bone_id = rsqrtss(ZEXT416((uint)magnitude), ZEXT416((uint)magnitude));
                influence_y = bone_id._0_4_;
                magnitude = influence_y * 0.5 * (3.0 - magnitude * influence_y * influence_y);
                *weight_array = cross_z * magnitude;
                weight_array[1] = blend_x * magnitude;
                weight_array[2] = cross_x * magnitude;
              }
              bone_address = bone_address + 1;
            } while (bone_address < 3);
          }
          else {
            // 处理有影响的顶点
            stack_var_1d0 = 0;
            do {
              bone_count_ptr = stack_ptr_218;
              bone_address = 0;
              flag_ptr = (uint *)((int64_t)*(int *)(stack_var_180 + stack_var_1d0 * 4) * 0x5c + *(int64_t *)(animation_context + 0x68));
              needs_normalization = false;
              transform_offset = (int64_t)
                                 (int)((*(int64_t *)((int64_t)(stack_ptr_218 + (uint64_t)*flag_ptr * 8) + 8) -
                                       *(int64_t *)(stack_ptr_218 + (uint64_t)*flag_ptr * 8)) / 0x14);
              bone_address = bone_address;
              if (3 < transform_offset) {
                int64_t remaining = (transform_offset - 4U >> 2) + 1;
                bone_address = remaining * 4;
                do {
                  vertex_id = *flag_ptr;
                  if ((*(uint *)(*(int64_t *)(stack_ptr_218 + (uint64_t)vertex_id * 8) + bone_address) & flag_value) != 0) {
                    flag_ptr = (uint *)(bone_address + *(int64_t *)(stack_ptr_218 + (uint64_t)vertex_id * 8));
                    *flag_ptr = *flag_ptr | flag_value;
                    transform_offset = *offset_ptr;
                    blend_x = *(float *)(loop_index + 8 + transform_offset);
                    cross_z = *(float *)(loop_index + 4 + transform_offset);
                    bone_offset = *(int64_t *)(stack_ptr_218 + (uint64_t)vertex_id * 8);
                    *(float *)(bone_offset + 4 + bone_address) = *(float *)(bone_offset + 4 + bone_address) + *(float *)(loop_index + transform_offset);
                    *(float *)(bone_offset + 8 + bone_address) = cross_z + *(float *)(bone_offset + 8 + bone_address);
                    *(float *)(bone_offset + 0xc + bone_address) = blend_x + *(float *)(bone_offset + 0xc + bone_address);
                    needs_normalization = true;
                    vertex_id = *flag_ptr;
                  }
                  if ((*(uint *)(*(int64_t *)(stack_ptr_218 + (uint64_t)vertex_id * 8) + 0x14 + bone_address) & flag_value) != 0) {
                    flag_ptr = (uint *)(*(int64_t *)(stack_ptr_218 + (uint64_t)vertex_id * 8) + 0x14 + bone_address);
                    *flag_ptr = *flag_ptr | flag_value;
                    transform_offset = *offset_ptr;
                    blend_x = *(float *)(loop_index + 8 + transform_offset);
                    cross_z = *(float *)(loop_index + 4 + transform_offset);
                    bone_offset = *(int64_t *)(stack_ptr_218 + (uint64_t)vertex_id * 8);
                    *(float *)(bone_offset + 0x18 + bone_address) = *(float *)(bone_offset + 0x18 + bone_address) + *(float *)(loop_index + transform_offset);
                    *(float *)(bone_offset + 0x1c + bone_address) = cross_z + *(float *)(bone_offset + 0x1c + bone_address);
                    *(float *)(bone_offset + 0x20 + bone_address) = blend_x + *(float *)(bone_offset + 0x20 + bone_address);
                    needs_normalization = true;
                    vertex_id = *flag_ptr;
                  }
                  if ((*(uint *)(*(int64_t *)(stack_ptr_218 + (uint64_t)vertex_id * 8) + 0x28 + bone_address) & flag_value) != 0) {
                    flag_ptr = (uint *)(*(int64_t *)(stack_ptr_218 + (uint64_t)vertex_id * 8) + 0x28 + bone_address);
                    *flag_ptr = *flag_ptr | flag_value;
                    transform_offset = *offset_ptr;
                    blend_x = *(float *)(loop_index + 8 + transform_offset);
                    cross_z = *(float *)(loop_index + 4 + transform_offset);
                    bone_offset = *(int64_t *)(stack_ptr_218 + (uint64_t)vertex_id * 8);
                    *(float *)(bone_offset + 0x2c + bone_address) = *(float *)(bone_offset + 0x2c + bone_address) + *(float *)(loop_index + transform_offset);
                    *(float *)(bone_offset + 0x30 + bone_address) = cross_z + *(float *)(bone_offset + 0x30 + bone_address);
                    *(float *)(bone_offset + 0x34 + bone_address) = blend_x + *(float *)(bone_offset + 0x34 + bone_address);
                    needs_normalization = true;
                  }
                  vertex_id = *(uint *)(bone_address + 0x3c + *(int64_t *)(stack_ptr_218 + (uint64_t)*flag_ptr * 8));
                  if ((flag_value & vertex_id) != 0) {
                    *(uint *)(*(int64_t *)(stack_ptr_218 + (uint64_t)*flag_ptr * 8) + 0x3c + bone_address) = vertex_id | flag_value;
                    transform_offset = *offset_ptr;
                    blend_x = *(float *)(loop_index + 8 + transform_offset);
                    cross_z = *(float *)(loop_index + 4 + transform_offset);
                    bone_offset = *(int64_t *)(stack_ptr_218 + (uint64_t)*flag_ptr * 8);
                    *(float *)(bone_offset + 0x40 + bone_address) = *(float *)(bone_offset + 0x40 + bone_address) + *(float *)(loop_index + transform_offset);
                    *(float *)(bone_offset + 0x44 + bone_address) = cross_z + *(float *)(bone_offset + 0x44 + bone_address);
                    *(float *)(bone_offset + 0x48 + bone_address) = blend_x + *(float *)(bone_offset + 0x48 + bone_address);
                    needs_normalization = true;
                  }
                  bone_address = bone_address + 0x50;
                  remaining = remaining + -1;
                } while (remaining != 0);
              }
              
              // 处理剩余的影响
              temp_bone_array = (int8_t (*) [16])0x0;
              if (bone_address < transform_offset) {
                bone_address = bone_address * 0x14;
                transform_offset = transform_offset - bone_address;
                do {
                  vertex_id = *(uint *)(bone_address + *(int64_t *)(stack_ptr_218 + (uint64_t)*flag_ptr * 8));
                  if ((flag_value & vertex_id) != 0) {
                    *(uint *)(bone_address + *(int64_t *)(stack_ptr_218 + (uint64_t)*flag_ptr * 8)) = vertex_id | flag_value;
                    transform_offset = *offset_ptr;
                    blend_x = *(float *)(loop_index + 8 + transform_offset);
                    cross_z = *(float *)(loop_index + 4 + transform_offset);
                    remaining = *(int64_t *)(stack_ptr_218 + (uint64_t)*flag_ptr * 8);
                    *(float *)(bone_address + 4 + remaining) = *(float *)(bone_address + 4 + remaining) + *(float *)(loop_index + transform_offset);
                    *(float *)(bone_address + 8 + remaining) = cross_z + *(float *)(bone_address + 8 + remaining);
                    *(float *)(bone_address + 0xc + remaining) = blend_x + *(float *)(bone_address + 0xc + remaining);
                    needs_normalization = true;
                  }
                  bone_address = bone_address + 0x14;
                  transform_offset = transform_offset + -1;
                } while (transform_offset != 0);
              }
              
              // 如果没有找到匹配的影响，添加新的影响记录
              if (!needs_normalization) {
                transform_offset = *offset_ptr;
                stack_var_1b8._4_4_ = *(int32_t *)(loop_index + 8 + transform_offset);
                stack_var_1b8._0_4_ = *(int32_t *)(loop_index + 4 + transform_offset);
                stack_var_1bc = *(int32_t *)(loop_index + transform_offset);
                stack_var_1a0 = (int *)CONCAT44((int32_t)stack_var_1b8, stack_var_1bc);
                stack_var_198 = (int *)CONCAT44(0x7f7fffff, stack_var_1b8._4_4_);
                stack_ptr_1b0 = (int *)CONCAT44(stack_ptr_1b0._4_4_, 0x7f7fffff);
                total_size = (uint64_t)*flag_ptr;
                temp_bone_array = *(int8_t (**) [16])(stack_ptr_218 + total_size * 8 + 2);
                stack_var_1c0 = flag_value;
                if (temp_bone_array < *(int8_t (**) [16])(stack_ptr_218 + total_size * 8 + 4)) {
                  *(int8_t **)(stack_ptr_218 + total_size * 8 + 2) = temp_bone_array[1] + 4;
                  bone_id._4_4_ = stack_var_1bc;
                  bone_id._0_4_ = flag_value;
                  bone_id._8_4_ = (int32_t)stack_var_1b8;
                  bone_id._12_4_ = stack_var_1b8._4_4_;
                  *temp_bone_array = bone_id;
                  *(int32_t *)temp_bone_array[1] = 0x7f7fffff;
                }
                else {
                  // 重新分配更大的数组
                  temp_bone_array = *(int8_t (**) [16])(stack_ptr_218 + total_size * 8);
                  transform_offset = ((int64_t)temp_bone_array - (int64_t)temp_bone_array) / 0x14;
                  if (transform_offset == 0) {
                    stack_var_20 = 1;
LAB_REALLOC_INFLUENCE_ARRAY:
                    temp_bone_array = (int8_t (*) [16])
                                    allocate_vertex_index(VERTEX_INDEX_ALLOCATOR, stack_var_20 * 0x14, (char)stack_ptr_218[total_size * 8 + 6]);
                    temp_bone_array = *(int8_t (**) [16])(bone_count_ptr + total_size * 8 + 2);
                    temp_bone_array = *(int8_t (**) [16])(bone_count_ptr + total_size * 8);
                  }
                  else {
                    stack_var_20 = transform_offset * 2;
                    if (stack_var_20 != 0) goto LAB_REALLOC_INFLUENCE_ARRAY;
                  }
                  stack_bone_array = temp_bone_array;
                  if (temp_bone_array != temp_bone_array) {
                    memmove(temp_bone_array, temp_bone_array, (int64_t)temp_bone_array - (int64_t)temp_bone_array);
                  }
                  bone_id._4_4_ = stack_var_1bc;
                  bone_id._0_4_ = stack_var_1c0;
                  bone_id._8_4_ = (int32_t)stack_var_1b8;
                  bone_id._12_4_ = stack_var_1b8._4_4_;
                  *temp_bone_array = bone_id;
                  *(int32_t *)temp_bone_array[1] = stack_ptr_1b0._0_4_;
                  if (*(int64_t *)(bone_count_ptr + total_size * 8) != 0) {
                    free_vertex_index();
                  }
                  *(int8_t (**) [16])(bone_count_ptr + total_size * 8) = temp_bone_array;
                  *(int8_t **)(bone_count_ptr + total_size * 8 + 2) = temp_bone_array[1] + 4;
                  *(uint64_t *)(bone_count_ptr + total_size * 8 + 4) = (int64_t)temp_bone_array + stack_var_20 * 0x14;
                }
              }
              stack_var_1d0 = stack_var_1d0 + 1;
            } while (stack_var_1d0 < 3);
          }
          stack_ptr_1f0 = (int *)((int64_t)stack_ptr_1f0 + 1);
          stack_ptr_1f8 = stack_ptr_1f8 + 3;
          loop_index = loop_index + 0x10;
        } while ((int64_t)stack_ptr_1f0 < (int64_t)memory_size);
        transform_offset = (int64_t)stack_var_1e8;
      }
      
      // 标准化所有法向量
      bone_address = 0;
      loop_index = bone_address;
      bone_offset = transform_offset;
      if (0 < transform_offset) {
        do {
          temp_index = (int)((*(int64_t *)(loop_index + 8 + (int64_t)stack_ptr_218) - *(int64_t *)(loop_index + (int64_t)stack_ptr_218)) / 0x14);
          transform_offset = (int64_t)temp_index;
          bone_address = bone_address;
          if (0 < temp_index) {
            do {
              bone_offset = *(int64_t *)(loop_index + (int64_t)stack_ptr_218);
              blend_x = *(float *)(bone_offset + 8 + bone_address);
              cross_z = *(float *)(bone_offset + 4 + bone_address);
              cross_x = *(float *)(bone_offset + 0xc + bone_address);
              magnitude = cross_z * cross_z + blend_x * blend_x + cross_x * cross_x;
              if (SQRT(magnitude) == 0.0) {
                *(int8_t (*) [16])(bone_offset + 4 + bone_address) = ZERO_VECTOR;
              }
              else {
                bone_id = rsqrtss(ZEXT416((uint)magnitude), ZEXT416((uint)magnitude));
                influence_y = bone_id._0_4_;
                magnitude = influence_y * 0.5 * (3.0 - magnitude * influence_y * influence_y);
                *(float *)(bone_offset + 4 + bone_address) = cross_z * magnitude;
                *(float *)(bone_offset + 8 + bone_address) = magnitude * blend_x;
                *(float *)(bone_offset + 0xc + bone_address) = cross_x * magnitude;
              }
              transform_offset = transform_offset + -1;
              bone_address = bone_address + 0x14;
            } while (transform_offset != 0);
          }
          bone_offset = bone_offset + -1;
          loop_index = loop_index + 0x20;
        } while (bone_offset != 0);
      }
      
      // 应用最终的顶点变换
      loop_index = bone_address;
      if (0 < (int64_t)memory_size) {
        do {
          flag_value = stack_ptr_130[loop_index];
          if (flag_value != 0) {
            bone_address = *(int64_t *)(animation_context + 0x90);
            bone_offset = (int64_t)*(int *)(bone_address + loop_index) * 0x5c;
            transform_offset = (int64_t)*(int *)(*(int64_t *)(animation_context + 0x68) + bone_offset);
            bone_address = 0;
            temp_index = (int)((*(int64_t *)(stack_ptr_218 + transform_offset * 8 + 2) - *(int64_t *)(stack_ptr_218 + transform_offset * 8)) / 0x14);
            bone_offset = -1;
            if (0 < temp_index) {
              flag_ptr = *(uint **)(stack_ptr_218 + transform_offset * 8);
              do {
                bone_offset = bone_address;
                if ((*flag_ptr & flag_value) != 0) break;
                bone_address = bone_address + 1;
                flag_ptr = flag_ptr + 5;
                bone_offset = -1;
              } while (bone_address < temp_index);
            }
            bone_address = *(int64_t *)(stack_ptr_218 + transform_offset * 8);
            matrix_ptr = (uint64_t *)(bone_address + 4 + bone_offset * 0x14);
            matrix_data = *matrix_ptr;
            transform_data = matrix_ptr[1];
            if (stack_var_18 == -1) {
              matrix_ptr = (uint64_t *)(*(int64_t *)(animation_context + 0x68) + 4 + bone_offset);
              *matrix_ptr = matrix_data;
              matrix_ptr[1] = transform_data;
              matrix_ptr = (uint64_t *)(bone_address + 4 + bone_offset * 0x14);
              matrix_data = matrix_ptr[1];
              transform_ptr = (uint64_t *)
                              ((int64_t)*(int *)(loop_index + bone_address) * 0x5c + 0x34 + *(int64_t *)(animation_context + 0x68));
              *transform_ptr = *matrix_ptr;
              transform_ptr[1] = matrix_data;
            }
            else {
              matrix_ptr = (uint64_t *)
                            (*(int64_t *)(*(int64_t *)(animation_context + 0xb0) + 0x30 + stack_var_18 * 0x50) +
                            (int64_t)*(int *)(loop_index + bone_address) * 0x10);
              *matrix_ptr = matrix_data;
              matrix_ptr[1] = transform_data;
            }
            
            // 处理第二个变换
            temp_offset = (int64_t)*(int *)(loop_index + 4 + bone_address);
            bone_offset = temp_offset * 0x5c;
            transform_offset = (int64_t)*(int *)(*(int64_t *)(animation_context + 0x68) + bone_offset);
            bone_address = 0;
            temp_index = (int)((*(int64_t *)(stack_ptr_218 + transform_offset * 8 + 2) - *(int64_t *)(stack_ptr_218 + transform_offset * 8)) / 0x14);
            bone_offset = -1;
            if (0 < temp_index) {
              flag_ptr = *(uint **)(stack_ptr_218 + transform_offset * 8);
              do {
                bone_offset = bone_address;
                if ((*flag_ptr & flag_value) != 0) break;
                bone_address = bone_address + 1;
                flag_ptr = flag_ptr + 5;
                bone_offset = -1;
              } while (bone_address < temp_index);
            }
            bone_address = *(int64_t *)(stack_ptr_218 + transform_offset * 8);
            matrix_ptr = (uint64_t *)(bone_address + 4 + bone_offset * 0x14);
            matrix_data = *matrix_ptr;
            transform_data = matrix_ptr[1];
            if (stack_var_18 == -1) {
              matrix_ptr = (uint64_t *)(*(int64_t *)(animation_context + 0x68) + 4 + bone_offset);
              *matrix_ptr = matrix_data;
              matrix_ptr[1] = transform_data;
              matrix_ptr = (uint64_t *)(bone_address + 4 + bone_offset * 0x14);
              matrix_data = matrix_ptr[1];
              transform_ptr = (uint64_t *)
                              ((int64_t)*(int *)(loop_index + 4 + bone_address) * 0x5c + 0x34 + *(int64_t *)(animation_context + 0x68));
              *transform_ptr = *matrix_ptr;
              transform_ptr[1] = matrix_data;
            }
            else {
              matrix_ptr = (uint64_t *)
                            (*(int64_t *)(*(int64_t *)(animation_context + 0xb0) + 0x30 + stack_var_18 * 0x50) +
                            temp_offset * 0x10);
              *matrix_ptr = matrix_data;
              matrix_ptr[1] = transform_data;
            }
            
            // 处理第三个变换
            temp_offset = (int64_t)*(int *)(loop_index + 8 + bone_address);
            transform_offset = temp_offset * 0x5c;
            bone_offset = (int64_t)*(int *)(transform_offset + *(int64_t *)(animation_context + 0x68));
            bone_address = 0;
            transform_offset = (int64_t)
                               (int)((*(int64_t *)(stack_ptr_218 + bone_offset * 8 + 2) - *(int64_t *)(stack_ptr_218 + bone_offset * 8)) / 0x14);
            bone_offset = -1;
            if (0 < transform_offset) {
              flag_ptr = *(uint **)(stack_ptr_218 + bone_offset * 8);
              do {
                bone_offset = bone_address;
                if ((*flag_ptr & flag_value) != 0) break;
                bone_address = bone_address + 1;
                flag_ptr = flag_ptr + 5;
                bone_offset = -1;
              } while (bone_address < transform_offset);
            }
            bone_address = *(int64_t *)(stack_ptr_218 + bone_offset * 8);
            bone_id = *(int8_t (*) [16])(bone_address + 4 + bone_offset * 0x14);
            if (stack_var_18 == -1) {
              *(int8_t (*) [16])(transform_offset + 4 + *(int64_t *)(animation_context + 0x68)) = bone_id;
              matrix_ptr = (uint64_t *)(bone_address + 4 + bone_offset * 0x14);
              matrix_data = matrix_ptr[1];
              transform_ptr = (uint64_t *)
                              ((int64_t)*(int *)(loop_index + 8 + bone_address) * 0x5c + 0x34 + *(int64_t *)(animation_context + 0x68));
              *transform_ptr = *matrix_ptr;
              transform_ptr[1] = matrix_data;
            }
            else {
              *(int8_t (*) [16])
                 (*(int64_t *)(*(int64_t *)(animation_context + 0xb0) + 0x30 + stack_var_18 * 0x50) +
                 temp_offset * 0x10) = bone_id;
            }
          }
          loop_index = loop_index + 1;
          bone_address = bone_address + 0xc;
        } while (loop_index < (int64_t)memory_size);
        transform_offset = (int64_t)stack_var_1e8;
      }
      
      // 清理影响数组
      cleanup_influence_array(&stack_ptr_218);
      stack_var_18 = stack_var_18 + 1;
      if ((int64_t)stack_var_1d8 <= (int64_t)stack_var_18) {
        cleanup_bone_id_array(stack_bone_buffer);
        if (stack_ptr_130 != (int32_t *)0x0) {
          free_influence_flags(stack_ptr_130);
        }
        return;
      }
    } while( true );
  }
  
  // 处理剩余的骨骼
  stack_var_1d0 = 0;
LAB_PROCESS_REMAINING_BONES:
  temp_bone_array = (int8_t (*) [16])(stack_var_1d0 * 0x20);
  vertex_ptr = *(int **)(*temp_bone_array + stack_var_170);
  total_size = *(int64_t)(*temp_bone_array + stack_var_170 + 8) - (int64_t)vertex_ptr >> 2;
  stack_bone_array = temp_bone_array;
  if (1 < total_size) {
    needs_normalization = true;
    stack_var_1c8 = stack_ptr_130[*vertex_ptr];
    temp_index = 1;
    flag_value = stack_var_1c8;
    influence_count_ptr = vertex_ptr;
    do {
      influence_count_ptr = influence_count_ptr + 1;
      if ((flag_value & stack_ptr_130[*influence_count_ptr]) == 0) {
        needs_normalization = false;
        break;
      }
      flag_value = flag_value | stack_ptr_130[*influence_count_ptr];
      temp_index = temp_index + 1;
    } while ((uint64_t)(int64_t)temp_index < total_size);
    flag_value = (uint)stack_var_18;
    if (!needs_normalization) {
      stack_var_1a0 = (int *)0x0;
      stack_var_198 = (int *)0x0;
      stack_ptr_190 = (int *)0x0;
      stack_var_188 = 3;
      vertex_start_ptr = (int *)allocate_vertex_index(VERTEX_INDEX_ALLOCATOR, 4, CONCAT71((uint7)(uint3)(stack_var_18 >> 8), 3));
      *vertex_start_ptr = *vertex_ptr;
      vertex_ptr = vertex_start_ptr + 1;
      stack_ptr_218 = (int *)0x0;
      stack_ptr_210 = (int *)0x0;
      influence_count_ptr = (int *)0x0;
      stack_ptr_208 = (int *)0x0;
      stack_var_200 = 3;
      stack_var_10 = 1;
      stack_ptr_1f8 = *(int **)(*temp_bone_array + stack_var_170);
      vertex_end_ptr = vertex_ptr;
      stack_var_1a0 = vertex_start_ptr;
      stack_var_198 = vertex_ptr;
      stack_ptr_190 = vertex_ptr;
      if (1 < (uint64_t)(*(int64_t)(*temp_bone_array + stack_var_170 + 8) - (int64_t)stack_ptr_1f8 >> 2)) {
        stack_var_20 = 4;
        vertex_ptr = (int *)0x0;
        do {
          vertex_index_ptr = stack_ptr_210;
          vertex_ptr = (int *)0x0;
          if (stack_ptr_210 < influence_count_ptr) {
            *stack_ptr_210 = *(int *)(stack_var_20 + (int64_t)stack_ptr_1f8);
            vertex_ptr = vertex_ptr;
          }
          else {
            stack_var_1d8 = (int64_t)stack_ptr_210 - (int64_t)vertex_ptr;
            if ((int64_t)stack_var_1d8 >> 2 == 0) {
              stack_ptr_1f0 = (int *)0x1;
LAB_REALLOC_VERTEX_ARRAY:
              vertex_ptr = (int *)allocate_vertex_index(VERTEX_INDEX_ALLOCATOR, (int64_t)stack_ptr_1f0 * 4, CONCAT71((int7)(stack_var_20 >> 8), 3));
            }
            else {
              stack_ptr_1f0 = (int *)(((int64_t)stack_var_1d8 >> 2) * 2);
              if (stack_ptr_1f0 != (int *)0x0) goto LAB_REALLOC_VERTEX_ARRAY;
            }
            if (vertex_ptr != vertex_index_ptr) {
              memmove(vertex_ptr, vertex_index_ptr, stack_var_1d8);
            }
            *vertex_ptr = *(int *)(stack_var_20 + (int64_t)stack_ptr_1f8);
            if (vertex_index_ptr != (int *)0x0) {
              free_vertex_index();
            }
            influence_count_ptr = vertex_ptr + (int64_t)stack_ptr_1f0;
            temp_bone_array = stack_bone_array;
            stack_ptr_218 = vertex_ptr;
            stack_ptr_208 = influence_count_ptr;
            stack_ptr_210 = vertex_ptr;
          }
          stack_ptr_210 = stack_ptr_210 + 1;
          stack_var_10 = stack_var_10 + 1;
          stack_var_20 = stack_var_20 + 4;
          stack_ptr_1f8 = *(int **)(*temp_bone_array + stack_var_170);
          vertex_ptr = vertex_ptr;
        } while ((uint64_t)(int64_t)stack_var_10 < (uint64_t)(*(int64_t)(*temp_bone_array + stack_var_170 + 8) - (int64_t)stack_ptr_1f8 >> 2));
      }
      
      // 处理顶点数组合并
      do {
        influence_count_ptr = (int *)0x0;
        stack_var_1c0 = 0;
        stack_var_1bc = 0;
        stack_var_1b8 = (int *)0x0;
        stack_ptr_1b0 = (int *)0x0;
        stack_var_1a8 = 3;
        needs_normalization = false;
        has_influence = false;
        vertex_id = 0;
        stack_var_180 = (int64_t)stack_ptr_210 - (int64_t)stack_ptr_218 >> 2;
        vertex_ptr = (int *)0x0;
        vertex_ptr = (int *)0x0;
        vertex_ptr = vertex_ptr;
        influence_count_ptr = influence_count_ptr;
        vertex_index_ptr = stack_ptr_218;
        stack_ptr_1f8 = stack_ptr_210;
        if (stack_var_180 != 0) {
          do {
            stack_ptr_1f0 = vertex_index_ptr;
            vertex_ptr = (int *)0x0;
            temp_index = *stack_ptr_1f0;
            if ((stack_var_1c8 & stack_ptr_130[temp_index]) == 0) {
              if (vertex_ptr < influence_count_ptr) {
                *vertex_ptr = temp_index;
                vertex_ptr = vertex_ptr;
                vertex_id = (uint)influence_count_ptr;
              }
              else {
                stack_var_1d8 = (int64_t)vertex_ptr - (int64_t)vertex_ptr;
                if ((int64_t)stack_var_1d8 >> 2 == 0) {
                  transform_offset = 1;
LAB_REALLOC_VERTEX_BUFFER:
                  vertex_ptr = (int *)allocate_vertex_index(VERTEX_INDEX_ALLOCATOR, transform_offset * 4, 3);
                }
                else {
                  transform_offset = ((int64_t)stack_var_1d8 >> 2) * 2;
                  if (transform_offset != 0) goto LAB_REALLOC_VERTEX_BUFFER;
                }
                if (vertex_ptr != vertex_ptr) {
                  memmove(vertex_ptr, vertex_ptr, stack_var_1d8);
                }
                *vertex_ptr = *stack_ptr_1f0;
                if (vertex_ptr != (int *)0x0) {
                  free_vertex_index();
                }
                stack_var_1c0 = (uint)vertex_ptr;
                stack_var_1bc = (int32_t)((uint64_t)vertex_ptr >> 0x20);
                influence_count_ptr = vertex_ptr + transform_offset;
                stack_ptr_1b0 = influence_count_ptr;
                vertex_ptr = vertex_ptr;
              }
              vertex_ptr = vertex_ptr + 1;
              stack_var_1b8 = vertex_ptr;
              needs_normalization = has_influence;
            }
            else {
              stack_var_1c8 = stack_var_1c8 | stack_ptr_130[temp_index];
              if (vertex_ptr < vertex_end_ptr) {
                stack_var_198 = vertex_ptr + 1;
                *vertex_ptr = temp_index;
                vertex_ptr = stack_var_198;
                vertex_ptr = vertex_ptr;
                needs_normalization = true;
              }
              else {
                stack_var_1d8 = (int64_t)vertex_ptr - (int64_t)vertex_start_ptr;
                if ((int64_t)stack_var_1d8 >> 2 == 0) {
                  transform_offset = 1;
LAB_REALLOC_VERTEX_LIST:
                  vertex_end_ptr = (int *)allocate_vertex_index(VERTEX_INDEX_ALLOCATOR, transform_offset * 4, 3);
                }
                else {
                  transform_offset = ((int64_t)stack_var_1d8 >> 2) * 2;
                  vertex_ptr = vertex_ptr;
                  if (transform_offset != 0) goto LAB_REALLOC_VERTEX_LIST;
                }
                if (vertex_start_ptr != vertex_ptr) {
                  memmove(vertex_end_ptr, vertex_start_ptr, stack_var_1d8);
                }
                *vertex_end_ptr = *stack_ptr_1f0;
                vertex_ptr = vertex_end_ptr + 1;
                if (vertex_start_ptr != (int *)0x0) {
                  free_vertex_index();
                }
                stack_ptr_190 = vertex_end_ptr + transform_offset;
                vertex_ptr = vertex_ptr;
                influence_count_ptr = stack_ptr_1b0;
                vertex_start_ptr = vertex_end_ptr;
                stack_var_1a0 = vertex_end_ptr;
                stack_var_198 = vertex_ptr;
                needs_normalization = true;
              }
            }
            vertex_id = vertex_id + 1;
            stack_ptr_1f0 = stack_ptr_1f0 + 1;
            vertex_ptr = vertex_ptr;
            influence_count_ptr = (int *)(uint64_t)vertex_id;
            vertex_index_ptr = stack_ptr_1f0;
            vertex_end_ptr = stack_ptr_190;
            has_influence = needs_normalization;
          } while ((uint64_t)(int64_t)(int)vertex_id < stack_var_180);
        }
        
        // 更新指针和标志
        offset_ptr = stack_ptr_168;
        stack_var_1c0 = (uint)stack_ptr_218;
        stack_var_1bc = (int32_t)((uint64_t)stack_ptr_218 >> 0x20);
        stack_var_1b8._0_4_ = SUB84(stack_ptr_1f8, 0);
        stack_var_1b8._4_4_ = (int32_t)((uint64_t)stack_ptr_1f8 >> 0x20);
        stack_ptr_1b0 = stack_ptr_208;
        stack_var_200 = 3;
        stack_var_1a8 = 3;
        stack_ptr_210 = vertex_ptr;
        stack_ptr_208 = influence_count_ptr;
        stack_ptr_1f8 = vertex_ptr;
        if ((((int64_t)vertex_ptr - (int64_t)vertex_ptr & 0xfffffffffffffffcU) == 0) || (!needs_normalization))
        goto LAB_SKIP_VERTEX_UPDATE;
        needs_normalization = stack_ptr_218 != (int *)0x0;
        stack_ptr_218 = vertex_ptr;
        if (needs_normalization) {
          free_vertex_index();
        }
      } while( true );
    }
  }
  goto LAB_UPDATE_BONE_MAPPING;
LAB_SKIP_VERTEX_UPDATE:
  if (stack_ptr_218 != (int *)0x0) {
    stack_ptr_218 = vertex_ptr;
    free_vertex_index();
  }
  influence_count_ptr = *(int **)(*stack_bone_array + stack_var_170);
  stack_ptr_218 = vertex_ptr;
  if (((*(int64_t)(*stack_bone_array + stack_var_170 + 8) - (int64_t)influence_count_ptr ^ (int64_t)vertex_ptr - (int64_t)vertex_start_ptr) & 0xfffffffffffffffcU) != 0) {
    *(int **)(*stack_bone_array + stack_var_170) = vertex_start_ptr;
    stack_var_198 = *(int **)(*stack_bone_array + stack_var_170 + 8);
    *(int **)(*stack_bone_array + stack_var_170 + 8) = vertex_ptr;
    stack_ptr_190 = *(int **)(stack_bone_array[1] + stack_var_170);
    *(int **)(stack_bone_array[1] + stack_var_170) = vertex_end_ptr;
    stack_var_188 = *(int32_t *)(stack_bone_array[1] + stack_var_170 + 8);
    *(int32_t *)(stack_bone_array[1] + stack_var_170 + 8) = 3;
    stack_var_1a0 = influence_count_ptr;
    if (stack_ptr_168 < stack_ptr_160) {
      total_size = (int64_t)vertex_ptr - (int64_t)vertex_ptr;
      *(int32_t *)(stack_ptr_168 + 3) = 3;
      if (total_size < 4) {
        transform_offset = 0;
        stack_ptr_168 = stack_ptr_168 + 4;
      }
      else {
        stack_ptr_168 = stack_ptr_168 + 4;
        transform_offset = allocate_vertex_index(VERTEX_INDEX_ALLOCATOR, ((int64_t)total_size >> 2) * 4, 3);
      }
      *offset_ptr = transform_offset;
      offset_ptr[1] = transform_offset;
      offset_ptr[2] = transform_offset + ((int64_t)total_size >> 2) * 4;
      if (vertex_ptr != vertex_ptr) {
        memmove(*offset_ptr, vertex_ptr, total_size);
      }
      offset_ptr[1] = *offset_ptr;
    }
    else {
      update_vertex_mapping(&stack_var_170, &stack_ptr_218);
      vertex_ptr = stack_ptr_210;
      vertex_ptr = stack_ptr_218;
    }
    
    // 更新骨骼映射表
    loop_index = stack_var_1d0;
    temp_index = *bone_count_ptr;
    transform_offset = stack_var_1d0 * 0x5c;
    bone_address = *(int64_t *)(animation_context + 0x68);
    stack_var_108 = *(uint64_t *)(transform_offset + bone_address);
    stack_var_100 = ((uint64_t *)(transform_offset + bone_address))[1];
    matrix_ptr = (uint64_t *)(transform_offset + 0x10 + bone_address);
    stack_var_f8 = *matrix_ptr;
    stack_var_f0 = matrix_ptr[1];
    matrix_ptr = (uint64_t *)(transform_offset + 0x20 + bone_address);
    stack_var_e8 = *matrix_ptr;
    stack_var_e0 = matrix_ptr[1];
    matrix_ptr = (uint64_t *)(transform_offset + 0x30 + bone_address);
    stack_var_d8 = *matrix_ptr;
    stack_var_d0 = matrix_ptr[1];
    matrix_ptr = (uint64_t *)(transform_offset + 0x40 + bone_address);
    stack_var_c8 = *matrix_ptr;
    stack_var_c0 = matrix_ptr[1];
    stack_var_b8 = *(uint64_t *)(transform_offset + 0x50 + bone_address);
    stack_var_b0 = *(int32_t *)(transform_offset + 0x58 + bone_address);
    update_bone_mapping(bone_count_ptr, &stack_var_108);
    
    temp_array_size = (int64_t)vertex_ptr - (int64_t)vertex_ptr >> 2;
    alloc_size = 0;
    vertex_ptr = vertex_ptr;
    total_size = alloc_size;
    if (temp_array_size != 0) {
      do {
        transform_offset = (int64_t)*vertex_ptr;
        bone_address = *(int64_t *)(animation_context + 0x90);
        if (*(uint *)(bone_address + transform_offset * 0xc) == (uint)stack_var_18) {
          *(int *)(bone_address + transform_offset * 0xc) = temp_index;
        }
        if (*(uint *)(bone_address + 4 + transform_offset * 0xc) == (uint)stack_var_18) {
          *(int *)(bone_address + 4 + transform_offset * 0xc) = temp_index;
        }
        if (*(uint *)(bone_address + 8 + transform_offset * 0xc) == (uint)stack_var_18) {
          *(int *)(bone_address + 8 + transform_offset * 0xc) = temp_index;
        }
        vertex_id = (int)total_size + 1;
        vertex_ptr = vertex_ptr + 1;
        total_size = (uint64_t)vertex_id;
      } while ((uint64_t)(int64_t)(int)vertex_id < temp_array_size);
    }
    
    total_size = alloc_size;
    vertex_start_ptr = influence_count_ptr;
    if (*(short *)(animation_context + 0xc0) != 0) {
      do {
        bone_address = alloc_size + *(int64_t *)(animation_context + 0xb0);
        transform_offset = *(int64_t *)(alloc_size + 0x30 + *(int64_t *)(animation_context + 0xb0));
        matrix_ptr = (uint64_t *)(transform_offset + loop_index * 0x10);
        matrix_data = *matrix_ptr;
        transform_data = matrix_ptr[1];
        temp_index = *(int *)(bone_address + 0x2c);
        vertex_index = *(int *)(bone_address + 0x28);
        if (temp_index <= vertex_index) {
          if (temp_index < 2) {
            *(int32_t *)(bone_address + 0x2c) = 8;
          }
          else {
            *(int *)(bone_address + 0x2c) = (temp_index >> 1) + temp_index;
          }
          resize_vertex_buffer(bone_address + 0x28);
          vertex_index = *(int *)(bone_address + 0x28);
          transform_offset = *(int64_t *)(bone_address + 0x30);
        }
        matrix_ptr = (uint64_t *)(transform_offset + (int64_t)vertex_index * 0x10);
        *matrix_ptr = matrix_data;
        matrix_ptr[1] = transform_data;
        *(int *)(bone_address + 0x28) = *(int *)(bone_address + 0x28) + 1;
        vertex_id = (int)total_size + 1;
        alloc_size = alloc_size + 0x50;
        total_size = (uint64_t)vertex_id;
      } while ((int)vertex_id < (int)(uint)*(ushort *)(animation_context + 0xc0));
    }
  }
  
  // 释放临时内存
  if (vertex_ptr != (int *)0x0) {
    free_vertex_index();
  }
  if (vertex_start_ptr != (int *)0x0) {
    free_vertex_index();
  }
LAB_UPDATE_BONE_MAPPING:
  flag_value = flag_value + 1;
  stack_var_18 = (uint64_t)flag_value;
  stack_var_1d0 = stack_var_1d0 + 1;
  if (*bone_count_ptr <= (int)flag_value) goto LAB_CLEANUP_AND_RETURN;
  goto LAB_PROCESS_REMAINING_BONES;
}

// 常量定义
#define VERTEX_INDEX_ALLOCATOR system_memory_pool_ptr
#define MATRIX_ALLOCATOR system_memory_pool_ptr
#define ZERO_VECTOR core_system_temp_pointer