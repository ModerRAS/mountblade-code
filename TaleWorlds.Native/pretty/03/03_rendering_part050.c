#include "TaleWorlds.Native.Split.h"

// 03_rendering_part050.c - 渲染系统高级参数处理和浮点数计算模块
// 包含9个核心函数，涵盖渲染资源清理、参数处理、内存管理、批量数据处理等高级渲染功能

// 全局常量定义
#define RENDERING_GLOBAL_CONTEXT_1 0x180c8a9b0  // 渲染全局上下文1
#define RENDERING_GLOBAL_CONTEXT_2 0x180c8a9a8  // 渲染全局上下文2
#define RENDERING_RESOURCE_DATA_1 0x180bf00a8   // 渲染资源数据1
#define RENDERING_STRING_DATA_1 0x180a16f40     // 渲染字符串数据1
#define RENDERING_INTERFACE_PTR_1 0x18098e3b0   // 渲染接口指针1

// 函数别名定义
#define rendering_resource_basic_cleaner FUN_1802943c0        // 渲染资源基础清理器
#define rendering_resource_advanced_cleaner FUN_180294430   // 渲染资源高级清理器
#define rendering_resource_parameterized_cleaner FUN_18029443c  // 渲染资源参数化清理器
#define rendering_resource_batch_cleaner FUN_180294576      // 渲染资源批量清理器
#define rendering_resource_memory_cleaner FUN_1802945c6      // 渲染资源内存清理器
#define rendering_resource_direct_cleaner FUN_1802945d9      // 渲染资源直接清理器
#define rendering_parameter_processor_advanced FUN_180294610  // 渲染参数高级处理器
#define rendering_parameter_processor_extended FUN_180294638  // 渲染参数扩展处理器
#define rendering_parameter_processor_optimized FUN_18029463f  // 渲染参数优化处理器

// 函数声明
void rendering_resource_advanced_cleaner(int64_t resource_context);
void rendering_resource_parameterized_cleaner(int64_t resource_context, uint64_t clean_param);
void rendering_resource_batch_cleaner(void);
void rendering_resource_memory_cleaner(void);
void rendering_resource_direct_cleaner(uint64_t resource_ptr);
void rendering_parameter_processor_advanced(int64_t param_context, uint64_t *output_ptr, int32_t *param_3, int32_t *param_4);
void rendering_parameter_processor_extended(int64_t param_context, uint64_t *output_ptr, int32_t *param_3, uint64_t param_4, uint64_t param_5, uint64_t param_6, uint64_t param_7, uint64_t param_8, uint64_t param_9, uint64_t param_10, uint64_t param_11, uint64_t param_12, void *param_13, uint64_t param_14, uint64_t param_15);
void rendering_parameter_processor_optimized(int64_t param_context, uint64_t *output_ptr, int32_t *param_3, uint64_t param_4, uint64_t param_5, uint64_t param_6, uint64_t param_7, uint64_t param_8, uint64_t param_9, uint64_t param_10, uint64_t param_11, uint64_t param_12, void *param_13, uint64_t param_14, uint64_t param_15);

/**
 * 渲染资源基础清理器
 * 
 * 该函数负责清理基础的渲染资源，包括内存释放和指针重置。
 * 主要处理两个关键资源位置的清理工作。
 * 
 * @param resource_context 资源上下文指针，包含待清理的资源数据
 * 
 * 处理流程：
 * 1. 检查并清理第一个资源位置（+0x18偏移）
 * 2. 检查并清理第二个资源位置（+0x20偏移）
 * 3. 重置相关指针为NULL
 * 4. 更新全局资源计数器
 */
void rendering_resource_basic_cleaner(int64_t resource_context)
{
    int64_t resource_ptr_1;
    int64_t resource_ptr_2;
    
    // 获取第一个资源指针
    resource_ptr_1 = *(int64_t *)(resource_context + 0x18);
    if (resource_ptr_1 != 0) {
        // 更新全局资源计数器
        if (RENDERING_GLOBAL_CONTEXT_1 != 0) {
            *(int *)(RENDERING_GLOBAL_CONTEXT_1 + 0x3a8) = *(int *)(RENDERING_GLOBAL_CONTEXT_1 + 0x3a8) + -1;
        }
        // 释放资源（该函数不返回）
        FUN_180059ba0(resource_ptr_1, RENDERING_GLOBAL_CONTEXT_2);
    }
    
    // 获取第二个资源指针
    resource_ptr_2 = *(int64_t *)(resource_context + 0x20);
    if (resource_ptr_2 != 0) {
        // 更新全局资源计数器
        if (RENDERING_GLOBAL_CONTEXT_1 != 0) {
            *(int *)(RENDERING_GLOBAL_CONTEXT_1 + 0x3a8) = *(int *)(RENDERING_GLOBAL_CONTEXT_1 + 0x3a8) + -1;
        }
        // 释放资源（该函数不返回）
        FUN_180059ba0(resource_ptr_2, RENDERING_GLOBAL_CONTEXT_2);
    }
    
    // 重置资源指针
    *(uint64_t *)(resource_context + 0x20) = 0;
    *(uint64_t *)(resource_context + 0x18) = 0;
    return;
}

/**
 * 渲染资源高级清理器
 * 
 * 该函数负责执行高级的渲染资源清理操作，包括批量资源处理、
 * 内存管理和复杂的资源关系清理。支持多种资源类型的清理。
 * 
 * @param resource_context 资源上下文指针，包含待清理的复杂数据结构
 * 
 * 处理流程：
 * 1. 遍历并清理主要资源数组（+0x60偏移）
 * 2. 处理资源索引和数据关联
 * 3. 执行条件资源清理
 * 4. 管理资源引用计数
 * 5. 释放关联的内存块
 */
