#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part264.c - 核心引擎模块第264部分
// 包含7个函数，主要处理引擎变换矩阵、资源管理和初始化

// 函数: 触发引擎崩溃
void trigger_engine_crash(void)

{
  ulonglong stack_protection;
  
                    // WARNING: 此函数不会返回
  // 调用崩溃处理函数，传入栈保护参数
  crash_handler(stack_protection ^ (ulonglong)&stack0x00000000);
}



// 函数: 计算变换矩阵
float * calculate_transformation_matrix(longlong context_ptr,float *result_matrix,int bone_index,longlong skeleton_ptr)

{
  float *bone_matrix;
  uint64_t *temp_ptr;
  ulonglong bone_mask;
  float x1, y1, z1, w1;
  float x2, y2, z2, w2;
  float x3, y3, z3, w3;
  float x4, y4, z4, w4;
  uint64_t temp_value;
  int current_index;
  char parent_index;
  int target_index;
  char current_bone;
  longlong bone_offset;
  float result_x, result_y, result_z, result_w;
  float temp_x, temp_y, temp_z, temp_w;
  
  bone_mask = *(ulonglong *)(context_ptr + 0x800);
  bone_offset = (longlong)(char)bone_index;
  if (((*(ulonglong *)(context_ptr + 0x810) & bone_mask) != 0) &&
     ((*(ulonglong *)(bone_offset * 0x1b0 + 0xe0 + *(longlong *)(skeleton_ptr + 0x140)) & bone_mask) != 0)) {
    target_index = -1;
    do {
      current_bone = (char)bone_index;
      parent_index = *(char *)((longlong)current_bone + 0x100 + skeleton_ptr);
      bone_index = (int)parent_index;
      current_index = bone_index;
      if ((*(ulonglong *)((longlong)current_bone * 0x1b0 + 0xe0 + *(longlong *)(skeleton_ptr + 0x140)) & bone_mask)
          == 0) {
        current_index = target_index;
      }
      target_index = current_index;
    } while (-1 < parent_index);
    bone_matrix = (float *)(context_ptr + (bone_offset + 0x82) * 0x10);
    result_w = *bone_matrix;
    result_z = bone_matrix[1];
    result_x = bone_matrix[2];
    result_y = bone_matrix[3];
    parent_index = *(char *)(bone_offset + 0x100 + skeleton_ptr);
    if (-1 < parent_index) {
      while (parent_index != target_index) {
        bone_offset = (longlong)parent_index;
        parent_index = *(char *)(bone_offset + 0x100 + skeleton_ptr);
        bone_matrix = (float *)(context_ptr + (bone_offset + 0x82) * 0x10);
        x1 = *bone_matrix;
        y1 = bone_matrix[1];
        z1 = bone_matrix[2];
        w1 = bone_matrix[3];
        z4 = w1 * result_z;
        x4 = y1 * result_x;
        y4 = w1 * result_y;
        z3 = z1 * result_x;
        y3 = z1 * result_z;
        x3 = y1 * result_z;
        result_z = z1 * result_y * 1.0 + x1 * result_z * 1.0 + (result_w * y1 - w1 * result_x);
        result_x = z4 * 1.0 + x1 * result_x * 1.0 + (result_w * z1 - y1 * result_y);
        result_y = x4 * 1.0 + x1 * result_y * 1.0 + (result_w * w1 - y3);
        result_w = y4 * -1.0 + z3 * -1.0 + (result_w * x1 - x3);
        if (parent_index < '\0') {
          *result_matrix = result_w;
          result_matrix[1] = result_z;
          result_matrix[2] = result_x;
          result_matrix[3] = result_y;
          return result_matrix;
        }
      }
      if ((-1 < parent_index) && (parent_index == target_index)) {
        bone_matrix = (float *)(context_ptr + (longlong)parent_index * 0x10);
        x1 = *bone_matrix;
        y1 = bone_matrix[1];
        z1 = bone_matrix[2];
        w1 = bone_matrix[3];
        result_z = z1 * result_y * 1.0 + x1 * result_z * 1.0 + (result_w * y1 - w1 * result_x);
        result_x = w1 * result_z * 1.0 + x1 * result_x * 1.0 + (result_w * z1 - y1 * result_y);
        result_y = y1 * result_x * 1.0 + x1 * result_y * 1.0 + (result_w * w1 - z1 * result_z);
        result_w = w1 * result_y * -1.0 + z1 * result_x * -1.0 + (result_w * x1 - y1 * result_z);
      }
    }
    *result_matrix = result_w;
    result_matrix[1] = result_z;
    result_matrix[2] = result_x;
    result_matrix[3] = result_y;
    return result_matrix;
  }
  temp_ptr = (uint64_t *)(context_ptr + bone_offset * 0x10);
  temp_value = temp_ptr[1];
  *(uint64_t *)result_matrix = *temp_ptr;
  *(uint64_t *)(result_matrix + 2) = temp_value;
  return result_matrix;
}



// 函数: 设置骨骼变换
void set_bone_transformation(uint64_t *context,char bone_index,float *transform_matrix,longlong skeleton_ptr)

