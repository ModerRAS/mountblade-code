#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part044.c - 核心引擎模块第44部分
// 本文件包含16个函数，主要涉及向量运算、矩阵操作、内存管理和对象初始化等功能

// 函数：四元数归一化
// 将输入的四元数向量归一化为单位长度
void normalize_quaternion(float *quaternion)

{
  int8_t temp_var1 [16];
  double x_squared;
  double y_squared;
  double z_squared;
  float x_component;
  int8_t temp_var2 [16];
  float y_component;
  float z_component;
  double w_squared;
  float w_component;
  double magnitude_squared;
  
  y_squared = (double)quaternion[1];
  magnitude_squared = (double)quaternion[2];
  w_squared = (double)quaternion[3];
  z_squared = (double)*quaternion;
  temp_var2._0_8_ = z_squared * z_squared;
  temp_var2._8_8_ = 0;
  x_squared = y_squared * y_squared + magnitude_squared * magnitude_squared + w_squared * w_squared + temp_var2._0_8_;
  if (x_squared <= 1e-07) {
    w_component = 1.0;
    z_component = 0.0;
    y_component = 0.0;
    x_component = 0.0;
  }
  else {
    temp_var1._8_8_ = 0;
    temp_var1._0_8_ = x_squared;
    temp_var2 = sqrtpd(temp_var2,temp_var1);
    x_squared = 1.0 / temp_var2._0_8_;
    w_component = (float)(x_squared * z_squared);
    z_component = (float)(x_squared * w_squared);
    y_component = (float)(x_squared * magnitude_squared);
    x_component = (float)(x_squared * y_squared);
  }
  quaternion[1] = x_component;
  quaternion[2] = y_component;
  quaternion[3] = z_component;
  *quaternion = w_component;
  return;
}



// 函数：初始化对象结构体
// 初始化一个对象结构体，设置默认值和状态标志
uint64_t * initialize_object_structure(uint64_t *object_ptr)

{
  *object_ptr = 0;
  object_ptr[1] = 0;
  *(int8_t *)((int64_t)object_ptr + 0x14) = 0;
  LOCK();
  *(int32_t *)(object_ptr + 2) = 0;
  UNLOCK();
  LOCK();
  *(int8_t *)((int64_t)object_ptr + 0x16) = 1;
  UNLOCK();
  LOCK();
  *(int8_t *)((int64_t)object_ptr + 0x15) = 0;
  UNLOCK();
  return object_ptr;
}



// 函数：清理对象资源
// 释放对象占用的资源，根据标志位决定是否释放内存
uint64_t *
cleanup_object_resources(uint64_t *object_ptr,uint64_t cleanup_flags,uint64_t param_3,uint64_t param_4)

{
  uint64_t cleanup_mask;
  
  cleanup_mask = 0xfffffffffffffffe;
  if ((int64_t *)object_ptr[4] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)object_ptr[4] + 0x38))();
  }
  *object_ptr = &GLOBAL_VTABLE_PTR_180a21720;
  *object_ptr = &GLOBAL_VTABLE_PTR_180a21690;
  if ((cleanup_flags & 1) != 0) {
    free(object_ptr,0x30,param_3,param_4,cleanup_mask);
  }
  return object_ptr;
}



// 函数：销毁对象实例
// 销毁对象实例，清理相关资源
uint64_t * destroy_object_instance(uint64_t *object_ptr,uint destroy_flags)

{
  SystemDataValidator(object_ptr + 3,8,0x10,FUN_180045af0,0xfffffffffffffffe);
  *object_ptr = &GLOBAL_VTABLE_PTR_180a21720;
  *object_ptr = &GLOBAL_VTABLE_PTR_180a21690;
  if ((destroy_flags & 1) != 0) {
    free(object_ptr,0xa0);
  }
  return object_ptr;
}



// 函数：创建对象实例
// 创建一个新的对象实例并初始化相关数据结构
uint64_t * create_object_instance(uint64_t *object_ptr)

{
  *object_ptr = &GLOBAL_VTABLE_PTR_180a21690;
  *object_ptr = &GLOBAL_VTABLE_PTR_180a21720;
  *(int32_t *)(object_ptr + 1) = 0;
  *object_ptr = &GLOBAL_VTABLE_PTR_180a00098;
  DataStructureManager(object_ptr + 3,8,0x10,&SUB_18005d5f0,FUN_180045af0);
  *(int32_t *)(object_ptr + 2) = 0;
  *(int8_t *)((int64_t)object_ptr + 0x14) = 9;
  *(byte *)(object_ptr + 0x13) = *(byte *)(object_ptr + 0x13) | 1;
  return object_ptr;
}



// 警告：以'_'开头的全局变量与同一地址的较小符号重叠



// 函数：处理对象初始化（类型1）
// 处理特定类型对象的初始化流程
void process_object_initialization_type1(uint64_t *object_ptr,uint init_flags)