void rendering_resource_advanced_cleaner(int64_t resource_context)
{
    int *resource_counter_ptr;
    int64_t resource_ptr;
    uint64_t resource_index;
    int64_t context_ptr;
    uint64_t iteration_count;
    uint process_count;
    uint64_t array_size;
    uint64_t process_flag;
    void *stack_data_ptr;
    int8_t *memory_block_ptr;
    int memory_block_size;
    uint64_t memory_block_flag;
    
    iteration_count = 0;
    array_size = 0;
    
    // 清理主要资源数组
    if (0 < *(int *)(resource_context + 0x60)) {
        do {
            // 获取资源指针
            resource_ptr = *(int64_t *)(array_size + *(int64_t *)(resource_context + 0x68));
            if ((resource_ptr != 0) && 
                (*(char *)(array_size + 0xc + *(int64_t *)(resource_context + 0x68)) != '\0')) {
                // 更新全局资源计数器
                if (RENDERING_GLOBAL_CONTEXT_1 != 0) {
                    *(int *)(RENDERING_GLOBAL_CONTEXT_1 + 0x3a8) = *(int *)(RENDERING_GLOBAL_CONTEXT_1 + 0x3a8) + -1;
                }
                // 释放资源（该函数不返回）
                FUN_180059ba0(resource_ptr, RENDERING_GLOBAL_CONTEXT_2);
            }
            process_count = (int)array_size + 1;
            array_size = (uint64_t)process_count;
            iteration_count = iteration_count + 0x88;
        } while ((int)process_count < *(int *)(resource_context + 0x60));
    }
    
    array_size = 0;
    iteration_count = 0;
    
    // 处理资源索引和关联
    if (0 < *(int *)(resource_context + 0x40)) {
        do {
            resource_ptr = *(int64_t *)(*(int64_t *)(resource_context + 0x48) + array_size);
            resource_index = *(uint64_t *)(resource_ptr + 0x50);
            if ((*(uint64_t *)(resource_context + 0x68) <= resource_index) &&
                (resource_index < (int64_t)*(int *)(resource_context + 0x60) * 0x88 + *(uint64_t *)(resource_context + 0x68))) {
                // 重置资源索引
                *(uint64_t *)(resource_ptr + 0x50) = 0;
                *(int16_t *)(*(int64_t *)(*(int64_t *)(resource_context + 0x48) + array_size) + 0x4e) = 0;
            }
            process_count = (int)iteration_count + 1;
            array_size = array_size + 8;
            iteration_count = (uint64_t)process_count;
        } while ((int)process_count < *(int *)(resource_context + 0x40));
    }
    
    context_ptr = RENDERING_GLOBAL_CONTEXT_1;
    resource_ptr = *(int64_t *)(resource_context + 0x68);
    if (resource_ptr == 0) {
        // 处理特殊情况
        resource_ptr = *(int64_t *)(resource_context + 0x58);
        if (resource_ptr != 0) {
            *(uint64_t *)(resource_context + 0x50) = 0;
            if (context_ptr != 0) {
                *(int *)(context_ptr + 0x3a8) = *(int *)(context_ptr + 0x3a8) + -1;
            }
            // 释放资源（该函数不返回）
            FUN_180059ba0(resource_ptr, RENDERING_GLOBAL_CONTEXT_2);
        }
        
        // 设置清理标志
        *(int32_t *)(resource_context + 0x70) = 0xffffffff;
        rendering_resource_basic_cleaner(resource_context);
        
        resource_ptr = RENDERING_GLOBAL_CONTEXT_1;
        array_size = 0;
        if (0 < *(int *)(resource_context + 0x40)) {
            do {
                context_ptr = *(int64_t *)(array_size + *(int64_t *)(resource_context + 0x48));
                if (context_ptr != 0) {
                    FUN_180296ad0(context_ptr);
                    if (RENDERING_GLOBAL_CONTEXT_1 != 0) {
                        *(int *)(RENDERING_GLOBAL_CONTEXT_1 + 0x3a8) = *(int *)(RENDERING_GLOBAL_CONTEXT_1 + 0x3a8) + -1;
                    }
                    // 释放资源（该函数不返回）
                    FUN_180059ba0(context_ptr, RENDERING_GLOBAL_CONTEXT_2);
                }
                process_count = (int)array_size + 1;
                array_size = array_size + 8;
            } while ((int)process_count < *(int *)(resource_context + 0x40));
        }
        
        context_ptr = *(int64_t *)(resource_context + 0x48);
        if (context_ptr == 0) {
            return;
        }
        *(uint64_t *)(resource_context + 0x40) = 0;
        if (resource_ptr != 0) {
            resource_counter_ptr = (int *)(resource_ptr + 0x3a8);
            *resource_counter_ptr = *resource_counter_ptr + -1;
        }
        // 释放资源（该函数不返回）
        FUN_180059ba0(context_ptr, RENDERING_GLOBAL_CONTEXT_2);
    }
    
    // 重置资源计数
    *(uint64_t *)(resource_context + 0x60) = 0;
    if (context_ptr != 0) {
        *(int *)(context_ptr + 0x3a8) = *(int *)(context_ptr + 0x3a8) + -1;
    }
    // 释放资源（该函数不返回）
    FUN_180059ba0(resource_ptr, RENDERING_GLOBAL_CONTEXT_2);
}

/**
 * 渲染资源参数化清理器
 * 
 * 该函数是渲染资源高级清理器的参数化版本，支持通过参数控制清理行为。
 * 提供更灵活的资源清理选项，适用于不同的清理场景。
 * 
 * @param resource_context 资源上下文指针
 * @param clean_param 清理参数，控制清理的具体行为
 * 
 * 处理流程：
 * 1. 根据参数执行条件清理
 * 2. 处理资源索引和数据关联
 * 3. 管理资源引用计数
 * 4. 执行批量资源清理
 * 5. 释放关联的内存块
 */
