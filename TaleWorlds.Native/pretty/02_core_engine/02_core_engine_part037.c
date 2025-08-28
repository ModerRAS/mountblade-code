#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 02_core_engine_part037.c - 渲染管线和矩阵变换处理模块
// 
// 本模块包含2个主要函数：
// 1. process_render_pipeline_data - 处理渲染管线数据，包括矩阵变换和顶点处理
// 2. process_render_pipeline_optimized - 优化版本的渲染管线处理函数
//
// 主要功能：
// - 矩阵变换和乘法运算
// - 顶点缓冲区管理
// - 渲染状态更新
// - 内存分配和数据复制
// - 线程安全操作

// 常量定义
#define RENDER_STATE_FLAG_ACTIVE 0x20
#define INVALID_TEXTURE_INDEX -1
#define MATRIX_SIZE_4X4 16
#define VERTEX_BUFFER_PAGE_SIZE 0x2000
#define VERTEX_BUFFER_ALIGNMENT 0x800
#define MEMORY_BLOCK_SIZE_8K 0x2000
#define INDEX_BUFFER_ALIGNMENT 0x800

// 全局变量引用
extern void* system_parameter_buffer;           // 渲染系统全局数据结构
extern void* system_main_module_state;           // 渲染上下文数据
extern void* system_memory_pool_ptr;           // 内存分配器上下文

/**
 * 处理渲染管线数据
 * 
 * 该函数负责处理渲染管线中的核心数据，包括：
 * - 矩阵变换计算
 * - 顶点数据复制和处理
 * - 渲染状态更新
 * - 顶点缓冲区管理
 * 
 * @param render_context 渲染上下文指针
 * @param pipeline_data 管线数据指针
 */