{
  float x1, y1, z1, w1;
  float x2, y2, z2, w2;
  float x3, y3, z3, w3;
  float x4, y4, z4, w4;
  uint64_t temp_value;
  float *bone_matrix;
  longlong bone_offset;
  ulonglong bone_index_ulong;
  
  bone_index_ulong = (ulonglong)bone_index;
  bone_offset = bone_index_ulong * 0x1b0 + *(longlong *)(skeleton_ptr + 0x140);
  context[0x100] = context[0x100] | *(ulonglong *)(bone_offset + 0xe8);
  if (bone_index == '\0') {
    temp_value = *(uint64_t *)(transform_matrix + 2);
    context[0x104] = *(uint64_t *)transform_matrix;
    context[0x105] = temp_value;
    temp_value = *(uint64_t *)(transform_matrix + 2);
    *context = *(uint64_t *)transform_matrix;
    context[1] = temp_value;
    context[0x100] = context[0x100] & 0xfffffffffffffffe;
  }
  else {
    bone_matrix = (float *)get_bone_matrix_ptr(context,*(int8_t *)(bone_offset + 0xf0),skeleton_ptr);
    x1 = *transform_matrix;
    y1 = transform_matrix[1];
    z1 = transform_matrix[2];
    w1 = transform_matrix[3];
    x2 = *bone_matrix;
    y2 = bone_matrix[1];
    z2 = bone_matrix[2];
    w2 = bone_matrix[3];
    bone_matrix = (float *)(context + (bone_index_ulong + 0x82) * 2);
    *bone_matrix = w2 * w1 * 1.0 + x1 * x2 * 1.0 + z2 * z1 + y2 * y1;
    bone_matrix[1] = z2 * w1 * -1.0 + x1 * y2 * -1.0 + x2 * y1 + w2 * z1;
    bone_matrix[2] = w2 * y1 * -1.0 + x1 * z2 * -1.0 + x2 * z1 + y2 * w1;
    bone_matrix[3] = y2 * z1 * -1.0 + x1 * w2 * -1.0 + x2 * w1 + z2 * y1;
    temp_value = *(uint64_t *)(transform_matrix + 2);
    context[bone_index_ulong * 2] = *(uint64_t *)transform_matrix;
    (context + bone_index_ulong * 2)[1] = temp_value;
  }
  context[0x101] = context[0x101] | 1L << (bone_index_ulong & 0x3f);
  return;
}



// 函数: 初始化字符串资源
uint64_t *
initialize_string_resource(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  *param_2 = &STRING_TABLE_18098bcb0;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &STRING_HANDLE_1809fcc28;
  param_2[1] = param_2 + 3;
  *(int8_t *)(param_2 + 3) = 0;
  *(int32_t *)(param_2 + 2) = 0xb;
  strcpy_s(param_2[1],0x80,&DEFAULT_STRING_180a13a98,param_4,0,0xfffffffffffffffe);
  return param_2;
}



// 函数: 初始化引擎核心数据结构
uint64_t * initialize_engine_core_data(uint64_t *engine_context)