void rendering_resource_parameterized_cleaner(int64_t resource_context, uint64_t clean_param)
{
    int *resource_counter_ptr;
    int64_t resource_ptr;
    uint64_t resource_index;
    int64_t context_ptr;
    uint64_t iteration_count;
    int array_index;
    uint64_t process_count;
    uint index_counter;
    uint64_t array_size;
    
    array_index = (int)clean_param;
    array_size = clean_param & 0xffffffff;
    
    // 根据参数执行资源清理
    if (array_index < *(int *)(resource_context + 0x60)) {
        process_count = clean_param & 0xffffffff;
        do {
            resource_ptr = *(int64_t *)(process_count + *(int64_t *)(resource_context + 0x68));
            if ((resource_ptr != 0) &&
                (*(char *)(process_count + 0xc + *(int64_t *)(resource_context + 0x68)) != (char)clean_param)) {
                // 更新全局资源计数器
                if (RENDERING_GLOBAL_CONTEXT_1 != 0) {
                    *(int *)(RENDERING_GLOBAL_CONTEXT_1 + 0x3a8) = *(int *)(RENDERING_GLOBAL_CONTEXT_1 + 0x3a8) + -1;
                }
                // 释放资源（该函数不返回）
                FUN_180059ba0(resource_ptr, RENDERING_GLOBAL_CONTEXT_2);
            }
            index_counter = (int)array_size + 1;
            array_size = (uint64_t)index_counter;
            process_count = process_count + 0x88;
        } while ((int)index_counter < *(int *)(resource_context + 0x60));
    }
    
    process_count = clean_param & 0xffffffff;
    array_size = clean_param;
    if (array_index < *(int *)(resource_context + 0x40)) {
        do {
            resource_ptr = *(int64_t *)(*(int64_t *)(resource_context + 0x48) + array_size);
            resource_index = *(uint64_t *)(resource_ptr + 0x50);
            if ((*(uint64_t *)(resource_context + 0x68) <= resource_index) &&
                (resource_index < (int64_t)*(int *)(resource_context + 0x60) * 0x88 + *(uint64_t *)(resource_context + 0x68))) {
                // 设置参数化资源索引
                *(uint64_t *)(resource_ptr + 0x50) = clean_param;
                *(short *)(*(int64_t *)(*(int64_t *)(resource_context + 0x48) + array_size) + 0x4e) = (short)clean_param;
            }
            index_counter = (int)process_count + 1;
            process_count = (uint64_t)index_counter;
            array_size = array_size + 8;
        } while ((int)index_counter < *(int *)(resource_context + 0x40));
    }
    
    context_ptr = RENDERING_GLOBAL_CONTEXT_1;
    resource_ptr = *(int64_t *)(resource_context + 0x68);
    if (resource_ptr == 0) {
        // 处理特殊情况
        resource_ptr = *(int64_t *)(resource_context + 0x58);
        if (resource_ptr != 0) {
            *(uint64_t *)(resource_context + 0x50) = clean_param;
            if (context_ptr != 0) {
                *(int *)(context_ptr + 0x3a8) = *(int *)(context_ptr + 0x3a8) + -1;
            }
            // 释放资源（该函数不返回）
            FUN_180059ba0(resource_ptr, RENDERING_GLOBAL_CONTEXT_2);
        }
        
        // 设置参数化清理标志
        *(int32_t *)(resource_context + 0x70) = 0xffffffff;
        rendering_resource_basic_cleaner(resource_context);
        
        resource_ptr = RENDERING_GLOBAL_CONTEXT_1;
        process_count = clean_param & 0xffffffff;
        array_size = clean_param;
        if (array_index < *(int *)(resource_context + 0x40)) {
            do {
                context_ptr = *(int64_t *)(array_size + *(int64_t *)(resource_context + 0x48));
                if (context_ptr != 0) {
                    FUN_180296ad0(context_ptr);
                    if (RENDERING_GLOBAL_CONTEXT_1 != 0) {
                        *(int *)(RENDERING_GLOBAL_CONTEXT_1 + 0x3a8) = *(int *)(RENDERING_GLOBAL_CONTEXT_1 + 0x3a8) + -1;
                    }
                    // 释放资源（该函数不返回）
                    FUN_180059ba0(context_ptr, RENDERING_GLOBAL_CONTEXT_2);
                }
                index_counter = (int)process_count + 1;
                process_count = (uint64_t)index_counter;
                array_size = array_size + 8;
            } while ((int)index_counter < *(int *)(resource_context + 0x40));
        }
        
        context_ptr = *(int64_t *)(resource_context + 0x48);
        if (context_ptr == 0) {
            return;
        }
        *(uint64_t *)(resource_context + 0x40) = clean_param;
        if (resource_ptr != 0) {
            resource_counter_ptr = (int *)(resource_ptr + 0x3a8);
            *resource_counter_ptr = *resource_counter_ptr + -1;
        }
        // 释放资源（该函数不返回）
        FUN_180059ba0(context_ptr, RENDERING_GLOBAL_CONTEXT_2);
    }
    
    // 设置参数化资源计数
    *(uint64_t *)(resource_context + 0x60) = clean_param;
    if (context_ptr != 0) {
        *(int *)(context_ptr + 0x3a8) = *(int *)(context_ptr + 0x3a8) + -1;
    }
    // 释放资源（该函数不返回）
    FUN_180059ba0(resource_ptr, RENDERING_GLOBAL_CONTEXT_2);
}

/**
 * 渲染资源批量清理器
 * 
 * 该函数负责批量清理渲染资源，处理复杂的资源关系和引用计数。
 * 适用于大规模资源清理场景，提供高效的批量处理能力。
 * 
 * 处理流程：
 * 1. 遍历资源数组并逐个清理
 * 2. 管理资源引用计数
 * 3. 释放关联的内存块
 * 4. 重置资源指针和计数器
 */
