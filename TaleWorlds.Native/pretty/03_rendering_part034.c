#include "TaleWorlds.Native.Split.h"

// 03_rendering_part034.c - 渲染系统向量处理和投影变换模块
// 包含5个核心函数，涵盖向量处理、投影变换、相机参数设置和矩阵运算等功能

// 常量定义
#define MAX_FLOAT_VALUE 3.4028235e+38f  // 最大浮点数值
#define NORMALIZED_FLOAT_VALUE 0x3f800000 // 归一化浮点数值 (1.0)

/**
 * 向量归一化处理函数
 * 对渲染变换矩阵中的向量进行归一化处理
 * 
 * @param transform_matrix 变换矩阵数组，包含多个向量分量
 * 
 * 原始实现：FUN_180286514
 * 简化实现：对矩阵中的向量进行归一化处理，使用快速平方根倒数算法
 */
void normalize_rendering_vectors(float *transform_matrix)
{
  float vector_x;
  float vector_y;
  float vector_z;
  float vector_w;
  float temp_vector_x;
  float temp_vector_y;
  float temp_vector_z;
  float temp_vector_w;
  float normalization_factor;
  float magnitude_squared;
  
  // 复制XMM0寄存器的值到变换矩阵
  transform_matrix[0x20] = (float)transform_matrix;
  transform_matrix[0x21] = (float)((ulonglong)transform_matrix >> 0x20);
  transform_matrix[0x22] = transform_matrix;
  transform_matrix[0x23] = transform_matrix;
  
  // 复制矩阵向量分量
  *(undefined8 *)(transform_matrix + 0x28) = *(undefined8 *)(transform_matrix + 0x3c);
  *(undefined8 *)(transform_matrix + 0x2a) = *(undefined8 *)(transform_matrix + 0x3e);
  *(undefined8 *)(transform_matrix + 0x18) = *(undefined8 *)(transform_matrix + 0x3c);
  *(undefined8 *)(transform_matrix + 0x1a) = *(undefined8 *)(transform_matrix + 0x3e);
  *(undefined8 *)(transform_matrix + 0x10) = *(undefined8 *)(transform_matrix + 0x3c);
  *(undefined8 *)(transform_matrix + 0x12) = *(undefined8 *)(transform_matrix + 0x3e);
  
  vector_w = transform_matrix[0x45];
  vector_y = transform_matrix[0x43];
  
  // 计算第一个向量的叉积
  temp_vector_x = -(vector_w * transform_matrix[0x34]) - vector_y * transform_matrix[0x38];
  temp_vector_y = -(vector_w * transform_matrix[0x35]) - vector_y * transform_matrix[0x39];
  temp_vector_z = -(vector_w * transform_matrix[0x36]) - vector_y * transform_matrix[0x3a];
  temp_vector_w = transform_matrix[0x47];
  
  transform_matrix[0x24] = temp_vector_x;
  transform_matrix[0x25] = temp_vector_y;
  transform_matrix[0x26] = temp_vector_z;
  transform_matrix[0x27] = temp_vector_w;
  
  // 计算第二个向量的点积
  vector_w = transform_matrix[0x45];
  vector_y = transform_matrix[0x44];
  
  vector_x = vector_y * transform_matrix[0x38] + vector_w * transform_matrix[0x34];
  vector_z = vector_y * transform_matrix[0x3a] + vector_w * transform_matrix[0x36];
  vector_y = vector_y * transform_matrix[0x39] + vector_w * transform_matrix[0x35];
  
  transform_matrix[0x2c] = vector_x;
  transform_matrix[0x2d] = vector_y;
  transform_matrix[0x2e] = vector_z;
  transform_matrix[0x2f] = temp_vector_w;
  
  // 计算第三个向量的变换
  vector_w = transform_matrix[0x45];
  vector_y = transform_matrix[0x42];
  vector_x = transform_matrix[0x30];
  vector_y = transform_matrix[0x31];
  vector_z = transform_matrix[0x32];
  
  temp_vector_x = -(vector_w * vector_x) - vector_y * transform_matrix[0x38];
  temp_vector_y = -(vector_w * vector_y) - vector_y * transform_matrix[0x39];
  vector_x = transform_matrix[0x3a];
  temp_vector_z = -(vector_w * vector_z) - vector_y * vector_x;
  
  transform_matrix[0x1c] = temp_vector_x;
  transform_matrix[0x1d] = temp_vector_y;
  transform_matrix[0x1e] = temp_vector_z;
  transform_matrix[0x1f] = temp_vector_w;
  
  // 计算第四个向量的变换
  vector_w = transform_matrix[0x45];
  vector_y = transform_matrix[0x41];
  vector_x = transform_matrix[0x31];
  vector_z = transform_matrix[0x38];
  
  temp_vector_x = vector_y * vector_z + vector_w * transform_matrix[0x30];
  temp_vector_z = vector_w * vector_x + vector_y * transform_matrix[0x39];
  vector_y = vector_y * transform_matrix[0x3a] + vector_w * transform_matrix[0x32];
  
  transform_matrix[0x14] = temp_vector_x;
  transform_matrix[0x15] = temp_vector_z;
  transform_matrix[0x16] = vector_y;
  transform_matrix[0x17] = vector_z;
  
  // 对第一个向量进行归一化
  vector_z = transform_matrix[0x25];
  vector_y = transform_matrix[0x24];
  vector_x = transform_matrix[0x26];
  magnitude_squared = vector_y * vector_y + vector_z * vector_z + vector_x * vector_x;
  
  // 使用快速平方根倒数算法进行归一化
  normalization_factor = rsqrtss(ZEXT416((uint)magnitude_squared), ZEXT416((uint)magnitude_squared))._0_4_;
  normalization_factor = normalization_factor * 0.5f * (3.0f - magnitude_squared * normalization_factor * normalization_factor);
  
  transform_matrix[0x24] = vector_y * normalization_factor;
  transform_matrix[0x25] = vector_z * normalization_factor;
  transform_matrix[0x26] = vector_x * normalization_factor;
  
  // 对第二个向量进行归一化
  vector_z = transform_matrix[0x2d];
  vector_y = transform_matrix[0x2c];
  vector_x = transform_matrix[0x2e];
  magnitude_squared = vector_y * vector_y + vector_z * vector_z + vector_x * vector_x;
  
  normalization_factor = rsqrtss(ZEXT416((uint)magnitude_squared), ZEXT416((uint)magnitude_squared))._0_4_;
  normalization_factor = normalization_factor * 0.5f * (3.0f - magnitude_squared * normalization_factor * normalization_factor);
  
  transform_matrix[0x2c] = vector_y * normalization_factor;
  transform_matrix[0x2d] = vector_z * normalization_factor;
  transform_matrix[0x2e] = vector_x * normalization_factor;
  
  // 对第三个向量进行归一化
  vector_z = transform_matrix[0x1d];
  vector_y = transform_matrix[0x1c];
  vector_x = transform_matrix[0x1e];
  magnitude_squared = vector_y * vector_y + vector_z * vector_z + vector_x * vector_x;
  
  normalization_factor = rsqrtss(ZEXT416((uint)magnitude_squared), ZEXT416((uint)magnitude_squared))._0_4_;
  normalization_factor = normalization_factor * 0.5f * (3.0f - magnitude_squared * normalization_factor * normalization_factor);
  
  transform_matrix[0x1c] = vector_y * normalization_factor;
  transform_matrix[0x1d] = vector_z * normalization_factor;
  transform_matrix[0x1e] = vector_x * normalization_factor;
  
  // 对第四个向量进行归一化
  vector_z = transform_matrix[0x15];
  vector_y = transform_matrix[0x14];
  vector_x = transform_matrix[0x16];
  magnitude_squared = vector_y * vector_y + vector_z * vector_z + vector_x * vector_x;
  
  normalization_factor = rsqrtss(ZEXT416((uint)magnitude_squared), ZEXT416((uint)magnitude_squared))._0_4_;
  normalization_factor = normalization_factor * 0.5f * (3.0f - magnitude_squared * normalization_factor * normalization_factor);
  
  transform_matrix[0x14] = vector_y * normalization_factor;
  transform_matrix[0x15] = vector_z * normalization_factor;
  transform_matrix[0x16] = vector_x * normalization_factor;
  
  // 计算相机位置变换
  vector_w = transform_matrix[0x46];
  temp_vector_z = transform_matrix[0x3c] - vector_w * transform_matrix[0x38];
  vector_y = transform_matrix[0x3d] - vector_w * transform_matrix[0x39];
  vector_z = transform_matrix[0x3e] - vector_w * transform_matrix[0x3a];
  
  transform_matrix[8] = temp_vector_z;
  transform_matrix[9] = vector_y;
  transform_matrix[10] = vector_z;
  transform_matrix[0xb] = vector_w;
  
  // 计算视角变换
  vector_w = transform_matrix[0x45];
  vector_y = transform_matrix[0x38];
  vector_x = transform_matrix[0x3a];
  vector_z = transform_matrix[0x3d] - vector_w * transform_matrix[0x39];
  
  temp_vector_z = transform_matrix[0x3c] - vector_w * vector_y;
  vector_w = transform_matrix[0x3e] - vector_w * vector_x;
  
  *transform_matrix = temp_vector_z;
  transform_matrix[1] = vector_z;
  transform_matrix[2] = vector_w;
  transform_matrix[3] = vector_x;
  
  // 复制矩阵数据
  *(undefined8 *)(transform_matrix + 0xc) = *(undefined8 *)(transform_matrix + 0x38);
  *(undefined8 *)(transform_matrix + 0xe) = *(undefined8 *)(transform_matrix + 0x3a);
  
  // 设置负向量
  vector_x = transform_matrix[0x38];
  vector_y = transform_matrix[0x39];
  vector_w = transform_matrix[0x3a];
  
  transform_matrix[4] = -vector_x;
  transform_matrix[5] = -vector_y;
  transform_matrix[6] = -vector_w;
  transform_matrix[7] = MAX_FLOAT_VALUE;
  
  return;
}

