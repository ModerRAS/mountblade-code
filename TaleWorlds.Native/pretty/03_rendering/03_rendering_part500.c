#include "TaleWorlds.Native.Split.h"

// 03_rendering_part500.c - 渲染系统高级处理模块
// 包含10个核心函数，涵盖渲染对象变换、矩阵运算、资源管理、状态控制等高级渲染功能

// 函数别名定义
#define rendering_system_update_transform_parameters FUN_180534410
#define rendering_system_get_render_status FUN_1805344c0
#define rendering_system_initialize_render_context FUN_180534540
#define rendering_system_cleanup_render_context FUN_180534590
#define rendering_system_get_global_render_data FUN_1805346e0
#define rendering_system_process_render_parameters FUN_180534770
#define rendering_system_multiply_matrix_vectors FUN_180534800
#define rendering_system_transform_3d_coordinates FUN_180534930
#define rendering_system_empty_function_placeholder FUN_180534b00
#define rendering_system_acquire_render_lock FUN_180534d00
#define rendering_system_debug_render_function FUN_180535010
#define rendering_system_calculate_matrix_inverse FUN_1805351a0
#define rendering_system_apply_matrix_transform FUN_1805353a0
#define rendering_system_scale_vector_coordinates FUN_180535610
#define rendering_system_manage_render_queue FUN_180535720
#define rendering_system_process_render_state FUN_1805358d0
#define rendering_system_cleanup_render_state FUN_1805358ec
#define rendering_system_reset_render_state FUN_180535925

// 常量定义
#define MAX_RENDER_OBJECTS 1000
#define RENDER_STATE_ACTIVE 0x01
#define RENDER_STATE_VISIBLE 0x02
#define RENDER_STATE_TRANSFORMED 0x04
#define RENDER_STATE_LOCKED 0x08

/**
 * 渲染系统变换参数更新函数
 * 更新渲染对象的变换参数，包括位置、旋转、缩放等属性
 * 
 * @param render_context 渲染上下文指针
 * @param transform_params 变换参数数组
 */
void rendering_system_update_transform_parameters(longlong render_context, undefined8 *transform_params)