{
  longlong *resource_ptr;
  uint64_t *data_ptr;
  longlong *system_ptr;
  longlong resource_count;
  longlong system_count;
  longlong *resource_array;
  uint64_t *status_ptr;
  
  *engine_context = &RESOURCE_TABLE_180a21690;
  *engine_context = &SYSTEM_TABLE_180a21720;
  *(int32_t *)(engine_context + 1) = 0;
  *engine_context = &MEMORY_POOL_180a02e68;
  engine_context[2] = &STRING_TABLE_18098bcb0;
  engine_context[3] = 0;
  *(int32_t *)(engine_context + 4) = 0;
  engine_context[2] = &STRING_HANDLE_1809fcc28;
  engine_context[3] = engine_context + 5;
  *(int32_t *)(engine_context + 4) = 0;
  *(int8_t *)(engine_context + 5) = 0;
  *(int8_t *)((longlong)engine_context + 0xb2) = 0;
  *(int32_t *)(engine_context + 1) = 0;
  *(int16_t *)(engine_context + 0x16) = 0;
  engine_context[0x15] = 0;
  *engine_context = &RESOURCE_HANDLE_180a13cc0;
  system_ptr = engine_context + 0x17;
  resource_count = 0x10;
  initialize_resource_pool(system_ptr,8,0x10,&SUB_18005d5f0,FUN_180045af0);
  data_ptr = engine_context + 0x29;
  resource_ptr = engine_context + 0x2c;
  initialize_resource_pool(resource_ptr,0x38,2,FUN_180046480,FUN_180044a30);
  status_ptr = engine_context + 0x2b;
  system_count = 2;
  resource_array = resource_ptr;
  do {
    *(int8_t *)status_ptr = 0;
    *data_ptr = 0xffffffffffffffff;
    (**(code **)(*resource_array + 0x10))(resource_ptr,&DEFAULT_RESOURCE_18098bc73);
    resource_ptr = resource_ptr + 7;
    status_ptr = (uint64_t *)((longlong)status_ptr + 1);
    data_ptr = data_ptr + 1;
    resource_array = resource_array + 7;
    system_count = system_count + -1;
  } while (system_count != 0);
  engine_context[0x3c] = 0;
  initialize_mutex(engine_context + 0x3d,2);
  engine_context[0x47] = 0;
  engine_context[0x48] = 0;
  engine_context[0x49] = 0;
  *(int32_t *)(engine_context + 0x4a) = 3;
  engine_context[0x5a] = &STRING_TABLE_18098bcb0;
  engine_context[0x5b] = 0;
  *(int32_t *)(engine_context + 0x5c) = 0;
  engine_context[0x5a] = &STRING_HANDLE_1809fcc28;
  engine_context[0x5b] = engine_context + 0x5d;
  *(int32_t *)(engine_context + 0x5c) = 0;
  *(int8_t *)(engine_context + 0x5d) = 0;
  engine_context[0x6d] = 0;
  engine_context[0x6e] = 0;
  engine_context[0x6f] = 0;
  *(int32_t *)(engine_context + 0x70) = 0x11;
  status_ptr = engine_context + 0x7b;
  resource_ptr = engine_context + 0x7c;
  initialize_resource_pool(resource_ptr,8,0x10,&SUB_18005d5f0,FUN_180045af0);
  system_count = 5;
  do {
    resource_array = (longlong *)*resource_ptr;
    *resource_ptr = 0;
    if (resource_array != (longlong *)0x0) {
      (**(code **)(*resource_array + 0x38))();
    }
    resource_ptr = resource_ptr + 1;
    system_count = system_count + -1;
  } while (system_count != 0);
  *(int8_t *)status_ptr = 0;
  cleanup_resource(status_ptr);
  engine_context[0x79] = 0;
  engine_context[0x7a] = 0;
  cleanup_resource(status_ptr);
  engine_context[0x3a] = 0xffffffffffffffff;
  *(int8_t *)(engine_context + 0x3b) = 0;
  *(int32_t *)(engine_context + 0x27) = 0;
  do {
    resource_ptr = (longlong *)*system_ptr;
    *system_ptr = 0;
    if (resource_ptr != (longlong *)0x0) {
      (**(code **)(*resource_ptr + 0x38))();
    }
    system_ptr = system_ptr + 1;
    resource_count = resource_count + -1;
  } while (resource_count != 0);
  resource_ptr = (longlong *)engine_context[0x3c];
  engine_context[0x3c] = 0;
  if (resource_ptr != (longlong *)0x0) {
    (**(code **)(*resource_ptr + 0x38))();
  }
  engine_context[0x72] = 0;
  engine_context[0x73] = 0;
  engine_context[0x74] = 0;
  engine_context[0x75] = 0;
  engine_context[0x76] = 0;
  engine_context[0x77] = 0;
  *(int8_t *)((longlong)engine_context + 0x1d9) = 0;
  engine_context[0x28] = 0;
  initialize_render_system(engine_context + 0x6d);
  *(int32_t *)((longlong)engine_context + 0x25c) = 0x3f800000;
  *(int32_t *)(engine_context + 0x4c) = 0x3f266666;
  *(int32_t *)((longlong)engine_context + 0x264) = 0x3f800000;
  engine_context[0x4d] = 0x3f800000;
  *(int32_t *)(engine_context + 0x50) = 0x3f800000;
  *(int32_t *)(engine_context + 0x4f) = 0;
  *(int32_t *)((longlong)engine_context + 0x27c) = 0x3f000000;
  *(int32_t *)((longlong)engine_context + 0x284) = 0x3f800000;
  *(int32_t *)(engine_context + 0x4b) = 0;
  *(int32_t *)(engine_context + 0x4e) = 0x3f800000;
  *(int32_t *)((longlong)engine_context + 0x274) = 0x3f800000;
  *(int8_t *)((longlong)engine_context + 0x13c) = 0;
  engine_context[0x51] = 0;
  engine_context[0x52] = 0;
  engine_context[0x53] = 0;
  engine_context[0x54] = 0;
  engine_context[0x55] = 0x3f8000003f800000;
  engine_context[0x56] = 0x3f8000003f800000;
  engine_context[0x57] = 0x3f8000003f800000;
  engine_context[0x58] = 0x3f8000003f800000;
  *(int32_t *)(engine_context + 0x59) = 0;
  *(int32_t *)(engine_context + 0x71) = 0;
  *(int8_t *)((longlong)engine_context + 0x38c) = 9;
  *(int16_t *)(engine_context + 0x78) = 0xffff;
  return engine_context;
}



// 函数: 释放引擎资源
uint64_t release_engine_resources(uint64_t engine_ptr,ulonglong flags)

{
  cleanup_engine_internal();
  if ((flags & 1) != 0) {
    free(engine_ptr,0x470);
  }
  return engine_ptr;
}



// 函数: 清理资源池
void cleanup_resource_pool(longlong resource_ptr)

{
  cleanup_memory_pool(resource_ptr + 0x18,0x38,2,FUN_180044a30,0xfffffffffffffffe);
  return;
}



// 函数: 清理内存池
void cleanup_memory_pool(longlong memory_ptr)

{
  cleanup_memory_pool(memory_ptr + 8,8,0x10,FUN_180045af0,0xfffffffffffffffe);
  return;
}



// 函数: 清理引擎内部资源
void cleanup_engine_internal(uint64_t *engine_context)

