#include "TaleWorlds.Native.Split.h"

// 03_rendering_part034.c - 渲染系统矩阵变换和投影计算模块
// 包含6个核心函数，涵盖矩阵运算、投影变换、相机参数设置和视锥体裁剪等功能

// 函数：矩阵归一化和向量处理
// 对输入的矩阵进行归一化处理，计算向量的长度并标准化
void normalize_matrix_vectors(float *matrix_data)
{
    float vector_x;
    float vector_y;
    float vector_z;
    float vector_w;
    float temp_value;
    float norm_x;
    float norm_y;
    float norm_z;
    float magnitude;
    float inverse_magnitude;
    
    // 设置矩阵的W分量
    matrix_data[0x20] = 1.0f;  // XMM0_Qa的低位
    matrix_data[0x21] = 0.0f;  // XMM0_Qa的高位
    matrix_data[0x22] = 0.0f;  // XMM0_Dc
    matrix_data[0x23] = 0.0f;  // XMM0_Dd
    
    // 复制变换矩阵数据
    *(uint64_t *)(matrix_data + 0x28) = *(uint64_t *)(matrix_data + 0x3c);
    *(uint64_t *)(matrix_data + 0x2a) = *(uint64_t *)(matrix_data + 0x3e);
    *(uint64_t *)(matrix_data + 0x18) = *(uint64_t *)(matrix_data + 0x3c);
    *(uint64_t *)(matrix_data + 0x1a) = *(uint64_t *)(matrix_data + 0x3e);
    *(uint64_t *)(matrix_data + 0x10) = *(uint64_t *)(matrix_data + 0x3c);
    *(uint64_t *)(matrix_data + 0x12) = *(uint64_t *)(matrix_data + 0x3e);
    
    // 计算第一个向量的叉积
    vector_w = matrix_data[0x45];
    vector_z = matrix_data[0x43];
    norm_x = -(vector_w * matrix_data[0x34]) - vector_z * matrix_data[0x38];
    norm_y = -(vector_w * matrix_data[0x35]) - vector_z * matrix_data[0x39];
    temp_value = 3.4028235e+38f;  // FLT_MAX
    norm_z = -(vector_w * matrix_data[0x36]) - vector_z * matrix_data[0x3a];
    
    matrix_data[0x24] = norm_x;
    matrix_data[0x25] = norm_y;
    matrix_data[0x26] = norm_z;
    matrix_data[0x27] = temp_value;
    
    // 计算第二个向量的点积
    vector_w = matrix_data[0x45];
    vector_z = matrix_data[0x44];
    norm_x = vector_z * matrix_data[0x38] + vector_w * matrix_data[0x34];
    norm_z = vector_z * matrix_data[0x3a] + vector_w * matrix_data[0x36];
    norm_y = vector_z * matrix_data[0x39] + vector_w * matrix_data[0x35];
    temp_value = 3.4028235e+38f;  // FLT_MAX
    
    matrix_data[0x2c] = norm_x;
    matrix_data[0x2d] = norm_y;
    matrix_data[0x2e] = norm_z;
    matrix_data[0x2f] = temp_value;
    
    // 计算第三个向量的变换
    vector_w = matrix_data[0x45];
    vector_z = matrix_data[0x42];
    temp_value = matrix_data[0x30];
    norm_y = matrix_data[0x31];
    norm_z = matrix_data[0x32];
    
    norm_x = -(vector_w * temp_value) - vector_z * matrix_data[0x38];
    norm_y = -(vector_w * norm_y) - vector_z * matrix_data[0x39];
    temp_value = matrix_data[0x3a];
    norm_z = -(vector_w * norm_z) - vector_z * temp_value;
    temp_value = 3.4028235e+38f;  // FLT_MAX
    
    matrix_data[0x1c] = norm_x;
    matrix_data[0x1d] = norm_y;
    matrix_data[0x1e] = norm_z;
    matrix_data[0x1f] = temp_value;
    
    // 计算第四个向量的变换
    vector_w = matrix_data[0x45];
    vector_z = matrix_data[0x41];
    norm_y = matrix_data[0x31];
    temp_value = matrix_data[0x38];
    
    norm_x = vector_z * temp_value + vector_w * matrix_data[0x30];
    norm_z = vector_z * matrix_data[0x39] + vector_w * norm_y;
    temp_value = 3.4028235e+38f;  // FLT_MAX
    norm_y = vector_z * matrix_data[0x3a] + vector_w * matrix_data[0x32];
    
    matrix_data[0x14] = norm_x;
    matrix_data[0x15] = norm_z;
    matrix_data[0x16] = norm_y;
    matrix_data[0x17] = temp_value;
    
    // 归一化第一个向量
    vector_w = matrix_data[0x25];
    vector_z = matrix_data[0x24];
    temp_value = matrix_data[0x26];
    magnitude = vector_z * vector_z + vector_w * vector_w + temp_value * temp_value;
    inverse_magnitude = 1.0f / sqrtf(magnitude);
    
    matrix_data[0x24] = vector_z * inverse_magnitude;
    matrix_data[0x25] = vector_w * inverse_magnitude;
    matrix_data[0x26] = temp_value * inverse_magnitude;
    
    // 归一化第二个向量
    vector_w = matrix_data[0x2d];
    vector_z = matrix_data[0x2c];
    temp_value = matrix_data[0x2e];
    magnitude = vector_z * vector_z + vector_w * vector_w + temp_value * temp_value;
    inverse_magnitude = 1.0f / sqrtf(magnitude);
    
    matrix_data[0x2c] = vector_z * inverse_magnitude;
    matrix_data[0x2d] = vector_w * inverse_magnitude;
    matrix_data[0x2e] = temp_value * inverse_magnitude;
    
    // 归一化第三个向量
    vector_w = matrix_data[0x1d];
    vector_z = matrix_data[0x1c];
    temp_value = matrix_data[0x1e];
    magnitude = vector_z * vector_z + vector_w * vector_w + temp_value * temp_value;
    inverse_magnitude = 1.0f / sqrtf(magnitude);
    
    matrix_data[0x1c] = vector_z * inverse_magnitude;
    matrix_data[0x1d] = vector_w * inverse_magnitude;
    matrix_data[0x1e] = temp_value * inverse_magnitude;
    
    // 归一化第四个向量
    vector_w = matrix_data[0x15];
    vector_z = matrix_data[0x14];
    temp_value = matrix_data[0x16];
    magnitude = vector_z * vector_z + vector_w * vector_w + temp_value * temp_value;
    inverse_magnitude = 1.0f / sqrtf(magnitude);
    
    matrix_data[0x14] = vector_z * inverse_magnitude;
    matrix_data[0x15] = vector_w * inverse_magnitude;
    matrix_data[0x16] = temp_value * inverse_magnitude;
    
    // 计算相机视锥体的近平面
    vector_w = matrix_data[0x46];
    norm_x = matrix_data[0x3c] - vector_w * matrix_data[0x38];
    norm_y = matrix_data[0x3d] - vector_w * matrix_data[0x39];
    temp_value = 3.4028235e+38f;  // FLT_MAX
    norm_z = matrix_data[0x3e] - vector_w * matrix_data[0x3a];
    
    matrix_data[8] = norm_x;
    matrix_data[9] = norm_y;
    matrix_data[10] = norm_z;
    matrix_data[0xb] = temp_value;
    
    // 计算相机视锥体的远平面
    vector_w = matrix_data[0x45];
    temp_value = matrix_data[0x38];
    norm_z = matrix_data[0x3a];
    norm_y = matrix_data[0x3d] - vector_w * matrix_data[0x39];
    temp_value = 3.4028235e+38f;  // FLT_MAX
    norm_x = matrix_data[0x3c] - vector_w * temp_value;
    norm_z = matrix_data[0x3e] - vector_w * norm_z;
    
    *matrix_data = norm_x;
    matrix_data[1] = norm_y;
    matrix_data[2] = norm_z;
    matrix_data[3] = temp_value;
    
    // 设置投影矩阵的平移部分
    *(uint64_t *)(matrix_data + 0xc) = *(uint64_t *)(matrix_data + 0x38);
    *(uint64_t *)(matrix_data + 0xe) = *(uint64_t *)(matrix_data + 0x3a);
    
    // 设置投影矩阵的缩放部分（负值表示翻转）
    norm_x = matrix_data[0x38];
    norm_y = matrix_data[0x39];
    vector_w = matrix_data[0x3a];
    temp_value = 3.4028235e+38f;  // FLT_MAX
    norm_z = 3.4028235e+38f;  // FLT_MAX
    
    matrix_data[4] = -norm_x;
    matrix_data[5] = -norm_y;
    matrix_data[6] = -vector_w;
    matrix_data[7] = temp_value;
}

