#include "TaleWorlds.Native.Split.h"

// 03_rendering_part033.c - 渲染系统矩阵变换和数据处理模块
// 该文件包含5个核心函数，主要处理渲染相关的矩阵运算、数据初始化和变换操作

// 函数别名定义
#define multiply_matrix4x3_vector3 process_rendering_matrix_vector_multiplication
#define initialize_rendering_data_structure setup_rendering_data_initialization
#define process_rendering_transform calculate_rendering_transformation_matrix
#define setup_rendering_projection_matrix configure_rendering_projection_parameters
#define update_rendering_transform_matrix refresh_rendering_transform_data

/**
 * 渲染矩阵向量乘法处理函数
 * 
 * 该函数执行4x3矩阵与3D向量的乘法运算，用于渲染系统中的坐标变换。
 * 输入矩阵为16个浮点数组成的4x3矩阵，输出为变换后的4个向量结果。
 * 
 * @param output_matrix 输出矩阵指针，存储计算结果
 * @param input_matrix1 输入矩阵1，包含16个浮点数
 * @param input_matrix2 输入矩阵2，包含3个浮点数
 * @param transform_vector 变换向量，包含3个浮点数
 * @param matrix_flags 矩阵处理标志位
 */
void multiply_matrix4x3_vector3(float *output_matrix, float *input_matrix1, float *input_matrix2, float *transform_vector)
{
    // 局部变量声明
    float matrix_row1[4], matrix_row2[4], matrix_row3[4], matrix_row4[4];
    float transform_x, transform_y, transform_z;
    float result_x, result_y, result_z;
    
    // 从输入矩阵1提取行数据
    matrix_row1[0] = input_matrix1[0];   matrix_row1[1] = input_matrix1[1];   matrix_row1[2] = input_matrix1[2];   matrix_row1[3] = input_matrix1[3];
    matrix_row2[0] = input_matrix1[4];   matrix_row2[1] = input_matrix1[5];   matrix_row2[2] = input_matrix1[6];   matrix_row2[3] = input_matrix1[7];
    matrix_row3[0] = input_matrix1[8];   matrix_row3[1] = input_matrix1[9];   matrix_row3[2] = input_matrix1[10];  matrix_row3[3] = input_matrix1[11];
    matrix_row4[0] = input_matrix1[12];  matrix_row4[1] = input_matrix1[13];  matrix_row4[2] = input_matrix1[14];  matrix_row4[3] = input_matrix1[15];
    
    // 提取变换向量
    transform_x = transform_vector[0];
    transform_y = transform_vector[1];
    transform_z = transform_vector[2];
    
    // 计算第一个输出向量
    output_matrix[0] = transform_x * matrix_row2[0] + transform_y * matrix_row1[0] + transform_z * matrix_row3[0];
    output_matrix[1] = transform_x * matrix_row2[1] + transform_y * matrix_row1[1] + transform_z * matrix_row3[1];
    output_matrix[2] = transform_x * matrix_row2[2] + transform_y * matrix_row1[2] + transform_z * matrix_row3[2];
    output_matrix[3] = transform_x * matrix_row2[3] + transform_y * matrix_row1[3] + transform_z * matrix_row3[3];
    
    // 计算第二个输出向量
    transform_x = transform_vector[4];
    transform_y = transform_vector[3];
    transform_z = transform_vector[5];
    output_matrix[4] = transform_x * matrix_row2[0] + transform_y * matrix_row1[0] + transform_z * matrix_row3[0];
    output_matrix[5] = transform_x * matrix_row2[1] + transform_y * matrix_row1[1] + transform_z * matrix_row3[1];
    output_matrix[6] = transform_x * matrix_row2[2] + transform_y * matrix_row1[2] + transform_z * matrix_row3[2];
    output_matrix[7] = transform_x * matrix_row2[3] + transform_y * matrix_row1[3] + transform_z * matrix_row3[3];
    
    // 计算第三个输出向量
    transform_x = transform_vector[8];
    transform_y = transform_vector[7];
    transform_z = transform_vector[9];
    output_matrix[8] = transform_x * matrix_row2[0] + transform_y * matrix_row1[0] + transform_z * matrix_row3[0];
    output_matrix[9] = transform_x * matrix_row2[1] + transform_y * matrix_row1[1] + transform_z * matrix_row3[1];
    output_matrix[10] = transform_x * matrix_row2[2] + transform_y * matrix_row1[2] + transform_z * matrix_row3[2];
    output_matrix[11] = transform_x * matrix_row2[3] + transform_y * matrix_row1[3] + transform_z * matrix_row3[3];
    
    // 计算第四个输出向量（包含平移）
    transform_x = transform_vector[12];
    transform_y = transform_vector[11];
    transform_z = transform_vector[13];
    output_matrix[12] = transform_x * matrix_row2[0] + transform_y * matrix_row1[0] + transform_z * matrix_row3[0] + matrix_row4[0];
    output_matrix[13] = transform_x * matrix_row2[1] + transform_y * matrix_row1[1] + transform_z * matrix_row3[1] + matrix_row4[1];
    output_matrix[14] = transform_x * matrix_row2[2] + transform_y * matrix_row1[2] + transform_z * matrix_row3[2] + matrix_row4[2];
    output_matrix[15] = transform_x * matrix_row2[3] + transform_y * matrix_row1[3] + transform_z * matrix_row3[3] + matrix_row4[3];
}