/**
 * 渲染矩阵变换函数
 * 对渲染矩阵进行各种变换操作，包括平移、旋转和缩放
 * 
 * @param matrix 渲染矩阵数组，包含变换参数
 * 
 * 原始实现：FUN_180286a98
 * 简化实现：对矩阵进行多重变换操作，包括向量变换和矩阵乘法
 */
void transform_rendering_matrix(float *matrix)
{
  undefined8 transform_data1;
  undefined8 transform_data2;
  float vector_x;
  float vector_y;
  float vector_z;
  float vector_w;
  float temp_vector_x;
  float temp_vector_y;
  float temp_vector_z;
  float temp_vector_w;
  
  vector_w = matrix[0x43];
  
  // 计算第一个向量变换
  temp_vector_x = vector_w * matrix[0x34] + matrix[0x3c];
  temp_vector_w = MAX_FLOAT_VALUE;
  temp_vector_y = vector_w * matrix[0x35] + matrix[0x3d];
  temp_vector_z = vector_w * matrix[0x36] + matrix[0x3e];
  
  matrix[0x20] = temp_vector_x;
  matrix[0x21] = temp_vector_y;
  matrix[0x22] = temp_vector_z;
  matrix[0x23] = temp_vector_w;
  
  vector_w = matrix[0x44];
  
  // 计算第二个向量变换
  temp_vector_z = vector_w * matrix[0x36] + matrix[0x3e];
  temp_vector_x = vector_w * matrix[0x35] + matrix[0x3d];
  temp_vector_w = MAX_FLOAT_VALUE;
  temp_vector_y = vector_w * matrix[0x34] + matrix[0x3c];
  
  matrix[0x28] = temp_vector_y;
  matrix[0x29] = temp_vector_x;
  matrix[0x2a] = temp_vector_z;
  matrix[0x2b] = temp_vector_w;
  
  vector_w = matrix[0x42];
  
  // 计算第三个向量变换
  temp_vector_z = vector_w * matrix[0x32] + matrix[0x3e];
  temp_vector_x = vector_w * matrix[0x31] + matrix[0x3d];
  temp_vector_w = MAX_FLOAT_VALUE;
  temp_vector_y = vector_w * matrix[0x30] + matrix[0x3c];
  
  matrix[0x18] = temp_vector_y;
  matrix[0x19] = temp_vector_x;
  matrix[0x1a] = temp_vector_z;
  matrix[0x1b] = temp_vector_w;
  
  vector_w = matrix[0x41];
  
  // 计算第四个向量变换
  vector_y = vector_w * matrix[0x32] + matrix[0x3e];
  temp_vector_z = vector_w * matrix[0x31] + matrix[0x3d];
  temp_vector_w = MAX_FLOAT_VALUE;
  temp_vector_x = vector_w * matrix[0x30] + matrix[0x3c];
  
  matrix[0x10] = temp_vector_x;
  matrix[0x11] = temp_vector_z;
  matrix[0x12] = vector_y;
  matrix[0x13] = temp_vector_w;
  
  vector_w = matrix[0x46];
  temp_vector_w = matrix[0x3c];
  
  // 计算相机位置
  temp_vector_w = temp_vector_w - vector_w * matrix[0x38];
  vector_y = matrix[0x3d];
  vector_z = matrix[0x3a];
  vector_y = vector_y - vector_w * matrix[0x39];
  temp_vector_z = matrix[0x3e] - vector_w * vector_z;
  
  matrix[8] = temp_vector_w;
  matrix[9] = vector_y;
  matrix[10] = temp_vector_z;
  matrix[0xb] = vector_z;
  
  vector_w = matrix[0x3c];
  
  // 计算视角变换
  temp_vector_w = vector_w - matrix[0x45] * matrix[0x38];
  vector_x = matrix[0x3d] - matrix[0x45] * matrix[0x39];
  vector_y = matrix[0x3e] - matrix[0x45] * matrix[0x3a];
  vector_z = MAX_FLOAT_VALUE;
  
  *matrix = temp_vector_w;
  matrix[1] = vector_x;
  matrix[2] = vector_y;
  matrix[3] = vector_z;
  
  // 设置负向量
  temp_vector_z = matrix[0x34];
  temp_vector_w = matrix[0x35];
  vector_x = matrix[0x34];
  vector_y = matrix[0x35];
  vector_z = matrix[0x36];
  
  matrix[0x24] = -vector_x;
  matrix[0x25] = -vector_y;
  matrix[0x26] = -vector_z;
  matrix[0x27] = vector_z;
  
  transform_data1 = *(undefined8 *)(matrix + 0x34);
  transform_data2 = *(undefined8 *)(matrix + 0x36);
  
  // 复制变换数据
  *(undefined8 *)(matrix + 0x2c) = transform_data1;
  *(undefined8 *)(matrix + 0x2e) = transform_data2;
  
  vector_y = matrix[0x31];
  vector_z = matrix[0x32];
  
  // 设置更多负向量
  matrix[0x1c] = -matrix[0x30];
  matrix[0x1d] = -vector_y;
  matrix[0x1e] = -vector_z;
  matrix[0x1f] = vector_z;
  
  transform_data1 = *(undefined8 *)(matrix + 0x30);
  transform_data2 = *(undefined8 *)(matrix + 0x32);
  
  *(undefined8 *)(matrix + 0x14) = transform_data1;
  *(undefined8 *)(matrix + 0x16) = transform_data2;
  *(undefined8 *)(matrix + 0xc) = *(undefined8 *)(matrix + 0x38);
  *(undefined8 *)(matrix + 0xe) = *(undefined8 *)(matrix + 0x3a);
  
  vector_x = matrix[0x38];
  vector_y = matrix[0x39];
  vector_z = matrix[0x3a];
  
  matrix[4] = -vector_x;
  matrix[5] = -vector_y;
  matrix[6] = -vector_z;
  matrix[7] = MAX_FLOAT_VALUE;
  
  return;
}

