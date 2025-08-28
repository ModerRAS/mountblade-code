#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 渲染系统高级资源清理和内存管理模块
// 03_rendering_part050.c - 9个核心函数
// 功能：渲染系统高级资源清理、内存管理、批量处理、索引处理、循环处理、快速清理、参数化清理、资源初始化、高级初始化和扩展初始化等高级渲染功能

// 全局变量声明
extern void *SYSTEM_DATA_MANAGER_A;  // 渲染系统全局状态指针
extern void *SYSTEM_DATA_MANAGER_B;  // 渲染系统内存管理器指针
extern void *global_config_720_ptr;   // 渲染系统默认参数配置指针
extern void *global_config_704_ptr;   // 渲染系统算法配置指针
extern uint64_t GET_SECURITY_COOKIE(); // 渲染系统安全校验常量

// 外部函数声明
extern void FUN_180059ba0(void *resource, void *memory_manager);  // 资源释放函数 -> RenderingSystem_ResourceReleaser
extern void FUN_180296ad0(void *resource);  // 资源清理函数 -> RenderingSystem_ResourceCleaner
extern void FUN_180294c20(void *context, void *algorithm_config, uint32_t *param_3, void *param_4, void *param_5);  // 渲染配置函数 -> RenderingSystem_Configurator
extern void FUN_180294f50(void *context);  // 渲染处理函数 -> RenderingSystem_Processor
extern void *func_0x000180120ce0(uint64_t size, void *memory_manager);  // 内存分配函数 -> RenderingSystem_MemoryAllocator
extern void FUN_1808fc050(uint64_t stack_cookie);  // 栈安全检查函数 -> RenderingSystem_StackChecker

// 函数别名定义
#define RenderingSystem_ResourceReleaser FUN_180059ba0
#define RenderingSystem_ResourceCleaner FUN_180296ad0
#define RenderingSystem_Configurator FUN_180294c20
#define RenderingSystem_Processor FUN_180294f50
#define RenderingSystem_MemoryAllocator func_0x000180120ce0
#define RenderingSystem_StackChecker FUN_1808fc050

/**
 * 渲染资源释放函数
 * 释放渲染对象中的两个主要资源
 * 
 * @param render_context 渲染上下文指针
 */
void release_render_resources(void *render_context)
{
    void *resource_1;
    void *resource_2;
    
    // 释放第一个资源
    resource_1 = *(void **)((uint8_t *)render_context + 0x18);
    if (resource_1 != NULL) {
        if (SYSTEM_DATA_MANAGER_A != NULL) {
            *(int *)((uint8_t *)SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)((uint8_t *)SYSTEM_DATA_MANAGER_A + 0x3a8) - 1;
        }
        RenderingSystem_ResourceReleaser(resource_1, SYSTEM_DATA_MANAGER_B);
    }
    
    // 释放第二个资源
    resource_2 = *(void **)((uint8_t *)render_context + 0x20);
    if (resource_2 != NULL) {
        if (SYSTEM_DATA_MANAGER_A != NULL) {
            *(int *)((uint8_t *)SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)((uint8_t *)SYSTEM_DATA_MANAGER_A + 0x3a8) - 1;
        }
        RenderingSystem_ResourceReleaser(resource_2, SYSTEM_DATA_MANAGER_B);
    }
    
    // 清理指针
    *(void **)((uint8_t *)render_context + 0x20) = NULL;
    *(void **)((uint8_t *)render_context + 0x18) = NULL;
}

/**
 * 渲染系统批量资源释放函数
 * 批量释放渲染系统中的多个资源
 * 
 * @param render_context 渲染上下文指针
 */