/**
 * 渲染数据结构初始化函数
 * 
 * 该函数初始化渲染数据结构，设置默认值和内存管理指针。
 * 根据标志位决定是否进行内存释放操作。
 * 
 * @param data_ptr 数据结构指针
 * @param memory_flags 内存管理标志位
 * @return 返回初始化后的数据结构指针
 */
void *initialize_rendering_data_structure(void *data_ptr, unsigned long long memory_flags)
{
    // 设置默认数据指针
    *(void **)data_ptr = (void *)0x180a169a8;  // 默认渲染数据地址
    
    // 根据标志位决定是否释放内存
    if ((memory_flags & 1) != 0) {
        free(data_ptr, 0x18);  // 释放24字节内存
    }
    
    return data_ptr;
}

/**
 * 渲染参数配置函数
 * 
 * 该函数配置渲染系统的各种参数，包括渲染状态、矩阵参数和纹理设置。
 * 初始化多个渲染数据块并设置默认值。
 * 
 * @param render_params 渲染参数指针
 * @return 返回配置后的渲染参数指针
 */
void *process_rendering_transform(void *render_params)
{
    // 第一组渲染参数初始化
    *(void **)((char *)render_params + 6) = (void *)0x18098bcb0;  // 渲染状态指针
    *(unsigned long long *)((char *)render_params + 8) = 0;       // 清零参数
    ((unsigned int *)render_params)[10] = 0;                      // 设置标志位
    
    *(void **)((char *)render_params + 6) = (void *)0x1809fcc28;  // 纹理参数指针
    *(unsigned int **)((char *)render_params + 8) = (unsigned int *)((char *)render_params + 12);
    ((unsigned int *)render_params)[10] = 0;
    *((char *)render_params + 12) = 0;                            // 清零纹理数据
    
    // 第二组渲染参数初始化
    *(void **)((char *)render_params + 44) = (void *)0x18098bcb0;  // 第二组渲染状态
    *(unsigned long long *)((char *)render_params + 46) = 0;
    ((unsigned int *)render_params)[48] = 0;
    
    *(void **)((char *)render_params + 44) = (void *)0x1809fcc28;  // 第二组纹理参数
    *(unsigned int **)((char *)render_params + 46) = (unsigned int *)((char *)render_params + 50);
    ((unsigned int *)render_params)[48] = 0;
    *((char *)render_params + 50) = 0;                            // 清零第二组纹理数据
    
    // 第三组渲染参数初始化
    *(void **)((char *)render_params + 82) = (void *)0x18098bcb0;  // 第三组渲染状态
    *(unsigned long long *)((char *)render_params + 84) = 0;
    ((unsigned int *)render_params)[86] = 0;
    
    *(void **)((char *)render_params + 82) = (void *)0x180a3c3e0;  // 第三组纹理参数
    *(unsigned long long *)((char *)render_params + 88) = 0;
    *(unsigned long long *)((char *)render_params + 84) = 0;
    ((unsigned int *)render_params)[86] = 0;
    
    // 第四组渲染参数初始化
    *(void **)((char *)render_params + 90) = (void *)0x18098bcb0;  // 第四组渲染状态
    *(unsigned long long *)((char *)render_params + 92) = 0;
    ((unsigned int *)render_params)[94] = 0;
    
    *(void **)((char *)render_params + 90) = (void *)0x180a3c3e0;  // 第四组纹理参数
    *(unsigned long long *)((char *)render_params + 96) = 0;
    *(unsigned long long *)((char *)render_params + 92) = 0;
    ((unsigned int *)render_params)[94] = 0;
    
    // 设置默认渲染参数
    *(float *)render_params = 3.4028235e+38f;                    // 最大浮点数
    *(unsigned long long *)((char *)render_params + 4) = 0;
    *(unsigned long long *)((char *)render_params + 12) = 0;
    ((unsigned int *)render_params)[20] = 0;
    
    return render_params;
}

