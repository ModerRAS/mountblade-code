#include "TaleWorlds.Native.Split.h"

// 03_rendering_part013.c - 7 个函数
// 渲染系统对象复制和骨骼动画处理模块

// 函数: 复制渲染对象属性
// 原始函数名: void FUN_180275a60(longlong param_1,longlong *param_2,uint64_t param_3,uint64_t param_4)
void copy_rendering_object_properties(longlong source_object, longlong *target_object, uint64_t param_3, uint64_t param_4)

{
  longlong *source_ref_manager;
  longlong *target_ref_manager;
  longlong bone_count;
  uint64_t transform_matrix1;
  int32_t matrix_element1;
  int32_t matrix_element2;
  int32_t matrix_element3;
  uint64_t *bone_data;
  int bone_index;
  void *default_name;
  longlong source_bone_start;
  longlong target_bone_start;
  longlong *temp_bone_ref;
  
  // 复制变换矩阵数据
  FUN_180627be0(target_object + 0x3e, source_object + 0x1f0, param_3, param_4, 0xfffffffffffffffe);
  target_object[6] = *(longlong *)(source_object + 0x30);
  *(int32_t *)(target_object + 0xb) = *(int32_t *)(source_object + 0x58);
  transform_matrix1 = *(uint64_t *)(source_object + 0x21c);
  *(uint64_t *)((longlong)target_object + 0x214) = *(uint64_t *)(source_object + 0x214);
  *(uint64_t *)((longlong)target_object + 0x21c) = transform_matrix1;
  
  // 复制矩阵元素
  matrix_element1 = *(int32_t *)(source_object + 0x228);
  matrix_element2 = *(int32_t *)(source_object + 0x22c);
  matrix_element3 = *(int32_t *)(source_object + 0x230);
  *(int32_t *)((longlong)target_object + 0x224) = *(int32_t *)(source_object + 0x224);
  *(int32_t *)(target_object + 0x45) = matrix_element1;
  *(int32_t *)((longlong)target_object + 0x22c) = matrix_element2;
  *(int32_t *)(target_object + 0x46) = matrix_element3;
  
  matrix_element1 = *(int32_t *)(source_object + 0x238);
  matrix_element2 = *(int32_t *)(source_object + 0x23c);
  matrix_element3 = *(int32_t *)(source_object + 0x240);
  *(int32_t *)((longlong)target_object + 0x234) = *(int32_t *)(source_object + 0x234);
  *(int32_t *)(target_object + 0x47) = matrix_element1;
  *(int32_t *)((longlong)target_object + 0x23c) = matrix_element2;
  *(int32_t *)(target_object + 0x48) = matrix_element3;
  *(int32_t *)((longlong)target_object + 0x244) = *(int32_t *)(source_object + 0x244);
  
  // 复制渲染标志
  *(int8_t *)(target_object + 0x78) = *(int8_t *)(source_object + 0x3c0);
  *(int32_t *)((longlong)target_object + 0x3c4) = *(int32_t *)(source_object + 0x3c4);
  *(int32_t *)(target_object + 0x42) = *(int32_t *)(source_object + 0x210);
  
  // 管理引用计数
  source_ref_manager = *(longlong **)(source_object + 0x3b8);
  if (source_ref_manager != (longlong *)0x0) {
    (**(code **)(*source_ref_manager + 0x28))(source_ref_manager);
  }
  target_ref_manager = (longlong *)target_object[0x77];
  target_object[0x77] = (longlong)source_ref_manager;
  if (target_ref_manager != (longlong *)0x0) {
    (**(code **)(*target_ref_manager + 0x38))();
  }
  
  // 复制颜色属性
  *(int32_t *)(target_object + 0xd) = *(int32_t *)(source_object + 0x68);
  matrix_element1 = *(int32_t *)(source_object + 0x70);
  matrix_element2 = *(int32_t *)(source_object + 0x74);
  matrix_element3 = *(int32_t *)(source_object + 0x78);
  *(int32_t *)((longlong)target_object + 0x6c) = *(int32_t *)(source_object + 0x6c);
  *(int32_t *)(target_object + 0xe) = matrix_element1;
  *(int32_t *)((longlong)target_object + 0x74) = matrix_element2;
  *(int32_t *)(target_object + 0xf) = matrix_element3;
  *(int32_t *)((longlong)target_object + 0x7c) = *(int32_t *)(source_object + 0x7c);
  *(int32_t *)(target_object + 0x12) = *(int32_t *)(source_object + 0x90);
  
  // 复制对象名称
  default_name = &system_buffer_ptr;
  if (*(void **)(source_object + 0x88) != (void *)0x0) {
    default_name = *(void **)(source_object + 0x88);
  }
  strcpy_s(target_object[0x11], 0x80, default_name);
  
  *(int32_t *)(target_object + 0x25) = *(int32_t *)(source_object + 0x128);
  default_name = &system_buffer_ptr;
  if (*(void **)(source_object + 0x120) != (void *)0x0) {
    default_name = *(void **)(source_object + 0x120);
  }
  strcpy_s(target_object[0x24], 0x80, default_name);
  
  // 复制材质和纹理数据
  FUN_180627be0(target_object + 0x36, source_object + 0x1b0);
  FUN_180627be0(target_object + 0x3a, source_object + 0x1d0);
  
  // 管理材质引用
  source_ref_manager = *(longlong **)(source_object + 0x3c8);
  if (source_ref_manager != (longlong *)0x0) {
    (**(code **)(*source_ref_manager + 0x28))(source_ref_manager);
  }
  target_ref_manager = (longlong *)target_object[0x79];
  target_object[0x79] = (longlong)source_ref_manager;
  if (target_ref_manager != (longlong *)0x0) {
    (**(code **)(*target_ref_manager + 0x38))();
  }
  
  *(int32_t *)((longlong)target_object + 0x5c) = *(int32_t *)(source_object + 0x5c);
  
  // 如果需要，复制骨骼数据
  if ((char)param_3 != '\0') {
    bone_count = *(longlong *)(source_object + 0x40) - *(longlong *)(source_object + 0x38) >> 4;
    FUN_180284240(target_object + 7, bone_count);
    bone_index = (int)bone_count;
    bone_count = (longlong)bone_index;
    if (0 < bone_index) {
      source_bone_start = 0;
      do {
        bone_data = (uint64_t *)
                 FUN_1800763c0(*(uint64_t *)(source_bone_start + *(longlong *)(source_object + 0x38)), &temp_bone_ref);
        target_bone_start = target_object[7];
        transform_matrix1 = *bone_data;
        *bone_data = 0;
        source_ref_manager = *(longlong **)(source_bone_start + target_bone_start);
        *(uint64_t *)(source_bone_start + target_bone_start) = transform_matrix1;
        if (source_ref_manager != (longlong *)0x0) {
          (**(code **)(*source_ref_manager + 0x38))();
        }
        if (temp_bone_ref != (longlong *)0x0) {
          (**(code **)(*temp_bone_ref + 0x38))();
        }
        *(longlong **)(*(longlong *)(source_bone_start + target_object[7]) + 0x1c8) = target_object;
        *(int32_t *)(source_bone_start + 8 + target_object[7]) =
             *(int32_t *)(source_bone_start + 8 + *(longlong *)(source_object + 0x38));
        source_bone_start = source_bone_start + 0x10;
        bone_count = bone_count + -1;
      } while (bone_count != 0);
    }
  }
  
  // 调用虚拟函数完成复制
  (**(code **)(*target_object + 0x148))(target_object, source_object + 0x330);
  return;
}



