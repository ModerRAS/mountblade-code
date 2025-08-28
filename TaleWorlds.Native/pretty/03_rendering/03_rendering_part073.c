#include "TaleWorlds.Native.Split.h"

// 03_rendering_part073.c - 渲染系统高级矩阵变换和渲染管线处理模块
// 包含3个核心函数，涵盖渲染矩阵变换、渲染管线处理、高级渲染控制等功能

/*==============================================================================
    常量定义和全局变量
==============================================================================*/

// 渲染系统全局状态变量
static uint32_t g_rendering_random_seed = 0;          // 渲染系统随机数种子
static float* g_rendering_lookup_table = NULL;         // 渲染查找表指针
static int32_t g_rendering_max_instances = 0;         // 最大渲染实例数
static int32_t g_rendering_current_frame = 0;        // 当前帧数

// 渲染系统配置常量
#define RENDERING_MAX_LIGHTS 8                         // 最大光源数量
#define RENDERING_MATRIX_SIZE 16                        // 矩阵大小（4x4）
#define RENDERING_CACHE_SIZE 256                       // 渲染缓存大小
#define RENDERING_PRECISION_FACTOR 8e-05f               // 精度因子

/*==============================================================================
    函数声明和类型定义
==============================================================================*/

// 渲染矩阵变换函数
void rendering_system_transform_matrix
(
    int64_t rendering_context,        // 渲染上下文指针
    uint32_t transform_flags,         // 变换标志
    float* source_matrix,             // 源矩阵数据
    float* target_matrix              // 目标矩阵数据
);

// 渲染管线处理函数
void rendering_system_process_pipeline
(
    int64_t render_device,            // 渲染设备指针
    int64_t render_target,            // 渲染目标指针
    int64_t shader_program,           // 着色器程序指针
    float* vertex_data,               // 顶点数据数组
    char render_flags,                 // 渲染标志
    uint32_t texture_id,               // 纹理ID
    uint32_t shader_params,           // 着色器参数
    int32_t instance_count,            // 实例数量
    uint32_t render_state             // 渲染状态
);

// 高级渲染控制函数
void rendering_system_advanced_control
(
    int64_t* render_manager           // 渲染管理器指针
);

/*==============================================================================
    核心函数实现
==============================================================================*/

/**
 * 渲染系统矩阵变换函数
 * 
 * 该函数负责处理渲染系统中的矩阵变换操作，包括：
 * - 矩阵乘法和变换计算
 * - 顶点数据变换
 * - 渲染参数更新
 * - 批量渲染处理
 * 
 * @param rendering_context 渲染上下文指针
 * @param transform_flags 变换标志位
 * @param source_matrix 源矩阵数据（16个浮点数）
 * @param target_matrix 目标矩阵数据（16个浮点数）
 */
