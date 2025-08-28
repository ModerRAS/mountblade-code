#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part166_sub002.c - 向量数学计算模块

/**
 * 空函数 - 可能是预留的初始化函数
 * 原函数名: FUN_18015036a
 */
void empty_function(void) {
    return;
}

/**
 * 3D向量标准化函数
 * 将输入的3D向量标准化并存储到输出向量中
 * 使用快速平方根倒数算法进行优化
 * 
 * @param input_vector 输入向量数组 (x, y, z, w)
 * @param output_vector 输出向量数组 (x, y, z, w)
 * @return 返回输出向量指针
 * 
 * 原函数名: FUN_1801503e0
 */
float* normalize_vector_3d(float* input_vector, float* output_vector) {
    float x, y, z, w;
    float length_squared;
    float inverse_sqrt;
    float normalized_factor;
    union {
        float f;
        unsigned int u;
    } temp_union;
    
    // 提取向量分量
    x = input_vector[0];
    y = input_vector[1];
    z = input_vector[2];
    w = input_vector[3];
    
    // 复制原始向量到输出
    output_vector[0] = x;
    output_vector[1] = y;
    output_vector[2] = z;
    output_vector[3] = w;
    
    // 计算向量长度的平方 (x² + y² + z²)
    length_squared = x * x + y * y + z * z;
    
    // 使用SIMD指令计算平方根倒数
    temp_union.u = rsqrtss(*(unsigned int*)&length_squared, *(unsigned int*)&length_squared);
    inverse_sqrt = temp_union.f;
    
    // 使用牛顿迭代法提高精度
    normalized_factor = inverse_sqrt * 0.5f * (3.0f - length_squared * inverse_sqrt * inverse_sqrt);
    
    // 应用标准化因子到输出向量
    output_vector[0] = x * normalized_factor;
    output_vector[1] = y * normalized_factor;
    output_vector[2] = z * normalized_factor;
    
    return output_vector;
}

// 警告: 以'_'开头的全局变量与同一地址的较小符号重叠