/**
 * 投影矩阵设置函数
 * 设置透视投影矩阵的参数，包括视场角、宽高比和裁剪平面
 * 
 * @param projection_matrix 投影矩阵数组
 * @param field_of_view 视场角（弧度）
 * @param aspect_ratio 宽高比
 * @param near_plane 近裁剪平面距离
 * @param far_plane 远裁剪平面距离
 * 
 * 原始实现：FUN_180286e40
 * 简化实现：根据透视投影参数设置投影矩阵，支持正交和透视两种投影模式
 */
void setup_projection_matrix(float *projection_matrix, float field_of_view, float aspect_ratio, float near_plane, float far_plane)
{
  float tangent_half_fov;
  float projection_scale;
  float temp_vector_x;
  float temp_vector_y;
  float temp_vector_z;
  float temp_vector_w;
  
  // 设置投影参数
  projection_matrix[0x47] = field_of_view;
  *(undefined1 *)(projection_matrix + 0x40) = 1;
  projection_matrix[0x46] = far_plane;
  projection_matrix[0x45] = near_plane;
  projection_matrix[0x48] = aspect_ratio;
  
  // 计算投影缩放因子
  tangent_half_fov = (float)tanf(field_of_view * 0.5f);
  projection_scale = tangent_half_fov * near_plane;
  
  projection_matrix[0x42] = projection_scale;
  projection_matrix[0x41] = -projection_scale;
  projection_matrix[0x43] = projection_scale / aspect_ratio;
  projection_matrix[0x44] = -(projection_scale / aspect_ratio);
  
  if (*(char *)(projection_matrix + 0x40) == '\0') {
    // 正交投影模式
    temp_vector_z = projection_matrix[0x43];
    
    projection_matrix[0x20] = temp_vector_z * projection_matrix[0x34] + projection_matrix[0x3c];
    projection_matrix[0x21] = temp_vector_z * projection_matrix[0x35] + projection_matrix[0x3d];
    projection_matrix[0x22] = temp_vector_z * projection_matrix[0x36] + projection_matrix[0x3e];
    projection_matrix[0x23] = MAX_FLOAT_VALUE;
    
    temp_vector_z = projection_matrix[0x44];
    
    projection_matrix[0x28] = temp_vector_z * projection_matrix[0x34] + projection_matrix[0x3c];
    projection_matrix[0x29] = temp_vector_z * projection_matrix[0x35] + projection_matrix[0x3d];
    projection_matrix[0x2a] = temp_vector_z * projection_matrix[0x36] + projection_matrix[0x3e];
    projection_matrix[0x2b] = MAX_FLOAT_VALUE;
    
    temp_vector_z = projection_matrix[0x42];
    
    projection_matrix[0x18] = temp_vector_z * projection_matrix[0x30] + projection_matrix[0x3c];
    projection_matrix[0x19] = temp_vector_z * projection_matrix[0x31] + projection_matrix[0x3d];
    projection_matrix[0x1a] = temp_vector_z * projection_matrix[0x32] + projection_matrix[0x3e];
    projection_matrix[0x1b] = MAX_FLOAT_VALUE;
    
    temp_vector_z = projection_matrix[0x41];
    
    projection_matrix[0x10] = temp_vector_z * projection_matrix[0x30] + projection_matrix[0x3c];
    projection_matrix[0x11] = temp_vector_z * projection_matrix[0x31] + projection_matrix[0x3d];
    projection_matrix[0x12] = temp_vector_z * projection_matrix[0x32] + projection_matrix[0x3e];
    projection_matrix[0x13] = MAX_FLOAT_VALUE;
    
    temp_vector_z = projection_matrix[0x46];
    
    projection_matrix[8] = projection_matrix[0x3c] - temp_vector_z * projection_matrix[0x38];
    projection_matrix[9] = projection_matrix[0x3d] - temp_vector_z * projection_matrix[0x39];
    projection_matrix[10] = projection_matrix[0x3e] - temp_vector_z * projection_matrix[0x3a];
    projection_matrix[0xb] = MAX_FLOAT_VALUE;
    
    temp_vector_z = projection_matrix[0x45];
    
    *projection_matrix = projection_matrix[0x3c] - temp_vector_z * projection_matrix[0x38];
    projection_matrix[1] = projection_matrix[0x3d] - temp_vector_z * projection_matrix[0x39];
    projection_matrix[2] = projection_matrix[0x3e] - temp_vector_z * projection_matrix[0x3a];
    projection_matrix[3] = MAX_FLOAT_VALUE;
    
    projection_matrix[0x24] = -projection_matrix[0x34];
    projection_matrix[0x25] = -projection_matrix[0x35];
    projection_matrix[0x26] = -projection_matrix[0x36];
    projection_matrix[0x27] = MAX_FLOAT_VALUE;
    
    *(undefined8 *)(projection_matrix + 0x2c) = *(undefined8 *)(projection_matrix + 0x34);
    *(undefined8 *)(projection_matrix + 0x2e) = *(undefined8 *)(projection_matrix + 0x36);
    
    projection_matrix[0x1c] = -projection_matrix[0x30];
    projection_matrix[0x1d] = -projection_matrix[0x31];
    projection_matrix[0x1e] = -projection_matrix[0x32];
    projection_matrix[0x1f] = MAX_FLOAT_VALUE;
    
    *(undefined8 *)(projection_matrix + 0x14) = *(undefined8 *)(projection_matrix + 0x30);
    *(undefined8 *)(projection_matrix + 0x16) = *(undefined8 *)(projection_matrix + 0x32);
    *(undefined8 *)(projection_matrix + 0xc) = *(undefined8 *)(projection_matrix + 0x38);
    *(undefined8 *)(projection_matrix + 0xe) = *(undefined8 *)(projection_matrix + 0x3a);
    
    temp_vector_x = projection_matrix[0x38];
    temp_vector_y = projection_matrix[0x39];
    temp_vector_z = projection_matrix[0x3a];
  }
  else {
    // 透视投影模式
    *(undefined8 *)(projection_matrix + 0x20) = *(undefined8 *)(projection_matrix + 0x3c);
    *(undefined8 *)(projection_matrix + 0x22) = *(undefined8 *)(projection_matrix + 0x3e);
    *(undefined8 *)(projection_matrix + 0x28) = *(undefined8 *)(projection_matrix + 0x3c);
    *(undefined8 *)(projection_matrix + 0x2a) = *(undefined8 *)(projection_matrix + 0x3e);
    *(undefined8 *)(projection_matrix + 0x18) = *(undefined8 *)(projection_matrix + 0x3c);
    *(undefined8 *)(projection_matrix + 0x1a) = *(undefined8 *)(projection_matrix + 0x3e);
    *(undefined8 *)(projection_matrix + 0x10) = *(undefined8 *)(projection_matrix + 0x3c);
    *(undefined8 *)(projection_matrix + 0x12) = *(undefined8 *)(projection_matrix + 0x3e);
    
    temp_vector_z = projection_matrix[0x45];
    temp_vector_x = projection_matrix[0x43];
    
    projection_matrix[0x24] = -(temp_vector_z * projection_matrix[0x34]) - temp_vector_x * projection_matrix[0x38];
    projection_matrix[0x25] = -(temp_vector_z * projection_matrix[0x35]) - temp_vector_x * projection_matrix[0x39];
    projection_matrix[0x26] = -(temp_vector_z * projection_matrix[0x36]) - temp_vector_x * projection_matrix[0x3a];
    projection_matrix[0x27] = MAX_FLOAT_VALUE;
    
    temp_vector_z = projection_matrix[0x45];
    temp_vector_x = projection_matrix[0x44];
    
    projection_matrix[0x2c] = temp_vector_x * projection_matrix[0x38] + temp_vector_z * projection_matrix[0x34];
    projection_matrix[0x2d] = temp_vector_x * projection_matrix[0x39] + temp_vector_z * projection_matrix[0x35];
    projection_matrix[0x2e] = temp_vector_x * projection_matrix[0x3a] + temp_vector_z * projection_matrix[0x36];
    projection_matrix[0x2f] = MAX_FLOAT_VALUE;
    
    temp_vector_z = projection_matrix[0x45];
    temp_vector_x = projection_matrix[0x42];
    
    projection_matrix[0x1c] = -(temp_vector_z * projection_matrix[0x30]) - temp_vector_x * projection_matrix[0x38];
    projection_matrix[0x1d] = -(temp_vector_z * projection_matrix[0x31]) - temp_vector_x * projection_matrix[0x39];
    projection_matrix[0x1e] = -(temp_vector_z * projection_matrix[0x32]) - temp_vector_x * projection_matrix[0x3a];
    projection_matrix[0x1f] = MAX_FLOAT_VALUE;
    
    temp_vector_z = projection_matrix[0x45];
    temp_vector_x = projection_matrix[0x41];
    
    projection_matrix[0x14] = temp_vector_x * projection_matrix[0x38] + temp_vector_z * projection_matrix[0x30];
    projection_matrix[0x15] = temp_vector_z * projection_matrix[0x31] + temp_vector_x * projection_matrix[0x39];
    projection_matrix[0x16] = temp_vector_x * projection_matrix[0x3a] + temp_vector_z * projection_matrix[0x32];
    projection_matrix[0x17] = MAX_FLOAT_VALUE;
    
    temp_vector_z = projection_matrix[0x25];
    temp_vector_x = projection_matrix[0x24];
    temp_vector_y = projection_matrix[0x26];
    temp_vector_w = temp_vector_x * temp_vector_x + temp_vector_z * temp_vector_z + temp_vector_y * temp_vector_y;
    
    // 向量归一化
    projection_scale = rsqrtss(ZEXT416((uint)temp_vector_w), ZEXT416((uint)temp_vector_w))._0_4_;
    temp_vector_w = projection_scale * 0.5f * (3.0f - temp_vector_w * projection_scale * projection_scale);
    
    projection_matrix[0x24] = temp_vector_x * temp_vector_w;
    projection_matrix[0x25] = temp_vector_z * temp_vector_w;
    projection_matrix[0x26] = temp_vector_y * temp_vector_w;
    
    temp_vector_z = projection_matrix[0x2d];
    temp_vector_x = projection_matrix[0x2c];
    temp_vector_y = projection_matrix[0x2e];
    temp_vector_w = temp_vector_x * temp_vector_x + temp_vector_z * temp_vector_z + temp_vector_y * temp_vector_y;
    
    projection_scale = rsqrtss(ZEXT416((uint)temp_vector_w), ZEXT416((uint)temp_vector_w))._0_4_;
    temp_vector_w = projection_scale * 0.5f * (3.0f - temp_vector_w * projection_scale * projection_scale);
    
    projection_matrix[0x2c] = temp_vector_x * temp_vector_w;
    projection_matrix[0x2d] = temp_vector_z * temp_vector_w;
    projection_matrix[0x2e] = temp_vector_y * temp_vector_w;
    
    temp_vector_z = projection_matrix[0x1d];
    temp_vector_x = projection_matrix[0x1c];
    temp_vector_y = projection_matrix[0x1e];
    temp_vector_w = temp_vector_x * temp_vector_x + temp_vector_z * temp_vector_z + temp_vector_y * temp_vector_y;
    
    projection_scale = rsqrtss(ZEXT416((uint)temp_vector_w), ZEXT416((uint)temp_vector_w))._0_4_;
    temp_vector_w = projection_scale * 0.5f * (3.0f - temp_vector_w * projection_scale * projection_scale);
    
    projection_matrix[0x1c] = temp_vector_x * temp_vector_w;
    projection_matrix[0x1d] = temp_vector_z * temp_vector_w;
    projection_matrix[0x1e] = temp_vector_y * temp_vector_w;
    
    temp_vector_z = projection_matrix[0x15];
    temp_vector_x = projection_matrix[0x14];
    temp_vector_y = projection_matrix[0x16];
    temp_vector_w = temp_vector_x * temp_vector_x + temp_vector_z * temp_vector_z + temp_vector_y * temp_vector_y;
    
    projection_scale = rsqrtss(ZEXT416((uint)temp_vector_w), ZEXT416((uint)temp_vector_w))._0_4_;
    temp_vector_w = projection_scale * 0.5f * (3.0f - temp_vector_w * projection_scale * projection_scale);
    
    projection_matrix[0x14] = temp_vector_x * temp_vector_w;
    projection_matrix[0x15] = temp_vector_z * temp_vector_w;
    projection_matrix[0x16] = temp_vector_y * temp_vector_w;
    
    temp_vector_z = projection_matrix[0x46];
    
    projection_matrix[8] = projection_matrix[0x3c] - temp_vector_z * projection_matrix[0x38];
    projection_matrix[9] = projection_matrix[0x3d] - temp_vector_z * projection_matrix[0x39];
    projection_matrix[10] = projection_matrix[0x3e] - temp_vector_z * projection_matrix[0x3a];
    projection_matrix[0xb] = MAX_FLOAT_VALUE;
    
    temp_vector_z = projection_matrix[0x45];
    
    *projection_matrix = projection_matrix[0x3c] - temp_vector_z * projection_matrix[0x38];
    projection_matrix[1] = projection_matrix[0x3d] - temp_vector_z * projection_matrix[0x39];
    projection_matrix[2] = projection_matrix[0x3e] - temp_vector_z * projection_matrix[0x3a];
    projection_matrix[3] = MAX_FLOAT_VALUE;
    
    *(undefined8 *)(projection_matrix + 0xc) = *(undefined8 *)(projection_matrix + 0x38);
    *(undefined8 *)(projection_matrix + 0xe) = *(undefined8 *)(projection_matrix + 0x3a);
    
    temp_vector_x = projection_matrix[0x38];
    temp_vector_y = projection_matrix[0x39];
    temp_vector_z = projection_matrix[0x3a];
  }
  
  projection_matrix[4] = -temp_vector_x;
  projection_matrix[5] = -temp_vector_y;
  projection_matrix[6] = -temp_vector_z;
  projection_matrix[7] = MAX_FLOAT_VALUE;
  
  return;
}

