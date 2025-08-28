/*
 * TaleWorlds.Native 渲染系统美化代码 - 第36部分
 * 渲染系统初始化和设备管理模块
 * 
 * 本文件包含5个渲染相关函数，主要负责：
 * - 渲染设备的初始化和配置
 * - 渲染资源的管理和清理
 * - 渲染参数的设置和优化
 * - 设备状态的监控和控制
 */

#include <stdint.h>
#include <stdbool.h>
#include <math.h>

/* 渲染设备配置结构体 */
typedef struct {
    uint32_t device_id;
    uint32_t adapter_index;
    uint32_t output_index;
    uint32_t feature_level;
    uint32_t flags;
    float refresh_rate;
    uint32_t buffer_count;
    uint32_t buffer_format;
    uint32_t multisample_count;
    uint32_t multisample_quality;
} RenderDeviceConfig;

/* 渲染资源管理器结构体 */
typedef struct {
    uint32_t resource_count;
    uint32_t max_resources;
    void* resource_pool;
    void* active_resources;
    void* pending_resources;
    void* disposed_resources;
    uint32_t memory_usage;
    uint32_t peak_memory;
} RenderResourceManager;

/* 渲染参数结构体 */
typedef struct {
    float viewport_width;
    float viewport_height;
    float aspect_ratio;
    float field_of_view;
    float near_plane;
    float far_plane;
    uint32_t render_flags;
    uint32_t quality_settings;
    uint32_t vsync_enabled;
    uint32_t anti_aliasing;
} RenderParameters;

/* 函数别名定义 - 保持向后兼容性 */
void* FUN_180288040 = initialize_rendering_device;
void* FUN_180288790 = cleanup_rendering_device;
void* FUN_180288880 = setup_rendering_parameters;
void* FUN_180288e60 = create_rendering_exception_handler;
void* FUN_180288f00 = update_rendering_resources;

/*
 * 初始化渲染设备
 * 初始化和配置渲染设备及相关资源
 * 
 * 参数：device_context - 设备上下文指针
 * 返回：void - 无返回值
 */