void rendering_system_transform_matrix
(
    int64_t rendering_context,        // 渲染上下文指针
    uint32_t transform_flags,         // 变换标志
    float* source_matrix,             // 源矩阵数据
    float* target_matrix              // 目标矩阵数据
)
{
    // 局部变量声明
    float transform_matrix[16];       // 变换矩阵
    float temp_matrix[16];            // 临时矩阵
    float result_matrix[16];          // 结果矩阵
    float vertex_buffer[64];          // 顶点缓冲区
    float* matrix_ptr;                // 矩阵指针
    int64_t* object_array;            // 对象数组
    char render_enabled;              // 渲染使能标志
    int32_t object_count;             // 对象数量
    int32_t instance_count;           // 实例数量
    int64_t* render_objects;          // 渲染对象数组
    int64_t current_object;           // 当前对象
    int64_t object_data;              // 对象数据
    
    // 检查渲染上下文状态
    if (((*(char*)(rendering_context + 0xbd) == '\0') &&
        (current_object = *(int64_t*)(*(int64_t*)(rendering_context + 0x28) + 0x20),
        *(char*)(current_object + 0x3f61) != '\0')) && 
        (*(int32_t*)(g_rendering_max_instances + 0x620) != -1)) 
    {
        // 获取渲染设备指针
        matrix_ptr = (float*)(*(int64_t**)(rendering_context + 0x48));
        
        // 检查渲染状态
        if (*(int32_t*)(rendering_context + 0x30) == 
            *(int32_t*)(matrix_ptr[0x79] + 0x10)) 
        {
            // 检查渲染使能状态
            if (*(char*)(rendering_context + 0x42) != '\0') 
            {
                // 获取变换矩阵
                if ((void*)*matrix_ptr == &g_rendering_lookup_table) 
                {
                    matrix_ptr = (float*)(matrix_ptr + 0x66);
                }
                else 
                {
                    matrix_ptr = (float*)(*(void**)((void*)*matrix_ptr + 0x158))(matrix_ptr);
                }
                
                // 提取源矩阵数据
                transform_matrix[0] = source_matrix[0];
                transform_matrix[1] = source_matrix[1];
                transform_matrix[2] = source_matrix[2];
                transform_matrix[3] = source_matrix[3];
                transform_matrix[4] = source_matrix[4];
                transform_matrix[5] = source_matrix[5];
                transform_matrix[6] = source_matrix[6];
                transform_matrix[7] = source_matrix[7];
                transform_matrix[8] = source_matrix[8];
                transform_matrix[9] = source_matrix[9];
                transform_matrix[10] = source_matrix[10];
                transform_matrix[11] = source_matrix[11];
                
                // 执行矩阵变换计算
                result_matrix[0] = matrix_ptr[1] * transform_matrix[4] + 
                                  matrix_ptr[0] * transform_matrix[0] + 
                                  matrix_ptr[2] * transform_matrix[8];
                result_matrix[1] = matrix_ptr[1] * transform_matrix[5] + 
                                  matrix_ptr[0] * transform_matrix[1] + 
                                  matrix_ptr[2] * transform_matrix[9];
                result_matrix[2] = matrix_ptr[1] * transform_matrix[6] + 
                                  matrix_ptr[0] * transform_matrix[2] + 
                                  matrix_ptr[2] * transform_matrix[10];
                result_matrix[3] = matrix_ptr[1] * transform_matrix[7] + 
                                  matrix_ptr[0] * transform_matrix[3] + 
                                  matrix_ptr[2] * transform_matrix[11];
                
                // 计算第二行变换
                result_matrix[4] = matrix_ptr[5] * transform_matrix[4] + 
                                  matrix_ptr[4] * transform_matrix[0] + 
                                  matrix_ptr[6] * transform_matrix[8];
                result_matrix[5] = matrix_ptr[5] * transform_matrix[5] + 
                                  matrix_ptr[4] * transform_matrix[1] + 
                                  matrix_ptr[6] * transform_matrix[9];
                result_matrix[6] = matrix_ptr[5] * transform_matrix[6] + 
                                  matrix_ptr[4] * transform_matrix[2] + 
                                  matrix_ptr[6] * transform_matrix[10];
                result_matrix[7] = matrix_ptr[5] * transform_matrix[7] + 
                                  matrix_ptr[4] * transform_matrix[3] + 
                                  matrix_ptr[6] * transform_matrix[11];
                
                // 计算第三行变换
                result_matrix[8] = matrix_ptr[9] * transform_matrix[4] + 
                                  matrix_ptr[8] * transform_matrix[0] + 
                                  matrix_ptr[10] * transform_matrix[8];
                result_matrix[9] = matrix_ptr[9] * transform_matrix[5] + 
                                  matrix_ptr[8] * transform_matrix[1] + 
                                  matrix_ptr[10] * transform_matrix[9];
                result_matrix[10] = matrix_ptr[9] * transform_matrix[6] + 
                                   matrix_ptr[8] * transform_matrix[2] + 
                                   matrix_ptr[10] * transform_matrix[10];
                result_matrix[11] = matrix_ptr[9] * transform_matrix[7] + 
                                   matrix_ptr[8] * transform_matrix[3] + 
                                   matrix_ptr[10] * transform_matrix[11];
                
                // 计算第四行变换（包含平移）
                result_matrix[12] = matrix_ptr[13] * transform_matrix[4] + 
                                   matrix_ptr[12] * transform_matrix[0] + 
                                   matrix_ptr[14] * transform_matrix[8] + 
                                   source_matrix[12];
                result_matrix[13] = matrix_ptr[13] * transform_matrix[5] + 
                                   matrix_ptr[12] * transform_matrix[1] + 
                                   matrix_ptr[14] * transform_matrix[9] + 
                                   source_matrix[13];
                result_matrix[14] = matrix_ptr[13] * transform_matrix[6] + 
                                   matrix_ptr[12] * transform_matrix[2] + 
                                   matrix_ptr[14] * transform_matrix[10] + 
                                   source_matrix[14];
                result_matrix[15] = matrix_ptr[13] * transform_matrix[7] + 
                                   matrix_ptr[12] * transform_matrix[3] + 
                                   matrix_ptr[14] * transform_matrix[11] + 
                                   source_matrix[15];
                
                // 计算实例数量
                instance_count = (int32_t)(*(int64_t*)(rendering_context + 0x58) - 
                                         *(int64_t*)(rendering_context + 0x50) >> 3);
                
                // 批量处理渲染对象
                if (0 < instance_count) 
                {
                    object_data = 0;
                    do 
                    {
                        // 保存当前变换矩阵到栈
                        vertex_buffer[0] = result_matrix[0];
                        vertex_buffer[1] = result_matrix[1];
                        vertex_buffer[2] = result_matrix[2];
                        vertex_buffer[3] = result_matrix[3];
                        vertex_buffer[4] = result_matrix[4];
                        vertex_buffer[5] = result_matrix[5];
                        vertex_buffer[6] = result_matrix[6];
                        vertex_buffer[7] = result_matrix[7];
                        vertex_buffer[8] = result_matrix[8];
                        vertex_buffer[9] = result_matrix[9];
                        vertex_buffer[10] = result_matrix[10];
                        vertex_buffer[11] = result_matrix[11];
                        vertex_buffer[12] = result_matrix[12];
                        vertex_buffer[13] = result_matrix[13];
                        vertex_buffer[14] = result_matrix[14];
                        vertex_buffer[15] = result_matrix[15];
                        
                        // 检查是否需要处理对象变换
                        if (*(int64_t*)(rendering_context + 0x38) == 0) 
                        {
                            // 获取对象数组
                            object_array = *(int64_t**)(*(int64_t*)(rendering_context + 0x48) + 0x38);
                            current_object = 0;
                            object_count = (int32_t)(*(int64_t*)(*(int64_t*)(rendering_context + 0x48) + 0x40) - 
                                                   (int64_t)object_array >> 4);
                            
                            // 遍历对象数组
                            if (0 < object_count) 
                            {
                                render_objects = object_array;
                                do 
                                {
                                    // 检查对象匹配
                                    if (*(int64_t*)(*(int64_t*)(rendering_context + 0x50) + object_data * 8) == 
                                        *(int64_t*)(*render_objects + 0x118)) 
                                    {
                                        current_object = object_array[current_object * 2];
                                        
                                        // 应用对象变换矩阵
                                        float obj_matrix[12];
                                        obj_matrix[0] = *(float*)(current_object + 0x124);
                                        obj_matrix[1] = *(float*)(current_object + 0x120);
                                        obj_matrix[2] = *(float*)(current_object + 0x128);
                                        obj_matrix[3] = *(float*)(current_object + 0x134);
                                        obj_matrix[4] = *(float*)(current_object + 0x130);
                                        obj_matrix[5] = *(float*)(current_object + 0x138);
                                        obj_matrix[6] = *(float*)(current_object + 0x144);
                                        obj_matrix[7] = *(float*)(current_object + 0x140);
                                        obj_matrix[8] = *(float*)(current_object + 0x148);
                                        obj_matrix[9] = *(float*)(current_object + 0x154);
                                        obj_matrix[10] = *(float*)(current_object + 0x150);
                                        obj_matrix[11] = *(float*)(current_object + 0x158);
                                        
                                        // 计算最终变换矩阵
                                        vertex_buffer[0] = obj_matrix[0] * result_matrix[4] + 
                                                          obj_matrix[1] * result_matrix[0] + 
                                                          obj_matrix[2] * result_matrix[8];
                                        vertex_buffer[1] = obj_matrix[0] * result_matrix[5] + 
                                                          obj_matrix[1] * result_matrix[1] + 
                                                          obj_matrix[2] * result_matrix[9];
                                        vertex_buffer[2] = obj_matrix[0] * result_matrix[6] + 
                                                          obj_matrix[1] * result_matrix[2] + 
                                                          obj_matrix[2] * result_matrix[10];
                                        vertex_buffer[3] = obj_matrix[0] * result_matrix[7] + 
                                                          obj_matrix[1] * result_matrix[3] + 
                                                          obj_matrix[2] * result_matrix[11];
                                        
                                        // 计算其他变换
                                        vertex_buffer[4] = obj_matrix[3] * result_matrix[4] + 
                                                          obj_matrix[4] * result_matrix[0] + 
                                                          obj_matrix[5] * result_matrix[8];
                                        vertex_buffer[5] = obj_matrix[3] * result_matrix[5] + 
                                                          obj_matrix[4] * result_matrix[1] + 
                                                          obj_matrix[5] * result_matrix[9];
                                        vertex_buffer[6] = obj_matrix[3] * result_matrix[6] + 
                                                          obj_matrix[4] * result_matrix[2] + 
                                                          obj_matrix[5] * result_matrix[10];
                                        vertex_buffer[7] = obj_matrix[3] * result_matrix[7] + 
                                                          obj_matrix[4] * result_matrix[3] + 
                                                          obj_matrix[5] * result_matrix[11];
                                        
                                        // 计算第三组变换
                                        vertex_buffer[8] = obj_matrix[6] * result_matrix[4] + 
                                                          obj_matrix[7] * result_matrix[0] + 
                                                          obj_matrix[8] * result_matrix[8];
                                        vertex_buffer[9] = obj_matrix[6] * result_matrix[5] + 
                                                          obj_matrix[7] * result_matrix[1] + 
                                                          obj_matrix[8] * result_matrix[9];
                                        vertex_buffer[10] = obj_matrix[6] * result_matrix[6] + 
                                                           obj_matrix[7] * result_matrix[2] + 
                                                           obj_matrix[8] * result_matrix[10];
                                        vertex_buffer[11] = obj_matrix[6] * result_matrix[7] + 
                                                           obj_matrix[7] * result_matrix[3] + 
                                                           obj_matrix[8] * result_matrix[11];
                                        
                                        // 计算最终平移变换
                                        vertex_buffer[12] = obj_matrix[9] * result_matrix[4] + 
                                                            obj_matrix[10] * result_matrix[0] + 
                                                            obj_matrix[11] * result_matrix[8] + 
                                                            result_matrix[12];
                                        vertex_buffer[13] = obj_matrix[9] * result_matrix[5] + 
                                                            obj_matrix[10] * result_matrix[1] + 
                                                            obj_matrix[11] * result_matrix[9] + 
                                                            result_matrix[13];
                                        vertex_buffer[14] = obj_matrix[9] * result_matrix[6] + 
                                                            obj_matrix[10] * result_matrix[2] + 
                                                            obj_matrix[11] * result_matrix[10] + 
                                                            result_matrix[14];
                                        vertex_buffer[15] = obj_matrix[9] * result_matrix[7] + 
                                                            obj_matrix[10] * result_matrix[3] + 
                                                            obj_matrix[11] * result_matrix[11] + 
                                                            result_matrix[15];
                                        break;
                                    }
                                    current_object = current_object + 1;
                                    render_objects = render_objects + 2;
                                } while (current_object < object_count);
                            }
                        }
                        
                        // 执行渲染操作
                        rendering_system_process_pipeline
                        (
                            *(uint64_t*)(*(int64_t*)(rendering_context + 0x50) + object_data * 8),
                            transform_flags,
                            *(uint32_t*)(current_object + 0x60),
                            *(uint8_t*)(rendering_context + 0x44),
                            vertex_buffer
                        );
                        
                        object_data = object_data + 1;
                    } while (object_data < instance_count);
                }
            }
        }
        else 
        {
            // 处理渲染状态更新
            uint64_t temp_data = 0;
            render_enabled = rendering_system_update_render_state
            (
                *(int32_t*)(matrix_ptr[0x79] + 0x10),
                rendering_context,
                source_matrix,
                &temp_data
            );
            
            if (render_enabled != '\0') 
            {
                *(uint32_t*)(rendering_context + 0x30) = 
                    *(uint32_t*)(*(int64_t*)(*(int64_t*)(rendering_context + 0x48) + 0x3c8) + 0x10);
            }
        }
    }
    return;
}

