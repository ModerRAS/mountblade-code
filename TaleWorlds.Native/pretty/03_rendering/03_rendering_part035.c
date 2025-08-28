#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 03_rendering_part035.c - 渲染系统高级矩阵变换和边界计算模块
// 包含6个核心函数，涵盖矩阵变换、边界计算、内存管理和异常处理等功能

/* 常量定义 */
#define MAX_FLOAT_VALUE 3.4028235e+38f
#define MIN_FLOAT_VALUE -3.4028235e+38f
#define FLOAT_INFINITY 0x7f7fffff
#define MATRIX_SIZE_4X4 16
#define VECTOR_SIZE_3 3
#define VECTOR_SIZE_4 4
#define BOUNDING_BOX_SIZE 8
#define ALLOCATION_ALIGNMENT 16
#define SMALL_POOL_SIZE 0x400
#define LARGE_POOL_SIZE 0x200
#define HASH_TABLE_SIZE 0xf

/* 函数别名定义 */
#define transform_bounding_box_with_matrix FUN_180287610
#define calculate_point_at_distance FUN_1802879b0
#define transform_vector_by_matrix FUN_180287b30
#define initialize_rendering_pool FUN_180287d30
#define set_rendering_state FUN_180287ed0
#define create_exception_data FUN_180287f20
#define create_runtime_exception FUN_180287f70
#define create_string_exception FUN_180287fc0

/**
 * 使用变换矩阵变换边界框
 * @param render_context 渲染上下文指针
 * @param matrix_ptr 4x4变换矩阵指针
 * @param bounding_box_ptr 边界框数据指针
 */