void initialize_rendering_device(uint64_t *device_context) {
    if (!device_context) {
        return;
    }
    
    /* 局部变量声明 */
    int64_t *resource_manager;
    uint64_t *resource_ptr;
    uint64_t *temp_ptr;
    int64_t device_config;
    uint64_t device_flags;
    int resource_index;
    int64_t *resource_array;
    int64_t *current_resource;
    uint resource_count;
    uint64_t *new_resource;
    
    /* 初始化设备上下文 */
    *device_context = &device_base_address;
    resource_manager = device_context + 0x1f;
    *resource_manager = 0;
    device_context[0x20] = 0;
    device_context[0x21] = 0;
    *(uint32_t *)(device_context + 0x22) = 3;
    device_context[0x24] = 0;
    device_context[0x25] = 0;
    int64_t *secondary_manager = device_context + 0x27;
    *secondary_manager = 0;
    device_context[0x28] = 0;
    device_context[0x29] = 0;
    *(uint32_t *)(device_context + 0x2a) = 3;
    
    /* 设置设备状态标志 */
    *(uint8_t *)((int64_t)device_context + 0x11c) = 1;
    *(uint8_t *)(device_context + 0x1e) = 0;
    *(uint32_t *)(device_context + 0x23) = 0;
    
    /* 初始化设备配置 */
    device_flags = get_device_config_base();
    setup_device_configuration(device_flags, &resource_array, 1);
    
    /* 配置渲染参数 */
    configure_rendering_parameters(device_context, &resource_array);
    
    /* 创建主渲染资源 */
    uint64_t main_resource = create_main_rendering_resource(resource_array, &current_resource);
    main_resource = process_rendering_resource(*main_resource);
    
    /* 设置设备资源 */
    device_flags = *main_resource;
    *main_resource = 0;
    int64_t *old_resource = (int64_t *)device_context[0x24];
    device_context[0x24] = device_flags;
    
    /* 清理旧资源 */
    if (old_resource != (int64_t *)0x0) {
        release_rendering_resource(old_resource);
    }
    
    /* 清理临时资源 */
    if (current_resource != (int64_t *)0x0) {
        release_rendering_resource(current_resource);
    }
    if (resource_array != (int64_t *)0x0) {
        release_rendering_resource(resource_array);
    }
    
    /* 设置渲染管线 */
    if ((device_context[0x24] != 0) && (current_resource != (int64_t *)0x0)) {
        setup_rendering_pipeline(device_context, &resource_array);
        *(uint *)(resource_array + 0x65) = *(uint *)(resource_array + 0x65) | 0x20000000;
        
        if (resource_array != (int64_t *)0x0) {
            configure_resource_parameters(current_resource, 0);
        }
        
        *(uint *)(current_resource + 0x27) = *(uint *)(current_resource + 0x27) | 0x20;
        apply_rendering_settings(device_context[0x24], &current_resource);
        
        /* 处理资源数组 */
        secondary_manager = (int64_t *)(device_context[0x28] - *secondary_manager >> 5);
        resource_index = 0;
        int64_t *array_ptr = secondary_manager;
        
        if (0 < (int)secondary_manager) {
            do {
                int current_index = resource_index;
                new_resource = (uint64_t *)0x0;
                allocate_rendering_resource(&new_resource, (int64_t)resource_index * 0x20 + device_context[0x27]);
                create_resource_instance(get_device_config_base(), &old_resource, &new_resource, 1);
                *(uint *)(old_resource + 0x65) = *(uint *)(old_resource + 0x65) | 0x20000000;
                
                /* 管理资源池 */
                resource_ptr = (uint64_t *)device_context[0x20];
                if (resource_ptr < (uint64_t *)device_context[0x21]) {
                    device_context[0x20] = resource_ptr + 1;
                    *resource_ptr = old_resource;
                    if (old_resource != (int64_t *)0x0) {
                        activate_rendering_resource(old_resource);
                    }
                } else {
                    /* 扩展资源池 */
                    uint64_t *pool_start = (uint64_t *)*resource_manager;
                    int64_t pool_size = (int64_t)resource_ptr - (int64_t)pool_start >> 3;
                    
                    if (pool_size == 0) {
                        pool_size = 1;
                    } else {
                        pool_size = pool_size * 2;
                    }
                    
                    /* 分配新池空间 */
                    uint64_t *new_pool = allocate_memory_pool(get_memory_manager_base(), pool_size * 8, *(uint8_t *)(device_context + 0x22));
                    resource_ptr = (uint64_t *)device_context[0x20];
                    pool_start = (uint64_t *)*resource_manager;
                    uint64_t *copy_ptr = new_pool;
                    
                    /* 复制现有资源 */
                    for (; pool_start != resource_ptr; pool_start = pool_start + 1) {
                        *copy_ptr = *pool_start;
                        *pool_start = 0;
                        copy_ptr = copy_ptr + 1;
                    }
                    
                    *copy_ptr = old_resource;
                    if (old_resource != (int64_t *)0x0) {
                        activate_rendering_resource(old_resource);
                    }
                    
                    /* 清理旧池 */
                    secondary_manager = (int64_t *)device_context[0x20];
                    int64_t *old_pool_start = (int64_t *)*resource_manager;
                    if (old_pool_start != secondary_manager) {
                        do {
                            if ((int64_t *)*old_pool_start != (int64_t *)0x0) {
                                release_rendering_resource((int64_t *)*old_pool_start);
                            }
                            old_pool_start = old_pool_start + 1;
                        } while (old_pool_start != secondary_manager);
                        old_pool_start = (int64_t *)*resource_manager;
                    }
                    
                    if (old_pool_start != (int64_t *)0x0) {
                        free_memory_pool(old_pool_start);
                    }
                    
                    *resource_manager = (int64_t)new_pool;
                    device_context[0x20] = copy_ptr + 1;
                    device_context[0x21] = new_pool + pool_size;
                    secondary_manager = array_ptr;
                    current_index = resource_index;
                }
                
                /* 应用资源配置 */
                if (current_index == 0) {
                    if (old_resource != (int64_t *)0x0) {
                        device_flags = 0;
                        apply_resource_configuration(*(uint64_t *)(device_context[0x24] + 0x1b8), device_flags);
                    }
                } else if ((current_index == 1) && (old_resource != (int64_t *)0x0)) {
                    device_flags = 1;
                    apply_resource_configuration(*(uint64_t *)(device_context[0x24] + 0x1b8), device_flags);
                }
                
                if (((int)secondary_manager == 1) && (old_resource != (int64_t *)0x0)) {
                    apply_resource_configuration(*(uint64_t *)(device_context[0x24] + 0x1b8), (uint64_t)secondary_manager & 0xffffffff);
                }
                
                if (old_resource != (int64_t *)0x0) {
                    release_rendering_resource(old_resource);
                }
                
                /* 重置临时状态 */
                reset_temporary_rendering_state();
                resource_index++;
                resource_count = 0;
            } while (resource_index < (int)secondary_manager);
        }
        
        /* 完成设备初始化 */
        complete_device_initialization(device_context[0x24]);
        
        if (resource_array != (int64_t *)0x0) {
            release_rendering_resource(resource_array);
        }
    }
    
    /* 清理初始化资源 */
    cleanup_initialization_resources();
}