/**
 * 渲染投影矩阵计算函数
 * 
 * 该函数根据输入参数计算渲染投影矩阵，支持正交和透视两种投影模式。
 * 根据标志位选择不同的计算方法。
 * 
 * @param render_context 渲染上下文指针
 * @param projection_params 投影参数
 * @param projection_mode 投影模式标志
 * @return 返回计算后的投影参数
 */
unsigned long long setup_rendering_projection_matrix(long long render_context, unsigned long long projection_params, char projection_mode)
{
    // 局部变量声明
    double left_plane, right_plane, bottom_plane, top_plane;
    double near_plane, far_plane;
    double aspect_ratio, field_of_view;
    double projection_matrix[16];
    char temp_buffer[16];
    unsigned long long temp_param1, temp_param2;
    double temp_double1, temp_double2, temp_double3, temp_double4;
    
    // 提取视景体参数
    left_plane = (double)*(float *)(render_context + 0x108);
    right_plane = (double)*(float *)(render_context + 0x104);
    top_plane = (double)*(float *)(render_context + 0x118);
    bottom_plane = (double)*(float *)(render_context + 0x114);
    near_plane = (double)*(float *)(render_context + 0x10c);
    far_plane = (double)*(float *)(render_context + 0x110);
    
    // 根据投影模式选择计算方法
    if (*(char *)(render_context + 0x100) == 0) {
        // 正交投影模式
        temp_param1 = 0x3ff0000000000000ULL;  // 1.0
        temp_double1 = 1.0 / (right_plane - left_plane);
        *(unsigned long long *)temp_buffer = 0;
        *(double *)temp_buffer = temp_double1 + temp_double1;
        
        temp_double2 = 1.0 / (top_plane - bottom_plane);
        temp_double2 = temp_double2 + temp_double2;
        memset(temp_buffer + 16, 0, 16);  // 清零临时缓冲区
        
        temp_double3 = (top_plane + bottom_plane) / (top_plane - bottom_plane);
        *(double *)(temp_buffer + 32) = 1.0 / (bottom_plane - top_plane);
        *(unsigned long long *)(temp_buffer + 40) = 0;
        temp_double4 = *(double *)(temp_buffer + 32) * bottom_plane;
        temp_double1 = (left_plane + right_plane) / (left_plane - right_plane);
    } else {
        // 透视投影模式
        temp_param1 = 0;
        *(double *)(temp_buffer + 32) = 1.0 / (right_plane - left_plane);
        *(double *)temp_buffer = (bottom_plane + bottom_plane) * *(double *)(temp_buffer + 32);
        *(double *)(temp_buffer + 32) = (left_plane + right_plane) * *(double *)(temp_buffer + 32);
        *(unsigned long long *)(temp_buffer + 8) = 0;
        
        *(double *)(temp_buffer + 48) = 1.0 / (bottom_plane - top_plane);
        temp_double4 = bottom_plane * top_plane * *(double *)(temp_buffer + 48);
        *(double *)(temp_buffer + 32) = *(double *)(temp_buffer + 48) * top_plane;
        temp_double1 = 0.0;
        temp_double2 = 0.0;
        temp_double3 = 1.0 / (near_plane - far_plane);
        
        *(unsigned long long *)(temp_buffer + 56) = 0xbff0000000000000ULL;  // -1.0
        temp_double2 = (bottom_plane + bottom_plane) * temp_double3;
        temp_double3 = (far_plane + near_plane) * temp_double3;
        *(unsigned long long *)(temp_buffer + 72) = temp_double3;
        
        // 特殊处理标志位
        if ((projection_mode != 0) && (*(int *)(*(long long *)0x180c8a9c8 + 0xa10) != 0)) {
            // 应用特殊投影变换
            temp_param2 = 0;
            *(unsigned long long *)((char *)temp_buffer + 80) = 0;
            *(unsigned long long *)((char *)temp_buffer + 88) = 0xbff0000000000000ULL;
            *(unsigned long long *)((char *)temp_buffer + 96) = 0;
            *(unsigned long long *)((char *)temp_buffer + 104) = 0;
            *(unsigned long long *)((char *)temp_buffer + 112) = 0;
            *(unsigned long long *)temp_buffer = 0;
            *(int *)((char *)temp_buffer + 76) = (int)((unsigned long long)temp_double3 >> 32);
            *(int *)((char *)temp_buffer + 72) = (int)temp_double3;
            *(int *)((char *)temp_buffer + 84) = 0;
            *(double *)(temp_buffer + 48) = -1.0 - *(double *)(temp_buffer + 48);
            *(int *)((char *)temp_buffer + 92) = 0xbff00000;
            temp_double1 = 0.0;
            temp_double2 = 0.0;
            temp_double4 = -temp_double4;
            temp_param1 = 0;
        }
    }
    
    // 调用系统函数处理投影矩阵
    func_0x000180645570(projection_params, temp_buffer);
    return projection_params;
}