// 函数: 添加骨骼索引到渲染对象
// 原始函数名: void FUN_180275cf0(longlong *param_1,int param_2,longlong *param_3,char param_4)
void add_bone_index_to_render_object(longlong *render_object, int bone_index, longlong *bone_manager, char should_update)

{
  longlong *bone_ref;
  longlong object_id;
  longlong *temp_bone_ref;
  int index_mask;
  
  temp_bone_ref = (longlong *)0x0;
  bone_ref = (longlong *)*bone_manager;
  if (bone_ref != (longlong *)0x0) {
    (**(code **)(*bone_ref + 0x28))(bone_ref);
  }
  index_mask = 1 << ((byte)bone_index & 0x1f);
  temp_bone_ref = bone_ref;
  FUN_1802842e0(render_object + 7, &temp_bone_ref);
  *(longlong **)(*bone_manager + 0x1c8) = render_object;
  
  // 更新最大骨骼索引
  if ((int)render_object[0xb] < bone_index + 1) {
    *(int *)(render_object + 0xb) = bone_index + 1;
  }
  
  // 如果需要更新，触发更新
  if (should_update != '\0') {
    if (*(code **)(*render_object + 0x160) == (code *)&UNK_180277350) {
      FUN_180276f30(render_object, (longlong)render_object + 0x214, 0);
    }
    else {
      (**(code **)(*render_object + 0x160))(render_object);
    }
    object_id = render_object[5];
    if (object_id != 0) {
      *(short *)(object_id + 0x2b0) = *(short *)(object_id + 0x2b0) + 1;
      if (*(longlong *)(object_id + 0x168) != 0) {
        func_0x0001802eeba0();
      }
    }
  }
  
  // 清理临时引用
  if (temp_bone_ref != (longlong *)0x0) {
    (**(code **)(*temp_bone_ref + 0x38))();
  }
  if ((longlong *)*bone_manager != (longlong *)0x0) {
    (**(code **)(*(longlong *)*bone_manager + 0x38))();
  }
  return;
}



// 函数: 添加骨骼位掩码到渲染对象
// 原始函数名: void FUN_180275e10(longlong *param_1,uint param_2,longlong *param_3,char param_4)
void add_bone_mask_to_render_object(longlong *render_object, uint bone_mask, longlong *bone_manager, char should_update)

{
  longlong *bone_ref;
  longlong object_id;
  int highest_bit_index;
  longlong *temp_bone_ref;
  uint temp_mask;
  
  temp_bone_ref = (longlong *)0x0;
  bone_ref = (longlong *)*bone_manager;
  temp_mask = bone_mask;
  if (bone_ref != (longlong *)0x0) {
    (**(code **)(*bone_ref + 0x28))(bone_ref);
  }
  temp_bone_ref = bone_ref;
  FUN_1802842e0(render_object + 7, &temp_bone_ref);
  *(longlong **)(*bone_manager + 0x1c8) = render_object;
  
  // 计算最高位索引
  highest_bit_index = -1;
  if (bone_mask != 0) {
    do {
      highest_bit_index = highest_bit_index + 1;
      bone_mask = bone_mask >> 1;
    } while (bone_mask != 0);
  }
  
  // 更新最大骨骼索引
  if ((int)render_object[0xb] < highest_bit_index + 1) {
    *(int *)(render_object + 0xb) = highest_bit_index + 1;
  }
  
  // 如果需要更新，触发更新
  if (should_update != '\0') {
    if (*(code **)(*render_object + 0x160) == (code *)&UNK_180277350) {
      FUN_180276f30(render_object, (longlong)render_object + 0x214, 0);
    }
    else {
      (**(code **)(*render_object + 0x160))(render_object);
    }
    object_id = render_object[5];
    if ((object_id != 0) &&
       (*(short *)(object_id + 0x2b0) = *(short *)(object_id + 0x2b0) + 1, *(longlong *)(object_id + 0x168) != 0
       )) {
      func_0x0001802eeba0();
    }
  }
  
  // 清理临时引用
  if (temp_bone_ref != (longlong *)0x0) {
    (**(code **)(*temp_bone_ref + 0x38))();
  }
  if ((longlong *)*bone_manager != (longlong *)0x0) {
    (**(code **)(*(longlong *)*bone_manager + 0x38))();
  }
  return;
}