void release_batch_render_resources(void *render_context)
{
    int *resource_count_ptr;
    void *resource_array;
    void *resource_manager;
    uint64_t resource_index;
    uint64_t array_index;
    uint32_t current_count;
    void *current_resource;
    uint64_t resource_offset;
    uint64_t array_offset;
    
    array_offset = 0;
    resource_offset = array_offset;
    resource_index = array_offset;
    
    // 释放第一个资源数组
    current_count = *(uint32_t *)((uint8_t *)render_context + 0x60);
    if (current_count > 0) {
        do {
            resource_array = *(void **)(resource_index + *(uint64_t *)((uint8_t *)render_context + 0x68));
            if ((resource_array != NULL) && 
                (*((uint8_t *)resource_index + 0xc + *(uint64_t *)((uint8_t *)render_context + 0x68)) != '\0')) {
                if (SYSTEM_DATA_MANAGER_A != NULL) {
                    *(int *)((uint8_t *)SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)((uint8_t *)SYSTEM_DATA_MANAGER_A + 0x3a8) - 1;
                }
                RenderingSystem_ResourceReleaser(resource_array, SYSTEM_DATA_MANAGER_B);
            }
            current_count = (uint32_t)resource_offset + 1;
            resource_offset = (uint64_t)current_count;
            resource_index = resource_index + 0x88;
        } while ((int)current_count < *(int *)((uint8_t *)render_context + 0x60));
    }
    
    resource_offset = array_offset;
    resource_index = array_offset;
    
    // 释放第二个资源数组
    current_count = *(uint32_t *)((uint8_t *)render_context + 0x40);
    if (current_count > 0) {
        do {
            resource_array = *(void **)(*(uint64_t *)((uint8_t *)render_context + 0x48) + resource_offset);
            uint64_t resource_ptr = *(uint64_t *)((uint8_t *)resource_array + 0x50);
            if ((*(uint64_t *)((uint8_t *)render_context + 0x68) <= resource_ptr) &&
                (resource_ptr < (int64_t)*(uint32_t *)((uint8_t *)render_context + 0x60) * 0x88 + *(uint64_t *)((uint8_t *)render_context + 0x68))) {
                *(uint64_t *)((uint8_t *)resource_array + 0x50) = 0;
                *(uint16_t *)(*(uint64_t *)(*(uint64_t *)((uint8_t *)render_context + 0x48) + resource_offset) + 0x4e) = 0;
            }
            current_count = (uint32_t)resource_index + 1;
            resource_offset = resource_offset + 8;
            resource_index = (uint64_t)current_count;
        } while ((int)current_count < *(int *)((uint8_t *)render_context + 0x40));
    }
    
    resource_manager = SYSTEM_DATA_MANAGER_A;
    resource_array = *(void **)((uint8_t *)render_context + 0x68);
    if (resource_array == NULL) {
        resource_array = *(void **)((uint8_t *)render_context + 0x58);
        if (resource_array != NULL) {
            *(uint64_t *)((uint8_t *)render_context + 0x50) = 0;
            if (resource_manager != NULL) {
                *(int *)((uint8_t *)resource_manager + 0x3a8) = *(int *)((uint8_t *)resource_manager + 0x3a8) - 1;
            }
            RenderingSystem_ResourceReleaser(resource_array, SYSTEM_DATA_MANAGER_B);
        }
        
        *(uint32_t *)((uint8_t *)render_context + 0x70) = 0xffffffff;
        release_render_resources(render_context);
        
        resource_array = SYSTEM_DATA_MANAGER_A;
        resource_offset = array_offset;
        
        // 清理资源数组
        current_count = *(uint32_t *)((uint8_t *)render_context + 0x40);
        if (current_count > 0) {
            do {
                resource_manager = *(void **)(resource_offset + *(uint64_t *)((uint8_t *)render_context + 0x48));
                if (resource_manager != NULL) {
                    RenderingSystem_ResourceCleaner(resource_manager);
                    if (SYSTEM_DATA_MANAGER_A != NULL) {
                        *(int *)((uint8_t *)SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)((uint8_t *)SYSTEM_DATA_MANAGER_A + 0x3a8) - 1;
                    }
                    RenderingSystem_ResourceReleaser(resource_manager, SYSTEM_DATA_MANAGER_B);
                }
                current_count = (uint32_t)array_offset + 1;
                array_offset = (uint64_t)current_count;
                resource_offset = resource_offset + 8;
            } while ((int)current_count < *(int *)((uint8_t *)render_context + 0x40));
        }
        
        resource_manager = *(void **)((uint8_t *)render_context + 0x48);
        if (resource_manager == NULL) {
            return;
        }
        
        *(uint64_t *)((uint8_t *)render_context + 0x40) = 0;
        if (resource_array != NULL) {
            resource_count_ptr = (int *)((uint8_t *)resource_array + 0x3a8);
            *resource_count_ptr = *resource_count_ptr - 1;
        }
        RenderingSystem_ResourceReleaser(resource_manager, SYSTEM_DATA_MANAGER_B);
    }
    
    *(uint64_t *)((uint8_t *)render_context + 0x60) = 0;
    if (resource_manager != NULL) {
        *(int *)((uint8_t *)resource_manager + 0x3a8) = *(int *)((uint8_t *)resource_manager + 0x3a8) - 1;
    }
    RenderingSystem_ResourceReleaser(resource_array, SYSTEM_DATA_MANAGER_B);
}