// 函数：矩阵变换和投影设置
// 对输入矩阵进行完整的变换处理，包括投影矩阵的设置和归一化
void setup_projection_matrix(float *matrix_data)
{
    uint64_t temp_data1;
    uint64_t temp_data2;
    float scale_x;
    float scale_y;
    float scale_z;
    float scale_w;
    float translate_x;
    float translate_y;
    float translate_z;
    float translate_w;
    
    // 计算第一个变换向量
    translate_w = matrix_data[0x43];
    scale_x = translate_w * matrix_data[0x34] + matrix_data[0x3c];
    translate_w = 3.4028235e+38f;  // FLT_MAX
    scale_y = translate_w * matrix_data[0x35] + matrix_data[0x3d];
    scale_z = translate_w * matrix_data[0x36] + matrix_data[0x3e];
    
    matrix_data[0x20] = scale_x;
    matrix_data[0x21] = scale_y;
    matrix_data[0x22] = scale_z;
    matrix_data[0x23] = translate_w;
    
    // 计算第二个变换向量
    translate_w = matrix_data[0x44];
    scale_z = translate_w * matrix_data[0x36] + matrix_data[0x3e];
    scale_x = translate_w * matrix_data[0x35] + matrix_data[0x3d];
    translate_w = 3.4028235e+38f;  // FLT_MAX
    scale_y = translate_w * matrix_data[0x34] + matrix_data[0x3c];
    
    matrix_data[0x28] = scale_y;
    matrix_data[0x29] = scale_x;
    matrix_data[0x2a] = scale_z;
    matrix_data[0x2b] = translate_w;
    
    // 计算第三个变换向量
    translate_w = matrix_data[0x42];
    scale_z = translate_w * matrix_data[0x32] + matrix_data[0x3e];
    scale_x = translate_w * matrix_data[0x31] + matrix_data[0x3d];
    translate_w = 3.4028235e+38f;  // FLT_MAX
    scale_y = translate_w * matrix_data[0x30] + matrix_data[0x3c];
    
    matrix_data[0x18] = scale_y;
    matrix_data[0x19] = scale_x;
    matrix_data[0x1a] = scale_z;
    matrix_data[0x1b] = translate_w;
    
    // 计算第四个变换向量
    translate_w = matrix_data[0x41];
    scale_w = translate_w * matrix_data[0x32] + matrix_data[0x3e];
    scale_z = translate_w * matrix_data[0x31] + matrix_data[0x3d];
    translate_w = 3.4028235e+38f;  // FLT_MAX
    scale_y = translate_w * matrix_data[0x30] + matrix_data[0x3c];
    
    matrix_data[0x10] = scale_y;
    matrix_data[0x11] = scale_z;
    matrix_data[0x12] = scale_w;
    matrix_data[0x13] = translate_w;
    
    // 计算相机近平面
    translate_w = matrix_data[0x46];
    scale_x = matrix_data[0x3c];
    scale_x = scale_x - translate_w * matrix_data[0x38];
    scale_y = matrix_data[0x3d];
    scale_z = matrix_data[0x3a];
    translate_w = 3.4028235e+38f;  // FLT_MAX
    scale_y = scale_y - translate_w * matrix_data[0x39];
    scale_z = matrix_data[0x3e] - translate_w * scale_z;
    scale_w = 3.4028235e+38f;  // FLT_MAX
    
    matrix_data[8] = scale_x;
    matrix_data[9] = scale_y;
    matrix_data[10] = scale_z;
    matrix_data[0xb] = scale_w;
    
    // 计算相机远平面
    scale_x = matrix_data[0x3c];
    translate_w = matrix_data[0x45];
    scale_x = scale_x - translate_w * matrix_data[0x38];
    scale_y = matrix_data[0x3d] - translate_w * matrix_data[0x39];
    scale_z = matrix_data[0x3e] - translate_w * matrix_data[0x3a];
    translate_w = 3.4028235e+38f;  // FLT_MAX
    
    *matrix_data = scale_x;
    matrix_data[1] = scale_y;
    matrix_data[2] = scale_z;
    matrix_data[3] = translate_w;
    
    // 设置投影矩阵的负缩放部分
    scale_x = matrix_data[0x34];
    scale_y = matrix_data[0x35];
    translate_w = matrix_data[0x34];
    scale_z = matrix_data[0x35];
    translate_w = 3.4028235e+38f;  // FLT_MAX
    scale_w = matrix_data[0x36];
    scale_w = 3.4028235e+38f;  // FLT_MAX
    
    matrix_data[0x24] = -translate_w;
    matrix_data[0x25] = -scale_z;
    matrix_data[0x26] = -scale_w;
    matrix_data[0x27] = translate_w;
    
    temp_data1 = *(uint64_t *)(matrix_data + 0x34);
    temp_data2 = *(uint64_t *)(matrix_data + 0x36);
    
    // 设置投影矩阵的变换部分
    *(uint64_t *)(matrix_data + 0x2c) = temp_data1;
    *(uint64_t *)(matrix_data + 0x2e) = temp_data2;
    
    scale_y = matrix_data[0x31];
    scale_w = matrix_data[0x32];
    
    matrix_data[0x1c] = -matrix_data[0x30];
    matrix_data[0x1d] = -scale_y;
    matrix_data[0x1e] = -scale_w;
    matrix_data[0x1f] = translate_w;
    
    temp_data1 = *(uint64_t *)(matrix_data + 0x30);
    temp_data2 = *(uint64_t *)(matrix_data + 0x32);
    
    // 设置投影矩阵的位置部分
    *(uint64_t *)(matrix_data + 0x14) = temp_data1;
    *(uint64_t *)(matrix_data + 0x16) = temp_data2;
    
    // 设置投影矩阵的视图部分
    *(uint64_t *)(matrix_data + 0xc) = *(uint64_t *)(matrix_data + 0x38);
    *(uint64_t *)(matrix_data + 0xe) = *(uint64_t *)(matrix_data + 0x3a);
    
    scale_x = matrix_data[0x38];
    scale_y = matrix_data[0x39];
    scale_w = matrix_data[0x3a];
    translate_w = 3.4028235e+38f;  // FLT_MAX
    scale_z = 3.4028235e+38f;  // FLT_MAX
    
    matrix_data[4] = -scale_x;
    matrix_data[5] = -scale_y;
    matrix_data[6] = -scale_w;
    matrix_data[7] = translate_w;
}

