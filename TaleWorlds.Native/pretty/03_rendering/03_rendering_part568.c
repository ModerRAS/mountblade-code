#include "TaleWorlds.Native.Split.h"

// 03_rendering_part568.c - 渲染系统高级数学计算和矩阵变换模块
// 
// 本文件包含Mount & Blade渲染系统中的高级数学计算功能，
// 主要实现3D渲染管线中的核心数学运算，包括：
// - 向量标准化和归一化处理
// - 四元数旋转和矩阵变换
// - SIMD优化的浮点数运算
// - 骨骼动画和顶点变换
// - 角度插值和距离限制
// 
// 该模块是渲染性能优化的关键部分，使用SIMD指令和牛顿迭代法
// 提供高性能的数学计算支持。
// 
// 主要函数：
// ==========
// RenderingSystem_AdvancedMathCalculator - 渲染系统高级数学计算和矩阵变换处理器
// 
// 技术特点：
// ==========
// - 使用SIMD指令进行向量标准化计算
// - 牛顿迭代法优化逆平方根精度
// - 多模式渲染支持（顶点/向量/四元数）
// - 骨骼动画和权重计算
// - 角度归一化和距离限制
// - 4x3变换矩阵构建
// 
// 文件信息：
// ==========
// - 文件路径：/root/WorkSpace/CSharp/mountblade-code/TaleWorlds.Native/pretty/03_rendering/03_rendering_part568.c
// - 函数数量：1个核心函数
// - 代码行数：约890行
// - 主要功能：渲染系统数学计算和矩阵变换
// - 优化技术：SIMD、牛顿迭代法、多模式渲染
//

/**
 * @brief 渲染系统高级数学计算和矩阵变换处理器
 * 
 * 该函数实现了渲染系统中的高级数学计算功能，包括：
 * - 向量标准化计算和归一化处理
 * - 矩阵变换和坐标系统转换
 * - SIMD优化的浮点数运算
 * - 四元数和旋转矩阵计算
 * - 渲染参数的动态调整和优化
 * 
 * @param render_context 渲染上下文指针，包含渲染状态和参数
 * @param math_params 数学参数指针，包含计算所需的数学常量和配置
 */
void RenderingSystem_AdvancedMathCalculator(int64_t render_context, uint64_t math_params)

