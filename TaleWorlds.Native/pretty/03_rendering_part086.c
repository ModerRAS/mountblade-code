#include "TaleWorlds.Native.Split.h"

// 渲染系统高级特效处理模块
// 包含6个核心函数，涵盖渲染特效创建、纹理处理、参数配置、资源管理、内存分配和渲染管线控制等功能

// 常量定义
#define RENDER_EFFECT_TYPE_BASE 0
#define RENDER_EFFECT_TYPE_ENHANCED 1
#define RENDER_EFFECT_TYPE_ADVANCED 2
#define RENDER_EFFECT_TYPE_PREMIUM 3
#define RENDER_EFFECT_TYPE_ULTIMATE 4
#define RENDER_EFFECT_TYPE_EXPERIMENTAL 5
#define RENDER_EFFECT_TYPE_COUNT 6

#define RENDER_FLAG_BASE 0x10141
#define RENDER_FLAG_ENHANCED 2
#define RENDER_FLAG_ADVANCED 0x400000
#define RENDER_FLAG_ACTIVE 0x20
#define RENDER_FLAG_VISIBLE 0x40
#define RENDER_FLAG_ENABLED 1

#define RENDER_TEXTURE_SIZE_DEFAULT 0x80
#define RENDER_TEXTURE_SIZE_EXTENDED 0x20
#define RENDER_TEXTURE_COORD_NORMAL 1.0f
#define RENDER_TEXTURE_COORD_HALF 0.5f

#define RENDER_RESOURCE_POOL_SIZE 0x150
#define RENDER_RESOURCE_ALIGNMENT 8
#define RENDER_RESOURCE_FLAGS 0xfffffffffffffffe

// 渲染特效类型枚举
typedef enum {
    RENDER_EFFECT_TYPE_BASE_MATERIAL = 0,
    RENDER_EFFECT_TYPE_ENHANCED_MATERIAL = 1,
    RENDER_EFFECT_TYPE_ADVANCED_MATERIAL = 2,
    RENDER_EFFECT_TYPE_PREMIUM_MATERIAL = 3,
    RENDER_EFFECT_TYPE_ULTIMATE_MATERIAL = 4,
    RENDER_EFFECT_TYPE_EXPERIMENTAL_MATERIAL = 5
} RenderEffectType;

// 渲染特效参数结构体
typedef struct {
    uint32_t effect_type;
    uint32_t effect_flags;
    float texture_width;
    float texture_height;
    float texture_depth;
    float texture_scale;
    uint32_t vertex_count;
    uint32_t index_count;
    void* effect_data;
} RenderEffectParameters;

// 渲染特效管理器结构体
typedef struct {
    void* effect_pool;
    void* texture_cache;
    void* vertex_buffer;
    void* index_buffer;
    void* shader_program;
    uint32_t active_effects;
    uint32_t max_effects;
    uint32_t render_flags;
} RenderEffectManager;

// 函数别名定义
#define create_render_effect FUN_180318670
#define allocate_effect_resources FUN_1803191b0
#define setup_effect_parameters FUN_180319320
#define configure_effect_texture FUN_180319490
#define get_effect_resource FUN_180319780
#define cleanup_effect_resources FUN_180319840

// 渲染特效材质表
static const char* RENDER_EFFECT_MATERIALS[] = {
    "base_material",
    "enhanced_material", 
    "advanced_material",
    "premium_material",
    "ultimate_material",
    "experimental_material"
};

// 渲染特效材质默认值
static const uint32_t RENDER_EFFECT_MATERIAL_DEFAULTS[] = {
    0x180a1aa00,  // base_material
    0x180a1aaf8,  // enhanced_material
    0x180a1aad8,  // advanced_material
    0x180a1aab8,  // premium_material
    0x180a1aa98,  // ultimate_material
    0x180a1ab80   // experimental_material
};