void rendering_resource_batch_cleaner(void)
{
    int *resource_counter_ptr;
    int64_t resource_ptr;
    int64_t context_ptr;
    int64_t resource_base_ptr;
    int64_t array_offset;
    int array_index;
    int64_t array_ptr;
    
    context_ptr = RENDERING_GLOBAL_CONTEXT_1;
    array_offset = *(int64_t *)(resource_base_ptr + 0x48);
    
    // 批量清理资源数组
    do {
        resource_ptr = *(int64_t *)(array_offset + *(int64_t *)(resource_base_ptr + 0x48));
        if (resource_ptr != 0) {
            FUN_180296ad0(resource_ptr);
            if (RENDERING_GLOBAL_CONTEXT_1 != 0) {
                *(int *)(RENDERING_GLOBAL_CONTEXT_1 + 0x3a8) = *(int *)(RENDERING_GLOBAL_CONTEXT_1 + 0x3a8) + -1;
            }
            // 释放资源（该函数不返回）
            FUN_180059ba0(resource_ptr, RENDERING_GLOBAL_CONTEXT_2);
        }
        array_index = array_index + 1;
        array_offset = array_offset + 8;
    } while (array_index < *(int *)(resource_base_ptr + 0x40));
    
    array_offset = *(int64_t *)(resource_base_ptr + 0x48);
    if (array_offset != 0) {
        *(int64_t *)(resource_base_ptr + 0x40) = array_ptr;
        if (context_ptr != 0) {
            resource_counter_ptr = (int *)(context_ptr + 0x3a8);
            *resource_counter_ptr = *resource_counter_ptr + -1;
        }
        // 释放资源（该函数不返回）
        FUN_180059ba0(array_offset, RENDERING_GLOBAL_CONTEXT_2);
    }
    return;
}

/**
 * 渲染资源内存清理器
 * 
 * 该函数专门负责渲染资源的内存清理工作，处理内存块的释放和
 * 指针重置。提供简化的内存管理接口。
 * 
 * 处理流程：
 * 1. 获取资源内存指针
 * 2. 更新内存引用计数
 * 3. 释放内存块
 * 4. 重置相关指针
 */
void rendering_resource_memory_cleaner(void)
{
    int *resource_counter_ptr;
    int64_t resource_ptr;
    int64_t context_ptr;
    int64_t resource_base_ptr;
    uint64_t clean_flag;
    
    context_ptr = RENDERING_GLOBAL_CONTEXT_1;
    resource_ptr = *(int64_t *)(resource_base_ptr + 0x48);
    if (resource_ptr != 0) {
        *(uint64_t *)(resource_base_ptr + 0x40) = clean_flag;
        if (context_ptr != 0) {
            resource_counter_ptr = (int *)(context_ptr + 0x3a8);
            *resource_counter_ptr = *resource_counter_ptr + -1;
        }
        // 释放资源（该函数不返回）
        FUN_180059ba0(resource_ptr, RENDERING_GLOBAL_CONTEXT_2);
    }
    return;
}

/**
 * 渲染资源直接清理器
 * 
 * 该函数提供直接的资源清理接口，接受资源指针作为参数，
 * 直接执行清理操作而不需要复杂的上下文处理。
 * 
 * @param resource_ptr 待清理的资源指针
 * 
 * 处理流程：
 * 1. 更新资源引用计数
 * 2. 执行资源清理
 * 3. 重置相关状态
 */
void rendering_resource_direct_cleaner(uint64_t resource_ptr)
{
    int *resource_counter_ptr;
    int64_t context_ptr;
    int64_t resource_base_ptr;
    uint64_t clean_flag;
    
    context_ptr = RENDERING_GLOBAL_CONTEXT_1;
    *(uint64_t *)(resource_base_ptr + 0x40) = clean_flag;
    if (context_ptr != 0) {
        resource_counter_ptr = (int *)(context_ptr + 0x3a8);
        *resource_counter_ptr = *resource_counter_ptr + -1;
    }
    // 释放资源（该函数不返回）
    FUN_180059ba0(resource_ptr, RENDERING_GLOBAL_CONTEXT_2);
}

/**
 * 渲染参数高级处理器
 * 
 * 该函数是渲染系统的高级参数处理核心，负责复杂的参数初始化、
 * 数据处理和内存管理。支持多种渲染参数的配置和优化。
 * 
 * @param param_context 参数上下文指针
 * @param output_ptr 输出数据指针
 * @param param_3 参数3指针
 * @param param_4 参数4指针
 * 
 * 处理流程：
 * 1. 检查渲染上下文状态
 * 2. 初始化渲染参数
 * 3. 处理字节数据和转换
 * 4. 配置渲染参数结构
 * 5. 执行高级渲染操作
 */
