#include "TaleWorlds.Native.Split.h"

// 03_rendering_part013.c - 渲染系统材质处理和序列化功能

/**
 * 材质序列化函数
 * 将材质数据从源对象复制到目标对象，包括纹理、颜色和材质属性
 * @param param_1 源材质对象指针
 * @param param_2 目标材质对象指针
 * @param param_3 序列化标志
 * @param param_4 附加参数
 */
void Material_Serialize(longlong *source_material, longlong *target_material, undefined8 serialize_flag, undefined8 extra_param)

{
  longlong *texture_ptr1;
  longlong *texture_ptr2;
  longlong material_data;
  undefined8 texture_data;
  undefined4 color_r;
  undefined4 color_g;
  undefined4 color_b;
  undefined8 *shader_param;
  int material_count;
  undefined *material_name;
  longlong texture_offset;
  longlong texture_size;
  longlong *temp_stack_ptr;
  
  // 复制材质参数
  FUN_180627be0(target_material + 0x3e, source_material + 0x1f0, serialize_flag, extra_param, 0xfffffffffffffffe);
  target_material[6] = *(longlong *)(source_material + 0x30);
  *(undefined4 *)(target_material + 0xb) = *(undefined4 *)(source_material + 0x58);
  
  // 复制纹理数据
  texture_data = *(undefined8 *)(source_material + 0x21c);
  *(undefined8 *)((longlong)target_material + 0x214) = *(undefined8 *)(source_material + 0x214);
  *(undefined8 *)((longlong)target_material + 0x21c) = texture_data;
  
  // 复制颜色数据
  color_r = *(undefined4 *)(source_material + 0x228);
  color_g = *(undefined4 *)(source_material + 0x22c);
  color_b = *(undefined4 *)(source_material + 0x230);
  *(undefined4 *)((longlong)target_material + 0x224) = *(undefined4 *)(source_material + 0x224);
  *(undefined4 *)(target_material + 0x45) = color_r;
  *(undefined4 *)((longlong)target_material + 0x22c) = color_g;
  *(undefined4 *)(target_material + 0x46) = color_b;
  
  // 复制额外颜色数据
  color_r = *(undefined4 *)(source_material + 0x238);
  color_g = *(undefined4 *)(source_material + 0x23c);
  color_b = *(undefined4 *)(source_material + 0x240);
  *(undefined4 *)((longlong)target_material + 0x234) = *(undefined4 *)(source_material + 0x234);
  *(undefined4 *)(target_material + 0x47) = color_r;
  *(undefined4 *)((longlong)target_material + 0x23c) = color_g;
  *(undefined4 *)(target_material + 0x48) = color_b;
  
  // 复制其他材质属性
  *(undefined4 *)((longlong)target_material + 0x244) = *(undefined4 *)(source_material + 0x244);
  *(undefined1 *)(target_material + 0x78) = *(undefined1 *)(source_material + 0x3c0);
  *(undefined4 *)((longlong)target_material + 0x3c4) = *(undefined4 *)(source_material + 0x3c4);
  *(undefined4 *)(target_material + 0x42) = *(undefined4 *)(source_material + 0x210);
  
  // 处理纹理引用
  texture_ptr1 = *(longlong **)(source_material + 0x3b8);
  if (texture_ptr1 != (longlong *)0x0) {
    (**(code **)(*texture_ptr1 + 0x28))(texture_ptr1);
  }
  texture_ptr2 = (longlong *)target_material[0x77];
  target_material[0x77] = (longlong)texture_ptr1;
  if (texture_ptr2 != (longlong *)0x0) {
    (**(code **)(*texture_ptr2 + 0x38))();
  }
  
  // 复制材质属性
  *(undefined4 *)(target_material + 0xd) = *(undefined4 *)(source_material + 0x68);
  color_r = *(undefined4 *)(source_material + 0x70);
  color_g = *(undefined4 *)(source_material + 0x74);
  color_b = *(undefined4 *)(source_material + 0x78);
  *(undefined4 *)((longlong)target_material + 0x6c) = *(undefined4 *)(source_material + 0x6c);
  *(undefined4 *)(target_material + 0xe) = color_r;
  *(undefined4 *)((longlong)target_material + 0x74) = color_g;
  *(undefined4 *)(target_material + 0xf) = color_b;
  
  // 复制更多材质属性
  *(undefined4 *)((longlong)target_material + 0x7c) = *(undefined4 *)(source_material + 0x7c);
  *(undefined4 *)(target_material + 0x12) = *(undefined4 *)(source_material + 0x90);
  
  // 复制材质名称
  material_name = &DAT_18098bc73;
  if (*(undefined **)(source_material + 0x88) != (undefined *)0x0) {
    material_name = *(undefined **)(source_material + 0x88);
  }
  strcpy_s(target_material[0x11], 0x80, material_name);
  
  // 复制着色器参数
  *(undefined4 *)(target_material + 0x25) = *(undefined4 *)(source_material + 0x128);
  material_name = &DAT_18098bc73;
  if (*(undefined **)(source_material + 0x120) != (undefined *)0x0) {
    material_name = *(undefined **)(source_material + 0x120);
  }
  strcpy_s(target_material[0x24], 0x80, material_name);
  
  // 复制着色器数据
  FUN_180627be0(target_material + 0x36, source_material + 0x1b0);
  FUN_180627be0(target_material + 0x3a, source_material + 0x1d0);
  
  // 处理着色器引用
  texture_ptr1 = *(longlong **)(source_material + 0x3c8);
  if (texture_ptr1 != (longlong *)0x0) {
    (**(code **)(*texture_ptr1 + 0x28))(texture_ptr1);
  }
  texture_ptr2 = (longlong *)target_material[0x79];
  target_material[0x79] = (longlong)texture_ptr1;
  if (texture_ptr2 != (longlong *)0x0) {
    (**(code **)(*texture_ptr2 + 0x38))();
  }
  
  // 复制渲染状态
  *(undefined4 *)((longlong)target_material + 0x5c) = *(undefined4 *)(source_material + 0x5c);
  
  // 处理材质数组
  if ((char)serialize_flag != '\0') {
    texture_offset = *(longlong *)(source_material + 0x40) - *(longlong *)(source_material + 0x38) >> 4;
    FUN_180284240(target_material + 7, texture_offset);
    material_count = (int)texture_offset;
    texture_offset = (longlong)material_count;
    if (0 < material_count) {
      texture_size = 0;
      do {
        shader_param = (undefined8 *)
                 FUN_1800763c0(*(undefined8 *)(texture_size + *(longlong *)(source_material + 0x38)), &temp_stack_ptr)
        ;
        material_data = target_material[7];
        texture_data = *shader_param;
        *shader_param = 0;
        texture_ptr1 = *(longlong **)(texture_size + material_data);
        *(undefined8 *)(texture_size + material_data) = texture_data;
        if (texture_ptr1 != (longlong *)0x0) {
          (**(code **)(*texture_ptr1 + 0x38))();
        }
        if (temp_stack_ptr != (longlong *)0x0) {
          (**(code **)(*temp_stack_ptr + 0x38))();
        }
        *(longlong **)(*(longlong *)(texture_size + target_material[7]) + 0x1c8) = target_material;
        *(undefined4 *)(texture_size + 8 + target_material[7]) =
             *(undefined4 *)(texture_size + 8 + *(longlong *)(source_material + 0x38));
        texture_size = texture_size + 0x10;
        texture_offset = texture_offset + -1;
      } while (texture_offset != 0);
    }
  }
  
  // 调用材质特定的序列化方法
  // WARNING: Could not recover jumptable at 0x000180275ce1. Too many branches
  // WARNING: Treating indirect jump as call
  (**(code **)(*target_material + 0x148))(target_material, source_material + 0x330);
  return;
}