{
  longlong *resource_ptr;
  longlong *system_ptr;
  longlong resource_count;
  uint64_t cleanup_flag;
  
  cleanup_flag = 0xfffffffffffffffe;
  *engine_context = &RESOURCE_HANDLE_180a13cc0;
  system_ptr = engine_context + 0x17;
  resource_count = 0x10;
  do {
    resource_ptr = (longlong *)*system_ptr;
    *system_ptr = 0;
    if (resource_ptr != (longlong *)0x0) {
      (**(code **)(*resource_ptr + 0x38))();
    }
    system_ptr = system_ptr + 1;
    resource_count = resource_count + -1;
  } while (resource_count != 0);
  system_ptr = (longlong *)engine_context[0x3c];
  engine_context[0x3c] = 0;
  if (system_ptr != (longlong *)0x0) {
    (**(code **)(*system_ptr + 0x38))();
  }
  cleanup_memory_pool(engine_context + 0x7c,8,0x10,FUN_180045af0,cleanup_flag);
  cleanup_global_resources();
  engine_context[0x5a] = &STRING_TABLE_18098bcb0;
  if (engine_context[0x47] != 0) {
                    // WARNING: 此函数不会返回
    trigger_critical_error();
  }
  destroy_mutex();
  if ((longlong *)engine_context[0x3c] != (longlong *)0x0) {
    (**(code **)(*(longlong *)engine_context[0x3c] + 0x38))();
  }
  cleanup_memory_pool(engine_context + 0x2c,0x38,2,FUN_180044a30);
  cleanup_memory_pool(engine_context + 0x17,8,0x10,FUN_180045af0);
  *engine_context = &MEMORY_POOL_180a02e68;
  engine_context[2] = &STRING_TABLE_18098bcb0;
  *engine_context = &SYSTEM_TABLE_180a21720;
  *engine_context = &RESOURCE_TABLE_180a21690;
  return;
}



uint64_t get_resource_handler(longlong base_ptr,int resource_index)

{
  longlong resource_ptr;
  
  base_ptr = base_ptr + (longlong)resource_index * 8;
  resource_ptr = *(longlong *)(base_ptr + 0x3c8);
  if (resource_ptr != 0) {
    (**(code **)(**(longlong **)(resource_ptr + 0x20) + 0x80))(*(longlong **)(resource_ptr + 0x20),resource_ptr,0);
    return *(uint64_t *)(base_ptr + 0x3c8);
  }
  return DEFAULT_HANDLER_180d49658;
}



// WARNING: 全局变量以下划线开头可能与较小符号重叠地址



// 函数: 初始化骨骼系统
void initialize_skeleton_system(longlong skeleton_context)