// 函数：透视投影矩阵设置
// 根据视场角、宽高比和近平面/远平面距离设置透视投影矩阵
void setup_perspective_projection(float *matrix_data, float fov_angle, float aspect_ratio, float near_plane, float far_plane)
{
    float focal_length;
    float proj_scale;
    float aspect_scale;
    float depth_scale;
    
    // 设置投影参数
    matrix_data[0x47] = fov_angle;        // 视场角
    *(uint8_t *)(matrix_data + 0x40) = 1;  // 透视投影标志
    matrix_data[0x46] = far_plane;         // 远平面距离
    matrix_data[0x45] = near_plane;        // 近平面距离
    matrix_data[0x48] = aspect_ratio;      // 宽高比
    
    // 计算焦距和投影缩放
    focal_length = tanf(fov_angle * 0.5f);
    proj_scale = focal_length * near_plane;
    
    // 设置投影缩放因子
    matrix_data[0x42] = proj_scale;         // 正缩放因子
    matrix_data[0x41] = -proj_scale;        // 负缩放因子
    matrix_data[0x43] = proj_scale / aspect_ratio;  // 宽高比调整
    matrix_data[0x44] = -(proj_scale / aspect_ratio); // 负宽高比调整
    
    if (*(uint8_t *)(matrix_data + 0x40) == 0) {
        // 正交投影模式
        depth_scale = matrix_data[0x43];
        matrix_data[0x20] = depth_scale * matrix_data[0x34] + matrix_data[0x3c];
        matrix_data[0x21] = depth_scale * matrix_data[0x35] + matrix_data[0x3d];
        matrix_data[0x22] = depth_scale * matrix_data[0x36] + matrix_data[0x3e];
        matrix_data[0x23] = 3.4028235e+38f;  // FLT_MAX
        
        depth_scale = matrix_data[0x44];
        matrix_data[0x28] = depth_scale * matrix_data[0x34] + matrix_data[0x3c];
        matrix_data[0x29] = depth_scale * matrix_data[0x35] + matrix_data[0x3d];
        matrix_data[0x2a] = depth_scale * matrix_data[0x36] + matrix_data[0x3e];
        matrix_data[0x2b] = 3.4028235e+38f;  // FLT_MAX
        
        depth_scale = matrix_data[0x42];
        matrix_data[0x18] = depth_scale * matrix_data[0x30] + matrix_data[0x3c];
        matrix_data[0x19] = depth_scale * matrix_data[0x31] + matrix_data[0x3d];
        matrix_data[0x1a] = depth_scale * matrix_data[0x32] + matrix_data[0x3e];
        matrix_data[0x1b] = 3.4028235e+38f;  // FLT_MAX
        
        depth_scale = matrix_data[0x41];
        matrix_data[0x10] = depth_scale * matrix_data[0x30] + matrix_data[0x3c];
        matrix_data[0x11] = depth_scale * matrix_data[0x31] + matrix_data[0x3d];
        matrix_data[0x12] = depth_scale * matrix_data[0x32] + matrix_data[0x3e];
        matrix_data[0x13] = 3.4028235e+38f;  // FLT_MAX
        
        depth_scale = matrix_data[0x46];
        matrix_data[8] = matrix_data[0x3c] - depth_scale * matrix_data[0x38];
        matrix_data[9] = matrix_data[0x3d] - depth_scale * matrix_data[0x39];
        matrix_data[10] = matrix_data[0x3e] - depth_scale * matrix_data[0x3a];
        matrix_data[0xb] = 3.4028235e+38f;  // FLT_MAX
        
        depth_scale = matrix_data[0x45];
        *matrix_data = matrix_data[0x3c] - depth_scale * matrix_data[0x38];
        matrix_data[1] = matrix_data[0x3d] - depth_scale * matrix_data[0x39];
        matrix_data[2] = matrix_data[0x3e] - depth_scale * matrix_data[0x3a];
        matrix_data[3] = 3.4028235e+38f;  // FLT_MAX
        
        matrix_data[0x24] = -matrix_data[0x34];
        matrix_data[0x25] = -matrix_data[0x35];
        matrix_data[0x26] = -matrix_data[0x36];
        matrix_data[0x27] = 3.4028235e+38f;  // FLT_MAX
        
        *(uint64_t *)(matrix_data + 0x2c) = *(uint64_t *)(matrix_data + 0x34);
        *(uint64_t *)(matrix_data + 0x2e) = *(uint64_t *)(matrix_data + 0x36);
        
        matrix_data[0x1c] = -matrix_data[0x30];
        matrix_data[0x1d] = -matrix_data[0x31];
        matrix_data[0x1e] = -matrix_data[0x32];
        matrix_data[0x1f] = 3.4028235e+38f;  // FLT_MAX
        
        *(uint64_t *)(matrix_data + 0x14) = *(uint64_t *)(matrix_data + 0x30);
        *(uint64_t *)(matrix_data + 0x16) = *(uint64_t *)(matrix_data + 0x32);
        
        *(uint64_t *)(matrix_data + 0xc) = *(uint64_t *)(matrix_data + 0x38);
        *(uint64_t *)(matrix_data + 0xe) = *(uint64_t *)(matrix_data + 0x3a);
        
        focal_length = matrix_data[0x38];
        proj_scale = matrix_data[0x39];
        depth_scale = matrix_data[0x3a];
    }
    else {
        // 透视投影模式
        *(uint64_t *)(matrix_data + 0x20) = *(uint64_t *)(matrix_data + 0x3c);
        *(uint64_t *)(matrix_data + 0x22) = *(uint64_t *)(matrix_data + 0x3e);
        *(uint64_t *)(matrix_data + 0x28) = *(uint64_t *)(matrix_data + 0x3c);
        *(uint64_t *)(matrix_data + 0x2a) = *(uint64_t *)(matrix_data + 0x3e);
        *(uint64_t *)(matrix_data + 0x18) = *(uint64_t *)(matrix_data + 0x3c);
        *(uint64_t *)(matrix_data + 0x1a) = *(uint64_t *)(matrix_data + 0x3e);
        *(uint64_t *)(matrix_data + 0x10) = *(uint64_t *)(matrix_data + 0x3c);
        *(uint64_t *)(matrix_data + 0x12) = *(uint64_t *)(matrix_data + 0x3e);
        
        depth_scale = matrix_data[0x45];
        focal_length = matrix_data[0x43];
        matrix_data[0x24] = -(depth_scale * matrix_data[0x34]) - focal_length * matrix_data[0x38];
        matrix_data[0x25] = -(depth_scale * matrix_data[0x35]) - focal_length * matrix_data[0x39];
        matrix_data[0x26] = -(depth_scale * matrix_data[0x36]) - focal_length * matrix_data[0x3a];
        matrix_data[0x27] = 3.4028235e+38f;  // FLT_MAX
        
        depth_scale = matrix_data[0x45];
        focal_length = matrix_data[0x44];
        matrix_data[0x2c] = focal_length * matrix_data[0x38] + depth_scale * matrix_data[0x34];
        matrix_data[0x2d] = focal_length * matrix_data[0x39] + depth_scale * matrix_data[0x35];
        matrix_data[0x2e] = focal_length * matrix_data[0x3a] + depth_scale * matrix_data[0x36];
        matrix_data[0x2f] = 3.4028235e+38f;  // FLT_MAX
        
        depth_scale = matrix_data[0x45];
        focal_length = matrix_data[0x42];
        matrix_data[0x1c] = -(depth_scale * matrix_data[0x30]) - focal_length * matrix_data[0x38];
        matrix_data[0x1d] = -(depth_scale * matrix_data[0x31]) - focal_length * matrix_data[0x39];
        matrix_data[0x1e] = -(depth_scale * matrix_data[0x32]) - focal_length * matrix_data[0x3a];
        matrix_data[0x1f] = 3.4028235e+38f;  // FLT_MAX
        
        depth_scale = matrix_data[0x45];
        focal_length = matrix_data[0x41];
        matrix_data[0x14] = focal_length * matrix_data[0x38] + depth_scale * matrix_data[0x30];
        matrix_data[0x15] = depth_scale * matrix_data[0x31] + focal_length * matrix_data[0x39];
        matrix_data[0x16] = focal_length * matrix_data[0x3a] + depth_scale * matrix_data[0x32];
        matrix_data[0x17] = 3.4028235e+38f;  // FLT_MAX
        
        // 归一化处理
        proj_scale = matrix_data[0x25];
        focal_length = matrix_data[0x24];
        aspect_scale = matrix_data[0x26];
        depth_scale = focal_length * focal_length + proj_scale * proj_scale + aspect_scale * aspect_scale;
        
        aspect_scale = 1.0f / sqrtf(depth_scale);
        depth_scale = aspect_scale * 0.5f * (3.0f - depth_scale * aspect_scale * aspect_scale);
        
        matrix_data[0x24] = focal_length * depth_scale;
        matrix_data[0x25] = proj_scale * depth_scale;
        matrix_data[0x26] = aspect_scale * depth_scale;
        
        proj_scale = matrix_data[0x2d];
        focal_length = matrix_data[0x2c];
        aspect_scale = matrix_data[0x2e];
        depth_scale = focal_length * focal_length + proj_scale * proj_scale + aspect_scale * aspect_scale;
        
        aspect_scale = 1.0f / sqrtf(depth_scale);
        depth_scale = aspect_scale * 0.5f * (3.0f - depth_scale * aspect_scale * aspect_scale);
        
        matrix_data[0x2c] = focal_length * depth_scale;
        matrix_data[0x2d] = proj_scale * depth_scale;
        matrix_data[0x2e] = aspect_scale * depth_scale;
        
        proj_scale = matrix_data[0x1d];
        focal_length = matrix_data[0x1c];
        aspect_scale = matrix_data[0x1e];
        depth_scale = focal_length * focal_length + proj_scale * proj_scale + aspect_scale * aspect_scale;
        
        aspect_scale = 1.0f / sqrtf(depth_scale);
        depth_scale = aspect_scale * 0.5f * (3.0f - depth_scale * aspect_scale * aspect_scale);
        
        matrix_data[0x1c] = focal_length * depth_scale;
        matrix_data[0x1d] = proj_scale * depth_scale;
        matrix_data[0x1e] = aspect_scale * depth_scale;
        
        proj_scale = matrix_data[0x15];
        focal_length = matrix_data[0x14];
        aspect_scale = matrix_data[0x16];
        depth_scale = focal_length * focal_length + proj_scale * proj_scale + aspect_scale * aspect_scale;
        
        aspect_scale = 1.0f / sqrtf(depth_scale);
        depth_scale = aspect_scale * 0.5f * (3.0f - depth_scale * aspect_scale * aspect_scale);
        
        matrix_data[0x14] = focal_length * depth_scale;
        matrix_data[0x15] = proj_scale * depth_scale;
        matrix_data[0x16] = aspect_scale * depth_scale;
        
        // 设置近平面和远平面
        depth_scale = matrix_data[0x46];
        matrix_data[8] = matrix_data[0x3c] - depth_scale * matrix_data[0x38];
        matrix_data[9] = matrix_data[0x3d] - depth_scale * matrix_data[0x39];
        matrix_data[10] = matrix_data[0x3e] - depth_scale * matrix_data[0x3a];
        matrix_data[0xb] = 3.4028235e+38f;  // FLT_MAX
        
        depth_scale = matrix_data[0x45];
        *matrix_data = matrix_data[0x3c] - depth_scale * matrix_data[0x38];
        matrix_data[1] = matrix_data[0x3d] - depth_scale * matrix_data[0x39];
        matrix_data[2] = matrix_data[0x3e] - depth_scale * matrix_data[0x3a];
        matrix_data[3] = 3.4028235e+38f;  // FLT_MAX
        
        *(uint64_t *)(matrix_data + 0xc) = *(uint64_t *)(matrix_data + 0x38);
        *(uint64_t *)(matrix_data + 0xe) = *(uint64_t *)(matrix_data + 0x3a);
        
        focal_length = matrix_data[0x38];
        proj_scale = matrix_data[0x39];
        depth_scale = matrix_data[0x3a];
    }
    
    // 设置投影矩阵的深度部分
    matrix_data[4] = -focal_length;
    matrix_data[5] = -proj_scale;
    matrix_data[6] = -depth_scale;
    matrix_data[7] = 3.4028235e+38f;  // FLT_MAX
}

