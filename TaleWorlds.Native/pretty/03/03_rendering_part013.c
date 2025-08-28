#include "TaleWorlds.Native.Split.h"

// 03_rendering_part013.c - 渲染系统组件 (7个函数)
// 渲染数据初始化、材质管理、碰撞检测、渲染优化等功能的实现

/**
 * 渲染数据初始化函数
 * 从源数据结构复制并初始化渲染目标数据，包括材质属性、纹理坐标、变换矩阵等
 * 
 * 原始函数名: FUN_180275a60
 * 
 * @param src_data_ptr 源数据结构指针
 * @param dest_data_ptr 目标数据结构指针
 * @param render_flag 渲染标志位
 * @param texture_param 纹理参数
 */
void initialize_rendering_data(longlong src_data_ptr, longlong *dest_data_ptr, uint64_t render_flag, uint64_t texture_param)

{
  longlong *material_ptr;
  longlong *texture_ptr;
  longlong texture_offset;
  uint64_t texture_data;
  int32_t material_prop1;
  int32_t material_prop2;
  int32_t material_prop3;
  uint64_t *shader_ptr;
  int vertex_count;
  void *vertex_data;
  longlong buffer_offset;
  longlong vertex_index;
  longlong *buffer_ptr;
  
  // 初始化渲染参数
  FUN_180627be0(dest_data_ptr + 0x3e, src_data_ptr + 0x1f0, render_flag, texture_param, 0xfffffffffffffffe);
  
  // 复制基础渲染数据
  dest_data_ptr[6] = *(longlong *)(src_data_ptr + 0x30);
  *(int32_t *)(dest_data_ptr + 0xb) = *(int32_t *)(src_data_ptr + 0x58);
  
  // 复制纹理坐标数据
  texture_data = *(uint64_t *)(src_data_ptr + 0x21c);
  *(uint64_t *)((longlong)dest_data_ptr + 0x214) = *(uint64_t *)(src_data_ptr + 0x214);
  *(uint64_t *)((longlong)dest_data_ptr + 0x21c) = texture_data;
  
  // 复制材质属性
  material_prop1 = *(int32_t *)(src_data_ptr + 0x228);
  material_prop2 = *(int32_t *)(src_data_ptr + 0x22c);
  material_prop3 = *(int32_t *)(src_data_ptr + 0x230);
  *(int32_t *)((longlong)dest_data_ptr + 0x224) = *(int32_t *)(src_data_ptr + 0x224);
  *(int32_t *)(dest_data_ptr + 0x45) = material_prop1;
  *(int32_t *)((longlong)dest_data_ptr + 0x22c) = material_prop2;
  *(int32_t *)(dest_data_ptr + 0x46) = material_prop3;
  
  // 复制附加材质属性
  material_prop1 = *(int32_t *)(src_data_ptr + 0x238);
  material_prop2 = *(int32_t *)(src_data_ptr + 0x23c);
  material_prop3 = *(int32_t *)(src_data_ptr + 0x240);
  *(int32_t *)((longlong)dest_data_ptr + 0x234) = *(int32_t *)(src_data_ptr + 0x234);
  *(int32_t *)(dest_data_ptr + 0x47) = material_prop1;
  *(int32_t *)((longlong)dest_data_ptr + 0x23c) = material_prop2;
  *(int32_t *)(dest_data_ptr + 0x48) = material_prop3;
  
  // 复制渲染缓冲区数据
  *(int32_t *)((longlong)dest_data_ptr + 0x244) = *(int32_t *)(src_data_ptr + 0x244);
  *(int8_t *)(dest_data_ptr + 0x78) = *(int8_t *)(src_data_ptr + 0x3c0);
  *(int32_t *)((longlong)dest_data_ptr + 0x3c4) = *(int32_t *)(src_data_ptr + 0x3c4);
  *(int32_t *)(dest_data_ptr + 0x42) = *(int32_t *)(src_data_ptr + 0x210);
  
  // 处理材质引用
  material_ptr = *(longlong **)(src_data_ptr + 0x3b8);
  if (material_ptr != (longlong *)0x0) {
    (**(code **)(*material_ptr + 0x28))(material_ptr);
  }
  texture_ptr = (longlong *)dest_data_ptr[0x77];
  dest_data_ptr[0x77] = (longlong)material_ptr;
  if (texture_ptr != (longlong *)0x0) {
    (**(code **)(*texture_ptr + 0x38))();
  }
  
  // 复制光照和颜色数据
  *(int32_t *)(dest_data_ptr + 0xd) = *(int32_t *)(src_data_ptr + 0x68);
  material_prop1 = *(int32_t *)(src_data_ptr + 0x70);
  material_prop2 = *(int32_t *)(src_data_ptr + 0x74);
  material_prop3 = *(int32_t *)(src_data_ptr + 0x78);
  *(int32_t *)((longlong)dest_data_ptr + 0x6c) = *(int32_t *)(src_data_ptr + 0x6c);
  *(int32_t *)(dest_data_ptr + 0xe) = material_prop1;
  *(int32_t *)((longlong)dest_data_ptr + 0x74) = material_prop2;
  *(int32_t *)(dest_data_ptr + 0xf) = material_prop3;
  *(int32_t *)((longlong)dest_data_ptr + 0x7c) = *(int32_t *)(src_data_ptr + 0x7c);
  *(int32_t *)(dest_data_ptr + 0x12) = *(int32_t *)(src_data_ptr + 0x90);
  
  // 复制着色器名称
  vertex_data = &system_buffer_ptr;
  if (*(void **)(src_data_ptr + 0x88) != (void *)0x0) {
    vertex_data = *(void **)(src_data_ptr + 0x88);
  }
  strcpy_s(dest_data_ptr[0x11], 0x80, vertex_data);
  
  // 复制纹理名称
  *(int32_t *)(dest_data_ptr + 0x25) = *(int32_t *)(src_data_ptr + 0x128);
  vertex_data = &system_buffer_ptr;
  if (*(void **)(src_data_ptr + 0x120) != (void *)0x0) {
    vertex_data = *(void **)(src_data_ptr + 0x120);
  }
  strcpy_s(dest_data_ptr[0x24], 0x80, vertex_data);
  
  // 初始化变换矩阵
  FUN_180627be0(dest_data_ptr + 0x36, src_data_ptr + 0x1b0);
  FUN_180627be0(dest_data_ptr + 0x3a, src_data_ptr + 0x1d0);
  
  // 处理着色器引用
  material_ptr = *(longlong **)(src_data_ptr + 0x3c8);
  if (material_ptr != (longlong *)0x0) {
    (**(code **)(*material_ptr + 0x28))(material_ptr);
  }
  texture_ptr = (longlong *)dest_data_ptr[0x79];
  dest_data_ptr[0x79] = (longlong)material_ptr;
  if (texture_ptr != (longlong *)0x0) {
    (**(code **)(*texture_ptr + 0x38))();
  }
  
  // 复制渲染状态
  *(int32_t *)((longlong)dest_data_ptr + 0x5c) = *(int32_t *)(src_data_ptr + 0x5c);
  
  // 处理顶点数据
  if ((char)render_flag != '\0') {
    vertex_index = *(longlong *)(src_data_ptr + 0x40) - *(longlong *)(src_data_ptr + 0x38) >> 4;
    FUN_180284240(dest_data_ptr + 7, vertex_index);
    vertex_count = (int)vertex_index;
    vertex_index = (longlong)vertex_count;
    if (0 < vertex_count) {
      buffer_offset = 0;
      do {
        shader_ptr = (uint64_t *)
                 FUN_1800763c0(*(uint64_t *)(buffer_offset + *(longlong *)(src_data_ptr + 0x38)), &buffer_ptr)
        ;
        texture_offset = dest_data_ptr[7];
        texture_data = *shader_ptr;
        *shader_ptr = 0;
        material_ptr = *(longlong **)(buffer_offset + texture_offset);
        *(uint64_t *)(buffer_offset + texture_offset) = texture_data;
        if (material_ptr != (longlong *)0x0) {
          (**(code **)(*material_ptr + 0x38))();
        }
        if (buffer_ptr != (longlong *)0x0) {
          (**(code **)(*buffer_ptr + 0x38))();
        }
        *(longlong **)(*(longlong *)(buffer_offset + dest_data_ptr[7]) + 0x1c8) = dest_data_ptr;
        *(int32_t *)(buffer_offset + 8 + dest_data_ptr[7]) =
             *(int32_t *)(buffer_offset + 8 + *(longlong *)(src_data_ptr + 0x38));
        buffer_offset = buffer_offset + 0x10;
        vertex_index = vertex_index + -1;
      } while (vertex_index != 0);
    }
  }
  
  // 执行渲染后处理
  (**(code **)(*dest_data_ptr + 0x148))(dest_data_ptr, src_data_ptr + 0x330);
  return;
}