/**
 * 渲染变换矩阵设置函数
 * 
 * 该函数设置渲染变换矩阵，支持多种变换模式和平面类型。
 * 根据输入参数配置不同的变换矩阵和投影参数。
 * 
 * @param transform_matrix 变换矩阵指针
 * @param plane_type 平面类型标识
 * @param plane_params 平面参数
 * @param render_context 渲染上下文
 * @param field_of_view 视场角参数
 * @param transform_flag 变换标志位
 */
void update_rendering_transform_matrix(float *transform_matrix, unsigned int plane_type, float *plane_params, 
                                      void *render_context, float field_of_view, char transform_flag)
{
    // 局部变量声明
    float param_x, param_y, param_z, param_w;
    float transform_value1, transform_value2;
    unsigned long long matrix_param1, matrix_param2;
    char temp_buffer[16];
    unsigned int temp_uint1, temp_uint2, temp_uint3, temp_uint4;
    float temp_float1, temp_float2, temp_float3, temp_float4;
    float temp_float5, temp_float6, temp_float7, temp_float8;
    
    // 提取平面参数
    param_x = *plane_params;
    param_y = plane_params[1];
    param_z = plane_params[2];
    param_w = plane_params[3];
    
    // 根据平面类型设置变换参数
    if (plane_type < 6) {
        if (transform_flag == 0) {
            // 标准变换模式
            switch(plane_type) {
                case 0:  // XY平面，负Z方向
                    temp_float5 = 0.0f;   temp_float6 = 1.0f;   temp_float7 = 0.0f;   temp_float8 = 3.4028235e+38f;
                    temp_float1 = -1.0f;  temp_float2 = 0.0f;   temp_float3 = 0.0f;   temp_float4 = 3.4028235e+38f;
                    matrix_param1 = 0;    matrix_param2 = 0x7f7fffffbf800000ULL;
                    break;
                case 1:  // XY平面，正Z方向
                    temp_float5 = 0.0f;   temp_float6 = 1.0f;   temp_float7 = 0.0f;   temp_float8 = 3.4028235e+38f;
                    temp_float1 = 1.0f;   temp_float2 = 0.0f;   temp_float3 = 0.0f;   temp_float4 = 3.4028235e+38f;
                    matrix_param1 = 0;    matrix_param2 = 0x7f7fffff3f800000ULL;
                    break;
                case 2:  // XZ平面，负Y方向
                    temp_float5 = 0.0f;   temp_float6 = 0.0f;   temp_float7 = -1.0f;  temp_float8 = 3.4028235e+38f;
                    temp_float1 = 0.0f;   temp_float2 = -1.0f;  temp_float3 = 0.0f;   temp_float4 = 3.4028235e+38f;
                    matrix_param1 = 0x3f800000;  matrix_param2 = 0x7f7fffff00000000ULL;
                    break;
                case 3:  // XZ平面，正Y方向
                    temp_float5 = 0.0f;   temp_float6 = 0.0f;   temp_float7 = 1.0f;   temp_float8 = 3.4028235e+38f;
                    temp_float1 = 0.0f;   temp_float2 = 1.0f;   temp_float3 = 0.0f;   temp_float4 = 3.4028235e+38f;
                    matrix_param1 = 0x3f800000;  matrix_param2 = 0x7f7fffff00000000ULL;
                    break;
                case 4:  // YZ平面，负X方向
                    temp_float5 = 0.0f;   temp_float6 = 1.0f;   temp_float7 = 0.0f;   temp_float8 = 3.4028235e+38f;
                    temp_float1 = 0.0f;   temp_float2 = 0.0f;   temp_float3 = -1.0f;  temp_float4 = 3.4028235e+38f;
                    matrix_param1 = 0x3f800000;  matrix_param2 = 0x7f7fffff00000000ULL;
                    break;
                case 5:  // YZ平面，正X方向
                    temp_float5 = 0.0f;   temp_float6 = 1.0f;   temp_float7 = 0.0f;   temp_float8 = 3.4028235e+38f;
                    temp_float1 = 0.0f;   temp_float2 = 0.0f;   temp_float3 = 1.0f;   temp_float4 = 3.4028235e+38f;
                    matrix_param1 = 0xbf800000;  matrix_param2 = 0x7f7fffff00000000ULL;
                    break;
            }
        } else {
            // 交替变换模式
            switch(plane_type) {
                case 0:  // 交替XY平面，负Z方向
                    temp_float5 = 0.0f;   temp_float6 = 0.0f;   temp_float7 = 1.0f;   temp_float8 = 3.4028235e+38f;
                    temp_float1 = -1.0f;  temp_float2 = 0.0f;   temp_float3 = 0.0f;   temp_float4 = 3.4028235e+38f;
                    matrix_param1 = 0xbf80000000000000ULL;  matrix_param2 = 0x7f7fffff00000000ULL;
                    break;
                case 1:  // 交替XY平面，正Z方向
                    temp_float5 = 0.0f;   temp_float6 = 0.0f;   temp_float7 = 1.0f;   temp_float8 = 3.4028235e+38f;
                    temp_float1 = 1.0f;   temp_float2 = 0.0f;   temp_float3 = 0.0f;   temp_float4 = 3.4028235e+38f;
                    matrix_param1 = 0x3f80000000000000ULL;  matrix_param2 = 0x7f7fffff00000000ULL;
                    break;
                case 2:  // 交替XZ平面，负Y方向
                    temp_float5 = 0.0f;   temp_float6 = -1.0f;  temp_float7 = 0.0f;   temp_float8 = 3.4028235e+38f;
                    temp_float1 = 0.0f;   temp_float2 = 0.0f;   temp_float3 = -1.0f;  temp_float4 = 3.4028235e+38f;
                    matrix_param1 = 0x3f800000;  matrix_param2 = 0x7f7fffff00000000ULL;
                    break;
                case 3:  // 交替XZ平面，正Y方向
                    temp_float5 = 0.0f;   temp_float6 = 1.0f;   temp_float7 = 0.0f;   temp_float8 = 3.4028235e+38f;
                    temp_float1 = 0.0f;   temp_float2 = 0.0f;   temp_float3 = 1.0f;   temp_float4 = 3.4028235e+38f;
                    matrix_param1 = 0x3f800000;  matrix_param2 = 0x7f7fffff00000000ULL;
                    break;
                case 4:  // 交替YZ平面，负X方向
                    temp_float5 = 0.0f;   temp_float6 = 0.0f;   temp_float7 = 1.0f;   temp_float8 = 3.4028235e+38f;
                    temp_float1 = 0.0f;   temp_float2 = -1.0f;  temp_float3 = 0.0f;   temp_float4 = 3.4028235e+38f;
                    matrix_param1 = 0x3f800000;  matrix_param2 = 0x7f7fffff00000000ULL;
                    break;
                case 5:  // 交替YZ平面，正X方向
                    temp_float5 = 0.0f;   temp_float6 = 0.0f;   temp_float7 = 1.0f;   temp_float8 = 3.4028235e+38f;
                    temp_float1 = 0.0f;   temp_float2 = 1.0f;   temp_float3 = 0.0f;   temp_float4 = 3.4028235e+38f;
                    matrix_param1 = 0xbf800000;  matrix_param2 = 0x7f7fffff00000000ULL;
                    break;
            }
        }
    } else {
        // 自定义变换模式
        matrix_param1 = ((unsigned long long)temp_uint2 << 32) | temp_uint1;
        matrix_param2 = ((unsigned long long)temp_uint4 << 32) | temp_uint3;
    }
    
    // 设置变换矩阵参数
    *(unsigned long long *)((char *)transform_matrix + 48) = matrix_param1;
    *(unsigned long long *)((char *)transform_matrix + 50) = matrix_param2;
    transform_matrix[52] = temp_float5;
    transform_matrix[53] = temp_float6;
    transform_matrix[54] = temp_float7;
    transform_matrix[55] = temp_float8;
    transform_matrix[56] = temp_float1;
    transform_matrix[57] = temp_float2;
    transform_matrix[58] = temp_float3;
    transform_matrix[59] = temp_float4;
    transform_matrix[60] = param_x;
    transform_matrix[61] = param_y;
    transform_matrix[62] = param_z;
    transform_matrix[63] = param_w;
    
    // 调用变换矩阵更新函数
    FUN_1802864f0();
    
    // 设置其他变换参数
    transform_matrix[71] = 1.5707964f;  // π/2
    *(char *)((char *)transform_matrix + 64) = 1;
    transform_matrix[70] = field_of_view;
    transform_matrix[69] = 0.09f;  // 默认近平面距离
    transform_matrix[72] = 1.0f;
    
    // 计算切线值
    transform_value1 = (float)tanf(0x3f490fdb);  // π/4的切线值
    transform_value1 = transform_value1 * 0.09f;
    transform_matrix[66] = transform_value1;
    transform_matrix[65] = -transform_value1;
    transform_matrix[67] = transform_value1 / 1.0f;
    transform_matrix[68] = -(transform_value1 / 1.0f);
    
    // 根据变换标志应用不同的变换
    if (*(char *)((char *)transform_matrix + 64) == 0) {
        // 标准变换应用
        apply_standard_transform(transform_matrix);
    } else {
        // 交替变换应用
        apply_alternate_transform(transform_matrix);
    }
}