/**
 * 添加渲染元素到渲染上下文
 * 通过索引添加渲染元素，并处理引用计数和状态更新
 * @param render_context 渲染上下文指针
 * @param element_index 元素索引
 * @param element_data 元素数据指针
 * @param should_update 是否更新渲染状态
 */
void Add_Rendering_Element(longlong *render_context, int element_index, longlong *element_data, char should_update)

{
  longlong *element_ptr;
  longlong context_data;
  longlong *temp_stack_ptr;
  int element_bitmask;
  
  temp_stack_ptr = (longlong *)0x0;
  element_ptr = (longlong *)*element_data;
  if (element_ptr != (longlong *)0x0) {
    // 增加元素的引用计数
    (**(code **)(*element_ptr + 0x28))(element_ptr);
  }
  
  // 计算元素的位掩码
  element_bitmask = 1 << ((byte)element_index & 0x1f);
  temp_stack_ptr = element_ptr;
  
  // 将元素添加到渲染上下文
  FUN_1802842e0(render_context + 7, &temp_stack_ptr);
  *(longlong **)(*element_data + 0x1c8) = render_context;
  
  // 更新渲染上下文的最大索引
  if ((int)render_context[0xb] < element_index + 1) {
    *(int *)(render_context + 0xb) = element_index + 1;
  }
  
  // 如果需要更新渲染状态
  if (should_update != '\0') {
    if (*(code **)(*render_context + 0x160) == (code *)&STANDARD_RENDER_UPDATE_FUNCTION) {
      FUN_180276f30(render_context, (longlong)render_context + 0x214, 0);
    }
    else {
      (**(code **)(*render_context + 0x160))(render_context);
    }
    
    // 更新渲染统计信息
    context_data = render_context[5];
    if (context_data != 0) {
      *(short *)(context_data + 0x2b0) = *(short *)(context_data + 0x2b0) + 1;
      if (*(longlong *)(context_data + 0x168) != 0) {
        update_render_statistics();
      }
    }
  }
  
  // 清理临时指针
  if (temp_stack_ptr != (longlong *)0x0) {
    (**(code **)(*temp_stack_ptr + 0x38))();
  }
  if ((longlong *)*element_data != (longlong *)0x0) {
    (**(code **)(*(longlong *)*element_data + 0x38))();
  }
  return;
}





/**
 * 通过位掩码添加渲染元素
 * 使用位掩码方式添加渲染元素到渲染上下文中，支持批量操作
 * @param render_context 渲染上下文指针
 * @param bitmask 元素位掩码
 * @param element_data 元素数据指针
 * @param should_update 是否更新渲染状态
 */
void Add_Rendering_Element_By_Bitmask(longlong *render_context, uint bitmask, longlong *element_data, char should_update)