// 函数：渲染矩阵数据提取
// 从渲染上下文中提取矩阵数据并进行处理
uint64_t * extract_render_matrix(int64_t render_context, uint64_t *matrix_output)
{
    float depth_offset;
    uint32_t temp_data1;
    uint32_t temp_data2;
    uint32_t temp_data3;
    uint32_t temp_data4;
    uint64_t temp_value;
    uint64_t *matrix_source;
    uint8_t temp_buffer[72];
    
    // 检查是否使用自定义矩阵
    if (*(uint8_t *)(render_context + 0x124) == 0) {
        matrix_source = (uint64_t *)(render_context + 0xc0);
    }
    else {
        // 从渲染上下文提取矩阵数据
        temp_value = *(uint64_t *)(render_context + 200);
        *matrix_output = *(uint64_t *)(render_context + 0xc0);
        matrix_output[1] = temp_value;
        
        temp_value = *(uint64_t *)(render_context + 0xd8);
        matrix_output[2] = *(uint64_t *)(render_context + 0xd0);
        matrix_output[3] = temp_value;
        
        temp_value = *(uint64_t *)(render_context + 0xe8);
        matrix_output[4] = *(uint64_t *)(render_context + 0xe0);
        matrix_output[5] = temp_value;
        
        depth_offset = *(float *)(render_context + 0xf0);
        temp_data1 = *(uint32_t *)(render_context + 0xf4);
        temp_data2 = *(uint32_t *)(render_context + 0xf8);
        temp_data3 = *(uint32_t *)(render_context + 0xfc);
        
        *(float *)(matrix_output + 6) = depth_offset;
        *(uint32_t *)((int64_t)matrix_output + 0x34) = temp_data1;
        *(uint32_t *)(matrix_output + 7) = temp_data2;
        *(uint32_t *)((int64_t)matrix_output + 0x3c) = temp_data3;
        
        // 应用深度偏移
        *(float *)(matrix_output + 6) = depth_offset + *(float *)(render_context + 0x128);
        *(float *)((int64_t)matrix_output + 0x34) = 
             *(float *)(render_context + 300) + *(float *)((int64_t)matrix_output + 0x34);
        *(float *)(matrix_output + 7) = *(float *)(render_context + 0x130) + *(float *)(matrix_output + 7);
        
        matrix_source = matrix_output;
    }
    
    // 处理矩阵数据
    matrix_source = (uint64_t *)process_matrix_data(matrix_source, temp_buffer);
    
    // 将处理后的数据复制到输出
    temp_value = matrix_source[1];
    *matrix_output = *matrix_source;
    matrix_output[1] = temp_value;
    
    temp_value = matrix_source[3];
    matrix_output[2] = matrix_source[2];
    matrix_output[3] = temp_value;
    
    temp_value = matrix_source[5];
    matrix_output[4] = matrix_source[4];
    matrix_output[5] = temp_value;
    
    temp_value = matrix_source[7];
    matrix_output[6] = matrix_source[6];
    matrix_output[7] = temp_value;
    
    // 重置矩阵的其他部分
    *(uint32_t *)((int64_t)matrix_output + 0xc) = 0;
    *(uint32_t *)((int64_t)matrix_output + 0x1c) = 0;
    *(uint32_t *)((int64_t)matrix_output + 0x2c) = 0;
    *(uint32_t *)((int64_t)matrix_output + 0x3c) = 0x3f800000;  // 1.0f
    
    return matrix_output;
}