/**
 * 标准变换应用函数
 * 
 * 该函数应用标准的渲染变换，包括平移、旋转和缩放操作。
 * 
 * @param transform_matrix 变换矩阵指针
 */
void apply_standard_transform(float *transform_matrix)
{
    float transform_value1, transform_value2, transform_value3;
    
    // 应用正向变换
    transform_value1 = transform_matrix[67];
    transform_matrix[32] = transform_value1 * transform_matrix[52] + transform_matrix[60];
    transform_matrix[33] = transform_value1 * transform_matrix[53] + transform_matrix[61];
    transform_matrix[34] = transform_value1 * transform_matrix[54] + transform_matrix[62];
    transform_matrix[35] = 3.4028235e+38f;
    
    transform_value1 = transform_matrix[68];
    transform_matrix[40] = transform_value1 * transform_matrix[52] + transform_matrix[60];
    transform_matrix[41] = transform_value1 * transform_matrix[53] + transform_matrix[61];
    transform_matrix[42] = transform_value1 * transform_matrix[54] + transform_matrix[62];
    transform_matrix[43] = 3.4028235e+38f;
    
    transform_value1 = transform_matrix[66];
    transform_matrix[24] = transform_value1 * transform_matrix[48] + transform_matrix[60];
    transform_matrix[25] = transform_value1 * transform_matrix[49] + transform_matrix[61];
    transform_matrix[26] = transform_value1 * transform_matrix[50] + transform_matrix[62];
    transform_matrix[27] = 3.4028235e+38f;
    
    transform_value1 = transform_matrix[65];
    transform_matrix[16] = transform_value1 * transform_matrix[48] + transform_matrix[60];
    transform_matrix[17] = transform_value1 * transform_matrix[49] + transform_matrix[61];
    transform_matrix[18] = transform_value1 * transform_matrix[50] + transform_matrix[62];
    transform_matrix[19] = 3.4028235e+38f;
    
    // 应用反向变换
    transform_value1 = transform_matrix[70];
    transform_matrix[8] = transform_matrix[60] - transform_value1 * transform_matrix[56];
    transform_matrix[9] = transform_matrix[61] - transform_value1 * transform_matrix[57];
    transform_matrix[10] = transform_matrix[62] - transform_value1 * transform_matrix[58];
    transform_matrix[11] = 3.4028235e+38f;
    
    transform_value1 = transform_matrix[69];
    *transform_matrix = transform_matrix[60] - transform_value1 * transform_matrix[56];
    transform_matrix[1] = transform_matrix[61] - transform_value1 * transform_matrix[57];
    transform_matrix[2] = transform_matrix[62] - transform_value1 * transform_matrix[58];
    transform_matrix[3] = 3.4028235e+38f;
    
    // 设置负向变换
    transform_matrix[36] = -transform_matrix[52];
    transform_matrix[37] = -transform_matrix[53];
    transform_matrix[38] = -transform_matrix[54];
    transform_matrix[39] = 3.4028235e+38f;
    
    // 复制变换参数
    memcpy((char *)transform_matrix + 44, (char *)transform_matrix + 52, 8);
    transform_matrix[28] = -transform_matrix[48];
    transform_matrix[29] = -transform_matrix[49];
    transform_matrix[30] = -transform_matrix[50];
    transform_matrix[31] = 3.4028235e+38f;
    
    memcpy((char *)transform_matrix + 20, (char *)transform_matrix + 48, 8);
    memcpy((char *)transform_matrix + 12, (char *)transform_matrix + 56, 8);
    
    transform_value3 = transform_matrix[56];
    transform_value2 = transform_matrix[57];
    transform_value1 = transform_matrix[58];
}