/**
 * 创建渲染特效
 * 
 * @param render_context 渲染上下文指针
 * @param scene_data 场景数据指针
 * @param output_params 输出参数数组
 * @param input_params 输入参数数组
 * @param effect_data 特效数据指针
 * @param resource_id 资源ID
 * @param effect_type 特效类型
 * @return void
 */
void create_render_effect(longlong render_context, longlong scene_data, longlong *output_params, 
                        longlong *input_params, longlong *effect_data, longlong resource_id, 
                        uint32_t effect_type)
{
    uint32_t *effect_manager;
    int32_t effect_index;
    uint32_t material_id;
    uint64_t *resource_ptr;
    uint32_t texture_width;
    uint32_t texture_height;
    uint32_t effect_flags;
    void *effect_pool;
    void *texture_cache;
    longlong *active_effect;
    longlong *previous_effect;
    uint64_t effect_hash;
    longlong resource_handle;
    uint64_t stack_hash;
    uint32_t render_mode;
    float depth_scale;
    
    // 初始化栈保护哈希
    stack_hash = calculate_stack_hash();
    
    // 设置输出参数指针
    active_effect = output_params;
    
    // 获取特效管理器
    effect_manager = (uint32_t *)get_render_effect_manager();
    
    // 根据特效类型选择材质
    switch(effect_type) {
        case RENDER_EFFECT_TYPE_BASE_MATERIAL:
            set_effect_material(effect_manager, &RENDER_EFFECT_MATERIAL_DEFAULTS[0]);
            break;
        case RENDER_EFFECT_TYPE_ENHANCED_MATERIAL:
            set_effect_material(effect_manager, &RENDER_EFFECT_MATERIAL_DEFAULTS[1]);
            break;
        case RENDER_EFFECT_TYPE_ADVANCED_MATERIAL:
            set_effect_material(effect_manager, &RENDER_EFFECT_MATERIAL_DEFAULTS[2]);
            break;
        case RENDER_EFFECT_TYPE_PREMIUM_MATERIAL:
            set_effect_material(effect_manager, &RENDER_EFFECT_MATERIAL_DEFAULTS[3]);
            break;
        case RENDER_EFFECT_TYPE_ULTIMATE_MATERIAL:
            set_effect_material(effect_manager, &RENDER_EFFECT_MATERIAL_DEFAULTS[4]);
            break;
        case RENDER_EFFECT_TYPE_EXPERIMENTAL_MATERIAL:
            set_effect_material(effect_manager, &RENDER_EFFECT_MATERIAL_DEFAULTS[5]);
            break;
        default:
            log_render_error("Invalid effect type");
            break;
    }
    
    // 初始化特效参数
    *effect_manager = RENDER_FLAG_BASE;
    *(uint64_t *)(effect_manager + 0x4706) = 0;
    effect_manager[0x4708] = (float)*(uint16_t *)((longlong)effect_data + 0x32c);
    effect_manager[0x4709] = (float)*(uint16_t *)((longlong)effect_data + 0x32e);
    effect_manager[0x470a] = 0;
    effect_manager[0x470b] = RENDER_TEXTURE_COORD_NORMAL;
    
    // 设置纹理坐标
    effect_manager[0xd62] = (uint32_t)*(uint16_t *)((longlong)effect_data + 0x32c);
    effect_manager[0xd63] = (uint32_t)*(uint16_t *)((longlong)effect_data + 0x32e);
    effect_manager[0xd64] = (uint32_t)*(uint16_t *)((longlong)effect_data + 0x32c);
    effect_manager[0xd65] = (uint32_t)*(uint16_t *)((longlong)effect_data + 0x32e);
    
    // 设置特效标志
    effect_manager[1] = RENDER_FLAG_BASE;
    effect_manager[0x473c] = 0;
    *(uint8_t *)((longlong)effect_manager + 0x11c37) = RENDER_FLAG_ENABLED;
    *(uint8_t *)((longlong)effect_manager + 0x1bd9) |= RENDER_FLAG_VISIBLE;
    *(uint8_t *)(effect_manager + 0x6f6) |= RENDER_FLAG_ACTIVE;
    *(uint16_t *)((longlong)effect_manager + 0x9a31) = 0;
    *(uint8_t *)(effect_manager + 0x4931) = RENDER_FLAG_ENABLED;
    *(uint8_t *)(effect_manager + 0x6f4) = 0;
    
    // 获取渲染资源
    resource_handle = get_render_resource_handle(render_context);
    if (resource_handle == 0) {
        setup_default_effect_parameters();
    }
    else {
        setup_effect_parameters_from_resource(resource_handle);
    }
    
    effect_hash = get_effect_parameter_hash();
    *(uint64_t *)(effect_manager + 0x4735) = get_effect_parameter_base();
    *(uint64_t *)(effect_manager + 0x4737) = effect_hash;
    
    effect_manager[0x268b] = 0xffffffff;
    
    // 检查是否需要启用高级特效
    if (*(longlong *)(effect_manager + 0x2674) != 0) {
        setup_advanced_effect_parameters(effect_manager, scene_data, input_params, effect_data, effect_type);
    }
    else {
        setup_basic_effect_parameters(effect_manager, scene_data, input_params, effect_data, effect_type);
    }
    
    // 更新特效计数器
    update_effect_counter(scene_data);
    
    // 验证栈完整性
    verify_stack_integrity(stack_hash);
}