// 函数: 处理骨骼动画可见性检测
// 原始函数名: ulonglong FUN_180275f30(uint64_t *param_1,uint *param_2,uint64_t param_3,float *param_4,uint64_t *param_5)
ulonglong process_bone_animation_visibility(uint64_t *render_object, uint *visibility_flags, uint64_t param_3, float *transform_matrix, uint64_t *param_5)

{
  float transformed_x;
  float transformed_y;
  float transformed_z;
  float transformed_w;
  float distance_x;
  float distance_y;
  float distance_z;
  float distance_squared;
  float max_distance_squared;
  uint64_t transform_backup1;
  byte visibility_result;
  ulonglong visibility_mask;
  int bone_index;
  longlong bone_array_length;
  uint bone_bitmask;
  byte bone_visibility;
  longlong current_bone;
  float bone_transform_x;
  float bone_transform_y;
  float bone_transform_z;
  float bone_transform_w;
  uint64_t stack_transform;
  uint8_t stack_data1;
  int8_t stack_flag1;
  int16_t stack_data2;
  uint64_t *bone_data_ptr;
  uint64_t stack_data3;
  int32_t stack_data4;
  int32_t stack_data5;
  int32_t stack_data6;
  int stack_int1;
  uint64_t stack_data7;
  uint64_t stack_data8;
  uint64_t stack_data9;
  uint64_t stack_data10;
  int32_t stack_data11;
  int32_t stack_data12;
  int32_t stack_data13;
  int32_t stack_data14;
  int32_t stack_data15;
  int32_t stack_data16;
  int32_t stack_data17;
  int32_t stack_data18;
  int32_t stack_data19;
  float stack_float1;
  float stack_float2;
  float stack_float3;
  float stack_float4;
  float stack_float5;
  float stack_float6;
  float stack_float7;
  float stack_float8;
  float stack_float9;
  float stack_float10;
  float stack_float11;
  float stack_float12;
  float stack_float13;
  float stack_float14;
  float stack_float15;
  float stack_float16;
  
  visibility_mask = (ulonglong)*(uint *)(render_object + 0x42);
  if (((*visibility_flags & *(uint *)(render_object + 0x42)) == 0) || (*(int *)(render_object + 0xb) == 0)) {
LAB_180276376:
    visibility_mask = visibility_mask & 0xffffffffffffff00;
  }
  else {
    // 备份变换数据
    stack_transform = *param_5;
    transform_backup1 = param_5[1];
    stack_data3 = param_5[3];
    stack_data4 = *(int32_t *)(param_5 + 4);
    stack_data5 = *(int32_t *)((longlong)param_5 + 0x24);
    stack_data6 = *(int32_t *)(param_5 + 5);
    stack_int1 = *(int *)((longlong)param_5 + 0x2c);
    stack_data7 = param_5[6];
    stack_data8 = param_5[7];
    stack_data9 = param_5[8];
    stack_data10 = param_5[9];
    stack_data11 = *(int32_t *)(param_5 + 10);
    stack_data12 = *(int32_t *)((longlong)param_5 + 0x54);
    stack_data13 = *(int32_t *)(param_5 + 0xb);
    stack_data14 = *(int32_t *)((longlong)param_5 + 0x5c);
    stack_data15 = *(int32_t *)(param_5 + 0xc);
    stack_data16 = *(int32_t *)((longlong)param_5 + 100);
    stack_data17 = *(int32_t *)(param_5 + 0xd);
    stack_data18 = *(int32_t *)((longlong)param_5 + 0x6c);
    stack_data1._0_4_ = (int)transform_backup1;
    bone_index = (int)stack_data1 + *(int *)((longlong)render_object + 0x5c);
    stack_data2 = (int16_t)((ulonglong)transform_backup1 >> 0x30);
    _uStack_e0 = CONCAT15(*(int8_t *)(render_object + 0x76), (int5)transform_backup1);
    _uStack_e0 = CONCAT44(stack0xffffffffffffff24, bone_index);
    if (stack_int1 == 0) {
      stack_int1 = *(int *)(render_object + 0x62);
      stack_data6 = *(int32_t *)(render_object + 99);
    }
    
    // 处理骨骼索引范围
    bone_array_length = 0;
    if (*(char *)(render_object + 0xc) == '\0') {
      if (bone_index < 0) {
        bone_index = 0;
      }
      else if (*(int *)(render_object + 0xb) + -1 < bone_index) {
        bone_index = *(int *)(render_object + 0xb) + -1;
      }
    }
    
    bone_visibility = 1;
    bone_bitmask = 1 << ((byte)bone_index & 0x1f);
    bone_data_ptr = render_object;
    
    // 处理非蒙皮动画情况
    if ((*(char *)(render_object + 100) == '\0') && (*(char *)(render_object + 0x76) == -1)) {
      // 执行顶点变换
      transformed_z = *transform_matrix;
      transformed_w = transform_matrix[1];
      distance_x = transform_matrix[2];
      distance_y = transform_matrix[3];
      visibility_mask = *(ulonglong *)(visibility_flags + 10);
      bone_transform_z = *(float *)((longlong)render_object + 0x334);
      bone_transform_x = *(float *)(render_object + 0x66);
      bone_transform_y = *(float *)(render_object + 0x67);
      distance_squared = *(float *)((longlong)render_object + 0x344);
      transformed_x = transform_matrix[8];
      transformed_y = transform_matrix[9];
      distance_z = transform_matrix[10];
      max_distance_squared = transform_matrix[11];
      bone_transform_w = transform_matrix[4];
      stack_float1 = bone_transform_z * bone_transform_w + bone_transform_x * transformed_z + bone_transform_y * transformed_x;
      stack_float2 = bone_transform_z * distance_y + bone_transform_x * transformed_w + bone_transform_y * transformed_y;
      stack_float3 = bone_transform_z * distance_z + bone_transform_x * distance_x + bone_transform_y * transformed_z;
      stack_float4 = bone_transform_z * max_distance_squared + bone_transform_x * distance_y + bone_transform_y * distance_w;
      bone_transform_z = *(float *)(render_object + 0x69);
      bone_transform_x = *(float *)(render_object + 0x6a);
      bone_transform_y = *(float *)((longlong)render_object + 0x354);
      stack_float5 = distance_squared * bone_transform_w + bone_transform_x * transformed_z + bone_transform_z * transformed_x;
      stack_float6 = distance_squared * distance_y + bone_transform_x * transformed_w + bone_transform_z * transformed_y;
      stack_float7 = distance_squared * distance_z + bone_transform_x * distance_x + bone_transform_z * transformed_z;
      stack_float8 = distance_squared * max_distance_squared + bone_transform_x * distance_y + bone_transform_z * distance_w;
      bone_transform_z = *(float *)(render_object + 0x6b);
      distance_squared = *(float *)((longlong)render_object + 0x364);
      bone_transform_x = *(float *)(render_object + 0x6c);
      stack_float9 = bone_transform_y * bone_transform_w + bone_transform_x * transformed_z + bone_transform_z * transformed_x;
      stack_float10 = bone_transform_y * distance_y + bone_transform_x * transformed_w + bone_transform_z * transformed_y;
      stack_float11 = bone_transform_y * distance_z + bone_transform_x * distance_x + bone_transform_z * transformed_z;
      stack_float12 = bone_transform_y * max_distance_squared + bone_transform_x * distance_y + bone_transform_z * distance_w;
      bone_transform_z = *(float *)(render_object + 0x6d);
      stack_float13 = distance_squared * bone_transform_w + bone_transform_x * transformed_z + bone_transform_z * transformed_x + transform_matrix[0xc];
      stack_float14 = distance_squared * distance_y + bone_transform_x * transformed_w + bone_transform_z * transformed_y + transform_matrix[0xd];
      stack_float15 = distance_squared * distance_z + bone_transform_x * distance_x + bone_transform_z * transformed_z + transform_matrix[0xe];
      stack_float16 = distance_squared * max_distance_squared + bone_transform_x * distance_y + bone_transform_z * distance_w + transform_matrix[0xf];
      
      // 距离剔除检测
      if ((visibility_mask != 0) && (bone_transform_z = *(float *)(render_object + 0xd), bone_transform_z != 3.4028235e+38)) {
        if ((void *)*render_object == &UNK_180a169b8) {
          current_bone = (longlong)render_object + 0x214;
        }
        else {
          current_bone = (**(code **)((void *)*render_object + 0x198))(render_object);
          bone_transform_z = *(float *)(render_object + 0xd);
          visibility_mask = *(ulonglong *)(visibility_flags + 10);
        }
        distance_squared = *(float *)(visibility_mask + 0x124) - stack_float14;
        distance_y = *(float *)(visibility_mask + 0x120) - stack_float13;
        distance_x = *(float *)(visibility_mask + 0x128) - stack_float15;
        if (bone_transform_z * bone_transform_z <
            (distance_squared * distance_squared + distance_y * distance_y + distance_x * distance_x) -
            *(float *)(current_bone + 0x30) * *(float *)(current_bone + 0x30)) goto LAB_180276376;
      }
      
      // 遍历骨骼进行可见性检测
      bone_index = (int)((longlong)(render_object[8] - render_object[7]) >> 4);
      current_bone = (longlong)bone_index;
      if (0 < bone_index) {
        do {
          bone_array_length = *(longlong *)(bone_array_length + render_object[7]);
          if ((bone_array_length != 0) && ((*(uint *)(bone_array_length + 8 + render_object[7]) & bone_bitmask) != 0)) {
            if (((visibility_flags[0x6f6] & 0x20) != 0) && ((*(uint *)(bone_array_length + 0x100) & 0x400000) != 0)) {
              *(int32_t *)(render_object + 0x65) = *(int32_t *)(_DAT_180c86870 + 0x224);
            }
            bone_visibility = FUN_180077750(bone_array_length, visibility_flags, &stack_float1, param_3, &stack_transform);
            bone_visibility = bone_visibility & bone_visibility;
          }
          bone_array_length = bone_array_length + 0x10;
          current_bone = current_bone + -1;
        } while (current_bone != 0);
        return (ulonglong)bone_visibility;
      }
    }
    else {
      // 蒙皮动画处理
      visibility_mask = *(ulonglong *)(visibility_flags + 10);
      if ((visibility_mask != 0) && (bone_transform_z = *(float *)(render_object + 0xd), bone_transform_z != 3.4028235e+38)) {
        if ((void *)*render_object == &UNK_180a169b8) {
          current_bone = (longlong)render_object + 0x214;
        }
        else {
          current_bone = (**(code **)((void *)*render_object + 0x198))(render_object);
          bone_transform_z = *(float *)(render_object + 0xd);
          visibility_mask = *(ulonglong *)(visibility_flags + 10);
        }
        distance_squared = *(float *)(visibility_mask + 0x124) - transform_matrix[0xd];
        distance_y = *(float *)(visibility_mask + 0x120) - transform_matrix[0xc];
        distance_x = *(float *)(visibility_mask + 0x128) - transform_matrix[0xe];
        if (bone_transform_z * bone_transform_z <
            (distance_squared * distance_squared + distance_y * distance_y + distance_x * distance_x) -
            *(float *)(current_bone + 0x30) * *(float *)(current_bone + 0x30)) goto LAB_180276376;
      }
      
      // 遍历骨骼进行蒙皮动画处理
      bone_index = (int)((longlong)(render_object[8] - render_object[7]) >> 4);
      current_bone = (longlong)bone_index;
      if (0 < bone_index) {
        do {
          bone_array_length = *(longlong *)(bone_array_length + render_object[7]);
          if ((bone_array_length != 0) && ((*(uint *)(bone_array_length + 8 + render_object[7]) & bone_bitmask) != 0)) {
            if (((visibility_flags[0x6f6] & 0x20) != 0) && ((*(uint *)(bone_array_length + 0x100) & 0x400000) != 0)) {
              *(int32_t *)(render_object + 0x65) = *(int32_t *)(_DAT_180c86870 + 0x224);
            }
            if ((*(byte *)(bone_array_length + 0x100) & 0x20) == 0) {
              bone_visibility = FUN_180077750(bone_array_length, visibility_flags, transform_matrix, param_3, &stack_transform);
              bone_visibility = bone_visibility & bone_visibility;
            }
            else {
              FUN_180075630(bone_array_length, transform_matrix);
            }
          }
          bone_array_length = bone_array_length + 0x10;
          current_bone = current_bone + -1;
        } while (current_bone != 0);
      }
    }
    visibility_mask = (ulonglong)bone_visibility;
  }
  return visibility_mask;
}