void rendering_parameter_processor_advanced(int64_t param_context, uint64_t *output_ptr, int32_t *param_3, int32_t *param_4)
{
    byte byte_data;
    int data_index;
    byte *byte_ptr;
    uint pixel_value;
    int64_t context_ptr;
    uint *pixel_array_ptr;
    int array_size;
    int8_t param_stack[32];
    void *texture_ptr;
    uint64_t texture_handle;
    int64_t stack_offset_160;
    uint64_t param_block_168;
    uint64_t param_block_158;
    uint64_t param_block_150;
    int8_t alpha_channel;
    uint7 color_channels;
    uint64_t param_block_140;
    int64_t stack_offset_138;
    uint64_t param_block_130;
    int32_t width_param;
    int32_t height_param;
    uint texture_size;
    int32_t format_param;
    int32_t type_param;
    int8_t red_channel;
    int8_t green_channel;
    int8_t blue_channel;
    int8_t alpha_mask;
    int32_t color_param;
    int32_t depth_param;
    int32_t stencil_param;
    uint64_t render_buffer;
    uint64_t frame_buffer;
    uint64_t security_cookie;
    
    pixel_value = texture_size;
    security_cookie = RENDERING_RESOURCE_DATA_1 ^ (uint64_t)param_stack;
    
    // 检查渲染上下文状态
    if (*(int64_t *)(param_context + 0x20) == 0) {
        if (*(int64_t *)(param_context + 0x18) == 0) {
            if (*(int *)(param_context + 0x60) == 0) {
                // 初始化默认渲染参数
                red_channel = 0;
                green_channel = 0;
                blue_channel = 0;
                alpha_channel = 0;
                color_param = 0;
                depth_param = 0;
                stencil_param = 0;
                type_param = 0;
                format_param = 0;
                render_buffer = 0;
                frame_buffer = 0;
                texture_size = CONCAT31(texture_size._1_3_, 1);
                stack_offset_160 = (uint64_t)texture_size << 0x20;
                param_block_168 = 0;
                texture_size = texture_size & 0xffffff00;
                width_param = 0;
                height_param = 0;
                param_block_140 = 0;
                color_param = 0;
                format_param = 0;
                render_buffer = 0;
                depth_param = 0;
                stencil_param = 0;
                frame_buffer = 0;
                security_cookie = 0;
                texture_size = CONCAT31(texture_size._1_3_, 1);
                stack_offset_160 = (uint64_t)texture_size << 0x20;
                param_block_168 = 0;
                texture_size = texture_size & 0xffffff00;
                width_param = 0;
                height_param = 0;
                param_block_140 = 0;
                color_param = 0;
                format_param = 0;
                render_buffer = 0;
                depth_param = 0;
                stencil_param = 0;
                frame_buffer = 0;
                param_block_150 = 0x100000001;
                alpha_channel = CONCAT71((uint7)(uint3)(pixel_value >> 8), 1);
                param_block_130 = 0x78;
                param_block_158 = 0x703331202c667474;
                format_param = 0x2e6e6165;
                type_param = 0x6c437967;
                color_param = 0x676f7250;
                stack_offset_160 = 0x4150000000000000;
                texture_ptr = &RENDERING_STRING_DATA_1;
                context_ptr = FUN_180294c20(param_context, &RENDERING_INTERFACE_PTR_1, param_3, &param_block_168);
                *(int32_t *)(context_ptr + 0xc) = 0x3f800000;
            }
            FUN_180294f50(param_context);
        }
        
        // 处理字节数据
        byte_ptr = *(byte **)(param_context + 0x18);
        if (byte_ptr != (byte *)0x0) {
            array_size = *(int *)(param_context + 0x28);
            data_index = *(int *)(param_context + 0x2c);
            if (RENDERING_GLOBAL_CONTEXT_1 != 0) {
                *(int *)(RENDERING_GLOBAL_CONTEXT_1 + 0x3a8) = *(int *)(RENDERING_GLOBAL_CONTEXT_1 + 0x3a8) + 1;
            }
            pixel_array_ptr = (uint *)func_0x000180120ce0((int64_t)data_index * (int64_t)array_size * 4, RENDERING_GLOBAL_CONTEXT_2);
            *(uint **)(param_context + 0x20) = pixel_array_ptr;
            
            // 转换字节数据为像素数据
            for (array_size = *(int *)(param_context + 0x2c) * *(int *)(param_context + 0x28); 0 < array_size;
                array_size = array_size + -1) {
                byte_data = *byte_ptr;
                byte_ptr = byte_ptr + 1;
                *pixel_array_ptr = (uint)byte_data << 0x18 | 0xffffff;
                pixel_array_ptr = pixel_array_ptr + 1;
            }
        }
    }
    
    // 设置输出参数
    *output_ptr = *(uint64_t *)(param_context + 0x20);
    if (param_3 != (int32_t *)0x0) {
        *param_3 = *(int32_t *)(param_context + 0x28);
    }
    if (param_4 != (int32_t *)0x0) {
        *param_4 = *(int32_t *)(param_context + 0x2c);
    }
    // 执行安全检查（该函数不返回）
    FUN_1808fc050(security_cookie ^ (uint64_t)param_stack);
}

/**
 * 渲染参数扩展处理器
 * 
 * 该函数是渲染参数处理器的扩展版本，支持更多的参数配置选项
 * 和更复杂的渲染场景。提供高度可定制的参数处理能力。
 * 
 * @param param_context 参数上下文指针
 * @param output_ptr 输出数据指针
 * @param param_3 参数3指针
 * @param param_4 - param_15 扩展参数组
 * @param param_13 自定义参数指针
 * 
 * 处理流程：
 * 1. 扩展参数初始化和验证
 * 2. 高级渲染参数配置
 * 3. 自定义参数处理
 * 4. 复杂数据结构管理
 * 5. 优化的渲染参数设置
 */