/**
 * 交替变换应用函数
 * 
 * 该函数应用交替的渲染变换，包括复杂的矩阵运算和向量归一化。
 * 
 * @param transform_matrix 变换矩阵指针
 */
void apply_alternate_transform(float *transform_matrix)
{
    float transform_value1, transform_value2, transform_value3, transform_value4;
    float temp_vector[3];
    char temp_buffer[16];
    
    // 复制基础参数
    memcpy((char *)transform_matrix + 32, (char *)transform_matrix + 60, 8);
    memcpy((char *)transform_matrix + 40, (char *)transform_matrix + 60, 8);
    memcpy((char *)transform_matrix + 24, (char *)transform_matrix + 60, 8);
    memcpy((char *)transform_matrix + 16, (char *)transform_matrix + 60, 8);
    
    // 计算变换向量
    transform_value3 = transform_matrix[69];
    transform_value1 = transform_matrix[67];
    transform_matrix[36] = -(transform_value3 * transform_matrix[52]) - transform_value1 * transform_matrix[56];
    transform_matrix[37] = -(transform_value3 * transform_matrix[53]) - transform_value1 * transform_matrix[57];
    transform_matrix[38] = -(transform_value3 * transform_matrix[54]) - transform_value1 * transform_matrix[58];
    transform_matrix[39] = 3.4028235e+38f;
    
    transform_value3 = transform_matrix[69];
    transform_value1 = transform_matrix[68];
    transform_matrix[44] = transform_value1 * transform_matrix[56] + transform_value3 * transform_matrix[52];
    transform_matrix[45] = transform_value1 * transform_matrix[57] + transform_value3 * transform_matrix[53];
    transform_matrix[46] = transform_value1 * transform_matrix[58] + transform_value3 * transform_matrix[54];
    transform_matrix[47] = 3.4028235e+38f;
    
    transform_value3 = transform_matrix[69];
    transform_value1 = transform_matrix[66];
    transform_matrix[28] = -(transform_value3 * transform_matrix[48]) - transform_value1 * transform_matrix[56];
    transform_matrix[29] = -(transform_value3 * transform_matrix[49]) - transform_value1 * transform_matrix[57];
    transform_matrix[30] = -(transform_value3 * transform_matrix[50]) - transform_value1 * transform_matrix[58];
    transform_matrix[31] = 3.4028235e+38f;
    
    transform_value3 = transform_matrix[69];
    transform_value1 = transform_matrix[65];
    transform_matrix[20] = transform_value1 * transform_matrix[56] + transform_value3 * transform_matrix[48];
    transform_matrix[21] = transform_value3 * transform_matrix[49] + transform_value1 * transform_matrix[57];
    transform_matrix[22] = transform_value1 * transform_matrix[58] + transform_value3 * transform_matrix[50];
    transform_matrix[23] = 3.4028235e+38f;
    
    // 向量归一化处理
    temp_vector[0] = transform_matrix[37];
    temp_vector[1] = transform_matrix[36];
    temp_vector[2] = transform_matrix[38];
    normalize_vector(temp_vector);
    transform_matrix[36] = temp_vector[0];
    transform_matrix[37] = temp_vector[1];
    transform_matrix[38] = temp_vector[2];
    
    temp_vector[0] = transform_matrix[45];
    temp_vector[1] = transform_matrix[44];
    temp_vector[2] = transform_matrix[46];
    normalize_vector(temp_vector);
    transform_matrix[44] = temp_vector[0];
    transform_matrix[45] = temp_vector[1];
    transform_matrix[46] = temp_vector[2];
    
    temp_vector[0] = transform_matrix[29];
    temp_vector[1] = transform_matrix[28];
    temp_vector[2] = transform_matrix[30];
    normalize_vector(temp_vector);
    transform_matrix[28] = temp_vector[0];
    transform_matrix[29] = temp_vector[1];
    transform_matrix[30] = temp_vector[2];
    
    temp_vector[0] = transform_matrix[21];
    temp_vector[1] = transform_matrix[20];
    temp_vector[2] = transform_matrix[22];
    normalize_vector(temp_vector);
    transform_matrix[20] = temp_vector[0];
    transform_matrix[21] = temp_vector[1];
    transform_matrix[22] = temp_vector[2];
    
    // 应用最终变换
    transform_value3 = transform_matrix[70];
    transform_matrix[8] = transform_matrix[60] - transform_value3 * transform_matrix[56];
    transform_matrix[9] = transform_matrix[61] - transform_value3 * transform_matrix[57];
    transform_matrix[10] = transform_matrix[62] - transform_value3 * transform_matrix[58];
    transform_matrix[11] = 3.4028235e+38f;
    
    transform_value3 = transform_matrix[69];
    *transform_matrix = transform_matrix[60] - transform_value3 * transform_matrix[56];
    transform_matrix[1] = transform_matrix[61] - transform_value3 * transform_matrix[57];
    transform_matrix[2] = transform_matrix[62] - transform_value3 * transform_matrix[58];
    transform_matrix[3] = 3.4028235e+38f;
    
    memcpy((char *)transform_matrix + 12, (char *)transform_matrix + 56, 8);
    
    transform_value1 = transform_matrix[56];
    transform_value2 = transform_matrix[57];
    transform_value3 = transform_matrix[58];
}