/**
 * 渲染对象添加函数 (索引类型)
 * 向渲染系统添加新的渲染对象，使用索引标识符
 * 
 * 原始函数名: FUN_180275cf0
 * 
 * @param render_context_ptr 渲染上下文指针
 * @param object_index 对象索引
 * @param object_data_ptr 对象数据指针
 * @param update_flag 更新标志
 */
void add_rendering_object_by_index(longlong *render_context_ptr, int object_index, longlong *object_data_ptr, char update_flag)

{
  longlong *object_ref;
  longlong context_data;
  longlong *temp_object;
  int index_mask;
  
  temp_object = (longlong *)0x0;
  object_ref = (longlong *)*object_data_ptr;
  if (object_ref != (longlong *)0x0) {
    (**(code **)(*object_ref + 0x28))(object_ref);
  }
  index_mask = 1 << ((byte)object_index & 0x1f);
  temp_object = object_ref;
  FUN_1802842e0(render_context_ptr + 7, &temp_object);
  *(longlong **)(*object_data_ptr + 0x1c8) = render_context_ptr;
  
  // 更新最大索引
  if ((int)render_context_ptr[0xb] < object_index + 1) {
    *(int *)(render_context_ptr + 0xb) = object_index + 1;
  }
  
  // 执行更新操作
  if (update_flag != '\0') {
    if (*(code **)(*render_context_ptr + 0x160) == (code *)&UNK_180277350) {
      FUN_180276f30(render_context_ptr, (longlong)render_context_ptr + 0x214, 0);
    }
    else {
      (**(code **)(*render_context_ptr + 0x160))(render_context_ptr);
    }
    context_data = render_context_ptr[5];
    if (context_data != 0) {
      *(short *)(context_data + 0x2b0) = *(short *)(context_data + 0x2b0) + 1;
      if (*(longlong *)(context_data + 0x168) != 0) {
        func_0x0001802eeba0();
      }
    }
  }
  
  // 清理临时对象
  if (temp_object != (longlong *)0x0) {
    (**(code **)(*temp_object + 0x38))();
  }
  if ((longlong *)*object_data_ptr != (longlong *)0x0) {
    (**(code **)(*(longlong *)*object_data_ptr + 0x38))();
  }
  return;
}


/**
 * 渲染对象添加函数 (位掩码类型)
 * 向渲染系统添加新的渲染对象，使用位掩码标识符
 * 
 * 原始函数名: FUN_180275e10
 * 
 * @param render_context_ptr 渲染上下文指针
 * @param bitmask_flag 位掩码标志
 * @param object_data_ptr 对象数据指针
 * @param update_flag 更新标志
 */
void add_rendering_object_by_bitmask(longlong *render_context_ptr, uint bitmask_flag, longlong *object_data_ptr, char update_flag)