/*
 * 清理渲染设备
 * 清理和释放渲染设备资源
 * 
 * 参数：device_context - 设备上下文指针
 *       cleanup_flags - 清理标志
 * 返回：uint64_t* - 设备上下文指针
 */
uint64_t * cleanup_rendering_device(uint64_t *device_context, uint64_t cleanup_flags) {
    if (!device_context) {
        return NULL;
    }
    
    /* 重置设备上下文 */
    *device_context = &device_base_address;
    int64_t *primary_resource = (int64_t *)device_context[0x25];
    device_context[0x25] = 0;
    if (primary_resource != (int64_t *)0x0) {
        release_rendering_resource(primary_resource);
    }
    
    primary_resource = (int64_t *)device_context[0x24];
    device_context[0x24] = 0;
    if (primary_resource != (int64_t *)0x0) {
        release_rendering_resource(primary_resource);
    }
    
    /* 清理渲染状态 */
    cleanup_rendering_state();
    
    /* 清理剩余资源 */
    if ((int64_t *)device_context[0x25] != (int64_t *)0x0) {
        release_rendering_resource((int64_t *)*(int64_t *)device_context[0x25]);
    }
    if ((int64_t *)device_context[0x24] != (int64_t *)0x0) {
        release_rendering_resource((int64_t *)*(int64_t *)device_context[0x24]);
    }
    
    /* 执行最终清理 */
    perform_final_cleanup();
    cleanup_device_context(device_context);
    
    /* 根据标志释放内存 */
    if ((cleanup_flags & 1) != 0) {
        free(device_context, 0x160);
    }
    
    return device_context;
}

/*
 * 设置渲染参数
 * 配置和优化渲染系统参数
 * 
 * 参数：render_context - 渲染上下文指针
 *       parameter_data - 参数数据指针
 * 返回：int64_t - 渲染句柄
 */