/**
 * 渲染系统选择性资源释放函数
 * 根据索引条件选择性释放资源
 * 
 * @param render_context 渲染上下文指针
 * @param index 选择索引
 */
void release_selective_render_resources(void *render_context, int index)
{
    int *resource_count_ptr;
    void *resource_array;
    void *resource_manager;
    uint64_t resource_ptr;
    uint64_t array_index;
    int current_count;
    uint64_t index_value;
    uint32_t counter;
    
    index_value = (uint64_t)index;
    array_index = index_value;
    
    // 根据索引释放第一个资源数组
    if (index < *(int *)((uint8_t *)render_context + 0x60)) {
        array_index = index_value;
        do {
            resource_array = *(void **)(array_index + *(uint64_t *)((uint8_t *)render_context + 0x68));
            if ((resource_array != NULL) &&
                (*((uint8_t *)array_index + 0xc + *(uint64_t *)((uint8_t *)render_context + 0x68)) != (char)index)) {
                if (SYSTEM_DATA_MANAGER_A != NULL) {
                    *(int *)((uint8_t *)SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)((uint8_t *)SYSTEM_DATA_MANAGER_A + 0x3a8) - 1;
                }
                RenderingSystem_ResourceReleaser(resource_array, SYSTEM_DATA_MANAGER_B);
            }
            counter = (uint32_t)index_value + 1;
            index_value = (uint64_t)counter;
            array_index = array_index + 0x88;
        } while ((int)counter < *(int *)((uint8_t *)render_context + 0x60));
    }
    
    array_index = index_value;
    index_value = (uint64_t)index;
    
    // 根据索引释放第二个资源数组
    if (index < *(int *)((uint8_t *)render_context + 0x40)) {
        do {
            resource_array = *(void **)(*(uint64_t *)((uint8_t *)render_context + 0x48) + index_value);
            resource_ptr = *(uint64_t *)((uint8_t *)resource_array + 0x50);
            if ((*(uint64_t *)((uint8_t *)render_context + 0x68) <= resource_ptr) &&
                (resource_ptr < (int64_t)*(uint32_t *)((uint8_t *)render_context + 0x60) * 0x88 + *(uint64_t *)((uint8_t *)render_context + 0x68))) {
                *(uint64_t *)((uint8_t *)resource_array + 0x50) = index_value;
                *(int16_t *)(*(uint64_t *)(*(uint64_t *)((uint8_t *)render_context + 0x48) + index_value) + 0x4e) = (int16_t)index;
            }
            counter = (uint32_t)array_index + 1;
            array_index = (uint64_t)counter;
            index_value = index_value + 8;
        } while ((int)counter < *(int *)((uint8_t *)render_context + 0x40));
    }
    
    resource_manager = SYSTEM_DATA_MANAGER_A;
    resource_array = *(void **)((uint8_t *)render_context + 0x68);
    if (resource_array == NULL) {
        resource_array = *(void **)((uint8_t *)render_context + 0x58);
        if (resource_array != NULL) {
            *(uint64_t *)((uint8_t *)render_context + 0x50) = index_value;
            if (resource_manager != NULL) {
                *(int *)((uint8_t *)resource_manager + 0x3a8) = *(int *)((uint8_t *)resource_manager + 0x3a8) - 1;
            }
            RenderingSystem_ResourceReleaser(resource_array, SYSTEM_DATA_MANAGER_B);
        }
        
        *(uint32_t *)((uint8_t *)render_context + 0x70) = 0xffffffff;
        release_render_resources(render_context);
        
        resource_array = SYSTEM_DATA_MANAGER_A;
        array_index = index_value;
        index_value = (uint64_t)index;
        
        // 根据索引清理资源数组
        if (index < *(int *)((uint8_t *)render_context + 0x40)) {
            do {
                resource_manager = *(void **)(index_value + *(uint64_t *)((uint8_t *)render_context + 0x48));
                if (resource_manager != NULL) {
                    RenderingSystem_ResourceCleaner(resource_manager);
                    if (SYSTEM_DATA_MANAGER_A != NULL) {
                        *(int *)((uint8_t *)SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)((uint8_t *)SYSTEM_DATA_MANAGER_A + 0x3a8) - 1;
                    }
                    RenderingSystem_ResourceReleaser(resource_manager, SYSTEM_DATA_MANAGER_B);
                }
                counter = (uint32_t)array_index + 1;
                array_index = (uint64_t)counter;
                index_value = index_value + 8;
            } while ((int)counter < *(int *)((uint8_t *)render_context + 0x40));
        }
        
        resource_manager = *(void **)((uint8_t *)render_context + 0x48);
        if (resource_manager == NULL) {
            return;
        }
        
        *(uint64_t *)((uint8_t *)render_context + 0x40) = index_value;
        if (resource_array != NULL) {
            resource_count_ptr = (int *)((uint8_t *)resource_array + 0x3a8);
            *resource_count_ptr = *resource_count_ptr - 1;
        }
        RenderingSystem_ResourceReleaser(resource_manager, SYSTEM_DATA_MANAGER_B);
    }
    
    *(uint64_t *)((uint8_t *)render_context + 0x60) = index_value;
    if (resource_manager != NULL) {
        *(int *)((uint8_t *)resource_manager + 0x3a8) = *(int *)((uint8_t *)resource_manager + 0x3a8) - 1;
    }
    RenderingSystem_ResourceReleaser(resource_array, SYSTEM_DATA_MANAGER_B);
}