void transform_bounding_box_with_matrix(longlong render_context, float *matrix_ptr, float *bounding_box_ptr)
{
    float min_x, max_x, min_y, max_y, min_z, max_z;
    float temp_x, temp_y, temp_z;
    float bounding_values[8];
    float *current_point;
    longlong point_count;
    float center_x, center_y, center_z;
    float radius, extent_x, extent_y, extent_z;
    float matrix_row1[4], matrix_row2[4], matrix_row3[4], matrix_row4[4];
    uint64_t matrix_part1, matrix_part2;
    int8_t stack_data[44];
    int32_t stack_value;
    float transform_matrix[12];
    float bounding_center[3];
    ulonglong stack_guard;
    
    // 栈保护初始化
    stack_guard = GET_SECURITY_COOKIE() ^ (ulonglong)stack_data;
    
    // 提取矩阵数据
    transform_matrix[0] = matrix_ptr[0];  // 第一行第一列
    transform_matrix[1] = matrix_ptr[1];  // 第一行第二列
    matrix_part1 = *(uint64_t *)matrix_ptr;
    transform_matrix[2] = matrix_ptr[2];  // 第一行第三列
    transform_matrix[3] = matrix_ptr[3];  // 第一行第四列
    matrix_part2 = *(uint64_t *)(matrix_ptr + 2);
    
    // 初始化边界框顶点处理指针
    current_point = bounding_values + 2;
    
    // 提取矩阵其他行数据
    matrix_row1[0] = matrix_ptr[4];   // 第二行第一列
    matrix_row1[1] = matrix_ptr[5];   // 第二行第二列
    matrix_row1[2] = matrix_ptr[6];   // 第二行第三列
    matrix_row1[3] = matrix_ptr[7];   // 第二行第四列
    
    // 从边界框数据提取中心点
    center_x = bounding_box_ptr[0];
    center_y = bounding_box_ptr[1];
    center_z = bounding_box_ptr[2];
    bounding_values[4] = bounding_box_ptr[4];
    bounding_values[5] = bounding_box_ptr[5];
    bounding_values[6] = bounding_box_ptr[6];
    bounding_values[7] = bounding_box_ptr[7];
    
    // 初始化最小最大值
    min_x = MAX_FLOAT_VALUE;
    max_x = MIN_FLOAT_VALUE;
    min_y = MAX_FLOAT_VALUE;
    max_y = MIN_FLOAT_VALUE;
    min_z = MIN_FLOAT_VALUE;
    max_z = MAX_FLOAT_VALUE;
    
    // 设置边界值数组
    bounding_values[0] = center_x;
    bounding_values[2] = center_z;
    bounding_values[5] = bounding_box_ptr[5];
    bounding_values[6] = center_z;
    
    // 临时存储矩阵行数据
    matrix_row2[0] = center_x;
    matrix_row2[1] = bounding_box_ptr[5];
    matrix_row2[2] = center_z;
    matrix_row2[3] = bounding_values[4];
    
    matrix_row3[0] = center_x;
    matrix_row3[1] = center_y;
    matrix_row3[2] = bounding_box_ptr[6];
    matrix_row3[3] = bounding_values[4];
    
    matrix_row4[0] = center_x;
    matrix_row4[1] = center_y;
    matrix_row4[2] = center_z;
    matrix_row4[3] = bounding_values[4];
    
    // 变换边界框的8个顶点
    point_count = 8;
    do {
        // 获取当前顶点坐标
        temp_x = current_point[-2];
        temp_y = current_point[-1];
        temp_z = *current_point;
        
        // 应用矩阵变换
        float transformed_x = temp_x * transform_matrix[0] + temp_y * transform_matrix[1] + temp_z * transform_matrix[2];
        current_point[-2] = transformed_x;
        
        float transformed_y = temp_x * matrix_row1[0] + temp_y * matrix_row1[1] + temp_z * matrix_row1[2];
        current_point[-1] = transformed_y;
        
        float transformed_z = temp_x * bounding_values[4] + temp_y * bounding_values[5] + temp_z * bounding_values[6];
        *current_point = transformed_z;
        
        // 计算第四个分量（齐次坐标）
        current_point[1] = temp_x * bounding_values[7] + temp_y * bounding_values[7] + temp_z * bounding_values[7];
        
        // 更新边界框最小最大值
        if (transformed_x <= max_z) {
            max_z = transformed_x;
        }
        
        temp_y = current_point[-1];
        if (temp_y <= min_x) {
            min_x = temp_y;
        }
        
        temp_z = *current_point;
        if (temp_z <= min_y) {
            min_y = temp_z;
        }
        
        if (max_x <= transformed_x) {
            max_x = transformed_x;
        }
        
        if (max_y <= temp_y) {
            max_y = temp_y;
        }
        
        if (min_z <= temp_z) {
            min_z = temp_z;
        }
        
        // 移动到下一个顶点
        current_point = current_point + 4;
        point_count = point_count - 1;
    } while (point_count != 0);
    
    // 计算边界框半径和范围
    float box_width = bounding_box_ptr[4] - center_x;
    float box_height = bounding_box_ptr[5] - center_y;
    float box_depth = bounding_box_ptr[6] - center_z;
    
    extent_x = (max_x - max_z) * 0.5f;
    extent_y = (max_y - min_x) * 0.5f;
    radius = SQRT((box_height - bounding_box_ptr[1]) * (box_height - bounding_box_ptr[1]) + 
             box_width * box_width + (box_depth - center_z) * (box_depth - center_z));
    radius = radius * 0.5f;
    
    // 提取矩阵变换部分
    float matrix_transform_x = matrix_ptr[8];
    float matrix_transform_y = matrix_ptr[9];
    float matrix_transform_z = matrix_ptr[10];
    
    // 存储变换后的矩阵数据到渲染上下文
    *(uint64_t *)(render_context + 0xc0) = matrix_part1;
    *(uint64_t *)(render_context + 200) = matrix_part2;
    *(float *)(render_context + 0xd0) = matrix_row1[0];
    *(float *)(render_context + 0xd4) = matrix_row1[1];
    *(float *)(render_context + 0xd8) = matrix_row1[2];
    *(float *)(render_context + 0xdc) = matrix_row1[3];
    *(float *)(render_context + 0xe0) = bounding_values[4];
    *(float *)(render_context + 0xe4) = bounding_values[5];
    *(float *)(render_context + 0xe8) = bounding_values[6];
    *(float *)(render_context + 0xec) = bounding_values[7];
    
    // 计算并存储变换后的中心点
    *(float *)(render_context + 0xf0) = (bounding_box_ptr[4] + center_x) * 0.5f + radius * matrix_transform_x;
    *(float *)(render_context + 0xf4) = radius * matrix_transform_y + (box_height + bounding_box_ptr[1]) * 0.5f;
    *(float *)(render_context + 0xf8) = (center_z + box_depth) * 0.5f + radius * matrix_transform_z;
    *(int32_t *)(render_context + 0xfc) = FLOAT_INFINITY;
    
    // 调用渲染更新函数
    FUN_1802864f0(render_context);
    
    // 存储边界框信息
    *(float *)(render_context + 0x118) = radius;
    *(float *)(render_context + 0x104) = -extent_x;
    *(float *)(render_context + 0x110) = -extent_y;
    *(float *)(render_context + 0x108) = extent_x;
    *(float *)(render_context + 0x10c) = extent_y;
    *(int8_t *)(render_context + 0x100) = 0;
    *(int32_t *)(render_context + 0x114) = 0x3f800000;  // 1.0f
    
    // 清理和验证
    FUN_1802864f0();
    
    // 栈保护清理
    FUN_1808fc050(stack_guard ^ (ulonglong)stack_data);
}

/**
 * 计算指定距离处的点坐标
 * @param render_context 渲染上下文指针
 * @param output_point 输出点坐标指针
 * @param distance 距离参数
 * @return 输出点坐标指针
 */