{
  float matrix_element_1;
  float matrix_element_2;
  float matrix_element_3;
  float matrix_element_4;
  float matrix_element_5;
  float matrix_element_6;
  float matrix_element_7;
  float matrix_element_8;
  float matrix_element_9;
  float matrix_element_10;
  float matrix_element_11;
  float matrix_element_12;
  longlong object_index;
  float transform_x;
  float transform_y;
  float transform_z;
  float rotation_x;
  float rotation_y;
  float rotation_z;
  float scale_x;
  float scale_y;
  float scale_z;
  float position_x;
  float position_y;
  float position_z;
  float position_w;
  undefined4 param_offset_1;
  undefined4 param_offset_2;
  undefined4 param_offset_3;
  undefined8 param_data;
  bool is_transform_active;
  char system_status;
  int object_count;
  undefined8 *render_data_ptr;
  longlong context_data;
  longlong iteration_count;
  
  // 获取渲染上下文数据
  context_data = *(longlong *)(render_context + 0x8a8);
  render_data_ptr = (undefined8 *)(context_data + 0x30);
  system_status = func_0x000180285980();  // 检查系统状态
  
  if (system_status != '\0') {
    // 复制变换参数到渲染数据指针
    param_data = transform_params[1];
    *render_data_ptr = *transform_params;
    render_data_ptr[1] = param_data;
    param_data = transform_params[3];
    render_data_ptr[2] = transform_params[2];
    render_data_ptr[3] = param_data;
    
    // 复制参数偏移量
    param_offset_1 = *(undefined4 *)((longlong)transform_params + 0x24);
    param_offset_2 = *(undefined4 *)(transform_params + 5);
    param_offset_3 = *(undefined4 *)((longlong)transform_params + 0x2c);
    *(undefined4 *)(render_data_ptr + 4) = *(undefined4 *)(transform_params + 4);
    *(undefined4 *)((longlong)render_data_ptr + 0x24) = param_offset_1;
    *(undefined4 *)(render_data_ptr + 5) = param_offset_2;
    *(undefined4 *)((longlong)render_data_ptr + 0x2c) = param_offset_3;
    
    // 复制额外的参数数据
    param_offset_1 = *(undefined4 *)((longlong)transform_params + 0x34);
    param_offset_2 = *(undefined4 *)(transform_params + 7);
    param_offset_3 = *(undefined4 *)((longlong)transform_params + 0x3c);
    *(undefined4 *)(render_data_ptr + 6) = *(undefined4 *)(transform_params + 6);
    *(undefined4 *)((longlong)render_data_ptr + 0x34) = param_offset_1;
    *(undefined4 *)(render_data_ptr + 7) = param_offset_2;
    *(undefined4 *)((longlong)render_data_ptr + 0x3c) = param_offset_3;
    
    // 调用渲染更新函数
    FUN_180254610();
    *(byte *)(context_data + 0x2e8) = *(byte *)(context_data + 0x2e8) | 0x10;
    
    // 检查是否需要执行额外的渲染操作
    if (((*(uint *)(context_data + 0x2ac) & 0x10000000) == 0) && (*(longlong *)(context_data + 0x20) != 0)) {
      FUN_1801b01f0(*(longlong *)(context_data + 0x20), context_data);
    }
    
    // 计算对象数量并遍历处理
    object_count = (int)(*(longlong *)(context_data + 0x1c8) - *(longlong *)(context_data + 0x1c0) >> 3);
    if (0 < object_count) {
      iteration_count = 0;
      do {
        object_index = *(longlong *)(*(longlong *)(context_data + 0x1c0) + iteration_count * 8);
        
        // 检查对象是否需要变换处理
        if ((((*(longlong *)(context_data + 0x20) == 0) ||
             (*(char *)(*(longlong *)(context_data + 0x20) + 0x2a62) == '\0')) ||
            (*(longlong **)(object_index + 0x270) == (longlong *)0x0)) ||
           ((system_status = (**(code **)(**(longlong **)(object_index + 0x270) + 0x70))(), system_status == '\0' ||
            (system_status = (**(code **)(**(longlong **)(object_index + 0x270) + 0x78))(), system_status == '\0')))) {
          is_transform_active = false;
        }
        else {
          is_transform_active = true;
        }
        
        // 如果对象不需要变换处理，则应用矩阵变换
        if (!is_transform_active) {
          // 获取变换矩阵参数
          transform_x = *(float *)(context_data + 0x70);
          transform_y = *(float *)(context_data + 0x74);
          transform_z = *(float *)(context_data + 0x78);
          rotation_x = *(float *)(context_data + 0x7c);
          rotation_y = *(float *)(context_data + 0x80);
          rotation_z = *(float *)(context_data + 0x84);
          scale_x = *(float *)(context_data + 0x88);
          scale_y = *(float *)(context_data + 0x8c);
          scale_z = *(float *)(context_data + 0x90);
          position_x = *(float *)(context_data + 0x94);
          position_y = *(float *)(context_data + 0x98);
          position_z = *(float *)(context_data + 0x9c);
          
          // 获取对象变换参数
          matrix_element_1 = *(float *)(object_index + 0x34);
          matrix_element_2 = *(float *)(object_index + 0x30);
          matrix_element_3 = *(float *)(object_index + 0x38);
          matrix_element_4 = *(float *)(object_index + 0x44);
          matrix_element_5 = *(float *)(object_index + 0x54);
          matrix_element_6 = *(float *)(object_index + 100);
          matrix_element_7 = *(float *)(object_index + 0x40);
          matrix_element_8 = *(float *)(object_index + 0x48);
          matrix_element_9 = *(float *)(object_index + 0x50);
          matrix_element_10 = *(float *)(object_index + 0x58);
          matrix_element_11 = *(float *)(object_index + 0x60);
          matrix_element_12 = *(float *)(object_index + 0x68);
          
          // 获取位置偏移量
          position_w = *(float *)(context_data + 0xa0);
          param_offset_1 = *(float *)(context_data + 0xa4);
          param_offset_2 = *(float *)(context_data + 0xa8);
          param_offset_3 = *(float *)(context_data + 0xac);
          
          // 应用矩阵变换计算
          *(float *)(object_index + 0x70) = matrix_element_1 * rotation_y + matrix_element_2 * transform_x + matrix_element_3 * position_x;
          *(float *)(object_index + 0x74) = matrix_element_1 * rotation_z + matrix_element_2 * transform_y + matrix_element_3 * position_y;
          *(float *)(object_index + 0x78) = matrix_element_1 * scale_x + matrix_element_2 * transform_z + matrix_element_3 * position_z;
          *(float *)(object_index + 0x7c) = matrix_element_1 * scale_y + matrix_element_2 * rotation_x + matrix_element_3 * position_w;
          *(float *)(object_index + 0x80) = matrix_element_4 * rotation_y + matrix_element_7 * transform_x + matrix_element_8 * position_x;
          *(float *)(object_index + 0x84) = matrix_element_4 * rotation_z + matrix_element_7 * transform_y + matrix_element_8 * position_y;
          *(float *)(object_index + 0x88) = matrix_element_4 * scale_x + matrix_element_7 * transform_z + matrix_element_8 * position_z;
          *(float *)(object_index + 0x8c) = matrix_element_4 * scale_y + matrix_element_7 * rotation_x + matrix_element_8 * position_w;
          *(float *)(object_index + 0x90) = matrix_element_5 * rotation_y + matrix_element_9 * transform_x + matrix_element_10 * position_x;
          *(float *)(object_index + 0x94) = matrix_element_5 * rotation_z + matrix_element_9 * transform_y + matrix_element_10 * position_y;
          *(float *)(object_index + 0x98) = matrix_element_5 * scale_x + matrix_element_9 * transform_z + matrix_element_10 * position_z;
          *(float *)(object_index + 0x9c) = matrix_element_5 * scale_y + matrix_element_9 * rotation_x + matrix_element_10 * position_w;
          *(float *)(object_index + 0xa0) = matrix_element_6 * rotation_y + matrix_element_11 * transform_x + matrix_element_12 * position_x + position_w;
          *(float *)(object_index + 0xa4) = matrix_element_6 * rotation_z + matrix_element_11 * transform_y + matrix_element_12 * position_y + param_offset_1;
          *(float *)(object_index + 0xa8) = matrix_element_6 * scale_x + matrix_element_11 * transform_z + matrix_element_12 * position_z + param_offset_2;
          *(float *)(object_index + 0xac) = matrix_element_6 * scale_y + matrix_element_11 * rotation_x + matrix_element_12 * position_w + param_offset_3;
          
          // 调用渲染对象更新函数
          FUN_1802eace0(object_index);
        }
        iteration_count = iteration_count + 1;
      } while (iteration_count < object_count);
    }
    return;
  }
  return;
}