{
  uint64_t temp_var1;
  void **function_ptr;
  int8_t stack_buffer_158 [32];
  void **stack_ptr_138;
  void ***stack_ptr_ptr_130;
  uint64_t stack_var_128;
  uint64_t *stack_ptr_120;
  void **stack_ptr_118;
  void *stack_ptr_108;
  int8_t *stack_ptr_100;
  int32_t stack_var_f8;
  int8_t stack_buffer_f0 [128];
  int32_t stack_var_70;
  uint64_t stack_var_68;
  uint64_t stack_var_28;
  
  stack_var_128 = 0xfffffffffffffffe;
  stack_var_28 = GLOBAL_DATA_180bf00a8 ^ (uint64_t)stack_buffer_158;
  *object_ptr = &GLOBAL_VTABLE_PTR_180a00100;
  stack_ptr_120 = object_ptr;
  if (object_ptr[3] != 0) {
    stack_ptr_ptr_130 = &stack_ptr_108;
    stack_ptr_108 = &GLOBAL_FUNCTION_TABLE_1809fcc28;
    stack_ptr_100 = stack_buffer_f0;
    stack_var_f8 = 0;
    stack_buffer_f0[0] = 0;
    stack_var_70 = 0x25;
    stack_var_68 = object_ptr[3];
    temp_var1 = CoreEngineMemoryPoolReallocator(GLOBAL_DATA_180c8ed18,0x100,8,3);
    function_ptr = (void **)FUN_18005ce30(temp_var1,&stack_ptr_108);
    stack_ptr_118 = function_ptr;
    if (function_ptr != (void **)0x0) {
      (**(code **)(*function_ptr + 0x28))(function_ptr);
    }
    temp_var1 = GLOBAL_DATA_180c82868;
    stack_ptr_ptr_130 = &stack_ptr_138;
    stack_ptr_138 = function_ptr;
    if (function_ptr != (void **)0x0) {
      (**(code **)(*function_ptr + 0x28))(function_ptr);
    }
    FUN_18005e370(temp_var1,&stack_ptr_138);
    if (function_ptr != (void **)0x0) {
      (**(code **)(*function_ptr + 0x38))(function_ptr);
    }
    stack_ptr_ptr_130 = (void ***)&stack_ptr_108;
    stack_ptr_108 = &GLOBAL_FUNCTION_TABLE_18098bcb0;
  }
  *object_ptr = &GLOBAL_VTABLE_PTR_180a21720;
  *object_ptr = &GLOBAL_VTABLE_PTR_180a21690;
  if ((init_flags & 1) != 0) {
    free(object_ptr,0x20);
  }
                    // 警告：子函数不返回
  SystemSecurityChecker(stack_var_28 ^ (uint64_t)stack_buffer_158);
}



// 警告：以'_'开头的全局变量与同一地址的较小符号重叠



// 函数：处理对象初始化（类型2）
// 处理另一种类型对象的初始化流程
void process_object_initialization_type2(uint64_t *object_ptr,uint init_flags)

{
  uint64_t temp_var1;
  void **function_ptr;
  int8_t stack_buffer_158 [32];
  void **stack_ptr_138;
  void ***stack_ptr_ptr_130;
  uint64_t stack_var_128;
  uint64_t *stack_ptr_120;
  void **stack_ptr_118;
  void *stack_ptr_108;
  int8_t *stack_ptr_100;
  int32_t stack_var_f8;
  int8_t stack_buffer_f0 [128];
  int32_t stack_var_70;
  uint64_t stack_var_68;
  uint64_t stack_var_28;
  
  stack_var_128 = 0xfffffffffffffffe;
  stack_var_28 = GLOBAL_DATA_180bf00a8 ^ (uint64_t)stack_buffer_158;
  *object_ptr = &GLOBAL_VTABLE_PTR_180a00168;
  stack_ptr_120 = object_ptr;
  if (object_ptr[3] != 0) {
    stack_ptr_ptr_130 = &stack_ptr_108;
    stack_ptr_108 = &GLOBAL_FUNCTION_TABLE_1809fcc28;
    stack_ptr_100 = stack_buffer_f0;
    stack_var_f8 = 0;
    stack_buffer_f0[0] = 0;
    stack_var_70 = 0x23;
    stack_var_68 = object_ptr[3];
    temp_var1 = CoreEngineMemoryPoolReallocator(GLOBAL_DATA_180c8ed18,0x100,8,3);
    function_ptr = (void **)FUN_18005ce30(temp_var1,&stack_ptr_108);
    stack_ptr_118 = function_ptr;
    if (function_ptr != (void **)0x0) {
      (**(code **)(*function_ptr + 0x28))(function_ptr);
    }
    temp_var1 = GLOBAL_DATA_180c82868;
    stack_ptr_ptr_130 = &stack_ptr_138;
    stack_ptr_138 = function_ptr;
    if (function_ptr != (void **)0x0) {
      (**(code **)(*function_ptr + 0x28))(function_ptr);
    }
    FUN_18005e370(temp_var1,&stack_ptr_138);
    if (function_ptr != (void **)0x0) {
      (**(code **)(*function_ptr + 0x38))(function_ptr);
    }
    stack_ptr_ptr_130 = (void ***)&stack_ptr_108;
    stack_ptr_108 = &GLOBAL_FUNCTION_TABLE_18098bcb0;
  }
  *object_ptr = &GLOBAL_VTABLE_PTR_180a21720;
  *object_ptr = &GLOBAL_VTABLE_PTR_180a21690;
  if ((init_flags & 1) != 0) {
    free(object_ptr,0x28);
  }
                    // 警告：子函数不返回
  SystemSecurityChecker(stack_var_28 ^ (uint64_t)stack_buffer_158);
}





// 函数：设置对象状态标志
// 在线程安全的方式下设置对象的状态标志
void set_object_status_flag(int64_t *object_ptr)