{
  longlong *object_ref;
  longlong context_data;
  int bit_position;
  longlong *temp_object;
  uint temp_bitmask;
  
  temp_object = (longlong *)0x0;
  object_ref = (longlong *)*object_data_ptr;
  temp_bitmask = bitmask_flag;
  if (object_ref != (longlong *)0x0) {
    (**(code **)(*object_ref + 0x28))(object_ref);
  }
  temp_object = object_ref;
  FUN_1802842e0(render_context_ptr + 7, &temp_object);
  *(longlong **)(*object_data_ptr + 0x1c8) = render_context_ptr;
  
  // 计算位掩码的位置
  bit_position = -1;
  if (bitmask_flag != 0) {
    do {
      bit_position = bit_position + 1;
      bitmask_flag = bitmask_flag >> 1;
    } while (bitmask_flag != 0);
  }
  
  // 更新最大位位置
  if ((int)render_context_ptr[0xb] < bit_position + 1) {
    *(int *)(render_context_ptr + 0xb) = bit_position + 1;
  }
  
  // 执行更新操作
  if (update_flag != '\0') {
    if (*(code **)(*render_context_ptr + 0x160) == (code *)&UNK_180277350) {
      FUN_180276f30(render_context_ptr, (longlong)render_context_ptr + 0x214, 0);
    }
    else {
      (**(code **)(*render_context_ptr + 0x160))(render_context_ptr);
    }
    context_data = render_context_ptr[5];
    if ((context_data != 0) &&
       (*(short *)(context_data + 0x2b0) = *(short *)(context_data + 0x2b0) + 1, *(longlong *)(context_data + 0x168) != 0
       )) {
      func_0x0001802eeba0();
    }
  }
  
  // 清理临时对象
  if (temp_object != (longlong *)0x0) {
    (**(code **)(*temp_object + 0x38))();
  }
  if ((longlong *)*object_data_ptr != (longlong *)0x0) {
    (**(code **)(*(longlong *)*object_data_ptr + 0x38))();
  }
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/**
 * 渲染对象碰撞检测函数
 * 检测渲染对象与指定参数的碰撞，返回碰撞结果
 * 
 * 原始函数名: FUN_180275f30
 * 
 * @param object_ptr 对象指针
 * @param render_flags 渲染标志
 * @param collision_param 碰撞参数
 * @param position_data 位置数据
 * @param transform_data 变换数据
 * 
 * @return 碰撞结果标志位
 */
ulonglong check_rendering_object_collision(uint64_t *object_ptr, uint *render_flags, uint64_t collision_param, float *position_data,
                       uint64_t *transform_data)

{
  float transform_matrix[16];
  float vertex_position[4];
  float collision_radius;
  float distance_x;
  float distance_y;
  float distance_z;
  float temp_float1;
  float temp_float2;
  float temp_float3;
  float temp_float4;
  float temp_float5;
  float temp_float6;
  float temp_float7;
  float temp_float8;
  float temp_float9;
  float temp_float10;
  float temp_float11;
  float temp_float12;
  float temp_float13;
  float temp_float14;
  uint64_t transform_param;
  byte collision_result;
  ulonglong result_flag;
  int object_count;
  longlong object_index;
  uint bitmask_flag;
  byte object_type;
  longlong collision_data;
  float temp_float15;
  float temp_float16;
  float temp_float17;
  float temp_float18;
  uint64_t stack_transform[8];
  uint8_t stack_params;
  int8_t stack_flag;
  int16_t stack_indices;
  uint64_t *transform_ptr;
  uint64_t transform_matrix2;
  int32_t transform_param1;
  int32_t transform_param2;
  int32_t transform_param3;
  int vertex_index;
  uint64_t transform_params[3];
  int32_t matrix_values[8];
  float stack_vertices[16];
  
  result_flag = (ulonglong)*(uint *)(object_ptr + 0x42);
  if (((*render_flags & *(uint *)(object_ptr + 0x42)) == 0) || (*(int *)(object_ptr + 0xb) == 0)) {
LAB_180276376:
    result_flag = result_flag & 0xffffffffffffff00;
  }
  else {
    // 复制变换矩阵数据
    stack_transform[0] = *transform_data;
    transform_param = transform_data[1];
    transform_matrix2 = transform_data[3];
    transform_param1 = *(int32_t *)(transform_data + 4);
    transform_param2 = *(int32_t *)((longlong)transform_data + 0x24);
    transform_param3 = *(int32_t *)(transform_data + 5);
    vertex_index = *(int *)((longlong)transform_data + 0x2c);
    transform_params[0] = transform_data[6];
    transform_params[1] = transform_data[7];
    transform_params[2] = transform_data[8];
    matrix_values[0] = transform_data[9];
    matrix_values[1] = *(int32_t *)(transform_data + 10);
    matrix_values[2] = *(int32_t *)((longlong)transform_data + 0x54);
    matrix_values[3] = *(int32_t *)(transform_data + 0xb);
    matrix_values[4] = *(int32_t *)((longlong)transform_data + 0x5c);
    matrix_values[5] = *(int32_t *)(transform_data + 0xc);
    matrix_values[6] = *(int32_t *)((longlong)transform_data + 100);
    matrix_values[7] = *(int32_t *)(transform_data + 0xd);
    
    // 设置变换参数
    stack_params._0_4_ = (int)transform_param;
    vertex_index = (int)stack_params + *(int *)((longlong)object_ptr + 0x5c);
    stack_indices = (int16_t)((ulonglong)transform_param >> 0x30);
    _stack_params = CONCAT15(*(int8_t *)(object_ptr + 0x76), (int5)transform_param);
    _stack_params = CONCAT44(stack0xffffffffffffff24, vertex_index);
    if (vertex_index == 0) {
      vertex_index = *(int *)(object_ptr + 0x62);
      transform_param3 = *(int32_t *)(object_ptr + 99);
    }
    object_index = 0;
    
    // 检查对象类型
    if (*(char *)(object_ptr + 0xc) == '\0') {
      if (vertex_index < 0) {
        vertex_index = 0;
      }
      else if (*(int *)(object_ptr + 0xb) + -1 < vertex_index) {
        vertex_index = *(int *)(object_ptr + 0xb) + -1;
      }
    }
    object_type = 1;
    bitmask_flag = 1 << ((byte)vertex_index & 0x1f);
    transform_ptr = object_ptr;
    
    // 处理简单碰撞检测
    if ((*(char *)(object_ptr + 100) == '\0') && (*(char *)(object_ptr + 0x76) == -1)) {
      // 计算顶点变换
      temp_float3 = *position_data;
      temp_float4 = position_data[1];
      temp_float5 = position_data[2];
      temp_float6 = position_data[3];
      result_flag = *(ulonglong *)(render_flags + 10);
      temp_float18 = *(float *)((longlong)object_ptr + 0x334);
      temp_float15 = *(float *)(object_ptr + 0x66);
      temp_float16 = *(float *)(object_ptr + 0x67);
      temp_float17 = *(float *)((longlong)object_ptr + 0x344);
      temp_float7 = position_data[8];
      temp_float8 = position_data[9];
      temp_float9 = position_data[10];
      temp_float10 = position_data[0xb];
      temp_float11 = position_data[4];
      temp_float12 = position_data[5];
      temp_float13 = position_data[6];
      temp_float14 = position_data[7];
      temp_float1 = *(float *)(object_ptr + 0x68);
      
      // 变换矩阵计算
      stack_vertices[0] = temp_float18 * temp_float11 + temp_float15 * temp_float3 + temp_float16 * temp_float7;
      stack_vertices[1] = temp_float18 * temp_float12 + temp_float15 * temp_float4 + temp_float16 * temp_float8;
      stack_vertices[2] = temp_float18 * temp_float13 + temp_float15 * temp_float5 + temp_float16 * temp_float9;
      stack_vertices[3] = temp_float18 * temp_float14 + temp_float15 * temp_float6 + temp_float16 * temp_float10;
      temp_float18 = *(float *)(object_ptr + 0x69);
      temp_float15 = *(float *)(object_ptr + 0x6a);
      temp_float16 = *(float *)((longlong)object_ptr + 0x354);
      stack_vertices[4] = temp_float17 * temp_float11 + temp_float1 * temp_float3 + temp_float18 * temp_float7;
      stack_vertices[5] = temp_float17 * temp_float12 + temp_float1 * temp_float4 + temp_float18 * temp_float8;
      stack_vertices[6] = temp_float17 * temp_float13 + temp_float1 * temp_float5 + temp_float18 * temp_float9;
      stack_vertices[7] = temp_float17 * temp_float14 + temp_float1 * temp_float6 + temp_float18 * temp_float10;
      temp_float18 = *(float *)(object_ptr + 0x6b);
      temp_float17 = *(float *)((longlong)object_ptr + 0x364);
      temp_float1 = *(float *)(object_ptr + 0x6c);
      stack_vertices[8] = temp_float16 * temp_float11 + temp_float15 * temp_float3 + temp_float18 * temp_float7;
      stack_vertices[9] = temp_float16 * temp_float12 + temp_float15 * temp_float4 + temp_float18 * temp_float8;
      stack_vertices[10] = temp_float16 * temp_float13 + temp_float15 * temp_float5 + temp_float18 * temp_float9;
      stack_vertices[11] = temp_float16 * temp_float14 + temp_float15 * temp_float6 + temp_float18 * temp_float10;
      temp_float18 = *(float *)(object_ptr + 0x6d);
      stack_vertices[12] = temp_float17 * temp_float11 + temp_float1 * temp_float3 + temp_float18 * temp_float7 + position_data[0xc];
      stack_vertices[13] = temp_float17 * temp_float12 + temp_float1 * temp_float4 + temp_float18 * temp_float8 + position_data[0xd];
      stack_vertices[14] = temp_float17 * temp_float13 + temp_float1 * temp_float5 + temp_float18 * temp_float9 + position_data[0xe];
      stack_vertices[15] = temp_float17 * temp_float14 + temp_float1 * temp_float6 + temp_float18 * temp_float10 + position_data[0xf];
      
      // 距离检测
      if ((result_flag != 0) && (temp_float18 = *(float *)(object_ptr + 0xd), temp_float18 != 3.4028235e+38)) {
        if ((void *)*object_ptr == &UNK_180a169b8) {
          collision_data = (longlong)object_ptr + 0x214;
        }
        else {
          collision_data = (**(code **)((void *)*object_ptr + 0x198))(object_ptr);
          temp_float18 = *(float *)(object_ptr + 0xd);
          result_flag = *(ulonglong *)(render_flags + 10);
        }
        temp_float17 = *(float *)(result_flag + 0x124) - stack_vertices[5];
        temp_float16 = *(float *)(result_flag + 0x120) - stack_vertices[4];
        temp_float15 = *(float *)(result_flag + 0x128) - stack_vertices[6];
        if (temp_float18 * temp_float18 <
            (temp_float17 * temp_float17 + temp_float16 * temp_float16 + temp_float15 * temp_float15) -
            *(float *)(collision_data + 0x30) * *(float *)(collision_data + 0x30)) goto LAB_180276376;
      }
      
      // 遍历对象进行碰撞检测
      vertex_index = (int)((longlong)(object_ptr[8] - object_ptr[7]) >> 4);
      collision_data = (longlong)vertex_index;
      if (0 < vertex_index) {
        do {
          temp_float2 = *(longlong *)(object_index + object_ptr[7]);
          if ((temp_float2 != 0) && ((*(uint *)(object_index + 8 + object_ptr[7]) & bitmask_flag) != 0)) {
            if (((render_flags[0x6f6] & 0x20) != 0) && ((*(uint *)(temp_float2 + 0x100) & 0x400000) != 0)) {
              *(int32_t *)(object_ptr + 0x65) = *(int32_t *)(_DAT_180c86870 + 0x224);
            }
            collision_result = FUN_180077750(temp_float2, render_flags, &stack_vertices[0], collision_param, &stack_transform[0]);
            object_type = object_type & collision_result;
          }
          object_index = object_index + 0x10;
          collision_data = collision_data + -1;
        } while (collision_data != 0);
        return (ulonglong)object_type;
      }
    }
    else {
      // 复杂碰撞检测路径
      result_flag = *(ulonglong *)(render_flags + 10);
      if ((result_flag != 0) && (temp_float18 = *(float *)(object_ptr + 0xd), temp_float18 != 3.4028235e+38)) {
        if ((void *)*object_ptr == &UNK_180a169b8) {
          collision_data = (longlong)object_ptr + 0x214;
        }
        else {
          collision_data = (**(code **)((void *)*object_ptr + 0x198))(object_ptr);
          temp_float18 = *(float *)(object_ptr + 0xd);
          result_flag = *(ulonglong *)(render_flags + 10);
        }
        temp_float17 = *(float *)(result_flag + 0x124) - position_data[0xd];
        temp_float16 = *(float *)(result_flag + 0x120) - position_data[0xc];
        temp_float15 = *(float *)(result_flag + 0x128) - position_data[0xe];
        if (temp_float18 * temp_float18 <
            (temp_float17 * temp_float17 + temp_float16 * temp_float16 + temp_float15 * temp_float15) -
            *(float *)(collision_data + 0x30) * *(float *)(collision_data + 0x30)) goto LAB_180276376;
      }
      vertex_index = (int)((longlong)(object_ptr[8] - object_ptr[7]) >> 4);
      collision_data = (longlong)vertex_index;
      if (0 < vertex_index) {
        do {
          temp_float2 = *(longlong *)(object_index + object_ptr[7]);
          if ((temp_float2 != 0) && ((*(uint *)(object_index + 8 + object_ptr[7]) & bitmask_flag) != 0)) {
            if (((render_flags[0x6f6] & 0x20) != 0) && ((*(uint *)(temp_float2 + 0x100) & 0x400000) != 0)) {
              *(int32_t *)(object_ptr + 0x65) = *(int32_t *)(_DAT_180c86870 + 0x224);
            }
            if ((*(byte *)(temp_float2 + 0x100) & 0x20) == 0) {
              collision_result = FUN_180077750(temp_float2, render_flags, position_data, collision_param, &stack_transform[0]);
              object_type = object_type & collision_result;
            }
            else {
              FUN_180075630(temp_float2, position_data);
            }
          }
          object_index = object_index + 0x10;
          collision_data = collision_data + -1;
        } while (collision_data != 0);
      }
    }
    result_flag = (ulonglong)object_type;
  }
  return result_flag;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/**
 * 渲染变换处理函数
 * 处理渲染对象的变换矩阵和位置计算
 * 
 * 原始函数名: FUN_18027606a
 * 
 * @param transform_param1 变换参数1
 * @param transform_param2 变换参数2
 * @param transform_param3 变换参数3
 * @param transform_param4 变换参数4
 * 
 * @return 处理结果标志
 */
ulonglong process_rendering_transform(uint64_t transform_param1, uint64_t transform_param2, uint64_t transform_param3, uint64_t transform_param4)

{
  float matrix_row1[4];
  float matrix_row2[4];
  float matrix_row3[4];
  float matrix_row4[4];
  float transform_scale[4];
  float transform_offset[4];
  float transform_result[4];
  float collision_distance;
  byte collision_result;
  int object_count;
  ulonglong render_flags;
  ulonglong result_flags;
  uint64_t *transform_ptr;
  longlong context_ptr;
  longlong render_context;
  longlong object_buffer;
  uint render_flag;
  byte visibility_flag;
  longlong collision_data;
  float transform_matrix[4];
  float vertex_data[4];
  float position_data[4];
  
  // 获取变换矩阵数据
  matrix_row1[0] = *(float *)(render_flag + 0x20);
  matrix_row1[1] = *(float *)(render_flag + 0x24);
  matrix_row1[2] = *(float *)(render_flag + 0x28);
  matrix_row1[3] = *(float *)(render_flag + 0x2c);
  matrix_row2[0] = *(float *)(render_flag + 0x10);
  matrix_row2[1] = *(float *)(render_flag + 0x14);
  matrix_row2[2] = *(float *)(render_flag + 0x18);
  matrix_row2[3] = *(float *)(render_flag + 0x1c);
  transform_result[0] = *(float *)(transform_ptr + 0x68);
  transform_scale[0] = *(float *)(transform_ptr + 0x69);
  transform_scale[1] = *(float *)(transform_ptr + 0x6a);
  
  // 计算第一行变换结果
  *(float *)(context_ptr + -0x21) = (float)transform_param3 * matrix_row2[0] + (float)transform_param1 + (float)transform_param2 * matrix_row1[0];
  *(float *)(context_ptr + -0x1d) =
       (float)((ulonglong)transform_param3 >> 0x20) * matrix_row2[1] + (float)((ulonglong)transform_param1 >> 0x20) +
       (float)((ulonglong)transform_param2 >> 0x20) * matrix_row1[1];
  *(float *)(context_ptr + -0x19) = vertex_data[2] * matrix_row2[2] + vertex_data[0] + position_data[0] * matrix_row1[2];
  *(float *)(context_ptr + -0x15) = vertex_data[3] * matrix_row2[3] + vertex_data[1] + position_data[1] * matrix_row1[3];
  
  // 计算第二行变换结果
  transform_matrix[0] = *(float *)((longlong)transform_ptr + 0x354);
  transform_scale[2] = *(float *)(transform_ptr + 0x6b);
  *(float *)(context_ptr + -0x11) = (float)transform_param4 * matrix_row2[0] + transform_result[0] * position_data[0] + transform_scale[0] * matrix_row1[0];
  *(float *)(context_ptr + -0xd) =
       (float)((ulonglong)transform_param4 >> 0x20) * matrix_row2[1] + transform_result[0] * position_data[1] + transform_scale[0] * matrix_row1[1];
  *(float *)(context_ptr + -9) = transform_result[2] * matrix_row2[2] + transform_result[0] * position_data[2] + transform_scale[0] * matrix_row1[2];
  *(float *)(context_ptr + -5) = transform_result[3] * matrix_row2[3] + transform_result[0] * position_data[3] + transform_scale[0] * matrix_row1[3];
  
  // 计算第三行变换结果
  transform_result[0] = *(float *)((longlong)transform_ptr + 0x364);
  transform_scale[1] = *(float *)(transform_ptr + 0x6c);
  transform_scale[2] = *(float *)(transform_ptr + 0x6d);
  *(float *)(context_ptr + -1) = transform_matrix[0] * matrix_row2[0] + transform_scale[1] * position_data[0] + transform_scale[2] * matrix_row1[0];
  *(float *)(context_ptr + 3) = transform_matrix[0] * matrix_row2[1] + transform_scale[1] * position_data[1] + transform_scale[2] * matrix_row1[1];
  *(float *)(context_ptr + 7) = transform_matrix[0] * matrix_row2[2] + transform_scale[1] * position_data[2] + transform_scale[2] * matrix_row1[2];
  *(float *)(context_ptr + 0xb) = transform_matrix[0] * matrix_row2[3] + transform_scale[1] * position_data[3] + transform_scale[2] * matrix_row1[3];
  
  // 获取附加变换参数
  transform_scale[1] = *(float *)(render_flag + 0x34);
  transform_matrix[0] = *(float *)(render_flag + 0x38);
  transform_scale[2] = *(float *)(render_flag + 0x3c);
  *(float *)(context_ptr + 0xf) =
       transform_result[0] * matrix_row2[0] + transform_scale[1] * position_data[0] + transform_scale[2] * matrix_row1[0] + *(float *)(render_flag + 0x30);
  *(float *)(context_ptr + 0x13) = transform_result[0] * matrix_row2[1] + transform_scale[1] * position_data[1] + transform_scale[2] * matrix_row1[1] + transform_scale[1];
  *(float *)(context_ptr + 0x17) = transform_result[0] * matrix_row2[2] + transform_scale[1] * position_data[2] + transform_scale[2] * matrix_row1[2] + transform_matrix[0];
  *(float *)(context_ptr + 0x1b) = transform_result[0] * matrix_row2[3] + transform_scale[1] * position_data[3] + transform_scale[2] * matrix_row1[3] + transform_scale[2];
  
  // 执行碰撞检测
  if ((render_flags != 0) && (transform_result[0] = *(float *)(transform_ptr + 0xd), transform_result[0] != 3.4028235e+38)) {
    if ((void *)*transform_ptr == &UNK_180a169b8) {
      collision_data = (longlong)transform_ptr + 0x214;
    }
    else {
      collision_data = (**(code **)((void *)*transform_ptr + 0x198))();
      transform_result[0] = *(float *)(transform_ptr + 0xd);
      render_flags = *(ulonglong *)(object_buffer + 0x28);
    }
    transform_matrix[0] = *(float *)(render_flags + 0x124) - *(float *)(context_ptr + 0x13);
    transform_scale[1] = *(float *)(render_flags + 0x120) - *(float *)(context_ptr + 0xf);
    transform_scale[2] = *(float *)(render_flags + 0x128) - *(float *)(context_ptr + 0x17);
    if (transform_result[0] * transform_result[0] <
        (transform_matrix[0] * transform_matrix[0] + transform_scale[1] * transform_scale[1] + transform_scale[2] * transform_scale[2]) -
        *(float *)(collision_data + 0x30) * *(float *)(collision_data + 0x30)) {
      return render_flags & 0xffffffffffffff00;
    }
  }
  
  // 遍历对象进行处理
  object_count = (int)((longlong)(transform_ptr[8] - transform_ptr[7]) >> 4);
  collision_data = (longlong)object_count;
  if (object_count < 1) {
    result_flags = (ulonglong)visibility_flag;
  }
  else {
    do {
      context_ptr = *(longlong *)(render_context + transform_ptr[7]);
      if ((context_ptr != 0) && ((*(uint *)(render_context + 8 + transform_ptr[7]) & render_flag) != 0)) {
        if (((*(byte *)(object_buffer + 0x1bd8) & 0x20) != 0) &&
           ((*(uint *)(context_ptr + 0x100) & 0x400000) != 0)) {
          *(int32_t *)(transform_ptr + 0x65) = *(int32_t *)(_DAT_180c86870 + 0x224);
        }
        collision_result = FUN_180077750();
        visibility_flag = visibility_flag & collision_result;
      }
      render_context = render_context + 0x10;
      collision_data = collision_data + -1;
    } while (collision_data != 0);
    result_flags = (ulonglong)visibility_flag;
  }
  return result_flags;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/**
 * 渲染优化处理函数
 * 对渲染对象进行优化处理，提高渲染性能
 * 
 * 原始函数名: FUN_18027613a
 * 
 * @return 优化处理结果标志
 */
ulonglong optimize_rendering_objects(void)

{
  longlong object_ptr;
  byte optimization_result;
  int object_count;
  ulonglong render_flags;
  ulonglong result_flags;
  uint64_t *render_context;
  longlong context_ptr;
  longlong render_buffer;
  longlong object_index;
  uint render_flag;
  byte visibility_flag;
  longlong collision_data;
  float position_data[4];
  
  // 获取渲染参数
  position_data[3] = *(float *)(render_context + 0xd);
  if (position_data[3] != 3.4028235e+38) {
    if ((void *)*render_context == &UNK_180a169b8) {
      collision_data = (longlong)render_context + 0x214;
    }
    else {
      collision_data = (**(code **)((void *)*render_context + 0x198))();
      position_data[3] = *(float *)(render_context + 0xd);
      render_flags = *(ulonglong *)(render_buffer + 0x28);
    }
    position_data[2] = *(float *)(render_flags + 0x124) - *(float *)(context_ptr + 0x13);
    position_data[1] = *(float *)(render_flags + 0x120) - *(float *)(context_ptr + 0xf);
    position_data[0] = *(float *)(render_flags + 0x128) - *(float *)(context_ptr + 0x17);
    if (position_data[3] * position_data[3] <
        (position_data[2] * position_data[2] + position_data[1] * position_data[1] + position_data[0] * position_data[0]) -
        *(float *)(collision_data + 0x30) * *(float *)(collision_data + 0x30)) {
      return render_flags & 0xffffffffffffff00;
    }
  }
  
  // 遍历对象进行优化
  object_count = (int)((longlong)(render_context[8] - render_context[7]) >> 4);
  collision_data = (longlong)object_count;
  if (object_count < 1) {
    result_flags = (ulonglong)visibility_flag;
  }
  else {
    do {
      object_ptr = *(longlong *)(render_index + render_context[7]);
      if ((object_ptr != 0) && ((*(uint *)(render_index + 8 + render_context[7]) & render_flag) != 0)) {
        if (((*(byte *)(render_buffer + 0x1bd8) & 0x20) != 0) &&
           ((*(uint *)(object_ptr + 0x100) & 0x400000) != 0)) {
          *(int32_t *)(render_context + 0x65) = *(int32_t *)(_DAT_180c86870 + 0x224);
        }
        optimization_result = FUN_180077750();
        visibility_flag = visibility_flag & optimization_result;
      }
      render_index = render_index + 0x10;
      collision_data = collision_data + -1;
    } while (collision_data != 0);
    result_flags = (ulonglong)visibility_flag;
  }
  return result_flags;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/**
 * 渲染状态更新函数
 * 更新渲染对象的状态信息
 * 
 * 原始函数名: FUN_1802762d8
 * 
 * @return 更新结果标志
 */
byte update_rendering_state(void)

{
  longlong object_ptr;
  byte update_result;
  int object_count;
  longlong render_context;
  longlong render_buffer;
  longlong object_index;
  longlong collision_data;
  uint render_flag;
  byte visibility_flag;
  
  object_count = (int)object_index;
  if (0 < object_count) {
    do {
      object_ptr = *(longlong *)(render_index + *(longlong *)(render_context + 0x38));
      if ((object_ptr != 0) &&
         ((*(uint *)(render_index + 8 + *(longlong *)(render_context + 0x38)) & render_flag) != 0)) {
        if (((*(byte *)(render_buffer + 0x1bd8) & 0x20) != 0) &&
           ((*(uint *)(object_ptr + 0x100) & 0x400000) != 0)) {
          *(int32_t *)(render_context + 0x328) = *(int32_t *)(_DAT_180c86870 + 0x224);
        }
        if ((*(byte *)(object_ptr + 0x100) & 0x20) == 0) {
          update_result = FUN_180077750();
          visibility_flag = visibility_flag & update_result;
        }
        else {
          FUN_180075630();
        }
      }
      render_index = render_index + 0x10;
      object_count = object_count + -1;
    } while (object_count != 0);
  }
  return visibility_flag;
}


/**
 * 渲染标志获取函数
 * 获取当前的渲染标志状态
 * 
 * 原始函数名: FUN_180276370
 * 
 * @return 渲染标志状态
 */
int8_t get_rendering_flags(void)

{
  int8_t render_flags;
  
  return render_flags;
}


/**
 * 渲染距离计算函数
 * 计算渲染对象的距离并进行相应的处理
 * 
 * 原始函数名: FUN_1802763d0
 * 
 * @param object_ptr 对象指针
 * @param distance_ptr 距离数据指针
 * @param distance_index 距离索引
 * @param transform_data 变换数据
 * 
 * @return 计算结果标志
 */
ulonglong calculate_rendering_distance(longlong object_ptr, longlong distance_ptr, int distance_index, uint64_t *transform_data)

{
  float max_distance;
  float current_distance;
  ulonglong render_flags;
  ulonglong result_flags;
  longlong distance_offset;
  int object_count;
  longlong object_index;
  longlong buffer_start;
  uint64_t transform_matrix[8];
  
  if (*(int *)(object_ptr + 0x58) != 0) {
    // 处理变换数据
    if (*(char *)(object_ptr + 800) == '\0') {
      FUN_180285cf0(&transform_matrix[0], transform_data, object_ptr + 0x330);
    }
    else {
      transform_matrix[0] = *transform_data;
      transform_matrix[1] = transform_data[1];
      transform_matrix[2] = transform_data[2];
      transform_matrix[3] = transform_data[3];
      transform_matrix[4] = transform_data[4];
      transform_matrix[5] = transform_data[5];
      transform_matrix[6] = transform_data[6];
      transform_matrix[7] = transform_data[7];
    }
    
    // 计算最大距离
    current_distance = *(float *)(object_ptr + 0x68);
    distance_offset = (longlong)distance_index * 0xbc + *(longlong *)(distance_ptr + 0x98);
    max_distance = 3.4028235e+38;
    if (current_distance != 3.4028235e+38) {
      max_distance = current_distance * current_distance;
      if (current_distance * current_distance <= *(float *)(distance_offset + 0xb8)) {
        max_distance = *(float *)(distance_offset + 0xb8);
      }
    }
    *(float *)(distance_offset + 0xb8) = max_distance;
    
    // 遍历对象进行距离计算
    object_count = 0;
    buffer_start = *(longlong *)(object_ptr + 0x38);
    result_flags = *(longlong *)(object_ptr + 0x40) - buffer_start >> 4;
    if (result_flags != 0) {
      object_index = 0;
      do {
        if (*(longlong *)(object_index + buffer_start) != 0) {
          FUN_180077f20(*(longlong *)(object_index + buffer_start), distance_ptr, distance_index, &transform_matrix[0],
                        *(int32_t *)(object_index + 8 + buffer_start), *(int32_t *)(object_ptr + 0x58));
        }
        buffer_start = *(longlong *)(object_ptr + 0x38);
        object_count = object_count + 1;
        object_index = object_index + 0x10;
        result_flags = (ulonglong)object_count;
      } while (result_flags < (ulonglong)(*(longlong *)(object_ptr + 0x40) - buffer_start >> 4));
    }
    return CONCAT71((int7)(result_flags >> 8), 1);
  }
  return render_flags & 0xffffffffffffff00;
}


/**
 * 渲染参数处理函数
 * 处理渲染对象的参数设置
 * 
 * 原始函数名: FUN_18027649f
 * 
 * @param param1 参数1
 * @param param2 参数2
 * 
 * @return 处理结果标志
 */
uint64_t process_rendering_parameters(uint64_t param1, longlong param2)

{
  longlong render_context;
  uint render_index;
  ulonglong result_flags;
  int32_t render_param;
  
  result_flags = (ulonglong)render_index;
  do {
    if (*(longlong *)(result_flags + param2) != 0) {
      render_param = *(int32_t *)(render_context + 0x58);
      FUN_180077f20();
    }
    param2 = *(longlong *)(render_context + 0x38);
    render_index = render_index + 1;
    result_flags = result_flags + 0x10;
  } while ((ulonglong)(longlong)(int)render_index <
           (ulonglong)(*(longlong *)(render_context + 0x40) - param2 >> 4));
  return CONCAT71((int7)(int3)(render_index >> 8), 1);
}


/**
 * 渲染状态检查函数
 * 检查渲染对象的状态
 * 
 * 原始函数名: FUN_1802764fd
 * 
 * @return 状态检查结果
 */
int8_t check_rendering_status(void)

{
  return 1;
}


// WARNING: Removing unreachable block (ram,0x000180276696)
// WARNING: Removing unreachable block (ram,0x0001802766d5)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address


/**
 * 渲染材质更新函数
 * 更新渲染对象的材质属性
 * 
 * 原始函数名: FUN_180276610
 * 
 * @param material_context 材质上下文
 * @param material_update 材质更新参数
 */
void update_rendering_materials(longlong material_context, int32_t material_update)

{
  longlong *material_ptr;
  longlong *texture_ptr;
  ulonglong material_index;
  uint material_property;
  ulonglong texture_index;
  longlong *material_data;
  longlong *texture_data;
  int8_t material_params[8];
  longlong *shader_data;
  int32_t material_value;
  longlong *texture_buffer;
  int16_t texture_index2;
  char update_flag;
  
  material_data = *(longlong **)(material_context + 0x38);
  if (material_data < *(longlong **)(material_context + 0x40)) {
    do {
      material_ptr = (longlong *)*material_data;
      if (material_ptr != (longlong *)0x0) {
        (**(code **)(*material_ptr + 0x28))(material_ptr);
      }
      texture_buffer = (longlong *)0x0;
      shader_data = (longlong *)0x0;
      material_params[0] = 0;
      if (material_ptr != (longlong *)0x0) {
        (**(code **)(*material_ptr + 0x28))(material_ptr);
      }
      material_value = 0;
      shader_data = material_ptr;
      FUN_18007f4c0(material_params);
      texture_ptr = texture_buffer;
      if (texture_buffer != (longlong *)0x0) {
        (**(code **)(*texture_buffer + 0x28))(texture_buffer);
      }
      texture_data = texture_ptr;
      texture_index2 = 0;
      update_flag = '\0';
      if (material_ptr != (longlong *)0x0) {
        (**(code **)(*material_ptr + 0x38))(material_ptr);
      }
      material_index = 0;
      texture_index = 0;
      if (0 < (int)texture_ptr[0xc]) {
        do {
          *(int32_t *)(texture_ptr[0xd] + 0x54 + material_index) = material_update;
          material_property = (int)texture_index + 1;
          material_index = material_index + 0x5c;
          texture_index = (ulonglong)material_property;
        } while ((int)material_property < (int)texture_ptr[0xc]);
      }
      texture_index2 = CONCAT11(texture_index2._1_1_, 1);
      if ((material_ptr != (longlong *)0x0) && (texture_ptr != (longlong *)0x0)) {
        if (update_flag != '\0') {
          FUN_180075b70();
        }
        FUN_18007f6a0(material_params);
        if ((char)texture_index2 != '\0') {
          FUN_180079520(material_ptr);
        }
        if (texture_index2._1_1_ != '\0') {
          FUN_180079520(material_ptr);
        }
        texture_data = (longlong *)0x0;
        if (texture_ptr != (longlong *)0x0) {
          (**(code **)(*texture_ptr + 0x38))();
        }
      }
      FUN_18007f6a0(material_params);
      if (texture_buffer != (longlong *)0x0) {
        (**(code **)(*texture_buffer + 0x38))();
      }
      if (texture_data != (longlong *)0x0) {
        (**(code **)(*texture_data + 0x38))();
      }
      if (material_ptr != (longlong *)0x0) {
        (**(code **)(*material_ptr + 0x38))();
      }
      material_data = material_data + 2;
    } while (material_data < *(longlong **)(material_context + 0x40));
  }
  return;
}