/**
 * 渲染系统循环资源释放函数
 * 循环释放渲染系统中的资源
 * 
 * @param render_context 渲染上下文指针
 * @param start_index 开始索引
 * @param end_index 结束索引
 */
void release_loop_render_resources(void *render_context, int start_index, int end_index)
{
    int *resource_count_ptr;
    void *resource_array;
    void *resource_manager;
    int current_index;
    int loop_index;
    
    resource_manager = SYSTEM_DATA_MANAGER_A;
    current_index = end_index;
    
    // 循环释放资源数组
    do {
        resource_array = *(void **)(current_index + *(uint64_t *)((uint8_t *)render_context + 0x48));
        if (resource_array != NULL) {
            RenderingSystem_ResourceCleaner(resource_array);
            if (SYSTEM_DATA_MANAGER_A != NULL) {
                *(int *)((uint8_t *)SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)((uint8_t *)SYSTEM_DATA_MANAGER_A + 0x3a8) - 1;
            }
            RenderingSystem_ResourceReleaser(resource_array, SYSTEM_DATA_MANAGER_B);
        }
        start_index = start_index + 1;
        current_index = current_index + 8;
    } while (start_index < *(int *)((uint8_t *)render_context + 0x40));
    
    resource_array = *(void **)((uint8_t *)render_context + 0x48);
    if (resource_array != NULL) {
        *(uint64_t *)((uint8_t *)render_context + 0x40) = (uint64_t)end_index;
        if (resource_manager != NULL) {
            resource_count_ptr = (int *)((uint8_t *)resource_manager + 0x3a8);
            *resource_count_ptr = *resource_count_ptr - 1;
        }
        RenderingSystem_ResourceReleaser(resource_array, SYSTEM_DATA_MANAGER_B);
    }
}

/**
 * 渲染系统快速资源释放函数
 * 快速释放渲染系统中的主要资源
 * 
 * @param render_context 渲染上下文指针
 * @param reset_value 重置值
 */
void release_fast_render_resources(void *render_context, uint64_t reset_value)
{
    int *resource_count_ptr;
    void *resource_array;
    void *resource_manager;
    
    resource_manager = SYSTEM_DATA_MANAGER_A;
    resource_array = *(void **)((uint8_t *)render_context + 0x48);
    if (resource_array != NULL) {
        *(uint64_t *)((uint8_t *)render_context + 0x40) = reset_value;
        if (resource_manager != NULL) {
            resource_count_ptr = (int *)((uint8_t *)resource_manager + 0x3a8);
            *resource_count_ptr = *resource_count_ptr - 1;
        }
        RenderingSystem_ResourceReleaser(resource_array, SYSTEM_DATA_MANAGER_B);
    }
}