{
  int status_result;
  
  status_result = (**(code **)(*object_ptr + 0x38))();
  if (status_result == 0) {
    LOCK();
    *(int8_t *)(object_ptr + 2) = 1;
    UNLOCK();
  }
  return;
}





// 函数：设置对象扩展标志
// 在线程安全的方式下设置对象的扩展标志
void set_object_extended_flag(int64_t object_ptr)

{
  int check_result;
  
  check_result = FUN_1806237a0();
  if (check_result == 0) {
    LOCK();
    *(int8_t *)(object_ptr + 0x10) = 1;
    UNLOCK();
  }
  return;
}



// 警告：以'_'开头的全局变量与同一地址的较小符号重叠



// 函数：重新分配数据缓冲区
// 根据新的尺寸重新分配数据缓冲区，保持原有数据
void reallocate_data_buffer(int *buffer_info)

{
  uint64_t new_buffer_ptr;
  
  if (buffer_info[1] < 1) {
    if (*(int64_t *)(buffer_info + 2) != 0) {
                    // 警告：子函数不返回
      CoreEngineMemoryPoolCleaner();
    }
    buffer_info[2] = 0;
    buffer_info[3] = 0;
    return;
  }
  new_buffer_ptr = CoreEngineMemoryPoolAllocator(GLOBAL_DATA_180c8ed18,(int64_t)buffer_info[1] << 4,(char)buffer_info[8]);
  if (*(int64_t *)(buffer_info + 2) != 0) {
                    // 警告：子函数不返回
    memcpy(new_buffer_ptr,*(int64_t *)(buffer_info + 2),(int64_t)*buffer_info << 4);
  }
  *(uint64_t *)(buffer_info + 2) = new_buffer_ptr;
  return;
}





// 函数：复制数据缓冲区
// 复制源数据缓冲区到目标缓冲区
void copy_data_buffer(void)

{
  uint64_t new_buffer_ptr;
  int *source_buffer;
  
  new_buffer_ptr = CoreEngineMemoryPoolAllocator();
  if (*(int64_t *)(source_buffer + 2) != 0) {
                    // 警告：子函数不返回
    memcpy(new_buffer_ptr,*(int64_t *)(source_buffer + 2),(int64_t)*source_buffer << 4);
  }
  *(uint64_t *)(source_buffer + 2) = new_buffer_ptr;
  return;
}





// 函数：验证数据指针
// 验证数据指针的有效性，如果无效则触发错误
void validate_data_pointer(int64_t object_ptr)

{
  int64_t data_offset;
  
  if (*(int64_t *)(object_ptr + 8) != 0) {
                    // 警告：子函数不返回
    CoreEngineMemoryPoolCleaner();
  }
  *(uint64_t *)(data_offset + 8) = 0;
  return;
}





// 函数：计算矩阵乘法
// 计算两个4x4矩阵的乘法结果
void multiply_4x4_matrices(float *matrix_a,float *matrix_b)

{
  float a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26;
  float b11, b12, b13, b14, b15, b16, b17, b18, b19, b20, b21, b22, b23, b24, b25, b26, b27, b28, b29;
  
  a16 = matrix_a[6];
  a14 = matrix_a[13];
  a11 = matrix_a[9];
  a15 = matrix_a[1];
  a13 = matrix_a[14];
  a21 = matrix_a[2];
  a23 = matrix_a[10];
  a26 = matrix_a[5];
  a22 = a13 * a11 - a14 * a23;
  a19 = a13 * a26 - a14 * a16;
  a20 = a13 * a15 - a14 * a21;
  a27 = a26 * a23 - a11 * a16;
  a18 = a15 * a23 - a11 * a21;
  *matrix_b = a27;
  a17 = a15 * a16 - a26 * a21;
  a28 = a21 * matrix_a[9] - a23 * matrix_a[1];
  matrix_b[1] = a28;
  a14 = matrix_a[5];
  a13 = matrix_a[1];
  matrix_b[3] = 0.0;
  a29 = a16 * a13 - a21 * a14;
  matrix_b[2] = a29;
  a12 = a16 * matrix_a[8] - a23 * matrix_a[4];
  matrix_b[4] = a12;
  a25 = a23 * *matrix_a - a21 * matrix_a[8];
  matrix_b[5] = a25;
  a14 = matrix_a[4];
  a13 = *matrix_a;
  matrix_b[7] = 0.0;
  a24 = a21 * a14 - a16 * a13;
  matrix_b[6] = a24;
  a13 = a11 * matrix_a[4] - a26 * matrix_a[8];
  matrix_b[8] = a13;
  a11 = a15 * matrix_a[8] - a11 * *matrix_a;
  matrix_b[9] = a11;
  a16 = matrix_a[4];
  a14 = *matrix_a;
  matrix_b[11] = 0.0;
  a26 = a26 * a14 - a15 * a16;
  matrix_b[10] = a26;
  a14 = (a19 * matrix_a[8] - a17 * matrix_a[4]) - a27 * matrix_a[12];
  matrix_b[12] = a14;
  a23 = (a17 * *matrix_a - a20 * matrix_a[8]) + a18 * matrix_a[12];
  matrix_b[13] = a23;
  a21 = (a20 * matrix_a[4] - a19 * *matrix_a) - a25 * matrix_a[12];
  matrix_b[14] = a21;
  a15 = (a27 * *matrix_a - a18 * matrix_a[4]) + a25 * matrix_a[8];
  matrix_b[15] = a15;
  a16 = a28 * matrix_a[4] + a27 * *matrix_a + a29 * matrix_a[8];
  if (a16 != 1.0) {
    a16 = 1.0 / a16;
    matrix_b[4] = a12 * a16;
    matrix_b[8] = a13 * a16;
    *matrix_b = a27 * a16;
    matrix_b[1] = a28 * a16;
    matrix_b[2] = a29 * a16;
    matrix_b[5] = a25 * a16;
    matrix_b[6] = a24 * a16;
    matrix_b[9] = a11 * a16;
    matrix_b[10] = a26 * a16;
    matrix_b[12] = a14 * a16;
    matrix_b[13] = a23 * a16;
    matrix_b[14] = a21 * a16;
    matrix_b[15] = a15 * a16;
  }
  return;
}