int64_t setup_rendering_parameters(int64_t render_context, int64_t parameter_data) {
    if (!render_context || !parameter_data) {
        return 0;
    }
    
    /* 局部变量声明 */
    int *config_ptr;
    float aspect_ratio;
    int config_value;
    int64_t *resource_ptr;
    int64_t *device_resource;
    uint32_t device_flags;
    uint32_t render_config;
    int64_t device_handle;
    uint64_t *texture_data;
    uint64_t *shader_data;
    uint8_t vsync_enabled;
    uint32_t render_flags;
    float viewport_params[4];
    float projection_params[4];
    
    /* 设置默认参数 */
    render_flags = 0;
    vsync_enabled = 0;
    
    /* 检查渲染状态 */
    if (*(char *)(render_context + 0x11c) != '\0') {
        *(uint8_t *)(render_context + 0x11c) = 0;
        *(float *)(render_context + 0x15c) = (float)get_render_timer() * 1e-05;
    }
    
    /* 处理着色器状态 */
    if (*(char *)(render_context + 0x130) != '\0') {
        process_shader_state();
    }
    
    /* 初始化渲染配置 */
    uint32_t render_quality = 0;
    uint8_t anti_aliasing = 0;
    uint32_t texture_filter = 0xffffffff;
    uint16_t anisotropy = 1;
    uint8_t mipmapping = 0;
    
    /* 配置渲染管线 */
    configure_render_pipeline(*(uint64_t *)(render_context + 0x120), &render_quality);
    configure_render_pipeline(*(uint64_t *)(render_context + 0x128), &texture_filter);
    
    /* 获取设备句柄 */
    device_handle = get_current_device_handle();
    set_device_configuration(device_handle, &parameter_config);
    
    /* 配置设备资源 */
    resource_ptr = *(int64_t **)(get_device_manager_base() + 0x121e0);
    if (resource_ptr != (int64_t *)0x0) {
        activate_device_resource(resource_ptr);
    }
    
    device_resource = *(int64_t **)(device_handle + 0x9690);
    *(int64_t **)(device_handle + 0x9690) = resource_ptr;
    if (device_resource != (int64_t *)0x0) {
        release_rendering_resource(device_resource);
    }
    
    /* 清理着色器资源 */
    resource_ptr = *(int64_t **)(device_handle + 0x96a8);
    *(uint64_t *)(device_handle + 0x96a8) = 0;
    if (resource_ptr != (int64_t *)0x0) {
        release_rendering_resource(resource_ptr);
    }
    
    /* 设置设备参数 */
    uint64_t device_config = *(uint64_t *)(render_context + 0x24);
    *(uint64_t *)(device_handle + 0x11c18) = *(uint64_t *)(render_context + 0x1c);
    *(uint64_t *)(device_handle + 0x11c20) = device_config;
    *(uint64_t *)(device_handle + 0x11c28) = *(uint64_t *)(render_context + 0x2c);
    
    /* 计算视口参数 */
    int64_t display_config = get_display_config_base();
    float display_width = *(float *)(display_config + 0x17ec);
    float display_height = *(float *)(display_config + 0x17f0);
    aspect_ratio = display_width / display_height;
    
    /* 计算视口调整参数 */
    float viewport_scale_x = 0.0f;
    float viewport_scale_y = 1.0f;
    float viewport_offset_x = 0.0f;
    float viewport_offset_y = 1.0f;
    
    if (aspect_ratio <= 1.7777778f) {
        float adjusted_ratio = 0.5625f / (1.0f / aspect_ratio);
        viewport_offset_y = (adjusted_ratio + 1.0f) * 0.5f;
        viewport_offset_x = (1.0f - adjusted_ratio) * 0.5f;
    } else {
        viewport_scale_y = (1.7777778f / aspect_ratio + 1.0f) * 0.5f;
        viewport_scale_x = (1.0f - 1.7777778f / aspect_ratio) * 0.5f;
    }
    
    /* 应用视口参数 */
    float scaled_height = display_height;
    viewport_offset_x = viewport_offset_x * display_height;
    *(float *)(device_handle + 0x11c18) = viewport_scale_x * display_width;
    *(float *)(device_handle + 0x11c1c) = viewport_offset_x;
    *(float *)(device_handle + 0x11c20) = viewport_scale_y * display_width - viewport_scale_x * display_width;
    *(float *)(device_handle + 0x11c24) = viewport_offset_y * scaled_height - viewport_offset_x;
    
    /* 设置渲染标志 */
    *(uint32_t *)(device_handle + 0x11cf0) = 0x1000000;
    *(uint16_t *)(device_handle + 0x11c36) = 0x100;
    *(uint8_t *)(device_handle + 0x9a31) = 0;
    
    /* 配置渲染选项 */
    render_flags = *(uint32_t *)(render_context + 0xcc);
    *(uint32_t *)(device_handle + 4) = render_flags | 0x10010082;
    
    if (*(char *)(render_context + 0xf0) == '\0') {
        render_flags = render_flags | 0x10010083;
    } else {
        render_flags = render_flags & 0xfffffffe | 0x10010082;
    }
    
    *(uint32_t *)(device_handle + 4) = render_flags;
    *(float *)(device_handle + 0x124e4) = (float)(get_render_timer() % 1000000000) * 1e-05;
    
    /* 复制设备配置 */
    int64_t config_copy_count = 2;
    uint64_t *config_source = (uint64_t *)(display_config + 0x16a0);
    uint64_t *config_target = (uint64_t *)(device_handle + 0x30);
    
    do {
        uint64_t *source_ptr = config_source;
        uint64_t *target_ptr = config_target;
        uint64_t config_data = source_ptr[1];
        *target_ptr = *source_ptr;
        target_ptr[1] = config_data;
        config_data = source_ptr[3];
        target_ptr[2] = source_ptr[2];
        target_ptr[3] = config_data;
        config_data = source_ptr[5];
        target_ptr[4] = source_ptr[4];
        target_ptr[5] = config_data;
        config_data = source_ptr[7];
        target_ptr[6] = source_ptr[6];
        target_ptr[7] = config_data;
        config_data = source_ptr[9];
        target_ptr[8] = source_ptr[8];
        target_ptr[9] = config_data;
        config_data = source_ptr[0xb];
        target_ptr[10] = source_ptr[10];
        target_ptr[0xb] = config_data;
        config_data = source_ptr[0xd];
        target_ptr[0xc] = source_ptr[0xc];
        target_ptr[0xd] = config_data;
        config_data = source_ptr[0xf];
        target_ptr[0xe] = source_ptr[0xe];
        target_ptr[0xf] = config_data;
        config_copy_count--;
        config_source = source_ptr + 0x10;
        config_target = target_ptr + 0x10;
    } while (config_copy_count != 0);
    
    /* 复制扩展配置 */
    config_data = source_ptr[0x11];
    target_ptr[0x10] = source_ptr[0x10];
    target_ptr[0x11] = config_data;
    config_data = source_ptr[0x13];
    target_ptr[0x12] = source_ptr[0x12];
    target_ptr[0x13] = config_data;
    
    /* 应用渲染设置 */
    apply_render_settings(device_handle);
    
    /* 设置渲染质量 */
    if (*(char *)(render_context + 0xdc) != '\0') {
        *(uint32_t *)(device_handle + 4) = *(uint32_t *)(device_handle + 4) | 0x40000;
    }
    
    *(uint32_t *)(device_handle + 0x9a2c) = 10000;
    
    /* 配置渲染效果 */
    configure_render_effects(device_handle);
    
    /* 设置设备状态 */
    set_device_state(device_handle);
    
    /* 返回设备句柄 */
    return device_handle;
}