/**
 * 渲染系统状态获取函数
 * 获取渲染对象的当前状态信息
 * 
 * @param render_object 渲染对象指针
 * @param state_context 状态上下文
 * @return 渲染状态码，0xffffffff表示失败
 */
undefined4 rendering_system_get_render_status(undefined8 render_object, longlong state_context)

{
  longlong *state_ptr;
  undefined *error_msg_ptr;
  longlong base_address;
  undefined8 object_param;
  
  // 检查状态上下文是否有效
  if (*(int *)(state_context + 0x10) != 0) {
    base_address = _DAT_180c8a9f0 + 0x50;
    object_param = render_object;
    state_ptr = (longlong *)FUN_180058080(base_address, &object_param, state_context);
    
    // 如果状态指针有效，返回状态码
    if (*state_ptr != base_address) {
      return *(undefined4 *)(*state_ptr + 0x40);
    }
    
    // 处理错误信息
    error_msg_ptr = &DAT_18098bc73;
    if (*(undefined **)(state_context + 8) != (undefined *)0x0) {
      error_msg_ptr = *(undefined **)(state_context + 8);
    }
    FUN_180627020(&UNK_180a30f00, error_msg_ptr);
  }
  return 0xffffffff;
}



/**
 * 渲染上下文初始化函数
 * 初始化渲染上下文并设置初始状态
 * 
 * @param context_ptr 上下文指针指针
 * @return 初始化后的上下文指针
 */
longlong * rendering_system_initialize_render_context(longlong *context_ptr)

{
  longlong *resource_ptr;
  
  // 初始化上下文指针
  *context_ptr = 0;
  resource_ptr = (longlong *)*context_ptr;
  *context_ptr = 0;
  
  // 如果资源指针有效，调用资源初始化函数
  if (resource_ptr != (longlong *)0x0) {
    (**(code **)(*resource_ptr + 0x38))();
  }
  
  // 初始化上下文状态
  *(undefined4 *)(context_ptr + 1) = 0;
  return context_ptr;
}





/**
 * 渲染上下文清理函数
 * 清理渲染上下文并释放相关资源
 * 
 * @param context_ptr 上下文指针指针
 */
void rendering_system_cleanup_render_context(longlong *context_ptr)

{
  longlong *resource_ptr;
  
  // 获取资源指针并清理上下文
  resource_ptr = (longlong *)*context_ptr;
  *context_ptr = 0;
  
  // 释放主要资源
  if (resource_ptr != (longlong *)0x0) {
    (**(code **)(*resource_ptr + 0x38))();
  }
  
  // 释放次要资源
  if ((longlong *)*context_ptr != (longlong *)0x0) {
    (**(code **)(*(longlong *)*context_ptr + 0x38))();
  }
  return;
}



/**
 * 全局渲染数据获取函数
 * 获取全局渲染数据指针，如果需要则初始化数据
 * 
 * @return 全局渲染数据指针
 */
undefined8 rendering_system_get_global_render_data(void)

{
  // 检查线程本地存储中的数据是否需要初始化
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8) +
              0x48) < _DAT_180d49128) {
    FUN_1808fcb90(&DAT_180d49128);
    
    // 如果数据初始化失败，执行清理和重新初始化
    if (_DAT_180d49128 == -1) {
      FUN_18058f390(0x180d48f30);
      FUN_1808fc820(&UNK_180943060);
      FUN_1808fcb30(&DAT_180d49128);
      return 0x180d48f30;
    }
  }
  return 0x180d48f30;
}