// 函数: 处理顶点变换和可见性检测
// 原始函数名: ulonglong FUN_18027606a(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
ulonglong process_vertex_transform_visibility(uint64_t param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4)

{
  float transform_x;
  float transform_y;
  longlong bone_ref;
  float transform_z;
  float transform_w;
  float scale_x;
  float scale_y;
  float scale_z;
  float scale_w;
  float distance_x;
  float distance_y;
  float distance_z;
  byte visibility_result;
  int bone_count;
  ulonglong visibility_mask;
  ulonglong result;
  uint64_t *render_object;
  longlong transform_data;
  longlong bone_data;
  longlong bone_start;
  uint bone_flags;
  byte bone_visible;
  longlong current_bone;
  float bone_transform_x;
  float transform_backup1;
  float transform_backup2;
  float transform_backup3;
  float param1_float;
  float param2_float;
  float param3_float;
  float param4_float;
  
  // 提取变换矩阵数据
  transform_z = *(float *)(in_R9 + 0x20);
  transform_w = *(float *)(in_R9 + 0x24);
  scale_x = *(float *)(in_R9 + 0x28);
  scale_y = *(float *)(in_R9 + 0x2c);
  scale_z = *(float *)(in_R9 + 0x10);
  scale_w = *(float *)(in_R9 + 0x14);
  distance_x = *(float *)(in_R9 + 0x18);
  distance_y = *(float *)(in_R9 + 0x1c);
  param4_float = *(float *)(unaff_RBX + 0x68);
  param1_float = *(float *)(unaff_RBX + 0x69);
  param2_float = *(float *)(unaff_RBX + 0x6a);
  
  // 执行顶点变换
  *(float *)(unaff_RBP + -0x21) = (float)param_3 * scale_z + (float)param_1 + (float)param_2 * transform_z;
  *(float *)(unaff_RBP + -0x1d) =
       (float)((ulonglong)param_3 >> 0x20) * scale_w + (float)((ulonglong)param_1 >> 0x20) +
       (float)((ulonglong)param_2 >> 0x20) * transform_w;
  *(float *)(unaff_RBP + -0x19) = in_XMM2_Dc * distance_x + in_XMM0_Dc + in_XMM1_Dc * scale_x;
  *(float *)(unaff_RBP + -0x15) = in_XMM2_Dd * distance_y + in_XMM0_Dd + in_XMM1_Dd * scale_y;
  transform_backup3 = *(float *)((longlong)unaff_RBX + 0x354);
  transform_backup1 = *(float *)(unaff_RBX + 0x6b);
  *(float *)(unaff_RBP + -0x11) = (float)param_4 * scale_z + param4_float * in_XMM5_Da + param1_float * transform_z;
  *(float *)(unaff_RBP + -0xd) =
       (float)((ulonglong)param_4 >> 0x20) * scale_w + param4_float * in_XMM5_Db + param1_float * transform_w;
  *(float *)(unaff_RBP + -9) = in_XMM3_Dc * distance_x + param4_float * in_XMM5_Dc + param1_float * scale_x;
  *(float *)(unaff_RBP + -5) = in_XMM3_Dd * distance_y + param4_float * in_XMM5_Dd + param1_float * scale_y;
  param4_float = *(float *)((longlong)unaff_RBX + 0x364);
  param1_float = *(float *)(unaff_RBX + 0x6c);
  transform_backup2 = *(float *)(unaff_RBX + 0x6d);
  *(float *)(unaff_RBP + -1) = transform_backup3 * scale_z + param2_float * in_XMM5_Da + transform_backup1 * transform_z;
  *(float *)(unaff_RBP + 3) = transform_backup3 * scale_w + param2_float * in_XMM5_Db + transform_backup1 * transform_w;
  *(float *)(unaff_RBP + 7) = transform_backup3 * distance_x + param2_float * in_XMM5_Dc + transform_backup1 * scale_x;
  *(float *)(unaff_RBP + 0xb) = transform_backup3 * distance_y + param2_float * in_XMM5_Dd + transform_backup1 * scale_y;
  param2_float = *(float *)(in_R9 + 0x34);
  transform_backup3 = *(float *)(in_R9 + 0x38);
  transform_backup1 = *(float *)(in_R9 + 0x3c);
  *(float *)(unaff_RBP + 0xf) =
       param4_float * scale_z + param1_float * in_XMM5_Da + transform_backup2 * transform_z + *(float *)(in_R9 + 0x30);
  *(float *)(unaff_RBP + 0x13) = param4_float * scale_w + param1_float * in_XMM5_Db + transform_backup2 * transform_w + param2_float;
  *(float *)(unaff_RBP + 0x17) = param4_float * distance_x + param1_float * in_XMM5_Dc + transform_backup2 * scale_x + transform_backup3;
  *(float *)(unaff_RBP + 0x1b) = param4_float * distance_y + param1_float * in_XMM5_Dd + transform_backup2 * scale_y + transform_backup1;
  
  // 距离剔除检测
  if ((in_RAX != 0) && (param4_float = *(float *)(unaff_RBX + 0xd), param4_float != 3.4028235e+38)) {
    if ((void *)*unaff_RBX == &UNK_180a169b8) {
      current_bone = (longlong)unaff_RBX + 0x214;
    }
    else {
      current_bone = (**(code **)((void *)*unaff_RBX + 0x198))();
      param4_float = *(float *)(unaff_RBX + 0xd);
      in_RAX = *(ulonglong *)(unaff_RSI + 0x28);
    }
    transform_backup3 = *(float *)(in_RAX + 0x124) - *(float *)(unaff_RBP + 0x13);
    param2_float = *(float *)(in_RAX + 0x120) - *(float *)(unaff_RBP + 0xf);
    param1_float = *(float *)(in_RAX + 0x128) - *(float *)(unaff_RBP + 0x17);
    if (param4_float * param4_float <
        (transform_backup3 * transform_backup3 + param2_float * param2_float + param1_float * param1_float) -
        *(float *)(current_bone + 0x30) * *(float *)(current_bone + 0x30)) {
      return in_RAX & 0xffffffffffffff00;
    }
  }
  
  // 遍历骨骼进行可见性检测
  bone_count = (int)((longlong)(unaff_RBX[8] - unaff_RBX[7]) >> 4);
  current_bone = (longlong)bone_count;
  if (bone_count < 1) {
    result = (ulonglong)unaff_R14B;
  }
  else {
    do {
      bone_ref = *(longlong *)(unaff_RDI + unaff_RBX[7]);
      if ((bone_ref != 0) && ((*(uint *)(unaff_RDI + 8 + unaff_RBX[7]) & unaff_R13D) != 0)) {
        if (((*(byte *)(unaff_RSI + 0x1bd8) & 0x20) != 0) &&
           ((*(uint *)(bone_ref + 0x100) & 0x400000) != 0)) {
          *(int32_t *)(unaff_RBX + 0x65) = *(int32_t *)(_DAT_180c86870 + 0x224);
        }
        visibility_result = FUN_180077750();
        unaff_R14B = unaff_R14B & visibility_result;
      }
      unaff_RDI = unaff_RDI + 0x10;
      current_bone = current_bone + -1;
    } while (current_bone != 0);
    result = (ulonglong)unaff_R14B;
  }
  return result;
}