/*
 * 创建渲染异常处理器
 * 创建和配置渲染系统的异常处理机制
 * 
 * 参数：exception_param1 - 异常参数1
 *       exception_handler - 异常处理器指针
 *       exception_param3 - 异常参数3
 *       exception_param4 - 异常参数4
 * 返回：uint64_t* - 异常处理器指针
 */
uint64_t * create_rendering_exception_handler(uint64_t exception_param1, uint64_t *exception_handler, 
                                            uint64_t exception_param3, uint64_t exception_param4) {
    if (!exception_handler) {
        return NULL;
    }
    
    /* 初始化异常处理器 */
    *exception_handler = &exception_handler_base;
    exception_handler[1] = 0;
    *(uint32_t *)(exception_handler + 2) = 0;
    *exception_handler = &rendering_exception_base;
    exception_handler[3] = 0;
    exception_handler[1] = 0;
    *(uint32_t *)(exception_handler + 2) = 0;
    
    /* 配置异常处理 */
    configure_exception_handling(exception_handler, 0x16, exception_param3, exception_param4, 0, 0xfffffffffffffffe);
    
    /* 设置异常消息 */
    uint64_t *message_ptr = (uint64_t *)exception_handler[1];
    *message_ptr = 0x6964616f4c6c6772;  // "globalLoadi"
    message_ptr[1] = 0x65657263735f676e;  // "ng_resources"
    *(uint32_t *)(message_ptr + 2) = 0x69765f6e;  // "n_vi"
    *(uint16_t *)((int64_t)message_ptr + 0x14) = 0x7765;  // "ew"
    *(uint8_t *)((int64_t)message_ptr + 0x16) = 0;
    *(uint32_t *)(exception_handler + 2) = 0x16;
    
    return exception_handler;
}