/**
 * 渲染系统管线处理函数
 * 
 * 该函数负责处理渲染管线的核心操作，包括：
 * - 顶点数据处理和变换
 * - 着色器参数设置
 * - 纹理和材质应用
 * - 实例化渲染
 * - 高级渲染效果
 * 
 * @param render_device 渲染设备指针
 * @param render_target 渲染目标指针
 * @param shader_program 着色器程序指针
 * @param vertex_data 顶点数据数组
 * @param render_flags 渲染标志
 * @param texture_id 纹理ID
 * @param shader_params 着色器参数
 * @param instance_count 实例数量
 * @param render_state 渲染状态
 */
void rendering_system_process_pipeline
(
    int64_t render_device,            // 渲染设备指针
    int64_t render_target,            // 渲染目标指针
    int64_t shader_program,           // 着色器程序指针
    float* vertex_data,               // 顶点数据数组
    char render_flags,                 // 渲染标志
    uint32_t texture_id,               // 纹理ID
    uint32_t shader_params,           // 着色器参数
    int32_t instance_count,            // 实例数量
    uint32_t render_state             // 渲染状态
)
{
    // 局部变量声明
    float vertex_buffer[16];           // 顶点缓冲区
    float transform_matrix[16];      // 变换矩阵
    float shader_values[4];          // 着色器值
    void* shader_function;           // 着色器函数指针
    int64_t render_context;           // 渲染上下文
    bool batch_complete;              // 批处理完成标志
    float light_intensity;            // 光照强度
    float color_values[4];            // 颜色值
    float position_values[4];         // 位置值
    uint64_t temp_data_1;            // 临时数据1
    uint64_t temp_data_2;             // 临时数据2
    uint64_t temp_data_3;             // 临时数据3
    int64_t object_data;              // 对象数据
    int64_t batch_data;               // 批处理数据
    float final_matrix[16];           // 最终矩阵
    float stack_buffer[64];           // 栈缓冲区
    
    // 检查渲染设备状态
    if (*(char*)(render_device + 0x42) != '\0') 
    {
        // 获取着色器函数
        shader_function = *(void**)(**(int64_t**)(render_device + 0x48) + 0x158);
        if (shader_function == (void*)&g_rendering_lookup_table) 
        {
            vertex_buffer = (float*)(*(int64_t**)(render_device + 0x48) + 0x66);
        }
        else 
        {
            vertex_buffer = (float*)(*(void**)shader_function)();
        }
        
        // 提取顶点数据
        vertex_buffer[0] = vertex_data[0];
        vertex_buffer[1] = vertex_data[1];
        vertex_buffer[2] = vertex_data[2];
        vertex_buffer[3] = vertex_data[3];
        vertex_buffer[4] = vertex_data[4];
        vertex_buffer[5] = vertex_data[5];
        vertex_buffer[6] = vertex_data[6];
        vertex_buffer[7] = vertex_data[7];
        vertex_buffer[8] = vertex_data[8];
        vertex_buffer[9] = vertex_data[9];
        vertex_buffer[10] = vertex_data[10];
        vertex_buffer[11] = vertex_data[11];
        
        // 执行顶点变换
        transform_matrix[0] = vertex_buffer[1];
        transform_matrix[1] = vertex_buffer[0];
        transform_matrix[2] = vertex_buffer[2];
        transform_matrix[3] = vertex_buffer[5];
        transform_matrix[4] = vertex_buffer[9];
        transform_matrix[5] = vertex_buffer[13];
        
        // 计算变换矩阵
        stack_buffer[0] = transform_matrix[0] * vertex_data[4] + 
                         transform_matrix[1] * vertex_data[0] + 
                         transform_matrix[2] * vertex_data[8];
        stack_buffer[1] = transform_matrix[0] * vertex_data[5] + 
                         transform_matrix[1] * vertex_data[1] + 
                         transform_matrix[2] * vertex_data[9];
        stack_buffer[2] = transform_matrix[0] * vertex_data[6] + 
                         transform_matrix[1] * vertex_data[2] + 
                         transform_matrix[2] * vertex_data[10];
        stack_buffer[3] = transform_matrix[0] * vertex_data[7] + 
                         transform_matrix[1] * vertex_data[3] + 
                         transform_matrix[2] * vertex_data[11];
        
        // 计算第二行变换
        transform_matrix[0] = vertex_buffer[6];
        transform_matrix[1] = vertex_buffer[8];
        stack_buffer[4] = transform_matrix[3] * vertex_data[4] + 
                         vertex_buffer[4] * vertex_data[0] + 
                         transform_matrix[0] * vertex_data[8];
        stack_buffer[5] = transform_matrix[3] * vertex_data[5] + 
                         vertex_buffer[4] * vertex_data[1] + 
                         transform_matrix[0] * vertex_data[9];
        stack_buffer[6] = transform_matrix[3] * vertex_data[6] + 
                         vertex_buffer[4] * vertex_data[2] + 
                         transform_matrix[0] * vertex_data[10];
        stack_buffer[7] = transform_matrix[3] * vertex_data[7] + 
                         vertex_buffer[4] * vertex_data[3] + 
                         transform_matrix[0] * vertex_data[11];
        
        // 计算第三行变换
        transform_matrix[0] = vertex_buffer[10];
        transform_matrix[2] = vertex_buffer[12];
        stack_buffer[8] = transform_matrix[4] * vertex_data[4] + 
                         transform_matrix[1] * vertex_data[0] + 
                         transform_matrix[0] * vertex_data[8];
        stack_buffer[9] = transform_matrix[4] * vertex_data[5] + 
                         transform_matrix[1] * vertex_data[1] + 
                         transform_matrix[0] * vertex_data[9];
        stack_buffer[10] = transform_matrix[4] * vertex_data[6] + 
                          transform_matrix[1] * vertex_data[2] + 
                          transform_matrix[0] * vertex_data[10];
        stack_buffer[11] = transform_matrix[4] * vertex_data[7] + 
                          transform_matrix[1] * vertex_data[3] + 
                          transform_matrix[0] * vertex_data[11];
        
        // 计算第四行变换（包含平移）
        transform_matrix[0] = vertex_buffer[14];
        stack_buffer[12] = transform_matrix[5] * vertex_data[4] + 
                          transform_matrix[2] * vertex_data[0] + 
                          transform_matrix[0] * vertex_data[8] + 
                          vertex_data[12];
        stack_buffer[13] = transform_matrix[5] * vertex_data[5] + 
                          transform_matrix[2] * vertex_data[1] + 
                          transform_matrix[0] * vertex_data[9] + 
                          vertex_data[13];
        stack_buffer[14] = transform_matrix[5] * vertex_data[6] + 
                          transform_matrix[2] * vertex_data[2] + 
                          transform_matrix[0] * vertex_data[10] + 
                          vertex_data[14];
        stack_buffer[15] = transform_matrix[5] * vertex_data[7] + 
                          transform_matrix[2] * vertex_data[3] + 
                          transform_matrix[0] * vertex_data[11] + 
                          vertex_data[15];
        
        // 检查是否启用高级渲染效果
        if (((*(char*)(shader_program + 0x3f61) != '\0') && 
            ((*(uint8_t*)(render_target + 0x1bd8) & 0x20) != 0)) && 
            (*(int32_t*)(g_rendering_max_instances + 0x620) != -1)) 
        {
            // 检查实例数量限制
            if (instance_count <= *(int32_t*)(g_rendering_current_frame + 0x2f8)) 
            {
                *(uint8_t*)(render_device + 0x44) = 1;
            }
            
            // 获取渲染上下文
            render_context = *(int64_t*)(render_device + 0x48);
            if (*(int32_t*)(render_context + 0x328) == 
                *(int32_t*)(g_rendering_random_seed + 0x224)) 
            {
                // 检查渲染状态
                if (((*(char*)(render_device + 0xbc) == '\0') &&
                    ((*(uint8_t*)(*(int64_t*)(render_context + 0x3c8) + 0x28) & 1) == 0)) &&
                   (*(int32_t*)(g_rendering_random_seed + 0x224) + -1 != instance_count)) 
                {
                    *(uint8_t*)(render_device + 0x44) = 1;
                }
                
                // 检查渲染程序状态
                if (*(int32_t*)(render_device + 0x30) == 
                    *(int32_t*)(*(int64_t*)(render_context + 0x3c8) + 0x10)) 
                {
                    // 计算光照强度
                    light_intensity = (stack_buffer[13] * 2.3f + stack_buffer[12] * 1.7f) * 8.0f + 
                                    (float)g_rendering_lookup_table * RENDERING_PRECISION_FACTOR;
                    
                    // 计算插值参数
                    temp_data_1 = (uint32_t)light_intensity;
                    temp_data_2 = temp_data_1 & 0x800000ff;
                    if ((int32_t)temp_data_2 < 0) 
                    {
                        temp_data_2 = (temp_data_2 - 1 | 0xffffff00) + 1;
                    }
                    
                    vertex_buffer = *(float**)(shader_program + 0x81f0);
                    temp_data_3 = temp_data_2 + 1 & 0x800000ff;
                    if ((int32_t)temp_data_3 < 0) 
                    {
                        temp_data_3 = (temp_data_3 - 1 | 0xffffff00) + 1;
                    }
                    
                    // 执行光照插值计算
                    light_intensity = ((*(float*)(&g_rendering_lookup_table + (int64_t)(int32_t)temp_data_3 * 4) -
                                      *(float*)(&g_rendering_lookup_table + (int64_t)(int32_t)temp_data_2 * 4)) *
                                     (light_intensity - (float)(int32_t)temp_data_1) +
                                    *(float*)(&g_rendering_lookup_table + (int64_t)(int32_t)temp_data_2 * 4)) * 
                                   *vertex_buffer + 1.0f;
                    
                    // 根据渲染模式处理着色器参数
                    if (*(int32_t*)(render_device + 0x70) == 1) 
                    {
                        // 模式1：简单着色
                        shader_values[0] = vertex_buffer[3];
                        color_values[1] = shader_values[0] * *(float*)(render_device + 0x7c) * light_intensity;
                        shader_values[2] = shader_values[0] * *(float*)(render_device + 0x74) * light_intensity;
                        final_matrix[2] = shader_values[0] * *(float*)(render_device + 0x78) * light_intensity;
                    }
                    else if (*(int32_t*)(render_device + 0x70) == 2) 
                    {
                        // 模式2：复杂着色
                        color_values[0] = *(float*)(render_device + 0x78);
                        color_values[1] = *(float*)(render_device + 0x74);
                        position_values[0] = *(float*)(render_device + 0x7c);
                        shader_values[0] = light_intensity * vertex_buffer[3];
                        color_values[1] = (stack_buffer[9] * color_values[0] + stack_buffer[8] * color_values[1] + 
                                         stack_buffer[10] * position_values[0]) * shader_values[0];
                        shader_values[2] = (stack_buffer[1] * color_values[0] + stack_buffer[0] * color_values[1] + 
                                          stack_buffer[2] * position_values[0]) * shader_values[0];
                        final_matrix[2] = (stack_buffer[5] * color_values[0] + stack_buffer[4] * color_values[1] + 
                                         stack_buffer[6] * position_values[0]) * shader_values[0];
                    }
                    else 
                    {
                        // 模式3：默认着色
                        color_values[0] = vertex_buffer[3] * vertex_buffer[2];
                        color_values[1] = vertex_buffer[3] * vertex_buffer[1];
                        shader_values[2] = color_values[0] * stack_buffer[1] + stack_buffer[0] * color_values[1] + 
                                          stack_buffer[2] * 0.0f;
                        shader_values[0] = color_values[0] * stack_buffer[9] + stack_buffer[8] * color_values[1] + 
                                          stack_buffer[10] * 0.0f;
                        color_values[1] = color_values[0] * stack_buffer[5] + stack_buffer[4] * color_values[1] + 
                                          stack_buffer[6] * 0.0f;
                        final_matrix[2] = color_values[0] * stack_buffer[13] + stack_buffer[12] * color_values[1] + 
                                         stack_buffer[14] * 0.0f;
                    }
                    
                    // 生成随机数用于渲染效果
                    temp_data_1 = final_matrix[2];
                    g_rendering_random_seed = g_rendering_random_seed << 0xd ^ g_rendering_random_seed;
                    g_rendering_random_seed = g_rendering_random_seed >> 0x11 ^ g_rendering_random_seed;
                    temp_data_2 = g_rendering_random_seed << 5 ^ g_rendering_random_seed;
                    g_rendering_random_seed = temp_data_2 << 0xd ^ temp_data_2;
                    g_rendering_random_seed = g_rendering_random_seed >> 0x11 ^ g_rendering_random_seed;
                    g_rendering_random_seed = g_rendering_random_seed << 5 ^ g_rendering_random_seed;
                    
                    // 计算最终渲染参数
                    color_values[0] = sqrtf(shader_values[0] * shader_values[0] + shader_values[2] * shader_values[2] + 
                                           color_values[1] * color_values[1]);
                    final_matrix[0] = shader_values[0] + ((float)(g_rendering_random_seed - 1) * 4.656613e-11f - 0.1f) * 
                                     color_values[0];
                    final_matrix[1] = shader_values[2] + ((float)(temp_data_2 - 1) * 4.656613e-11f - 0.1f) * 
                                     color_values[0];
                    
                    // 处理渲染对象
                    if (*(int64_t*)(render_device + 0x38) == 0) 
                    {
                        batch_complete = true;
                        object_data = (int32_t)(*(int64_t*)(*(int64_t*)(render_device + 0x48) + 0x40) -
                                              *(int64_t*)(*(int64_t*)(render_device + 0x48) + 0x38) >> 4);
                        render_context = (int64_t)object_data;
                        
                        if (0 < object_data) 
                        {
                            batch_data = 0;
                            do 
                            {
                                object_data = *(int64_t*)(batch_data + *(int64_t*)(*(int64_t*)(render_device + 0x48) + 0x38));
                                render_context = *(int64_t*)(object_data + 0x118);
                                
                                if (render_context != 0) 
                                {
                                    if (*(int32_t*)(render_context + 0x118) < 1) 
                                    {
                                        batch_complete = false;
                                    }
                                    else 
                                    {
                                        // 设置渲染参数
                                        *(uint32_t*)(render_context + 0x110) = render_state;
                                        rendering_system_advanced_control(render_device, object_data, 
                                                                         (int32_t)render_flags, shader_params, 
                                                                         texture_id, &stack_buffer[0], 
                                                                         *(uint8_t*)(render_device + 0x44), 
                                                                         &final_matrix[0], light_intensity, 
                                                                         *(uint32_t*)(render_device + 0xb8));
                                        *(uint32_t*)(render_context + 0x118) = 0;
                                    }
                                }
                                batch_data = batch_data + 0x10;
                                render_context = render_context + -1;
                            } while (render_context != 0);
                        }
                        
                        // 检查批处理完成状态
                        if ((*(char*)(render_device + 0x44) != '\0') && (batch_complete)) 
                        {
                            *(uint8_t*)(render_device + 0x44) = 0;
                        }
                    }
                    else 
                    {
                        // 处理单个渲染对象
                        render_context = *(int64_t*)(*(int64_t*)(render_device + 0x38) + 0x118);
                        if (0 < *(int32_t*)(render_context + 0x118)) 
                        {
                            render_flags = *(char*)(render_context + 0x13d);
                            *(uint32_t*)(render_context + 0x110) = render_state;
                            rendering_system_advanced_control(render_device, *(uint64_t*)(render_device + 0x38), 
                                                             (int32_t)render_flags, shader_params, texture_id, 
                                                             &stack_buffer[0], *(uint8_t*)(render_device + 0x44), 
                                                             &final_matrix[0], light_intensity, 
                                                             *(uint32_t*)(render_device + 0xb8));
                            
                            batch_data = 0;
                            if (((render_flags == '\0') && (*(char*)(render_context + 0x13d) == '\x01')) &&
                               (object_data = (int32_t)(*(int64_t*)(*(int64_t*)(render_device + 0x48) + 0x40) -
                                               *(int64_t*)(*(int64_t*)(render_device + 0x48) + 0x38) >> 4),
                               render_context = (int64_t)object_data, 0 < object_data)) 
                            {
                                do 
                                {
                                    render_context = *(int64_t*)
                                                    (*(int64_t*)
                                                      (*(int64_t*)(*(int64_t*)(render_device + 0x48) + 0x38) + batch_data) + 0x118);
                                    if (render_context != 0) 
                                    {
                                        *(uint8_t*)(render_context + 0x13d) = 1;
                                    }
                                    batch_data = batch_data + 0x10;
                                    render_context = render_context + -1;
                                } while (render_context != 0);
                            }
                            *(uint8_t*)(render_device + 0x44) = 0;
                            *(uint32_t*)(render_context + 0x118) = 0;
                        }
                    }
                }
            }
        }
    }
    return;
}