// 函数: 处理骨骼可见性检测（简化版）
// 原始函数名: ulonglong FUN_18027613a(void)
ulonglong process_bone_visibility_simple(void)

{
  longlong bone_ref;
  byte bone_visibility;
  int bone_count;
  ulonglong visibility_mask;
  ulonglong result;
  uint64_t *render_object;
  longlong transform_data;
  longlong bone_data;
  longlong bone_start;
  uint bone_flags;
  byte bone_visible;
  longlong current_bone;
  float distance_x;
  float distance_y;
  float distance_z;
  
  // 获取视距参数
  distance_z = *(float *)(unaff_RBX + 0xd);
  if (distance_z != 3.4028235e+38) {
    if ((void *)*unaff_RBX == &UNK_180a169b8) {
      current_bone = (longlong)unaff_RBX + 0x214;
    }
    else {
      current_bone = (**(code **)((void *)*unaff_RBX + 0x198))();
      distance_z = *(float *)(unaff_RBX + 0xd);
      in_RAX = *(ulonglong *)(unaff_RSI + 0x28);
    }
    distance_y = *(float *)(in_RAX + 0x124) - *(float *)(unaff_RBP + 0x13);
    distance_x = *(float *)(in_RAX + 0x120) - *(float *)(unaff_RBP + 0xf);
    distance_z = *(float *)(in_RAX + 0x128) - *(float *)(unaff_RBP + 0x17);
    if (distance_z * distance_z <
        (distance_y * distance_y + distance_x * distance_x + distance_z * distance_z) -
        *(float *)(current_bone + 0x30) * *(float *)(current_bone + 0x30)) {
      return in_RAX & 0xffffffffffffff00;
    }
  }
  
  // 遍历骨骼进行可见性检测
  bone_count = (int)((longlong)(unaff_RBX[8] - unaff_RBX[7]) >> 4);
  current_bone = (longlong)bone_count;
  if (bone_count < 1) {
    result = (ulonglong)unaff_R14B;
  }
  else {
    do {
      bone_ref = *(longlong *)(unaff_RDI + unaff_RBX[7]);
      if ((bone_ref != 0) && ((*(uint *)(unaff_RDI + 8 + unaff_RBX[7]) & unaff_R13D) != 0)) {
        if (((*(byte *)(unaff_RSI + 0x1bd8) & 0x20) != 0) &&
           ((*(uint *)(bone_ref + 0x100) & 0x400000) != 0)) {
          *(int32_t *)(unaff_RBX + 0x65) = *(int32_t *)(_DAT_180c86870 + 0x224);
        }
        bone_visibility = FUN_180077750();
        unaff_R14B = unaff_R14B & bone_visibility;
      }
      unaff_RDI = unaff_RDI + 0x10;
      current_bone = current_bone + -1;
    } while (current_bone != 0);
    result = (ulonglong)unaff_R14B;
  }
  return result;
}