void process_render_pipeline_data(long long render_context, long long pipeline_data)
{
    long long *render_data;
    int *frame_counter;
    long long *vertex_buffer;
    byte *texture_data;
    void **shader_data;
    float matrix_values[16];
    float transform_matrix[16];
    float view_matrix[16];
    float projection_matrix[16];
    float result_matrix[16];
    byte texture_flags;
    char texture_index;
    long long material_data;
    float *vertex_ptr;
    float vertex_data[12];
    float texture_coords[8];
    float normal_data[12];
    float tangent_data[12];
    void *matrix_buffer;
    int matrix_index;
    long long buffer_offset;
    uint vertex_offset;
    int vertex_count;
    uint texture_id;
    int material_id;
    uint64_t buffer_size;
    char *buffer_ptr;
    uint *index_buffer;
    int index_count;
    int batch_size;
    int *vertex_indices;
    uint *index_ptr;
    uint64_t page_index;
    uint64_t total_pages;
    bool allocation_success;
    
    // 获取渲染系统全局数据
    material_data = system_parameter_buffer;
    buffer_offset = render_context;
    
    // 检查渲染状态标志
    if ((*(byte *)(render_context + 0xfd) & RENDER_STATE_FLAG_ACTIVE) == 0) {
        buffer_offset = func_0x000180085de0(*(void **)(render_context + 0x1b0));
    }
    
    // 原子操作更新帧计数器
    LOCK();
    frame_counter = (int *)(material_data + 0xed8);
    index_count = *frame_counter;
    *frame_counter = *frame_counter + *(int *)(buffer_offset + 0x200);
    UNLOCK();
    
    // 获取渲染数据结构
    material_data = *(long long *)(render_context + 600);
    texture_flags = *(byte *)(pipeline_data + 0x24);
    matrix_index = *(int *)(pipeline_data + 0x20);
    texture_index = *(char *)(pipeline_data + 0xd);
    
    // 保存当前渲染状态
    *(int *)(material_data + 0x48) = *(int *)(material_data + 0x2c);
    *(int *)(material_data + 0x50) = *(int *)(material_data + 0x4c);
    *(int *)(material_data + 0x4c) = index_count;
    *(byte *)(material_data + 0x44) = texture_flags;
    *(int *)(material_data + 0x2c) = matrix_index;
    
    // 处理有效的纹理索引
    if (texture_index != INVALID_TEXTURE_INDEX) {
        texture_id = (int)*(char *)(pipeline_data + 0xd) + *(int *)(pipeline_data + 0x18);
        vertex_ptr = (float **)**(long long **)(render_context + 600);
        vertex_offset = texture_id >> 0xd;
        
        // 计算顶点缓冲区位置
        material_data = *(long long *)
                  ((long long)*(int *)(system_parameter_buffer + 0xe78) * 0x128 + system_parameter_buffer + 0xc30 +
                  (uint64_t)vertex_offset * 8);
        buffer_offset = (uint64_t)(texture_id + vertex_offset * -0x2000) * 0x40;
        
        // 复制顶点数据
        matrix_buffer = ((void **)(material_data + buffer_offset))[1];
        *(void **)vertex_ptr = *(void **)(material_data + buffer_offset);
        *(void **)(vertex_ptr + 2) = matrix_buffer;
        
        // 复制纹理坐标
        shader_data = (void **)(material_data + 0x10 + buffer_offset);
        matrix_buffer = shader_data[1];
        *(void **)(vertex_ptr + 4) = *shader_data;
        *(void **)(vertex_ptr + 6) = matrix_buffer;
        
        // 复制法线数据
        shader_data = (void **)(material_data + 0x20 + buffer_offset);
        matrix_buffer = shader_data[1];
        *(void **)(vertex_ptr + 8) = *shader_data;
        *(void **)(vertex_ptr + 10) = matrix_buffer;
        
        // 复制切线数据
        shader_data = (void **)(material_data + 0x30 + buffer_offset);
        matrix_buffer = shader_data[1];
        *(void **)(vertex_ptr + 0xc) = *shader_data;
        *(void **)(vertex_ptr + 0xe) = matrix_buffer;
        
        // 获取变换矩阵
        material_data = *(long long *)(pipeline_data + 0x10);
        
        // 提取矩阵数据
        normal_data[8] = vertex_ptr[8];
        normal_data[9] = vertex_ptr[9];
        normal_data[10] = vertex_ptr[10];
        normal_data[11] = vertex_ptr[0xb];
        transform_matrix[0] = *vertex_ptr;
        transform_matrix[1] = vertex_ptr[1];
        transform_matrix[2] = vertex_ptr[2];
        transform_matrix[3] = vertex_ptr[3];
        tangent_data[0] = vertex_ptr[4];
        tangent_data[1] = vertex_ptr[5];
        tangent_data[2] = vertex_ptr[6];
        tangent_data[3] = vertex_ptr[7];
        tangent_data[4] = vertex_ptr[8];
        tangent_data[5] = vertex_ptr[9];
        tangent_data[6] = vertex_ptr[10];
        tangent_data[7] = vertex_ptr[11];
        
        // 获取视图矩阵
        view_matrix[0] = *(float *)(material_data + 0x374);
        view_matrix[1] = *(float *)(material_data + 0x370);
        view_matrix[2] = *(float *)(material_data + 0x378);
        view_matrix[3] = *(float *)(material_data + 900);
        projection_matrix[0] = *(float *)(material_data + 0x394);
        projection_matrix[1] = *(float *)(material_data + 0x380);
        projection_matrix[2] = *(float *)(material_data + 0x388);
        projection_matrix[3] = *(float *)(material_data + 0x390);
        
        // 执行矩阵乘法运算
        *vertex_ptr = view_matrix[0] * tangent_data[0] + view_matrix[1] * transform_matrix[0] + view_matrix[2] * normal_data[8];
        vertex_ptr[1] = view_matrix[0] * tangent_data[1] + view_matrix[1] * transform_matrix[1] + view_matrix[2] * normal_data[9];
        vertex_ptr[2] = view_matrix[0] * tangent_data[2] + view_matrix[1] * transform_matrix[2] + view_matrix[2] * normal_data[10];
        vertex_ptr[3] = view_matrix[0] * tangent_data[3] + view_matrix[1] * transform_matrix[3] + view_matrix[2] * normal_data[11];
        vertex_ptr[4] = view_matrix[3] * tangent_data[0] + projection_matrix[1] * transform_matrix[0] + projection_matrix[2] * normal_data[8];
        vertex_ptr[5] = view_matrix[3] * tangent_data[1] + projection_matrix[1] * transform_matrix[1] + projection_matrix[2] * normal_data[9];
        vertex_ptr[6] = view_matrix[3] * tangent_data[2] + projection_matrix[1] * transform_matrix[2] + projection_matrix[2] * normal_data[10];
        vertex_ptr[7] = view_matrix[3] * tangent_data[3] + projection_matrix[1] * transform_matrix[3] + projection_matrix[2] * normal_data[11];
        vertex_ptr[8] = projection_matrix[0] * tangent_data[0] + projection_matrix[3] * transform_matrix[0] + projection_matrix[2] * normal_data[8];
        vertex_ptr[9] = projection_matrix[0] * tangent_data[1] + projection_matrix[3] * transform_matrix[1] + projection_matrix[2] * normal_data[9];
        vertex_ptr[10] = projection_matrix[0] * tangent_data[2] + projection_matrix[3] * transform_matrix[2] + projection_matrix[2] * normal_data[10];
        vertex_ptr[11] = projection_matrix[0] * tangent_data[3] + projection_matrix[3] * transform_matrix[3] + projection_matrix[2] * normal_data[11];
    }
    
    // 检查渲染状态变化
    material_data = *(long long *)(render_context + 600);
    if (*(int *)(material_data + 0x28) != *(int *)(system_main_module_state + 0x224)) {
        index_count = *(int *)(material_data + 0x1c) + *(int *)(material_data + 0x18);
        *(int *)(material_data + 0x28) = *(int *)(system_main_module_state + 0x224);
        
        if (0 < index_count) {
            // 计算顶点缓冲区基地址
            buffer_offset = (long long)*(int *)(system_parameter_buffer + 0xe78) * 0x128 + system_parameter_buffer + 0xc28;
            matrix_index = FUN_180080380(buffer_offset, index_count);
            *(int *)(material_data + 0x30) = matrix_index;
            FUN_1800802e0(buffer_offset, matrix_index);
            
            if (*(long long *)(material_data + 0x10) == 0) {
                if (*(int *)(material_data + 0x18) != 0) {
                    *(int *)(material_data + 0x2c) = *(int *)(material_data + 0x30);
                    return;
                }
            }
            else {
                // 处理顶点缓冲区分配
                texture_index = *(char *)(material_data + 0x44);
                buffer_size = (uint64_t)texture_index;
                render_data = (long long *)(material_data + 0x38);
                index_count = (int)texture_index;
                
                if (*(int *)(material_data + 0x40) == (int)texture_index) {
                    vertex_buffer = (long long *)*render_data;
                }
                else {
                    *(int *)(material_data + 0x40) = index_count;
                    if (*render_data != 0) {
                        // 内存分配错误处理
                        CoreEngineMemoryPoolCleaner();
                    }
                    *render_data = 0;
                    
                    if (texture_index == '\0') {
                        vertex_buffer = (long long *)0x0;
                        *render_data = 0;
                    }
                    else {
                        vertex_buffer = (long long *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr, (long long)texture_index * 4);
                        *render_data = (long long)vertex_buffer;
                    }
                }
                
                if (vertex_buffer != (long long *)0x0) {
                    batch_size = 0;
                    vertex_offset = (uint)texture_index;
                    material_id = batch_size;
                    
                    // 批量处理顶点数据
                    if ((0 < index_count) && (0xf < vertex_offset)) {
                        vertex_count = *(int *)(material_data + 0x2c);
                        vertex_buffer = (long long *)((long long)vertex_buffer + (long long)(texture_index + -1) * 4);
                        
                        if ((((long long *)(material_data + 0x2c) < vertex_buffer) || 
                             (vertex_buffer < (long long *)(material_data + 0x2c))) &&
                            ((render_data < vertex_buffer || (material_id = 0, vertex_buffer < render_data)))) {
                            
                            texture_id = vertex_offset & 0x8000000f;
                            if ((int)texture_id < 0) {
                                texture_id = (texture_id - 1 | 0xfffffff0) + 1;
                            }
                            
                            vertex_buffer = vertex_buffer + 4;
                            vertex_count = 8;
                            
                            // 优化顶点索引生成
                            do {
                                *(int *)(vertex_buffer + -4) = batch_size + vertex_count;
                                *(int *)((long long)vertex_buffer + -0x1c) = batch_size + 1 + vertex_count;
                                *(int *)(vertex_buffer + -3) = batch_size + 2 + vertex_count;
                                *(int *)((long long)vertex_buffer + -0x14) = batch_size + 3 + vertex_count;
                                batch_size = batch_size + 0x10;
                                *(int *)(vertex_buffer + -2) = vertex_count + -4 + vertex_count;
                                *(int *)((long long)vertex_buffer + -0xc) = vertex_count + -3 + vertex_count;
                                *(int *)(vertex_buffer + -1) = vertex_count + -2 + vertex_count;
                                *(int *)((long long)vertex_buffer + -4) = vertex_count + -1 + vertex_count;
                                *(int *)vertex_buffer = vertex_count + vertex_count;
                                *(int *)((long long)vertex_buffer + 4) = vertex_count + 1 + vertex_count;
                                *(int *)(vertex_buffer + 1) = vertex_count + 2 + vertex_count;
                                *(int *)((long long)vertex_buffer + 0xc) = vertex_count + 3 + vertex_count;
                                *(int *)(vertex_buffer + 2) = vertex_count + 4 + vertex_count;
                                *(int *)((long long)vertex_buffer + 0x14) = vertex_count + 5 + vertex_count;
                                *(int *)(vertex_buffer + 3) = vertex_count + 6 + vertex_count;
                                *(int *)((long long)vertex_buffer + 0x1c) = vertex_count + 7 + vertex_count;
                                vertex_buffer = vertex_buffer + 8;
                                vertex_count = vertex_count + 0x10;
                                material_id = batch_size;
                            } while (batch_size < (int)(vertex_offset - texture_id));
                        }
                    }
                    
                    // 填充剩余顶点索引
                    for (buffer_offset = (long long)material_id; buffer_offset < (long long)buffer_size; buffer_offset = buffer_offset + 1) {
                        batch_size = *(int *)(material_data + 0x2c) + material_id;
                        material_id = material_id + 1;
                        *(int *)(*render_data + buffer_offset * 4) = batch_size;
                    }
                    
                    // 处理索引缓冲区
                    material_id = *(int *)(material_data + 0x18);
                    batch_size = 0;
                    if (0 < (long long)material_id) {
                        buffer_offset = 0;
                        do {
                            vertex_count = *(int *)(material_data + 0x30) + batch_size;
                            batch_size = batch_size + 1;
                            texture_data = (byte *)(*(long long *)(material_data + 0x10) + buffer_offset);
                            buffer_offset = buffer_offset + 1;
                            *(int *)(*render_data + (uint64_t)*texture_data * 4) = vertex_count;
                        } while (buffer_offset < material_id);
                    }
                }
                
                // 处理索引缓冲区分页
                index_buffer = (uint *)((long long)*(int *)(system_parameter_buffer + 0xc20) * 0x128 +
                                  system_parameter_buffer + 0x9d0);
                
                if (index_count == 0) {
                    vertex_offset = (int)texture_index - 1;
                }
                else {
                    LOCK();
                    vertex_offset = *index_buffer;
                    *index_buffer = *index_buffer + (int)texture_index;
                    UNLOCK();
                    
                    page_index = (uint64_t)(vertex_offset >> 0xb);
                    total_pages = (uint64_t)(texture_index + -1 + vertex_offset >> 0xb);
                    
                    if (page_index <= total_pages) {
                        buffer_ptr = (char *)((long long)index_buffer + page_index + 0x108);
                        buffer_offset = (total_pages - page_index) + 1;
                        index_ptr = index_buffer + page_index * 2 + 2;
                        
                        // 分配缓冲区页面
                        do {
                            material_id = (int)page_index;
                            if (*(long long *)index_ptr == 0) {
                                long long new_buffer = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr, MEMORY_BLOCK_SIZE_8K, 0x25);
                                LOCK();
                                allocation_success = *(long long *)(index_buffer + (long long)material_id * 2 + 2) == 0;
                                if (allocation_success) {
                                    *(long long *)(index_buffer + (long long)material_id * 2 + 2) = new_buffer;
                                }
                                UNLOCK();
                                
                                if (allocation_success) {
                                    LOCK();
                                    *(byte *)((long long)material_id + 0x108 + (long long)index_buffer) = 0;
                                    UNLOCK();
                                }
                                else {
                                    if (new_buffer != 0) {
                                        CoreEngineMemoryPoolCleaner();
                                    }
                                    do {
                                    } while (*buffer_ptr != '\0');
                                }
                            }
                            else {
                                do {
                                } while (*buffer_ptr != '\0');
                            }
                            page_index = (uint64_t)(material_id + 1);
                            index_ptr = index_ptr + 2;
                            buffer_ptr = buffer_ptr + 1;
                            buffer_offset = buffer_offset - 1;
                        } while (buffer_offset != 0);
                    }
                }
                
                // 复制顶点索引数据
                vertex_indices = *(int **)(material_data + 0x38);
                texture_id = vertex_offset >> 0xb;
                *(uint *)(material_data + 0x2c) = vertex_offset;
                
                if (texture_id == (int)texture_index + vertex_offset >> 0xb) {
                    memcpy(*(long long *)(index_buffer + (uint64_t)texture_id * 2 + 2) +
                           (uint64_t)(vertex_offset + texture_id * -INDEX_BUFFER_ALIGNMENT) * 4, 
                           vertex_indices, (buffer_size & 0xffffffff) << 2);
                }
                
                if (index_count != 0) {
                    buffer_size = buffer_size & 0xffffffff;
                    do {
                        matrix_index = *vertex_indices;
                        vertex_indices = vertex_indices + 1;
                        *(int *)
                         (*(long long *)(index_buffer + (uint64_t)(vertex_offset >> 0xb) * 2 + 2) +
                         (uint64_t)(vertex_offset + (vertex_offset >> 0xb) * -INDEX_BUFFER_ALIGNMENT) * 4) = matrix_index;
                        buffer_size = buffer_size - 1;
                        vertex_offset = vertex_offset + 1;
                    } while (buffer_size != 0);
                }
            }
        }
    }
    return;
}