// 函数：计算视图矩阵
// 根据相机位置和方向计算视图矩阵
void calculate_view_matrix(int64_t render_context, float *camera_position, float *camera_target, float *camera_up)
{
    uint64_t temp_data;
    float forward_x;
    float forward_y;
    float forward_z;
    float forward_length;
    float inverse_length;
    float right_x;
    float right_y;
    float right_z;
    float right_length;
    float up_x;
    float up_y;
    float up_z;
    float up_length;
    float temp_buffer[16];
    float view_x;
    float view_y;
    float view_z;
    
    // 计算前进向量
    forward_x = *camera_target - *camera_position;
    forward_y = camera_target[1] - camera_position[1];
    forward_z = camera_target[2] - camera_position[2];
    forward_length = forward_y * forward_y + forward_x * forward_x + forward_z * forward_z;
    
    inverse_length = 1.0f / sqrtf(forward_length);
    forward_length = inverse_length * 0.5f * (3.0f - forward_length * inverse_length * inverse_length);
    
    forward_z = forward_z * forward_length;
    forward_x = forward_length * forward_x;
    forward_length = forward_length * forward_y;
    
    // 计算右向量（前进向量与上向量的叉积）
    view_x = forward_x * camera_up[1] - *camera_up * forward_length;
    view_z = forward_length * camera_up[2] - forward_z * camera_up[1];
    view_y = forward_z * *camera_up - forward_x * camera_up[2];
    
    right_length = view_z * view_z + view_y * view_y + view_x * view_x;
    inverse_length = 1.0f / sqrtf(right_length);
    right_length = inverse_length * 0.5f * (3.0f - right_length * inverse_length * inverse_length);
    
    view_z = view_z * right_length;
    view_y = view_y * right_length;
    view_x = view_x * right_length;
    
    // 计算上向量（右向量与前进向量的叉积）
    up_x = view_y * forward_z - view_x * forward_length;
    up_y = view_x * forward_x - view_z * forward_z;
    up_z = view_z * forward_length - view_y * forward_x;
    
    up_length = up_x * up_x + up_y * up_y + up_z * up_z;
    inverse_length = 1.0f / sqrtf(up_length);
    up_length = inverse_length * 0.5f * (3.0f - up_length * inverse_length * inverse_length);
    
    // 设置视图矩阵数据
    *(float *)(render_context + 0xc0) = view_z;
    *(float *)(render_context + 0xc4) = view_y;
    *(float *)(render_context + 200) = view_x;
    *(uint32_t *)(render_context + 0xcc) = 0x7f7fffff;  // FLT_MAX
    
    *(float *)(render_context + 0xe0) = -forward_x;
    *(float *)(render_context + 0xe4) = -forward_length;
    *(float *)(render_context + 0xe8) = -forward_z;
    *(uint32_t *)(render_context + 0xec) = 0x7f7fffff;  // FLT_MAX
    
    temp_data = *(uint64_t *)(camera_position + 2);
    *(uint64_t *)(render_context + 0xf0) = *(uint64_t *)camera_position;
    *(uint64_t *)(render_context + 0xf8) = temp_data;
    
    *(float *)(render_context + 0xd0) = up_x * up_length;
    *(float *)(render_context + 0xd4) = up_y * up_length;
    *(float *)(render_context + 0xd8) = up_z * up_length;
    *(uint32_t *)(render_context + 0xdc) = 0x7f7fffff;  // FLT_MAX
    
    // 重置其他矩阵参数
    *(uint32_t *)(render_context + 0xcc) = 0;
    *(uint32_t *)(render_context + 0xdc) = 0;
    *(uint32_t *)(render_context + 0xec) = 0;
    *(uint32_t *)(render_context + 0xfc) = 0x3f800000;  // 1.0f
}