/**
 * 渲染系统高级控制函数
 * 
 * 该函数负责处理高级渲染控制操作，包括：
 * - 渲染参数优化
 * - 渲染状态管理
 * - 性能监控
 * - 资源调度
 * - 错误处理
 * 
 * @param render_manager 渲染管理器指针
 */
void rendering_system_advanced_control
(
    int64_t* render_manager           // 渲染管理器指针
)
{
    // 局部变量声明
    float matrix_registers[12];      // 矩阵寄存器
    float color_registers[8];         // 颜色寄存器
    char render_state_1;              // 渲染状态1
    char render_state_2;              // 渲染状态2
    uint32_t param_1;                 // 参数1
    uint32_t param_2;                 // 参数2
    int64_t object_data;              // 对象数据
    bool render_complete;             // 渲染完成标志
    float shader_values[4];          // 着色器值
    float position_values[4];         // 位置值
    float final_values[4];           // 最终值
    int32_t render_count;             // 渲染计数
    int64_t context_data;             // 上下文数据
    int64_t batch_data;               // 批处理数据
    float* vertex_buffer;             // 顶点缓冲区
    uint32_t hash_value_1;            // 哈希值1
    uint32_t hash_value_2;            // 哈希值2
    uint32_t hash_value_3;            // 哈希值3
    int64_t transform_data;           // 变换数据
    int64_t render_context;           // 渲染上下文
    float light_intensity;            // 光照强度
    float color_intensity;            // 颜色强度
    
    // 保存矩阵寄存器状态
    matrix_registers[0] = color_registers[0];
    matrix_registers[1] = color_registers[1];
    matrix_registers[2] = color_registers[2];
    matrix_registers[3] = color_registers[3];
    matrix_registers[4] = color_registers[4];
    matrix_registers[5] = color_registers[5];
    matrix_registers[6] = color_registers[6];
    matrix_registers[7] = color_registers[7];
    matrix_registers[8] = shader_values[0];
    matrix_registers[9] = shader_values[1];
    matrix_registers[10] = shader_values[2];
    matrix_registers[11] = shader_values[3];
    
    // 获取顶点缓冲区
    if (*(void**)(*render_manager + 0x158) == (void*)&g_rendering_lookup_table) 
    {
        vertex_buffer = (float*)(render_manager + 0x66);
    }
    else 
    {
        vertex_buffer = (float*)(*(void**)(*render_manager + 0x158))();
    }
    
    // 获取渲染状态
    render_state_1 = *(char*)(render_context + 0x3f61);
    position_values[0] = *vertex_buffer;
    position_values[1] = vertex_buffer[1];
    position_values[2] = vertex_buffer[2];
    position_values[3] = vertex_buffer[3];
    color_registers[0] = vertex_buffer[4];
    color_registers[1] = vertex_buffer[5];
    color_registers[2] = vertex_buffer[6];
    color_registers[3] = vertex_buffer[7];
    shader_values[0] = vertex_buffer[8];
    shader_values[1] = vertex_buffer[9];
    shader_values[2] = vertex_buffer[10];
    shader_values[3] = vertex_buffer[11];
    
    // 执行矩阵变换计算
    light_intensity = vertex_buffer[1];
    color_intensity = vertex_buffer[0];
    final_values[0] = vertex_buffer[2];
    final_values[1] = vertex_buffer[5];
    final_values[2] = vertex_buffer[9];
    final_values[3] = vertex_buffer[13];
    
    // 计算第一行变换
    matrix_registers[0] = light_intensity * color_registers[0] + 
                         color_intensity * position_values[0] + 
                         final_values[0] * shader_values[0];
    matrix_registers[1] = light_intensity * color_registers[1] + 
                         color_intensity * position_values[1] + 
                         final_values[0] * shader_values[1];
    matrix_registers[2] = light_intensity * color_registers[2] + 
                         color_intensity * position_values[2] + 
                         final_values[0] * shader_values[2];
    
    // 计算第二行变换
    final_values[0] = vertex_buffer[6];
    final_values[1] = vertex_buffer[8];
    matrix_registers[4] = final_values[1] * color_registers[0] + 
                         final_values[3] * position_values[0] + 
                         final_values[0] * shader_values[0];
    matrix_registers[5] = final_values[1] * color_registers[1] + 
                         final_values[3] * position_values[1] + 
                         final_values[0] * shader_values[1];
    matrix_registers[6] = final_values[1] * color_registers[2] + 
                         final_values[3] * position_values[2] + 
                         final_values[0] * shader_values[2];
    matrix_registers[7] = final_values[1] * color_registers[3] + 
                         final_values[3] * position_values[3] + 
                         final_values[0] * shader_values[3];
    
    // 计算第三行变换
    final_values[0] = vertex_buffer[10];
    final_values[1] = vertex_buffer[12];
    matrix_registers[8] = final_values[2] * color_registers[0] + 
                         final_values[1] * position_values[0] + 
                         final_values[0] * shader_values[0];
    matrix_registers[9] = final_values[2] * color_registers[1] + 
                         final_values[1] * position_values[1] + 
                         final_values[0] * shader_values[1];
    matrix_registers[10] = final_values[2] * color_registers[2] + 
                          final_values[1] * position_values[2] + 
                          final_values[0] * shader_values[2];
    matrix_registers[11] = final_values[2] * color_registers[3] + 
                          final_values[1] * position_values[3] + 
                          final_values[0] * shader_values[3];
    
    // 计算第四行变换（包含平移）
    final_values[0] = vertex_buffer[14];
    matrix_registers[12] = final_values[3] * color_registers[0] + 
                          final_values[1] * position_values[0] + 
                          final_values[0] * shader_values[0] + 
                          vertex_buffer[12];
    matrix_registers[13] = final_values[3] * color_registers[1] + 
                          final_values[1] * position_values[1] + 
                          final_values[0] * shader_values[1] + 
                          vertex_buffer[13];
    matrix_registers[14] = final_values[3] * color_registers[2] + 
                          final_values[1] * position_values[2] + 
                          final_values[0] * shader_values[2] + 
                          vertex_buffer[14];
    matrix_registers[15] = final_values[3] * color_registers[3] + 
                          final_values[1] * position_values[3] + 
                          final_values[0] * shader_values[3] + 
                          vertex_buffer[15];
    
    // 检查是否启用高级渲染效果
    if (((render_state_1 != '\0') && 
        ((*(uint8_t*)(transform_data + 0x1bd8) & 0x20) != 0)) && 
        (*(int32_t*)(g_rendering_max_instances + 0x620) != -1)) 
    {
        // 获取渲染计数
        render_count = *(int32_t*)(render_context + 0x77);
        if (render_count <= *(int32_t*)(g_rendering_current_frame + 0x2f8)) 
        {
            *(uint8_t*)(render_manager + 0x44) = 1;
        }
        
        // 获取渲染上下文
        transform_data = *(int64_t*)(render_manager + 0x48);
        if (*(int32_t*)(transform_data + 0x328) == 
            *(int32_t*)(g_rendering_random_seed + 0x224)) 
        {
            // 检查渲染状态
            if (((*(char*)(render_manager + 0xbc) == '\0') &&
                ((*(uint8_t*)(*(int64_t*)(transform_data + 0x3c8) + 0x28) & 1) == 0)) &&
               (*(int32_t*)(g_rendering_random_seed + 0x224) + -1 != render_count)) 
            {
                *(uint8_t*)(render_manager + 0x44) = 1;
            }
            
            // 检查渲染程序状态
            if (*(int32_t*)(render_manager + 0x30) == 
                *(int32_t*)(*(int64_t*)(transform_data + 0x3c8) + 0x10)) 
            {
                // 计算光照强度
                light_intensity = (matrix_registers[13] * 2.3f + matrix_registers[12] * 1.7f) * 8.0f + 
                                 (float)g_rendering_lookup_table * RENDERING_PRECISION_FACTOR;
                
                // 计算插值参数
                hash_value_1 = (uint32_t)light_intensity;
                hash_value_2 = hash_value_1 & 0x800000ff;
                if ((int32_t)hash_value_2 < 0) 
                {
                    hash_value_2 = (hash_value_2 - 1 | 0xffffff00) + 1;
                }
                
                vertex_buffer = *(float**)(render_context + 0x81f0);
                hash_value_3 = hash_value_2 + 1 & 0x800000ff;
                if ((int32_t)hash_value_3 < 0) 
                {
                    hash_value_3 = (hash_value_3 - 1 | 0xffffff00) + 1;
                }
                
                // 执行光照插值计算
                light_intensity = ((*(float*)(&g_rendering_lookup_table + (int64_t)(int32_t)hash_value_3 * 4) -
                                  *(float*)(&g_rendering_lookup_table + (int64_t)(int32_t)hash_value_2 * 4)) *
                                 (light_intensity - (float)(int32_t)hash_value_1) +
                                *(float*)(&g_rendering_lookup_table + (int64_t)(int32_t)hash_value_2 * 4)) * 
                               *vertex_buffer + 1.0f;
                
                // 根据渲染模式处理着色器参数
                if (*(int32_t*)(render_manager + 0x70) == 1) 
                {
                    // 模式1：简单着色
                    position_values[0] = vertex_buffer[3];
                    position_values[1] = *(float*)(render_manager + 0x74);
                    position_values[2] = *(float*)(render_manager + 0x78);
                    shader_values[2] = position_values[0] * *(float*)(render_manager + 0x7c) * light_intensity;
                    color_registers[3] = 0x7f7fffff;
                    position_values[1] = position_values[0] * position_values[1] * light_intensity;
                    light_intensity = position_values[0] * position_values[2] * light_intensity;
                }
                else if (*(int32_t*)(render_manager + 0x70) == 2) 
                {
                    // 模式2：复杂着色
                    position_values[0] = *(float*)(render_manager + 0x78);
                    position_values[1] = *(float*)(render_manager + 0x74);
                    position_values[2] = *(float*)(render_manager + 0x7c);
                    light_intensity = light_intensity * vertex_buffer[3];
                    shader_values[2] = (matrix_registers[9] * position_values[0] + matrix_registers[8] * position_values[1] + 
                                     matrix_registers[10] * position_values[2]) * light_intensity;
                    color_registers[3] = matrix_registers[11] * position_values[0] + matrix_registers[11] * position_values[1] + 
                                        matrix_registers[11] * position_values[2];
                    position_values[1] = (matrix_registers[5] * position_values[0] + matrix_registers[4] * position_values[1] + 
                                        matrix_registers[6] * position_values[2]) * light_intensity;
                    shader_values[2] = shader_values[2];
                    light_intensity = (matrix_registers[1] * position_values[0] + matrix_registers[0] * position_values[1] + 
                                     matrix_registers[2] * position_values[2]) * light_intensity;
                }
                else 
                {
                    // 模式3：默认着色
                    shader_values[2] = vertex_buffer[3] * vertex_buffer[2];
                    light_intensity = vertex_buffer[3] * vertex_buffer[1];
                    position_values[1] = shader_values[2] * matrix_registers[1] + matrix_registers[0] * light_intensity + 
                                       matrix_registers[2] * 0.0f;
                    shader_values[2] = shader_values[2] * matrix_registers[9] + matrix_registers[8] * light_intensity + 
                                       matrix_registers[10] * 0.0f;
                    light_intensity = matrix_registers[5];
                }
                
                // 生成随机数用于渲染效果
                g_rendering_random_seed = g_rendering_random_seed << 0xd ^ g_rendering_random_seed;
                g_rendering_random_seed = g_rendering_random_seed >> 0x11 ^ g_rendering_random_seed;
                g_rendering_random_seed = g_rendering_random_seed << 5 ^ g_rendering_random_seed;
                g_rendering_random_seed = g_rendering_random_seed << 0xd ^ g_rendering_random_seed;
                g_rendering_random_seed = g_rendering_random_seed >> 0x11 ^ g_rendering_random_seed;
                g_rendering_random_seed = g_rendering_random_seed << 5 ^ g_rendering_random_seed;
                
                // 获取渲染上下文
                transform_data = *(int64_t*)(render_manager + 0x38);
                light_intensity = shader_values[2] + ((float)(g_rendering_random_seed - 1) * 4.656613e-11f - 0.1f) *
                                 sqrtf(light_intensity * light_intensity + position_values[1] * position_values[1] + 
                                       shader_values[2] * shader_values[2]);
                
                // 处理渲染对象
                if (transform_data == 0) 
                {
                    render_complete = true;
                    render_count = (int32_t)(*(int64_t*)(*(int64_t*)(render_manager + 0x48) + 0x40) -
                                           *(int64_t*)(*(int64_t*)(render_manager + 0x48) + 0x38) >> 4);
                    transform_data = (int64_t)render_count;
                    
                    if (0 < render_count) 
                    {
                        param_1 = *(uint32_t*)(render_context + 0x7f);
                        batch_data = 0;
                        do 
                        {
                            context_data = *(int64_t*)(batch_data + *(int64_t*)(*(int64_t*)(render_manager + 0x48) + 0x38));
                            object_data = *(int64_t*)(context_data + 0x118);
                            
                            if (object_data != 0) 
                            {
                                if (*(int32_t*)(object_data + 0x118) < 1) 
                                {
                                    render_complete = false;
                                }
                                else 
                                {
                                    // 设置渲染参数
                                    render_state_1 = *(char*)(render_context + 0x5f);
                                    param_2 = *(uint32_t*)(render_context + 0x67);
                                    *(uint32_t*)(object_data + 0x110) = param_1;
                                    rendering_system_advanced_control(render_manager, context_data, 
                                                                     (int32_t)render_state_1, param_2,
                                                                     *(uint32_t*)(render_context + 0x6f));
                                    *(uint32_t*)(object_data + 0x118) = 0;
                                }
                            }
                            batch_data = batch_data + 0x10;
                            transform_data = transform_data + -1;
                        } while (transform_data != 0);
                    }
                    
                    // 检查渲染完成状态
                    if ((*(char*)(render_manager + 0x44) != '\0') && (render_complete)) 
                    {
                        *(uint8_t*)(render_manager + 0x44) = 0;
                    }
                }
                else 
                {
                    // 处理单个渲染对象
                    transform_data = *(int64_t*)(transform_data + 0x118);
                    if (0 < *(int32_t*)(transform_data + 0x118)) 
                    {
                        render_state_1 = *(char*)(render_context + 0x5f);
                        param_1 = *(uint32_t*)(render_context + 0x67);
                        render_state_2 = *(char*)(transform_data + 0x13d);
                        *(uint32_t*)(transform_data + 0x110) = *(uint32_t*)(render_context + 0x7f);
                        rendering_system_advanced_control(render_manager, *(uint64_t*)(render_manager + 0x38), 
                                                         (int32_t)render_state_1, param_1,
                                                         *(uint32_t*)(render_context + 0x6f));
                        
                        batch_data = 0;
                        if (((render_state_2 == '\0') && (*(char*)(transform_data + 0x13d) == '\x01')) &&
                           (render_count = (int32_t)(*(int64_t*)(*(int64_t*)(render_manager + 0x48) + 0x40) -
                                           *(int64_t*)(*(int64_t*)(render_manager + 0x48) + 0x38) >> 4),
                           context_data = (int64_t)render_count, 0 < render_count)) 
                        {
                            do 
                            {
                                object_data = *(int64_t*)
                                              (*(int64_t*)
                                                (*(int64_t*)(*(int64_t*)(render_manager + 0x48) + 0x38) + batch_data) + 0x118);
                                if (object_data != 0) 
                                {
                                    *(uint8_t*)(object_data + 0x13d) = 1;
                                }
                                batch_data = batch_data + 0x10;
                                context_data = context_data + -1;
                            } while (context_data != 0);
                        }
                        *(uint8_t*)(render_manager + 0x44) = 0;
                        *(uint32_t*)(transform_data + 0x118) = 0;
                    }
                }
            }
        }
    }
    return;
}