/**
 * 渲染数据获取函数
 * 从渲染上下文中获取渲染数据，包括位置、旋转和缩放信息
 * 
 * @param render_context 渲染上下文指针
 * @param output_data 输出数据数组指针
 * @return 返回输出数据指针
 * 
 * 原始实现：FUN_180286f50
 * 简化实现：从渲染上下文中提取渲染数据，支持不同的数据格式和变换
 */
undefined8 * get_rendering_data(longlong render_context, undefined8 *output_data)
{
  float depth_value;
  undefined4 color_component1;
  undefined4 color_component2;
  undefined4 color_component3;
  undefined8 transform_data;
  undefined8 *data_pointer;
  undefined1 temp_stack_data [72];
  
  // 根据渲染模式选择数据源
  if (*(char *)(render_context + 0x124) == '\0') {
    data_pointer = (undefined8 *)(render_context + 0xc0);
  }
  else {
    transform_data = *(undefined8 *)(render_context + 200);
    *output_data = *(undefined8 *)(render_context + 0xc0);
    output_data[1] = transform_data;
    transform_data = *(undefined8 *)(render_context + 0xd8);
    output_data[2] = *(undefined8 *)(render_context + 0xd0);
    output_data[3] = transform_data;
    transform_data = *(undefined8 *)(render_context + 0xe8);
    output_data[4] = *(undefined8 *)(render_context + 0xe0);
    output_data[5] = transform_data;
    depth_value = *(float *)(render_context + 0xf0);
    color_component1 = *(undefined4 *)(render_context + 0xf4);
    color_component2 = *(undefined4 *)(render_context + 0xf8);
    color_component3 = *(undefined4 *)(render_context + 0xfc);
    
    *(float *)(output_data + 6) = depth_value;
    *(undefined4 *)((longlong)output_data + 0x34) = color_component1;
    *(undefined4 *)(output_data + 7) = color_component2;
    *(undefined4 *)((longlong)output_data + 0x3c) = color_component3;
    
    *(float *)(output_data + 6) = depth_value + *(float *)(render_context + 0x128);
    *(float *)((longlong)output_data + 0x34) = *(float *)(render_context + 300) + *(float *)((longlong)output_data + 0x34);
    *(float *)(output_data + 7) = *(float *)(render_context + 0x130) + *(float *)(output_data + 7);
    
    data_pointer = output_data;
  }
  
  // 应用渲染变换
  data_pointer = (undefined8 *)apply_rendering_transform(data_pointer, temp_stack_data);
  transform_data = data_pointer[1];
  *output_data = *data_pointer;
  output_data[1] = transform_data;
  transform_data = data_pointer[3];
  output_data[2] = data_pointer[2];
  output_data[3] = transform_data;
  transform_data = data_pointer[5];
  output_data[4] = data_pointer[4];
  output_data[5] = transform_data;
  transform_data = data_pointer[7];
  output_data[6] = data_pointer[6];
  output_data[7] = transform_data;
  
  // 清理和初始化数据
  *(undefined4 *)((longlong)output_data + 0xc) = 0;
  *(undefined4 *)((longlong)output_data + 0x1c) = 0;
  *(undefined4 *)((longlong)output_data + 0x2c) = 0;
  *(undefined4 *)((longlong)output_data + 0x3c) = NORMALIZED_FLOAT_VALUE;
  
  return output_data;
}