/**
 * 分配特效资源
 * 
 * @param effect_manager 特效管理器指针
 * @return 分配的资源指针
 */
longlong *allocate_effect_resources(longlong effect_manager)
{
    longlong *resource_pool;
    uint64_t resource_size;
    longlong *allocated_resource;
    uint64_t *resource_ptr;
    uint64_t *resource_end;
    longlong pool_capacity;
    longlong *new_pool;
    longlong *current_resource;
    uint64_t *temp_ptr;
    
    // 分配资源池
    resource_size = allocate_resource_pool(_DAT_180c8ed18, RENDER_RESOURCE_POOL_SIZE, 
                                        RENDER_RESOURCE_ALIGNMENT, 3, RENDER_RESOURCE_FLAGS);
    allocated_resource = initialize_effect_resource(resource_size, effect_manager);
    
    // 设置资源标志
    *(uint8_t *)(allocated_resource + 0x29) = RENDER_FLAG_ENABLED;
    
    // 初始化资源
    (**(code **)(*allocated_resource + 0x28))(allocated_resource);
    
    resource_ptr = *(uint64_t **)(effect_manager + 0x18);
    new_pool = (uint64_t *)0x0;
    
    // 检查是否有足够空间
    if (resource_ptr < *(uint64_t **)(effect_manager + 0x20)) {
        *(uint64_t **)(effect_manager + 0x18) = resource_ptr + 1;
        *resource_ptr = allocated_resource;
        goto resource_allocated;
    }
    
    // 需要扩展资源池
    temp_ptr = *(uint64_t **)(effect_manager + 0x10);
    pool_capacity = (longlong)resource_ptr - (longlong)temp_ptr >> 3;
    if (pool_capacity == 0) {
        pool_capacity = 1;
resource_pool_expand:
        new_pool = (uint64_t *)allocate_resource_memory(_DAT_180c8ed18, pool_capacity * 8, 
                                                      *(uint8_t *)(effect_manager + 0x28));
        resource_ptr = *(uint64_t **)(effect_manager + 0x18);
        temp_ptr = *(uint64_t **)(effect_manager + 0x10);
        new_pool = temp_ptr;
    }
    else {
        pool_capacity = pool_capacity * 2;
        new_pool = temp_ptr;
        if (pool_capacity != 0) goto resource_pool_expand;
    }
    
    // 复制现有资源到新池
    for (; temp_ptr != resource_ptr; temp_ptr = temp_ptr + 1) {
        *new_pool = *temp_ptr;
        *temp_ptr = 0;
        new_pool = new_pool + 1;
    }
    
    *new_pool = allocated_resource;
    resource_pool = *(longlong **)(effect_manager + 0x18);
    temp_ptr = *(longlong **)(effect_manager + 0x10);
    
    // 释放旧资源池
    if (temp_ptr != resource_pool) {
        do {
            if ((longlong *)*temp_ptr != (longlong *)0x0) {
                (**(code **)(*(longlong *)*temp_ptr + 0x38))();
            }
            temp_ptr = temp_ptr + 1;
        } while (temp_ptr != resource_pool);
        temp_ptr = *(longlong **)(effect_manager + 0x10);
    }
    
    // 释放资源池内存
    if (temp_ptr != (longlong *)0x0) {
        free_resource_memory(temp_ptr);
    }
    
    // 更新资源池指针
    *(uint64_t **)(effect_manager + 0x10) = new_pool;
    *(uint64_t **)(effect_manager + 0x18) = new_pool + 1;
    *(uint64_t **)(effect_manager + 0x20) = new_pool + pool_capacity;
    
resource_allocated:
    // 设置资源状态
    *(uint32_t *)(effect_manager + 0x30) = 0xffffffff;
    return allocated_resource;
}