/**
 * 向量归一化函数
 * 
 * 该函数对3D向量进行归一化处理，使用快速倒数平方根算法。
 * 
 * @param vector 要归一化的向量指针
 */
void normalize_vector(float *vector)
{
    float length_squared, inverse_length, length;
    char temp_buffer[16];
    
    // 计算向量长度的平方
    length_squared = vector[0] * vector[0] + vector[1] * vector[1] + vector[2] * vector[2];
    
    // 使用快速倒数平方根算法
    *(float *)temp_buffer = rsqrtss(*(unsigned int *)&length_squared, *(unsigned int *)&length_squared);
    inverse_length = *(float *)temp_buffer;
    
    // 牛顿迭代法提高精度
    length = inverse_length * 0.5f * (3.0f - length_squared * inverse_length * inverse_length);
    
    // 应用归一化
    vector[0] *= length;
    vector[1] *= length;
    vector[2] *= length;
}

/**
 * 渲染变换矩阵刷新函数
 * 
 * 该函数刷新渲染变换矩阵，重新计算所有变换参数。
 * 根据当前变换标志选择相应的变换应用方法。
 * 
 * @param transform_matrix 变换矩阵指针
 */
void refresh_rendering_transform_data(float *transform_matrix)
{
    float transform_value1, transform_value2, transform_value3;
    
    // 根据变换标志选择变换方法
    if (*(char *)((char *)transform_matrix + 64) == 0) {
        apply_standard_transform(transform_matrix);
    } else {
        apply_alternate_transform(transform_matrix);
    }
    
    // 设置负向变换
    transform_matrix[4] = -transform_value3;
    transform_matrix[5] = -transform_value2;
    transform_matrix[6] = -transform_value1;
    transform_matrix[7] = 3.4028235e+38f;
}