// 函数: 处理骨骼数组可见性检测
// 原始函数名: byte FUN_1802762d8(void)
byte process_bone_array_visibility(void)

{
  longlong bone_ref;
  byte bone_visibility;
  int bone_count;
  longlong unaff_RBX;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong current_bone;
  uint bone_flags;
  byte bone_visible;
  
  current_bone = (longlong)in_EAX;
  if (0 < in_EAX) {
    do {
      bone_ref = *(longlong *)(unaff_RDI + *(longlong *)(unaff_RBX + 0x38));
      if ((bone_ref != 0) &&
         ((*(uint *)(unaff_RDI + 8 + *(longlong *)(unaff_RBX + 0x38)) & unaff_R13D) != 0)) {
        if (((*(byte *)(unaff_RSI + 0x1bd8) & 0x20) != 0) &&
           ((*(uint *)(bone_ref + 0x100) & 0x400000) != 0)) {
          *(int32_t *)(unaff_RBX + 0x328) = *(int32_t *)(_DAT_180c86870 + 0x224);
        }
        if ((*(byte *)(bone_ref + 0x100) & 0x20) == 0) {
          bone_visibility = FUN_180077750();
          bone_visible = bone_visible & bone_visibility;
        }
        else {
          FUN_180075630();
        }
      }
      unaff_RDI = unaff_RDI + 0x10;
      current_bone = current_bone + -1;
    } while (current_bone != 0);
  }
  return bone_visible;
}