/*==============================================================================
    函数别名定义 - 保持与原始代码的兼容性
==============================================================================*/

// 原始函数名别名
#define FUN_18030a720 rendering_system_transform_matrix
#define FUN_18030aab0 rendering_system_process_pipeline  
#define FUN_18030aade rendering_system_advanced_control

/*==============================================================================
    全局变量声明 - 与原始代码保持一致
==============================================================================*/

// 渲染系统全局变量
uint32_t _DAT_180bf65b8 = 0;              // 渲染系统随机数种子
float* _DAT_180c86920 = NULL;              // 渲染系统数据指针
float* _DAT_180c86870 = NULL;              // 渲染系统配置指针
float* _DAT_180c8a980 = NULL;              // 渲染系统状态指针
float* _DAT_180c8ed30 = NULL;              // 渲染系统参数指针
float* global_state_5296 = NULL;               // 渲染系统查找表
float* global_state_9304 = NULL;               // 渲染系统引用表
void* global_state_2528 = NULL;                // 渲染系统函数表

/*==============================================================================
    外部函数声明
==============================================================================*/

// 渲染系统外部函数
extern void FUN_180309bd0(uint64_t param_1, uint32_t param_2, uint32_t param_3, 
                         uint8_t param_4, float* param_5);
extern char FUN_1800f5a90(int32_t param_1, int64_t param_2, float* param_3, 
                         uint64_t* param_4);
extern void FUN_18024c560(uint32_t param_1, int64_t param_2, int32_t param_3, 
                         uint32_t param_4, uint32_t param_5, float* param_6, 
                         uint8_t param_7, float* param_8, float param_9, 
                         uint32_t param_10);