// 函数：屏幕坐标转换
// 将3D世界坐标转换为屏幕坐标
float * world_to_screen(int64_t render_context, float *world_position, float *screen_position)
{
    float camera_x;
    float camera_y;
    float camera_z;
    float view_x;
    float view_y;
    float view_z;
    float projection_x;
    float projection_y;
    float projection_z;
    
    // 获取相机位置
    camera_y = world_position[1] - *(float *)(render_context + 0xf4);
    camera_z = *world_position - *(float *)(render_context + 0xf0);
    camera_x = world_position[2] - *(float *)(render_context + 0xf8);
    
    // 应用视图变换
    projection_x = *(float *)(render_context + 0xc4) * camera_y + 
                   *(float *)(render_context + 0xc0) * camera_z +
                   *(float *)(render_context + 200) * camera_x;
    
    projection_y = *(float *)(render_context + 0xd4) * camera_y + 
                   *(float *)(render_context + 0xd0) * camera_z +
                   *(float *)(render_context + 0xd8) * camera_x;
    
    camera_y = *(float *)(render_context + 0xe4) * camera_y + 
               *(float *)(render_context + 0xe0) * camera_z +
               *(float *)(render_context + 0xe8) * camera_x;
    
    // 应用深度偏移
    if (*(uint8_t *)(render_context + 0x100) == 0) {
        projection_x = projection_x - *(float *)(render_context + 0x104);
        camera_z = (-camera_y - *(float *)(render_context + 0x114)) /
                   (*(float *)(render_context + 0x118) - *(float *)(render_context + 0x114));
        camera_y = (projection_y - *(float *)(render_context + 0x110)) /
                   (*(float *)(render_context + 0x10c) - *(float *)(render_context + 0x110));
        camera_y = *(float *)(render_context + 0x108) - *(float *)(render_context + 0x104);
    }
    else {
        camera_x = *(float *)(render_context + 0x114);
        camera_z = (-camera_y - camera_x) / (*(float *)(render_context + 0x118) - camera_x);
        camera_y = (-(camera_x * projection_y * (1.0f / camera_y)) - *(float *)(render_context + 0x110)) /
                   (*(float *)(render_context + 0x10c) - *(float *)(render_context + 0x110));
        projection_x = -(camera_x * projection_x * (1.0f / camera_y)) - *(float *)(render_context + 0x104);
        camera_y = *(float *)(render_context + 0x108) - *(float *)(render_context + 0x104);
    }
    
    // 计算屏幕坐标
    *screen_position = projection_x / camera_y;
    screen_position[1] = camera_y;
    screen_position[2] = camera_z;
    
    return screen_position;
}