// 函数: 获取可见性标志
// 原始函数名: int8_t FUN_180276370(void)
int8_t get_visibility_flag(void)

{
  int8_t visibility_flag;
  
  return visibility_flag;
}



// 函数: 更新渲染对象距离数据
// 原始函数名: ulonglong FUN_1802763d0(longlong param_1,longlong param_2,int param_3,uint64_t *param_4)
ulonglong update_render_object_distance(longlong render_context, longlong distance_data, int param_3, uint64_t *transform_data)

{
  float max_view_distance;
  float object_distance;
  ulonglong result;
  longlong bone_count;
  int bone_index;
  longlong bone_array_start;
  ulonglong bone_array_length;
  uint64_t stack_transform[9];
  
  // 检查是否有有效的距离数据
  if (*(int *)(render_context + 0x58) != 0) {
    if (*(char *)(render_context + 800) == '\0') {
      FUN_180285cf0(stack_transform, transform_data, render_context + 0x330);
    }
    else {
      stack_transform[0] = *transform_data;
      stack_transform[1] = transform_data[1];
      stack_transform[2] = transform_data[2];
      stack_transform[3] = transform_data[3];
      stack_transform[4] = transform_data[4];
      stack_transform[5] = transform_data[5];
      stack_transform[6] = transform_data[6];
      stack_transform[7] = transform_data[7];
    }
    
    // 获取最大视距
    max_view_distance = *(float *)(render_context + 0x68);
    bone_count = (longlong)param_3 * 0xbc + *(longlong *)(distance_data + 0x98);
    object_distance = 3.4028235e+38;
    
    // 计算对象距离
    if (max_view_distance != 3.4028235e+38) {
      object_distance = *(float *)(bone_count + 0xb8);
      object_distance = max_view_distance * max_view_distance;
      if (max_view_distance * max_view_distance <= object_distance) {
        object_distance = object_distance;
      }
    }
    *(float *)(bone_count + 0xb8) = object_distance;
    
    // 遍历骨骼数组更新距离数据
    bone_index = 0;
    bone_array_start = *(longlong *)(render_context + 0x38);
    result = *(longlong *)(render_context + 0x40) - bone_array_start >> 4;
    if (result != 0) {
      bone_count = 0;
      do {
        if (*(longlong *)(bone_count + bone_array_start) != 0) {
          FUN_180077f20(*(longlong *)(bone_count + bone_array_start), distance_data, param_3, stack_transform,
                        *(int32_t *)(bone_count + 8 + bone_array_start), *(int32_t *)(render_context + 0x58));
        }
        bone_array_start = *(longlong *)(render_context + 0x38);
        bone_index = bone_index + 1;
        bone_count = bone_count + 0x10;
        result = (ulonglong)bone_index;
      } while (result < (ulonglong)(*(longlong *)(render_context + 0x40) - bone_array_start >> 4));
    }
    return CONCAT71((int7)(result >> 8), 1);
  }
  return in_RAX & 0xffffffffffffff00;
}



