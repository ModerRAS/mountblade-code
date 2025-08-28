#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 03_rendering_part014.c - 渲染系统相关函数
// 本文件包含3个函数，主要用于渲染对象的管理和变换操作

/**
 * 更新渲染对象的状态和属性
 * 
 * @param render_context 渲染上下文指针
 * @param object_list 对象列表指针
 * 
 * 此函数遍历对象列表，更新每个对象的渲染状态，包括：
 * - 对象的引用关系管理
 * - 渲染标志位设置
 * - 对象属性更新
 */
void update_render_object_status(longlong render_context, longlong *object_list)
{
  byte status_flag;
  longlong object_data;
  longlong *object_ptr;
  longlong temp_data;
  int8_t render_mode;
  byte attribute_byte;
  uint attribute_mask;
  longlong *list_iterator;
  longlong loop_counter;
  longlong *current_object;
  
  // 获取对象列表起始位置
  list_iterator = *(longlong **)(render_context + 0x38);
  if (list_iterator < *(longlong **)(render_context + 0x40)) {
    do {
      object_data = *list_iterator;
      current_object = (longlong *)*object_list;
      if (current_object != *(longlong **)(object_data + 0x1b8)) {
        // 检查对象是否处于非活动状态
        if (*(char *)(object_data + 0xb1) == '\0') {
          // 释放旧对象的引用
          if (current_object != (longlong *)0x0) {
            (**(code **)(*current_object + 0x28))(current_object);
          }
          // 更新对象引用关系
          object_ptr = *(longlong **)(object_data + 0x1b8);
          *(longlong **)(object_data + 0x1b8) = current_object;
          if (object_ptr != (longlong *)0x0) {
            (**(code **)(*object_ptr + 0x38))();
          }
          
          // 更新对象属性
          temp_data = *(longlong *)(object_data + 0x1b8);
          if (temp_data != 0) {
            // 设置状态标志位
            status_flag = (byte)((uint)*(int32_t *)(*(longlong *)(temp_data + 0x1e0) + 0x1588) >> 0x1b) << 7;
            attribute_byte = *(byte *)(object_data + 0xfd);
            *(byte *)(object_data + 0xfd) = status_flag | attribute_byte & 0x7f;
            
            // 处理属性掩码
            attribute_mask = *(uint *)(temp_data + 0x138) & 0x3000;
            if (attribute_mask == 0x1000) {
              *(int8_t *)(object_data + 0xf7) = 1;
            }
            else {
              render_mode = 0;
              if (attribute_mask == 0x2000) {
                render_mode = 2;
              }
              *(int8_t *)(object_data + 0xf7) = render_mode;
            }
            
            // 更新状态字节
            status_flag = status_flag | attribute_byte & 0x77;
            *(byte *)(object_data + 0xfd) = status_flag;
            
            // 检查子对象状态
            loop_counter = 0;
            current_object = (longlong *)(temp_data + 0xb8);
            do {
              if (0xf < loop_counter) break;
              if ((*current_object != 0) && (*(int *)(*current_object + 0x36c) != 0)) {
                status_flag = status_flag | 8;
                *(byte *)(object_data + 0xfd) = status_flag;
              }
              loop_counter = loop_counter + 1;
              current_object = current_object + 1;
            } while ((status_flag & 8) == 0);
            
            // 触发对象更新
            FUN_1800781e0(object_data);
          }
        }
        else {
          // 处理错误情况
          FUN_180626f80(&unknown_var_5232_ptr);
        }
      }
      list_iterator = list_iterator + 2;
    } while (list_iterator < *(longlong **)(render_context + 0x40));
  }
  return;
}


/**
 * 执行渲染变换操作
 * 
 * @param transform_matrix 变换矩阵指针
 * @param transform_type 变换类型
 * @param input_position 输入位置向量
 * @param output_position 输出位置向量
 * @param render_flags 渲染标志
 * @param blend_mode 混合模式
 * @param shader_data 着色器数据
 * @param texture_slot 纹理槽位
 * 
 * 此函数执行复杂的3D变换计算，包括：
 * - 矩阵变换
 * - 位置计算
 * - 渲染状态设置
 */