float * calculate_point_at_distance(longlong render_context, float *output_point, float distance)
{
    float transform_x, transform_y, transform_z;
    float direction_x, direction_y, direction_z;
    float point_x, point_y, point_z;
    
    // 从渲染上下文提取变换参数
    transform_x = *(float *)(render_context + 0xe0);
    transform_y = *(float *)(render_context + 0xf4);
    direction_x = *(float *)(render_context + 0xe4);
    direction_y = *(float *)(render_context + 0xe8);
    point_z = *(float *)(render_context + 0xf8);
    
    // 计算指定距离处的点坐标
    *output_point = *(float *)(render_context + 0xf0) - transform_x * distance;
    output_point[1] = transform_y - direction_x * distance;
    output_point[2] = point_z - direction_y * distance;
    output_point[3] = MAX_FLOAT_VALUE;
    
    // 设置方向向量
    output_point[4] = -transform_x;
    output_point[5] = -direction_x;
    output_point[6] = -direction_y;
    output_point[7] = MAX_FLOAT_VALUE;
    
    return output_point;
}

/**
 * 使用矩阵变换向量
 * @param input_matrix 输入矩阵指针
 * @param output_vector 输出向量指针
 * @return 输出向量指针
 */
float * transform_vector_by_matrix(float *input_matrix, float *output_vector)
{
    float matrix_x1, matrix_y1, matrix_z1;
    float matrix_x2, matrix_y2, matrix_z2;
    float matrix_x3, matrix_y3, matrix_z3;
    float vector_x, vector_y, vector_z;
    float result_x, result_y, result_z;
    float temp_x, temp_y, temp_z;
    float unused1, unused2, unused3;
    
    // 提取矩阵元素
    vector_z = input_matrix[0xd];
    matrix_y1 = input_matrix[0xe];
    matrix_x2 = input_matrix[8];
    matrix_y2 = input_matrix[4];
    matrix_z2 = input_matrix[9];
    vector_x = *input_matrix;
    matrix_z3 = input_matrix[5];
    matrix_x3 = input_matrix[10];
    matrix_y3 = input_matrix[1];
    matrix_z1 = input_matrix[6];
    matrix_x1 = input_matrix[2];
    
    // 设置输出向量的负值部分
    output_vector[0xc] = -input_matrix[0xc];
    output_vector[0xd] = -vector_z;
    output_vector[0xe] = -matrix_y1;
    output_vector[0xf] = MAX_FLOAT_VALUE;
    
    // 提取变换参数
    temp_y = output_vector[0xd];
    temp_z = output_vector[0xc];
    matrix_y1 = output_vector[0xe];
    
    // 应用矩阵变换
    output_vector[0xc] = vector_x * temp_z + matrix_y3 * temp_y + matrix_x1 * matrix_y1;
    output_vector[0xd] = matrix_y2 * temp_z + matrix_z3 * temp_y + matrix_z1 * matrix_y1;
    output_vector[0xe] = matrix_x2 * temp_z + matrix_z2 * temp_y + matrix_x3 * matrix_y1;
    output_vector[0xf] = MAX_FLOAT_VALUE;
    
    // 设置输出向量原始值
    *output_vector = vector_x;
    output_vector[1] = matrix_y2;
    output_vector[2] = matrix_x2;
    output_vector[3] = unused1;
    
    matrix_x1 = input_matrix[2];
    output_vector[4] = matrix_y3;
    output_vector[5] = matrix_z3;
    output_vector[6] = matrix_z2;
    output_vector[7] = unused2;
    output_vector[8] = matrix_x1;
    output_vector[9] = matrix_z1;
    output_vector[10] = matrix_x3;
    output_vector[0xb] = unused3;
    
    return output_vector;
}

/**
 * 初始化渲染池数据结构
 * @param pool_data 池数据指针
 * @return 池数据指针
 */