/**
 * 渲染参数处理函数
 * 处理渲染参数并更新渲染状态
 * 
 * @param render_context 渲染上下文
 * @param param_ptr 参数指针
 * @param process_flag 处理标志
 */
void rendering_system_process_render_parameters(longlong render_context, uint *param_ptr, char process_flag)

{
  uint param_value;
  uint *param_source;
  undefined1 stack_data [32];
  uint stack_param_1;
  uint stack_param_2;
  uint stack_param_3;
  uint stack_param_4;
  uint stack_param_5;
  uint stack_param_6;
  uint stack_param_7;
  uint stack_param_8;
  uint stack_param_9;
  ulonglong security_cookie;
  
  security_cookie = _DAT_180bf00a8 ^ (ulonglong)stack_data;
  
  // 检查是否需要处理渲染参数
  if ((*(byte *)(render_context + 0xa8) & 1) == 0) {
    FUN_1802fac00(render_context, *(longlong *)(render_context + 0x10) + 0x70, 0xbf800000);
  }
  
  // 获取参数源指针
  param_source = (uint *)((longlong)process_flag * 0x100 + *(longlong *)(render_context + 0x18));
  
  // 加锁并获取参数值
  do {
    LOCK();
    param_value = *param_source;
    *param_source = *param_source | 1;
    UNLOCK();
  } while ((param_value & 1) != 0);
  
  // 复制参数到栈变量
  stack_param_1 = param_source[1];
  stack_param_2 = param_source[2];
  stack_param_3 = param_source[3];
  stack_param_4 = param_source[4];
  stack_param_5 = param_source[5];
  stack_param_6 = param_source[6];
  stack_param_7 = param_source[7];
  stack_param_8 = param_source[8];
  *param_source = 0;
  
  // 复制参数到输出指针
  *param_ptr = stack_param_1;
  param_ptr[1] = stack_param_2;
  param_ptr[2] = stack_param_3;
  param_ptr[3] = stack_param_4;
  param_ptr[4] = stack_param_5;
  param_ptr[5] = stack_param_6;
  param_ptr[6] = stack_param_7;
  param_ptr[7] = stack_param_8;
                    
  // 清理栈数据并返回
  FUN_1808fc050(security_cookie ^ (ulonglong)stack_data);
}



/**
 * 矩阵向量乘法函数
 * 执行矩阵与向量的乘法运算
 * 
 * @param matrix_ptr 矩阵指针
 * @param result_ptr 结果向量指针
 * @param vector_ptr 向量指针
 * @return 结果向量指针
 */
float * rendering_system_multiply_matrix_vectors(float *matrix_ptr, float *result_ptr, float *vector_ptr)

{
  float matrix_y;
  float matrix_x2;
  float matrix_y2;
  float vector_x;
  float vector_z;
  float matrix_x4;
  float matrix_y4;
  float matrix_y2_alt;
  float matrix_x;
  float matrix_x1;
  
  // 获取矩阵和向量元素
  matrix_y = vector_ptr[1];
  matrix_x2 = matrix_ptr[4];
  matrix_y2 = matrix_ptr[5];
  vector_x = *vector_ptr;
  vector_z = vector_ptr[2];
  matrix_x4 = vector_ptr[4];
  matrix_y4 = vector_ptr[5];
  matrix_y2_alt = matrix_ptr[5];
  matrix_x = matrix_ptr[1];
  matrix_x1 = matrix_ptr[1];
  
  // 计算第一行结果
  *result_ptr = vector_x * *matrix_ptr + matrix_y * matrix_ptr[1];
  result_ptr[1] = vector_x * matrix_x2 + matrix_y * matrix_y2;
  result_ptr[2] = vector_z;
  result_ptr[3] = 3.4028235e+38;  // FLOAT_MAX
  
  // 获取更多矩阵元素
  matrix_y = vector_ptr[6];
  matrix_y2 = vector_ptr[8];
  vector_x = *matrix_ptr;
  
  // 计算第二行结果
  result_ptr[4] = matrix_x4 * *matrix_ptr + matrix_y4 * matrix_x;
  result_ptr[5] = matrix_x4 * matrix_x2 + matrix_y4 * matrix_y2_alt;
  result_ptr[6] = matrix_y;
  result_ptr[7] = 3.4028235e+38;  // FLOAT_MAX
  
  // 获取最后一批矩阵元素
  matrix_y = vector_ptr[9];
  vector_z = matrix_ptr[5];
  matrix_x4 = vector_ptr[10];
  
  // 计算第三行结果
  result_ptr[8] = matrix_y2 * vector_x + matrix_y * matrix_ptr[1];
  result_ptr[9] = matrix_y2 * matrix_x2 + matrix_y * vector_z;
  result_ptr[10] = matrix_x4;
  result_ptr[0xb] = 3.4028235e+38;  // FLOAT_MAX
  
  return result_ptr;
}