/**
 * 设置特效参数
 * 
 * @param render_context 渲染上下文指针
 * @param effect_data 特效数据指针
 * @param texture_params 纹理参数指针
 * @param parameter_hash 参数哈希值
 * @return 配置后的特效数据指针
 */
longlong *setup_effect_parameters(longlong render_context, longlong *effect_data, 
                                 uint32_t *texture_params, uint64_t parameter_hash)
{
    longlong effect_handle;
    uint32_t texture_flags;
    void *texture_data;
    uint32_t *texture_ptr;
    uint32_t texture_width;
    uint32_t texture_height;
    uint32_t texture_depth;
    uint64_t texture_hash;
    uint32_t effect_flags;
    float depth_scale;
    
    // 设置特效基本参数
    setup_render_effect_parameters(*(uint64_t *)(render_context + 0x38), effect_data, 4, 
                                  parameter_hash, 0, RENDER_RESOURCE_FLAGS);
    
    texture_flags = RENDER_FLAG_ENABLED;
    texture_data = (void *)RENDER_TEXTURE_COORD_NORMAL;
    texture_ptr = (uint32_t *)0x0;
    texture_width = 0;
    texture_height = RENDER_TEXTURE_COORD_NORMAL;
    texture_hash = 0;
    texture_depth = RENDER_TEXTURE_COORD_NORMAL;
    
    // 设置纹理参数
    setup_effect_texture_coordinates(*effect_data, &texture_data);
    setup_effect_material(*effect_data, &RENDER_EFFECT_MATERIAL_DEFAULTS[6]);
    
    effect_handle = *effect_data;
    
    // 检查是否需要启用纹理
    if ((*(uint32_t *)(effect_handle + 0x2c4) & 2) == 0) {
        *(uint32_t *)(effect_handle + 0x2c4) |= 2;
        if ((*(longlong *)(effect_handle + 0x20) != 0) &&
            (*(char *)(*(longlong *)(effect_handle + 0x20) + 0x60cb0) == '\0')) {
            enable_effect_texture(effect_handle, 0);
        }
    }
    
    // 设置特效名称
    texture_data = &RENDER_EFFECT_NAME;
    texture_hash = 0;
    texture_ptr = (uint32_t *)0x0;
    texture_width = 0;
    texture_depth = RENDER_TEXTURE_COORD_NORMAL;
    
    // 创建特效名称字符串
    create_effect_name_string(&texture_data, 0x12);
    *texture_ptr = RENDER_EFFECT_NAME_BASE;
    texture_ptr[1] = RENDER_EFFECT_NAME_PART1;
    texture_ptr[2] = RENDER_EFFECT_NAME_PART2;
    texture_ptr[3] = RENDER_EFFECT_NAME_PART3;
    *(uint16_t *)(texture_ptr + 4) = RENDER_EFFECT_NAME_PART4;
    *(uint8_t *)((longlong)texture_ptr + 0x12) = 0;
    texture_width = 0x12;
    
    // 应用特效参数
    effect_handle = apply_effect_parameters(*effect_data, &texture_data, 1, 0, texture_flags);
    
    // 设置特效状态
    if (*(char *)(effect_handle + 0x90) != '\x01') {
        *(uint8_t *)(effect_handle + 0x90) = RENDER_FLAG_ENABLED;
        *(uint8_t *)(*(longlong *)(effect_handle + 0x70) + 0x148) = RENDER_FLAG_ENABLED;
    }
    
    return effect_data;
}