// 函数：归一化旋转矩阵
// 对旋转矩阵进行归一化处理，确保其为正交矩阵
void normalize_rotation_matrix(float *matrix)

{
  float x_component, y_component, z_component;
  int8_t temp_var [16];
  float scale_factor;
  float magnitude;
  
  y_component = matrix[4];
  z_component = matrix[6];
  scale_factor = matrix[5];
  x_component = y_component * y_component + scale_factor * scale_factor + z_component * z_component;
  temp_var = rsqrtss(ZEXT416((uint)x_component),ZEXT416((uint)x_component));
  magnitude = temp_var._0_4_;
  x_component = magnitude * 0.5 * (3.0 - x_component * magnitude * magnitude);
  matrix[6] = z_component * x_component;
  matrix[4] = y_component * x_component;
  matrix[5] = scale_factor * x_component;
  magnitude = scale_factor * x_component * matrix[10] - z_component * x_component * matrix[9];
  *matrix = magnitude;
  x_component = matrix[6] * matrix[8] - matrix[4] * matrix[10];
  matrix[1] = x_component;
  scale_factor = matrix[4] * matrix[9] - matrix[5] * matrix[8];
  y_component = x_component * x_component + magnitude * magnitude + scale_factor * scale_factor;
  temp_var = rsqrtss(ZEXT416((uint)y_component),ZEXT416((uint)y_component));
  z_component = temp_var._0_4_;
  y_component = z_component * 0.5 * (3.0 - y_component * z_component * z_component);
  matrix[1] = x_component * y_component;
  matrix[2] = scale_factor * y_component;
  *matrix = magnitude * y_component;
  matrix[8] = x_component * y_component * matrix[6] - scale_factor * y_component * matrix[5];
  matrix[9] = matrix[4] * matrix[2] - matrix[6] * *matrix;
  matrix[10] = matrix[5] * *matrix - matrix[4] * matrix[1];
  return;
}





// 函数：构建变换矩阵
// 根据位置、旋转和缩放参数构建4x4变换矩阵
void build_transformation_matrix(float *matrix,float *position,float *rotation,float *scale,float *extra_params)

{
  float scale_x, scale_y, scale_z, scale_w;
  
  matrix[0] = 1.0;
  matrix[1] = 0.0;
  matrix[2] = 0.0;
  matrix[3] = 0.0;
  matrix[4] = 0.0;
  matrix[5] = 1.0;
  matrix[6] = 0.0;
  matrix[7] = 0.0;
  matrix[8] = 0.0;
  matrix[9] = 0.0;
  matrix[10] = 1.0;
  matrix[11] = 0.0;
  matrix[12] = 0.0;
  matrix[13] = 0.0;
  matrix[14] = 0.0;
  matrix[15] = 1.0;
  scale_z = *scale;
  scale_w = matrix[4];
  scale_x = matrix[5];
  scale_y = matrix[6];
  matrix[4] = *matrix * scale_z + matrix[4];
  matrix[5] = matrix[1] * scale_z + matrix[5];
  matrix[6] = matrix[2] * scale_z + matrix[6];
  scale_z = scale[1];
  *matrix = scale_w * scale_z + *matrix;
  matrix[1] = scale_x * scale_z + matrix[1];
  matrix[2] = scale_y * scale_z + matrix[2];
  scale_z = *extra_params;
  scale_w = scale_z * matrix[4] + matrix[12];
  matrix[12] = scale_w;
  matrix[13] = matrix[5] * scale_z + matrix[13];
  matrix[14] = matrix[6] * scale_z + matrix[14];
  scale_z = extra_params[1];
  matrix[12] = scale_z * *matrix + scale_w;
  matrix[13] = matrix[1] * scale_z + matrix[13];
  matrix[14] = matrix[2] * scale_z + matrix[14];
  FUN_180085970(SUB84((double)*rotation * 0.0174532925199433,0),
                (float)((double)*rotation * 0.0174532925199433));
  FUN_180085ac0(matrix,rotation[1] * 0.017453292);
  FUN_180085c10(matrix,rotation[2] * 0.017453292);
  scale_z = 1.0 / *scale;
  matrix[4] = scale_z * matrix[4];
  matrix[5] = scale_z * matrix[5];
  matrix[6] = scale_z * matrix[6];
  scale_z = 1.0 / scale[1];
  *matrix = scale_z * *matrix;
  matrix[1] = scale_z * matrix[1];
  matrix[2] = scale_z * matrix[2];
  matrix[3] = 0.0;
  matrix[7] = 0.0;
  matrix[11] = 0.0;
  matrix[15] = 1.0;
  return;
}