/**
 * 向量基函数计算
 * 计算渲染向量的基函数，用于坐标系变换和向量投影
 * 
 * @param context_ptr 上下文指针
 * @param vector_start 向量起点指针
 * @param vector_end 向量终点指针
 * @param normal_vector 法向量指针
 * 
 * 原始实现：FUN_180287020
 * 简化实现：计算向量的基函数，包括方向向量和法向量的计算与归一化
 */
void calculate_vector_basis(longlong context_ptr, float *vector_start, float *vector_end, float *normal_vector)
{
  undefined8 transform_data;
  float direction_x;
  float direction_y;
  float direction_z;
  float magnitude_squared;
  float normalization_factor;
  float cross_product_x;
  float cross_product_y;
  float cross_product_z;
  float temp_vector_x;
  float temp_vector_y;
  float temp_vector_z;
  float basis_vector_x;
  float basis_vector_y;
  float basis_vector_z;
  
  // 计算方向向量
  direction_x = *vector_end - *vector_start;
  direction_y = vector_end[1] - vector_start[1];
  direction_z = vector_end[2] - vector_start[2];
  
  magnitude_squared = direction_y * direction_y + direction_x * direction_x + direction_z * direction_z;
  
  // 归一化方向向量
  normalization_factor = rsqrtss(ZEXT416((uint)magnitude_squared), ZEXT416((uint)magnitude_squared))._0_4_;
  normalization_factor = normalization_factor * 0.5f * (3.0f - magnitude_squared * normalization_factor * normalization_factor);
  
  direction_z = direction_z * normalization_factor;
  direction_x = normalization_factor * direction_x;
  direction_y = normalization_factor * direction_y;
  
  // 计算叉积
  cross_product_x = direction_x * normal_vector[1] - *normal_vector * direction_y;
  cross_product_z = direction_y * normal_vector[2] - direction_z * normal_vector[1];
  cross_product_y = direction_z * *normal_vector - direction_x * normal_vector[2];
  
  magnitude_squared = cross_product_z * cross_product_z + cross_product_y * cross_product_y + cross_product_x * cross_product_x;
  
  normalization_factor = rsqrtss(ZEXT416((uint)magnitude_squared), ZEXT416((uint)magnitude_squared))._0_4_;
  magnitude_squared = normalization_factor * 0.5f * (3.0f - magnitude_squared * normalization_factor * normalization_factor);
  
  cross_product_z = cross_product_z * magnitude_squared;
  cross_product_y = cross_product_y * magnitude_squared;
  cross_product_x = cross_product_x * magnitude_squared;
  
  // 计算基向量
  basis_vector_z = cross_product_y * direction_z - cross_product_x * direction_y;
  basis_vector_y = cross_product_x * direction_x - cross_product_z * direction_z;
  direction_y = cross_product_z * direction_y - cross_product_y * direction_x;
  
  magnitude_squared = basis_vector_z * basis_vector_z + basis_vector_y * basis_vector_y + direction_y * direction_y;
  
  normalization_factor = rsqrtss(ZEXT416((uint)magnitude_squared), ZEXT416((uint)magnitude_squared))._0_4_;
  magnitude_squared = normalization_factor * 0.5f * (3.0f - magnitude_squared * normalization_factor * normalization_factor);
  
  *(float *)(context_ptr + 0xc0) = cross_product_z;
  *(float *)(context_ptr + 0xc4) = cross_product_y;
  *(float *)(context_ptr + 200) = cross_product_x;
  *(undefined4 *)(context_ptr + 0xcc) = MAX_FLOAT_VALUE;
  
  *(float *)(context_ptr + 0xe0) = -direction_x;
  *(float *)(context_ptr + 0xe4) = -direction_y;
  *(float *)(context_ptr + 0xe8) = -direction_z;
  *(undefined4 *)(context_ptr + 0xec) = MAX_FLOAT_VALUE;
  
  transform_data = *(undefined8 *)(vector_start + 2);
  *(undefined8 *)(context_ptr + 0xf0) = *(undefined8 *)vector_start;
  *(undefined8 *)(context_ptr + 0xf8) = transform_data;
  
  *(float *)(context_ptr + 0xd0) = basis_vector_z * magnitude_squared;
  *(float *)(context_ptr + 0xd4) = basis_vector_y * magnitude_squared;
  *(float *)(context_ptr + 0xd8) = direction_y * magnitude_squared;
  *(undefined4 *)(context_ptr + 0xdc) = MAX_FLOAT_VALUE;
  
  *(undefined4 *)(context_ptr + 0xcc) = 0;
  *(undefined4 *)(context_ptr + 0xdc) = 0;
  *(undefined4 *)(context_ptr + 0xec) = 0;
  *(undefined4 *)(context_ptr + 0xfc) = NORMALIZED_FLOAT_VALUE;
  
  return;
}