/**
 * 渲染系统单一资源释放函数
 * 释放单个渲染资源
 * 
 * @param render_context 渲染上下文指针
 * @param resource 要释放的资源
 * @param reset_value 重置值
 */
void release_single_render_resource(void *render_context, void *resource, uint64_t reset_value)
{
    int *resource_count_ptr;
    void *resource_manager;
    
    resource_manager = SYSTEM_DATA_MANAGER_A;
    *(uint64_t *)((uint8_t *)render_context + 0x40) = reset_value;
    if (resource_manager != NULL) {
        resource_count_ptr = (int *)((uint8_t *)resource_manager + 0x3a8);
        *resource_count_ptr = *resource_count_ptr - 1;
    }
    RenderingSystem_ResourceReleaser(resource, SYSTEM_DATA_MANAGER_B);
}

/**
 * 渲染系统参数初始化和资源处理函数
 * 初始化渲染参数并处理相关资源
 * 
 * @param render_context 渲染上下文指针
 * @param param_2 输出参数2
 * @param param_3 输出参数3
 * @param param_4 输出参数4
 */
void initialize_render_parameters_with_resources(void *render_context, void **param_2, uint32_t *param_3, uint32_t *param_4)
{
    uint8_t *byte_data;
    int width;
    int height;
    bool has_resources;
    uint64_t resource_ptr;
    uint32_t *pixel_data;
    int pixel_count;
    int current_pixel;
    uint8_t current_byte;
    
    // 栈安全检查
    uint64_t stack_cookie = GET_SECURITY_COOKIE() ^ (uint64_t)&render_context;
    
    if (*(uint64_t *)((uint8_t *)render_context + 0x20) == 0) {
        if (*(uint64_t *)((uint8_t *)render_context + 0x18) == 0) {
            if (*(int *)((uint8_t *)render_context + 0x60) == 0) {
                // 初始化默认渲染参数
                uint32_t default_params[16] = {0};
                float default_floats[8] = {0.0f};
                
                // 设置默认参数值
                default_params[0] = 1;
                default_floats[0] = 1.0f;
                default_floats[1] = 0x7f7fffff; // FLT_MAX
                
                // 调用渲染配置函数
                resource_ptr = RenderingSystem_Configurator(render_context, &global_config_704_ptr, param_3, default_params);
                *(uint32_t *)((uint8_t *)resource_ptr + 0xc) = 0x3f800000; // 1.0f
            }
            RenderingSystem_Processor(render_context);
        }
        
        // 处理像素数据
        byte_data = *(uint8_t **)((uint8_t *)render_context + 0x18);
        if (byte_data != NULL) {
            width = *(int *)((uint8_t *)render_context + 0x28);
            height = *(int *)((uint8_t *)render_context + 0x2c);
            
            if (SYSTEM_DATA_MANAGER_A != NULL) {
                *(int *)((uint8_t *)SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)((uint8_t *)SYSTEM_DATA_MANAGER_A + 0x3a8) + 1;
            }
            
            // 分配像素数据内存
            pixel_data = (uint32_t *)func_0x000180120ce0((uint64_t)height * (uint64_t)width * 4, SYSTEM_DATA_MANAGER_B);
            *(uint32_t **)((uint8_t *)render_context + 0x20) = pixel_data;
            
            // 转换字节数据为像素数据
            for (pixel_count = *(int *)((uint8_t *)render_context + 0x2c) * *(int *)((uint8_t *)render_context + 0x28); pixel_count > 0;
                 pixel_count = pixel_count - 1) {
                current_byte = *byte_data;
                byte_data = byte_data + 1;
                *pixel_data = (uint32_t)current_byte << 0x18 | 0xffffff;
                pixel_data = pixel_data + 1;
            }
        }
    }
    
    // 设置输出参数
    *param_2 = *(void **)((uint8_t *)render_context + 0x20);
    if (param_3 != NULL) {
        *param_3 = *(uint32_t *)((uint8_t *)render_context + 0x28);
    }
    if (param_4 != NULL) {
        *param_4 = *(uint32_t *)((uint8_t *)render_context + 0x2c);
    }
    
    // 栈安全检查
    FUN_1808fc050(stack_cookie ^ (uint64_t)&render_context);
}