float * FUN_180534930(undefined4 *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  uStack_98 = *param_1;
  uStack_94 = param_1[1];
  uStack_90 = param_1[2];
  uStack_84 = param_1[5];
  uStack_88 = param_1[4];
  uStack_78 = param_1[8];
  uStack_80 = param_1[6];
  uStack_70 = param_1[10];
  uStack_74 = param_1[9];
  uStack_64 = param_1[0xd];
  uStack_68 = param_1[0xc];
  uStack_60 = param_1[0xe];
  uStack_5c = 0x3f800000;
  uStack_8c = 0;
  uStack_7c = 0;
  uStack_6c = 0;
  FUN_1805351a0(&uStack_98,&fStack_58);
  fVar1 = param_3[2];
  fVar2 = *param_3;
  fVar3 = param_3[1];
  *param_2 = fVar3 * fStack_48 + fVar2 * fStack_58 + fVar1 * fStack_38 + fStack_28;
  param_2[1] = fStack_54 * fVar2 + fStack_44 * fVar3 + fStack_34 * fVar1 + fStack_24;
  param_2[2] = fStack_50 * fVar2 + fStack_40 * fVar3 + fStack_30 * fVar1 + fStack_20;
  param_2[3] = fStack_4c * fVar2 + fStack_3c * fVar3 + fStack_2c * fVar1 + fStack_1c;
  return param_2;
}





// 函数: void FUN_180534b00(void)
void FUN_180534b00(void)

{
  undefined4 in_XMM3_Da;
  
                    // WARNING: Subroutine does not return
  FUN_1808fd400(in_XMM3_Da);
}



undefined8 FUN_180534d00(longlong param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0xa8) & 1) == 0) {
    iVar1 = _Mtx_lock(param_1 + 0xe0,param_2,param_3,param_4,0xfffffffffffffffe);
    if (iVar1 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar1);
    }
    if ((*(byte *)(param_1 + 0xa8) & 1) == 0) {
      FUN_1802fac00(param_1,*(longlong *)(param_1 + 0x10) + 0x70,0xbf800000);
    }
    iVar1 = _Mtx_unlock(param_1 + 0xe0);
    if (iVar1 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar1);
    }
  }
  FUN_1801c15d0(param_1,param_2,param_3 & 0xff);
  return param_2;
}





// 函数: void FUN_180535010(undefined8 param_1,undefined4 param_2)
void FUN_180535010(undefined8 param_1,undefined4 param_2)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd400(param_2);
}





// 函数: void FUN_1805351a0(float *param_1,float *param_2)
void FUN_1805351a0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar10 = param_1[10];
  fVar3 = param_1[1];
  fVar4 = param_1[0xd];
  param_2[2] = 0.0;
  param_2[3] = 0.0;
  fVar1 = param_1[4];
  fVar8 = param_1[0xc];
  fVar5 = fVar3 * fVar10;
  fVar6 = param_1[5] * fVar10;
  fVar2 = *param_1;
  param_2[1] = -fVar5;
  fVar7 = param_1[5];
  *param_2 = fVar6;
  param_2[4] = -(fVar1 * fVar10);
  param_2[5] = fVar2 * fVar10;
  param_2[6] = 0.0;
  param_2[7] = 0.0;
  param_2[8] = 0.0;
  param_2[9] = 0.0;
  fVar9 = fVar2 * fVar7 - fVar1 * fVar3;
  param_2[0xb] = 0.0;
  fVar7 = -(fVar1 * -(fVar10 * fVar4)) - fVar8 * fVar6;
  param_2[10] = fVar9;
  param_2[0xc] = fVar7;
  fVar8 = fVar8 * fVar5 + fVar2 * -(fVar10 * fVar4);
  fVar4 = param_1[0xe] * fVar3 * fVar1 - param_1[0xe] * param_1[5] * fVar2;
  param_2[0xd] = fVar8;
  fVar10 = fVar2 * *param_2 + fVar1 * param_2[1];
  param_2[0xe] = fVar4;
  fVar3 = fVar2 * fVar6 - fVar1 * fVar5;
  param_2[0xf] = fVar3;
  if (fVar10 != 1.0) {
    fVar10 = 1.0 / fVar10;
    *param_2 = fVar10 * *param_2;
    param_2[1] = fVar10 * param_2[1];
    param_2[5] = fVar10 * param_2[5];
    param_2[4] = fVar10 * param_2[4];
    param_2[10] = fVar9 * fVar10;
    param_2[0xc] = fVar7 * fVar10;
    param_2[0xd] = fVar8 * fVar10;
    param_2[0xe] = fVar4 * fVar10;
    param_2[0xf] = fVar3 * fVar10;
  }
  return;
}