uint64_t * initialize_data_structure(uint64_t *data_ptr)

{
  uint64_t temp_var;
  int64_t loop_counter;
  uint64_t *current_ptr;
  int16_t stack_var;
  
  loop_counter = 6;
  current_ptr = data_ptr;
  do {
    func_0x000180084e80(current_ptr);
    current_ptr = current_ptr + 2;
    loop_counter = loop_counter + -1;
  } while (loop_counter != 0);
  temp_var = CONCAT26(stack_var,0xffffffffffff);
  *data_ptr = 0xffffffffffffffff;
  data_ptr[1] = temp_var;
  data_ptr[12] = 0;
  data_ptr[18] = 0;
  data_ptr[2] = 0xffffffffffffffff;
  data_ptr[3] = temp_var;
  data_ptr[13] = 0;
  data_ptr[19] = 0;
  data_ptr[4] = 0xffffffffffffffff;
  data_ptr[5] = temp_var;
  data_ptr[14] = 0;
  data_ptr[20] = 0;
  data_ptr[6] = 0xffffffffffffffff;
  data_ptr[7] = temp_var;
  data_ptr[15] = 0;
  data_ptr[21] = 0;
  data_ptr[8] = 0xffffffffffffffff;
  data_ptr[9] = temp_var;
  data_ptr[16] = 0;
  data_ptr[22] = 0;
  data_ptr[10] = 0xffffffffffffffff;
  data_ptr[11] = temp_var;
  data_ptr[17] = 0;
  data_ptr[23] = 0;
  return data_ptr;
}



// 函数：检查矩阵是否为反射矩阵
// 检查4x4矩阵是否为反射矩阵（行列式为负）
bool is_reflection_matrix(float *matrix)

{
  return (matrix[2] * matrix[4] - *matrix * matrix[6]) * matrix[9] +
         (matrix[1] * matrix[6] - matrix[2] * matrix[5]) * matrix[8] +
         (*matrix * matrix[5] - matrix[1] * matrix[4]) * matrix[10] < 0.0;
}



// 函数：计算矩阵的缩放因子
// 计算4x4矩阵在各个轴向上的缩放因子
float * calculate_matrix_scale_factors(float *matrix,float *scale_factors)

{
  float x_scale, y_scale, z_scale;
  float x_mag, y_mag, z_mag;
  float determinant;
  
  x_scale = matrix[6];
  y_scale = matrix[9];
  z_scale = matrix[8];
  x_mag = matrix[5];
  y_mag = matrix[4];
  z_scale = matrix[2];
  y_mag = matrix[1];
  x_mag = *matrix;
  z_scale = SQRT(x_mag * x_mag + y_mag * y_mag + z_scale * z_scale);
  *scale_factors = z_scale;
  determinant = matrix[10];
  scale_factors[1] = SQRT(y_mag * y_mag + x_mag * x_mag + x_scale * x_scale);
  scale_factors[2] = SQRT(z_scale * z_scale + y_scale * y_scale + determinant * determinant);
  if ((z_scale * y_mag - x_mag * x_scale) * y_scale + (y_mag * x_scale - z_scale * x_mag) * z_scale +
      (x_mag * x_mag - y_mag * y_mag) * matrix[10] < 0.0) {
    *scale_factors = -z_scale;
  }
  return scale_factors;
}





// 函数：设置变换矩阵数据
// 根据不同的模式设置变换矩阵的数据
void set_transformation_matrix_data(float *matrix,int64_t data_source,char mode,uint64_t *source_data)