/**
 * 渲染系统高级参数初始化函数
 * 初始化高级渲染参数并处理资源
 * 
 * @param render_context 渲染上下文指针
 * @param param_2 输出参数2
 * @param param_3 输出参数3
 * @param param_4 参数4
 * @param param_5 参数5
 * @param param_6 参数6
 * @param param_7 参数7
 * @param param_8 参数8
 * @param param_9 参数9
 * @param param_10 参数10
 * @param param_11 参数11
 * @param param_12 参数12
 * @param param_13 参数13
 * @param param_14 参数14
 * @param param_15 参数15
 */
void initialize_advanced_render_parameters(void *render_context, void **param_2, uint32_t *param_3, uint64_t param_4,
                                          uint64_t param_5, uint64_t param_6, uint64_t param_7, uint64_t param_8,
                                          uint64_t param_9, uint64_t param_10, uint64_t param_11, uint64_t param_12,
                                          void *param_13, uint64_t param_14, uint64_t param_15)
{
    uint8_t *byte_data;
    int width;
    int height;
    bool has_resources;
    uint64_t resource_ptr;
    uint32_t *pixel_data;
    int pixel_count;
    uint8_t current_byte;
    void *config_ptr;
    float float_value;
    
    // 栈安全检查
    uint64_t stack_cookie = *(uint64_t *)((uint8_t *)render_context + 0x14) ^ (uint64_t)&render_context;
    
    if (has_resources) {
        resource_ptr = *(uint64_t *)((uint8_t *)render_context + 0x18);
        if (resource_ptr == 0) {
            if (*(int *)((uint8_t *)render_context + 0x60) == 0) {
                // 初始化高级渲染参数
                uint64_t advanced_params[16] = {0};
                float advanced_floats[8] = {0.0f};
                
                // 设置高级参数值
                advanced_params[0] = 1;
                advanced_floats[0] = 1.0f;
                advanced_floats[1] = 0x7f7fffff; // FLT_MAX
                
                // 设置渲染格式字符串
                const char *render_format = "Program Cyg, 1.3 ,.txt, x";
                
                // 调用高级渲染配置函数
                resource_ptr = FUN_180294c20(render_context, &global_config_704_ptr, param_3, advanced_params, 
                                            param_13 != NULL ? param_13 : &global_config_720_ptr);
                *(uint32_t *)((uint8_t *)resource_ptr + 0xc) = 0x3f800000; // 1.0f
            }
            RenderingSystem_Processor(render_context);
        }
        
        // 处理像素数据
        byte_data = *(uint8_t **)((uint8_t *)render_context + 0x18);
        if (byte_data != NULL) {
            width = *(int *)((uint8_t *)render_context + 0x28);
            height = *(int *)((uint8_t *)render_context + 0x2c);
            
            if (SYSTEM_DATA_MANAGER_A != NULL) {
                *(int *)((uint8_t *)SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)((uint8_t *)SYSTEM_DATA_MANAGER_A + 0x3a8) + 1;
            }
            
            // 分配像素数据内存
            pixel_data = (uint32_t *)func_0x000180120ce0((uint64_t)height * (uint64_t)width * 4, SYSTEM_DATA_MANAGER_B);
            *(uint32_t **)((uint8_t *)render_context + 0x20) = pixel_data;
            
            // 转换字节数据为像素数据
            for (pixel_count = *(int *)((uint8_t *)render_context + 0x2c) * *(int *)((uint8_t *)render_context + 0x28); pixel_count > 0;
                 pixel_count = pixel_count - 1) {
                current_byte = *byte_data;
                byte_data = byte_data + 1;
                *pixel_data = (uint32_t)current_byte << 0x18 | 0xffffff;
                pixel_data = pixel_data + 1;
            }
        }
    }
    
    // 设置输出参数
    *param_2 = *(void **)((uint8_t *)render_context + 0x20);
    if (param_3 != NULL) {
        *param_3 = *(uint32_t *)((uint8_t *)render_context + 0x28);
    }
    
    // 栈安全检查
    FUN_1808fc050(stack_cookie);
}