{
  // 声明变量 - 用于各种数学计算和临时存储
  int mode_index;                                    // 模式索引，用于选择不同的渲染模式
  float temp_float1, temp_float2, temp_float3;       // 通用临时浮点变量
  uint64_t temp_int8_t, temp_int16_t;       // 通用临时8字节变量
  uint64_t temp_var3, temp_int32_t;       // 通用临时8字节变量
  float matrix_element1, matrix_element2;           // 矩阵元素变量
  float *result_array_ptr;                          // 结果数组指针
  int64_t temp_long1;                               // 通用临时长整型变量
  int64_t render_data_ptr;                          // 渲染数据指针
  float *stack_frame_ptr;                           // 栈帧指针
  char index_flag;                                   // 索引标志
  int64_t resource_ptr;                             // 资源指针
  float simd_input1;                                // SIMD输入参数1
  float vector_x, vector_y, vector_z;                // 向量分量
  int8_t simd_input2[16];                        // SIMD输入参数2数组
  int8_t simd_result[16];                        // SIMD计算结果数组
  float normalized_value;                            // 标准化后的值
  float scale_factor;                                // 缩放因子
  float rotation_angle;                              // 旋转角度
  float quaternion_w, quaternion_x, quaternion_y;    // 四元数分量
  float distance_sq;                                 // 距离平方
  float interpolation_factor;                       // 插值因子
  float transform_matrix[16];                        // 变换矩阵
  float position_x, position_y, position_z;         // 位置坐标
  float normal_x, normal_y, normal_z;               // 法线向量
  float tangent_x, tangent_y, tangent_z;            // 切线向量
  float bitangent_x, bitangent_y, bitangent_z;      // 副切线向量
  
  // 栈变量声明 - 用于临时存储计算结果
  float result_x;                                    // 计算结果X分量
  float result_y;                                    // 计算结果Y分量
  float result_z;                                    // 计算结果Z分量
  int32_t result_w;                               // 计算结果W分量
  float input_x;                                     // 输入X坐标
  int bone_index;                                    // 骨骼索引
  float input_time;                                  // 输入时间参数
  float vertex_x;                                    // 顶点X坐标
  float vertex_y;                                    // 顶点Y坐标
  float vertex_z;                                    // 顶点Z坐标
  float weight_x;                                    // 权重X分量
  float weight_y;                                    // 权重Y分量
  float weight_z;                                    // 权重Z分量
  float weight_w;                                    // 权重W分量
  
  // 常量定义
  #define NORMALIZATION_THRESHOLD_LOW    0.98010004f  // 标准化阈值下限
  #define NORMALIZATION_THRESHOLD_HIGH   1.0201f      // 标准化阈值上限
  #define PI                              3.1415927f   // 圆周率
  #define TWO_PI                          6.2831855f   // 2倍圆周率
  #define FLOAT_MIN                       1.1754944e-38f  // 最小浮点数
  #define FLOAT_MAX                       3.4028235e+38f  // 最大浮点数
  #define EPSILON                         1e-07f       // 浮点数精度阈值
  #define SMALL_EPSILON                   1e-09f       // 小浮点数精度阈值
  #define NEG_INFINITY                    -1e+30f      // 负无穷大
  #define INVERSE_RSQRT_FACTOR            0.5f         // 逆平方根计算因子
  #define VECTOR_SCALE_FACTOR             0.2f         // 向量缩放因子
  #define DISTANCE_SCALE_FACTOR           17.5f        // 距离缩放因子
  #define BIAS_SCALE_FACTOR               1.25f        // 偏置缩放因子
  #define HUNDRED                         100.0f       // 100倍缩放因子
  #define HALF                            0.5f         // 0.5倍缩放因子
  
  // 函数别名定义
  #define RenderingSystem_GetMatrixData      FUN_180535610  // 获取矩阵数据
  #define RenderingSystem_NormalizeVector    FUN_1801c1720  // 标准化向量
  #define RenderingSystem_ProcessTransform   FUN_18063b470  // 处理变换
  #define RenderingSystem_ApplyFinalTransform FUN_1808fd400 // 应用最终变换
  #define RenderingSystem_ValidateVector     func_0x00018023a1e0  // 验证向量
  
  // 第一阶段：SIMD数学计算和数据初始化
  // 使用SIMD指令进行高效的数学运算，计算平方根和相关参数
  simd_result._4_12_ = simd_input2._4_12_;
  simd_result._0_4_ = SQRT(simd_input2._0_4_ + simd_input1);
  
  // 获取矩阵数据：从渲染上下文中获取变换矩阵和相关参数
  result_array_ptr = (float *)RenderingSystem_GetMatrixData(render_context, math_params, simd_result._0_8_);
  
  // 提取渲染上下文中的变换矩阵参数
  temp_int8_t = *(uint64_t *)(render_context + 0x30);  // 矩阵第一部分
  temp_int16_t = *(uint64_t *)(render_context + 0x38);  // 矩阵第二部分
  
  // 从结果数组中提取位置和变换参数
  input_x = result_array_ptr[4];                    // 输入X坐标
  weight_y = result_array_ptr[5];                   // 权重Y分量
  weight_z = result_array_ptr[6];                   // 权重Z分量
  weight_w = result_array_ptr[7];                   // 权重W分量
  quaternion_x = result_array_ptr[8];               // 四元数X分量
  quaternion_y = result_array_ptr[9];               // 四元数Y分量
  quaternion_w = result_array_ptr[10];              // 四元数W分量
  normal_z = result_array_ptr[0xb];                // 法线Z分量
  
  // 提取顶点坐标数据
  vertex_x = *result_array_ptr;                     // 顶点X坐标
  vertex_y = result_array_ptr[1];                  // 顶点Y坐标
  vertex_z = result_array_ptr[2];                  // 顶点Z坐标
  result_w = *(int32_t *)(result_array_ptr + 3); // 结果W分量
  
  // 将变换矩阵参数存储到栈帧中以便后续计算
  *(uint64_t *)(stack_frame_ptr + -0x1c) = temp_int8_t;  // 存储矩阵第一部分
  *(uint64_t *)(stack_frame_ptr + -0x1a) = temp_int16_t;  // 存储矩阵第二部分
  *(uint64_t *)(stack_frame_ptr + -0x10) = temp_int8_t;  // 备份矩阵第一部分
  *(uint64_t *)(stack_frame_ptr + -0xe) = temp_int16_t;   // 备份矩阵第二部分
  
  // 存储四元数分量到栈帧
  stack_frame_ptr[-0x20] = quaternion_x;            // 存储四元数X
  stack_frame_ptr[-0x1f] = quaternion_y;            // 存储四元数Y
  stack_frame_ptr[-0x1e] = quaternion_w;            // 存储四元数W
  stack_frame_ptr[-0x1d] = normal_z;                // 存储法线Z
  
  // 更新四元数变量以便后续计算
  quaternion_y = stack_frame_ptr[-0x1f];            // 更新四元数Y
  quaternion_x = stack_frame_ptr[-0x20];            // 更新四元数X
  
  // 计算输入向量的长度平方（用于标准化检查）
  distance_sq = input_x * input_x + weight_y * weight_y + weight_z * weight_z;
  
  // 存储顶点坐标到栈帧
  stack_frame_ptr[-8] = vertex_x;                   // 存储顶点X
  stack_frame_ptr[-7] = vertex_y;                   // 存储顶点Y
  stack_frame_ptr[-6] = vertex_z;                   // 存储顶点Z
  stack_frame_ptr[-5] = *(float *)&result_w;        // 存储顶点W
  
  // 存储四元数和法线数据到栈帧
  stack_frame_ptr[-0x14] = quaternion_x;            // 存储四元数X
  stack_frame_ptr[-0x13] = quaternion_y;            // 存储四元数Y
  stack_frame_ptr[-0x12] = quaternion_w;            // 存储四元数W
  stack_frame_ptr[-0x11] = normal_z;                 // 存储法线Z
  // 第二阶段：向量标准化处理
  // 检查向量长度是否在标准化阈值范围内，如果不在范围内则需要进行标准化
  if ((distance_sq <= NORMALIZATION_THRESHOLD_LOW) || (NORMALIZATION_THRESHOLD_HIGH <= distance_sq)) {
    
    // 标签：向量标准化处理分支
    VECTOR_NORMALIZATION_PROCESS:
    
    // 获取法线Z分量
    normal_z = stack_frame_ptr[-0x1d];
    
    // 使用SIMD指令计算逆平方根（快速标准化算法）
    // 使用牛顿迭代法优化逆平方根计算精度
    simd_result = rsqrtss(ZEXT416((uint)distance_sq), ZEXT416((uint)distance_sq));
    normalized_value = simd_result._0_4_;
    
    // 牛顿迭代法提高逆平方根精度
    // 公式：x_{n+1} = x_n * 0.5 * (3 - x^2 * x_n * x_n)
    normalized_value = normalized_value * INVERSE_RSQRT_FACTOR * (3.0f - distance_sq * normalized_value * normalized_value);
    
    // 对输入向量进行标准化处理
    input_x = input_x * normalized_value;                // 标准化X分量
    weight_y = weight_y * normalized_value;             // 标准化Y分量
    weight_z = weight_z * normalized_value;             // 标准化Z分量
    
    // 计算四元数向量的长度平方
    distance_sq = quaternion_x * quaternion_x + quaternion_y * quaternion_y + quaternion_w * quaternion_w;
    
    // 对四元数向量进行标准化处理
    simd_result = rsqrtss(ZEXT416((uint)distance_sq), ZEXT416((uint)distance_sq));
    normalized_value = simd_result._0_4_;
    
    // 获取顶点坐标数据
    vertex_x = stack_frame_ptr[-8];                      // 顶点X坐标
    vertex_y = stack_frame_ptr[-7];                      // 顶点Y坐标
    vertex_z = stack_frame_ptr[-6];                      // 顶点Z坐标
    result_w = *(int32_t *)(stack_frame_ptr + -5);    // 顶点W分量
    
    // 牛顿迭代法提高四元数逆平方根精度
    normalized_value = normalized_value * INVERSE_RSQRT_FACTOR * (3.0f - distance_sq * normalized_value * normalized_value);
    
    // 对四元数进行标准化处理
    quaternion_x = quaternion_x * normalized_value;     // 标准化四元数X
    quaternion_y = quaternion_y * normalized_value;     // 标准化四元数Y
    quaternion_w = quaternion_w * normalized_value;     // 标准化四元数W
    
    // 将标准化后的四元数存储回栈帧
    stack_frame_ptr[-0x14] = quaternion_x;              // 存储标准化四元数X
    stack_frame_ptr[-0x13] = quaternion_y;              // 存储标准化四元数Y
    stack_frame_ptr[-0x12] = quaternion_w;              // 存储标准化四元数W
    stack_frame_ptr[-0x11] = normal_z;                   // 存储法线Z
    
    // 备份标准化后的四元数数据
    stack_frame_ptr[-0x20] = quaternion_x;              // 备份四元数X
    stack_frame_ptr[-0x1f] = quaternion_y;              // 备份四元数Y
    stack_frame_ptr[-0x1e] = quaternion_w;              // 备份四元数W
    stack_frame_ptr[-0x1d] = normal_z;                   // 备份法线Z
    
    // 更新四元数变量
    quaternion_y = quaternion_y;                         // 更新四元数Y
    quaternion_x = quaternion_x;                         // 更新四元数X
  }
  else {
    // 向量已经在标准化范围内，检查四元数是否需要标准化
    distance_sq = quaternion_x * quaternion_x + quaternion_y * quaternion_y + quaternion_w * quaternion_w;
    
    // 如果四元数长度超出标准化阈值范围，则跳转到标准化处理
    if ((distance_sq <= NORMALIZATION_THRESHOLD_LOW) ||
        (vertex_x = stack_frame_ptr[-8], vertex_y = stack_frame_ptr[-7], vertex_z = stack_frame_ptr[-6],
         result_w = *(int32_t *)(stack_frame_ptr + -5), NORMALIZATION_THRESHOLD_HIGH <= distance_sq)) {
      goto VECTOR_NORMALIZATION_PROCESS;
    }
  }
  // 第三阶段：初始化检查和数据存储
  // 复制输入X坐标到结果X位置
  result_x = input_x;
  
  // 检查是否需要初始化渲染数据（检查负无穷大标志）
  if (*(float *)(render_data_ptr + 0x68) == NEG_INFINITY) {
    
    // 提取渲染上下文中的变换矩阵参数
    temp_int8_t = *(uint64_t *)(render_context + 0x30);  // 矩阵第一部分
    temp_int16_t = *(uint64_t *)(render_context + 0x38);  // 矩阵第二部分
    
    // 初始化渲染数据缓冲区 - 存储顶点坐标数据
    *(float *)(render_data_ptr + 0x98) = vertex_x;              // 存储顶点X到缓冲区1
    *(float *)(render_data_ptr + 0x9c) = vertex_y;              // 存储顶点Y到缓冲区1
    *(float *)(render_data_ptr + 0xa0) = vertex_z;              // 存储顶点Z到缓冲区1
    *(float *)(render_data_ptr + 0xa4) = *(float *)&result_w;   // 存储顶点W到缓冲区1
    
    // 存储顶点坐标到多个缓冲区（用于不同的渲染阶段）
    *(float *)(render_data_ptr + 200) = vertex_x;               // 存储顶点X到缓冲区2
    *(float *)(render_data_ptr + 0xcc) = vertex_y;              // 存储顶点Y到缓冲区2
    *(float *)(render_data_ptr + 0xd0) = vertex_z;              // 存储顶点Z到缓冲区2
    *(float *)(render_data_ptr + 0xd4) = *(float *)&result_w;   // 存储顶点W到缓冲区2
    
    // 存储标准化后的输入向量数据
    *(float *)(render_data_ptr + 0xa8) = input_x;               // 存储标准化输入X
    *(float *)(render_data_ptr + 0xac) = weight_y;              // 存储标准化输入Y
    *(float *)(render_data_ptr + 0xb0) = weight_z;              // 存储标准化输入Z
    *(float *)(render_data_ptr + 0xb4) = weight_w;              // 存储标准化输入W
    
    // 备份标准化后的输入向量数据
    *(float *)(render_data_ptr + 0xd8) = input_x;               // 备份标准化输入X
    *(float *)(render_data_ptr + 0xdc) = weight_y;              // 备份标准化输入Y
    *(float *)(render_data_ptr + 0xe0) = weight_z;              // 备份标准化输入Z
    *(float *)(render_data_ptr + 0xe4) = weight_w;              // 备份标准化输入W
    
    // 存储变换矩阵参数到渲染数据
    *(uint64_t *)(render_data_ptr + 0x68) = temp_int8_t; // 存储矩阵第一部分
    *(uint64_t *)(render_data_ptr + 0x70) = temp_int16_t; // 存储矩阵第二部分
    
    // 存储标准化后的四元数数据
    *(float *)(render_data_ptr + 0xb8) = quaternion_x;          // 存储四元数X到缓冲区1
    *(float *)(render_data_ptr + 0xbc) = quaternion_y;          // 存储四元数Y到缓冲区1
    *(float *)(render_data_ptr + 0xc0) = quaternion_w;          // 存储四元数W到缓冲区1
    *(float *)(render_data_ptr + 0xc4) = normal_z;              // 存储法线Z到缓冲区1
    
    // 备份四元数数据到其他缓冲区
    *(float *)(render_data_ptr + 0xe8) = quaternion_x;          // 存储四元数X到缓冲区2
    *(float *)(render_data_ptr + 0xec) = quaternion_y;          // 存储四元数Y到缓冲区2
    *(float *)(render_data_ptr + 0xf0) = quaternion_w;          // 存储四元数W到缓冲区2
    *(float *)(render_data_ptr + 0xf4) = normal_z;              // 存储法线Z到缓冲区2
    
    // 设置四元数W分量并跳转到最终处理阶段
    quaternion_w = quaternion_w;
    goto FINAL_TRANSFORM_PROCESS;
  }
  // 第四阶段：渲染模式选择和数据加载
  // 根据模式索引选择不同的数据源进行加载
  mode_index = *(int *)(render_data_ptr + 0x104);  // 获取渲染模式索引
  
  if (mode_index == 0) {
    // 模式0：从缓冲区2加载顶点坐标数据
    result_x = *(float *)(render_data_ptr + 200);   // 加载顶点X坐标
    result_y = *(float *)(render_data_ptr + 0xcc);  // 加载顶点Y坐标
    result_z = *(float *)(render_data_ptr + 0xd0);  // 加载顶点Z坐标
    result_w = *(int32_t *)(render_data_ptr + 0xd4);  // 加载顶点W分量
  }
  else if (mode_index == 1) {
    // 模式1：从备份缓冲区加载标准化输入向量数据
    result_x = *(float *)(render_data_ptr + 0xd8);  // 加载标准化输入X
    result_y = *(float *)(render_data_ptr + 0xdc);  // 加载标准化输入Y
    result_z = *(float *)(render_data_ptr + 0xe0);  // 加载标准化输入Z
    result_w = *(int32_t *)(render_data_ptr + 0xe4);  // 加载标准化输入W
  }
  else {
    // 模式2：从四元数缓冲区加载四元数数据
    result_x = *(float *)(render_data_ptr + 0xe8);  // 加载四元数X
    result_y = *(float *)(render_data_ptr + 0xec);  // 加载四元数Y
    result_z = *(float *)(render_data_ptr + 0xf0);  // 加载四元数W
    result_w = *(int32_t *)(render_data_ptr + 0xf4);  // 加载法线Z分量
  }
  // 第五阶段：向量标准化处理和角度计算
  // 对四元数向量和顶点向量进行标准化处理
  RenderingSystem_NormalizeVector(render_data_ptr + 0x98, stack_frame_ptr + -0x14);
  RenderingSystem_NormalizeVector(&stack0x00000060, stack_frame_ptr + -0x10);
  
  // 计算旋转角度差值并进行角度归一化
  rotation_angle = stack_frame_ptr[-0xe] - stack_frame_ptr[-0x12];
  
  // 角度归一化：将角度限制在[-π, π]范围内
  if (rotation_angle <= PI) {
    if (rotation_angle < -PI) {
      rotation_angle = rotation_angle + TWO_PI;  // 角度超出下限，加上2π
    }
  }
  else {
    rotation_angle = rotation_angle + -TWO_PI;   // 角度超出上限，减去2π
  }
  
  // 获取缩放因子和资源指针
  scale_factor = *(float *)(render_data_ptr + 0xf8);
  temp_long1 = *(int64_t *)(*(int64_t *)(resource_ptr + 0x10) + 0x168);
  
  // 计算位置偏移量
  normal_z = stack_frame_ptr[-0x1c] - *(float *)(temp_long1 + 0xa0);  // Z轴偏移
  temp_float1 = stack_frame_ptr[-0x1b] - *(float *)(temp_long1 + 0xa4);  // 临时浮点变量
  
  // 获取变换矩阵参数
  matrix_element1 = *(float *)(render_data_ptr + 0x68);
  
  // 计算Z坐标变换结果
  result_z = (result_z * scale_factor + *(float *)(render_data_ptr + 0x70)) - stack_frame_ptr[-0x1a];
  
  // 计算距离平方（用于后续标准化）
  distance_sq = normal_z * normal_z + temp_float1 * temp_float1;
  mode_index = *(int *)(render_data_ptr + 0x104);
  
  // 防止除零错误：如果距离平方太小，使用最小浮点数
  distance_sq = (float)(distance_sq <= FLOAT_MIN) * FLOAT_MIN + distance_sq;
  
  // 使用SIMD指令计算逆平方根
  simd_result = rsqrtss(ZEXT416((uint)distance_sq), ZEXT416((uint)distance_sq));
  quaternion_w = simd_result._0_4_;
  
  // 牛顿迭代法提高逆平方根精度
  normalized_value = quaternion_w * INVERSE_RSQRT_FACTOR * (3.0f - distance_sq * quaternion_w * quaternion_w);
  
  // 获取变换参数和矩阵数据
  interpolation_factor = *(float *)(render_data_ptr + 0xfc);
  quaternion_w = *(float *)(render_data_ptr + 0x6c);
  temp_int8_t = *(uint64_t *)(render_data_ptr + 0xe0);
  temp_int16_t = *(uint64_t *)(render_data_ptr + 200);
  temp_uint32_t = *(uint64_t *)(render_data_ptr + 0xd0);
  
  // 存储矩阵数据到栈帧
  *(uint64_t *)(stack_frame_ptr + 0x10) = *(uint64_t *)(render_data_ptr + 0xd8);
  *(uint64_t *)(stack_frame_ptr + 0x12) = temp_int8_t;
  
  // 计算X坐标变换结果（包含角度插值和缩放）
  result_x = (result_x * scale_factor + matrix_element1 + 
              normalized_value * normal_z * ABS(rotation_angle) * VECTOR_SCALE_FACTOR * 
              interpolation_factor * (1.0f / scale_factor)) - stack_frame_ptr[-0x1c];
  
  // 计算Y坐标变换结果（包含角度插值和缩放）
  result_y = (result_y * scale_factor + quaternion_w + 
              normalized_value * temp_float1 * ABS(rotation_angle) * VECTOR_SCALE_FACTOR * 
              interpolation_factor * (1.0f / scale_factor)) - stack_frame_ptr[-0x1b];
  
  // 存储矩阵数据到栈帧
  *(uint64_t *)(stack_frame_ptr + 0xc) = temp_int16_t;
  *(uint64_t *)(stack_frame_ptr + 0xe) = temp_var3;
  
  // 获取四元数数据
  quaternion_y = *(float *)(render_data_ptr + 0xec);
  quaternion_x = *(float *)(render_data_ptr + 0xf0);
  quaternion_w = *(float *)(render_data_ptr + 0xf4);
  result_w = 0x7f7fffff;  // 设置最大浮点数
  
  // 存储四元数数据到栈帧
  stack_frame_ptr[0x14] = *(float *)(render_data_ptr + 0xe8);  // 四元数X
  stack_frame_ptr[0x15] = quaternion_y;                         // 四元数Y
  stack_frame_ptr[0x16] = quaternion_x;                         // 四元数W
  stack_frame_ptr[0x17] = quaternion_w;                         // 法线Z
  // 第六阶段：模式0 - 顶点坐标矩阵变换处理
  if (mode_index == 0) {
    // 存储变换结果到栈帧
    stack_frame_ptr[0xc] = result_x;                    // 存储变换后的X坐标
    stack_frame_ptr[0xd] = result_y;                    // 存储变换后的Y坐标
    stack_frame_ptr[0xe] = result_z;                    // 存储变换后的Z坐标
    stack_frame_ptr[0xf] = FLOAT_MAX;                    // 存储最大浮点数
    
    // 计算向量的长度平方
    distance_sq = result_x * result_x + result_y * result_y + result_z * result_z;
    
    // 处理零向量情况
    if (distance_sq <= SMALL_EPSILON) {
      distance_sq = 0.0;                                // 零距离
      quaternion_x = 0.0;                                // 零向量X分量
      quaternion_y = 1.0;                                // 单位向量Y分量
    }
    else {
      // 计算标准化因子
      distance_sq = 1.0f / SQRT(distance_sq);
      quaternion_x = result_x * distance_sq;            // 标准化X分量
      quaternion_y = stack_frame_ptr[0xd] * distance_sq; // 标准化Y分量
      distance_sq = stack_frame_ptr[0xe] * distance_sq; // 标准化Z分量
    }
    
    // 计算叉积（用于构建正交基）
    result_x = stack_frame_ptr[0x15] * distance_sq - stack_frame_ptr[0x16] * quaternion_y;
    stack_frame_ptr[0xe] = distance_sq;                 // 存储标准化Z分量
    stack_frame_ptr[0xd] = quaternion_y;                // 存储标准化Y分量
    result_y = stack_frame_ptr[0x16] * quaternion_x - stack_frame_ptr[0x14] * distance_sq;
    stack_frame_ptr[0xc] = quaternion_x;                // 存储标准化X分量
    result_z = stack_frame_ptr[0x14] * quaternion_y - stack_frame_ptr[0x15] * quaternion_x;
    result_w = 0x7f7fffff;                              // 设置最大浮点数
    
    // 存储叉积结果到栈帧
    stack_frame_ptr[0x10] = result_x;                    // 存储叉积X分量
    stack_frame_ptr[0x11] = result_y;                    // 存储叉积Y分量
    stack_frame_ptr[0x12] = result_z;                    // 存储叉积Z分量
    stack_frame_ptr[0x13] = FLOAT_MAX;                   // 存储最大浮点数
    
    // 检查叉积向量是否有效
    if (EPSILON <= result_y * result_y + result_x * result_x + result_z * result_z) {
      // 向量有效，进行标准化处理
      RenderingSystem_ValidateVector(stack_frame_ptr + 0x10);
      
      // 计算新的叉积
      result_y = stack_frame_ptr[0x10] * stack_frame_ptr[0xe] - stack_frame_ptr[0x12] * stack_frame_ptr[0xc];
      result_x = stack_frame_ptr[0x12] * stack_frame_ptr[0xd] - stack_frame_ptr[0x11] * stack_frame_ptr[0xe];
      result_z = stack_frame_ptr[0x11] * stack_frame_ptr[0xc] - stack_frame_ptr[0x10] * stack_frame_ptr[0xd];
      
      // 存储新的叉积结果
      stack_frame_ptr[0x14] = result_x;                  // 存储新叉积X分量
      stack_frame_ptr[0x15] = result_y;                  // 存储新叉积Y分量
      stack_frame_ptr[0x16] = result_z;                  // 存储新叉积Z分量
      stack_frame_ptr[0x17] = FLOAT_MAX;                 // 存储最大浮点数
      
      // 计算新叉积向量的长度平方
      quaternion_y = result_y * result_y + result_x * result_x + result_z * result_z;
      
      // 使用SIMD指令进行标准化
      simd_result = rsqrtss(ZEXT416((uint)quaternion_y), ZEXT416((uint)quaternion_y));
      distance_sq = simd_result._0_4_;
      distance_sq = distance_sq * INVERSE_RSQRT_FACTOR * (3.0f - quaternion_y * distance_sq * distance_sq);
      
      // 应用标准化因子
      stack_frame_ptr[0x15] = stack_frame_ptr[0x15] * distance_sq;  // 标准化Y分量
      stack_frame_ptr[0x14] = distance_sq * result_x;               // 标准化X分量
      stack_frame_ptr[0x16] = stack_frame_ptr[0x16] * distance_sq;  // 标准化Z分量
    }
    else {
      // 向量无效，使用备用计算方法
      result_x = *(float *)(render_data_ptr + 0xe0) * quaternion_y - *(float *)(render_data_ptr + 0xdc) * distance_sq;
      result_y = *(float *)(render_data_ptr + 0xd8) * distance_sq - *(float *)(render_data_ptr + 0xe0) * quaternion_x;
      result_z = *(float *)(render_data_ptr + 0xdc) * quaternion_x - *(float *)(render_data_ptr + 0xd8) * quaternion_y;
      result_w = 0x7f7fffff;                              // 设置最大浮点数
      
      // 存储备用计算结果
      stack_frame_ptr[0x14] = result_x;                  // 存储备用X分量
      stack_frame_ptr[0x15] = result_y;                  // 存储备用Y分量
      stack_frame_ptr[0x16] = result_z;                  // 存储备用Z分量
      stack_frame_ptr[0x17] = FLOAT_MAX;                 // 存储最大浮点数
      
      // 验证备用向量
      RenderingSystem_ValidateVector(stack_frame_ptr + 0x14);
      
      // 计算最终叉积
      result_y = stack_frame_ptr[0x15] * stack_frame_ptr[0xe] - stack_frame_ptr[0x16] * stack_frame_ptr[0xd];
      result_z = stack_frame_ptr[0x14] * stack_frame_ptr[0xd] - stack_frame_ptr[0x15] * stack_frame_ptr[0xc];
      result_x = stack_frame_ptr[0x16] * stack_frame_ptr[0xc] - stack_frame_ptr[0x14] * stack_frame_ptr[0xe];
      
      // 存储最终结果
      stack_frame_ptr[0x10] = result_x;                  // 存储最终X分量
      stack_frame_ptr[0x11] = result_y;                  // 存储最终Y分量
      stack_frame_ptr[0x12] = result_z;                  // 存储最终Z分量
      stack_frame_ptr[0x13] = FLOAT_MAX;                 // 存储最大浮点数
      
      // 标准化最终向量
      distance_sq = result_x * result_x + result_y * result_y + result_z * result_z;
      simd_result = rsqrtss(ZEXT416((uint)distance_sq), ZEXT416((uint)distance_sq));
      quaternion_y = simd_result._0_4_;
      distance_sq = quaternion_y * INVERSE_RSQRT_FACTOR * (3.0f - distance_sq * quaternion_y * quaternion_y);
      
      // 应用最终标准化
      stack_frame_ptr[0x10] = result_x * distance_sq;     // 标准化最终X分量
      stack_frame_ptr[0x11] = stack_frame_ptr[0x11] * distance_sq;  // 标准化最终Y分量
      stack_frame_ptr[0x12] = stack_frame_ptr[0x12] * distance_sq;  // 标准化最终Z分量
    }
  }
  else if (iVar1 == 1) {
    unaff_RBP[0x10] = fStack0000000000000030;
    unaff_RBP[0x11] = fStack0000000000000034;
    unaff_RBP[0x12] = fStack0000000000000038;
    unaff_RBP[0x13] = 3.4028235e+38;
    func_0x00018023a1e0(unaff_RBP + 0x10);
    fVar31 = unaff_RBP[0x12];
    fVar25 = unaff_RBP[0x11];
    fVar15 = unaff_RBP[0x10];
    fStack0000000000000030 = fVar31 * unaff_RBP[0xd] - fVar25 * unaff_RBP[0xe];
    fStack0000000000000034 = fVar15 * unaff_RBP[0xe] - fVar31 * unaff_RBP[0xc];
    fStack0000000000000038 = fVar25 * unaff_RBP[0xc] - fVar15 * unaff_RBP[0xd];
    uStack000000000000003c = 0x7f7fffff;
    unaff_RBP[0x14] = fStack0000000000000030;
    unaff_RBP[0x15] = fStack0000000000000034;
    unaff_RBP[0x16] = fStack0000000000000038;
    unaff_RBP[0x17] = 3.4028235e+38;
    if (1e-07 <= fStack0000000000000030 * fStack0000000000000030 +
                 fStack0000000000000034 * fStack0000000000000034 +
                 fStack0000000000000038 * fStack0000000000000038) {
      func_0x00018023a1e0(unaff_RBP + 0x14);
      fStack0000000000000030 = unaff_RBP[0x11] * unaff_RBP[0x16] - unaff_RBP[0x12] * unaff_RBP[0x15]
      ;
      fStack0000000000000034 = unaff_RBP[0x12] * unaff_RBP[0x14] - unaff_RBP[0x10] * unaff_RBP[0x16]
      ;
      fStack0000000000000038 = unaff_RBP[0x10] * unaff_RBP[0x15] - unaff_RBP[0x11] * unaff_RBP[0x14]
      ;
      unaff_RBP[0xc] = fStack0000000000000030;
      unaff_RBP[0xd] = fStack0000000000000034;
      unaff_RBP[0xe] = fStack0000000000000038;
      unaff_RBP[0xf] = 3.4028235e+38;
      fVar31 = fStack0000000000000034 * fStack0000000000000034 +
               fStack0000000000000030 * fStack0000000000000030 +
               fStack0000000000000038 * fStack0000000000000038;
LAB_18057b6d9:
      auVar17 = rsqrtss(ZEXT416((uint)fVar31),ZEXT416((uint)fVar31));
      fVar25 = auVar17._0_4_;
      fVar31 = fVar25 * 0.5 * (3.0 - fVar31 * fVar25 * fVar25);
      unaff_RBP[0xd] = unaff_RBP[0xd] * fVar31;
      unaff_RBP[0xc] = fVar31 * fStack0000000000000030;
      unaff_RBP[0xe] = unaff_RBP[0xe] * fVar31;
    }
    else {
      fStack0000000000000030 =
           *(float *)(unaff_RBX + 0xf0) * fVar25 - *(float *)(unaff_RBX + 0xec) * fVar31;
      fStack0000000000000034 =
           *(float *)(unaff_RBX + 0xe8) * fVar31 - *(float *)(unaff_RBX + 0xf0) * fVar15;
      fStack0000000000000038 =
           *(float *)(unaff_RBX + 0xec) * fVar15 - *(float *)(unaff_RBX + 0xe8) * fVar25;
      uStack000000000000003c = 0x7f7fffff;
      unaff_RBP[0xc] = fStack0000000000000030;
      unaff_RBP[0xd] = fStack0000000000000034;
      unaff_RBP[0xe] = fStack0000000000000038;
      unaff_RBP[0xf] = 3.4028235e+38;
      func_0x00018023a1e0(unaff_RBP + 0xc);
      fStack0000000000000034 = unaff_RBP[0x10] * unaff_RBP[0xe] - unaff_RBP[0x12] * unaff_RBP[0xc];
      fStack0000000000000030 = unaff_RBP[0x12] * unaff_RBP[0xd] - unaff_RBP[0x11] * unaff_RBP[0xe];
      fStack0000000000000038 = unaff_RBP[0x11] * unaff_RBP[0xc] - unaff_RBP[0x10] * unaff_RBP[0xd];
      unaff_RBP[0x14] = fStack0000000000000030;
      unaff_RBP[0x15] = fStack0000000000000034;
      unaff_RBP[0x16] = fStack0000000000000038;
      unaff_RBP[0x17] = 3.4028235e+38;
      fVar25 = fStack0000000000000034 * fStack0000000000000034 +
               fStack0000000000000030 * fStack0000000000000030 +
               fStack0000000000000038 * fStack0000000000000038;
      auVar17 = rsqrtss(ZEXT416((uint)fVar25),ZEXT416((uint)fVar25));
      fVar31 = auVar17._0_4_;
      fVar31 = fVar31 * 0.5 * (3.0 - fVar25 * fVar31 * fVar31);
      unaff_RBP[0x15] = unaff_RBP[0x15] * fVar31;
      unaff_RBP[0x14] = fVar31 * fStack0000000000000030;
      unaff_RBP[0x16] = unaff_RBP[0x16] * fVar31;
    }
  }
  else {
    unaff_RBP[0x14] = fStack0000000000000030;
    unaff_RBP[0x15] = fStack0000000000000034;
    unaff_RBP[0x16] = fStack0000000000000038;
    unaff_RBP[0x17] = 3.4028235e+38;
    func_0x00018023a1e0(unaff_RBP + 0x14);
    fVar31 = unaff_RBP[0x15];
    fVar25 = unaff_RBP[0x16];
    fVar15 = unaff_RBP[0x14];
    fStack0000000000000030 = fVar31 * unaff_RBP[0xe] - fVar25 * unaff_RBP[0xd];
    fStack0000000000000034 = fVar25 * unaff_RBP[0xc] - fVar15 * unaff_RBP[0xe];
    fStack0000000000000038 = fVar15 * unaff_RBP[0xd] - fVar31 * unaff_RBP[0xc];
    uStack000000000000003c = 0x7f7fffff;
    unaff_RBP[0x10] = fStack0000000000000030;
    unaff_RBP[0x11] = fStack0000000000000034;
    unaff_RBP[0x12] = fStack0000000000000038;
    unaff_RBP[0x13] = 3.4028235e+38;
    if (1e-07 <= fStack0000000000000030 * fStack0000000000000030 +
                 fStack0000000000000034 * fStack0000000000000034 +
                 fStack0000000000000038 * fStack0000000000000038) {
      func_0x00018023a1e0(unaff_RBP + 0x10);
      fStack0000000000000030 = unaff_RBP[0x11] * unaff_RBP[0x16] - unaff_RBP[0x12] * unaff_RBP[0x15]
      ;
      fStack0000000000000038 = unaff_RBP[0x10] * unaff_RBP[0x15] - unaff_RBP[0x11] * unaff_RBP[0x14]
      ;
      fStack0000000000000034 = unaff_RBP[0x12] * unaff_RBP[0x14] - unaff_RBP[0x10] * unaff_RBP[0x16]
      ;
      unaff_RBP[0xc] = fStack0000000000000030;
      unaff_RBP[0xd] = fStack0000000000000034;
      unaff_RBP[0xe] = fStack0000000000000038;
      unaff_RBP[0xf] = 3.4028235e+38;
      fVar31 = fStack0000000000000030 * fStack0000000000000030 +
               fStack0000000000000034 * fStack0000000000000034 +
               fStack0000000000000038 * fStack0000000000000038;
      goto LAB_18057b6d9;
    }
    fStack0000000000000030 =
         *(float *)(unaff_RBX + 0xdc) * fVar25 - *(float *)(unaff_RBX + 0xe0) * fVar31;
    fStack0000000000000038 =
         *(float *)(unaff_RBX + 0xd8) * fVar31 - *(float *)(unaff_RBX + 0xdc) * fVar15;
    fStack0000000000000034 =
         *(float *)(unaff_RBX + 0xe0) * fVar15 - *(float *)(unaff_RBX + 0xd8) * fVar25;
    uStack000000000000003c = 0x7f7fffff;
    unaff_RBP[0xc] = fStack0000000000000030;
    unaff_RBP[0xd] = fStack0000000000000034;
    unaff_RBP[0xe] = fStack0000000000000038;
    unaff_RBP[0xf] = 3.4028235e+38;
    func_0x00018023a1e0(unaff_RBP + 0xc);
    fStack0000000000000030 = unaff_RBP[0x15] * unaff_RBP[0xe] - unaff_RBP[0x16] * unaff_RBP[0xd];
    fStack0000000000000038 = unaff_RBP[0x14] * unaff_RBP[0xd] - unaff_RBP[0x15] * unaff_RBP[0xc];
    fStack0000000000000034 = unaff_RBP[0x16] * unaff_RBP[0xc] - unaff_RBP[0x14] * unaff_RBP[0xe];
    unaff_RBP[0x10] = fStack0000000000000030;
    unaff_RBP[0x11] = fStack0000000000000034;
    unaff_RBP[0x12] = fStack0000000000000038;
    unaff_RBP[0x13] = 3.4028235e+38;
    fVar31 = fStack0000000000000030 * fStack0000000000000030 +
             fStack0000000000000034 * fStack0000000000000034 +
             fStack0000000000000038 * fStack0000000000000038;
    auVar17 = rsqrtss(ZEXT416((uint)fVar31),ZEXT416((uint)fVar31));
    fVar25 = auVar17._0_4_;
    fVar31 = fVar25 * 0.5 * (3.0 - fVar31 * fVar25 * fVar25);
    unaff_RBP[0x10] = fStack0000000000000030 * fVar31;
    unaff_RBP[0x11] = unaff_RBP[0x11] * fVar31;
    unaff_RBP[0x12] = unaff_RBP[0x12] * fVar31;
  }
  // 第七阶段：最终数据存储和矩阵构建
  // 设置最大浮点数标记
  result_w = 0x7f7fffff;  // 设置最大浮点数
  
  // 提取矩阵数据
  temp_int8_t = *(uint64_t *)(stack_frame_ptr + 0xe);
  temp_int16_t = *(uint64_t *)(stack_frame_ptr + 0x10);
  temp_uint32_t = *(uint64_t *)(stack_frame_ptr + 0x12);
  
  // 获取四元数数据
  quaternion_x = stack_frame_ptr[-0x20];              // 四元数X分量
  quaternion_y = stack_frame_ptr[-0x1f];              // 四元数Y分量
  quaternion_w = stack_frame_ptr[-0x1e];              // 四元数W分量
  normal_z = stack_frame_ptr[-0x1d];                  // 法线Z分量
  
  // 备份四元数数据
  quaternion_w = stack_frame_ptr[-0x1e];              // 备份四元数W分量
  quaternion_y = stack_frame_ptr[-0x1f];              // 备份四元数Y分量
  quaternion_x = stack_frame_ptr[-0x20];              // 备份四元数X分量
  
  // 存储变换结果到渲染数据缓冲区
  *(uint64_t *)(render_data_ptr + 200) = *(uint64_t *)(stack_frame_ptr + 0xc);  // 存储变换矩阵X部分
  *(uint64_t *)(render_data_ptr + 0xd0) = temp_int8_t;                       // 存储变换矩阵Y部分
  
  // 提取更多矩阵数据
  temp_int8_t = *(uint64_t *)(stack_frame_ptr + 0x14);
  temp_int32_t = *(uint64_t *)(stack_frame_ptr + 0x16);
  
  // 存储矩阵数据到渲染数据
  *(uint64_t *)(render_data_ptr + 0xd8) = temp_int16_t;  // 存储矩阵数据1
  *(uint64_t *)(render_data_ptr + 0xe0) = temp_var3;  // 存储矩阵数据2
  *(uint64_t *)(render_data_ptr + 0xe8) = temp_int8_t;  // 存储矩阵数据3
  *(uint64_t *)(render_data_ptr + 0xf0) = temp_int32_t;  // 存储矩阵数据4
  
  // 备份矩阵数据到栈帧
  *(uint64_t *)(stack_frame_ptr + -0x10) = *(uint64_t *)(stack_frame_ptr + -0x1c);  // 备份矩阵数据1
  *(uint64_t *)(stack_frame_ptr + -0xe) = *(uint64_t *)(stack_frame_ptr + -0x1a);   // 备份矩阵数据2
  
  // 存储四元数数据到栈帧
  stack_frame_ptr[-0x14] = quaternion_x;              // 存储四元数X
  stack_frame_ptr[-0x13] = quaternion_y;              // 存储四元数Y
  stack_frame_ptr[-0x12] = quaternion_w;              // 存储四元数W
  stack_frame_ptr[-0x11] = normal_z;                  // 存储法线Z
  
  // 存储顶点坐标到栈帧
  stack_frame_ptr[-8] = vertex_x;                      // 存储顶点X
  stack_frame_ptr[-7] = vertex_y;                      // 存储顶点Y
  stack_frame_ptr[-6] = vertex_z;                      // 存储顶点Z
  stack_frame_ptr[-5] = *(float *)&result_w;           // 存储顶点W
  
  // 备份顶点坐标
  vertex_x = stack_frame_ptr[-8];                      // 备份顶点X
  vertex_y = stack_frame_ptr[-7];                      // 备份顶点Y
  vertex_z = stack_frame_ptr[-6];                      // 备份顶点Z
  
  // 标签：最终变换处理阶段
  FINAL_TRANSFORM_PROCESS:
// 第八阶段：最终矩阵变换和渲染参数计算
  // 获取标准化后的输入向量分量
  weight_z = input_z;                                  // 标准化输入Z分量
  weight_y = input_y;                                  // 标准化输入Y分量
  input_x = input_x;                                   // 标准化输入X分量
  
  // 获取四元数缓冲区数据
  quaternion_x = *(float *)(render_data_ptr + 0xe8);   // 四元数X分量
  quaternion_y = *(float *)(render_data_ptr + 0xec);   // 四元数Y分量
  quaternion_w = *(float *)(render_data_ptr + 0xf0);   // 四元数W分量
  normal_z = *(float *)(render_data_ptr + 0xf4);       // 法线Z分量
  
  // 获取备份缓冲区数据
  result_x = *(float *)(render_data_ptr + 0xd8);       // 备份X分量
  result_y = *(float *)(render_data_ptr + 0xdc);       // 备份Y分量
  result_z = *(float *)(render_data_ptr + 0xe0);       // 备份Z分量
  
  // 获取顶点坐标缓冲区数据
  vertex_x = *(float *)(render_data_ptr + 200);        // 顶点X坐标
  vertex_y = *(float *)(render_data_ptr + 0xcc);       // 顶点Y坐标
  vertex_z = *(float *)(render_data_ptr + 0xd0);       // 顶点Z坐标
  
  // 计算第一行变换矩阵（顶点坐标变换）
  stack_frame_ptr[0xc] = vertex_y * vertex_y + vertex_x * vertex_x + vertex_z * vertex_z;
  stack_frame_ptr[0xd] = vertex_y * result_y + vertex_x * result_x + vertex_z * result_z;
  stack_frame_ptr[0xe] = vertex_y * quaternion_y + vertex_x * quaternion_x + vertex_z * quaternion_w;
  stack_frame_ptr[0xf] = vertex_y * normal_z + vertex_x * normal_z + vertex_z * normal_z;
  
  // 计算第二行变换矩阵（标准化输入向量变换）
  stack_frame_ptr[0x10] = weight_y * vertex_y + input_x * vertex_x + weight_z * vertex_z;
  stack_frame_ptr[0x11] = weight_y * result_y + input_x * result_x + weight_z * result_z;
  stack_frame_ptr[0x12] = weight_y * quaternion_y + input_x * quaternion_x + weight_z * quaternion_w;
  stack_frame_ptr[0x13] = weight_y * normal_z + input_x * normal_z + weight_z * normal_z;
  
  // 计算第三行变换矩阵（四元数变换）
  stack_frame_ptr[0x14] = quaternion_x * vertex_x + quaternion_y * vertex_y + quaternion_w * vertex_z;
  stack_frame_ptr[0x15] = quaternion_x * result_x + quaternion_y * result_y + quaternion_w * result_z;
  stack_frame_ptr[0x16] = quaternion_x * quaternion_x + quaternion_y * quaternion_y + quaternion_w * quaternion_w;
  stack_frame_ptr[0x17] = quaternion_x * normal_z + quaternion_y * normal_z + quaternion_w * normal_z;
  
  // 对变换矩阵进行标准化处理
  RenderingSystem_NormalizeVector(stack_frame_ptr + 0xc, &stack0x00000030);
  
  // 获取时间参数和计算索引
  input_time = *(float *)(resource_ptr + 0x38);
  temp_long1 = ((int64_t)index_flag + -1) * 0x1b0;
  *(int64_t *)(stack_frame_ptr + -0xc) = temp_long1;
  
  // 计算100倍缩放的时间相关变换参数
  result_z = result_z * HUNDRED * input_time + *(float *)(render_data_ptr + 0x58);
  result_y = result_y * HUNDRED * input_time + *(float *)(render_data_ptr + 0x5c);
  normal_z = normal_z * HUNDRED * input_time + *(float *)(render_data_ptr + 0x60);
  
  // 存储变换参数到渲染数据
  *(float *)(render_data_ptr + 0x58) = result_z;        // 存储Z变换参数
  *(float *)(render_data_ptr + 0x5c) = result_y;        // 存储Y变换参数
  *(float *)(render_data_ptr + 0x60) = normal_z;        // 存储Z变换参数
  
  // 获取骨骼索引和计算骨骼变换矩阵
  bone_index = *(int *)(temp_long1 + 0x110 + *(int64_t *)(*(int64_t *)(resource_ptr + 0x208) + 0x140));
  
  // 获取变换参数
  quaternion_x = *(float *)(render_data_ptr + 0x58);    // X变换参数
  quaternion_w = *(float *)(render_data_ptr + 0x5c);    // Y变换参数
  input_time = *(float *)(render_data_ptr + 0x60);      // Z变换参数
  
  // 计算骨骼数据指针
  temp_long1 = (int64_t)bone_index * 0x60 + *(int64_t *)(*(int64_t *)(resource_ptr + 0x208) + 0x158);
  
  // 计算权重因子
  quaternion_w = 1.0f - (*(float *)(temp_long1 + 0x40) + *(float *)(temp_long1 + 0x3c));
  
  // 计算变换向量的长度平方
  distance_sq = quaternion_w * quaternion_w + quaternion_x * quaternion_x + input_time * input_time;
  
  // 初始化标准化向量
  stack_frame_ptr[0xc] = FLOAT_MIN;                     // 最小浮点数
  stack_frame_ptr[0xd] = 0.0f;                          // 零值
  stack_frame_ptr[0xe] = 0.0f;                          // 零值
  stack_frame_ptr[0xf] = 0.0f;                          // 零值
  
  normalized_value = distance_sq;                       // 备份距离平方
  if (distance_sq <= FLOAT_MIN) {
    normalized_value = FLOAT_MIN;                       // 防止除零错误
  }
  
  // 计算距离相关的缩放因子
  normal_z = SQRT(result_z * result_z + result_y * result_y + normal_z * normal_z) * 
              DISTANCE_SCALE_FACTOR * quaternion_w * input_time;
  
  // 计算偏置缩放因子
  quaternion_w = quaternion_w * BIAS_SCALE_FACTOR * input_time;
  
  // 选择较大的缩放因子
  if (normal_z <= quaternion_w) {
    normal_z = quaternion_w;                             // 使用偏置缩放因子
  }
  
  // 使用SIMD指令计算逆平方根
  simd_result = rsqrtss(ZEXT416((uint)normalized_value), ZEXT416((uint)normalized_value));
  quaternion_w = simd_result._0_4_;
  normalized_value = quaternion_w * INVERSE_RSQRT_FACTOR * (3.0f - normalized_value * quaternion_w * quaternion_w);
  
  // 应用距离限制和变换
  if (normal_z <= normalized_value * distance_sq) {
    *(float *)(render_data_ptr + 0x58) = result_z - normal_z * quaternion_x * normalized_value;
    *(float *)(render_data_ptr + 0x5c) = *(float *)(render_data_ptr + 0x5c) - normal_z * quaternion_w * normalized_value;
    input_x = *(float *)(render_data_ptr + 0x60) - normal_z * input_time * normalized_value;
    *(float *)(render_data_ptr + 0x60) = input_x;       // 存储最终的Z变换参数
  }
  else {
    // 超出距离限制，重置为零
    *(uint64_t *)(render_data_ptr + 0x58) = 0;         // 重置X变换参数
    input_x = 0.0f;                                      // 重置输入X
    *(uint64_t *)(render_data_ptr + 0x60) = 0;         // 重置Z变换参数
  }
  
  // 获取最终变换矩阵数据
  quaternion_x = *(float *)(render_data_ptr + 0xcc);     // 最终矩阵X分量
  quaternion_w = *(float *)(render_data_ptr + 0xd0);     // 最终矩阵Y分量
  input_time = *(float *)(render_data_ptr + 0xdc);       // 最终矩阵Z分量
  normal_z = *(float *)(render_data_ptr + 200);          // 最终矩阵W分量
  result_x = *(float *)(render_data_ptr + 0xd8);         // 最终变换X
  result_y = *(float *)(render_data_ptr + 0xe0);         // 最终变换Y
  result_z = *(float *)(render_data_ptr + 0xe8);         // 最终变换Z
  
  // 构建最终的4x3变换矩阵
  *stack_frame_ptr = quaternion_x * vertex_y + normal_z * vertex_x + quaternion_w * vertex_z;
  stack_frame_ptr[1] = quaternion_x * weight_y + normal_z * input_x + quaternion_w * weight_z;
  stack_frame_ptr[2] = quaternion_x * quaternion_y + normal_z * quaternion_x + quaternion_w * quaternion_w;
  stack_frame_ptr[3] = quaternion_x * normal_z + normal_z * normal_z + quaternion_w * normal_z;
  
  // 第二行变换矩阵
  quaternion_y = *(float *)(render_data_ptr + 0xec);     // 四元数Y分量
  quaternion_w = *(float *)(render_data_ptr + 0xf0);     // 四元数W分量
  stack_frame_ptr[4] = input_time * vertex_y + result_x * vertex_x + result_y * vertex_z;
  stack_frame_ptr[5] = input_time * weight_y + result_x * input_x + result_y * weight_z;
  stack_frame_ptr[6] = input_time * quaternion_y + result_x * quaternion_x + result_y * quaternion_w;
  stack_frame_ptr[7] = input_time * normal_z + result_x * normal_z + result_y * normal_z;
  
  // 第三行变换矩阵
  stack_frame_ptr[8] = quaternion_y * vertex_y + result_z * vertex_x + quaternion_w * vertex_z;
  stack_frame_ptr[9] = quaternion_y * weight_y + result_z * input_x + quaternion_w * weight_z;
  stack_frame_ptr[10] = quaternion_y * quaternion_y + result_z * quaternion_x + quaternion_w * quaternion_w;
  stack_frame_ptr[0xb] = quaternion_y * normal_z + result_z * normal_z + quaternion_w * normal_z;
  
  // 存储时间参数
  input_time = input_time;                                // 备份时间参数
  
  // 调用变换处理函数（不返回）
  RenderingSystem_ProcessTransform(&stack0x00000030);
  
  // 应用最终变换
  RenderingSystem_ApplyFinalTransform(input_time * *(float *)(render_data_ptr + 0x58) * HALF);
}