void rendering_parameter_processor_extended(int64_t param_context, uint64_t *output_ptr, int32_t *param_3, uint64_t param_4,
                                          uint64_t param_5, uint64_t param_6, uint64_t param_7, uint64_t param_8,
                                          uint64_t param_9, uint64_t param_10, uint64_t param_11, uint64_t param_12,
                                          void *param_13, uint64_t param_14, uint64_t param_15)
{
    byte byte_data;
    int data_index;
    byte *byte_ptr;
    bool is_negative;
    uint64_t param_value;
    int64_t context_ptr;
    uint *pixel_array_ptr;
    void *custom_param_ptr;
    int array_size;
    int32_t *param_block_ptr;
    int32_t *output_param_ptr;
    uint64_t param_base_ptr;
    int64_t stack_base_ptr;
    bool should_process;
    uint64_t param_buffer;
    int32_t format_type;
    
    // 设置扩展参数
    *(uint64_t *)(stack_base_ptr + -0x28) = param_10;
    *(uint64_t *)(stack_base_ptr + -0x30) = param_11;
    
    if (should_process) {
        context_ptr = *(int64_t *)(param_context + 0x18);
        *(uint64_t *)(stack_base_ptr + -0x20) = param_base_ptr;
        if (context_ptr == 0) {
            if (*(int *)(param_context + 0x60) == 0) {
                // 初始化扩展渲染参数
                *(uint64_t *)(param_block_ptr + 7) = 0;
                *(uint64_t *)(param_block_ptr + 0xb) = 0;
                *(uint64_t *)(param_block_ptr + -5) = 0;
                *(uint64_t *)(param_block_ptr + 5) = 0;
                *(uint64_t *)(param_block_ptr + 9) = 0;
                *(uint64_t *)(param_block_ptr + 0xd) = 0;
                *(uint64_t *)(param_block_ptr + -0x10) = 0;
                param_block_ptr[-0xe] = 0;
                *(int8_t *)(param_block_ptr + -0xd) = 1;
                param_6 = *(uint64_t *)(param_block_ptr + -0x10);
                param_7 = *(uint64_t *)(param_block_ptr + -0xe);
                *(int8_t *)(param_block_ptr + -8) = 0;
                *(uint64_t *)(param_block_ptr + -7) = 0;
                param_11 = *(uint64_t *)(param_block_ptr + -6);
                *param_block_ptr = 0;
                *(int8_t *)(param_block_ptr + 2) = 0;
                param_block_ptr[3] = 0;
                param_14._0_4_ = *param_block_ptr;
                param_15._0_4_ = param_block_ptr[2];
                param_15._4_4_ = param_block_ptr[3];
                *(uint64_t *)(param_block_ptr + -0xc) = 0;
                param_14._4_4_ = 0x7f7fffff;
                param_block_ptr[-10] = 3;
                param_block_ptr[-9] = 1;
                param_value = *(uint64_t *)(param_block_ptr + -0xc);
                *(int8_t *)(param_block_ptr + -0x20) = 0;
                *(int8_t *)((int64_t)param_block_ptr + -0x7f) = 0;
                *(int8_t *)((int64_t)param_block_ptr + -0x7e) = 0x80;
                *(int8_t *)((int64_t)param_block_ptr + -0x7d) = 0x3f;
                *(char *)(param_block_ptr + -0x1f) = *(char *)(param_block_ptr + 5);
                *(int8_t *)((int64_t)param_block_ptr + -0x7b) = *(int8_t *)((int64_t)param_block_ptr + 0x15);
                *(int8_t *)((int64_t)param_block_ptr + -0x7a) = *(int8_t *)((int64_t)param_block_ptr + 0x16);
                *(int8_t *)((int64_t)param_block_ptr + -0x79) = *(int8_t *)((int64_t)param_block_ptr + 0x17);
                *(int8_t *)(param_block_ptr + -0x1e) = *(int8_t *)(param_block_ptr + 6);
                *(int8_t *)((int64_t)param_block_ptr + -0x77) = *(int8_t *)((int64_t)param_block_ptr + 0x19);
                *(int8_t *)((int64_t)param_block_ptr + -0x76) = *(int8_t *)((int64_t)param_block_ptr + 0x1a);
                *(int8_t *)((int64_t)param_block_ptr + -0x75) = *(int8_t *)((int64_t)param_block_ptr + 0x1b);
                *(int8_t *)(param_block_ptr + -0x1d) = *(int8_t *)(param_block_ptr + 7);
                *(int8_t *)((int64_t)param_block_ptr + -0x73) = *(int8_t *)((int64_t)param_block_ptr + 0x1d);
                *(int8_t *)((int64_t)param_block_ptr + -0x72) = *(int8_t *)((int64_t)param_block_ptr + 0x1e);
                *(int8_t *)((int64_t)param_block_ptr + -0x71) = *(int8_t *)((int64_t)param_block_ptr + 0x1f);
                *(uint64_t *)(param_block_ptr + -2) = 0;
                param_12 = *(uint64_t *)(param_block_ptr + -4);
                param_13 = *(void **)(param_block_ptr + -2);
                *(uint64_t *)(param_block_ptr + 0x10) = 0;
                *(uint64_t *)(param_block_ptr + -0x1c) = *(uint64_t *)(param_block_ptr + 8);
                *(uint64_t *)(param_block_ptr + -0x1a) = *(uint64_t *)(param_block_ptr + 10);
                param_block_ptr[-0x18] = param_block_ptr[0xc];
                param_block_ptr[-0x17] = param_block_ptr[0xd];
                param_block_ptr[-0x16] = param_block_ptr[0xe];
                param_block_ptr[-0x15] = param_block_ptr[0xf];
                *(uint64_t *)(param_block_ptr + -0x14) = *(uint64_t *)(param_block_ptr + 0x10);
                param_9 = 0x100000001;
                param_10 = CONCAT71((int7)((uint64_t)*(uint64_t *)(param_block_ptr + -8) >> 8), 1);
                if (*(char *)(param_block_ptr + 5) == '\0') {
                    param_block_ptr[-0x1b] = 0x70333120;
                    param_block_ptr[-0x1f] = 0x676f7250;
                    param_block_ptr[-0x1e] = 0x6c437967;
                    param_block_ptr[-0x1d] = 0x2e6e6165;
                    param_block_ptr[-0x1c] = 0x2c667474;
                    *(int16_t *)(param_block_ptr + -0x1a) = 0x78;
                }
                param_8._4_4_ = (float)((uint64_t)param_value >> 0x20);
                is_negative = param_8._4_4_ <= 0.0;
                param_8 = param_value;
                if (is_negative) {
                    param_8 = CONCAT44(0x41500000, (int)param_value);
                }
                custom_param_ptr = &RENDERING_STRING_DATA_1;
                if (param_13 != (void *)0x0) {
                    custom_param_ptr = param_13;
                }
                context_ptr = FUN_180294c20(param_context, &RENDERING_INTERFACE_PTR_1, param_3, &param_6, custom_param_ptr);
                *(int32_t *)(context_ptr + 0xc) = 0x3f800000;
            }
            FUN_180294f50(param_context);
        }
        
        // 处理字节数据
        byte_ptr = *(byte **)(param_context + 0x18);
        if (byte_ptr != (byte *)0x0) {
            array_size = *(int *)(param_context + 0x28);
            data_index = *(int *)(param_context + 0x2c);
            if (RENDERING_GLOBAL_CONTEXT_1 != 0) {
                *(int *)(RENDERING_GLOBAL_CONTEXT_1 + 0x3a8) = *(int *)(RENDERING_GLOBAL_CONTEXT_1 + 0x3a8) + 1;
            }
            pixel_array_ptr = (uint *)func_0x000180120ce0((int64_t)data_index * (int64_t)array_size * 4, RENDERING_GLOBAL_CONTEXT_2);
            *(uint **)(param_context + 0x20) = pixel_array_ptr;
            
            // 转换字节数据为像素数据
            for (array_size = *(int *)(param_context + 0x2c) * *(int *)(param_context + 0x28); 0 < array_size;
                array_size = array_size + -1) {
                byte_data = *byte_ptr;
                byte_ptr = byte_ptr + 1;
                *pixel_array_ptr = (uint)byte_data << 0x18 | 0xffffff;
                pixel_array_ptr = pixel_array_ptr + 1;
            }
        }
    }
    
    // 设置输出参数
    *output_ptr = *(uint64_t *)(param_context + 0x20);
    if (param_3 != (int32_t *)0x0) {
        *param_3 = *(int32_t *)(param_context + 0x28);
    }
    if (output_param_ptr != (int32_t *)0x0) {
        *output_param_ptr = *(int32_t *)(param_context + 0x2c);
    }
    // 执行安全检查（该函数不返回）
    FUN_1808fc050(*(uint64_t *)(param_block_ptr + 0x14) ^ (uint64_t)&stack0x00000000);
}