{
  uint64_t data_chunk1;
  uint64_t data_chunk2;
  uint64_t data_chunk3;
  uint64_t data_chunk4;
  float scale_factor;
  int8_t temp_var [16];
  float rotation_y;
  float rotation_x;
  float rotation_z;
  float magnitude;
  float scale_x, scale_y, scale_z;
  float stack_scale_68;
  float stack_scale_64;
  float stack_scale_60;
  
  if (mode == '\0') {
    data_chunk1 = source_data[1];
    data_chunk2 = source_data[2];
    data_chunk3 = source_data[3];
    *(uint64_t *)matrix = *source_data;
    *(uint64_t *)(matrix + 2) = data_chunk1;
    data_chunk1 = source_data[4];
    data_chunk4 = source_data[5];
    *(uint64_t *)(matrix + 4) = data_chunk2;
    *(uint64_t *)(matrix + 6) = data_chunk3;
    data_chunk2 = source_data[6];
    data_chunk3 = source_data[7];
    *(uint64_t *)(matrix + 8) = data_chunk1;
    *(uint64_t *)(matrix + 10) = data_chunk4;
    *(uint64_t *)(matrix + 12) = data_chunk2;
    *(uint64_t *)(matrix + 14) = data_chunk3;
    matrix[3] = 0.0;
    matrix[7] = 0.0;
    matrix[11] = 0.0;
    matrix[15] = 1.0;
    return;
  }
  scale_factor = *(float *)((int64_t)source_data + 0x34);
  rotation_y = *(float *)(source_data + 7);
  rotation_x = *(float *)((int64_t)source_data + 0x3c);
  matrix[12] = *(float *)(source_data + 6);
  matrix[13] = scale_factor;
  matrix[14] = rotation_y;
  matrix[15] = rotation_x;
  if (mode == '\x01') {
    rotation_y = *(float *)(source_data + 4);
    rotation_x = *(float *)((int64_t)source_data + 0x24);
    rotation_z = *(float *)(source_data + 5);
    scale_x = *(float *)((int64_t)source_data + 0x2c);
    scale_factor = *(float *)(data_source + 0xc4);
    matrix[8] = rotation_y;
    matrix[9] = rotation_x;
    matrix[10] = rotation_z;
    matrix[11] = scale_x;
    scale_z = rotation_y * rotation_y + rotation_x * rotation_x + rotation_z * rotation_z;
    temp_var = rsqrtss(ZEXT416((uint)scale_z),ZEXT416((uint)scale_z));
    scale_x = temp_var._0_4_;
    magnitude = scale_x * 0.5 * (3.0 - scale_z * scale_x * scale_x);
    rotation_x = rotation_x * magnitude;
    rotation_z = rotation_z * magnitude;
    rotation_y = rotation_y * magnitude;
    magnitude = magnitude * scale_z;
    scale_x = *(float *)(data_source + 0xc0) * rotation_z - *(float *)(data_source + 200) * rotation_y;
    scale_z = *(float *)(data_source + 200) * rotation_x - scale_factor * rotation_z;
    scale_y = scale_factor * rotation_y - *(float *)(data_source + 0xc0) * rotation_x;
    matrix[4] = scale_z;
    matrix[5] = scale_x;
    matrix[6] = scale_y;
    matrix[7] = 3.4028235e+38;
    scale_factor = scale_x * rotation_z - scale_y * rotation_x;
    *matrix = scale_factor;
    matrix[1] = scale_y * rotation_y - scale_z * rotation_z;
    matrix[2] = scale_z * rotation_x - scale_x * rotation_y;
    matrix[3] = 3.4028235e+38;
    *matrix = magnitude * scale_factor;
    matrix[2] = magnitude * matrix[2];
    matrix[1] = magnitude * matrix[1];
    matrix[6] = magnitude * matrix[6];
    matrix[4] = magnitude * matrix[4];
    matrix[5] = magnitude * matrix[5];
    matrix[3] = 0.0;
    matrix[7] = 0.0;
    matrix[11] = 0.0;
    matrix[15] = 1.0;
    return;
  }
  FUN_180085020(source_data,&stack_scale_68);
  data_chunk1 = *(uint64_t *)(data_source + 200);
  data_chunk2 = *(uint64_t *)(data_source + 0xd0);
  data_chunk3 = *(uint64_t *)(data_source + 0xd8);
  *(uint64_t *)matrix = *(uint64_t *)(data_source + 0xc0);
  *(uint64_t *)(matrix + 2) = data_chunk1;
  data_chunk1 = *(uint64_t *)(data_source + 0xe0);
  data_chunk4 = *(uint64_t *)(data_source + 0xe8);
  *(uint64_t *)(matrix + 4) = data_chunk2;
  *(uint64_t *)(matrix + 6) = data_chunk3;
  *(uint64_t *)(matrix + 8) = data_chunk1;
  *(uint64_t *)(matrix + 10) = data_chunk4;
  matrix[1] = stack_scale_68 * matrix[1];
  *matrix = stack_scale_68 * *matrix;
  matrix[2] = stack_scale_68 * matrix[2];
  matrix[4] = stack_scale_64 * matrix[4];
  matrix[5] = stack_scale_64 * matrix[5];
  matrix[6] = stack_scale_64 * matrix[6];
  matrix[8] = stack_scale_60 * matrix[8];
  matrix[9] = stack_scale_60 * matrix[9];
  matrix[10] = stack_scale_60 * matrix[10];
  matrix[3] = 0.0;
  matrix[7] = 0.0;
  matrix[11] = 0.0;
  matrix[15] = 1.0;
  return;
}





// 函数：设置变换矩阵数据扩展
// 扩展版本的变换矩阵数据设置函数
void set_transformation_matrix_data_extended(float *matrix,int64_t data_source,uint64_t param_3,uint64_t param_4,
                                          uint64_t param_5)

{
  uint64_t xmm0_data;
  float xmm0_float;
  float xmm0_float2;
  float scale_factor;
  int8_t temp_var [16];
  int8_t temp_var2 [16];
  int32_t temp_var3;
  int32_t xmm3_data;
  int32_t xmm3_data2;
  float xmm4_float;
  float rotation_y;
  float rotation_x;
  float xmm5_float;
  float scale_x, scale_y;
  float scale_z;
  float magnitude;
  float determinant;
  
  temp_var3 = (int32_t)((uint64_t)param_4 >> 0x20);
  determinant = (float)((uint64_t)xmm0_data >> 0x20);
  magnitude = (float)xmm0_data;
  matrix[8] = magnitude;
  matrix[9] = determinant;
  matrix[10] = xmm0_float;
  matrix[11] = xmm0_float2;
  scale_factor = xmm4_float * magnitude + determinant * determinant + xmm0_float * xmm0_float;
  temp_var._4_4_ = temp_var3;
  temp_var._0_4_ = scale_factor;
  temp_var._8_4_ = xmm3_data;
  temp_var._12_4_ = xmm3_data2;
  temp_var2._4_4_ = temp_var3;
  temp_var2._0_4_ = scale_factor;
  temp_var2._8_4_ = xmm3_data;
  temp_var2._12_4_ = xmm3_data2;
  temp_var2 = rsqrtss(temp_var,temp_var2);
  scale_factor = temp_var2._0_4_;
  magnitude = scale_factor * 0.5 * (3.0 - scale_factor * scale_factor * scale_factor);
  determinant = determinant * magnitude;
  scale_y = xmm0_float * magnitude;
  magnitude = magnitude * scale_factor;
  scale_factor = *(float *)(data_source + 0xc0) * scale_y - *(float *)(data_source + 200) * magnitude;
  rotation_x = *(float *)(data_source + 200) * determinant - xmm5_float * scale_y;
  rotation_y = xmm5_float * magnitude - *(float *)(data_source + 0xc0) * determinant;
  matrix[4] = rotation_x;
  matrix[5] = scale_factor;
  matrix[6] = rotation_y;
  matrix[7] = param_5._4_4_;
  scale_factor = scale_factor * scale_y - rotation_y * determinant;
  *matrix = scale_factor;
  matrix[1] = rotation_y * magnitude - rotation_x * scale_y;
  matrix[2] = rotation_x * determinant - scale_factor * magnitude;
  matrix[3] = 3.4028235e+38;
  *matrix = magnitude * scale_factor;
  matrix[2] = magnitude * matrix[2];
  matrix[1] = magnitude * matrix[1];
  matrix[6] = magnitude * matrix[6];
  matrix[4] = magnitude * matrix[4];
  matrix[5] = magnitude * matrix[5];
  matrix[3] = 0.0;
  matrix[7] = 0.0;
  matrix[11] = 0.0;
  matrix[15] = 1.0;
  return;
}