uint64_t * initialize_rendering_pool(uint64_t *pool_data)
{
    longlong allocation_size;
    longlong memory_alignment;
    uint64_t *memory_block;
    uint64_t *previous_block;
    uint64_t *current_block;
    uint64_t *next_block;
    uint64_t *block_pointer;
    ulonglong hash_mask;
    ulonglong hash_value;
    int8_t stack_data1[24];
    int8_t stack_data2[32];
    
    // 初始化指针
    block_pointer = (uint64_t *)0x0;
    
    // 计算哈希表掩码
    hash_mask = HASH_TABLE_SIZE;
    hash_value = 1;
    do {
        hash_mask = hash_mask | hash_mask >> (((byte)hash_value & 7) << 3);
        hash_value = hash_value * 2;
    } while (hash_value < 8);
    
    pool_data[9] = hash_mask + 1;
    
    // 根据大小选择分配策略
    if (hash_mask + 1 < SMALL_POOL_SIZE) {
        // 小池分配
        memory_block = (uint64_t *)FUN_1801ee790();
        if (memory_block == (uint64_t *)0x0) {
            FUN_180287f70(stack_data2);
            _CxxThrowException(stack_data2, &unknown_var_2600_ptr);
        }
        memory_block[0x10] = memory_block;
    }
    else {
        // 大池分配
        pool_data[9] = LARGE_POOL_SIZE;
        next_block = block_pointer;
        current_block = block_pointer;
        previous_block = block_pointer;
        
        do {
            allocation_size = pool_data[9];
            memory_alignment = FUN_18062b420(system_memory_pool_ptr, allocation_size * 0x1c + 0xaa, 3);
            memory_block = block_pointer;
            
            if (memory_alignment != 0) {
                memory_block = (uint64_t *)((ulonglong)(-(int)memory_alignment & 7) + memory_alignment);
                
                // 初始化内存块
                *memory_block = 0;
                memory_block[1] = 0;
                memory_block[8] = 0;
                memory_block[9] = 0;
                memory_block[0x10] = 0;
                memory_block[0x11] = (ulonglong)(-(int)(memory_block + 0x14) & 3) + (longlong)(memory_block + 0x14);
                memory_block[0x12] = allocation_size + -1;
                memory_block[0x13] = memory_alignment;
            }
            
            if (memory_block == (uint64_t *)0x0) {
                FUN_180287f70(stack_data1);
                _CxxThrowException(stack_data1, &unknown_var_2600_ptr);
            }
            
            // 链接内存块
            previous_block = memory_block;
            if (next_block != (uint64_t *)0x0) {
                current_block[0x10] = memory_block;
                previous_block = next_block;
            }
            
            memory_block[0x10] = previous_block;
            previous_block = (uint64_t *)((longlong)previous_block + 1);
            next_block = previous_block;
            current_block = memory_block;
        } while (previous_block != (uint64_t *)0x2);
    }
    
    // 设置池数据
    *pool_data = memory_block;
    pool_data[8] = memory_block;
    
    // 线程安全初始化
    LOCK();
    render_system_config_camera = 0;
    UNLOCK();
    
    return pool_data;
}

/**
 * 设置渲染状态
 * @param state_ptr 状态指针
 * @param param1 参数1
 * @param param2 参数2
 */
void set_rendering_state(char *state_ptr, int param1, int param2)
{
    if (*state_ptr == '\0') {
        // 初始化状态
        *(int *)(state_ptr + 4) = param1;
        *(int *)(state_ptr + 8) = param2;
        *state_ptr = '\x01';
        return;
    }
    
    // 检查状态是否相同
    if ((*(int *)(state_ptr + 4) == param1) && (*(int *)(state_ptr + 8) == param2)) {
        return;
    }
    
    // 状态冲突，抛出异常
    FUN_180062300(system_message_context, &unknown_var_9840_ptr, *(int *)(state_ptr + 4), 
                 *(int32_t *)(state_ptr + 8), param1, param2);
}

/**
 * 创建异常数据
 * @param exception_data 异常数据指针
 * @param exception_info 异常信息指针
 * @return 异常数据指针
 */
uint64_t * create_exception_data(uint64_t *exception_data, longlong exception_info)
{
    *exception_data = &unknown_var_9816_ptr;
    exception_data[1] = 0;
    exception_data[2] = 0;
    __std_exception_copy(exception_info + 8);
    *exception_data = &unknown_var_9840_ptr;
    return exception_data;
}

/**
 * 创建运行时异常
 * @param exception_data 异常数据指针
 * @return 异常数据指针
 */
uint64_t * create_runtime_exception(uint64_t *exception_data)
{
    *exception_data = &unknown_var_9816_ptr;
    exception_data[2] = 0;
    exception_data[1] = &unknown_var_9912_ptr;
    *exception_data = &unknown_var_9840_ptr;
    return exception_data;
}

/**
 * 创建字符串异常
 * @param exception_data 异常数据指针
 * @param param1 参数1
 * @param param2 参数2
 * @param param3 参数3
 * @param param4 参数4
 * @return 异常数据指针
 */
uint64_t * create_string_exception(uint64_t param1, uint64_t *exception_data, 
                                   uint64_t param2, uint64_t param3)
{
    *exception_data = &unknown_var_720_ptr;
    exception_data[1] = 0;
    *(int32_t *)(exception_data + 2) = 0;
    *exception_data = &unknown_var_3432_ptr;
    exception_data[1] = exception_data + 3;
    *(int8_t *)(exception_data + 3) = 0;
    *(int32_t *)(exception_data + 2) = 0x16;
    strcpy_s(exception_data[1], 0x80, &system_memory_6c50, param3, 0, 0xfffffffffffffffe);
    return exception_data;
}