// 函数: void FUN_1805353a0(float *param_1,undefined4 *param_2)
void FUN_1805353a0(float *param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uStack_68 = *param_2;
  uStack_64 = param_2[1];
  uStack_60 = param_2[2];
  uStack_54 = param_2[5];
  uStack_58 = param_2[4];
  uStack_48 = param_2[8];
  uStack_50 = param_2[6];
  uStack_40 = param_2[10];
  uStack_44 = param_2[9];
  uStack_34 = param_2[0xd];
  uStack_38 = param_2[0xc];
  uStack_30 = param_2[0xe];
  uStack_2c = 0x3f800000;
  uStack_5c = 0;
  uStack_4c = 0;
  uStack_3c = 0;
  FUN_1805351a0(&uStack_68,&fStack_b8);
  fVar1 = param_1[1];
  fVar2 = *param_1;
  fVar3 = param_1[2];
  param_1[3] = 1.0;
  *param_1 = fVar2 * fStack_b8 + fVar1 * fStack_a8 + fVar3 * fStack_98 + fStack_88;
  param_1[1] = fVar2 * fStack_b4 + fVar1 * fStack_a4 + fVar3 * fStack_94 + fStack_84;
  param_1[2] = fVar2 * fStack_b0 + fVar1 * fStack_a0 + fVar3 * fStack_90 + fStack_80;
  param_1[3] = fVar2 * fStack_ac + fVar1 * fStack_9c + fVar3 * fStack_8c + fStack_7c;
  param_1[7] = 1.0;
  fVar1 = param_1[4];
  fVar2 = param_1[5];
  fVar3 = param_1[6];
  param_1[4] = fVar1 * fStack_b8 + fVar2 * fStack_a8 + fVar3 * fStack_98 + fStack_88;
  param_1[5] = fVar1 * fStack_b4 + fVar2 * fStack_a4 + fVar3 * fStack_94 + fStack_84;
  param_1[6] = fVar1 * fStack_b0 + fVar2 * fStack_a0 + fVar3 * fStack_90 + fStack_80;
  param_1[7] = fVar1 * fStack_ac + fVar2 * fStack_9c + fVar3 * fStack_8c + fStack_7c;
  return;
}