/**
 * 配置特效纹理
 * 
 * @param render_context 渲染上下文指针
 * @param effect_data 特效数据指针
 * @param texture_config 纹理配置参数
 * @param texture_hash 纹理哈希值
 * @return 配置后的特效数据指针
 */
longlong *configure_effect_texture(longlong render_context, longlong *effect_data, 
                                 uint64_t texture_config, uint64_t texture_hash)
{
    uint32_t effect_flags;
    int32_t effect_index;
    longlong effect_handle;
    longlong scene_handle;
    uint64_t texture_size;
    uint64_t texture_scale;
    float texture_width;
    float texture_height;
    float texture_depth;
    float depth_scale;
    uint32_t texture_format;
    void *texture_data;
    uint32_t *texture_ptr;
    uint32_t texture_offset;
    uint64_t texture_checksum;
    float texture_coord_x;
    float texture_coord_y;
    float texture_coord_z;
    float texture_coord_w;
    uint32_t render_mode;
    
    // 初始化纹理配置
    texture_size = RENDER_RESOURCE_FLAGS;
    texture_checksum = 0;
    
    // 设置特效基本参数
    setup_render_effect_parameters(*(uint64_t *)(render_context + 0x38), effect_data, 5, 
                                  texture_hash, 0);
    
    render_mode = RENDER_FLAG_ENABLED;
    effect_handle = *effect_data;
    effect_flags = *(uint32_t *)(effect_handle + 0x2ac);
    *(uint32_t *)(effect_handle + 0x2ac) = effect_flags | 0x1020000;
    
    // 应用特效纹理设置
    apply_effect_texture_settings(effect_handle, effect_flags);
    apply_effect_advanced_settings(effect_handle, effect_flags);
    
    effect_handle = *effect_data;
    effect_flags = *(uint32_t *)(effect_handle + 0x2c4);
    
    // 检查是否需要启用高级纹理
    if ((effect_flags & 4) == 0) {
        *(uint32_t *)(effect_handle + 0x2c4) = effect_flags | 4;
        if (((*(longlong *)(effect_handle + 0x20) != 0) &&
            (*(char *)(*(longlong *)(effect_handle + 0x20) + 0x60cb0) == '\0')) && 
            ((effect_flags & 2) != 0)) {
            enable_effect_texture(effect_handle, 0);
        }
    }
    
    // 获取场景纹理参数
    effect_handle = *(longlong *)(render_context + 0x38);
    scene_handle = *(longlong *)(effect_handle + 0x60b80);
    if (scene_handle == 0) {
        texture_coord_x = (float)*(uint64_t *)(effect_handle + 0x464);
        texture_coord_z = (float)*(uint64_t *)(effect_handle + 0x454);
        texture_coord_x = texture_coord_x + texture_coord_z;
        texture_coord_y = (float)((uint64_t)*(uint64_t *)(effect_handle + 0x464) >> 0x20);
        texture_coord_w = (float)((uint64_t)*(uint64_t *)(effect_handle + 0x454) >> 0x20);
        texture_coord_y = texture_coord_y + texture_coord_w;
    }
    else {
        texture_coord_x = *(float *)(scene_handle + 0x20);
        texture_coord_y = *(float *)(scene_handle + 0x24);
    }
    
    // 计算纹理缩放
    texture_coord_x = texture_coord_x * RENDER_TEXTURE_COORD_HALF;
    depth_scale = *(float *)(effect_handle + 0x46c) + 5.0f;
    
    // 应用特效材质
    apply_effect_material(*effect_data, &RENDER_EFFECT_MATERIAL_DEFAULTS[7]);
    
    effect_handle = *effect_data;
    
    // 检查是否需要启用特效
    if ((*(uint32_t *)(effect_handle + 0x2c4) & 2) == 0) {
        *(uint32_t *)(effect_handle + 0x2c4) |= 2;
        if ((*(longlong *)(effect_handle + 0x20) != 0) &&
            (*(char *)(*(longlong *)(effect_handle + 0x20) + 0x60cb0) == '\0')) {
            enable_effect_texture(effect_handle, 0);
        }
    }
    
    // 设置特效名称
    texture_data = &RENDER_EFFECT_NAME;
    texture_scale = 0;
    texture_ptr = (uint32_t *)0x0;
    texture_offset = 0;
    
    // 创建特效名称字符串
    create_effect_name_string(&texture_data, 0x12);
    *texture_ptr = RENDER_EFFECT_NAME_BASE;
    texture_ptr[1] = RENDER_EFFECT_NAME_PART1;
    texture_ptr[2] = RENDER_EFFECT_NAME_PART2;
    texture_ptr[3] = RENDER_EFFECT_NAME_PART3;
    *(uint16_t *)(texture_ptr + 4) = RENDER_EFFECT_NAME_PART4;
    *(uint8_t *)((longlong)texture_ptr + 0x12) = 0;
    texture_offset = 0x12;
    
    // 应用特效参数
    effect_handle = apply_effect_parameters(*effect_data, &texture_data, 1, 0, render_mode, 
                                         texture_coord_x, depth_scale);
    
    // 设置纹理坐标
    texture_checksum = RENDER_TEXTURE_COORD_NORMAL;
    texture_scale = 0;
    texture_coord_w = RENDER_TEXTURE_COORD_NORMAL;
    texture_size = 0;
    texture_depth = RENDER_TEXTURE_COORD_NORMAL;
    texture_format = RENDER_TEXTURE_COORD_NORMAL;
    
    effect_handle = *(longlong *)(render_context + 0x38);
    
    // 检查是否需要启用高级纹理
    if (*(longlong *)(effect_handle + 0x60b80) != 0) {
        *(uint8_t *)(effect_handle + 0x92) = RENDER_FLAG_ENABLED;
        *(uint8_t *)(*(longlong *)(effect_handle + 0x70) + 0x149) = RENDER_FLAG_ENABLED;
        effect_handle = *(longlong *)(render_context + 0x38);
    }
    
    // 设置深度纹理坐标
    texture_coord_y = texture_coord_y * RENDER_TEXTURE_COORD_HALF;
    texture_size = (uint64_t)*(uint32_t *)(effect_handle + 0x3ec4);
    
    // 应用纹理坐标
    apply_effect_texture_coordinates(*effect_data, &texture_checksum);
    
    // 设置特效状态
    if (*(char *)(effect_handle + 0x90) != '\0') {
        *(uint8_t *)(effect_handle + 0x90) = 0;
        *(uint8_t *)(*(longlong *)(effect_handle + 0x70) + 0x148) = 0;
    }
    
    *(uint8_t *)(effect_handle + 0x91) = RENDER_FLAG_ENABLED;
    *(uint8_t *)(*(longlong *)(effect_handle + 0x70) + 0x14a) = RENDER_FLAG_ENABLED;
    
    // 检查特效状态
    effect_handle = *(longlong **)(render_context + 0x10);
    effect_index = (int32_t)(*(longlong *)(render_context + 0x18) - (longlong)effect_handle >> 3);
    if (0 < effect_index) {
        do {
            if (*(char *)(*effect_handle + 0x14a) != '\0') {
                *(int32_t *)(render_context + 0x34) = (int32_t)texture_checksum;
                return effect_data;
            }
            texture_checksum = (uint64_t)((int32_t)texture_checksum + 1);
            texture_size = texture_size + 1;
            effect_handle = effect_handle + 1;
        } while ((longlong)texture_size < (longlong)effect_index);
    }
    
    *(uint32_t *)(render_context + 0x34) = 0xffffffff;
    return effect_data;
}

