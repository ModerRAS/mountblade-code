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
void rendering_system_update_transform_parameters(longlong render_context, uint64_t *transform_params)

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
  int32_t param_offset_1;
  int32_t param_offset_2;
  int32_t param_offset_3;
  uint64_t param_data;
  bool is_transform_active;
  char system_status;
  int object_count;
  uint64_t *render_data_ptr;
  longlong context_data;
  longlong iteration_count;
  
  // 获取渲染上下文数据
  context_data = *(longlong *)(render_context + 0x8a8);
  render_data_ptr = (uint64_t *)(context_data + 0x30);
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
    param_offset_1 = *(int32_t *)((longlong)transform_params + 0x24);
    param_offset_2 = *(int32_t *)(transform_params + 5);
    param_offset_3 = *(int32_t *)((longlong)transform_params + 0x2c);
    *(int32_t *)(render_data_ptr + 4) = *(int32_t *)(transform_params + 4);
    *(int32_t *)((longlong)render_data_ptr + 0x24) = param_offset_1;
    *(int32_t *)(render_data_ptr + 5) = param_offset_2;
    *(int32_t *)((longlong)render_data_ptr + 0x2c) = param_offset_3;
    
    // 复制额外的参数数据
    param_offset_1 = *(int32_t *)((longlong)transform_params + 0x34);
    param_offset_2 = *(int32_t *)(transform_params + 7);
    param_offset_3 = *(int32_t *)((longlong)transform_params + 0x3c);
    *(int32_t *)(render_data_ptr + 6) = *(int32_t *)(transform_params + 6);
    *(int32_t *)((longlong)render_data_ptr + 0x34) = param_offset_1;
    *(int32_t *)(render_data_ptr + 7) = param_offset_2;
    *(int32_t *)((longlong)render_data_ptr + 0x3c) = param_offset_3;
    
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
int32_t rendering_system_get_render_status(uint64_t render_object, longlong state_context)