/**
 * 坐标变换函数
 * 将3D坐标从世界坐标系转换到屏幕坐标系
 * 
 * @param context_ptr 上下文指针
 * @param world_coords 世界坐标指针
 * @param screen_coords 屏幕坐标指针
 * @return 返回屏幕坐标指针
 * 
 * 原始实现：FUN_180287320
 * 简化实现：根据投影参数和深度信息进行坐标变换
 */
float * transform_world_to_screen(longlong context_ptr, float *world_coords, float *screen_coords)
{
  float screen_x;
  float screen_y;
  float screen_z;
  float depth_value;
  float transform_factor;
  
  // 计算屏幕坐标基础值
  screen_y = world_coords[1] - *(float *)(context_ptr + 0xf4);
  screen_z = *world_coords - *(float *)(context_ptr + 0xf0);
  screen_x = world_coords[2] - *(float *)(context_ptr + 0xf8);
  
  // 应用变换矩阵
  depth_value = *(float *)(context_ptr + 0xc4) * screen_y + *(float *)(context_ptr + 0xc0) * screen_z +
                *(float *)(context_ptr + 200) * screen_x;
  transform_factor = *(float *)(context_ptr + 0xd4) * screen_y + *(float *)(context_ptr + 0xd0) * screen_z +
                      *(float *)(context_ptr + 0xd8) * screen_x;
  screen_y = *(float *)(context_ptr + 0xe4) * screen_y + *(float *)(context_ptr + 0xe0) * screen_z +
            *(float *)(context_ptr + 0xe8) * screen_x;
  
  if (*(char *)(context_ptr + 0x100) == '\0') {
    // 正交投影模式
    depth_value = depth_value - *(float *)(context_ptr + 0x104);
    screen_x = (-screen_y - *(float *)(context_ptr + 0x114)) /
              (*(float *)(context_ptr + 0x118) - *(float *)(context_ptr + 0x114));
    screen_z = (transform_factor - *(float *)(context_ptr + 0x110)) /
              (*(float *)(context_ptr + 0x10c) - *(float *)(context_ptr + 0x110));
    screen_y = *(float *)(context_ptr + 0x108) - *(float *)(context_ptr + 0x104);
  }
  else {
    // 透视投影模式
    depth_value = *(float *)(context_ptr + 0x114);
    screen_x = (-screen_y - depth_value) / (*(float *)(context_ptr + 0x118) - depth_value);
    screen_z = (-(depth_value * transform_factor * (1.0f / screen_y)) - *(float *)(context_ptr + 0x110)) /
              (*(float *)(context_ptr + 0x10c) - *(float *)(context_ptr + 0x110));
    depth_value = -(depth_value * depth_value * (1.0f / screen_y)) - *(float *)(context_ptr + 0x104);
    screen_y = *(float *)(context_ptr + 0x108) - *(float *)(context_ptr + 0x104);
  }
  
  // 计算最终屏幕坐标
  *screen_coords = depth_value / screen_y;
  screen_coords[1] = screen_z;
  screen_coords[2] = screen_x;
  
  return screen_coords;
}