/**
 * @brief 渲染系统高级数学计算和矩阵变换处理器 - 技术说明
 * 
 * 函数功能总结：
 * ===============
 * 该函数实现了Mount & Blade渲染系统中的高级数学计算和矩阵变换功能，
 * 主要用于处理3D渲染中的顶点变换、向量标准化、四元数旋转等核心数学运算。
 * 
 * 核心技术特点：
 * ==============
 * 1. SIMD优化计算：使用SIMD指令进行高效的浮点数运算，特别在向量标准化和逆平方根计算中
 * 2. 牛顿迭代法：采用牛顿迭代法提高逆平方根计算精度，公式为 x_{n+1} = x_n * 0.5 * (3 - x^2 * x_n * x_n)
 * 3. 多模式渲染：支持三种不同的渲染模式，分别处理顶点坐标、标准化输入向量和四元数数据
 * 4. 角度归一化：将旋转角度限制在[-π, π]范围内，确保角度计算的准确性
 * 5. 距离限制：根据距离参数动态调整变换效果，超出限制范围时重置变换
 * 6. 骨骼动画：支持骨骼索引和权重计算，用于角色动画系统
 * 
 * 数学算法：
 * ===========
 * - 向量标准化：使用SIMD优化的逆平方根计算，配合牛顿迭代法提高精度
 * - 四元数处理：实现四元数的标准化和旋转变换
 * - 矩阵变换：构建4x3变换矩阵，支持顶点坐标、法线向量的变换
 * - 叉积计算：用于构建正交基和切线空间
 * - 插值计算：支持时间相关的线性插值和角度插值
 * 
 * 性能优化：
 * ===========
 * - 使用SIMD指令提高计算效率
 * - 避免重复计算，缓存中间结果
 * - 条件分支优化，减少不必要的计算
 * - 内存访问优化，合理使用栈帧和缓冲区
 * 
 * 应用场景：
 * ===========
 * - 3D模型顶点变换
 * - 角色骨骼动画
 * - 摄像机视角变换
 * - 光照和阴影计算
 * - 粒子系统变换
 * 
 * 函数别名映射：
 * ==============
 * - RenderingSystem_GetMatrixData -> FUN_180535610：获取矩阵数据
 * - RenderingSystem_NormalizeVector -> FUN_1801c1720：标准化向量
 * - RenderingSystem_ProcessTransform -> FUN_18063b470：处理变换
 * - RenderingSystem_ApplyFinalTransform -> FUN_1808fd400：应用最终变换
 * - RenderingSystem_ValidateVector -> func_0x00018023a1e0：验证向量
 * 
 * 该函数是渲染管线中的核心数学计算模块，为整个渲染系统提供高性能的数学运算支持。
 */