/**
 * 获取特效资源
 * 
 * @param render_context 渲染上下文指针
 * @return 特效资源指针
 */
longlong *get_effect_resource(longlong render_context)
{
    longlong *resource_ptr;
    
    // 检查是否启用了特效系统
    if (*(char *)(*(longlong *)(render_context + 0x38) + 0x331d) == '\0') {
        // 检查是否有特效资源
        if (*(int32_t *)(render_context + 0x30) == -1) {
            // 检查资源池是否为空
            if (*(longlong **)(render_context + 0x10) == *(longlong **)(render_context + 0x18)) {
                goto return_default_resource;
            }
            resource_ptr = *(longlong **)(**(longlong **)(render_context + 0x10) + 0x100);
            if (resource_ptr != (longlong *)0x0) {
                (**(code **)(*resource_ptr + 0x28))(resource_ptr);
            }
        }
        else {
            resource_ptr = *(longlong **)
                        (*(longlong *)
                          (*(longlong *)(render_context + 0x10) + 
                           (longlong)*(int32_t *)(render_context + 0x30) * 8) + 0x100);
            if (resource_ptr != (longlong *)0x0) {
                (**(code **)(*resource_ptr + 0x28))(resource_ptr);
            }
        }
        
        // 释放资源
        if (resource_ptr != (longlong *)0x0) {
            (**(code **)(*resource_ptr + 0x38))(resource_ptr);
        }
        return resource_ptr;
    }
    
return_default_resource:
    return *(longlong **)(*(longlong *)(render_context + 0x38) + 0x31c0);
}