// 函数：视锥体裁剪测试
// 测试一个点是否在视锥体内
void frustum_cull_test(int64_t render_context, float *near_point, float *far_point, float *cull_result, float *depth_value)
{
    float near_distance;
    float far_distance;
    float near_x;
    float near_y;
    float near_z;
    float far_x;
    float far_y;
    float far_z;
    float near_scale;
    float far_scale;
    float near_proj_x;
    float near_proj_y;
    float near_proj_z;
    float near_proj_w;
    float far_proj_x;
    float far_proj_y;
    float far_proj_z;
    float far_proj_w;
    float near_length;
    float far_length;
    
    // 获取近平面和远平面距离
    near_length = *(float *)(render_context + 0x118);
    far_distance = *depth_value;
    near_distance = near_length;
    
    // 确保深度值在有效范围内
    if ((0.0f < far_distance) && (near_distance = far_distance, near_length <= far_distance)) {
        near_distance = near_length;
    }
    
    far_length = -*(float *)(render_context + 0x114);
    
    // 计算近平面和远平面的缩放因子
    near_scale = (*(float *)(render_context + 0x108) - *(float *)(render_context + 0x104)) * *cull_result +
                *(float *)(render_context + 0x104);
    
    far_scale = (*(float *)(render_context + 0x10c) - *(float *)(render_context + 0x110)) * cull_result[1] +
                *(float *)(render_context + 0x110);
    
    near_distance = far_scale;
    far_distance = near_scale;
    
    // 根据投影模式调整缩放因子
    if (*(uint8_t *)(render_context + 0x100) != 0) {
        far_distance = 1.0f / *(float *)(render_context + 0x114);
        near_distance = near_scale * near_distance * far_distance;
        far_distance = far_scale * near_distance * far_distance;
    }
    
    // 获取视图矩阵数据
    near_x = *(float *)(render_context + 0xd4);
    near_y = *(float *)(render_context + 0xd8);
    near_z = *(float *)(render_context + 0xdc);
    near_distance = -near_distance;
    
    far_x = *(float *)(render_context + 0xc4);
    far_y = *(float *)(render_context + 200);
    far_z = *(float *)(render_context + 0xcc);
    
    near_scale = *(float *)(render_context + 0xe4);
    far_scale = *(float *)(render_context + 0xe8);
    far_length = *(float *)(render_context + 0xec);
    
    near_proj_x = *(float *)(render_context + 0xf4);
    near_proj_y = *(float *)(render_context + 0xf8);
    near_proj_z = *(float *)(render_context + 0xfc);
    
    // 计算近平面投影坐标
    *near_point = *(float *)(render_context + 0xd0) * far_scale + 
                  *(float *)(render_context + 0xc0) * near_scale +
                  *(float *)(render_context + 0xe0) * far_length +
                  *(float *)(render_context + 0xf0);
    
    near_point[1] = near_x * far_scale + far_x * near_scale + near_scale * far_length + near_proj_x;
    near_point[2] = near_y * far_scale + far_y * near_scale + far_scale * far_length + near_proj_y;
    near_point[3] = near_z * far_scale + far_z * near_scale + far_length * far_length + near_proj_z;
    
    // 计算远平面投影坐标
    far_x = *(float *)(render_context + 0xd4);
    far_y = *(float *)(render_context + 0xd8);
    far_z = *(float *)(render_context + 0xdc);
    
    near_x = *(float *)(render_context + 0xc4);
    far_scale = *(float *)(render_context + 200);
    far_length = *(float *)(render_context + 0xcc);
    
    near_scale = *(float *)(render_context + 0xe4);
    far_distance = *(float *)(render_context + 0xe8);
    far_length = *(float *)(render_context + 0xec);
    
    near_proj_x = *(float *)(render_context + 0xf4);
    near_proj_y = *(float *)(render_context + 0xf8);
    near_proj_z = *(float *)(render_context + 0xfc);
    
    *far_point = *(float *)(render_context + 0xd0) * far_distance + 
                 *(float *)(render_context + 0xc0) * near_distance +
                 *(float *)(render_context + 0xe0) * near_distance +
                 *(float *)(render_context + 0xf0);
    
    far_point[1] = far_x * far_distance + near_x * near_distance + near_scale * near_distance + near_proj_x;
    far_point[2] = far_y * far_distance + far_scale * near_distance + far_distance * near_distance + near_proj_y;
    far_point[3] = far_z * far_distance + far_length * near_distance + far_length * near_distance + near_proj_z;
}

// 警告：以'_'开头的全局变量与同一地址的较小符号重叠