// 函数: 批量处理渲染对象
// 原始函数名: uint64_t FUN_18027649f(uint64_t param_1,longlong param_2)
uint64_t batch_process_render_objects(uint64_t param_1, longlong param_2)

{
  longlong render_context;
  uint object_index;
  ulonglong processed_count;
  int32_t render_flags;
  
  render_context = unaff_RBX;
  object_index = unaff_ESI;
  processed_count = (ulonglong)object_index;
  do {
    if (*(longlong *)(processed_count + param_2) != 0) {
      render_flags = *(int32_t *)(render_context + 0x58);
      FUN_180077f20();
    }
    param_2 = *(longlong *)(render_context + 0x38);
    object_index = object_index + 1;
    processed_count = processed_count + 0x10;
  } while ((ulonglong)(longlong)(int)object_index <
           (ulonglong)(*(longlong *)(render_context + 0x40) - param_2 >> 4));
  return CONCAT71((int7)(int3)(object_index >> 8), 1);
}



// 函数: 检查渲染状态
// 原始函数名: int8_t FUN_1802764fd(void)
int8_t check_render_status(void)

{
  return 1;
}



// 函数: 应用渲染属性到所有骨骼
// 原始函数名: void FUN_180276610(longlong param_1,int32_t param_2)
void apply_render_properties_to_bones(longlong render_object, int32_t render_properties)

{
  longlong *bone_ref;
  longlong *bone_manager;
  ulonglong bone_index;
  uint property_index;
  ulonglong property_count;
  longlong *current_bone;
  longlong *temp_bone_ref1;
  int8_t bone_data[8];
  longlong *temp_bone_ref2;
  int32_t property_data;
  longlong *temp_bone_ref3;
  int16_t bone_flags;
  char bone_modified;
  
  current_bone = *(longlong **)(render_object + 0x38);
  if (current_bone < *(longlong **)(render_object + 0x40)) {
    do {
      bone_ref = (longlong *)*current_bone;
      if (bone_ref != (longlong *)0x0) {
        (**(code **)(*bone_ref + 0x28))(bone_ref);
      }
      temp_bone_ref3 = (longlong *)0x0;
      temp_bone_ref2 = (longlong *)0x0;
      bone_data[0] = 0;
      if (bone_ref != (longlong *)0x0) {
        (**(code **)(*bone_ref + 0x28))(bone_ref);
      }
      property_data = 0;
      temp_bone_ref2 = bone_ref;
      FUN_18007f4c0(bone_data);
      bone_manager = temp_bone_ref3;
      bone_flags = 0;
      bone_modified = '\0';
      if (bone_ref != (longlong *)0x0) {
        (**(code **)(*bone_ref + 0x38))(bone_ref);
      }
      bone_index = 0;
      property_count = 0;
      if (0 < (int)temp_bone_ref3[0xc]) {
        do {
          *(int32_t *)(temp_bone_ref3[0xd] + 0x54 + bone_index) = render_properties;
          property_index = (int)property_count + 1;
          bone_index = bone_index + 0x5c;
          property_count = (ulonglong)property_index;
        } while ((int)property_index < (int)temp_bone_ref3[0xc]);
      }
      bone_flags = CONCAT11(bone_flags._1_1_, 1);
      if ((bone_ref != (longlong *)0x0) && (temp_bone_ref3 != (longlong *)0x0)) {
        if (bone_modified != '\0') {
          FUN_180075b70();
        }
        FUN_18007f6a0(bone_data);
        if ((char)bone_flags != '\0') {
          FUN_180079520(bone_ref);
        }
        if (bone_flags._1_1_ != '\0') {
          FUN_180079520(bone_ref);
        }
        temp_bone_ref3 = (longlong *)0x0;
        if (temp_bone_ref3 != (longlong *)0x0) {
          (**(code **)(*temp_bone_ref3 + 0x38))();
        }
      }
      FUN_18007f6a0(bone_data);
      if (temp_bone_ref2 != (longlong *)0x0) {
        (**(code **)(*temp_bone_ref2 + 0x38))();
      }
      if (temp_bone_ref3 != (longlong *)0x0) {
        (**(code **)(*temp_bone_ref3 + 0x38))();
      }
      if (bone_ref != (longlong *)0x0) {
        (**(code **)(*bone_ref + 0x38))();
      }
      current_bone = current_bone + 2;
    } while (current_bone < *(longlong **)(render_object + 0x40));
  }
  return;
}