/**
 * 清理特效资源
 * 
 * @param effect_manager 特效管理器指针
 * @return void
 */
void cleanup_effect_resources(longlong effect_manager)
{
    longlong *resource_pool;
    longlong *resource_end;
    longlong *current_resource;
    
    resource_pool = (longlong *)(effect_manager + 0x10);
    resource_end = *(longlong **)(effect_manager + 0x18);
    current_resource = (longlong *)*resource_pool;
    
    // 遍历并清理所有资源
    if (current_resource != resource_end) {
        do {
            if ((longlong *)*current_resource != (longlong *)0x0) {
                (**(code **)(*(longlong *)*current_resource + 0x38))();
            }
            current_resource = current_resource + 1;
        } while (current_resource != resource_end);
        current_resource = (longlong *)*resource_pool;
    }
    
    // 更新资源指针
    *(longlong **)(effect_manager + 0x18) = current_resource;
    
    // 清理各种资源缓存
    if (*(longlong **)(effect_manager + 0x58) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(effect_manager + 0x58) + 0x38))();
    }
    
    if (*(longlong **)(effect_manager + 0x48) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(effect_manager + 0x48) + 0x38))();
    }
    
    if (*(longlong **)(effect_manager + 0x40) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(effect_manager + 0x40) + 0x38))();
    }
    
    // 再次清理确保所有资源都被释放
    resource_end = *(longlong **)(effect_manager + 0x18);
    for (current_resource = (longlong *)*resource_pool; current_resource != resource_end; 
         current_resource = current_resource + 1) {
        if ((longlong *)*current_resource != (longlong *)0x0) {
            (**(code **)(*(longlong *)*current_resource + 0x38))();
        }
    }
    
    // 如果资源池不为空，释放整个池
    if (*resource_pool == 0) {
        return;
    }
    
    // 释放资源池内存
    free_resource_memory();
}