{
  int32_t *texture_ptr;
  longlong bone_offset;
  int texture_count;
  uint64_t texture_data;
  longlong *resource_ptr;
  uint64_t *data_ptr;
  longlong bone_index;
  uint64_t *texture_table;
  uint64_t *texture_entry;
  uint64_t *next_texture;
  uint texture_flags;
  longlong *texture_array;
  int8_t stack_buffer_d8 [32];
  int8_t *stack_ptr_b8;
  longlong stack_value_a8;
  int stack_value_a0;
  uint stack_flags_9c;
  longlong *stack_ptr_98;
  longlong *stack_ptr_90;
  longlong stack_value_88;
  int8_t stack_buffer_80 [16];
  code *callback_70;
  code *guard_check;
  uint64_t stack_value_60;
  int8_t stack_buffer_58 [16];
  int32_t stack_value_48;
  int32_t stack_value_44;
  int32_t stack_value_40;
  int32_t stack_value_3c;
  longlong *stack_ptr_38;
  ulonglong stack_protection_30;
  
  stack_value_60 = 0xfffffffffffffffe;
  stack_protection_30 = GLOBAL_PROTECTION_180bf00a8 ^ (ulonglong)stack_buffer_d8;
  stack_flags_9c = 0;
  texture_count = *(int *)(GLOBAL_TEXTURE_TABLE_180c86870 + 0x224);
  *(int8_t *)(skeleton_context + 0x460) = 1;
  texture_flags = 0;
  do {
    texture_flags = texture_flags + 8;
  } while (texture_flags < 0x10);
  texture_array = (longlong *)(skeleton_context + 0x3e0);
  stack_value_a8 = 0x10;
  stack_value_a0 = texture_count;
  stack_value_88 = skeleton_context;
  do {
    bone_offset = texture_array[-0x65];
    bone_index = stack_value_a8;
    if (bone_offset != 0) {
      if ((*texture_array == 0) && (bone_index = *(longlong *)(bone_offset + 0xa8), bone_index != 0)) {
        texture_ptr = (int32_t *)(bone_index + 0xc);
        data_ptr = (uint64_t *)(GLOBAL_TEXTURE_MANAGER_180c8a9d0 + 0x1f8);
        texture_table = data_ptr;
        next_texture = *(uint64_t **)(GLOBAL_TEXTURE_MANAGER_180c8a9d0 + 0x208);
        if (*(uint64_t **)(GLOBAL_TEXTURE_MANAGER_180c8a9d0 + 0x208) == (uint64_t *)0x0) {
LAB_18022bda0:
          texture_table = data_ptr;
        }
        else {
          do {
            texture_count = memcmp(next_texture + 4,texture_ptr,0x10);
            if (texture_count < 0) {
              texture_entry = (uint64_t *)*next_texture;
            }
            else {
              texture_entry = (uint64_t *)next_texture[1];
              texture_table = next_texture;
            }
            next_texture = texture_entry;
          } while (texture_entry != (uint64_t *)0x0);
          if ((texture_table == data_ptr) || (texture_count = memcmp(texture_ptr,texture_table + 4,0x10), texture_count < 0))
          goto LAB_18022bda0;
        }
        if (texture_table == data_ptr) {
          texture_data = allocate_texture_resource(GLOBAL_RESOURCE_POOL_180c8ed18,0x3b0,0x10,3);
          resource_ptr = (longlong *)initialize_texture_resource(texture_data,0);
          if (resource_ptr != (longlong *)0x0) {
            stack_ptr_90 = resource_ptr;
            (**(code **)(*resource_ptr + 0x28))(resource_ptr);
          }
          stack_ptr_90 = (longlong *)*texture_array;
          *texture_array = (longlong)resource_ptr;
          if (stack_ptr_90 != (longlong *)0x0) {
            (**(code **)(*stack_ptr_90 + 0x38))();
          }
          (**(code **)(*(longlong *)(*texture_array + 0x10) + 0x10))
                    ((longlong *)(*texture_array + 0x10),&DEFAULT_TEXTURE_180a13ad0);
          *(uint64_t *)(*texture_array + 0xa8) = *(uint64_t *)(bone_offset + 0xa8);
          bone_offset = GLOBAL_TEXTURE_MANAGER_180c8a9d0;
          stack_value_48 = *texture_ptr;
          stack_value_44 = *(int32_t *)(bone_index + 0x10);
          stack_value_40 = *(int32_t *)(bone_index + 0x14);
          stack_value_3c = *(int32_t *)(bone_index + 0x18);
          stack_ptr_38 = (longlong *)*texture_array;
          if (stack_ptr_38 != (longlong *)0x0) {
            (**(code **)(*stack_ptr_38 + 0x28))();
          }
          texture_flags = stack_flags_9c;
          stack_flags_9c = stack_flags_9c | 1;
          load_texture_data(bone_offset + 0x1f8,stack_buffer_58);
          stack_flags_9c = texture_flags & 0xfffffffe;
          resource_ptr = stack_ptr_38;
        }
        else {
          resource_ptr = (longlong *)texture_table[6];
          if (resource_ptr != (longlong *)0x0) {
            stack_ptr_98 = resource_ptr;
            (**(code **)(*resource_ptr + 0x28))(resource_ptr);
          }
          stack_ptr_98 = (longlong *)*texture_array;
          *texture_array = (longlong)resource_ptr;
          resource_ptr = stack_ptr_98;
        }
        texture_count = stack_value_a0;
        if (resource_ptr != (longlong *)0x0) {
          (**(code **)(*resource_ptr + 0x38))();
          texture_count = stack_value_a0;
        }
      }
      bone_index = stack_value_a8;
      if (*texture_array != 0) {
        callback_70 = (code *)0x0;
        guard_check = _guard_check_icall;
        stack_ptr_b8 = stack_buffer_80;
        initialize_texture_system();
        if (callback_70 != (code *)0x0) {
          (*callback_70)(stack_buffer_80,0,0);
        }
        *(longlong *)(*texture_array + 0x340) = (longlong)texture_count;
      }
    }
    texture_array = texture_array + 1;
    stack_value_a8 = bone_index + -1;
    if (stack_value_a8 == 0) {
      finalize_skeleton_system(stack_value_88);
                    // WARNING: 此函数不会返回
      crash_handler(stack_protection_30 ^ (ulonglong)stack_buffer_d8);
    }
  } while( true );
}



// WARNING: 全局变量以下划线开头可能与较小符号重叠地址



// 函数: 初始化骨骼渲染系统
void initialize_bone_render_system(longlong render_context,char render_flag)