/**
 * 渲染系统优化参数初始化函数
 * 优化的渲染参数初始化，提高性能
 * 
 * @param render_context 渲染上下文指针
 * @param param_2 输出参数2
 * @param param_3 输出参数3
 * @param param_4 参数4
 * @param param_5 参数5
 * @param param_6 参数6
 * @param param_7 参数7
 * @param param_8 参数8
 * @param param_9 参数9
 * @param param_10 参数10
 * @param param_11 参数11
 * @param param_12 参数12
 * @param param_13 参数13
 * @param param_14 参数14
 * @param param_15 参数15
 */
void initialize_optimized_render_parameters(void *render_context, void **param_2, uint32_t *param_3, uint64_t param_4,
                                           uint64_t param_5, uint64_t param_6, uint64_t param_7, uint64_t param_8,
                                           uint64_t param_9, uint64_t param_10, uint64_t param_11, uint64_t param_12,
                                           void *param_13, uint64_t param_14, uint64_t param_15)
{
    uint8_t *byte_data;
    int width;
    int height;
    bool has_resources;
    uint64_t resource_ptr;
    uint32_t *pixel_data;
    int pixel_count;
    uint8_t current_byte;
    void *config_ptr;
    float float_value;
    uint32_t format_value;
    
    // 栈安全检查
    uint64_t stack_cookie = *(uint64_t *)((uint8_t *)render_context + 0x14) ^ (uint64_t)&render_context;
    
    if (has_resources) {
        resource_ptr = *(uint64_t *)((uint8_t *)render_context + 0x18);
        if (resource_ptr == 0) {
            if (*(int *)((uint8_t *)render_context + 0x60) == 0) {
                // 初始化优化渲染参数
                uint64_t optimized_params[16] = {0};
                float optimized_floats[8] = {0.0f};
                
                // 设置优化参数值
                optimized_params[0] = 1;
                optimized_floats[0] = 1.0f;
                optimized_floats[1] = 0x7f7fffff; // FLT_MAX
                
                // 设置优化的渲染格式字符串
                const char *optimized_format = "Program Cyg, 1.3 ,.txt, x";
                format_value = 0x676f7250; // "Prog"
                
                // 调用优化渲染配置函数
                resource_ptr = FUN_180294c20(format_value, &global_config_704_ptr, param_3, optimized_params, 
                                            param_13 != NULL ? param_13 : &global_config_720_ptr);
                *(uint32_t *)((uint8_t *)resource_ptr + 0xc) = 0x3f800000; // 1.0f
            }
            FUN_180294f50();
        }
        
        // 处理像素数据（优化版本）
        byte_data = *(uint8_t **)((uint8_t *)render_context + 0x18);
        if (byte_data != NULL) {
            width = *(int *)((uint8_t *)render_context + 0x28);
            height = *(int *)((uint8_t *)render_context + 0x2c);
            
            if (SYSTEM_DATA_MANAGER_A != NULL) {
                *(int *)((uint8_t *)SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)((uint8_t *)SYSTEM_DATA_MANAGER_A + 0x3a8) + 1;
            }
            
            // 分配像素数据内存
            pixel_data = (uint32_t *)func_0x000180120ce0((uint64_t)height * (uint64_t)width * 4, SYSTEM_DATA_MANAGER_B);
            *(uint32_t **)((uint8_t *)render_context + 0x20) = pixel_data;
            
            // 优化的字节数据转换
            for (pixel_count = *(int *)((uint8_t *)render_context + 0x2c) * *(int *)((uint8_t *)render_context + 0x28); pixel_count > 0;
                 pixel_count = pixel_count - 1) {
                current_byte = *byte_data;
                byte_data = byte_data + 1;
                *pixel_data = (uint32_t)current_byte << 0x18 | 0xffffff;
                pixel_data = pixel_data + 1;
            }
        }
    }
    
    // 设置输出参数
    *param_2 = *(void **)((uint8_t *)render_context + 0x20);
    if (param_3 != NULL) {
        *param_3 = *(uint32_t *)((uint8_t *)render_context + 0x28);
    }
    
    // 栈安全检查
    FUN_1808fc050(stack_cookie);
}