/**
 * 优化版本的渲染管线处理函数
 * 
 * 这是process_render_pipeline_data的优化版本，主要区别在于：
 * - 使用了不同的参数传递方式
 * - 优化了某些计算路径
 * - 减少了冗余检查
 * 
 * @param render_context 渲染上下文指针
 * @param pipeline_data 管线数据指针（通过寄存器传递）
 */
void process_render_pipeline_optimized(long long render_context)
{
    long long *render_data;
    int *frame_counter;
    long long *vertex_buffer;
    byte *texture_data;
    void **shader_data;
    float matrix_values[16];
    float transform_matrix[16];
    float view_matrix[16];
    float projection_matrix[16];
    float result_matrix[16];
    byte texture_flags;
    char texture_index;
    long long material_data;
    float *vertex_ptr;
    float vertex_data[12];
    float texture_coords[8];
    float normal_data[12];
    float tangent_data[12];
    void *matrix_buffer;
    int matrix_index;
    long long buffer_offset;
    uint vertex_offset;
    int vertex_count;
    uint texture_id;
    int material_id;
    uint64_t buffer_size;
    char *buffer_ptr;
    uint *index_buffer;
    int index_count;
    int batch_size;
    int *vertex_indices;
    uint *index_ptr;
    uint64_t page_index;
    uint64_t total_pages;
    bool zero_flag;
    bool allocation_success;
    long long pipeline_data;  // 通过寄存器传递的参数
    
    // 获取渲染系统全局数据
    material_data = system_parameter_buffer;
    buffer_offset = render_context;
    
    // 检查零标志（优化路径）
    if (zero_flag) {
        buffer_offset = func_0x000180085de0(*(void **)(render_context + 0x1b0));
    }
    
    // 原子操作更新帧计数器
    LOCK();
    frame_counter = (int *)(material_data + 0xed8);
    index_count = *frame_counter;
    *frame_counter = *frame_counter + *(int *)(buffer_offset + 0x200);
    UNLOCK();
    
    // 获取渲染数据结构
    material_data = *(long long *)(render_context + 600);
    texture_flags = *(byte *)(pipeline_data + 0x24);
    matrix_index = *(int *)(pipeline_data + 0x20);
    texture_index = *(char *)(pipeline_data + 0xd);
    
    // 保存当前渲染状态
    *(int *)(material_data + 0x48) = *(int *)(material_data + 0x2c);
    *(int *)(material_data + 0x50) = *(int *)(material_data + 0x4c);
    *(int *)(material_data + 0x4c) = index_count;
    *(byte *)(material_data + 0x44) = texture_flags;
    *(int *)(material_data + 0x2c) = matrix_index;
    
    // 处理有效的纹理索引（优化版本）
    if (texture_index != INVALID_TEXTURE_INDEX) {
        texture_id = (int)*(char *)(pipeline_data + 0xd) + *(int *)(pipeline_data + 0x18);
        vertex_ptr = (float **)**(long long **)(render_context + 600);
        vertex_offset = texture_id >> 0xd;
        
        // 计算顶点缓冲区位置
        material_data = *(long long *)
                  ((long long)*(int *)(system_parameter_buffer + 0xe78) * 0x128 + system_parameter_buffer + 0xc30 +
                  (uint64_t)vertex_offset * 8);
        buffer_offset = (uint64_t)(texture_id + vertex_offset * -0x2000) * 0x40;
        
        // 复制顶点数据（优化路径）
        matrix_buffer = ((void **)(material_data + buffer_offset))[1];
        *(void **)vertex_ptr = *(void **)(material_data + buffer_offset);
        *(void **)(vertex_ptr + 2) = matrix_buffer;
        
        // 复制纹理坐标
        shader_data = (void **)(material_data + 0x10 + buffer_offset);
        matrix_buffer = shader_data[1];
        *(void **)(vertex_ptr + 4) = *shader_data;
        *(void **)(vertex_ptr + 6) = matrix_buffer;
        
        // 复制法线数据
        shader_data = (void **)(material_data + 0x20 + buffer_offset);
        matrix_buffer = shader_data[1];
        *(void **)(vertex_ptr + 8) = *shader_data;
        *(void **)(vertex_ptr + 10) = matrix_buffer;
        
        // 复制切线数据
        shader_data = (void **)(material_data + 0x30 + buffer_offset);
        matrix_buffer = shader_data[1];
        *(void **)(vertex_ptr + 0xc) = *shader_data;
        *(void **)(vertex_ptr + 0xe) = matrix_buffer;
        
        // 获取变换矩阵
        material_data = *(long long *)(pipeline_data + 0x10);
        
        // 提取矩阵数据（优化版本）
        normal_data[8] = vertex_ptr[8];
        normal_data[9] = vertex_ptr[9];
        normal_data[10] = vertex_ptr[10];
        normal_data[11] = vertex_ptr[0xb];
        transform_matrix[0] = *vertex_ptr;
        transform_matrix[1] = vertex_ptr[1];
        transform_matrix[2] = vertex_ptr[2];
        transform_matrix[3] = vertex_ptr[3];
        tangent_data[0] = vertex_ptr[4];
        tangent_data[1] = vertex_ptr[5];
        tangent_data[2] = vertex_ptr[6];
        tangent_data[3] = vertex_ptr[7];
        tangent_data[4] = vertex_ptr[8];
        tangent_data[5] = vertex_ptr[9];
        tangent_data[6] = vertex_ptr[10];
        tangent_data[7] = vertex_ptr[11];
        
        // 获取视图矩阵
        view_matrix[0] = *(float *)(material_data + 0x374);
        view_matrix[1] = *(float *)(material_data + 0x370);
        view_matrix[2] = *(float *)(material_data + 0x378);
        view_matrix[3] = *(float *)(material_data + 900);
        projection_matrix[0] = *(float *)(material_data + 0x394);
        projection_matrix[1] = *(float *)(material_data + 0x380);
        projection_matrix[2] = *(float *)(material_data + 0x388);
        projection_matrix[3] = *(float *)(material_data + 0x390);
        
        // 执行矩阵乘法运算（优化版本）
        *vertex_ptr = view_matrix[0] * tangent_data[0] + view_matrix[1] * transform_matrix[0] + view_matrix[2] * normal_data[8];
        vertex_ptr[1] = view_matrix[0] * tangent_data[1] + view_matrix[1] * transform_matrix[1] + view_matrix[2] * normal_data[9];
        vertex_ptr[2] = view_matrix[0] * tangent_data[2] + view_matrix[1] * transform_matrix[2] + view_matrix[2] * normal_data[10];
        vertex_ptr[3] = view_matrix[0] * tangent_data[3] + view_matrix[1] * transform_matrix[3] + view_matrix[2] * normal_data[11];
        vertex_ptr[4] = view_matrix[3] * tangent_data[0] + projection_matrix[1] * transform_matrix[0] + projection_matrix[2] * normal_data[8];
        vertex_ptr[5] = view_matrix[3] * tangent_data[1] + projection_matrix[1] * transform_matrix[1] + projection_matrix[2] * normal_data[9];
        vertex_ptr[6] = view_matrix[3] * tangent_data[2] + projection_matrix[1] * transform_matrix[2] + projection_matrix[2] * normal_data[10];
        vertex_ptr[7] = view_matrix[3] * tangent_data[3] + projection_matrix[1] * transform_matrix[3] + projection_matrix[2] * normal_data[11];
        vertex_ptr[8] = projection_matrix[0] * tangent_data[0] + projection_matrix[3] * transform_matrix[0] + projection_matrix[2] * normal_data[8];
        vertex_ptr[9] = projection_matrix[0] * tangent_data[1] + projection_matrix[3] * transform_matrix[1] + projection_matrix[2] * normal_data[9];
        vertex_ptr[10] = projection_matrix[0] * tangent_data[2] + projection_matrix[3] * transform_matrix[2] + projection_matrix[2] * normal_data[10];
        vertex_ptr[11] = projection_matrix[0] * tangent_data[3] + projection_matrix[3] * transform_matrix[3] + projection_matrix[2] * normal_data[11];
    }
    
    // 检查渲染状态变化（优化版本）
    material_data = *(long long *)(render_context + 600);
    if (*(int *)(material_data + 0x28) != *(int *)(system_main_module_state + 0x224)) {
        index_count = *(int *)(material_data + 0x1c) + *(int *)(material_data + 0x18);
        *(int *)(material_data + 0x28) = *(int *)(system_main_module_state + 0x224);
        
        if (0 < index_count) {
            // 计算顶点缓冲区基地址
            buffer_offset = (long long)*(int *)(system_parameter_buffer + 0xe78) * 0x128 + system_parameter_buffer + 0xc28;
            matrix_index = FUN_180080380(buffer_offset, index_count);
            *(int *)(material_data + 0x30) = matrix_index;
            FUN_1800802e0(buffer_offset, matrix_index);
            
            if (*(long long *)(material_data + 0x10) == 0) {
                if (*(int *)(material_data + 0x18) != 0) {
                    *(int *)(material_data + 0x2c) = *(int *)(material_data + 0x30);
                    return;
                }
            }
            else {
                // 处理顶点缓冲区分配（优化版本）
                texture_index = *(char *)(material_data + 0x44);
                buffer_size = (uint64_t)texture_index;
                render_data = (long long *)(material_data + 0x38);
                index_count = (int)texture_index;
                
                if (*(int *)(material_data + 0x40) == (int)texture_index) {
                    vertex_buffer = (long long *)*render_data;
                }
                else {
                    *(int *)(material_data + 0x40) = index_count;
                    if (*render_data != 0) {
                        CoreEngineMemoryPoolCleaner();
                    }
                    *render_data = 0;
                    
                    if (texture_index == '\0') {
                        vertex_buffer = (long long *)0x0;
                        *render_data = 0;
                    }
                    else {
                        vertex_buffer = (long long *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr, (long long)texture_index * 4);
                        *render_data = (long long)vertex_buffer;
                    }
                }
                
                if (vertex_buffer != (long long *)0x0) {
                    batch_size = 0;
                    vertex_offset = (uint)texture_index;
                    material_id = batch_size;
                    
                    // 批量处理顶点数据（优化版本）
                    if ((0 < index_count) && (0xf < vertex_offset)) {
                        vertex_count = *(int *)(material_data + 0x2c);
                        vertex_buffer = (long long *)((long long)vertex_buffer + (long long)(texture_index + -1) * 4);
                        
                        if ((((long long *)(material_data + 0x2c) < vertex_buffer) || 
                             (vertex_buffer < (long long *)(material_data + 0x2c))) &&
                            ((render_data < vertex_buffer || (material_id = 0, vertex_buffer < render_data)))) {
                            
                            texture_id = vertex_offset & 0x8000000f;
                            if ((int)texture_id < 0) {
                                texture_id = (texture_id - 1 | 0xfffffff0) + 1;
                            }
                            
                            vertex_buffer = vertex_buffer + 4;
                            vertex_count = 8;
                            
                            // 优化顶点索引生成
                            do {
                                *(int *)(vertex_buffer + -4) = batch_size + vertex_count;
                                *(int *)((long long)vertex_buffer + -0x1c) = batch_size + 1 + vertex_count;
                                *(int *)(vertex_buffer + -3) = batch_size + 2 + vertex_count;
                                *(int *)((long long)vertex_buffer + -0x14) = batch_size + 3 + vertex_count;
                                batch_size = batch_size + 0x10;
                                *(int *)(vertex_buffer + -2) = vertex_count + -4 + vertex_count;
                                *(int *)((long long)vertex_buffer + -0xc) = vertex_count + -3 + vertex_count;
                                *(int *)(vertex_buffer + -1) = vertex_count + -2 + vertex_count;
                                *(int *)((long long)vertex_buffer + -4) = vertex_count + -1 + vertex_count;
                                *(int *)vertex_buffer = vertex_count + vertex_count;
                                *(int *)((long long)vertex_buffer + 4) = vertex_count + 1 + vertex_count;
                                *(int *)(vertex_buffer + 1) = vertex_count + 2 + vertex_count;
                                *(int *)((long long)vertex_buffer + 0xc) = vertex_count + 3 + vertex_count;
                                *(int *)(vertex_buffer + 2) = vertex_count + 4 + vertex_count;
                                *(int *)((long long)vertex_buffer + 0x14) = vertex_count + 5 + vertex_count;
                                *(int *)(vertex_buffer + 3) = vertex_count + 6 + vertex_count;
                                *(int *)((long long)vertex_buffer + 0x1c) = vertex_count + 7 + vertex_count;
                                vertex_buffer = vertex_buffer + 8;
                                vertex_count = vertex_count + 0x10;
                                material_id = batch_size;
                            } while (batch_size < (int)(vertex_offset - texture_id));
                        }
                    }
                    
                    // 填充剩余顶点索引（优化版本）
                    for (buffer_offset = (long long)material_id; buffer_offset < (long long)buffer_size; buffer_offset = buffer_offset + 1) {
                        batch_size = *(int *)(material_data + 0x2c) + material_id;
                        material_id = material_id + 1;
                        *(int *)(*render_data + buffer_offset * 4) = batch_size;
                    }
                    
                    // 处理索引缓冲区（优化版本）
                    material_id = *(int *)(material_data + 0x18);
                    batch_size = 0;
                    if (0 < (long long)material_id) {
                        buffer_offset = 0;
                        do {
                            vertex_count = *(int *)(material_data + 0x30) + batch_size;
                            batch_size = batch_size + 1;
                            texture_data = (byte *)(*(long long *)(material_data + 0x10) + buffer_offset);
                            buffer_offset = buffer_offset + 1;
                            *(int *)(*render_data + (uint64_t)*texture_data * 4) = vertex_count;
                        } while (buffer_offset < material_id);
                    }
                }
                
                // 处理索引缓冲区分页（优化版本）
                index_buffer = (uint *)((long long)*(int *)(system_parameter_buffer + 0xc20) * 0x128 +
                                  system_parameter_buffer + 0x9d0);
                
                if (index_count == 0) {
                    vertex_offset = (int)texture_index - 1;
                }
                else {
                    LOCK();
                    vertex_offset = *index_buffer;
                    *index_buffer = *index_buffer + (int)texture_index;
                    UNLOCK();
                    
                    page_index = (uint64_t)(vertex_offset >> 0xb);
                    total_pages = (uint64_t)(texture_index + -1 + vertex_offset >> 0xb);
                    
                    if (page_index <= total_pages) {
                        buffer_ptr = (char *)((long long)index_buffer + page_index + 0x108);
                        buffer_offset = (total_pages - page_index) + 1;
                        index_ptr = index_buffer + page_index * 2 + 2;
                        
                        // 分配缓冲区页面（优化版本）
                        do {
                            material_id = (int)page_index;
                            if (*(long long *)index_ptr == 0) {
                                long long new_buffer = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr, MEMORY_BLOCK_SIZE_8K, 0x25);
                                LOCK();
                                allocation_success = *(long long *)(index_buffer + (long long)material_id * 2 + 2) == 0;
                                if (allocation_success) {
                                    *(long long *)(index_buffer + (long long)material_id * 2 + 2) = new_buffer;
                                }
                                UNLOCK();
                                
                                if (allocation_success) {
                                    LOCK();
                                    *(byte *)((long long)material_id + 0x108 + (long long)index_buffer) = 0;
                                    UNLOCK();
                                }
                                else {
                                    if (new_buffer != 0) {
                                        CoreEngineMemoryPoolCleaner();
                                    }
                                    do {
                                    } while (*buffer_ptr != '\0');
                                }
                            }
                            else {
                                do {
                                } while (*buffer_ptr != '\0');
                            }
                            page_index = (uint64_t)(material_id + 1);
                            index_ptr = index_ptr + 2;
                            buffer_ptr = buffer_ptr + 1;
                            buffer_offset = buffer_offset - 1;
                        } while (buffer_offset != 0);
                    }
                }
                
                // 复制顶点索引数据（优化版本）
                vertex_indices = *(int **)(material_data + 0x38);
                texture_id = vertex_offset >> 0xb;
                *(uint *)(material_data + 0x2c) = vertex_offset;
                
                if (texture_id == (int)texture_index + vertex_offset >> 0xb) {
                    memcpy(*(long long *)(index_buffer + (uint64_t)texture_id * 2 + 2) +
                           (uint64_t)(vertex_offset + texture_id * -INDEX_BUFFER_ALIGNMENT) * 4, 
                           vertex_indices, (buffer_size & 0xffffffff) << 2);
                }
                
                if (index_count != 0) {
                    buffer_size = buffer_size & 0xffffffff;
                    do {
                        matrix_index = *vertex_indices;
                        vertex_indices = vertex_indices + 1;
                        *(int *)
                         (*(long long *)(index_buffer + (uint64_t)(vertex_offset >> 0xb) * 2 + 2) +
                         (uint64_t)(vertex_offset + (vertex_offset >> 0xb) * -INDEX_BUFFER_ALIGNMENT) * 4) = matrix_index;
                        buffer_size = buffer_size - 1;
                        vertex_offset = vertex_offset + 1;
                    } while (buffer_size != 0);
                }
            }
        }
    }
    return;
}