void perform_render_transform(uint64_t *transform_matrix, longlong transform_type, float *input_position, float *output_position,
                             int32_t render_flags, int blend_mode, longlong shader_data, char texture_slot)
{
  uint *lock_ptr;
  uint64_t *data_ptr;
  float transform_value;
  uint lock_status;
  longlong shader_offset;
  float matrix_values[16];
  float input_coords[4];
  float output_coords[4];
  float temp_values[16];
  int32_t max_float;
  float *shader_params;
  longlong transform_offset;
  float distance_values[4];
  float stack_vars[64];
  uint64_t stack_data[4];
  float transform_result[4];
  
  // 栈保护检查
  stack_data[0] = GET_SECURITY_COOKIE() ^ (ulonglong)stack_vars;
  
  // 检查渲染标志
  if (*(int *)(transform_matrix + 0x42) != 0) {
    // 获取着色器参数
    if ((void *)*transform_matrix == &unknown_var_9304_ptr) {
      shader_params = (float *)(transform_matrix + 0x66);
    }
    else {
      shader_params = (float *)(**(code **)((void *)*transform_matrix + 0x158))(transform_matrix);
    }
    
    // 提取变换矩阵数据
    matrix_values[0] = *(float *)(shader_data + 0x70);
    matrix_values[1] = *(float *)(shader_data + 0x74);
    matrix_values[2] = *(float *)(shader_data + 0x78);
    matrix_values[3] = *(float *)(shader_data + 0x7c);
    matrix_values[4] = *(float *)(shader_data + 0x80);
    matrix_values[5] = *(float *)(shader_data + 0x84);
    matrix_values[6] = *(float *)(shader_data + 0x88);
    matrix_values[7] = *(float *)(shader_data + 0x8c);
    matrix_values[8] = *(float *)(shader_data + 0x90);
    matrix_values[9] = *(float *)(shader_data + 0x94);
    matrix_values[10] = *(float *)(shader_data + 0x98);
    matrix_values[11] = *(float *)(shader_data + 0x9c);
    
    // 计算变换结果
    temp_values[0] = shader_params[1];
    temp_values[1] = shader_params[0];
    temp_values[2] = shader_params[2];
    temp_values[3] = shader_params[5];
    temp_values[4] = shader_params[9];
    temp_values[5] = shader_params[13];
    temp_values[6] = shader_params[4];
    
    // 执行矩阵乘法
    transform_result[0] = temp_values[0] * matrix_values[4] + temp_values[1] * matrix_values[0] + temp_values[2] * matrix_values[8];
    transform_result[1] = temp_values[0] * matrix_values[5] + temp_values[1] * matrix_values[1] + temp_values[2] * matrix_values[9];
    transform_result[2] = temp_values[0] * matrix_values[6] + temp_values[1] * matrix_values[2] + temp_values[2] * matrix_values[10];
    stack_vars[15] = temp_values[0] * matrix_values[7] + temp_values[1] * matrix_values[3] + temp_values[2] * matrix_values[11];
    
    temp_values[0] = shader_params[6];
    temp_values[1] = shader_params[8];
    transform_result[3] = temp_values[3] * matrix_values[4] + temp_values[6] * matrix_values[0] + temp_values[0] * matrix_values[8];
    transform_result[4] = temp_values[3] * matrix_values[5] + temp_values[6] * matrix_values[1] + temp_values[0] * matrix_values[9];
    transform_result[5] = temp_values[3] * matrix_values[6] + temp_values[6] * matrix_values[2] + temp_values[0] * matrix_values[10];
    stack_vars[14] = temp_values[3] * matrix_values[7] + temp_values[6] * matrix_values[3] + temp_values[0] * matrix_values[11];
    
    temp_values[0] = shader_params[10];
    temp_values[2] = shader_params[12];
    transform_result[6] = temp_values[4] * matrix_values[4] + temp_values[1] * matrix_values[0] + temp_values[0] * matrix_values[8];
    transform_result[7] = temp_values[4] * matrix_values[5] + temp_values[1] * matrix_values[1] + temp_values[0] * matrix_values[9];
    transform_result[8] = temp_values[4] * matrix_values[6] + temp_values[1] * matrix_values[2] + temp_values[0] * matrix_values[10];
    temp_values[4] = temp_values[4] * matrix_values[7] + temp_values[1] * matrix_values[3] + temp_values[0] * matrix_values[11];
    
    temp_values[0] = shader_params[14];
    stack_vars[8] = temp_values[5] * matrix_values[4] + temp_values[2] * matrix_values[0] + temp_values[0] * matrix_values[8] + *(float *)(shader_data + 0xa0);
    stack_vars[9] = temp_values[5] * matrix_values[5] + temp_values[2] * matrix_values[1] + temp_values[0] * matrix_values[9] + *(float *)(shader_data + 0xa4);
    stack_vars[10] = temp_values[5] * matrix_values[6] + temp_values[2] * matrix_values[2] + temp_values[0] * matrix_values[10] + *(float *)(shader_data + 0xa8);
    stack_vars[11] = temp_values[5] * matrix_values[7] + temp_values[2] * matrix_values[3] + temp_values[0] * matrix_values[11] + *(float *)(shader_data + 0xac);
    
    // 计算位置差异
    temp_values[0] = *input_position - stack_vars[8];
    temp_values[1] = input_position[1] - stack_vars[9];
    temp_values[2] = input_position[2] - stack_vars[10];
    stack_vars[13] = temp_values[0] * transform_result[0] + temp_values[1] * transform_result[1] + temp_values[2] * transform_result[2];
    stack_vars[12] = temp_values[0] * transform_result[3] + temp_values[1] * transform_result[4] + temp_values[2] * transform_result[5];
    stack_vars[11] = temp_values[0] * transform_result[6] + temp_values[1] * transform_result[7] + temp_values[2] * transform_result[8];
    
    // 设置栈变量
    _fStack_1c8 = CONCAT44(stack_vars[12], stack_vars[13]);
    _fStack_1c0 = CONCAT44(temp_values[0] * temp_values[4] + temp_values[1] * temp_values[4] + temp_values[2] * temp_values[4], stack_vars[11]);
    
    transform_offset = (longlong)texture_slot * 0x100;
    shader_offset = *(longlong *)(*(longlong *)(shader_data + 0x260) + 0x18);
    
    // 加锁操作
    do {
      LOCK();
      lock_ptr = (uint *)(transform_offset + shader_offset);
      lock_status = *lock_ptr;
      *lock_ptr = *lock_ptr | 1;
      UNLOCK();
    } while ((lock_status & 1) != 0);
    
    // 读取变换数据
    data_ptr = (uint64_t *)(transform_offset + 4 + shader_offset);
    stack_data[1] = *data_ptr;
    stack_data[2] = data_ptr[1];
    shader_params = (float *)(transform_offset + 0x14 + shader_offset);
    stack_vars[16] = *shader_params;
    stack_vars[17] = shader_params[1];
    stack_vars[18] = shader_params[2];
    stack_vars[19] = shader_params[3];
    
    // 更新变换结果
    stack_vars[13] = stack_vars[13] - stack_vars[16];
    *(int32_t *)(transform_offset + shader_offset) = 0;
    max_float = 0x7f7fffff;
    stack_vars[12] = stack_vars[12] - stack_vars[17];
    stack_vars[11] = stack_vars[11] - stack_vars[18];
    
    // 保存变换参数
    stack_vars[0] = transform_result[0];
    stack_vars[1] = transform_result[1];
    stack_vars[2] = transform_result[2];
    stack_vars[3] = transform_result[3];
    stack_vars[4] = transform_result[4];
    stack_vars[5] = transform_result[5];
    stack_vars[6] = transform_result[6];
    stack_vars[7] = transform_result[7];
    stack_vars[8] = transform_result[8];
    stack_data[3] = stack_data[1];
    stack_data[4] = stack_data[2];
    stack_vars[20] = stack_vars[16];
    stack_vars[21] = stack_vars[17];
    stack_vars[22] = stack_vars[18];
    stack_vars[23] = stack_vars[19];
    
    // 执行变换操作
    FUN_180285b40(&stack_data[1], &stack_vars[24], &stack_vars[13]);
    
    // 处理输出位置
    temp_values[2] = *output_position - stack_vars[8];
    temp_values[1] = output_position[2] - stack_vars[10];
    temp_values[0] = output_position[1] - stack_vars[9];
    shader_offset = *(longlong *)(*(longlong *)(shader_data + 0x260) + 0x18);
    
    stack_vars[26] = temp_values[2] * transform_result[0] + temp_values[0] * transform_result[1] + temp_values[1] * transform_result[2];
    stack_vars[25] = temp_values[2] * transform_result[3] + temp_values[0] * transform_result[4] + temp_values[1] * transform_result[5];
    stack_vars[24] = temp_values[2] * transform_result[6] + temp_values[0] * transform_result[7] + temp_values[1] * transform_result[8];
    stack_vars[23] = temp_values[2] * temp_values[4] + temp_values[0] * temp_values[4] + temp_values[1] * temp_values[4];
    
    // 第二次加锁操作
    do {
      LOCK();
      lock_ptr = (uint *)(transform_offset + shader_offset);
      lock_status = *lock_ptr;
      *lock_ptr = *lock_ptr | 1;
      UNLOCK();
    } while ((lock_status & 1) != 0);
    
    // 读取更多数据
    data_ptr = (uint64_t *)(transform_offset + 4 + shader_offset);
    stack_data[5] = *data_ptr;
    stack_data[6] = data_ptr[1];
    shader_params = (float *)(transform_offset + 0x14 + shader_offset);
    stack_vars[27] = *shader_params;
    stack_vars[28] = shader_params[1];
    stack_vars[29] = shader_params[2];
    stack_vars[30] = shader_params[3];
    
    stack_vars[22] = stack_vars[26] - stack_vars[27];
    *(int32_t *)(transform_offset + shader_offset) = 0;
    stack_vars[21] = 0x7f7fffff;
    stack_vars[20] = stack_vars[25] - stack_vars[28];
    stack_vars[19] = stack_vars[24] - stack_vars[29];
    
    stack_data[7] = stack_data[5];
    stack_data[8] = stack_data[6];
    stack_vars[31] = stack_vars[27];
    stack_vars[32] = stack_vars[28];
    stack_vars[33] = stack_vars[29];
    stack_vars[34] = stack_vars[30];
    
    // 执行最终变换
    FUN_180285b40(&stack_data[5], &stack_vars[35], &stack_vars[22]);
    
    // 检查渲染边界
    if ((((*(float *)((longlong)transform_matrix + 0x214) <= stack_vars[24]) &&
         (stack_vars[24] < *(float *)((longlong)transform_matrix + 0x224) ||
          stack_vars[24] == *(float *)((longlong)transform_matrix + 0x224))) &&
        (*(float *)(transform_matrix + 0x43) <= stack_vars[25]) &&
       (((stack_vars[25] < *(float *)(transform_matrix + 0x45) || stack_vars[25] == *(float *)(transform_matrix + 0x45) &&
         (*(float *)((longlong)transform_matrix + 0x21c) <= stack_vars[26])) &&
        (stack_vars[26] < *(float *)((longlong)transform_matrix + 0x22c) ||
         stack_vars[26] == *(float *)((longlong)transform_matrix + 0x22c))))) {
      
      // 设置渲染状态
      if (*(int *)(transform_matrix + 99) == -1) {
        *(int32_t *)((longlong)transform_matrix + 0x314) = render_flags;
        render_flags = FUN_1801b9a40(object_list + 0x1218);
        *(int32_t *)(transform_matrix + 99) = render_flags;
        LOCK();
        *(int32_t *)(transform_matrix + 0x62) = 0;
        UNLOCK();
      }
      
      // 设置最终渲染参数
      stack_vars[36] = (float)blend_mode;
      stack_vars[37] = stack_vars[35];
      stack_vars[38] = stack_vars[34];
      stack_vars[39] = stack_vars[33];
      stack_vars[40] = 0x3e19999a;
      FUN_18020a7b0(transform_matrix + 0x61, object_list, stack_vars);
    }
  }
  
  // 栈保护检查结束
  FUN_1808fc050(stack_data[0] ^ (ulonglong)stack_vars);
}


/**
 * 执行高级渲染变换操作
 * 
 * @param render_params 渲染参数指针
 * 
 * 此函数执行更复杂的渲染变换，包括：
 * - 多重矩阵变换
 * - 着色器参数处理
 * - 纹理坐标变换
 * - 渲染状态管理
 */
void perform_advanced_render_transform(longlong render_params)
{
  uint *lock_ptr;
  uint64_t *data_ptr;
  float transform_value;
  float matrix_values[16];
  float shader_params[16];
  uint lock_status;
  longlong shader_offset;
  float transform_result[16];
  uint64_t u_var1;
  uint64_t u_var2;
  int32_t render_flags;
  longlong register_data;
  float *shader_ptr;
  longlong temp_register;
  char texture_slot;
  longlong register_14;
  float stack_vars[64];
  int32_t xmm_regs[16];
  float final_result[4];
  
  // 保存寄存器状态
  *(int32_t *)(register_11 + -0x38) = xmm_regs[0];
  *(int32_t *)(register_11 + -0x34) = xmm_regs[1];
  *(int32_t *)(register_11 + -0x30) = xmm_regs[2];
  *(int32_t *)(register_11 + -0x2c) = xmm_regs[3];
  *(int32_t *)(register_11 + -0x48) = xmm_regs[4];
  *(int32_t *)(register_11 + -0x44) = xmm_regs[5];
  *(int32_t *)(register_11 + -0x40) = xmm_regs[6];
  *(int32_t *)(register_11 + -0x3c) = xmm_regs[7];
  *(int32_t *)(register_11 + -0x58) = xmm_regs[8];
  *(int32_t *)(register_11 + -0x54) = xmm_regs[9];
  *(int32_t *)(register_11 + -0x50) = xmm_regs[10];
  *(int32_t *)(register_11 + -0x4c) = xmm_regs[11];
  *(int32_t *)(register_11 + -0x68) = xmm_regs[12];
  *(int32_t *)(register_11 + -100) = xmm_regs[13];
  *(int32_t *)(register_11 + -0x60) = xmm_regs[14];
  *(int32_t *)(register_11 + -0x5c) = xmm_regs[15];
  *(int32_t *)(register_11 + -0x78) = xmm_regs[16];
  *(int32_t *)(register_11 + -0x74) = xmm_regs[17];
  *(int32_t *)(register_11 + -0x70) = xmm_regs[18];
  *(int32_t *)(register_11 + -0x6c) = xmm_regs[19];
  
  // 检查渲染参数
  if (register_data == render_params) {
    shader_ptr = (float *)(temp_register + 0x330);
  }
  else {
    shader_ptr = (float *)(**(code **)(register_data + 0x158))();
  }
  
  // 提取矩阵数据
  matrix_values[0] = *(float *)(register_14 + 0x70);
  matrix_values[1] = *(float *)(register_14 + 0x74);
  matrix_values[2] = *(float *)(register_14 + 0x78);
  matrix_values[3] = *(float *)(register_14 + 0x7c);
  matrix_values[4] = *(float *)(register_14 + 0x80);
  matrix_values[5] = *(float *)(register_14 + 0x84);
  matrix_values[6] = *(float *)(register_14 + 0x88);
  matrix_values[7] = *(float *)(register_14 + 0x8c);
  matrix_values[8] = *(float *)(register_14 + 0x90);
  matrix_values[9] = *(float *)(register_14 + 0x94);
  matrix_values[10] = *(float *)(register_14 + 0x98);
  matrix_values[11] = *(float *)(register_14 + 0x9c);
  
  // 获取着色器参数
  shader_params[0] = shader_ptr[1];
  shader_params[2] = shader_ptr[0];
  shader_params[3] = shader_ptr[2];
  shader_params[4] = shader_ptr[5];
  shader_params[5] = shader_ptr[9];
  shader_params[6] = shader_ptr[13];
  shader_params[7] = shader_ptr[4];
  
  // 计算第一组变换
  transform_result[0] = shader_params[0] * matrix_values[4] + shader_params[2] * matrix_values[0] + shader_params[3] * matrix_values[8];
  transform_result[1] = shader_params[0] * matrix_values[5] + shader_params[2] * matrix_values[1] + shader_params[3] * matrix_values[9];
  transform_result[2] = shader_params[0] * matrix_values[6] + shader_params[2] * matrix_values[2] + shader_params[3] * matrix_values[10];
  
  shader_params[8] = shader_ptr[6];
  shader_params[9] = register_rdi[1];
  shader_params[10] = shader_ptr[8];
  
  transform_result[3] = shader_params[4] * matrix_values[4] + shader_params[7] * matrix_values[0] + shader_params[8] * matrix_values[8];
  transform_result[4] = shader_params[4] * matrix_values[5] + shader_params[7] * matrix_values[1] + shader_params[8] * matrix_values[9];
  transform_result[5] = shader_params[4] * matrix_values[6] + shader_params[7] * matrix_values[2] + shader_params[8] * matrix_values[10];
  
  // 保存中间结果
  *(float *)(register_rbp + -0xc) = transform_result[0];
  *(float *)((longlong)register_rbp + -0x5c) = transform_result[1];
  *(float *)(register_rbp + -0xb) = transform_result[2];
  *(float *)((longlong)register_rbp + -0x54) = shader_params[0] * matrix_values[7] + shader_params[2] * matrix_values[3] + shader_params[3] * matrix_values[11];
  
  // 计算第二组变换
  shader_params[0] = shader_ptr[10];
  shader_params[2] = shader_ptr[12];
  shader_params[3] = register_rdi[2];
  transform_result[6] = shader_params[5] * matrix_values[4] + shader_params[10] * matrix_values[0] + shader_params[0] * matrix_values[8];
  transform_result[7] = shader_params[5] * matrix_values[5] + shader_params[10] * matrix_values[1] + shader_params[0] * matrix_values[9];
  transform_result[8] = shader_params[5] * matrix_values[6] + shader_params[10] * matrix_values[2] + shader_params[0] * matrix_values[10];
  transform_result[9] = shader_params[5] * matrix_values[7] + shader_params[10] * matrix_values[3] + shader_params[0] * matrix_values[11];
  
  shader_params[0] = shader_ptr[14];
  shader_params[10] = *(float *)(register_14 + 0xac);
  shader_params[5] = *register_rdi;
  
  // 计算最终变换
  transform_value = shader_params[6] * matrix_values[4] + shader_params[2] * matrix_values[0] + shader_params[0] * matrix_values[8] + *(float *)(register_14 + 0xa0);
  transform_result[10] = shader_params[6] * matrix_values[5] + shader_params[2] * matrix_values[1] + shader_params[0] * matrix_values[9] + *(float *)(register_14 + 0xa4);
  transform_result[11] = shader_params[6] * matrix_values[6] + shader_params[2] * matrix_values[2] + shader_params[0] * matrix_values[10] + *(float *)(register_14 + 0xa8);
  
  // 保存结果到栈
  *(float *)(register_rbp + -10) = transform_result[3];
  *(float *)((longlong)register_rbp + -0x4c) = transform_result[4];
  *(float *)(register_rbp + -9) = transform_result[5];
  *(float *)((longlong)register_rbp + -0x44) = shader_params[4] * matrix_values[7] + shader_params[7] * matrix_values[3] + shader_params[8] * matrix_values[11];
  *(float *)(register_rbp + -8) = transform_result[6];
  *(float *)((longlong)register_rbp + -0x3c) = transform_result[7];
  *(float *)(register_rbp + -7) = transform_result[8];
  *(float *)((longlong)register_rbp + -0x34) = transform_result[9];
  
  // 计算位置差异
  shader_params[5] = shader_params[5] - transform_value;
  *(float *)(register_rbp + -6) = transform_value;
  *(float *)((longlong)register_rbp + -0x2c) = transform_result[10];
  *(float *)(register_rbp + -5) = transform_result[11];
  *(float *)((longlong)register_rbp + -0x24) = shader_params[6] * matrix_values[7] + shader_params[2] * matrix_values[3] + shader_params[0] * matrix_values[11] + shader_params[10];
  
  shader_params[9] = shader_params[9] - transform_result[10];
  shader_params[3] = shader_params[3] - transform_result[11];
  
  // 计算最终变换结果
  stack_vars[0] = shader_params[5] * transform_result[0] + shader_params[9] * transform_result[1] + shader_params[3] * transform_result[2];
  stack_vars[1] = shader_params[5] * transform_result[3] + shader_params[9] * transform_result[4] + shader_params[3] * transform_result[5];
  stack_vars[2] = shader_params[5] * transform_result[6] + shader_params[9] * transform_result[7] + shader_params[3] * transform_result[8];
  
  // 设置栈数据
  stack_vars[3] = CONCAT44(stack_vars[1], stack_vars[0]);
  stack_vars[4] = CONCAT44(shader_params[5] * transform_result[9] + shader_params[9] * transform_result[9] + shader_params[3] * transform_result[9], stack_vars[2]);
  
  register_data = (longlong)texture_slot * 0x100;
  shader_offset = *(longlong *)(*(longlong *)(register_14 + 0x260) + 0x18);
  
  // 加锁操作
  do {
    LOCK();
    lock_ptr = (uint *)(register_data + shader_offset);
    lock_status = *lock_ptr;
    *lock_ptr = *lock_ptr | 1;
    UNLOCK();
  } while ((lock_status & 1) != 0);
  
  // 读取变换数据
  data_ptr = (uint64_t *)(register_data + 4 + shader_offset);
  u_var1 = *data_ptr;
  u_var2 = data_ptr[1];
  shader_ptr = (float *)(register_data + 0x14 + shader_offset);
  transform_value = *shader_ptr;
  transform_result[10] = shader_ptr[1];
  transform_result[11] = shader_ptr[2];
  transform_result[0] = shader_ptr[3];
  
  // 保存到寄存器
  register_rbp[8] = u_var1;
  register_rbp[9] = u_var2;
  *(float *)(register_rbp + 10) = transform_value;
  *(float *)((longlong)register_rbp + 0x54) = transform_result[10];
  *(float *)(register_rbp + 0xb) = transform_result[11];
  *(float *)((longlong)register_rbp + 0x5c) = transform_result[0];
  
  // 更新栈变量
  register_rbp[-4] = u_var1;
  register_rbp[-3] = u_var2;
  stack_vars[0] = stack_vars[0] - transform_value;
  *(float *)(register_rbp + -2) = transform_value;
  *(float *)((longlong)register_rbp + -0xc) = transform_result[10];
  *(float *)(register_rbp + -1) = transform_result[11];
  *(float *)((longlong)register_rbp + -4) = transform_result[0];
  
  *(int32_t *)(register_data + shader_offset) = 0;
  stack_vars[5] = 0x7f7fffff;
  stack_vars[1] = stack_vars[1] - transform_result[10];
  stack_vars[2] = stack_vars[2] - transform_result[11];
  
  // 执行变换操作
  FUN_180285b40(register_rbp + -4, &stack_vars[6], &stack_vars[0]);
  
  // 处理最终结果
  transform_result[11] = *register_rsi - *(float *)(register_rbp + -6);
  transform_result[10] = register_rsi[2] - *(float *)(register_rbp + -5);
  transform_value = register_rsi[1] - *(float *)((longlong)register_rbp + -0x2c);
  shader_offset = *(longlong *)(*(longlong *)(register_14 + 0x260) + 0x18);
  
  stack_vars[7] = transform_result[11] * transform_result[0] + transform_value * transform_result[1] + transform_result[10] * transform_result[2];
  stack_vars[8] = transform_result[11] * transform_result[3] + transform_value * transform_result[4] + transform_result[10] * transform_result[5];
  stack_vars[9] = transform_result[11] * transform_result[6] + transform_value * transform_result[7] + transform_result[10] * transform_result[8];
  stack_vars[10] = transform_result[11] * transform_result[9] + transform_value * transform_result[9] + transform_result[10] * transform_result[9];
  
  // 第二次加锁操作
  do {
    LOCK();
    lock_ptr = (uint *)(register_data + shader_offset);
    lock_status = *lock_ptr;
    *lock_ptr = *lock_ptr | 1;
    UNLOCK();
  } while ((lock_status & 1) != 0);
  
  // 读取最终数据
  data_ptr = (uint64_t *)(register_data + 4 + shader_offset);
  u_var1 = *data_ptr;
  u_var2 = data_ptr[1];
  shader_ptr = (float *)(register_data + 0x14 + shader_offset);
  transform_value = *shader_ptr;
  transform_result[10] = shader_ptr[1];
  transform_result[11] = shader_ptr[2];
  transform_result[0] = shader_ptr[3];
  
  // 保存最终结果
  register_rbp[0xc] = u_var1;
  register_rbp[0xd] = u_var2;
  *(float *)(register_rbp + 0xe) = transform_value;
  *(float *)((longlong)register_rbp + 0x74) = transform_result[10];
  *(float *)(register_rbp + 0xf) = transform_result[11];
  *(float *)((longlong)register_rbp + 0x7c) = transform_result[0];
  *register_rbp = u_var1;
  register_rbp[1] = u_var2;
  
  stack_vars[11] = stack_vars[7] - transform_value;
  *(float *)(register_rbp + 2) = transform_value;
  *(float *)((longlong)register_rbp + 0x14) = transform_result[10];
  *(float *)(register_rbp + 3) = transform_result[11];
  *(float *)((longlong)register_rbp + 0x1c) = transform_result[0];
  
  *(int32_t *)(register_data + shader_offset) = 0;
  stack_vars[12] = 0x7f7fffff;
  stack_vars[13] = stack_vars[8] - transform_result[10];
  stack_vars[14] = stack_vars[9] - transform_result[11];
  
  // 执行最终变换
  FUN_180285b40(transform_result[10], &stack_vars[15], &stack_vars[11]);
  
  // 检查渲染边界条件
  if ((((*(float *)(temp_register + 0x214) <= stack_vars[6]) &&
       (stack_vars[6] < *(float *)(temp_register + 0x224) || stack_vars[6] == *(float *)(temp_register + 0x224))) &&
      (*(float *)(temp_register + 0x218) <= stack_vars[7])) &&
     (((stack_vars[7] < *(float *)(temp_register + 0x228) || stack_vars[7] == *(float *)(temp_register + 0x228) &&
       (*(float *)(temp_register + 0x21c) <= stack_vars[8])) &&
      (stack_vars[8] < *(float *)(temp_register + 0x22c) ||
       stack_vars[8] == *(float *)(temp_register + 0x22c))))) {
    
    // 设置渲染状态
    if (*(int *)(temp_register + 0x318) == -1) {
      *(int32_t *)(temp_register + 0x314) = *(int32_t *)(register_rbp + 0x26);
      render_flags = FUN_1801b9a40(register_14 + 0x1218);
      *(int32_t *)(temp_register + 0x318) = render_flags;
      LOCK();
      *(int32_t *)(temp_register + 0x310) = 0;
      UNLOCK();
    }
    
    // 设置最终渲染参数
    *(int32_t *)(register_rbp + 6) = stack_vars[15];
    *(int32_t *)((longlong)register_rbp + 0x34) = stack_vars[16];
    *(int32_t *)(register_rbp + 7) = stack_vars[17];
    *(float *)((longlong)register_rbp + 0x3c) = (float)*(int *)(register_rbp + 0x27);
    *(float *)(register_rbp + 4) = stack_vars[6];
    *(float *)((longlong)register_rbp + 0x24) = stack_vars[7];
    *(float *)(register_rbp + 5) = stack_vars[8];
    *(int32_t *)((longlong)register_rbp + 0x2c) = 0x3e19999a;
    FUN_18020a7b0(temp_register + 0x308, stack_vars[16], register_rbp + 4);
  }
  
  // 栈保护检查结束
  FUN_1808fc050(register_rbp[0x10] ^ (ulonglong)&stack_vars[0]);
}