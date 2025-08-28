#include "TaleWorlds.Native.Split.h"

// =============================================================================
// 渲染系统高级数据处理和向量计算模块
// =============================================================================

// 常量定义
#define RENDERING_DATA_BLOCK_SIZE 0x100    // 渲染数据块大小 (256字节)
#define RENDERING_VECTOR_EPSILON 0.5f      // 向量计算精度阈值
#define RENDERING_NORMALIZATION_FACTOR 3.0f // 归一化因子
#define RENDERING_HALF_FACTOR 0.5f         // 半因子常量

// 全局变量声明
extern void *g_rendering_memory_pool;      // 渲染内存池指针
extern char g_rendering_context_flag;      // 渲染上下文标志

// 函数别名定义
#define rendering_system_process_data_queue FUN_180310a00
#define rendering_system_normalize_vector_2d FUN_180310ad0

// =============================================================================
// 渲染系统数据队列处理函数
// =============================================================================

/**
 * 渲染系统数据队列处理器
 * 
 * 该函数负责处理渲染系统中的数据队列操作，包括：
 * - 数据块的快速插入和队列管理
 * - 内存池的动态分配和扩展
 * - 队列溢出检测和处理
 * - 渲染数据的高效批量处理
 * 
 * @param queue_handle 队列句柄指针，包含队列状态和管理信息
 * @param data_block 数据块指针，包含要处理的渲染数据
 * 
 * 队列句柄结构说明：
 * - queue_handle[0]: 队列基础指针
 * - queue_handle[1]: 队列容量信息
 * - queue_handle[6]: 当前写入位置指针
 * - queue_handle[7]: 队列起始位置
 * - queue_handle[8]: 队列结束位置
 * - queue_handle[9]: 数据块分配位置
 * - queue_handle[10]: 上下文标志位
 */
void rendering_system_process_data_queue(long long *queue_handle, unsigned long long *data_block)
{
    unsigned long long *write_position;    // 当前写入位置指针
    long long allocation_position;         // 数据块分配位置
    unsigned long long data_value_1;       // 数据值1
    unsigned long long data_value_2;       // 数据值2
    unsigned long long new_block_address;  // 新数据块地址
    
    // 获取当前写入位置
    write_position = (unsigned long long *)queue_handle[6];
    
    // 检查是否有足够空间写入数据（2个单位）
    if (write_position + 2 != (unsigned long long *)queue_handle[8]) {
        // 空间充足，直接写入数据
        queue_handle[6] = (long long)(write_position + 2);
        data_value_1 = data_block[1];
        *write_position = *data_block;
        write_position[1] = data_value_1;
        return;
    }
    
    // 队列空间不足，需要分配新块
    data_value_1 = *data_block;
    data_value_2 = data_block[1];
    
    // 检查是否需要扩展队列容量
    if (queue_handle[1] <= (queue_handle[9] - *queue_handle >> 3) + 1) {
        // 调用队列扩展函数
        FUN_1801ee9c0(queue_handle, 1, 1);
    }
    
    // 从内存池分配新的数据块
    new_block_address = CoreEngine_MemoryAllocator(g_rendering_memory_pool, RENDERING_DATA_BLOCK_SIZE, (char)queue_handle[10]);
    
    // 设置新数据块的链接
    *(unsigned long long *)(queue_handle[9] + 8) = new_block_address;
    write_position = (unsigned long long *)queue_handle[6];
    *write_position = data_value_1;
    write_position[1] = data_value_2;
    
    // 更新队列状态信息
    allocation_position = queue_handle[9];
    queue_handle[9] = allocation_position + 8;
    allocation_position = *(long long *)(allocation_position + 8);
    queue_handle[7] = allocation_position;
    queue_handle[8] = allocation_position + RENDERING_DATA_BLOCK_SIZE;
    queue_handle[6] = allocation_position;
    
    return;
}

// =============================================================================
// 渲染系统二维向量归一化函数
// =============================================================================

/**
 * 渲染系统二维向量归一化处理器
 * 
 * 该函数对二维向量进行归一化处理，使用快速倒数平方根算法：
 * - 计算向量的长度（模）
 * - 使用SIMD指令进行快速倒数平方根计算
 * - 应用牛顿迭代法提高精度
 * - 归一化向量分量并返回长度信息
 * 
 * @param vector_2d 二维向量指针，包含X和Y分量
 * @return unsigned long long 包含归一化因子的组合值：
 *         - 高32位: 0x3f000000 (浮点数0.5的表示)
 *         - 低32位: 归一化后的向量长度
 * 
 * 算法特点：
 * - 使用rsqrtss指令进行快速倒数平方根计算
 * - 应用牛顿迭代法：result = 0.5 * (3.0 - length * result * result)
 * - 保证数值稳定性和计算精度
 */
unsigned long long rendering_system_normalize_vector_2d(float *vector_2d)
{
    float vector_x;                    // 向量X分量
    float vector_y;                    // 向量Y分量
    unsigned char simd_result[16];     // SIMD计算结果缓冲区
    float normalization_factor;        // 归一化因子
    float vector_length_squared;       // 向量长度的平方
    
    // 提取向量分量
    vector_x = *vector_2d;
    vector_y = vector_2d[1];
    
    // 计算向量长度的平方 (x² + y²)
    vector_length_squared = vector_x * vector_x + vector_y * vector_y;
    
    // 使用SIMD指令计算快速倒数平方根
    // rsqrtss: 计算单精度浮点数的倒数平方根
    simd_result = rsqrtss(ZEXT416((unsigned int)vector_length_squared), 
                         ZEXT416((unsigned int)vector_length_squared));
    
    // 提取SIMD计算结果
    normalization_factor = simd_result._0_4_;
    
    // 应用牛顿迭代法提高精度
    // 公式: factor = 0.5 * (3.0 - length * factor * factor)
    normalization_factor = normalization_factor * RENDERING_HALF_FACTOR * 
                          (RENDERING_NORMALIZATION_FACTOR - vector_length_squared * 
                           normalization_factor * normalization_factor);
    
    // 归一化向量分量
    vector_2d[1] = vector_y * normalization_factor;
    *vector_2d = vector_x * normalization_factor;
    
    // 返回组合结果：高32位为0.5，低32位为归一化后的长度
    return CONCAT44(0x3f000000, normalization_factor * vector_length_squared);
}

// =============================================================================
// 模块说明
// =============================================================================

/*
 * 渲染系统高级数据处理和向量计算模块功能说明：
 * 
 * 主要功能：
 * 1. 数据队列处理：高效的渲染数据队列管理，支持动态扩展和批量处理
 * 2. 向量归一化：快速二维向量归一化，使用SIMD指令优化性能
 * 
 * 性能特点：
 * - 使用SIMD指令加速向量计算
 * - 动态内存管理，避免频繁的内存分配
 * - 批量数据处理，提高渲染效率
 * 
 * 应用场景：
 * - 渲染管线中的数据预处理
 * - 几何变换的向量计算
 * - 实时渲染系统的数据处理
 * 
 * 优化策略：
 * - 快速倒数平方根算法减少计算开销
 * - 内存池技术提高内存使用效率
 * - 队列机制保证数据处理的顺序性
 */