// 函数：设置变换矩阵数据简化
// 简化版本的变换矩阵数据设置函数
void set_transformation_matrix_data_simplified(void)

{
  uint64_t data_chunk1;
  uint64_t data_chunk2;
  uint64_t data_chunk3;
  uint64_t data_chunk4;
  uint64_t input_r9;
  float *output_r10;
  int64_t input_r11;
  float stack_scale_20;
  float stack_scale_24;
  float stack_scale_28;
  
  FUN_180085020(input_r9,&stack_scale_20);
  data_chunk1 = *(uint64_t *)(input_r11 + 200);
  data_chunk2 = *(uint64_t *)(input_r11 + 0xd0);
  data_chunk3 = *(uint64_t *)(input_r11 + 0xd8);
  *(uint64_t *)output_r10 = *(uint64_t *)(input_r11 + 0xc0);
  *(uint64_t *)(output_r10 + 2) = data_chunk1;
  data_chunk1 = *(uint64_t *)(input_r11 + 0xe0);
  data_chunk4 = *(uint64_t *)(input_r11 + 0xe8);
  *(uint64_t *)(output_r10 + 4) = data_chunk2;
  *(uint64_t *)(output_r10 + 6) = data_chunk3;
  *(uint64_t *)(output_r10 + 8) = data_chunk1;
  *(uint64_t *)(output_r10 + 10) = data_chunk4;
  output_r10[1] = stack_scale_20 * output_r10[1];
  *output_r10 = stack_scale_20 * *output_r10;
  output_r10[2] = stack_scale_20 * output_r10[2];
  output_r10[4] = stack_scale_24 * output_r10[4];
  output_r10[5] = stack_scale_24 * output_r10[5];
  output_r10[6] = stack_scale_24 * output_r10[6];
  output_r10[8] = stack_scale_28 * output_r10[8];
  output_r10[9] = stack_scale_28 * output_r10[9];
  output_r10[10] = stack_scale_28 * output_r10[10];
  output_r10[3] = 0.0;
  output_r10[7] = 0.0;
  output_r10[11] = 0.0;
  output_r10[15] = 1.0;
  return;
}





// 函数：释放对象资源
// 安全地释放对象及其相关资源
void free_object_resources(int64_t object_ptr)

{
  uint64_t resource_count;
  uint64_t resource_type;
  uint resource_index;
  
  if (object_ptr == 0) {
    return;
  }
  resource_count = *(uint64_t *)(object_ptr + -0x10);
  resource_type = resource_count >> 0x20;
  resource_index = 0;
  if ((int)(resource_count >> 0x20) != 0) {
    do {
      if (*(int64_t *)((uint64_t)resource_index + object_ptr + 0x30) != 0) {
                    // 警告：子函数不返回
        CoreEngineMemoryPoolCleaner();
      }
      if (*(int64_t *)((uint64_t)resource_index + object_ptr + 8) != 0) {
                    // 警告：子函数不返回
        CoreEngineMemoryPoolCleaner();
      }
      resource_index = resource_index + (int)resource_count;
      resource_type = resource_type - 1;
    } while (resource_type != 0);
  }
                    // 警告：子函数不返回
  CoreEngineMemoryPoolCleaner(object_ptr + -0x10);
}



// 警告：以'_'开头的全局变量与同一地址的较小符号重叠

uint64_t *
allocate_resource_array(uint64_t array_size,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *array_ptr;
  uint64_t *current_element;
  int element_index;
  
  if (array_size == 0) {
    return (uint64_t *)0x0;
  }
  array_ptr = (uint64_t *)
           CoreEngineMemoryPoolAllocator(GLOBAL_DATA_180c8ed18,array_size * 0x50 + 0x10,0xf,param_4,0xfffffffffffffffe);
  *array_ptr = array_size << 0x20 | 0x50;
  element_index = 0;
  current_element = array_ptr + 8;
  do {
    *(int32_t *)((int64_t)current_element + -0x2c) = 0;
    *(int32_t *)(current_element + -6) = 0;
    current_element[-5] = 0;
    *(int8_t *)(current_element + -2) = 3;
    current_element[-1] = 0;
    *current_element = 0;
    *(int8_t *)(current_element + 3) = 3;
    element_index = element_index + 1;
    current_element = current_element + 10;
  } while ((uint64_t)(int64_t)element_index < array_size);
  return array_ptr + 2;
}