/**
 * 渲染变换应用函数
 * 应用完整的渲染变换，包括模型变换、视图变换和投影变换
 * 
 * @param context_ptr 上下文指针
 * @param input_vector 输入向量指针
 * @param output_vector 输出向量指针
 * @param transform_params 变换参数指针
 * @param depth_params 深度参数指针
 * 
 * 原始实现：FUN_1802874c0
 * 简化实现：应用多重变换矩阵，计算最终的渲染结果
 */
void apply_rendering_transformations(longlong context_ptr, float *input_vector, float *output_vector, float *transform_params, float *depth_params)
{
  float depth_near;
  float depth_far;
  float depth_range;
  float clip_near;
  float clip_far;
  float transform_scale;
  float transform_offset;
  float matrix_element1;
  float matrix_element2;
  float matrix_element3;
  float matrix_element4;
  float matrix_element5;
  float matrix_element6;
  float matrix_element7;
  float matrix_element8;
  float matrix_element9;
  float matrix_element10;
  float matrix_element11;
  float matrix_element12;
  float matrix_element13;
  float matrix_element14;
  float matrix_element15;
  float matrix_element16;
  float matrix_element17;
  float matrix_element18;
  
  // 获取深度参数
  clip_far = *(float *)(context_ptr + 0x118);
  depth_far = *depth_params;
  clip_near = clip_far;
  
  // 限制深度范围
  if ((0.0f < depth_far) && (clip_near = depth_far, clip_far <= depth_far)) {
    clip_near = clip_far;
  }
  
  // 计算深度范围
  depth_range = -*(float *)(context_ptr + 0x114);
  clip_near = (*(float *)(context_ptr + 0x108) - *(float *)(context_ptr + 0x104)) * *transform_params +
             *(float *)(context_ptr + 0x104);
  clip_far = (*(float *)(context_ptr + 0x10c) - *(float *)(context_ptr + 0x110)) * transform_params[1] +
            *(float *)(context_ptr + 0x110);
  
  depth_far = clip_near;
  depth_near = clip_far;
  
  // 根据投影模式调整参数
  if (*(char *)(context_ptr + 0x100) != '\0') {
    depth_near = 1.0f / *(float *)(context_ptr + 0x114);
    depth_far = clip_near * clip_near * depth_near;
    depth_near = clip_far * clip_near * depth_near;
  }
  
  // 获取矩阵元素
  matrix_element1 = *(float *)(context_ptr + 0xd4);
  matrix_element2 = *(float *)(context_ptr + 0xd8);
  matrix_element3 = *(float *)(context_ptr + 0xdc);
  clip_near = -clip_near;
  matrix_element4 = *(float *)(context_ptr + 0xc4);
  matrix_element5 = *(float *)(context_ptr + 200);
  matrix_element6 = *(float *)(context_ptr + 0xcc);
  matrix_element7 = *(float *)(context_ptr + 0xe4);
  matrix_element8 = *(float *)(context_ptr + 0xe8);
  matrix_element9 = *(float *)(context_ptr + 0xec);
  matrix_element10 = *(float *)(context_ptr + 0xf4);
  matrix_element11 = *(float *)(context_ptr + 0xf8);
  matrix_element12 = *(float *)(context_ptr + 0xfc);
  
  // 计算输出向量
  *input_vector = *(float *)(context_ptr + 0xd0) * clip_far + *(float *)(context_ptr + 0xc0) * clip_near +
                *(float *)(context_ptr + 0xe0) * depth_range + *(float *)(context_ptr + 0xf0);
  input_vector[1] = matrix_element1 * clip_far + matrix_element4 * clip_near + matrix_element7 * depth_range + matrix_element10;
  input_vector[2] = matrix_element2 * clip_far + matrix_element5 * clip_near + matrix_element8 * depth_range + matrix_element11;
  input_vector[3] = matrix_element3 * clip_far + matrix_element6 * clip_near + matrix_element9 * depth_range + matrix_element12;
  
  // 计算第二个输出向量
  clip_far = *(float *)(context_ptr + 0xd4);
  clip_near = *(float *)(context_ptr + 0xd8);
  depth_range = *(float *)(context_ptr + 0xdc);
  matrix_element1 = *(float *)(context_ptr + 0xc4);
  matrix_element2 = *(float *)(context_ptr + 200);
  matrix_element3 = *(float *)(context_ptr + 0xcc);
  matrix_element4 = *(float *)(context_ptr + 0xe4);
  matrix_element5 = *(float *)(context_ptr + 0xe8);
  matrix_element6 = *(float *)(context_ptr + 0xec);
  matrix_element7 = *(float *)(context_ptr + 0xf4);
  matrix_element8 = *(float *)(context_ptr + 0xf8);
  matrix_element9 = *(float *)(context_ptr + 0xfc);
  
  *output_vector = *(float *)(context_ptr + 0xd0) * depth_near + *(float *)(context_ptr + 0xc0) * depth_far +
                  *(float *)(context_ptr + 0xe0) * clip_near + *(float *)(context_ptr + 0xf0);
  output_vector[1] = clip_far * depth_near + matrix_element1 * depth_far + matrix_element4 * clip_near + matrix_element7;
  output_vector[2] = clip_near * depth_near + matrix_element2 * depth_far + matrix_element5 * clip_near + matrix_element8;
  output_vector[3] = depth_range * depth_near + matrix_element3 * depth_far + matrix_element6 * clip_near + matrix_element9;
  
  return;
}

// 函数别名 - 保持与原始代码的兼容性
void FUN_180286514(float *param_1) { normalize_rendering_vectors(param_1); }
void FUN_180286a98(float *param_1) { transform_rendering_matrix(param_1); }
void FUN_180286e40(float *param_1, float param_2, float param_3, float param_4, float param_5) { setup_projection_matrix(param_1, param_2, param_3, param_4, param_5); }
undefined8 * FUN_180286f50(longlong param_1, undefined8 *param_2) { return get_rendering_data(param_1, param_2); }
void FUN_180287020(longlong param_1, float *param_2, float *param_3, float *param_4) { calculate_vector_basis(param_1, param_2, param_3, param_4); }
float * FUN_180287320(longlong param_1, float *param_2, float *param_3) { return transform_world_to_screen(param_1, param_2, param_3); }
void FUN_1802874c0(longlong param_1, float *param_2, float *param_3, float *param_4, float *param_5) { apply_rendering_transformations(param_1, param_2, param_3, param_4, param_5); }

// 额外的函数声明，供其他模块调用
undefined8 * apply_rendering_transform(undefined8 *param_1, undefined1 *param_2);