{
  longlong *element_ptr;
  longlong context_data;
  int bit_position;
  longlong *temp_stack_ptr;
  uint original_bitmask;
  
  temp_stack_ptr = (longlong *)0x0;
  element_ptr = (longlong *)*element_data;
  original_bitmask = bitmask;
  
  if (element_ptr != (longlong *)0x0) {
    // 增加元素的引用计数
    (**(code **)(*element_ptr + 0x28))(element_ptr);
  }
  
  temp_stack_ptr = element_ptr;
  
  // 将元素添加到渲染上下文
  FUN_1802842e0(render_context + 7, &temp_stack_ptr);
  *(longlong **)(*element_data + 0x1c8) = render_context;
  
  // 计算位掩码中最高位的位置
  bit_position = -1;
  if (bitmask != 0) {
    do {
      bit_position = bit_position + 1;
      bitmask = bitmask >> 1;
    } while (bitmask != 0);
  }
  
  // 更新渲染上下文的最大位位置
  if ((int)render_context[0xb] < bit_position + 1) {
    *(int *)(render_context + 0xb) = bit_position + 1;
  }
  
  // 如果需要更新渲染状态
  if (should_update != '\0') {
    if (*(code **)(*render_context + 0x160) == (code *)&STANDARD_RENDER_UPDATE_FUNCTION) {
      FUN_180276f30(render_context, (longlong)render_context + 0x214, 0);
    }
    else {
      (**(code **)(*render_context + 0x160))(render_context);
    }
    
    // 更新渲染统计信息
    context_data = render_context[5];
    if ((context_data != 0) &&
       (*(short *)(context_data + 0x2b0) = *(short *)(context_data + 0x2b0) + 1, *(longlong *)(context_data + 0x168) != 0
       )) {
      update_render_statistics();
    }
  }
  
  // 清理临时指针
  if (temp_stack_ptr != (longlong *)0x0) {
    (**(code **)(*temp_stack_ptr + 0x38))();
  }
  if ((longlong *)*element_data != (longlong *)0x0) {
    (**(code **)(*(longlong *)*element_data + 0x38))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/**
 * 渲染数据处理函数
 * 处理渲染系统的核心数据计算，包括矩阵变换、距离检查和元素处理
 * @param render_context 渲染上下文指针
 * @param render_flags 渲染标志指针
 * @param render_mode 渲染模式
 * @param position_data 位置数据数组
 * @param render_params 渲染参数数组
 * @return 处理结果标志
 */
ulonglong Process_Rendering_Data(undefined8 *render_context, uint *render_flags, undefined8 render_mode, float *position_data,
                       undefined8 *render_params)

{
  float distance_x;
  longlong element_ptr;
  float pos_y;
  float pos_z;
  float pos_w;
  float transform_x;
  float transform_y;
  float transform_z;
  float transform_w;
  float matrix_11;
  float matrix_12;
  float matrix_13;
  float matrix_14;
  float matrix_21;
  float matrix_22;
  float matrix_23;
  float matrix_24;
  undefined8 param_data;
  byte render_result;
  ulonglong result_flag;
  int element_index;
  longlong loop_counter;
  uint element_bitmask;
  byte success_flag;
  longlong context_ptr;
  float render_distance;
  float camera_x;
  float camera_y;
  float camera_z;
  float max_distance;
  undefined8 stack_param_1;
  undefined5 stack_param_2;
  undefined1 stack_param_3;
  undefined2 stack_param_4;
  undefined8 *stack_param_ptr;
  undefined8 stack_param_5;
  undefined4 stack_param_6;
  undefined4 stack_param_7;
  undefined4 stack_param_8;
  int stack_param_9;
  undefined8 stack_param_10;
  undefined8 stack_param_11;
  undefined8 stack_param_12;
  undefined8 stack_param_13;
  undefined4 stack_param_14;
  undefined4 stack_param_15;
  undefined4 stack_param_16;
  undefined4 stack_param_17;
  undefined4 stack_param_18;
  undefined4 stack_param_19;
  undefined4 stack_param_20;
  undefined4 stack_param_21;
  float transformed_x;
  float transformed_y;
  float transformed_z;
  float transformed_w;
  float transformed_2x;
  float transformed_2y;
  float transformed_2z;
  float transformed_2w;
  float transformed_3x;
  float transformed_3y;
  float transformed_3z;
  float transformed_3w;
  float transformed_4x;
  float transformed_4y;
  float transformed_4z;
  float transformed_4w;
  
  result_flag = (ulonglong)*(uint *)(render_context + 0x42);
  if (((*render_flags & *(uint *)(render_context + 0x42)) == 0) || (*(int *)(render_context + 0xb) == 0)) {
PROCESSING_FAILED:
    result_flag = result_flag & 0xffffffffffffff00;
  }
  else {
    // 复制渲染参数到栈空间
    stack_param_1 = *render_params;
    param_data = render_params[1];
    stack_param_5 = render_params[3];
    stack_param_6 = *(undefined4 *)(render_params + 4);
    stack_param_7 = *(undefined4 *)((longlong)render_params + 0x24);
    stack_param_8 = *(undefined4 *)(render_params + 5);
    stack_param_9 = *(int *)((longlong)render_params + 0x2c);
    stack_param_10 = render_params[6];
    stack_param_11 = render_params[7];
    stack_param_12 = render_params[8];
    stack_param_13 = render_params[9];
    stack_param_14 = *(undefined4 *)(render_params + 10);
    stack_param_15 = *(undefined4 *)((longlong)render_params + 0x54);
    stack_param_16 = *(undefined4 *)(render_params + 0xb);
    stack_param_17 = *(undefined4 *)((longlong)render_params + 0x5c);
    stack_param_18 = *(undefined4 *)(render_params + 0xc);
    stack_param_19 = *(undefined4 *)((longlong)render_params + 100);
    stack_param_20 = *(undefined4 *)(render_params + 0xd);
    stack_param_21 = *(undefined4 *)((longlong)render_params + 0x6c);
    stack_param_2._0_4_ = (int)param_data;
    element_index = (int)stack_param_2 + *(int *)((longlong)render_context + 0x5c);
    stack_param_4 = (undefined2)((ulonglong)param_data >> 0x30);
    _stack_param_2 = CONCAT15(*(undefined1 *)(render_context + 0x76),(int5)param_data);
    _stack_param_2 = CONCAT44(stack0xffffffffffffff24,element_index);
    if (stack_param_9 == 0) {
      stack_param_9 = *(int *)(render_context + 0x62);
      stack_param_8 = *(undefined4 *)(render_context + 99);
    }
    loop_counter = 0;
    if (*(char *)(render_context + 0xc) == '\0') {
      if (element_index < 0) {
        element_index = 0;
      }
      else if (*(int *)(render_context + 0xb) + -1 < element_index) {
        element_index = *(int *)(render_context + 0xb) + -1;
      }
    }
    success_flag = 1;
    element_bitmask = 1 << ((byte)element_index & 0x1f);
    stack_param_ptr = render_context;
    
    // 处理矩阵变换
    if ((*(char *)(render_context + 100) == '\0') && (*(char *)(render_context + 0x76) == -1)) {
      pos_y = *position_data;
      pos_z = position_data[1];
      transform_x = position_data[2];
      transform_y = position_data[3];
      result_flag = *(ulonglong *)(render_flags + 10);
      max_distance = *(float *)((longlong)render_context + 0x334);
      camera_x = *(float *)(render_context + 0x66);
      camera_y = *(float *)(render_context + 0x67);
      camera_z = *(float *)((longlong)render_context + 0x344);
      matrix_11 = position_data[8];
      matrix_12 = position_data[9];
      matrix_13 = position_data[10];
      matrix_14 = position_data[0xb];
      matrix_21 = position_data[4];
      matrix_22 = position_data[5];
      matrix_23 = position_data[6];
      matrix_24 = position_data[7];
      transform_z = *(float *)(render_context + 0x68);
      
      // 第一行变换计算
      transformed_x = max_distance * matrix_21 + camera_x * pos_y + camera_y * matrix_11;
      transformed_y = max_distance * matrix_22 + camera_x * pos_z + camera_y * matrix_12;
      transformed_z = max_distance * matrix_23 + camera_x * transform_x + camera_y * matrix_13;
      transformed_w = max_distance * matrix_24 + camera_x * transform_y + camera_y * matrix_14;
      
      max_distance = *(float *)(render_context + 0x69);
      camera_x = *(float *)(render_context + 0x6a);
      camera_y = *(float *)((longlong)render_context + 0x354);
      
      // 第二行变换计算
      transformed_2x = camera_z * matrix_21 + transform_z * pos_y + max_distance * matrix_11;
      transformed_2y = camera_z * matrix_22 + transform_z * pos_z + max_distance * matrix_12;
      transformed_2z = camera_z * matrix_23 + transform_z * transform_x + max_distance * matrix_13;
      transformed_2w = camera_z * matrix_24 + transform_z * transform_y + max_distance * matrix_14;
      
      max_distance = *(float *)(render_context + 0x6b);
      camera_z = *(float *)((longlong)render_context + 0x364);
      transform_z = *(float *)(render_context + 0x6c);
      
      // 第三行变换计算
      transformed_3x = camera_y * matrix_21 + camera_x * pos_y + max_distance * matrix_11;
      transformed_3y = camera_y * matrix_22 + camera_x * pos_z + max_distance * matrix_12;
      transformed_3z = camera_y * matrix_23 + camera_x * transform_x + max_distance * matrix_13;
      transformed_3w = camera_y * matrix_24 + camera_x * transform_y + max_distance * matrix_14;
      
      max_distance = *(float *)(render_context + 0x6d);
      
      // 第四行变换计算（带平移）
      transformed_4x = camera_z * matrix_21 + transform_z * pos_y + max_distance * matrix_11 + position_data[0xc];
      transformed_4y = camera_z * matrix_22 + transform_z * pos_z + max_distance * matrix_12 + position_data[0xd];
      transformed_4z = camera_z * matrix_23 + transform_z * transform_x + max_distance * matrix_13 + position_data[0xe];
      transformed_4w = camera_z * matrix_24 + transform_z * transform_y + max_distance * matrix_14 + position_data[0xf];
      
      // 距离检查
      if ((result_flag != 0) && (max_distance = *(float *)(render_context + 0xd), max_distance != 3.4028235e+38)) {
        if ((undefined *)*render_context == &STANDARD_RENDER_CONTEXT) {
          context_ptr = (longlong)render_context + 0x214;
        }
        else {
          context_ptr = (**(code **)((undefined *)*render_context + 0x198))(render_context);
          max_distance = *(float *)(render_context + 0xd);
          result_flag = *(ulonglong *)(render_flags + 10);
        }
        camera_z = *(float *)(result_flag + 0x124) - transformed_4y;
        camera_y = *(float *)(result_flag + 0x120) - transformed_4x;
        camera_x = *(float *)(result_flag + 0x128) - transformed_4z;
        if (max_distance * max_distance <
            (camera_z * camera_z + camera_y * camera_y + camera_x * camera_x) -
            *(float *)(context_ptr + 0x30) * *(float *)(context_ptr + 0x30)) goto PROCESSING_FAILED;
      }
      
      // 处理渲染元素
      element_index = (int)((longlong)(render_context[8] - render_context[7]) >> 4);
      context_ptr = (longlong)element_index;
      if (0 < element_index) {
        do {
          element_ptr = *(longlong *)(loop_counter + render_context[7]);
          if ((element_ptr != 0) && ((*(uint *)(loop_counter + 8 + render_context[7]) & element_bitmask) != 0)) {
            if (((render_flags[0x6f6] & 0x20) != 0) && ((*(uint *)(element_ptr + 0x100) & 0x400000) != 0)) {
              *(undefined4 *)(render_context + 0x65) = *(undefined4 *)(GLOBAL_RENDER_DATA + 0x224);
            }
            render_result = process_render_element(element_ptr,render_flags,&transformed_x,render_mode,&stack_param_1);
            success_flag = success_flag & render_result;
          }
          loop_counter = loop_counter + 0x10;
          context_ptr = context_ptr + -1;
        } while (context_ptr != 0);
        return (ulonglong)success_flag;
      }
    }
    else {
      // 简化距离检查
      result_flag = *(ulonglong *)(render_flags + 10);
      if ((result_flag != 0) && (max_distance = *(float *)(render_context + 0xd), max_distance != 3.4028235e+38)) {
        if ((undefined *)*render_context == &STANDARD_RENDER_CONTEXT) {
          context_ptr = (longlong)render_context + 0x214;
        }
        else {
          context_ptr = (**(code **)((undefined *)*render_context + 0x198))(render_context);
          max_distance = *(float *)(render_context + 0xd);
          result_flag = *(ulonglong *)(render_flags + 10);
        }
        camera_z = *(float *)(result_flag + 0x124) - position_data[0xd];
        camera_y = *(float *)(result_flag + 0x120) - position_data[0xc];
        camera_x = *(float *)(result_flag + 0x128) - position_data[0xe];
        if (max_distance * max_distance <
            (camera_z * camera_z + camera_y * camera_y + camera_x * camera_x) -
            *(float *)(context_ptr + 0x30) * *(float *)(context_ptr + 0x30)) goto PROCESSING_FAILED;
      }
      
      // 处理渲染元素（简化版本）
      element_index = (int)((longlong)(render_context[8] - render_context[7]) >> 4);
      context_ptr = (longlong)element_index;
      if (0 < element_index) {
        do {
          element_ptr = *(longlong *)(loop_counter + render_context[7]);
          if ((element_ptr != 0) && ((*(uint *)(loop_counter + 8 + render_context[7]) & element_bitmask) != 0)) {
            if (((render_flags[0x6f6] & 0x20) != 0) && ((*(uint *)(element_ptr + 0x100) & 0x400000) != 0)) {
              *(undefined4 *)(render_context + 0x65) = *(undefined4 *)(GLOBAL_RENDER_DATA + 0x224);
            }
            if ((*(byte *)(element_ptr + 0x100) & 0x20) == 0) {
              render_result = process_render_element(element_ptr,render_flags,position_data,render_mode,&stack_param_1);
              success_flag = success_flag & render_result;
            }
            else {
              direct_render_processing(element_ptr,position_data);
            }
          }
          loop_counter = loop_counter + 0x10;
          context_ptr = context_ptr + -1;
        } while (context_ptr != 0);
      }
    }
    result_flag = (ulonglong)success_flag;
  }
  return result_flag;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/**
 * 渲染参数计算函数
 * 计算渲染变换矩阵和参数，执行距离检查和元素处理
 * @param transform_param_1 变换参数1
 * @param transform_param_2 变换参数2
 * @param transform_param_3 变换参数3
 * @param transform_param_4 变换参数4
 * @return 处理结果标志
 */
ulonglong Calculate_Render_Parameters(undefined8 transform_param_1, undefined8 transform_param_2, undefined8 transform_param_3, undefined8 transform_param_4)

{
  float matrix_scale;
  float distance_calc;
  longlong element_ptr;
  float transform_x;
  float transform_y;
  float transform_z;
  float transform_w;
  float matrix_x;
  float matrix_y;
  float matrix_z;
  float matrix_w;
  float scale_x;
  float scale_y;
  float scale_z;
  float scale_w;
  byte render_result;
  int element_count;
  ulonglong context_data;
  ulonglong result_flag;
  undefined8 *render_context;
  longlong stack_base;
  longlong render_state;
  longlong element_array;
  longlong matrix_params;
  uint element_bitmask;
  byte success_flag;
  longlong distance_context;
  float camera_distance;
  float render_x;
  float float_param_1;
  float float_param_2;
  float render_y;
  float float_param_3;
  float float_param_4;
  float render_z;
  float matrix_value_1;
  float matrix_value_2;
  float matrix_value_3;
  float matrix_value_4;
  float matrix_value_5;
  float matrix_value_6;
  float matrix_value_7;
  float matrix_value_8;
  
  // 读取矩阵参数
  transform_x = *(float *)(matrix_params + 0x20);
  transform_y = *(float *)(matrix_params + 0x24);
  transform_z = *(float *)(matrix_params + 0x28);
  transform_w = *(float *)(matrix_params + 0x2c);
  matrix_x = *(float *)(matrix_params + 0x10);
  matrix_y = *(float *)(matrix_params + 0x14);
  matrix_z = *(float *)(matrix_params + 0x18);
  matrix_w = *(float *)(matrix_params + 0x1c);
  matrix_value_1 = *(float *)(render_context + 0x68);
  matrix_value_2 = *(float *)(render_context + 0x69);
  matrix_value_3 = *(float *)(render_context + 0x6a);
  
  // 计算第一行变换
  *(float *)(stack_base + -0x21) = (float)transform_param_3 * matrix_x + (float)transform_param_1 + (float)transform_param_2 * transform_x;
  *(float *)(stack_base + -0x1d) =
       (float)((ulonglong)transform_param_3 >> 0x20) * matrix_y + (float)((ulonglong)transform_param_1 >> 0x20) +
       (float)((ulonglong)transform_param_2 >> 0x20) * transform_y;
  *(float *)(stack_base + -0x19) = float_param_3 * matrix_z + float_param_1 + float_param_2 * transform_z;
  *(float *)(stack_base + -0x15) = float_param_4 * matrix_w + float_param_2 + float_param_2 * transform_w;
  
  render_z = *(float *)((longlong)render_context + 0x354);
  matrix_scale = *(float *)(render_context + 0x6b);
  
  // 计算第二行变换
  *(float *)(stack_base + -0x11) = (float)transform_param_4 * matrix_x + matrix_value_1 * matrix_value_5 + matrix_value_2 * transform_x;
  *(float *)(stack_base + -0xd) =
       (float)((ulonglong)transform_param_4 >> 0x20) * matrix_y + matrix_value_1 * matrix_value_6 + matrix_value_2 * transform_y;
  *(float *)(stack_base + -9) = matrix_value_7 * matrix_z + matrix_value_1 * matrix_value_7 + matrix_value_2 * transform_z;
  *(float *)(stack_base + -5) = matrix_value_8 * matrix_w + matrix_value_1 * matrix_value_8 + matrix_value_2 * transform_w;
  
  matrix_value_1 = *(float *)((longlong)render_context + 0x364);
  matrix_value_2 = *(float *)(render_context + 0x6c);
  distance_calc = *(float *)(render_context + 0x6d);
  
  // 计算第三行变换
  *(float *)(stack_base + -1) = render_z * matrix_x + matrix_value_3 * matrix_value_5 + matrix_scale * transform_x;
  *(float *)(stack_base + 3) = render_z * matrix_y + matrix_value_3 * matrix_value_6 + matrix_scale * transform_y;
  *(float *)(stack_base + 7) = render_z * matrix_z + matrix_value_3 * matrix_value_7 + matrix_scale * transform_z;
  *(float *)(stack_base + 0xb) = render_z * matrix_w + matrix_value_3 * matrix_value_8 + matrix_scale * transform_w;
  
  matrix_value_3 = *(float *)(matrix_params + 0x34);
  render_z = *(float *)(matrix_params + 0x38);
  matrix_scale = *(float *)(matrix_params + 0x3c);
  
  // 计算第四行变换（带平移）
  *(float *)(stack_base + 0xf) =
       matrix_value_1 * matrix_x + matrix_value_2 * matrix_value_5 + distance_calc * transform_x + *(float *)(matrix_params + 0x30);
  *(float *)(stack_base + 0x13) = matrix_value_1 * matrix_y + matrix_value_2 * matrix_value_6 + distance_calc * transform_y + matrix_value_3;
  *(float *)(stack_base + 0x17) = matrix_value_1 * matrix_z + matrix_value_2 * matrix_value_7 + distance_calc * transform_z + render_z;
  *(float *)(stack_base + 0x1b) = matrix_value_1 * matrix_w + matrix_value_2 * matrix_value_8 + distance_calc * transform_w + matrix_scale;
  
  // 距离检查
  if ((context_data != 0) && (matrix_value_1 = *(float *)(render_context + 0xd), matrix_value_1 != 3.4028235e+38)) {
    if ((undefined *)*render_context == &STANDARD_RENDER_CONTEXT) {
      distance_context = (longlong)render_context + 0x214;
    }
    else {
      distance_context = (**(code **)((undefined *)*render_context + 0x198))();
      matrix_value_1 = *(float *)(render_context + 0xd);
      context_data = *(ulonglong *)(render_state + 0x28);
    }
    render_z = *(float *)(context_data + 0x124) - *(float *)(stack_base + 0x13);
    matrix_value_3 = *(float *)(context_data + 0x120) - *(float *)(stack_base + 0xf);
    matrix_value_2 = *(float *)(context_data + 0x128) - *(float *)(stack_base + 0x17);
    if (matrix_value_1 * matrix_value_1 <
        (render_z * render_z + matrix_value_3 * matrix_value_3 + matrix_value_2 * matrix_value_2) -
        *(float *)(distance_context + 0x30) * *(float *)(distance_context + 0x30)) {
      return context_data & 0xffffffffffffff00;
    }
  }
  
  // 处理渲染元素
  element_count = (int)((longlong)(render_context[8] - render_context[7]) >> 4);
  distance_context = (longlong)element_count;
  if (element_count < 1) {
    result_flag = (ulonglong)success_flag;
  }
  else {
    do {
      element_ptr = *(longlong *)(element_array + render_context[7]);
      if ((element_ptr != 0) && ((*(uint *)(element_array + 8 + render_context[7]) & element_bitmask) != 0)) {
        if (((*(byte *)(render_state + 0x1bd8) & 0x20) != 0) &&
           ((*(uint *)(element_ptr + 0x100) & 0x400000) != 0)) {
          *(undefined4 *)(render_context + 0x65) = *(undefined4 *)(GLOBAL_RENDER_DATA + 0x224);
        }
        render_result = process_render_element();
        success_flag = success_flag & render_result;
      }
      element_array = element_array + 0x10;
      distance_context = distance_context + -1;
    } while (distance_context != 0);
    result_flag = (ulonglong)success_flag;
  }
  return result_flag;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/**
 * 渲染距离检查函数
 * 执行渲染距离检查和元素处理，判断渲染对象是否在可见范围内
 * @param render_context 渲染上下文指针（通过寄存器传递）
 * @param render_state 渲染状态指针（通过寄存器传递）
 * @param element_array 元素数组指针（通过寄存器传递）
 * @param element_bitmask 元素位掩码（通过寄存器传递）
 * @param success_flag 成功标志（通过寄存器传递）
 * @return 处理结果标志
 */
ulonglong Check_Render_Distance(undefined8 *render_context, longlong render_state, longlong element_array, uint element_bitmask, byte success_flag)

{
  longlong element_ptr;
  byte render_result;
  int element_count;
  ulonglong context_data;
  ulonglong result_flag;
  longlong distance_context;
  float max_distance;
  float camera_y;
  float camera_x;
  float camera_z;
  float transform_y;
  float transform_x;
  float transform_z;
  
  // 获取最大渲染距离
  max_distance = *(float *)(render_context + 0xd);
  if (max_distance != 3.4028235e+38) {
    // 获取距离检查上下文
    if ((undefined *)*render_context == &STANDARD_RENDER_CONTEXT) {
      distance_context = (longlong)render_context + 0x214;
    }
    else {
      distance_context = (**(code **)((undefined *)*render_context + 0x198))();
      max_distance = *(float *)(render_context + 0xd);
      context_data = *(ulonglong *)(render_state + 0x28);
    }
    // 计算相机到变换点的距离
    camera_z = *(float *)(context_data + 0x124) - *(float *)(render_state + 0x13);
    camera_y = *(float *)(context_data + 0x120) - *(float *)(render_state + 0xf);
    camera_x = *(float *)(context_data + 0x128) - *(float *)(render_state + 0x17);
    // 检查距离是否在范围内
    if (max_distance * max_distance <
        (camera_z * camera_z + camera_y * camera_y + camera_x * camera_x) -
        *(float *)(distance_context + 0x30) * *(float *)(distance_context + 0x30)) {
      return context_data & 0xffffffffffffff00;
    }
  }
  // 处理渲染元素
  element_count = (int)((longlong)(render_context[8] - render_context[7]) >> 4);
  distance_context = (longlong)element_count;
  if (element_count < 1) {
    result_flag = (ulonglong)success_flag;
  }
  else {
    do {
      element_ptr = *(longlong *)(element_array + render_context[7]);
      if ((element_ptr != 0) && ((*(uint *)(element_array + 8 + render_context[7]) & element_bitmask) != 0)) {
        // 检查渲染状态标志
        if (((*(byte *)(render_state + 0x1bd8) & 0x20) != 0) &&
           ((*(uint *)(element_ptr + 0x100) & 0x400000) != 0)) {
          *(undefined4 *)(render_context + 0x65) = *(undefined4 *)(GLOBAL_RENDER_DATA + 0x224);
        }
        // 处理渲染元素
        render_result = process_render_element();
        success_flag = success_flag & render_result;
      }
      element_array = element_array + 0x10;
      distance_context = distance_context + -1;
    } while (distance_context != 0);
    result_flag = (ulonglong)success_flag;
  }
  return result_flag;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/**
 * 渲染元素处理函数
 * 处理渲染元素的遍历和渲染操作，根据元素类型选择不同的处理方式
 * @param element_count 元素数量
 * @param render_context 渲染上下文指针（通过寄存器传递）
 * @param render_state 渲染状态指针（通过寄存器传递）
 * @param element_ptr 元素指针（通过寄存器传递）
 * @param element_bitmask 元素位掩码（通过寄存器传递）
 * @param success_flag 成功标志（通过寄存器传递）
 * @return 处理结果标志
 */
byte Process_Render_Elements(int element_count, undefined8 *render_context, longlong render_state, longlong element_ptr, uint element_bitmask, byte success_flag)

{
  longlong render_element;
  byte render_result;
  longlong loop_counter;
  
  loop_counter = (longlong)element_count;
  if (0 < element_count) {
    do {
      render_element = *(longlong *)(element_ptr + *(longlong *)(render_context + 0x38));
      if ((render_element != 0) &&
         ((*(uint *)(element_ptr + 8 + *(longlong *)(render_context + 0x38)) & element_bitmask) != 0)) {
        // 检查渲染状态标志
        if (((*(byte *)(render_state + 0x1bd8) & 0x20) != 0) &&
           ((*(uint *)(render_element + 0x100) & 0x400000) != 0)) {
          *(undefined4 *)(render_context + 0x328) = *(undefined4 *)(GLOBAL_RENDER_DATA + 0x224);
        }
        // 根据元素类型选择处理方式
        if ((*(byte *)(render_element + 0x100) & 0x20) == 0) {
          // 标准渲染处理
          render_result = process_render_element();
          success_flag = success_flag & render_result;
        }
        else {
          // 直接渲染处理
          direct_render_processing();
        }
      }
      element_ptr = element_ptr + 0x10;
      loop_counter = loop_counter + -1;
    } while (loop_counter != 0);
  }
  return success_flag;
}



/**
 * 简单返回函数
 * 返回传入的参数值，用于寄存器值传递
 * @param return_value 返回值（通过寄存器传递）
 * @return 传入的参数值
 */
undefined1 Return_Parameter_Value(undefined1 return_value)

{
  return return_value;
}



/**
 * 渲染上下文更新函数
 * 更新渲染上下文的距离参数和处理渲染元素
 * @param render_context 渲染上下文指针
 * @param render_data 渲染数据指针
 * @param element_index 元素索引
 * @param transform_params 变换参数数组
 * @return 处理结果标志
 */
ulonglong Update_Render_Context(longlong render_context, longlong render_data, int element_index, undefined8 *transform_params)

{
  float max_distance;
  float current_distance;
  ulonglong result_flag;
  longlong element_data;
  int loop_counter;
  longlong array_offset;
  float new_distance;
  undefined8 stack_params[8];
  
  // 检查渲染上下文是否有效
  if (*(int *)(render_context + 0x58) != 0) {
    // 处理变换参数
    if (*(char *)(render_context + 800) == '\0') {
      matrix_transform_setup(&stack_params[0], transform_params, render_context + 0x330);
    }
    else {
      // 直接复制变换参数
      stack_params[0] = *transform_params;
      stack_params[1] = transform_params[1];
      stack_params[2] = transform_params[2];
      stack_params[3] = transform_params[3];
      stack_params[4] = transform_params[4];
      stack_params[5] = transform_params[5];
      stack_params[6] = transform_params[6];
      stack_params[7] = transform_params[7];
    }
    
    // 获取最大渲染距离
    max_distance = *(float *)(render_context + 0x68);
    element_data = (longlong)element_index * 0xbc + *(longlong *)(render_data + 0x98);
    new_distance = 3.4028235e+38;
    
    // 计算新的距离值
    if (max_distance != 3.4028235e+38) {
      current_distance = *(float *)(element_data + 0xb8);
      new_distance = max_distance * max_distance;
      if (max_distance * max_distance <= current_distance) {
        new_distance = current_distance;
      }
    }
    *(float *)(element_data + 0xb8) = new_distance;
    
    // 处理渲染元素
    loop_counter = 0;
    element_data = *(longlong *)(render_context + 0x38);
    result_flag = *(longlong *)(render_context + 0x40) - element_data >> 4;
    if (result_flag != 0) {
      array_offset = 0;
      do {
        if (*(longlong *)(array_offset + element_data) != 0) {
          // 处理单个渲染元素
          process_single_element(*(longlong *)(array_offset + element_data), render_data, element_index, &stack_params[0],
                        *(undefined4 *)(array_offset + 8 + element_data), *(undefined4 *)(render_context + 0x58));
        }
        element_data = *(longlong *)(render_context + 0x38);
        loop_counter = loop_counter + 1;
        array_offset = array_offset + 0x10;
        result_flag = (ulonglong)loop_counter;
      } while (result_flag < (ulonglong)(*(longlong *)(render_context + 0x40) - element_data >> 4));
    }
    return CONCAT71((int7)(result_flag >> 8), 1);
  }
  return result_flag & 0xffffffffffffff00;
}



/**
 * 渲染循环处理函数
 * 遍历渲染元素数组并处理每个元素
 * @param render_context 渲染上下文指针
 * @param element_offset 元素偏移量
 * @param element_index 元素索引（通过寄存器传递）
 * @return 处理结果标志
 */
undefined8 Process_Render_Loop(undefined8 render_context, longlong element_offset, uint element_index)

{
  undefined8 *context_ptr;
  ulonglong array_index;
  undefined4 render_flag;
  
  context_ptr = (undefined8 *)render_context;
  array_index = (ulonglong)element_index;
  
  do {
    if (*(longlong *)(array_index + element_offset) != 0) {
      render_flag = *(undefined4 *)(context_ptr + 0x58);
      process_single_element();
    }
    element_offset = *(longlong *)(context_ptr + 0x38);
    element_index = element_index + 1;
    array_index = array_index + 0x10;
  } while ((ulonglong)(longlong)(int)element_index <
           (ulonglong)(*(longlong *)(context_ptr + 0x40) - element_offset >> 4));
  
  return CONCAT71((int7)(int3)(element_index >> 8), 1);
}



undefined1 FUN_1802764fd(void)

{
  return 1;
}



// WARNING: Removing unreachable block (ram,0x000180276696)
// WARNING: Removing unreachable block (ram,0x0001802766d5)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180276610(longlong param_1,undefined4 param_2)
void FUN_180276610(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong *plStack_68;
  undefined1 auStack_60 [8];
  longlong *plStack_58;
  undefined4 uStack_50;
  longlong *plStack_48;
  undefined2 uStack_40;
  char cStack_3e;
  
  plVar6 = *(longlong **)(param_1 + 0x38);
  if (plVar6 < *(longlong **)(param_1 + 0x40)) {
    do {
      plVar1 = (longlong *)*plVar6;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x28))(plVar1);
      }
      plStack_48 = (longlong *)0x0;
      plStack_58 = (longlong *)0x0;
      auStack_60[0] = 0;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x28))(plVar1);
      }
      uStack_50 = 0;
      plStack_58 = plVar1;
      FUN_18007f4c0(auStack_60);
      plVar2 = plStack_48;
      if (plStack_48 != (longlong *)0x0) {
        (**(code **)(*plStack_48 + 0x28))(plStack_48);
      }
      plStack_68 = plVar2;
      uStack_40 = 0;
      cStack_3e = '\0';
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x38))(plVar1);
      }
      uVar3 = 0;
      uVar5 = 0;
      if (0 < (int)plVar2[0xc]) {
        do {
          *(undefined4 *)(plVar2[0xd] + 0x54 + uVar3) = param_2;
          uVar4 = (int)uVar5 + 1;
          uVar3 = uVar3 + 0x5c;
          uVar5 = (ulonglong)uVar4;
        } while ((int)uVar4 < (int)plVar2[0xc]);
      }
      uStack_40 = CONCAT11(uStack_40._1_1_,1);
      if ((plVar1 != (longlong *)0x0) && (plVar2 != (longlong *)0x0)) {
        if (cStack_3e != '\0') {
          FUN_180075b70();
        }
        FUN_18007f6a0(auStack_60);
        if ((char)uStack_40 != '\0') {
          FUN_180079520(plVar1);
        }
        if (uStack_40._1_1_ != '\0') {
          FUN_180079520(plVar1);
        }
        plStack_68 = (longlong *)0x0;
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x38))();
        }
      }
      FUN_18007f6a0(auStack_60);
      if (plStack_48 != (longlong *)0x0) {
        (**(code **)(*plStack_48 + 0x38))();
      }
      if (plStack_68 != (longlong *)0x0) {
        (**(code **)(*plStack_68 + 0x38))();
      }
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x38))();
      }
      plVar6 = plVar6 + 2;
    } while (plVar6 < *(longlong **)(param_1 + 0x40));
  }
  return;
}