// 警告：以'_'开头的全局变量与同一地址的较小符号重叠



// 函数：复制对象数据
// 深度复制对象数据，包括所有子对象和资源
void copy_object_data(int64_t *destination,int64_t *source)

{
  int32_t *src_data_ptr;
  int32_t *dest_data_ptr;
  uint src_count;
  int32_t src_data;
  int32_t src_data2;
  int32_t src_data3;
  ushort src_ushort;
  uint64_t dest_offset;
  int64_t src_ptr;
  uint dest_count;
  uint src_max_count;
  uint *src_uint_ptr;
  uint64_t temp_var;
  uint *dest_uint_ptr;
  
  *(short *)(destination + 2) = (short)source[2];
  if (destination[1] != 0) {
                    // 警告：子函数不返回
    CoreEngineMemoryPoolCleaner();
  }
  temp_var = 0;
  destination[1] = 0;
  FUN_180085530(*destination);
  *destination = 0;
  if ((short)source[2] == 0) {
    return;
  }
  src_ushort = *(ushort *)(destination + 2);
  dest_offset = temp_var;
  if ((uint64_t)src_ushort != 0) {
    dest_offset = CoreEngineMemoryPoolAllocator(GLOBAL_DATA_180c8ed18,(uint64_t)src_ushort * 4,0xf);
    src_ushort = *(ushort *)(destination + 2);
  }
  destination[1] = dest_offset;
  src_ptr = FUN_1800855e0(src_ushort);
  *destination = src_ptr;
  src_ushort = *(ushort *)(destination + 2);
  dest_offset = temp_var;
  if (src_ushort != 0) {
    do {
      dest_count = 0;
      dest_uint_ptr = (uint *)(*source + dest_offset);
      src_uint_ptr = (uint *)(*destination + dest_offset);
      src_max_count = *dest_uint_ptr;
      src_count = src_uint_ptr[1];
      if ((int)src_count < (int)src_max_count) {
        if (src_max_count == 0) {
          if ((int)src_count < 2) {
            src_uint_ptr[1] = 8;
          }
          else {
            src_uint_ptr[1] = ((int)src_count >> 1) + src_count;
          }
        }
        else {
          src_uint_ptr[1] = src_max_count;
        }
        FUN_1800846d0(src_uint_ptr);
      }
      *src_uint_ptr = src_max_count;
      if (*dest_uint_ptr != 0) {
        do {
          src_ptr = (int64_t)(int)dest_count;
          dest_count = dest_count + 1;
          src_data_ptr = (int32_t *)(*(int64_t *)(dest_uint_ptr + 2) + src_ptr * 0x10);
          src_data = src_data_ptr[1];
          src_data2 = src_data_ptr[2];
          src_data3 = src_data_ptr[3];
          dest_data_ptr = (int32_t *)(*(int64_t *)(src_uint_ptr + 2) + src_ptr * 0x10);
          *dest_data_ptr = *src_data_ptr;
          dest_data_ptr[1] = src_data;
          dest_data_ptr[2] = src_data2;
          dest_data_ptr[3] = src_data3;
        } while (dest_count < *dest_uint_ptr);
      }
      src_max_count = dest_uint_ptr[10];
      src_count = src_uint_ptr[11];
      if ((int)src_count < (int)src_max_count) {
        if (src_max_count == 0) {
          if ((int)src_count < 2) {
            src_uint_ptr[11] = 8;
          }
          else {
            src_uint_ptr[11] = ((int)src_count >> 1) + src_count;
          }
        }
        else {
          src_uint_ptr[11] = src_max_count;
        }
        FUN_1800846d0(src_uint_ptr + 10);
      }
      src_uint_ptr[10] = src_max_count;
      src_max_count = 0;
      if (dest_uint_ptr[10] != 0) {
        do {
          src_ptr = (int64_t)(int)src_max_count;
          src_max_count = src_max_count + 1;
          src_data_ptr = (int32_t *)(*(int64_t *)(dest_uint_ptr + 0xc) + src_ptr * 0x10);
          src_data = src_data_ptr[1];
          src_data2 = src_data_ptr[2];
          src_data3 = src_data_ptr[3];
          dest_data_ptr = (int32_t *)(*(int64_t *)(src_uint_ptr + 0xc) + src_ptr * 0x10);
          *dest_data_ptr = *src_data_ptr;
          dest_data_ptr[1] = src_data;
          dest_data_ptr[2] = src_data2;
          dest_data_ptr[3] = src_data3;
        } while (src_max_count < dest_uint_ptr[10]);
      }
      src_ushort = *(ushort *)(destination + 2);
      src_max_count = (int)temp_var + 1;
      temp_var = (uint64_t)src_max_count;
      dest_offset = dest_offset + 0x50;
    } while ((int)src_max_count < (int)(uint)src_ushort);
  }
                    // 警告：子函数不返回
  memcpy(destination[1],source[1],(uint64_t)src_ushort << 2);
}



// 警告：以'_'开头的全局变量与同一地址的较小符号重叠