{
  byte *texture_data;
  char bone_index1;
  char bone_index2;
  int texture_id;
  longlong bone_offset;
  longlong *resource_ptr;
  uint64_t resource_data;
  uint texture_size;
  longlong *texture_ptr;
  longlong *texture_array;
  longlong *texture_entry;
  byte *texture_buffer;
  char *texture_name;
  uint64_t texture_handle;
  ulonglong bone_index_ulong;
  void *texture_info;
  int texture_format;
  longlong texture_addr;
  longlong texture_size2;
  longlong texture_pitch;
  void *texture_format_ptr;
  longlong texture_offset;
  int texture_width;
  int texture_height;
  longlong texture_data_ptr;
  ulonglong texture_flags;
  int8_t stack_buffer_2c8 [32];
  code *render_callback;
  longlong *stack_ptr_298;
  longlong *stack_ptr_290;
  longlong *stack_ptr_288;
  longlong stack_value_280;
  longlong *stack_ptr_278;
  longlong *stack_ptr_268;
  longlong *stack_ptr_260;
  longlong *stack_ptr_258;
  longlong *stack_ptr_250;
  uint stack_flags_248;
  uint64_t stack_value_240;
  void *stack_ptr_238;
  int8_t *stack_ptr_230;
  int32_t stack_value_228;
  int8_t stack_buffer_220 [72];
  void *stack_ptr_1d8;
  int8_t *stack_ptr_1d0;
  int32_t stack_value_1c8;
  int8_t stack_buffer_1c0 [72];
  void *stack_ptr_178;
  int8_t *stack_ptr_170;
  int32_t stack_value_168;
  int8_t stack_buffer_160 [72];
  void *stack_ptr_118;
  int8_t *stack_ptr_110;
  int32_t stack_value_108;
  int8_t stack_buffer_100 [72];
  int8_t *stack_ptr_array_b8 [2];
  int32_t stack_value_a8;
  int8_t stack_buffer_a0 [104];
  ulonglong stack_protection_38;
  
  stack_value_240 = 0xfffffffffffffffe;
  stack_protection_38 = GLOBAL_PROTECTION_180bf00a8 ^ (ulonglong)stack_buffer_2c8;
  stack_value_280 = render_context;
  texture_ptr = (longlong *)get_render_context_data(GLOBAL_RENDER_CONTEXT_180c86930,&stack_ptr_268,render_context + 0x2d0,0);
  texture_ptr = (longlong *)*texture_ptr;
  stack_ptr_288 = texture_ptr;
  if (stack_ptr_268 != (longlong *)0x0) {
    (**(code **)(*stack_ptr_268 + 0x38))();
  }
  if ((render_flag == '\0') || (*(longlong **)(render_context + 0x1e0) == (longlong *)0x0)) {
LAB_18022c3ff:
    if (texture_ptr != (longlong *)0x0) goto LAB_18022c460;
  }
  else if (texture_ptr != (longlong *)0x0) {
    if (*(longlong **)(render_context + 0x1e0) != texture_ptr) {
      texture_ptr = (longlong *)(render_context + 0x368);
      bone_offset = (*(longlong *)(render_context + 0x370) - *texture_ptr) / 0x58;
      stack_flags_248 = *(uint *)(render_context + 0x380);
      stack_ptr_298 = texture_ptr;
      if (bone_offset == 0) {
        texture_array = (longlong *)0x0;
      }
      else {
        texture_array = (longlong *)allocate_texture_array(GLOBAL_RESOURCE_POOL_180c8ed18,bone_offset * 0x58,stack_flags_248 & 0xff);
      }
      stack_ptr_250 = texture_array + bone_offset * 0xb;
      bone_offset = *(longlong *)(render_context + 0x370);
      texture_entry = texture_array;
      stack_ptr_278 = texture_array;
      stack_ptr_260 = texture_array;
      if (*texture_ptr != bone_offset) {
        texture_pitch = *texture_ptr - (longlong)texture_array;
        stack_ptr_258 = texture_array;
        do {
          *texture_entry = (longlong)&STRING_TABLE_18098bcb0;
          texture_entry[1] = 0;
          *(int32_t *)(texture_entry + 2) = 0;
          *texture_entry = (longlong)&STRING_HANDLE_1809fcc58;
          texture_entry[1] = (longlong)(texture_entry + 3);
          *(int32_t *)(texture_entry + 2) = 0;
          *(int8_t *)(texture_entry + 3) = 0;
          *(int32_t *)(texture_entry + 2) = *(int32_t *)((longlong)texture_entry + texture_pitch + 0x10);
          texture_format_ptr = *(void **)((longlong)texture_entry + texture_pitch + 8);
          texture_info = &DEFAULT_TEXTURE_INFO_18098bc73;
          if (texture_format_ptr != (void *)0x0) {
            texture_info = texture_format_ptr;
          }
          stack_ptr_290 = texture_entry;
          strcpy_s(texture_entry[1],0x40,texture_info);
          texture_entry = texture_entry + 0xb;
          texture_ptr = stack_ptr_298;
          render_context = stack_value_280;
        } while ((longlong)texture_entry + texture_pitch != bone_offset);
      }
      stack_ptr_290 = texture_entry;
      stack_ptr_258 = texture_entry;
      initialize_texture_system_internal(texture_ptr);
      bone_offset = (longlong)texture_entry - (longlong)texture_array >> 0x3f;
      texture_pitch = ((longlong)texture_entry - (longlong)texture_array) / 0x58 + bone_offset;
      texture_height = 0;
      if (texture_pitch != bone_offset) {
        texture_flags = 0;
        texture_array = texture_array + 2;
        do {
          texture_entry = (longlong *)get_texture_data(stack_ptr_288);
          texture_width = 0;
          texture_data_ptr = *texture_entry;
          texture_addr = (texture_entry[1] - texture_data_ptr) / 6 + (texture_entry[1] - texture_data_ptr >> 0x3f);
          texture_size2 = texture_addr >> 4;
          texture_addr = texture_addr >> 0x3f;
          if (texture_size2 != texture_addr) {
            texture_format = (int)*texture_array;
            texture_offset = 0;
            do {
              texture_id = *(int *)(texture_offset + 0x10 + texture_data_ptr);
              if (texture_format == texture_id) {
                if (texture_format != 0) {
                  texture_buffer = (byte *)texture_array[-1];
                  texture_pitch = *(longlong *)(texture_offset + 8 + texture_data_ptr) - (longlong)texture_buffer;
                  do {
                    texture_data = texture_buffer + texture_pitch;
                    texture_id = (uint)*texture_buffer - (uint)*texture_data;
                    if (texture_id != 0) break;
                    texture_buffer = texture_buffer + 1;
                  } while (*texture_data != 0);
                }
LAB_18022c20f:
                if (texture_id == 0) {
                  register_texture(texture_ptr,stack_ptr_278 + texture_flags * 0xb);
                  break;
                }
              }
              else if (texture_format == 0) goto LAB_18022c20f;
              texture_width = texture_width + 1;
              texture_offset = texture_offset + 0x60;
            } while ((ulonglong)(longlong)texture_width < (ulonglong)(texture_size2 - texture_addr));
          }
          texture_height = texture_height + 1;
          texture_array = texture_array + 0xb;
          texture_flags = (ulonglong)texture_height;
          texture_entry = stack_ptr_290;
          render_context = stack_value_280;
        } while (texture_flags < (ulonglong)(texture_pitch - bone_offset));
      }
      bone_offset = *(longlong *)(render_context + 0x1e0);
      render_callback = FUN_180045af0;
      initialize_resource_pool(stack_ptr_array_b8,8,0x10,&SUB_18005d5f0);
      texture_data_ptr = 0;
      texture_pitch = texture_data_ptr;
      do {
        texture_ptr = *(longlong **)(render_context + 0xb8 + texture_pitch * 8);
        if (texture_ptr != (longlong *)0x0) {
          stack_ptr_298 = texture_ptr;
          (**(code **)(*texture_ptr + 0x28))(texture_ptr);
        }
        stack_ptr_298 = (longlong *)stack_ptr_array_b8[texture_pitch];
        stack_ptr_array_b8[texture_pitch] = (int8_t *)texture_ptr;
        if (stack_ptr_298 != (longlong *)0x0) {
          (**(code **)(*stack_ptr_298 + 0x38))();
        }
        texture_pitch = texture_pitch + 1;
      } while (texture_pitch < 0x10);
      texture_array = (longlong *)(render_context + 0xb8);
      texture_ptr = stack_ptr_288 + 0x388;
      texture_pitch = 0x10;
      do {
        texture_height = (int)*texture_ptr;
        texture_addr = texture_data_ptr;
        texture_size2 = texture_data_ptr;
        do {
          if (((texture_height != 0) && (texture_height == *(int *)(texture_size2 + 0x1c40 + bone_offset))) && (texture_height != 0)) {
            texture_name = (char *)texture_ptr[-1];
            texture_offset = *(longlong *)(texture_size2 + 0x1c38 + bone_offset) - (longlong)texture_name;
            do {
              bone_index1 = *texture_name;
              bone_index2 = texture_name[texture_offset];
              if (bone_index1 != bone_index2) break;
              texture_name = texture_name + 1;
            } while (bone_index2 != '\0');
            if (bone_index1 == bone_index2) {
              resource_ptr = (longlong *)stack_ptr_array_b8[texture_addr];
              if (resource_ptr != (longlong *)0x0) {
                stack_ptr_298 = resource_ptr;
                (**(code **)(*resource_ptr + 0x28))(resource_ptr);
              }
              stack_ptr_298 = (longlong *)*texture_array;
              *texture_array = (longlong)resource_ptr;
              if (stack_ptr_298 != (longlong *)0x0) {
                (**(code **)(*stack_ptr_298 + 0x38))();
              }
              break;
            }
          }
          texture_addr = texture_addr + 1;
          texture_size2 = texture_size2 + 0x58;
        } while (texture_size2 < 0x580);
        texture_array = texture_array + 1;
        texture_ptr = texture_ptr + 0xb;
        texture_pitch = texture_pitch + -1;
      } while (texture_pitch != 0);
      cleanup_resource_pool(stack_ptr_array_b8,8,0x10,FUN_180045af0);
      resource_ptr = stack_ptr_278;
      texture_ptr = stack_ptr_288;
      render_context = stack_value_280;
      for (texture_array = stack_ptr_278; stack_ptr_288 = texture_ptr, stack_value_280 = render_context, texture_array != texture_entry;
          texture_array = texture_array + 0xb) {
        (**(code **)*texture_array)(texture_array,0);
        texture_ptr = stack_ptr_288;
        render_context = stack_value_280;
      }
      if (resource_ptr != (longlong *)0x0) {
                    // WARNING: 此函数不会返回
        trigger_critical_error(resource_ptr);
      }
    }
    goto LAB_18022c3ff;
  }
  texture_format_ptr = &DEFAULT_TEXTURE_INFO_18098bc73;
  if (*(void **)(render_context + 0x18) != (void *)0x0) {
    texture_format_ptr = *(void **)(render_context + 0x18);
  }
  texture_info = &DEFAULT_TEXTURE_INFO_18098bc73;
  if (*(void **)(render_context + 0x2d8) != (void *)0x0) {
    texture_info = *(void **)(render_context + 0x2d8);
  }
  initialize_texture_manager(&TEXTURE_HANDLE_180a13ae8,texture_info,texture_format_ptr);
  get_render_device_data(GLOBAL_RENDER_DEVICE_180c86898,&stack_ptr_290,0);
  texture_ptr = (longlong *)stack_ptr_290[0x3c];
  if (stack_ptr_290 != (longlong *)0x0) {
    (**(code **)(*stack_ptr_290 + 0x38))();
  }
LAB_18022c460:
  if (texture_ptr != (longlong *)0x0) {
    stack_ptr_298 = texture_ptr;
    (**(code **)(*texture_ptr + 0x28))(texture_ptr);
  }
  stack_ptr_298 = *(longlong **)(render_context + 0x1e0);
  *(longlong **)(render_context + 0x1e0) = texture_ptr;
  if (stack_ptr_298 != (longlong *)0x0) {
    (**(code **)(*stack_ptr_298 + 0x38))();
  }
  initialize_render_pipeline(render_context);
  resource_data = *(uint64_t *)(render_context + 0x1e0);
  stack_ptr_238 = &STRING_HANDLE_1809fcc58;
  stack_ptr_230 = stack_buffer_220;
  stack_buffer_220[0] = 0;
  stack_value_228 = 0xf;
  strcpy_s(stack_buffer_220,0x40,&DEFAULT_TEXTURE_NAME_180a0ba58);
  resource_data = get_texture_resource(resource_data,&stack_ptr_238,0);
  *(uint64_t *)(render_context + 0x390) = resource_data;
  stack_ptr_238 = &STRING_TABLE_18098bcb0;
  resource_data = *(uint64_t *)(render_context + 0x1e0);
  stack_ptr_1d8 = &STRING_HANDLE_1809fcc58;
  stack_ptr_1d0 = stack_buffer_1c0;
  stack_buffer_1c0[0] = 0;
  stack_value_1c8 = 9;
  strcpy_s(stack_buffer_1c0,0x40,&TEXTURE_ID_180a13aa8);
  bone_index_ulong = *(uint64_t *)(render_context + 0x1e0);
  stack_ptr_238 = &STRING_HANDLE_1809fcc58;
  stack_ptr_230 = stack_buffer_220;
  stack_buffer_220[0] = 0;
  stack_value_228 = 0x17;
  strcpy_s(stack_buffer_220,0x40,&TEXTURE_PATH_180a13ab8);
  texture_flags = get_texture_resource(bone_index_ulong,&stack_ptr_238,0);
  bone_index_ulong = get_texture_resource(resource_data,&stack_ptr_1d8,0);
  *(ulonglong *)(render_context + 0x3a8) = texture_flags | bone_index_ulong;
  stack_ptr_238 = &STRING_TABLE_18098bcb0;
  stack_ptr_1d8 = &STRING_TABLE_18098bcb0;
  resource_data = *(uint64_t *)(render_context + 0x1e0);
  stack_ptr_178 = &STRING_HANDLE_1809fcc58;
  stack_ptr_170 = stack_buffer_160;
  stack_buffer_160[0] = 0;
  stack_value_168 = 0x10;
  strcpy_s(stack_buffer_160,0x40,&TEXTURE_FORMAT_180a0d580);
  resource_data = get_texture_resource(resource_data,&stack_ptr_178,0);
  *(uint64_t *)(render_context + 0x3b0) = resource_data;
  stack_ptr_178 = &STRING_TABLE_18098bcb0;
  resource_data = *(uint64_t *)(render_context + 0x1e0);
  stack_ptr_118 = &STRING_HANDLE_1809fcc58;
  stack_ptr_110 = stack_buffer_100;
  stack_buffer_100[0] = 0;
  stack_value_108 = 0x14;
  strcpy_s(stack_buffer_100,0x40,&TEXTURE_SIZE_180a0d5b8);
  resource_data = get_texture_resource(resource_data,&stack_ptr_118,0);
  *(uint64_t *)(render_context + 0x3b8) = resource_data;
  stack_ptr_118 = &STRING_TABLE_18098bcb0;
  resource_data = *(uint64_t *)(render_context + 0x1e0);
  stack_ptr_array_b8[0] = &STRING_HANDLE_1809fcc58;
  stack_ptr_array_b8[1] = stack_buffer_a0;
  stack_buffer_a0[0] = 0;
  stack_value_a8 = 0x1d;
  strcpy_s(stack_buffer_a0,0x40,&TEXTURE_TYPE_180a13bb8);
  resource_data = get_texture_resource(resource_data,stack_ptr_array_b8,0);
  *(uint64_t *)(render_context + 0x398) = resource_data;
  stack_ptr_array_b8[0] = &STRING_TABLE_18098bcb0;
  bone_index_ulong = initialize_render_targets(render_context);
  *(ulonglong *)(render_context + 0x3a0) = (ulonglong)bone_index_ulong;
  *(int16_t *)(render_context + 0x3c0) = 0xffff;
  initialize_render_shaders(render_context);
                    // WARNING: 此函数不会返回
  crash_handler(stack_protection_38 ^ (ulonglong)stack_buffer_2c8);
}



// WARNING: 全局变量以下划线开头可能与较小符号重叠地址