/**
 * 渲染参数优化处理器
 * 
 * 该函数是渲染参数处理器的优化版本，提供更高的性能和
 * 更好的内存管理。适用于需要高性能参数处理的场景。
 * 
 * @param param_context 参数上下文指针
 * @param output_ptr 输出数据指针
 * @param param_3 参数3指针
 * @param param_4 - param_15 优化参数组
 * @param param_13 自定义参数指针
 * 
 * 处理流程：
 * 1. 优化的参数初始化
 * 2. 高性能数据处理
 * 3. 内存优化的数据结构
 * 4. 快速参数配置
 * 5. 优化的输出处理
 */
void rendering_parameter_processor_optimized(int64_t param_context, uint64_t *output_ptr, int32_t *param_3, uint64_t param_4,
                                          uint64_t param_5, uint64_t param_6, uint64_t param_7, uint64_t param_8,
                                          uint64_t param_9, uint64_t param_10, uint64_t param_11, uint64_t param_12,
                                          void *param_13, uint64_t param_14, uint64_t param_15)
{
    byte byte_data;
    int data_index;
    byte *byte_ptr;
    bool is_negative;
    uint64_t param_value;
    int64_t context_ptr;
    uint *pixel_array_ptr;
    void *custom_param_ptr;
    int array_size;
    int64_t resource_base_ptr;
    int32_t *param_block_ptr;
    int32_t *output_param_ptr;
    uint64_t param_base_ptr;
    int64_t stack_base_ptr;
    bool should_process;
    int32_t format_type;
    
    // 设置优化参数
    *(uint64_t *)(stack_base_ptr + -0x30) = param_11;
    
    if (should_process) {
        context_ptr = *(int64_t *)(param_context + 0x18);
        *(uint64_t *)(stack_base_ptr + -0x20) = param_base_ptr;
        if (context_ptr == 0) {
            if (*(int *)(param_context + 0x60) == 0) {
                // 初始化优化渲染参数
                *(uint64_t *)(param_block_ptr + 7) = 0;
                *(uint64_t *)(param_block_ptr + 0xb) = 0;
                *(uint64_t *)(param_block_ptr + -5) = 0;
                *(uint64_t *)(param_block_ptr + 5) = 0;
                *(uint64_t *)(param_block_ptr + 9) = 0;
                *(uint64_t *)(param_block_ptr + 0xd) = 0;
                *(uint64_t *)(param_block_ptr + -0x10) = 0;
                param_block_ptr[-0xe] = 0;
                *(int8_t *)(param_block_ptr + -0xd) = 1;
                param_6 = *(uint64_t *)(param_block_ptr + -0x10);
                param_7 = *(uint64_t *)(param_block_ptr + -0xe);
                *(int8_t *)(param_block_ptr + -8) = 0;
                *(uint64_t *)(param_block_ptr + -7) = 0;
                param_11 = *(uint64_t *)(param_block_ptr + -6);
                *param_block_ptr = 0;
                *(int8_t *)(param_block_ptr + 2) = 0;
                param_block_ptr[3] = 0;
                param_14._0_4_ = *param_block_ptr;
                param_15._0_4_ = param_block_ptr[2];
                param_15._4_4_ = param_block_ptr[3];
                *(uint64_t *)(param_block_ptr + -0xc) = 0;
                param_14._4_4_ = 0x7f7fffff;
                param_block_ptr[-10] = 3;
                param_block_ptr[-9] = 1;
                param_value = *(uint64_t *)(param_block_ptr + -0xc);
                *(int8_t *)(param_block_ptr + -0x20) = 0;
                *(int8_t *)((int64_t)param_block_ptr + -0x7f) = 0;
                *(int8_t *)((int64_t)param_block_ptr + -0x7e) = 0x80;
                *(int8_t *)((int64_t)param_block_ptr + -0x7d) = 0x3f;
                *(char *)(param_block_ptr + -0x1f) = *(char *)(param_block_ptr + 5);
                *(int8_t *)((int64_t)param_block_ptr + -0x7b) = *(int8_t *)((int64_t)param_block_ptr + 0x15);
                *(int8_t *)((int64_t)param_block_ptr + -0x7a) = *(int8_t *)((int64_t)param_block_ptr + 0x16);
                *(int8_t *)((int64_t)param_block_ptr + -0x79) = *(int8_t *)((int64_t)param_block_ptr + 0x17);
                *(int8_t *)(param_block_ptr + -0x1e) = *(int8_t *)(param_block_ptr + 6);
                *(int8_t *)((int64_t)param_block_ptr + -0x77) = *(int8_t *)((int64_t)param_block_ptr + 0x19);
                *(int8_t *)((int64_t)param_block_ptr + -0x76) = *(int8_t *)((int64_t)param_block_ptr + 0x1a);
                *(int8_t *)((int64_t)param_block_ptr + -0x75) = *(int8_t *)((int64_t)param_block_ptr + 0x1b);
                *(int8_t *)(param_block_ptr + -0x1d) = *(int8_t *)(param_block_ptr + 7);
                *(int8_t *)((int64_t)param_block_ptr + -0x73) = *(int8_t *)((int64_t)param_block_ptr + 0x1d);
                *(int8_t *)((int64_t)param_block_ptr + -0x72) = *(int8_t *)((int64_t)param_block_ptr + 0x1e);
                *(int8_t *)((int64_t)param_block_ptr + -0x71) = *(int8_t *)((int64_t)param_block_ptr + 0x1f);
                *(uint64_t *)(param_block_ptr + -2) = 0;
                param_12 = *(uint64_t *)(param_block_ptr + -4);
                param_13 = *(void **)(param_block_ptr + -2);
                *(uint64_t *)(param_block_ptr + 0x10) = 0;
                *(uint64_t *)(param_block_ptr + -0x1c) = *(uint64_t *)(param_block_ptr + 8);
                *(uint64_t *)(param_block_ptr + -0x1a) = *(uint64_t *)(param_block_ptr + 10);
                format_type = (int32_t)*(uint64_t *)(param_block_ptr + 0x10);
                param_block_ptr[-0x18] = param_block_ptr[0xc];
                param_block_ptr[-0x17] = param_block_ptr[0xd];
                param_block_ptr[-0x16] = param_block_ptr[0xe];
                param_block_ptr[-0x15] = param_block_ptr[0xf];
                *(uint64_t *)(param_block_ptr + -0x14) = *(uint64_t *)(param_block_ptr + 0x10);
                param_9 = 0x100000001;
                param_10 = CONCAT71((int7)((uint64_t)*(uint64_t *)(param_block_ptr + -8) >> 8), 1);
                if (*(char *)(param_block_ptr + 5) == '\0') {
                    format_type = 0x676f7250;
                    param_block_ptr[-0x1b] = 0x70333120;
                    param_block_ptr[-0x1f] = 0x676f7250;
                    param_block_ptr[-0x1e] = 0x6c437967;
                    param_block_ptr[-0x1d] = 0x2e6e6165;
                    param_block_ptr[-0x1c] = 0x2c667474;
                    *(int16_t *)(param_block_ptr + -0x1a) = 0x78;
                }
                param_8._4_4_ = (float)((uint64_t)param_value >> 0x20);
                is_negative = param_8._4_4_ <= 0.0;
                param_8 = param_value;
                if (is_negative) {
                    param_8 = CONCAT44(0x41500000, (int)param_value);
                }
                custom_param_ptr = &RENDERING_STRING_DATA_1;
                if (param_13 != (void *)0x0) {
                    custom_param_ptr = param_13;
                }
                context_ptr = FUN_180294c20(format_type, &RENDERING_INTERFACE_PTR_1, param_3, &param_6, custom_param_ptr);
                *(int32_t *)(context_ptr + 0xc) = 0x3f800000;
            }
            FUN_180294f50();
        }
        
        // 优化的字节数据处理
        byte_ptr = *(byte **)(resource_base_ptr + 0x18);
        if (byte_ptr != (byte *)0x0) {
            array_size = *(int *)(resource_base_ptr + 0x28);
            data_index = *(int *)(resource_base_ptr + 0x2c);
            if (RENDERING_GLOBAL_CONTEXT_1 != 0) {
                *(int *)(RENDERING_GLOBAL_CONTEXT_1 + 0x3a8) = *(int *)(RENDERING_GLOBAL_CONTEXT_1 + 0x3a8) + 1;
            }
            pixel_array_ptr = (uint *)func_0x000180120ce0((int64_t)data_index * (int64_t)array_size * 4, RENDERING_GLOBAL_CONTEXT_2);
            *(uint **)(resource_base_ptr + 0x20) = pixel_array_ptr;
            
            // 优化的数据转换
            for (array_size = *(int *)(resource_base_ptr + 0x2c) * *(int *)(resource_base_ptr + 0x28); 0 < array_size;
                array_size = array_size + -1) {
                byte_data = *byte_ptr;
                byte_ptr = byte_ptr + 1;
                *pixel_array_ptr = (uint)byte_data << 0x18 | 0xffffff;
                pixel_array_ptr = pixel_array_ptr + 1;
            }
        }
    }
    
    // 优化的输出参数设置
    *output_ptr = *(uint64_t *)(resource_base_ptr + 0x20);
    if (param_3 != (int32_t *)0x0) {
        *param_3 = *(int32_t *)(resource_base_ptr + 0x28);
    }
    if (output_param_ptr != (int32_t *)0x0) {
        *output_param_ptr = *(int32_t *)(resource_base_ptr + 0x2c);
    }
    // 执行安全检查（该函数不返回）
    FUN_1808fc050(*(uint64_t *)(param_block_ptr + 0x14) ^ (uint64_t)&stack0x00000000);
}

// 警告：以'_'开头的全局变量与相同地址的较小符号重叠