{
  longlong *state_ptr;
  void *error_msg_ptr;
  longlong base_address;
  uint64_t object_param;
  
  // 检查状态上下文是否有效
  if (*(int *)(state_context + 0x10) != 0) {
    base_address = _DAT_180c8a9f0 + 0x50;
    object_param = render_object;
    state_ptr = (longlong *)FUN_180058080(base_address, &object_param, state_context);
    
    // 如果状态指针有效，返回状态码
    if (*state_ptr != base_address) {
      return *(int32_t *)(*state_ptr + 0x40);
    }
    
    // 处理错误信息
    error_msg_ptr = &system_buffer_ptr;
    if (*(void **)(state_context + 8) != (void *)0x0) {
      error_msg_ptr = *(void **)(state_context + 8);
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
  *(int32_t *)(context_ptr + 1) = 0;
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
uint64_t rendering_system_get_global_render_data(void)

{
  // 检查线程本地存储中的数据是否需要初始化
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8) +
              0x48) < _DAT_180d49128) {
    FUN_1808fcb90(&system_state_9128);
    
    // 如果数据初始化失败，执行清理和重新初始化
    if (_DAT_180d49128 == -1) {
      FUN_18058f390(0x180d48f30);
      FUN_1808fc820(&UNK_180943060);
      FUN_1808fcb30(&system_state_9128);
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
  int8_t stack_data [32];
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



/**
 * 3D坐标变换函数
 * 执行3D坐标的变换运算
 * 
 * @param transform_matrix 变换矩阵
 * @param result_coords 结果坐标
 * @param source_coords 源坐标
 * @return 变换后的坐标指针
 */
float * rendering_system_transform_3d_coordinates(int32_t *transform_matrix, float *result_coords, float *source_coords)

{
  float coord_z;
  float coord_y;
  float coord_x;
  int32_t matrix_elem_1;
  int32_t matrix_elem_2;
  int32_t matrix_elem_3;
  int32_t matrix_elem_4;
  int32_t matrix_elem_5;
  int32_t matrix_elem_6;
  int32_t matrix_elem_7;
  int32_t matrix_elem_8;
  int32_t matrix_elem_9;
  int32_t matrix_elem_10;
  int32_t matrix_elem_11;
  int32_t matrix_elem_12;
  int32_t matrix_elem_13;
  int32_t matrix_elem_14;
  int32_t matrix_elem_15;
  int32_t matrix_elem_16;
  float transformed_x;
  float transformed_y;
  float transformed_z;
  float transformed_w;
  float temp_x;
  float temp_y;
  float temp_z;
  float temp_w;
  float final_x;
  float final_y;
  float final_z;
  float final_w;
  
  // 复制变换矩阵到栈变量
  matrix_elem_1 = *transform_matrix;
  matrix_elem_2 = transform_matrix[1];
  matrix_elem_3 = transform_matrix[2];
  matrix_elem_4 = transform_matrix[5];
  matrix_elem_5 = transform_matrix[4];
  matrix_elem_6 = transform_matrix[8];
  matrix_elem_7 = transform_matrix[6];
  matrix_elem_8 = transform_matrix[10];
  matrix_elem_9 = transform_matrix[9];
  matrix_elem_10 = transform_matrix[13];
  matrix_elem_11 = transform_matrix[12];
  matrix_elem_12 = transform_matrix[14];
  matrix_elem_13 = 0x3f800000;  // 1.0f
  matrix_elem_14 = 0;
  matrix_elem_15 = 0;
  matrix_elem_16 = 0;
  
  // 计算矩阵逆变换
  FUN_1805351a0(&matrix_elem_1, &transformed_x);
  
  // 获取源坐标
  coord_z = source_coords[2];
  coord_y = *source_coords;
  coord_x = source_coords[1];
  
  // 应用坐标变换
  *result_coords = coord_x * temp_y + coord_y * transformed_x + coord_z * temp_z + final_x;
  result_coords[1] = transformed_y * coord_y * temp_w * coord_x + temp_x * coord_z + final_y;
  result_coords[2] = transformed_z * coord_y * temp_x * coord_x + temp_z * coord_z + final_z;
  result_coords[3] = transformed_w * coord_y * temp_w * coord_x + temp_w * coord_z + final_w;
  
  return result_coords;
}





/**
 * 空函数占位符
 * 用于填充函数表或作为默认实现
 */
void rendering_system_empty_function_placeholder(void)

{
  int32_t unused_param;
  
  // 调用底层系统函数
  FUN_1808fd400(unused_param);
}



/**
 * 渲染锁获取函数
 * 获取渲染操作的锁以确保线程安全
 * 
 * @param lock_context 锁上下文
 * @param lock_data 锁数据
 * @param timeout 超时时间
 * @param flags 锁标志
 * @return 锁状态
 */
uint64_t rendering_system_acquire_render_lock(longlong lock_context, uint64_t lock_data, ulonglong timeout, uint64_t flags)

{
  int lock_result;
  
  // 检查是否需要获取锁
  if ((*(byte *)(lock_context + 0xa8) & 1) == 0) {
    lock_result = _Mtx_lock(lock_context + 0xe0, lock_data, timeout, flags, 0xfffffffffffffffe);
    if (lock_result != 0) {
      __Throw_C_error_std__YAXH_Z(lock_result);
    }
    
    // 处理渲染参数
    if ((*(byte *)(lock_context + 0xa8) & 1) == 0) {
      FUN_1802fac00(lock_context, *(longlong *)(lock_context + 0x10) + 0x70, 0xbf800000);
    }
    
    // 释放锁
    lock_result = _Mtx_unlock(lock_context + 0xe0);
    if (lock_result != 0) {
      __Throw_C_error_std__YAXH_Z(lock_result);
    }
  }
  
  // 执行渲染操作
  FUN_1801c15d0(lock_context, lock_data, timeout & 0xff);
  return lock_data;
}





/**
 * 调试渲染函数
 * 用于调试渲染系统的功能
 * 
 * @param debug_context 调试上下文
 * @param debug_param 调试参数
 */
void rendering_system_debug_render_function(uint64_t debug_context, int32_t debug_param)

{
  // 调用底层调试函数
  FUN_1808fd400(debug_param);
}





/**
 * 矩阵逆变换计算函数
 * 计算变换矩阵的逆矩阵，用于坐标反向变换
 * 
 * @param matrix_ptr 输入矩阵指针
 * @param result_ptr 结果矩阵指针
 */
void rendering_system_calculate_matrix_inverse(float *matrix_ptr, float *result_ptr)

{
  float matrix_element_10;
  float matrix_element_1;
  float matrix_element_13;
  float matrix_element_4;
  float matrix_element_12;
  float matrix_element_5;
  float matrix_element_0;
  float matrix_element_7;
  float matrix_element_8;
  float matrix_element_14;
  float determinant;
  float temp_result_1;
  float temp_result_2;
  float temp_result_3;
  float temp_result_4;
  float temp_result_5;
  float temp_result_6;
  float temp_result_7;
  float temp_result_8;
  
  // 获取矩阵元素
  matrix_element_10 = matrix_ptr[10];
  matrix_element_1 = matrix_ptr[1];
  matrix_element_13 = matrix_ptr[0xd];
  matrix_element_4 = matrix_ptr[4];
  matrix_element_12 = matrix_ptr[0xc];
  matrix_element_5 = matrix_ptr[5];
  matrix_element_0 = *matrix_ptr;
  matrix_element_7 = matrix_ptr[7];
  matrix_element_8 = matrix_ptr[8];
  matrix_element_14 = matrix_ptr[0xe];
  
  // 计算逆矩阵元素
  result_ptr[2] = 0.0;
  result_ptr[3] = 0.0;
  temp_result_1 = matrix_element_1 * matrix_element_10;
  temp_result_2 = matrix_element_5 * matrix_element_10;
  result_ptr[1] = -temp_result_1;
  *result_ptr = temp_result_2;
  result_ptr[4] = -(matrix_element_4 * matrix_element_10);
  result_ptr[5] = matrix_element_0 * matrix_element_10;
  result_ptr[6] = 0.0;
  result_ptr[7] = 0.0;
  result_ptr[8] = 0.0;
  result_ptr[9] = 0.0;
  temp_result_3 = matrix_element_0 * matrix_element_5 - matrix_element_4 * matrix_element_1;
  result_ptr[0xb] = 0.0;
  temp_result_4 = -(matrix_element_4 * -(matrix_element_10 * matrix_element_13)) - matrix_element_12 * temp_result_2;
  result_ptr[10] = temp_result_3;
  result_ptr[0xc] = temp_result_4;
  temp_result_5 = matrix_element_12 * temp_result_1 + matrix_element_0 * -(matrix_element_10 * matrix_element_13);
  temp_result_6 = matrix_element_14 * matrix_element_1 * matrix_element_4 - matrix_element_14 * matrix_element_5 * matrix_element_0;
  result_ptr[0xd] = temp_result_5;
  determinant = matrix_element_0 * *result_ptr + matrix_element_4 * result_ptr[1];
  result_ptr[0xe] = temp_result_6;
  temp_result_7 = matrix_element_0 * temp_result_2 - matrix_element_4 * temp_result_1;
  result_ptr[0xf] = temp_result_7;
  
  // 归一化处理
  if (determinant != 1.0) {
    determinant = 1.0 / determinant;
    *result_ptr = determinant * *result_ptr;
    result_ptr[1] = determinant * result_ptr[1];
    result_ptr[5] = determinant * result_ptr[5];
    result_ptr[4] = determinant * result_ptr[4];
    result_ptr[10] = temp_result_3 * determinant;
    result_ptr[0xc] = temp_result_4 * determinant;
    result_ptr[0xd] = temp_result_5 * determinant;
    result_ptr[0xe] = temp_result_6 * determinant;
    result_ptr[0xf] = temp_result_7 * determinant;
  }
  return;
}





/**
 * 矩阵变换应用函数
 * 将变换矩阵应用到渲染对象上
 * 
 * @param result_matrix 结果矩阵指针
 * @param transform_matrix 变换矩阵指针
 */
void rendering_system_apply_matrix_transform(float *result_matrix, int32_t *transform_matrix)

{
  float matrix_element_1;
  float matrix_element_0;
  float matrix_element_2;
  float inverse_matrix_0;
  float inverse_matrix_1;
  float inverse_matrix_2;
  float inverse_matrix_3;
  float inverse_matrix_4;
  float inverse_matrix_5;
  float inverse_matrix_6;
  float inverse_matrix_7;
  float inverse_matrix_8;
  float inverse_matrix_9;
  float inverse_matrix_10;
  float inverse_matrix_11;
  float inverse_matrix_12;
  float inverse_matrix_13;
  float inverse_matrix_14;
  float inverse_matrix_15;
  int32_t transform_elem_0;
  int32_t transform_elem_1;
  int32_t transform_elem_2;
  int32_t transform_elem_3;
  int32_t transform_elem_4;
  int32_t transform_elem_5;
  int32_t transform_elem_6;
  int32_t transform_elem_7;
  int32_t transform_elem_8;
  int32_t transform_elem_9;
  int32_t transform_elem_10;
  int32_t transform_elem_11;
  int32_t transform_elem_12;
  int32_t transform_elem_13;
  int32_t transform_elem_14;
  int32_t transform_elem_15;
  
  // 复制变换矩阵到栈变量
  transform_elem_0 = *transform_matrix;
  transform_elem_1 = transform_matrix[1];
  transform_elem_2 = transform_matrix[2];
  transform_elem_5 = transform_matrix[5];
  transform_elem_4 = transform_matrix[4];
  transform_elem_8 = transform_matrix[8];
  transform_elem_6 = transform_matrix[6];
  transform_elem_10 = transform_matrix[10];
  transform_elem_9 = transform_matrix[9];
  transform_elem_13 = transform_matrix[0xd];
  transform_elem_12 = transform_matrix[0xc];
  transform_elem_14 = transform_matrix[0xe];
  transform_elem_15 = 0x3f800000;  // 1.0f
  transform_elem_3 = 0;
  transform_elem_7 = 0;
  transform_elem_11 = 0;
  
  // 计算逆矩阵
  rendering_system_calculate_matrix_inverse(&transform_elem_0, &inverse_matrix_0);
  
  // 获取结果矩阵元素
  matrix_element_1 = result_matrix[1];
  matrix_element_0 = *result_matrix;
  matrix_element_2 = result_matrix[2];
  
  // 应用第一行变换
  result_matrix[3] = 1.0;
  *result_matrix = matrix_element_0 * inverse_matrix_0 + matrix_element_1 * inverse_matrix_4 + matrix_element_2 * inverse_matrix_8 + inverse_matrix_12;
  result_matrix[1] = matrix_element_0 * inverse_matrix_1 + matrix_element_1 * inverse_matrix_5 + matrix_element_2 * inverse_matrix_9 + inverse_matrix_13;
  result_matrix[2] = matrix_element_0 * inverse_matrix_2 + matrix_element_1 * inverse_matrix_6 + matrix_element_2 * inverse_matrix_10 + inverse_matrix_14;
  result_matrix[3] = matrix_element_0 * inverse_matrix_3 + matrix_element_1 * inverse_matrix_7 + matrix_element_2 * inverse_matrix_11 + inverse_matrix_15;
  
  // 获取第二行元素并应用变换
  result_matrix[7] = 1.0;
  matrix_element_1 = result_matrix[4];
  matrix_element_0 = result_matrix[5];
  matrix_element_2 = result_matrix[6];
  result_matrix[4] = matrix_element_1 * inverse_matrix_0 + matrix_element_0 * inverse_matrix_4 + matrix_element_2 * inverse_matrix_8 + inverse_matrix_12;
  result_matrix[5] = matrix_element_1 * inverse_matrix_1 + matrix_element_0 * inverse_matrix_5 + matrix_element_2 * inverse_matrix_9 + inverse_matrix_13;
  result_matrix[6] = matrix_element_1 * inverse_matrix_2 + matrix_element_0 * inverse_matrix_6 + matrix_element_2 * inverse_matrix_10 + inverse_matrix_14;
  result_matrix[7] = matrix_element_1 * inverse_matrix_3 + matrix_element_0 * inverse_matrix_7 + matrix_element_2 * inverse_matrix_11 + inverse_matrix_15;
  return;
}



/**
 * 向量坐标缩放函数
 * 对向量坐标进行缩放处理
 * 
 * @param source_vector 源向量指针
 * @param result_vector 结果向量指针
 * @param scale_factor 缩放因子
 * @return 结果向量指针
 */
float * rendering_system_scale_vector_coordinates(float *source_vector, float *result_vector, float scale_factor)

{
  float vector_element_0;
  float vector_element_1;
  float vector_element_2;
  float vector_element_4;
  float vector_element_5;
  float vector_element_9;
  float vector_element_10;
  float vector_element_8;
  float vector_element_6;
  float inverse_scale;
  
  // 计算缩放因子的倒数
  inverse_scale = 1.0 / scale_factor;
  
  // 获取向量元素
  vector_element_0 = *source_vector;
  vector_element_1 = source_vector[1];
  vector_element_2 = source_vector[4];
  vector_element_5 = source_vector[5];
  vector_element_9 = source_vector[9];
  vector_element_10 = source_vector[10];
  vector_element_8 = source_vector[8];
  vector_element_6 = source_vector[6];
  
  // 应用缩放变换
  result_vector[8] = inverse_scale * vector_element_8;
  result_vector[9] = inverse_scale * vector_element_9;
  result_vector[10] = inverse_scale * vector_element_10;
  result_vector[0xb] = 3.4028235e+38;  // FLOAT_MAX
  *result_vector = inverse_scale * vector_element_0;
  result_vector[1] = inverse_scale * vector_element_1;
  result_vector[2] = inverse_scale * source_vector[2];
  result_vector[3] = 3.4028235e+38;  // FLOAT_MAX
  result_vector[4] = inverse_scale * vector_element_2;
  result_vector[5] = inverse_scale * vector_element_5;
  result_vector[6] = inverse_scale * vector_element_6;
  result_vector[7] = 3.4028235e+38;  // FLOAT_MAX
  
  return result_vector;
}



/**
 * 渲染队列管理函数
 * 管理渲染队列中的对象，包括添加、删除和重新分配
 * 
 * @param queue_ptr 队列指针
 * @param item_ptr 项目指针
 * @return 处理后的项目指针
 */
longlong * rendering_system_manage_render_queue(longlong *queue_ptr, longlong *item_ptr)

{
  uint64_t allocation_result;
  longlong *new_item;
  longlong *result_ptr;
  longlong current_size;
  longlong *old_queue_ptr;
  longlong new_size;
  longlong *new_queue_ptr;
  
  result_ptr = (longlong *)0x0;
  
  // 分配新项目内存
  allocation_result = FUN_18062b1e0(_DAT_180c8ed18, 0x98d9e0, 0x10, 8, 0, 0xfffffffffffffffe);
  new_item = (longlong *)FUN_1804f2420(allocation_result);
  *item_ptr = (longlong)new_item;
  
  // 初始化新项目
  if (new_item != (longlong *)0x0) {
    (**(code **)(*new_item + 0x28))(new_item);
  }
  
  new_size = 1;
  
  // 如果队列为空，直接添加项目
  if (*queue_ptr == 0) {
    new_item = (longlong *)*item_ptr;
    if (new_item != (longlong *)0x0) {
      (**(code **)(*new_item + 0x28))(new_item);
    }
    old_queue_ptr = (longlong *)*queue_ptr;
    *queue_ptr = (longlong)new_item;
    if (old_queue_ptr != (longlong *)0x0) {
      (**(code **)(*old_queue_ptr + 0x38))();
    }
  }
  
  // 检查队列是否有空间
  new_item = (longlong *)queue_ptr[2];
  if (new_item < (longlong *)queue_ptr[3]) {
    // 有空间，直接添加
    queue_ptr[2] = (longlong)(new_item + 1);
    result_ptr = (longlong *)*item_ptr;
    *new_item = (longlong)result_ptr;
    if (result_ptr != (longlong *)0x0) {
      (**(code **)(*result_ptr + 0x28))(result_ptr);
    }
  }
  else {
    // 队列已满，需要扩容
    old_queue_ptr = (longlong *)queue_ptr[1];
    current_size = (longlong)new_item - (longlong)old_queue_ptr >> 3;
    if ((current_size == 0) || (new_size = current_size * 2, new_queue_ptr = result_ptr, new_size != 0)) {
      result_ptr = (longlong *)FUN_18062b420(_DAT_180c8ed18, new_size * 8, (char)queue_ptr[4]);
      new_item = (longlong *)queue_ptr[2];
      old_queue_ptr = (longlong *)queue_ptr[1];
      new_queue_ptr = result_ptr;
    }
    
    // 复制现有项目到新队列
    for (; old_queue_ptr != new_item; old_queue_ptr = old_queue_ptr + 1) {
      *result_ptr = *old_queue_ptr;
      *old_queue_ptr = 0;
      result_ptr = result_ptr + 1;
    }
    
    // 添加新项目
    new_item = (longlong *)*item_ptr;
    *result_ptr = (longlong)new_item;
    if (new_item != (longlong *)0x0) {
      (**(code **)(*new_item + 0x28))(new_item);
    }
    
    // 清理旧队列
    new_item = (longlong *)queue_ptr[2];
    old_queue_ptr = (longlong *)queue_ptr[1];
    if (old_queue_ptr != new_item) {
      do {
        if ((longlong *)*old_queue_ptr != (longlong *)0x0) {
          (**(code **)(*(longlong *)*old_queue_ptr + 0x38))();
        }
        old_queue_ptr = old_queue_ptr + 1;
      } while (old_queue_ptr != new_item);
      old_queue_ptr = (longlong *)queue_ptr[1];
    }
    
    // 释放旧队列内存
    if (old_queue_ptr != (longlong *)0x0) {
      // WARNING: Subroutine does not return
      FUN_18064e900(old_queue_ptr);
    }
    
    // 更新队列指针
    queue_ptr[1] = (longlong)new_queue_ptr;
    queue_ptr[2] = (longlong)(result_ptr + 1);
    queue_ptr[3] = (longlong)(new_queue_ptr + new_size);
  }
  return item_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 渲染状态处理函数
 * 处理渲染系统的状态变化和资源管理
 * 
 * @param state_ptr 状态指针
 * @param param_1 参数1
 * @param param_2 参数2
 */
void rendering_system_process_render_state(longlong *state_ptr, uint64_t param_1, uint64_t param_2)

{
  int32_t state_flag;
  longlong resource_handle;
  char system_status;
  int lock_result;
  longlong state_data;
  longlong iteration_count;
  longlong *stack_pointer;
  
  state_data = *state_ptr;
  if (state_data != 0) {
    // 获取状态信息
    system_status = FUN_18055f260(param_2, &stack_pointer, &UNK_1809fa490);
    FUN_1804fe350(&UNK_180a30280, system_status, &UNK_180a302c0, &stack_pointer);
    
    // 检查状态有效性
    if ((((system_status != '\0') && (-1 < (int)(uint)stack_pointer)) &&
        ((int)(uint)stack_pointer < *(int)(state_data + 0x87b31c))) &&
       (state_data = (ulonglong)((uint)stack_pointer & 0xf) * 0xbe0 +
                *(longlong *)(*(longlong *)(state_data + 0x87b340) + (ulonglong)((uint)stack_pointer >> 4) * 8),
       *(int *)(state_data + 8) != 0)) {
      
      iteration_count = 0;
      
      // 检查锁状态
      if (((_DAT_180c92514 - 2U & 0xfffffffc) == 0) && (_DAT_180c92514 != 4)) {
        // 获取锁
        lock_result = _Mtx_lock(0x180c95528);
        if (lock_result != 0) {
          __Throw_C_error_std__YAXH_Z(lock_result);
        }
        
        // 获取状态值
        state_flag = *(int32_t *)(state_data + 0xc);
        system_status = FUN_180645c10(0x180c95578, 0, &UNK_1809fa560);
        
        // 处理状态清理
        if ((system_status != '\0') &&
           (system_status = FUN_180645c10(0x180c95578, 0x13, &UNK_1809fa540), system_status != '\0')) {
          FUN_180645c10(0x180c95578, state_flag, &UNK_1809fa490);
        }
        
        // 清理全局状态
        _DAT_180c95b3c = _DAT_180c95b3c & 0xffffffff00000000;
        lock_result = (int)(_DAT_180c92ce0 - _DAT_180c92cd8 >> 3);
        state_data = _DAT_180c92cd8;
        
        // 遍历清理状态数据
        if (0 < lock_result) {
          do {
            longlong item_data = *(longlong *)(state_data + iteration_count * 8);
            if ((item_data != 0) && (*(char *)(*(longlong *)(item_data + 0x58f8) + 0x1c) != '\0')) {
              FUN_1805b59d0(item_data, 0x180c95578);
              state_data = _DAT_180c92cd8;
            }
            iteration_count = iteration_count + 1;
          } while (iteration_count < lock_result);
        }
        
        // 执行最终清理
        if (_DAT_180c96070 != 0) {
          FUN_180567f30(_DAT_180c92580, 0x180c95578);
        }
        
        _DAT_180c95b3c = 0;
        memset(_DAT_180c95b10, 0, (longlong)(_DAT_180c95b08 >> 3));
      }
      
      // 重置状态标志
      *(int16_t *)(state_data + 0x3d1) = 0;
      
      // 检查并清理渲染上下文
      if (*(longlong *)(*(longlong *)(state_data + 0xe0) + 0x20) != 0) {
        FUN_180198980();
      }
      
      // 清理上下文指针
      stack_pointer = *(longlong **)(state_data + 0xe0);
      *(uint64_t *)(state_data + 0xe0) = 0;
      
      if (stack_pointer != (longlong *)0x0) {
        (**(code **)(*stack_pointer + 0x38))();
      }
      
      *(uint64_t *)(state_data + 0xe8) = 0;
      return;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 渲染系统资源清理函数
 * 清理渲染系统资源并重置状态
 */
void rendering_system_cleanup_render_resources(void)

{
  int32_t status_flag;
  longlong resource_handle;
  char system_status;
  int lock_result;
  longlong state_data;
  longlong iteration_count;
  longlong *stack_pointer;
  longlong context_ptr;
  uint stack_param;
  
  // 执行状态检查函数
  system_status = FUN_18055f260();
  FUN_1804fe350(&UNK_180a30280, system_status, &UNK_180a302c0, &stack_param);
  
  // 验证系统状态
  if (((system_status != '\0') && (-1 < (int)stack_param)) &&
      ((int)stack_param < *(int *)(context_ptr + 0x87b31c))) {
    
    // 计算状态数据地址
    state_data = (ulonglong)(stack_param & 0xf) * 0xbe0 +
                 *(longlong *)(*(longlong *)(context_ptr + 0x87b340) + 
                 (ulonglong)(stack_param >> 4) * 8);
    
    // 检查状态数据是否有效
    if (*(int *)(state_data + 8) != 0) {
      iteration_count = 0;
      
      // 处理系统状态同步
      if ((((_DAT_180c92514 - 2U & 0xfffffffc) == 0) && (_DAT_180c92514 != 4))) {
        // 获取锁
        lock_result = _Mtx_lock(0x180c95528);
        if (lock_result != 0) {
          __Throw_C_error_std__YAXH_Z(lock_result);
        }
        
        // 处理状态标志
        status_flag = *(int32_t *)(state_data + 0xc);
        system_status = FUN_180645c10(0x180c95578, 0, &UNK_1809fa560);
        
        // 验证系统状态
        if ((system_status != '\0') && 
            (system_status = FUN_180645c10(0x180c95578, 0x13, &UNK_1809fa540), system_status != '\0')) {
          FUN_180645c10(0x180c95578, status_flag, &UNK_1809fa490);
        }
        
        // 清理状态数据
        _DAT_180c95b3c = _DAT_180c95b3c & 0xffffffff00000000;
        lock_result = (int)(_DAT_180c92ce0 - _DAT_180c92cd8 >> 3);
        state_data = _DAT_180c92cd8;
        
        // 处理状态清理循环
        if (0 < lock_result) {
          do {
            resource_handle = *(longlong *)(state_data + iteration_count * 8);
            if ((resource_handle != 0) && 
                (*(char *)(*(longlong *)(resource_handle + 0x58f8) + 0x1c) != '\0')) {
              FUN_1805b59d0(resource_handle, 0x180c95578);
              state_data = _DAT_180c92cd8;
            }
            iteration_count = iteration_count + 1;
          } while (iteration_count < lock_result);
        }
        
        // 执行最终清理
        if (_DAT_180c96070 != 0) {
          FUN_180567f30(_DAT_180c92580, 0x180c95578);
        }
        _DAT_180c95b3c = 0;
        memset(_DAT_180c95b10, 0, (longlong)(_DAT_180c95b08 >> 3));
      }
      
      // 重置状态标志
      *(int16_t *)(state_data + 0x3d1) = 0;
      
      // 处理资源释放
      if (*(longlong *)(*(longlong *)(state_data + 0xe0) + 0x20) != 0) {
        FUN_180198980();
      }
      
      // 清理指针
      stack_pointer = *(longlong **)(state_data + 0xe0);
      *(uint64_t *)(state_data + 0xe0) = 0;
      if (stack_pointer != (longlong *)0x0) {
        (**(code **)(*stack_pointer + 0x38))();
      }
      *(uint64_t *)(state_data + 0xe8) = 0;
      return;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 渲染系统状态重置函数
 * 重置渲染系统状态并清理相关资源
 * 
 * @param context_param 上下文参数
 */
void rendering_system_reset_render_state(uint context_param)

{
  int32_t status_flag;
  longlong resource_handle;
  char system_status;
  int lock_result;
  longlong state_data;
  longlong iteration_count;
  longlong *resource_ptr;
  longlong context_ptr;
  
  // 验证上下文参数
  if (((-1 < (int)context_param) && ((int)context_param < *(int *)(context_ptr + 0x87b31c))) &&
      (state_data = (ulonglong)(context_param & 0xf) * 0xbe0 +
                   *(longlong *)(*(longlong *)(context_ptr + 0x87b340) + 
                   (ulonglong)(context_param >> 4) * 8),
       *(int *)(state_data + 8) != 0)) {
    
    iteration_count = 0;
    
    // 处理系统状态同步
    if ((((_DAT_180c92514 - 2U & 0xfffffffc) == 0) && (_DAT_180c92514 != 4))) {
      // 获取锁
      lock_result = _Mtx_lock(0x180c95528);
      if (lock_result != 0) {
        __Throw_C_error_std__YAXH_Z(lock_result);
      }
      
      // 处理状态标志
      status_flag = *(int32_t *)(state_data + 0xc);
      system_status = FUN_180645c10(0x180c95578, 0, &UNK_1809fa560);
      
      // 验证系统状态
      if ((system_status != '\0') && 
          (system_status = FUN_180645c10(0x180c95578, 0x13, &UNK_1809fa540), system_status != '\0')) {
        FUN_180645c10(0x180c95578, status_flag, &UNK_1809fa490);
      }
      
      // 清理状态数据
      _DAT_180c95b3c = _DAT_180c95b3c & 0xffffffff00000000;
      lock_result = (int)(_DAT_180c92ce0 - _DAT_180c92cd8 >> 3);
      state_data = _DAT_180c92cd8;
      
      // 处理状态清理循环
      if (0 < lock_result) {
        do {
          resource_handle = *(longlong *)(state_data + iteration_count * 8);
          if ((resource_handle != 0) && 
              (*(char *)(*(longlong *)(resource_handle + 0x58f8) + 0x1c) != '\0')) {
            FUN_1805b59d0(resource_handle, 0x180c95578);
            state_data = _DAT_180c92cd8;
          }
          iteration_count = iteration_count + 1;
        } while (iteration_count < lock_result);
      }
      
      // 执行最终清理
      if (_DAT_180c96070 != 0) {
        FUN_180567f30(_DAT_180c92580, 0x180c95578);
      }
      _DAT_180c95b3c = 0;
      memset(_DAT_180c95b10, 0, (longlong)(_DAT_180c95b08 >> 3));
    }
    
    // 重置状态标志
    *(int16_t *)(state_data + 0x3d1) = 0;
    
    // 处理资源释放
    if (*(longlong *)(*(longlong *)(state_data + 0xe0) + 0x20) != 0) {
      FUN_180198980();
    }
    
    // 清理指针
    resource_ptr = *(longlong **)(state_data + 0xe0);
    *(uint64_t *)(state_data + 0xe0) = 0;
    if (resource_ptr != (longlong *)0x0) {
      (**(code **)(*resource_ptr + 0x38))();
    }
    *(uint64_t *)(state_data + 0xe8) = 0;
    return;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