/*
 * 更新渲染资源
 * 更新和管理渲染系统资源
 * 
 * 参数：resource_context - 资源上下文指针
 * 返回：uint64_t - 更新状态
 */
uint64_t update_rendering_resources(int64_t resource_context) {
    if (!resource_context) {
        return 0;
    }
    
    /* 清理渲染资源 */
    cleanup_rendering_resources(*(uint64_t *)(resource_context + 0x120));
    
    /* 获取资源管理器 */
    int64_t resource_manager = *(int64_t *)(resource_context + 0x128);
    
    /* 处理活动资源 */
    if (*(int64_t *)(resource_manager + 0x1b8) != 0) {
        int64_t resource_offset = 0xb8;
        int64_t config_base = get_resource_config_base();
        
        do {
            int64_t resource_handle = *(int64_t *)(resource_offset + *(int64_t *)(resource_manager + 0x1b8));
            
            /* 检查资源状态 */
            if (((resource_handle != 0) && 
                 (*(int64_t *)(*(int64_t *)(resource_manager + 0x1b8) + 0x328 + resource_offset) == 0)) &&
                ((*(uint32_t *)(resource_handle + 0x328) & 0x20000000) == 0) && 
                (*(int64_t *)(resource_handle + 0x370) == 0)) {
                
                /* 处理资源 */
                if (*(int64_t *)(resource_handle + 0x1d8) == 0) {
                    initialize_resource(resource_handle, 0);
                    config_base = get_resource_config_base();
                    int *usage_counter = (int *)(*(int64_t *)(resource_offset + *(int64_t *)(resource_manager + 0x1b8)) + 0x3a8);
                    *usage_counter = *usage_counter + 1;
                } else if (config_base != 0) {
                    *(int64_t *)(resource_handle + 0x340) = (int64_t)*(int *)(config_base + 0x224);
                }
            }
            
            resource_offset += 8;
        } while (resource_offset < 0x138);
    }
    
    /* 获取资源状态 */
    uint8_t resource_status = *(uint8_t *)(resource_manager + 0xf9);
    uint64_t update_result = (uint64_t)resource_status;
    
    /* 处理资源锁定 */
    if (resource_status != 0) {
        if (*(int64_t *)(resource_manager + 0x1d8) != 0) {
            // 资源锁定异常，不会返回
            throw_resource_lock_exception();
        }
        
        *(uint64_t *)(resource_manager + 0x1d8) = 0;
        
        /* 释放资源锁 */
        acquire_resource_lock();
        resource_status = *(uint8_t *)(resource_manager + 0xf9);
        *(uint8_t *)(resource_manager + 0xf9) = 0;
        release_resource_lock();
    }
    
    /* 处理资源缓存 */
    if (*(int64_t *)(resource_manager + 0x1e8) != 0) {
        process_resource_cache();
        update_result = *(uint64_t *)(resource_manager + 0x1f0);
        *(uint64_t *)(resource_manager + 0x1e8) = 0;
        
        if (update_result != 0) {
            *(uint8_t *)(update_result + 0xfe) = *(uint8_t *)(update_result + 0xfe) & 0xfb;
        }
    }
    
    return update_result;
}