float * FUN_180535610(float *param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  param_3 = 1.0 / param_3;
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[4];
  fVar4 = param_1[5];
  fVar5 = param_1[9];
  fVar6 = param_1[10];
  fVar7 = param_1[2];
  fVar8 = param_1[6];
  param_2[8] = param_3 * param_1[8];
  param_2[9] = param_3 * fVar5;
  param_2[10] = param_3 * fVar6;
  param_2[0xb] = 3.4028235e+38;
  *param_2 = param_3 * fVar1;
  param_2[1] = param_3 * fVar2;
  param_2[2] = param_3 * fVar7;
  param_2[3] = 3.4028235e+38;
  param_2[4] = param_3 * fVar3;
  param_2[5] = param_3 * fVar4;
  param_2[6] = param_3 * fVar8;
  param_2[7] = 3.4028235e+38;
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong * FUN_180535720(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  
  plVar3 = (longlong *)0x0;
  uVar1 = FUN_18062b1e0(_DAT_180c8ed18,0x98d9e0,0x10,8,0,0xfffffffffffffffe);
  plVar2 = (longlong *)FUN_1804f2420(uVar1);
  *param_2 = (longlong)plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  lVar6 = 1;
  if (*param_1 == 0) {
    plVar2 = (longlong *)*param_2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x28))(plVar2);
    }
    plVar5 = (longlong *)*param_1;
    *param_1 = (longlong)plVar2;
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x38))();
    }
  }
  plVar2 = (longlong *)param_1[2];
  if (plVar2 < (longlong *)param_1[3]) {
    param_1[2] = (longlong)(plVar2 + 1);
    plVar3 = (longlong *)*param_2;
    *plVar2 = (longlong)plVar3;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x28))();
    }
  }
  else {
    plVar5 = (longlong *)param_1[1];
    lVar4 = (longlong)plVar2 - (longlong)plVar5 >> 3;
    if ((lVar4 == 0) || (lVar6 = lVar4 * 2, plVar7 = plVar3, lVar6 != 0)) {
      plVar3 = (longlong *)FUN_18062b420(_DAT_180c8ed18,lVar6 * 8,(char)param_1[4]);
      plVar2 = (longlong *)param_1[2];
      plVar5 = (longlong *)param_1[1];
      plVar7 = plVar3;
    }
    for (; plVar5 != plVar2; plVar5 = plVar5 + 1) {
      *plVar3 = *plVar5;
      *plVar5 = 0;
      plVar3 = plVar3 + 1;
    }
    plVar2 = (longlong *)*param_2;
    *plVar3 = (longlong)plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x28))();
    }
    plVar2 = (longlong *)param_1[2];
    plVar5 = (longlong *)param_1[1];
    if (plVar5 != plVar2) {
      do {
        if ((longlong *)*plVar5 != (longlong *)0x0) {
          (**(code **)(*(longlong *)*plVar5 + 0x38))();
        }
        plVar5 = plVar5 + 1;
      } while (plVar5 != plVar2);
      plVar5 = (longlong *)param_1[1];
    }
    if (plVar5 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(plVar5);
    }
    param_1[1] = (longlong)plVar7;
    param_1[2] = (longlong)(plVar3 + 1);
    param_1[3] = (longlong)(plVar7 + lVar6);
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1805358d0(longlong *param_1,undefined8 param_2,undefined8 param_3)
void FUN_1805358d0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plStackX_8;
  
  lVar5 = *param_1;
  if (lVar5 != 0) {
    cVar3 = FUN_18055f260(param_3,&plStackX_8,&UNK_1809fa490);
    FUN_1804fe350(&UNK_180a30280,cVar3,&UNK_180a302c0,&plStackX_8);
    if ((((cVar3 != '\0') && (-1 < (int)(uint)plStackX_8)) &&
        ((int)(uint)plStackX_8 < *(int *)(lVar5 + 0x87b31c))) &&
       (lVar5 = (ulonglong)((uint)plStackX_8 & 0xf) * 0xbe0 +
                *(longlong *)
                 (*(longlong *)(lVar5 + 0x87b340) + (ulonglong)((uint)plStackX_8 >> 4) * 8),
       *(int *)(lVar5 + 8) != 0)) {
      lVar6 = 0;
      if (((_DAT_180c92514 - 2U & 0xfffffffc) == 0) && (_DAT_180c92514 != 4)) {
        iVar4 = _Mtx_lock(0x180c95528);
        if (iVar4 != 0) {
          __Throw_C_error_std__YAXH_Z(iVar4);
        }
        uVar1 = *(undefined4 *)(lVar5 + 0xc);
        cVar3 = FUN_180645c10(0x180c95578,0,&UNK_1809fa560);
        if ((cVar3 != '\0') &&
           (cVar3 = FUN_180645c10(0x180c95578,0x13,&UNK_1809fa540), cVar3 != '\0')) {
          FUN_180645c10(0x180c95578,uVar1,&UNK_1809fa490);
        }
        _DAT_180c95b3c = _DAT_180c95b3c & 0xffffffff00000000;
        iVar4 = (int)(_DAT_180c92ce0 - _DAT_180c92cd8 >> 3);
        lVar5 = _DAT_180c92cd8;
        if (0 < iVar4) {
          do {
            lVar2 = *(longlong *)(lVar5 + lVar6 * 8);
            if ((lVar2 != 0) && (*(char *)(*(longlong *)(lVar2 + 0x58f8) + 0x1c) != '\0')) {
              FUN_1805b59d0(lVar2,0x180c95578);
              lVar5 = _DAT_180c92cd8;
            }
            lVar6 = lVar6 + 1;
          } while (lVar6 < iVar4);
        }
        if (_DAT_180c96070 != 0) {
          FUN_180567f30(_DAT_180c92580,0x180c95578);
        }
        _DAT_180c95b3c = 0;
                    // WARNING: Subroutine does not return
        memset(_DAT_180c95b10,0,(longlong)(_DAT_180c95b08 >> 3));
      }
      *(undefined2 *)(lVar5 + 0x3d1) = 0;
      if (*(longlong *)(*(longlong *)(lVar5 + 0xe0) + 0x20) != 0) {
        FUN_180198980();
      }
      plStackX_8 = *(longlong **)(lVar5 + 0xe0);
      *(undefined8 *)(lVar5 + 0xe0) = 0;
      if (plStackX_8 != (longlong *)0x0) {
        (**(code **)(*plStackX_8 + 0x38))();
      }
      *(undefined8 *)(lVar5 + 0xe8) = 0;
      return;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1805358ec(void)
void FUN_1805358ec(void)

{
  undefined4 uVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong unaff_RDI;
  uint uStack0000000000000030;
  
  cVar3 = FUN_18055f260();
  FUN_1804fe350(&UNK_180a30280,cVar3,&UNK_180a302c0,&stack0x00000030);
  if ((((cVar3 != '\0') && (-1 < (int)uStack0000000000000030)) &&
      ((int)uStack0000000000000030 < *(int *)(unaff_RDI + 0x87b31c))) &&
     (lVar5 = (ulonglong)(uStack0000000000000030 & 0xf) * 0xbe0 +
              *(longlong *)
               (*(longlong *)(unaff_RDI + 0x87b340) + (ulonglong)(uStack0000000000000030 >> 4) * 8),
     *(int *)(lVar5 + 8) != 0)) {
    lVar6 = 0;
    if (((_DAT_180c92514 - 2U & 0xfffffffc) == 0) && (_DAT_180c92514 != 4)) {
      iVar4 = _Mtx_lock(0x180c95528);
      if (iVar4 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar4);
      }
      uVar1 = *(undefined4 *)(lVar5 + 0xc);
      cVar3 = FUN_180645c10(0x180c95578,0,&UNK_1809fa560);
      if ((cVar3 != '\0') && (cVar3 = FUN_180645c10(0x180c95578,0x13,&UNK_1809fa540), cVar3 != '\0')
         ) {
        FUN_180645c10(0x180c95578,uVar1,&UNK_1809fa490);
      }
      _DAT_180c95b3c = _DAT_180c95b3c & 0xffffffff00000000;
      iVar4 = (int)(_DAT_180c92ce0 - _DAT_180c92cd8 >> 3);
      lVar5 = _DAT_180c92cd8;
      if (0 < iVar4) {
        do {
          lVar2 = *(longlong *)(lVar5 + lVar6 * 8);
          if ((lVar2 != 0) && (*(char *)(*(longlong *)(lVar2 + 0x58f8) + 0x1c) != '\0')) {
            FUN_1805b59d0(lVar2,0x180c95578);
            lVar5 = _DAT_180c92cd8;
          }
          lVar6 = lVar6 + 1;
        } while (lVar6 < iVar4);
      }
      if (_DAT_180c96070 != 0) {
        FUN_180567f30(_DAT_180c92580,0x180c95578);
      }
      _DAT_180c95b3c = 0;
                    // WARNING: Subroutine does not return
      memset(_DAT_180c95b10,0,(longlong)(_DAT_180c95b08 >> 3));
    }
    *(undefined2 *)(lVar5 + 0x3d1) = 0;
    if (*(longlong *)(*(longlong *)(lVar5 + 0xe0) + 0x20) != 0) {
      FUN_180198980();
    }
    _uStack0000000000000030 = *(longlong **)(lVar5 + 0xe0);
    *(undefined8 *)(lVar5 + 0xe0) = 0;
    if (_uStack0000000000000030 != (longlong *)0x0) {
      (**(code **)(*_uStack0000000000000030 + 0x38))();
    }
    *(undefined8 *)(lVar5 + 0xe8) = 0;
    return;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180535925(void)
void FUN_180535925(void)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong unaff_RDI;
  uint in_stack_00000030;
  
  if (((-1 < (int)in_stack_00000030) && ((int)in_stack_00000030 < *(int *)(unaff_RDI + 0x87b31c)))
     && (lVar6 = (ulonglong)(in_stack_00000030 & 0xf) * 0xbe0 +
                 *(longlong *)
                  (*(longlong *)(unaff_RDI + 0x87b340) + (ulonglong)(in_stack_00000030 >> 4) * 8),
        *(int *)(lVar6 + 8) != 0)) {
    lVar7 = 0;
    if (((_DAT_180c92514 - 2U & 0xfffffffc) == 0) && (_DAT_180c92514 != 4)) {
      iVar5 = _Mtx_lock(0x180c95528);
      if (iVar5 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar5);
      }
      uVar1 = *(undefined4 *)(lVar6 + 0xc);
      cVar4 = FUN_180645c10(0x180c95578,0,&UNK_1809fa560);
      if ((cVar4 != '\0') && (cVar4 = FUN_180645c10(0x180c95578,0x13,&UNK_1809fa540), cVar4 != '\0')
         ) {
        FUN_180645c10(0x180c95578,uVar1,&UNK_1809fa490);
      }
      _DAT_180c95b3c = _DAT_180c95b3c & 0xffffffff00000000;
      iVar5 = (int)(_DAT_180c92ce0 - _DAT_180c92cd8 >> 3);
      lVar6 = _DAT_180c92cd8;
      if (0 < iVar5) {
        do {
          lVar2 = *(longlong *)(lVar6 + lVar7 * 8);
          if ((lVar2 != 0) && (*(char *)(*(longlong *)(lVar2 + 0x58f8) + 0x1c) != '\0')) {
            FUN_1805b59d0(lVar2,0x180c95578);
            lVar6 = _DAT_180c92cd8;
          }
          lVar7 = lVar7 + 1;
        } while (lVar7 < iVar5);
      }
      if (_DAT_180c96070 != 0) {
        FUN_180567f30(_DAT_180c92580,0x180c95578);
      }
      _DAT_180c95b3c = 0;
                    // WARNING: Subroutine does not return
      memset(_DAT_180c95b10,0,(longlong)(_DAT_180c95b08 >> 3));
    }
    *(undefined2 *)(lVar6 + 0x3d1) = 0;
    if (*(longlong *)(*(longlong *)(lVar6 + 0xe0) + 0x20) != 0) {
      FUN_180198980();
    }
    plVar3 = *(longlong **)(lVar6 + 0xe0);
    *(undefined8 *)(lVar6 + 0xe0) = 0;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x38))();
    }
    *(undefined8 *)(lVar6 + 0xe8) = 0;
    return;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



