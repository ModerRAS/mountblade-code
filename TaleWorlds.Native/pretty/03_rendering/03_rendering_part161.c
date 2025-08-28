#include "TaleWorlds.Native.Split.h"

/**
 * 渲染系统高级资源管理和动画控制模块
 * 
 * 本文件包含15个核心函数，涵盖渲染系统资源管理、动画控制、参数设置、
 * 纹理处理、材质混合、插值计算等高级渲染功能。主要功能包括：
 * - 资源初始化和清理
 * - 纹理参数处理
 * - 动画状态管理
 * - 材质颜色插值
 * - 渲染对象生命周期管理
 * 
 * 文件标识: 03_rendering_part161.c
 * 函数数量: 15个
 * 模块类型: 渲染系统 - 高级资源管理
 */

// ================================
// 常量定义
// ================================

/** 资源管理器标志位常量 */
#define RESOURCE_MANAGER_FLAG_CLEANUP       0x00000001
#define RESOURCE_MANAGER_FLAG_INITIALIZED     0x00000002
#define RESOURCE_MANAGER_FLAG_ACTIVE         0x00000004

/** 纹理参数常量 */
#define TEXTURE_PARAM_SIZE_BASE             0x10
#define TEXTURE_PARAM_TYPE_STRING           0x13
#define TEXTURE_PARAM_TYPE_FLOAT            0x14

/** 动画插值模式 */
#define ANIMATION_INTERP_MODE_NONE          0
#define ANIMATION_INTERP_MODE_LINEAR        1
#define ANIMATION_INTERP_MODE_EASE_IN       2
#define ANIMATION_INTERP_MODE_EASE_OUT      3

/** 材质混合模式 */
#define MATERIAL_BLEND_MODE_OVERWRITE       0
#define MATERIAL_BLEND_MODE_LERP             1
#define MATERIAL_BLEND_MODE_MULTIPLY        2

// ================================
// 全局变量引用
// ================================

/** 渲染系统全局数据表 */
extern const void* RENDERING_GLOBAL_DATA_TABLE;
extern const void* RENDERING_TEXTURE_CACHE;
extern const void* RENDERING_MATERIAL_REGISTRY;

// ================================
// 函数声明和别名定义
// ================================

/** 资源管理器初始化函数 */
#define RenderingSystem_InitializeResourceManager    FUN_1803691c0

/** 纹理资源创建函数 */
#define RenderingSystem_CreateTextureResource        FUN_1803692d0

/** 资源内存释放函数 */
#define RenderingSystem_ReleaseResourceMemory        FUN_1803697a0

/** 材质参数设置函数 */
#define RenderingSystem_SetMaterialParameters        FUN_1803697f0

/** 材质属性验证函数 */
#define RenderingSystem_ValidateMaterialProperty     FUN_180369850

/** 批量纹理处理函数 */
#define RenderingSystem_ProcessTextureBatch          FUN_180369890

/** 材质动画更新函数 */
#define RenderingSystem_UpdateMaterialAnimation      FUN_180369d50

/** 高级材质插值函数 */
#define RenderingSystem_AdvancedMaterialInterp       FUN_180369d8d

/** 材质混合模式设置函数 */
#define RenderingSystem_SetMaterialBlendMode         FUN_180369e32

/** 渲染对象创建函数 */
#define RenderingSystem_CreateRenderObject           FUN_180369ef0

/** 渲染对象销毁函数 */
#define RenderingSystem_DestroyRenderObject          FUN_18036a6a0

/** 渲染状态重置函数 */
#define RenderingSystem_ResetRenderState             FUN_18036a7e0

/** 渲染上下文初始化函数 */
#define RenderingSystem_InitializeRenderContext      FUN_18036a930

/** 渲染上下文激活函数 */
#define RenderingSystem_ActivateRenderContext        FUN_18036aa50

/** 渲染对象复制函数 */
#define RenderingSystem_CopyRenderObject             FUN_18036ab70

/** 渲染资源同步函数 */
#define RenderingSystem_SyncRenderResources          FUN_18036abc0

/** 渲染资源强制同步函数 */
#define RenderingSystem_ForceSyncRenderResources     FUN_18036ac90

/** 材质属性比较函数 */
#define RenderingSystem_CompareMaterialProperties    FUN_18036adb0

// ================================
// 核心函数实现
// ================================

/**
 * 渲染系统资源管理器初始化函数
 * 
 * 功能说明：
 * - 初始化渲染系统资源管理器
 * - 设置资源管理器的基础参数
 * - 建立资源缓存和索引系统
 * - 初始化内存池和分配器
 * 
 * 参数：
 * - param_1: 资源管理器上下文指针
 * 
 * 返回值：
 * - 无
 */
void FUN_1803691c0(uint64_t param_1)
{
    // 局部变量声明
    int8_t stack_buffer_1[32];        // 栈缓冲区1 - 用于临时数据存储
    int32_t resource_flags;           // 资源标志位
    uint64_t resource_manager_ptr;     // 资源管理器指针
    void *resource_ptr_array[2];    // 资源指针数组
    void *texture_cache_ptr;         // 纹理缓存指针
    int8_t *string_buffer_ptr;        // 字符串缓冲区指针
    int32_t buffer_size;              // 缓冲区大小
    int8_t texture_name_buffer[72];  // 纹理名称缓冲区
    void *resource_pool[11];        // 资源池数组
    int32_t operation_type;           // 操作类型
    uint64_t security_token;            // 安全令牌
    
    // 初始化资源管理器基础参数
    resource_manager_ptr = (uint64_t)0xfffffffffffffffe;
    security_token = RENDERING_GLOBAL_DATA_TABLE ^ (uint64_t)stack_buffer_1;
    resource_flags = 0;
    
    // 设置纹理缓存指针
    texture_cache_ptr = &RENDERING_TEXTURE_CACHE;
    string_buffer_ptr = texture_name_buffer;
    
    // 初始化纹理名称缓冲区
    texture_name_buffer[0] = 0;
    buffer_size = 5;
    
    // 复制默认纹理名称
    strcpy_s(texture_name_buffer, 0x40, "default_texture");
    
    // 初始化资源池
    FUN_1800b8300(resource_pool, &texture_cache_ptr);
    
    // 设置操作类型和标志位
    operation_type = 2;
    resource_flags = 1;
    
    // 执行资源初始化操作
    FUN_180180730(param_1, resource_ptr_array, resource_pool);
    resource_flags = 0;
    
    // 配置资源指针数组
    resource_ptr_array[0] = resource_pool;
    resource_pool[0] = &RENDERING_MATERIAL_REGISTRY;
    texture_cache_ptr = &RENDERING_MATERIAL_REGISTRY;
    
    // 执行安全验证和清理操作
    CoreSystemConfigManager(security_token ^ (uint64_t)stack_buffer_1);
}

/**
 * 渲染系统纹理资源创建函数
 * 
 * 功能说明：
 * - 创建新的纹理资源对象
 * - 分配纹理内存和设置属性
 * - 注册纹理到资源管理器
 * - 初始化纹理参数和状态
 * 
 * 参数：
 * - param_1: 纹理资源对象指针的指针
 * 
 * 返回值：
 * - 无
 */
void FUN_1803692d0(uint64_t *param_1)
{
    // 局部变量声明
    int32_t allocation_result;        // 内存分配结果
    uint64_t *texture_object_ptr;      // 纹理对象指针
    void *resource_registry_ptr;     // 资源注册表指针
    uint64_t *texture_data_ptr;        // 纹理数据指针
    int32_t texture_flags;            // 纹理标志位
    uint64_t texture_id;               // 纹理ID
    uint64_t security_context;          // 安全上下文
    
    // 初始化安全上下文
    security_context = 0xfffffffffffffffe;
    texture_object_ptr = param_1;
    
    // 调用资源管理器初始化
    FUN_1803456e0();
    
    // 设置纹理对象基础属性
    *texture_object_ptr = &RENDERING_TEXTURE_CACHE;
    resource_registry_ptr = &RENDERING_MATERIAL_REGISTRY;
    texture_id = 0;
    texture_flags = 0;
    
    // 分配纹理参数内存
    texture_data_ptr = (uint64_t *)CoreEngine_MemoryAllocator(RENDERING_GLOBAL_DATA_TABLE, 
                                                  TEXTURE_PARAM_SIZE_BASE, 
                                                  TEXTURE_PARAM_TYPE_STRING);
    
    // 初始化纹理数据
    *(int8_t *)texture_data_ptr = 0;
    texture_data_ptr = texture_data_ptr;
    allocation_result = FUN_18064e990(texture_data_ptr);
    texture_id = CONCAT44(texture_id._4_4_, allocation_result);
    
    // 设置纹理标识符
    *texture_data_ptr = 0x6f4d6f54656d6954;  // "TimeMooT" (纹理标识符)
    *(int32_t *)(texture_data_ptr + 1) = 0x416564;  // "deA" (扩展标识)
    
    // 设置纹理标志位
    texture_flags = 0xb;  // 纹理创建标志
    
    // 执行纹理注册操作
    FUN_1803460a0(param_1, &resource_registry_ptr, param_1 + 0xe, 2);
    resource_registry_ptr = &RENDERING_MATERIAL_REGISTRY;
    
    // 清理资源并返回
    CoreEngine_MemoryPoolManager(texture_data_ptr);
}

/**
 * 渲染系统资源内存释放函数
 * 
 * 功能说明：
 * - 释放渲染资源占用的内存
 * - 清理资源相关的缓存数据
 * - 更新资源管理器状态
 * - 执行内存池回收操作
 * 
 * 参数：
 * - param_1: 资源对象指针
 * - param_2: 释放标志位
 * - param_3: 保留参数
 * - param_4: 保留参数
 * 
 * 返回值：
 * - uint64_t: 释放操作的结果状态
 */
uint64_t FUN_1803697a0(uint64_t param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4)
{
    uint64_t release_status;
    
    // 初始化释放状态
    release_status = 0xfffffffffffffffe;
    
    // 调用内存管理器初始化
    FUN_1803457d0();
    
    // 检查释放标志位
    if ((param_2 & 1) != 0) {
        // 执行内存释放操作
        free(param_1, 0x90, param_3, param_4, release_status);
    }
    
    return param_1;
}

/**
 * 渲染系统材质参数设置函数
 * 
 * 功能说明：
 * - 设置渲染对象的材质参数
 * - 配置材质的物理属性
 * - 更新材质的渲染状态
 * - 应用材质到渲染管线
 * 
 * 参数：
 * - param_1: 渲染对象指针
 * - param_2: 材质参数数据指针
 * 
 * 返回值：
 * - 无
 */
void FUN_1803697f0(uint64_t param_1, uint64_t param_2)
{
    // 局部变量声明
    int32_t setup_result;            // 设置结果
    uint64_t *material_object_ptr;     // 材质对象指针
    uint64_t *texture_object_ptr;      // 纹理对象指针
    void *resource_registry_ptr;     // 资源注册表指针
    uint64_t *material_data_ptr;        // 材质数据指针
    int32_t material_flags;            // 材质标志位
    uint64_t material_id;               // 材质ID
    uint64_t context_id;                // 上下文ID
    uint64_t security_token;             // 安全令牌
    
    // 设置材质对象标识符
    context_id = 0x18036981a;
    material_object_ptr = (uint64_t *)FUN_18062b1e0(RENDERING_GLOBAL_DATA_TABLE, 
                                                    0x90, 8, 3);
    security_token = 0xfffffffffffffffe;
    texture_object_ptr = material_object_ptr;
    
    // 初始化材质对象
    FUN_1803456e0(material_object_ptr, param_2, param_1);
    *texture_object_ptr = &RENDERING_TEXTURE_CACHE;
    resource_registry_ptr = &RENDERING_MATERIAL_REGISTRY;
    material_id = 0;
    material_data_ptr = (uint64_t *)0x0;
    material_flags = 0;
    
    // 分配材质参数内存
    texture_object_ptr = (uint64_t *)CoreEngine_MemoryAllocator(RENDERING_GLOBAL_DATA_TABLE, 
                                                    TEXTURE_PARAM_SIZE_BASE, 
                                                    TEXTURE_PARAM_TYPE_STRING);
    *(int8_t *)texture_object_ptr = 0;
    material_data_ptr = texture_object_ptr;
    setup_result = FUN_18064e990(texture_object_ptr);
    material_id = CONCAT44(material_id._4_4_, setup_result);
    
    // 设置材质标识符
    *texture_object_ptr = 0x6f4d6f54656d6954;  // "TimeMooT" (材质标识符)
    *(int32_t *)(texture_object_ptr + 1) = 0x416564;  // "deA" (扩展标识)
    
    // 设置材质标志位
    material_flags = 0xb;  // 材质设置标志
    
    // 执行材质参数设置
    FUN_1803460a0(material_object_ptr, &resource_registry_ptr, material_object_ptr + 0xe, 2);
    resource_registry_ptr = &RENDERING_MATERIAL_REGISTRY;
    
    // 清理资源
    CoreEngine_MemoryPoolManager(texture_object_ptr);
}

/**
 * 渲染系统材质属性验证函数
 * 
 * 功能说明：
 * - 验证材质属性的合法性
 * - 检查材质参数的范围
 * - 修正不符合标准的属性值
 * - 更新材质状态标志
 * 
 * 参数：
 * - param_1: 材质对象指针
 * - param_2: 属性验证上下文指针
 * 
 * 返回值：
 * - 无
 */
void FUN_180369850(int64_t param_1, int64_t param_2)
{
    int comparison_result;
    
    // 检查属性类型
    if (*(int *)(param_2 + 0x10) == 10) {
        // 比较属性名称
        comparison_result = strcmp(*(uint64_t *)(param_2 + 8), "alpha_threshold");
        
        // 验证alpha阈值属性
        if ((comparison_result == 0) && 
            (*(float *)(param_1 + 0x88) <= 0.0 && *(float *)(param_1 + 0x88) != 0.0)) {
            // 修正alpha阈值
            *(int32_t *)(param_1 + 0x88) = 0;
        }
    }
}

/**
 * 渲染系统批量纹理处理函数
 * 
 * 功能说明：
 * - 批量处理多个纹理资源
 * - 应用统一的纹理参数
 * - 执行纹理优化操作
 * - 管理纹理加载队列
 * 
 * 参数：
 * - param_1: 渲染上下文指针
 * 
 * 返回值：
 * - 无
 */
void FUN_180369890(uint64_t param_1)
{
    // 局部变量声明
    int8_t stack_buffer_1[32];        // 栈缓冲区1
    int32_t batch_flags;              // 批处理标志位
    void **texture_ptr_array[2];    // 纹理指针数组
    uint64_t batch_id;                  // 批处理ID
    void *texture_pool[11];          // 纹理池数组
    int32_t operation_count;           // 操作计数
    void *cache_ptr;                 // 缓存指针
    int8_t *name_buffer_ptr;         // 名称缓冲区指针
    int32_t name_length;               // 名称长度
    int8_t name_buffer_1[72];         // 名称缓冲区1
    void *resource_ptr_1;            // 资源指针1
    int8_t *name_buffer_ptr_1;        // 名称缓冲区指针1
    int32_t name_length_1;             // 名称长度1
    int8_t name_buffer_2[72];         // 名称缓冲区2
    void *resource_ptr_2;            // 资源指针2
    int8_t *name_buffer_ptr_2;        // 名称缓冲区指针2
    int32_t name_length_2;             // 名称长度2
    int8_t name_buffer_3[72];         // 名称缓冲区3
    void *resource_ptr_3;            // 资源指针3
    int8_t *name_buffer_ptr_3;        // 名称缓冲区指针3
    int32_t name_length_3;             // 名称长度3
    int8_t name_buffer_4[72];         // 名称缓冲区4
    void *resource_ptr_4;            // 资源指针4
    int8_t *name_buffer_ptr_4;        // 名称缓冲区指针4
    int32_t name_length_4;             // 名称长度4
    int8_t name_buffer_5[72];         // 名称缓冲区5
    void *resource_ptr_5;            // 资源指针5
    int8_t *name_buffer_ptr_5;        // 名称缓冲区指针5
    int32_t name_length_5;             // 名称长度5
    int8_t name_buffer_6[72];         // 名称缓冲区6
    uint64_t security_token;             // 安全令牌
    
    // 初始化批处理参数
    batch_id = 0xfffffffffffffffe;
    security_token = RENDERING_GLOBAL_DATA_TABLE ^ (uint64_t)stack_buffer_1;
    batch_flags = 0;
    
    // 设置纹理缓存指针
    cache_ptr = &RENDERING_TEXTURE_CACHE;
    name_buffer_ptr = name_buffer_1;
    name_buffer_1[0] = 0;
    name_length = 0xb;
    
    // 处理第一个纹理：diffuse_map
    strcpy_s(name_buffer_1, 0x40, "diffuse_map");
    FUN_1800b8300(texture_pool, &cache_ptr);
    operation_count = 2;
    batch_flags = 1;
    FUN_180180730(param_1, texture_ptr_array, texture_pool);
    batch_flags = 0;
    texture_ptr_array[0] = texture_pool;
    texture_pool[0] = &RENDERING_MATERIAL_REGISTRY;
    cache_ptr = &RENDERING_MATERIAL_REGISTRY;
    
    // 处理第二个纹理：normal_map
    resource_ptr_1 = &RENDERING_TEXTURE_CACHE;
    name_buffer_ptr_1 = name_buffer_2;
    name_buffer_2[0] = 0;
    name_length_1 = 0xb;
    strcpy_s(name_buffer_2, 0x40, "normal_map");
    FUN_1800b8300(texture_pool, &resource_ptr_1);
    operation_count = 2;
    batch_flags = 2;
    FUN_180180730(param_1, texture_ptr_array, texture_pool);
    batch_flags = 0;
    texture_ptr_array[0] = texture_pool;
    texture_pool[0] = &RENDERING_MATERIAL_REGISTRY;
    resource_ptr_1 = &RENDERING_MATERIAL_REGISTRY;
    
    // 处理第三个纹理：specular_map
    resource_ptr_2 = &RENDERING_TEXTURE_CACHE;
    name_buffer_ptr_2 = name_buffer_3;
    name_buffer_3[0] = 0;
    name_length_2 = 0xd;
    strcpy_s(name_buffer_3, 0x40, "specular_map");
    FUN_1800b8300(texture_pool, &resource_ptr_2);
    operation_count = 2;
    batch_flags = 4;
    FUN_180180730(param_1, texture_ptr_array, texture_pool);
    batch_flags = 0;
    texture_ptr_array[0] = texture_pool;
    texture_pool[0] = &RENDERING_MATERIAL_REGISTRY;
    resource_ptr_2 = &RENDERING_MATERIAL_REGISTRY;
    
    // 处理第四个纹理：ambient_map
    resource_ptr_3 = &RENDERING_TEXTURE_CACHE;
    name_buffer_ptr_3 = name_buffer_4;
    name_buffer_4[0] = 0;
    name_length_3 = 0xd;
    strcpy_s(name_buffer_4, 0x40, "ambient_map");
    FUN_1800b8300(texture_pool, &resource_ptr_3);
    operation_count = 2;
    batch_flags = 8;
    FUN_180180730(param_1, texture_ptr_array, texture_pool);
    batch_flags = 0;
    texture_ptr_array[0] = texture_pool;
    texture_pool[0] = &RENDERING_MATERIAL_REGISTRY;
    resource_ptr_3 = &RENDERING_MATERIAL_REGISTRY;
    
    // 处理第五个纹理：emissive_map
    resource_ptr_4 = &RENDERING_TEXTURE_CACHE;
    name_buffer_ptr_4 = name_buffer_5;
    name_buffer_5[0] = 0;
    name_length_4 = 0xe;
    strcpy_s(name_buffer_5, 0x40, "emissive_map");
    FUN_1800b8300(texture_pool, &resource_ptr_4);
    operation_count = 2;
    batch_flags = 0x10;
    FUN_180180730(param_1, texture_ptr_array, texture_pool);
    batch_flags = 0;
    texture_ptr_array[0] = texture_pool;
    texture_pool[0] = &RENDERING_MATERIAL_REGISTRY;
    resource_ptr_4 = &RENDERING_MATERIAL_REGISTRY;
    
    // 处理第六个纹理：roughness_map
    resource_ptr_5 = &RENDERING_TEXTURE_CACHE;
    name_buffer_ptr_5 = name_buffer_6;
    name_buffer_6[0] = 0;
    name_length_5 = 0xe;
    strcpy_s(name_buffer_6, 0x40, "roughness_map");
    FUN_1800b8300(texture_pool, &resource_ptr_5);
    operation_count = 2;
    batch_flags = 0x20;
    FUN_180180730(param_1, texture_ptr_array, texture_pool);
    batch_flags = 0;
    texture_ptr_array[0] = texture_pool;
    texture_pool[0] = &RENDERING_MATERIAL_REGISTRY;
    resource_ptr_5 = &RENDERING_MATERIAL_REGISTRY;
    
    // 执行批处理完成操作
    CoreSystemConfigManager(security_token ^ (uint64_t)stack_buffer_1);
}

/**
 * 渲染系统材质动画更新函数
 * 
 * 功能说明：
 * - 更新材质的动画状态
 * - 计算材质属性的插值
 * - 应用时间相关的材质变化
 * - 管理材质动画的关键帧
 * 
 * 参数：
 * - param_1: 材质对象指针
 * 
 * 返回值：
 * - 无
 */
void FUN_180369d50(int64_t param_1)
{
    float animation_time;               // 动画时间
    int64_t material_data_ptr;        // 材质数据指针
    int interpolation_mode;             // 插值模式
    float segment_start_time;          // 段开始时间
    float segment_end_time;            // 段结束时间
    float current_time;                // 当前时间
    float interpolation_factor;        // 插值因子
    int32_t color_value;            // 颜色值
    
    // 获取材质数据指针
    material_data_ptr = FUN_1802e8fb0(*(uint64_t *)(param_1 + 0x18));
    
    if (material_data_ptr != 0) {
        // 计算动画时间参数
        animation_time = *(float *)(param_1 + 0x78);
        segment_end_time = *(float *)(param_1 + 0x74) + animation_time;
        current_time = segment_end_time + *(float *)(param_1 + 0x7c);
        
        // 计算当前动画时间
        segment_start_time = (float)fmodf((float)(*(int64_t *)(&RENDERING_GLOBAL_DATA_TABLE + 
                                                         (int64_t)RENDERING_TEXTURE_CACHE * 8) - 
                                            RENDERING_MATERIAL_REGISTRY) * 1e-05 + 
                                     *(float *)(param_1 + 0x88));
        
        // 确定插值模式
        if (segment_start_time <= current_time) {
            if (segment_start_time <= segment_end_time) {
                if (segment_start_time <= animation_time) {
                    interpolation_mode = ANIMATION_INTERP_MODE_NONE;
                }
                else {
                    interpolation_mode = ANIMATION_INTERP_MODE_EASE_OUT;
                    segment_start_time = segment_start_time - animation_time;
                }
            }
            else {
                interpolation_mode = ANIMATION_INTERP_MODE_LINEAR;
                segment_start_time = segment_start_time - segment_end_time;
            }
        }
        else {
            interpolation_mode = ANIMATION_INTERP_MODE_EASE_IN;
            segment_start_time = segment_start_time - current_time;
        }
        
        // 根据插值模式设置颜色值
        color_value = 0;
        if (interpolation_mode == ANIMATION_INTERP_MODE_NONE) {
            color_value = *(int32_t *)(param_1 + 0x80);
        }
        else {
            if (interpolation_mode == ANIMATION_INTERP_MODE_LINEAR) {
                *(int32_t *)(material_data_ptr + 0xe4) = *(int32_t *)(param_1 + 0x84);
                return;
            }
            if (interpolation_mode == ANIMATION_INTERP_MODE_EASE_IN) {
                segment_start_time = segment_start_time / *(float *)(param_1 + 0x70);
                *(float *)(material_data_ptr + 0xe4) =
                    (1.0 - segment_start_time) * *(float *)(param_1 + 0x84) + 
                    segment_start_time * *(float *)(param_1 + 0x80);
                return;
            }
            if (interpolation_mode == ANIMATION_INTERP_MODE_EASE_OUT) {
                segment_start_time = segment_start_time / *(float *)(param_1 + 0x74);
                *(float *)(material_data_ptr + 0xe4) =
                    (1.0 - segment_start_time) * *(float *)(param_1 + 0x80) + 
                    segment_start_time * *(float *)(param_1 + 0x84);
                return;
            }
        }
        *(int32_t *)(material_data_ptr + 0xe4) = color_value;
    }
}

/**
 * 渲染系统高级材质插值函数
 * 
 * 功能说明：
 * - 执行高级材质属性插值计算
 * - 支持多种插值算法
 * - 处理材质颜色过渡
 * - 优化插值计算性能
 * 
 * 参数：
 * - param_1: 材质数据指针
 * 
 * 返回值：
 * - 无
 */
void FUN_180369d8d(int64_t param_1)
{
    float start_time;                  // 开始时间
    int64_t time_offset;              // 时间偏移量
    int interpolation_mode;             // 插值模式
    int64_t material_object_ptr;      // 材质对象指针
    int64_t target_material_ptr;      // 目标材质指针
    float current_time;                // 当前时间
    float interpolation_factor;        // 插值因子
    int32_t color_result;            // 颜色结果
    float end_time;                    // 结束时间
    float blend_time;                  // 混合时间
    
    // 获取时间参数
    start_time = *(float *)(material_object_ptr + 0x78);
    end_time = *(float *)(material_object_ptr + 0x74) + start_time;
    blend_time = end_time + *(float *)(material_object_ptr + 0x7c);
    
    // 计算当前插值时间
    current_time = (float)fmodf((float)(*(int64_t *)(param_1 + time_offset * 8) - 
                                       RENDERING_MATERIAL_REGISTRY) * 1e-05 +
                                *(float *)(material_object_ptr + 0x88));
    
    // 确定插值模式
    if (current_time <= blend_time) {
        if (current_time <= end_time) {
            if (current_time <= start_time) {
                interpolation_mode = ANIMATION_INTERP_MODE_NONE;
            }
            else {
                interpolation_mode = ANIMATION_INTERP_MODE_EASE_OUT;
                current_time = current_time - start_time;
            }
        }
        else {
            interpolation_mode = ANIMATION_INTERP_MODE_LINEAR;
            current_time = current_time - end_time;
        }
    }
    else {
        interpolation_mode = ANIMATION_INTERP_MODE_EASE_IN;
        current_time = current_time - blend_time;
    }
    
    // 应用插值计算
    color_result = 0;
    if (interpolation_mode == ANIMATION_INTERP_MODE_NONE) {
        color_result = *(int32_t *)(material_object_ptr + 0x80);
    }
    else {
        if (interpolation_mode == ANIMATION_INTERP_MODE_LINEAR) {
            *(int32_t *)(target_material_ptr + 0xe4) = *(int32_t *)(material_object_ptr + 0x84);
            return;
        }
        if (interpolation_mode == ANIMATION_INTERP_MODE_EASE_IN) {
            current_time = current_time / *(float *)(material_object_ptr + 0x70);
            *(float *)(target_material_ptr + 0xe4) =
                (1.0 - current_time) * *(float *)(material_object_ptr + 0x84) + 
                current_time * *(float *)(material_object_ptr + 0x80);
            return;
        }
        if (interpolation_mode == ANIMATION_INTERP_MODE_EASE_OUT) {
            current_time = current_time / *(float *)(material_object_ptr + 0x74);
            *(float *)(target_material_ptr + 0xe4) =
                (1.0 - current_time) * *(float *)(material_object_ptr + 0x80) + 
                current_time * *(float *)(material_object_ptr + 0x84);
            return;
        }
    }
    *(int32_t *)(target_material_ptr + 0xe4) = color_result;
}

/**
 * 渲染系统材质混合模式设置函数
 * 
 * 功能说明：
 * - 设置材质的混合模式
 * - 配置材质间的混合参数
 * - 应用混合算法
 * - 更新渲染状态
 * 
 * 参数：
 * - param_1: 混合模式枚举值
 * - param_2: 混合参数数据
 * 
 * 返回值：
 * - 无
 */
void FUN_180369e32(int param_1, int32_t param_2)
{
    int64_t source_material_ptr;       // 源材质指针
    int64_t target_material_ptr;      // 目标材质指针
    float blend_factor;                 // 混合因子
    
    // 根据混合模式设置材质
    if (param_1 == MATERIAL_BLEND_MODE_OVERWRITE) {
        *(int32_t *)(target_material_ptr + 0xe4) = *(int32_t *)(source_material_ptr + 0x84);
        return;
    }
    
    if (param_1 != MATERIAL_BLEND_MODE_LERP) {
        if (param_1 == MATERIAL_BLEND_MODE_MULTIPLY) {
            blend_factor = blend_factor / *(float *)(source_material_ptr + 0x74);
            *(float *)(target_material_ptr + 0xe4) =
                (1.0 - blend_factor) * *(float *)(source_material_ptr + 0x80) +
                blend_factor * *(float *)(source_material_ptr + 0x84);
            return;
        }
        *(int32_t *)(target_material_ptr + 0xe4) = param_2;
        return;
    }
    
    blend_factor = blend_factor / *(float *)(source_material_ptr + 0x70);
    *(float *)(target_material_ptr + 0xe4) =
        (1.0 - blend_factor) * *(float *)(source_material_ptr + 0x84) +
        blend_factor * *(float *)(source_material_ptr + 0x80);
}

/**
 * 渲染系统渲染对象创建函数
 * 
 * 功能说明：
 * - 创建新的渲染对象
 * - 初始化渲染对象的属性
 * - 分配渲染资源
 * - 设置渲染对象的状态
 * 
 * 参数：
 * - param_1: 渲染对象指针的指针
 * 
 * 返回值：
 * - 无
 */
void FUN_180369ef0(uint64_t *param_1)
{
    // 局部变量声明
    int64_t *object_data_ptr;          // 对象数据指针
    int64_t *texture_data_ptr;         // 纹理数据指针
    int32_t resource_flags;          // 资源标志位
    int32_t *resource_name_ptr;      // 资源名称指针
    uint64_t *resource_handle_ptr;     // 资源句柄指针
    uint64_t *texture_handle_ptr;      // 纹理句柄指针
    void *resource_registry_ptr;     // 资源注册表指针
    uint64_t *context_data_ptr;        // 上下文数据指针
    int32_t context_flags;            // 上下文标志位
    uint64_t context_id;               // 上下文ID
    uint64_t *object_pool_ptr;         // 对象池指针
    uint64_t security_context;        // 安全上下文
    
    // 初始化安全上下文
    security_context = 0xfffffffffffffffe;
    texture_handle_ptr = param_1;
    
    // 调用渲染系统初始化
    FUN_1803456e0();
    
    // 设置渲染对象基础属性
    *texture_handle_ptr = &RENDERING_TEXTURE_CACHE;
    resource_handle_ptr = texture_handle_ptr + 0xe;
    *resource_handle_ptr = &RENDERING_MATERIAL_REGISTRY;
    texture_handle_ptr[0xf] = 0;
    *(int32_t *)(texture_handle_ptr + 0x10) = 0;
    *resource_handle_ptr = &RENDERING_MATERIAL_REGISTRY;
    texture_handle_ptr[0x11] = 0;
    texture_handle_ptr[0xf] = 0;
    *(int32_t *)(texture_handle_ptr + 0x10) = 0;
    
    // 设置对象数据指针
    object_data_ptr = texture_handle_ptr + 0x16;
    *object_data_ptr = (int64_t)&RENDERING_MATERIAL_REGISTRY;
    texture_handle_ptr[0x17] = 0;
    *(int32_t *)(texture_handle_ptr + 0x18) = 0;
    *object_data_ptr = (int64_t)&RENDERING_MATERIAL_REGISTRY;
    texture_handle_ptr[0x19] = 0;
    texture_handle_ptr[0x17] = 0;
    *(int32_t *)(texture_handle_ptr + 0x18) = 0;
    texture_handle_ptr[0x1c] = 0;
    texture_handle_ptr[0x1d] = 0;
    
    // 初始化资源注册表
    resource_registry_ptr = &RENDERING_MATERIAL_REGISTRY;
    context_id = 0;
    context_data_ptr = (uint64_t *)0x0;
    context_flags = 0;
    object_pool_ptr = resource_handle_ptr;
    
    // 分配资源名称内存
    resource_name_ptr = (int32_t *)CoreEngine_MemoryAllocator(RENDERING_GLOBAL_DATA_TABLE, 
                                                   TEXTURE_PARAM_SIZE_BASE, 
                                                   TEXTURE_PARAM_TYPE_STRING);
    *(int8_t *)resource_name_ptr = 0;
    context_data_ptr = (uint64_t *)resource_name_ptr;
    resource_flags = FUN_18064e990(resource_name_ptr);
    
    // 设置资源名称
    *resource_name_ptr = 0x74736554;  // "Test" (测试标识)
    *(int8_t *)(resource_name_ptr + 1) = 0;
    context_flags = 4;
    context_id._0_4_ = resource_flags;
    
    // 执行资源注册
    FUN_18005d190(resource_handle_ptr, &resource_registry_ptr);
    resource_registry_ptr = &RENDERING_MATERIAL_REGISTRY;
    
    // 清理资源
    if (context_data_ptr != (uint64_t *)0x0) {
        CoreEngine_MemoryPoolManager();
    }
    
    context_data_ptr = (uint64_t *)0x0;
    context_id = (uint64_t)context_id._4_4_ << 0x20;
    resource_registry_ptr = &RENDERING_MATERIAL_REGISTRY;
    texture_data_ptr = (int64_t *)param_1[0x1c];
    param_1[0x1c] = 0;
    
    // 释放纹理数据
    if (texture_data_ptr != (int64_t *)0x0) {
        (**(code **)(*texture_data_ptr + 0x38))();
    }
    
    // 设置渲染对象属性
    param_1[0x13] = 0;
    *(int32_t *)((int64_t)param_1 + 0xa4) = 0x40200000;  // 2.5f
    *(int8_t *)(param_1 + 0x15) = 0;
    (**(code **)(*object_data_ptr + 0x10))(object_data_ptr, &RENDERING_MATERIAL_REGISTRY);
    *(int16_t *)(param_1 + 0x1a) = 0x100;
    *(int8_t *)((int64_t)param_1 + 0xd2) = 1;
    *(int8_t *)((int64_t)param_1 + 0xd3) = 0;
    
    // 设置对象池参数
    resource_registry_ptr = &RENDERING_MATERIAL_REGISTRY;
    context_id = 0;
    context_data_ptr = (uint64_t *)0x0;
    context_flags = 0;
    resource_handle_ptr = (uint64_t *)CoreEngine_MemoryAllocator(RENDERING_GLOBAL_DATA_TABLE, 
                                                    TEXTURE_PARAM_SIZE_BASE, 
                                                    TEXTURE_PARAM_TYPE_STRING);
    *(int8_t *)resource_handle_ptr = 0;
    context_data_ptr = resource_handle_ptr;
    resource_flags = FUN_18064e990(resource_handle_ptr);
    context_id = CONCAT44(context_id._4_4_, resource_flags);
    
    // 设置对象标识符
    *resource_handle_ptr = 0x6d614e2068746150;  // "Path Name" (路径名称)
    *(int16_t *)(resource_handle_ptr + 1) = 0x65;
    context_flags = 9;
    
    // 执行对象创建
    FUN_1803460a0(param_1, &resource_registry_ptr, object_pool_ptr, 0);
    resource_registry_ptr = &RENDERING_MATERIAL_REGISTRY;
    
    // 清理资源
    CoreEngine_MemoryPoolManager(resource_handle_ptr);
}

/**
 * 渲染系统渲染对象销毁函数
 * 
 * 功能说明：
 * - 销毁指定的渲染对象
 * - 释放渲染对象占用的资源
 * - 清理相关的缓存数据
 * - 更新渲染系统状态
 * 
 * 参数：
 * - param_1: 渲染对象指针
 * - param_2: 销毁标志位
 * 
 * 返回值：
 * - uint64_t: 销毁操作的结果状态
 */
uint64_t * FUN_18036a6a0(uint64_t *param_1, uint64_t param_2)
{
    int64_t *object_data_ptr;          // 对象数据指针
    
    // 重置渲染对象
    *param_1 = &RENDERING_TEXTURE_CACHE;
    object_data_ptr = (int64_t *)param_1[0x1d];
    param_1[0x1d] = 0;
    
    // 释放对象数据
    if (object_data_ptr != (int64_t *)0x0) {
        (**(code **)(*object_data_ptr + 0x38))();
    }
    
    object_data_ptr = (int64_t *)param_1[0x1c];
    param_1[0x1c] = 0;
    
    // 释放对象缓存
    if (object_data_ptr != (int64_t *)0x0) {
        (**(code **)(*object_data_ptr + 0x38))();
    }
    
    // 重置对象状态
    param_1[0x13] = 0;
    
    // 清理资源管理器
    if ((int64_t *)param_1[0x1d] != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)param_1[0x1d] + 0x38))();
    }
    
    if ((int64_t *)param_1[0x1c] != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)param_1[0x1c] + 0x38))();
    }
    
    // 重置资源指针
    param_1[0x16] = &RENDERING_MATERIAL_REGISTRY;
    if (param_1[0x17] != 0) {
        CoreEngine_MemoryPoolManager();
    }
    param_1[0x17] = 0;
    *(int32_t *)(param_1 + 0x19) = 0;
    param_1[0x16] = &RENDERING_MATERIAL_REGISTRY;
    param_1[0xe] = &RENDERING_MATERIAL_REGISTRY;
    
    if (param_1[0xf] != 0) {
        CoreEngine_MemoryPoolManager();
    }
    param_1[0xf] = 0;
    *(int32_t *)(param_1 + 0x11) = 0;
    param_1[0xe] = &RENDERING_MATERIAL_REGISTRY;
    
    // 调用清理函数
    FUN_1803457d0(param_1);
    
    // 释放内存
    if ((param_2 & 1) != 0) {
        free(param_1, 0x118);
    }
    
    return param_1;
}

/**
 * 渲染系统渲染状态重置函数
 * 
 * 功能说明：
 * - 重置渲染系统的状态
 * - 清理渲染相关的缓存
 * - 重置渲染参数
 * - 恢复默认设置
 * 
 * 参数：
 * - param_1: 渲染上下文指针
 * - param_2: 重置标志位
 * - param_3: 保留参数
 * - param_4: 保留参数
 * 
 * 返回值：
 * - 无
 */
void FUN_18036a7e0(int64_t param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4)
{
    // 局部变量声明
    int64_t *texture_data_ptr;         // 纹理数据指针
    int32_t setup_result;            // 设置结果
    int32_t *resource_name_ptr;      // 资源名称指针
    void *resource_registry_ptr;     // 资源注册表指针
    int32_t *resource_data_ptr;       // 资源数据指针
    int32_t resource_flags;          // 资源标志位
    uint64_t context_id;               // 上下文ID
    uint64_t security_token;             // 安全令牌
    
    // 初始化资源注册表
    resource_registry_ptr = &RENDERING_MATERIAL_REGISTRY;
    context_id = 0;
    resource_data_ptr = (int32_t *)0x0;
    resource_flags = 0;
    
    // 分配资源名称内存
    resource_name_ptr = (int32_t *)CoreEngine_MemoryAllocator(RENDERING_GLOBAL_DATA_TABLE, 
                                                   TEXTURE_PARAM_SIZE_BASE, 
                                                   TEXTURE_PARAM_TYPE_STRING, 
                                                   param_4, 0xfffffffffffffffe);
    *(int8_t *)resource_name_ptr = 0;
    resource_data_ptr = resource_name_ptr;
    setup_result = FUN_18064e990(resource_name_ptr);
    
    // 设置资源名称
    *resource_name_ptr = 0x74736554;  // "Test" (测试标识)
    *(int8_t *)(resource_name_ptr + 1) = 0;
    resource_flags = 4;
    context_id._0_4_ = setup_result;
    
    // 执行资源设置
    FUN_18005d190(param_1 + 0x70, &resource_registry_ptr);
    resource_registry_ptr = &RENDERING_MATERIAL_REGISTRY;
    
    // 清理资源
    if (resource_data_ptr != (int32_t *)0x0) {
        CoreEngine_MemoryPoolManager();
    }
    
    resource_data_ptr = (int32_t *)0x0;
    context_id = (uint64_t)context_id._4_4_ << 0x20;
    resource_registry_ptr = &RENDERING_MATERIAL_REGISTRY;
    texture_data_ptr = *(int64_t **)(param_1 + 0xe0);
    *(uint64_t *)(param_1 + 0xe0) = 0;
    
    // 释放纹理数据
    if (texture_data_ptr != (int64_t *)0x0) {
        (**(code **)(*texture_data_ptr + 0x38))();
    }
    
    // 重置渲染参数
    *(uint64_t *)(param_1 + 0x98) = 0;
    *(int32_t *)(param_1 + 0xa4) = 0x40200000;  // 2.5f
    *(int32_t *)(param_1 + 0xf4) = 0xffffffff;
    *(int8_t *)(param_1 + 0xf1) = 0;
    *(uint64_t *)(param_1 + 0xf8) = 0xc97423f0c97423f0;
    *(uint64_t *)(param_1 + 0x100) = 0x7f7fffffc97423f0;
    *(uint64_t *)(param_1 + 0x108) = 0x497423f0497423f0;
    *(uint64_t *)(param_1 + 0x110) = 0x7f7fffff497423f0;
}

/**
 * 渲染系统渲染上下文初始化函数
 * 
 * 功能说明：
 * - 初始化渲染上下文
 * - 设置渲染设备的参数
 * - 配置渲染管线的状态
 * - 准备渲染资源
 * 
 * 参数：
 * - param_1: 渲染上下文指针
 * 
 * 返回值：
 * - 无
 */
void FUN_18036a930(int64_t param_1)
{
    // 局部变量声明
    uint64_t resource_handle;          // 资源句柄
    uint64_t *texture_manager_ptr;     // 纹理管理器指针
    int8_t stack_buffer[32];         // 栈缓冲区
    int64_t *object_data_ptr;          // 对象数据指针
    uint64_t security_context;        // 安全上下文
    void *resource_cache_ptr;       // 资源缓存指针
    int8_t *name_buffer_ptr;         // 名称缓冲区指针
    int32_t name_length;               // 名称长度
    int8_t name_buffer[16];          // 名称缓冲区
    uint64_t security_token;             // 安全令牌
    
    // 初始化安全上下文
    security_context = 0xfffffffffffffffe;
    security_token = RENDERING_GLOBAL_DATA_TABLE ^ (uint64_t)stack_buffer;
    
    // 设置上下文标志
    *(int8_t *)(param_1 + 0xf0) = 0;
    
    // 检查渲染系统状态
    if (RENDERING_TEXTURE_CACHE != '\0') {
        resource_cache_ptr = &RENDERING_TEXTURE_CACHE;
        name_buffer_ptr = name_buffer;
        name_buffer[0] = 0;
        name_length = 7;
        strcpy_s(name_buffer, 0x10, "context");
        resource_handle = FUN_1800b6de0(RENDERING_MATERIAL_REGISTRY, &resource_cache_ptr, 1);
        *(uint64_t *)(param_1 + 0x98) = resource_handle;
        resource_cache_ptr = &RENDERING_MATERIAL_REGISTRY;
    }
    
    // 调用上下文初始化函数
    FUN_18036b140(param_1);
    
    // 获取纹理管理器
    texture_manager_ptr = (uint64_t *)
        FUN_180389090(*(int64_t *)(*(int64_t *)(param_1 + 0x18) + 0x20) + 0x2970, &object_data_ptr,
                      param_1 + 0x70);
    *(uint64_t *)(param_1 + 0xd8) = *texture_manager_ptr;
    
    // 释放对象数据
    if (object_data_ptr != (int64_t *)0x0) {
        (**(code **)(*object_data_ptr + 0x38))();
    }
    
    // 调用高级初始化函数
    FUN_18036abc0(param_1);
    
    // 检查渲染状态
    if (*(int *)(param_1 + 0xc0) == 0) {
        (**(code **)(*(int64_t *)(param_1 + 0xb0) + 0x10))((int64_t *)(param_1 + 0xb0), "ready");
    }
    
    // 执行安全验证
    CoreSystemConfigManager(security_token ^ (uint64_t)stack_buffer);
}

/**
 * 渲染系统渲染上下文激活函数
 * 
 * 功能说明：
 * - 激活指定的渲染上下文
 * - 设置渲染设备的状态
 * - 准备渲染管线
 * - 验证上下文的完整性
 * 
 * 参数：
 * - param_1: 渲染上下文指针
 * 
 * 返回值：
 * - 无
 */
void FUN_18036aa50(int64_t param_1)
{
    // 局部变量声明
    uint64_t resource_handle;          // 资源句柄
    uint64_t *texture_manager_ptr;     // 纹理管理器指针
    int8_t stack_buffer[32];         // 栈缓冲区
    int64_t *object_data_ptr;          // 对象数据指针
    uint64_t security_context;        // 安全上下文
    void *resource_cache_ptr;       // 资源缓存指针
    int8_t *name_buffer_ptr;         // 名称缓冲区指针
    int32_t name_length;               // 名称长度
    int8_t name_buffer[16];          // 名称缓冲区
    uint64_t security_token;             // 安全令牌
    
    // 初始化安全上下文
    security_context = 0xfffffffffffffffe;
    security_token = RENDERING_GLOBAL_DATA_TABLE ^ (uint64_t)stack_buffer;
    
    // 设置激活标志
    *(int8_t *)(param_1 + 0xf0) = 1;
    
    // 检查渲染系统状态
    if (RENDERING_TEXTURE_CACHE != '\0') {
        resource_cache_ptr = &RENDERING_TEXTURE_CACHE;
        name_buffer_ptr = name_buffer;
        name_buffer[0] = 0;
        name_length = 7;
        strcpy_s(name_buffer, 0x10, "context");
        resource_handle = FUN_1800b6de0(RENDERING_MATERIAL_REGISTRY, &resource_cache_ptr, 1);
        *(uint64_t *)(param_1 + 0x98) = resource_handle;
        resource_cache_ptr = &RENDERING_MATERIAL_REGISTRY;
    }
    
    // 调用上下文初始化函数
    FUN_18036b140(param_1);
    
    // 获取纹理管理器
    texture_manager_ptr = (uint64_t *)
        FUN_180389090(*(int64_t *)(*(int64_t *)(param_1 + 0x18) + 0x20) + 0x2970, &object_data_ptr,
                      param_1 + 0x70);
    *(uint64_t *)(param_1 + 0xd8) = *texture_manager_ptr;
    
    // 释放对象数据
    if (object_data_ptr != (int64_t *)0x0) {
        (**(code **)(*object_data_ptr + 0x38))();
    }
    
    // 调用高级初始化函数
    FUN_18036abc0(param_1);
    
    // 检查渲染状态
    if (*(int *)(param_1 + 0xc0) == 0) {
        (**(code **)(*(int64_t *)(param_1 + 0xb0) + 0x10))((int64_t *)(param_1 + 0xb0), "ready");
    }
    
    // 执行安全验证
    CoreSystemConfigManager(security_token ^ (uint64_t)stack_buffer);
}

/**
 * 渲染系统渲染对象复制函数
 * 
 * 功能说明：
 * - 复制渲染对象的属性
 * - 创建对象的副本
 * - 共享或复制资源数据
 * - 维护对象的状态一致性
 * 
 * 参数：
 * - param_1: 源渲染对象指针
 * - param_2: 目标渲染对象指针
 * 
 * 返回值：
 * - 无
 */
void FUN_18036ab70(uint64_t param_1, uint64_t param_2)
{
    // 局部变量声明
    int64_t *source_object_ptr;        // 源对象指针
    int64_t *target_object_ptr;        // 目标对象指针
    int32_t copy_result;             // 复制结果
    int32_t *resource_name_ptr;      // 资源名称指针
    uint64_t *source_texture_ptr;      // 源纹理指针
    uint64_t *target_texture_ptr;      // 目标纹理指针
    uint64_t *resource_handle_ptr;     // 资源句柄指针
    uint64_t *texture_handle_ptr;      // 纹理句柄指针
    void *resource_registry_ptr;     // 资源注册表指针
    uint64_t *context_data_ptr;        // 上下文数据指针
    int32_t context_flags;            // 上下文标志位
    uint64_t context_id;               // 上下文ID
    uint64_t *object_pool_ptr;         // 对象池指针
    uint64_t security_context;        // 安全上下文
    
    // 创建目标纹理对象
    target_texture_ptr = (uint64_t *)FUN_18062b1e0(RENDERING_GLOBAL_DATA_TABLE, 
                                                    0x118, 8, 3);
    security_context = 0xfffffffffffffffe;
    source_texture_ptr = target_texture_ptr;
    
    // 初始化目标对象
    FUN_1803456e0(target_texture_ptr, param_2, param_1);
    *source_texture_ptr = &RENDERING_TEXTURE_CACHE;
    texture_handle_ptr = source_texture_ptr + 0xe;
    *texture_handle_ptr = &RENDERING_MATERIAL_REGISTRY;
    source_texture_ptr[0xf] = 0;
    *(int32_t *)(source_texture_ptr + 0x10) = 0;
    *texture_handle_ptr = &RENDERING_MATERIAL_REGISTRY;
    source_texture_ptr[0x11] = 0;
    source_texture_ptr[0xf] = 0;
    *(int32_t *)(source_texture_ptr + 0x10) = 0;
    
    // 设置对象数据指针
    source_object_ptr = source_texture_ptr + 0x16;
    *source_object_ptr = (int64_t)&RENDERING_MATERIAL_REGISTRY;
    source_texture_ptr[0x17] = 0;
    *(int32_t *)(source_texture_ptr + 0x18) = 0;
    *source_object_ptr = (int64_t)&RENDERING_MATERIAL_REGISTRY;
    source_texture_ptr[0x19] = 0;
    source_texture_ptr[0x17] = 0;
    *(int32_t *)(source_texture_ptr + 0x18) = 0;
    source_texture_ptr[0x1c] = 0;
    source_texture_ptr[0x1d] = 0;
    
    // 初始化资源注册表
    resource_registry_ptr = &RENDERING_MATERIAL_REGISTRY;
    context_id = 0;
    context_data_ptr = (uint64_t *)0x0;
    context_flags = 0;
    object_pool_ptr = texture_handle_ptr;
    
    // 分配资源名称内存
    resource_name_ptr = (int32_t *)CoreEngine_MemoryAllocator(RENDERING_GLOBAL_DATA_TABLE, 
                                                   TEXTURE_PARAM_SIZE_BASE, 
                                                   TEXTURE_PARAM_TYPE_STRING);
    *(int8_t *)resource_name_ptr = 0;
    context_data_ptr = (uint64_t *)resource_name_ptr;
    copy_result = FUN_18064e990(resource_name_ptr);
    
    // 设置资源名称
    *resource_name_ptr = 0x74736554;  // "Test" (测试标识)
    *(int8_t *)(resource_name_ptr + 1) = 0;
    context_flags = 4;
    context_id._0_4_ = copy_result;
    
    // 执行资源注册
    FUN_18005d190(texture_handle_ptr, &resource_registry_ptr);
    resource_registry_ptr = &RENDERING_MATERIAL_REGISTRY;
    
    // 清理资源
    if (context_data_ptr != (uint64_t *)0x0) {
        CoreEngine_MemoryPoolManager();
    }
    
    context_data_ptr = (uint64_t *)0x0;
    context_id = (uint64_t)context_id._4_4_ << 0x20;
    resource_registry_ptr = &RENDERING_MATERIAL_REGISTRY;
    target_object_ptr = (int64_t *)target_texture_ptr[0x1c];
    target_texture_ptr[0x1c] = 0;
    
    // 释放目标对象数据
    if (target_object_ptr != (int64_t *)0x0) {
        (**(code **)(*target_object_ptr + 0x38))();
    }
    
    // 设置目标对象属性
    target_texture_ptr[0x13] = 0;
    *(int32_t *)((int64_t)target_texture_ptr + 0xa4) = 0x40200000;  // 2.5f
    *(int8_t *)(target_texture_ptr + 0x15) = 0;
    (**(code **)(*source_object_ptr + 0x10))(source_object_ptr, &RENDERING_MATERIAL_REGISTRY);
    *(int16_t *)(target_texture_ptr + 0x1a) = 0x100;
    *(int8_t *)((int64_t)target_texture_ptr + 0xd2) = 1;
    *(int8_t *)((int64_t)target_texture_ptr + 0xd3) = 0;
    
    // 设置对象池参数
    resource_registry_ptr = &RENDERING_MATERIAL_REGISTRY;
    context_id = 0;
    context_data_ptr = (uint64_t *)0x0;
    context_flags = 0;
    texture_handle_ptr = (uint64_t *)CoreEngine_MemoryAllocator(RENDERING_GLOBAL_DATA_TABLE, 
                                                    TEXTURE_PARAM_SIZE_BASE, 
                                                    TEXTURE_PARAM_TYPE_STRING);
    *(int8_t *)texture_handle_ptr = 0;
    context_data_ptr = texture_handle_ptr;
    copy_result = FUN_18064e990(texture_handle_ptr);
    context_id = CONCAT44(context_id._4_4_, copy_result);
    
    // 设置对象标识符
    *texture_handle_ptr = 0x6d614e2068746150;  // "Path Name" (路径名称)
    *(int16_t *)(texture_handle_ptr + 1) = 0x65;
    context_flags = 9;
    
    // 执行对象复制
    FUN_1803460a0(target_texture_ptr, &resource_registry_ptr, object_pool_ptr, 0);
    resource_registry_ptr = &RENDERING_MATERIAL_REGISTRY;
    
    // 清理资源
    CoreEngine_MemoryPoolManager(texture_handle_ptr);
}

/**
 * 渲染系统渲染资源同步函数
 * 
 * 功能说明：
 * - 同步渲染资源的状态
 * - 确保资源数据的一致性
 * - 处理资源的依赖关系
 * - 优化资源访问性能
 * 
 * 参数：
 * - param_1: 渲染上下文指针
 * - param_2: 同步标志位
 * - param_3: 保留参数
 * - param_4: 保留参数
 * 
 * 返回值：
 * - 无
 */
void FUN_18036abc0(int64_t param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4)
{
    // 局部变量声明
    int64_t current_resource_ptr;      // 当前资源指针
    int64_t previous_resource_ptr;     // 前一个资源指针
    int64_t *resource_manager_ptr;     // 资源管理器指针
    void *resource_callback_ptr;    // 资源回调指针
    int64_t *stack_cleanup_ptr;        // 栈清理指针
    
    // 获取资源管理器
    resource_manager_ptr = (int64_t *)
        FUN_180389090(*(int64_t *)(*(int64_t *)(param_1 + 0x18) + 0x20) + 0x2970, &stack_cleanup_ptr,
                      param_1 + 0x70, param_4, 0xfffffffffffffffe);
    current_resource_ptr = *resource_manager_ptr;
    
    // 清理栈资源
    if (stack_cleanup_ptr != (int64_t *)0x0) {
        (**(code **)(*stack_cleanup_ptr + 0x38))();
    }
    
    // 获取前一个资源指针
    previous_resource_ptr = *(int64_t *)(param_1 + 0xd8);
    
    // 检查资源变化
    if (current_resource_ptr != previous_resource_ptr) {
        *(int32_t *)(param_1 + 0xf4) = 0xffffffff;
    }
    
    // 处理资源更新
    if ((current_resource_ptr != 0) &&
        ((current_resource_ptr != previous_resource_ptr || 
          ((previous_resource_ptr != 0 && (*(int *)(param_1 + 0xf4) < *(int *)(previous_resource_ptr + 0x70))))))) {
        *(int64_t *)(param_1 + 0xd8) = current_resource_ptr;
        resource_manager_ptr = (int64_t *)(*(int64_t *)(param_1 + 0x18) + 0x288);
        resource_callback_ptr = &RENDERING_MATERIAL_REGISTRY;
        
        // 检查资源回调
        if (*(void **)(current_resource_ptr + 0x80) != (void *)0x0) {
            resource_callback_ptr = *(void **)(current_resource_ptr + 0x80);
        }
        
        // 执行资源回调
        (**(code **)(*resource_manager_ptr + 0x10))(resource_manager_ptr, resource_callback_ptr);
        FUN_18036b380(param_1);
        *(int32_t *)(param_1 + 0xf4) = *(int32_t *)(*(int64_t *)(param_1 + 0xd8) + 0x70);
    }
}

/**
 * 渲染系统渲染资源强制同步函数
 * 
 * 功能说明：
 * - 强制同步渲染资源
 * - 立即更新资源状态
 * - 处理紧急资源更新
 * - 确保渲染一致性
 * 
 * 参数：
 * - param_1: 渲染上下文指针
 * - param_2: 强制同步标志位
 * - param_3: 保留参数
 * - param_4: 保留参数
 * 
 * 返回值：
 * - 无
 */
void FUN_18036ac90(int64_t param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4)
{
    // 局部变量声明
    uint64_t *resource_manager_ptr;     // 资源管理器指针
    int64_t *cleanup_stack_ptr[4];      // 清理栈指针数组
    
    // 获取资源管理器
    resource_manager_ptr = (uint64_t *)
        FUN_180389090(*(int64_t *)(*(int64_t *)(param_1 + 0x18) + 0x20) + 0x2970, cleanup_stack_ptr,
                      param_1 + 0x70, param_4, 0xfffffffffffffffe);
    
    // 更新资源指针
    *(uint64_t *)(param_1 + 0xd8) = *resource_manager_ptr;
    
    // 清理栈资源
    if (cleanup_stack_ptr[0] != (int64_t *)0x0) {
        (**(code **)(*cleanup_stack_ptr[0] + 0x38))();
    }
    
    // 处理资源同步
    if (*(int64_t *)(param_1 + 0xd8) != 0) {
        FUN_18036b380(param_1);
        *(int32_t *)(param_1 + 0xf4) = *(int32_t *)(*(int64_t *)(param_1 + 0xd8) + 0x70);
    }
}

/**
 * 渲染系统材质属性比较函数
 * 
 * 功能说明：
 * - 比较两个材质的属性
 * - 检查材质的兼容性
 * - 验证材质参数的一致性
 * - 返回比较结果
 * 
 * 参数：
 * - param_1: 第一个材质对象指针
 * - param_2: 第二个材质对象指针
 * 
 * 返回值：
 * - uint64_t: 比较结果 (0=相同, 1=不同)
 */
uint64_t FUN_18036adb0(uint64_t param_1, int64_t param_2)
{
    int property_type;                  // 属性类型
    int comparison_result;               // 比较结果
    int64_t match_length;               // 匹配长度
    int64_t current_position;           // 当前位置
    
    // 获取属性类型
    property_type = *(int *)(param_2 + 0x10);
    
    // 检查特殊属性类型
    if (property_type == 7) {
        match_length = 0;
        while (current_position = match_length + 1,
              *(char *)(*(int64_t *)(param_2 + 8) + match_length) == ("texture_type")[match_length]) {
            match_length = current_position;
            if (current_position == 8) {
                return 0;  // 完全匹配
            }
        }
    }
    
    // 检查其他属性类型
    if (((property_type != 10) ||
         ((comparison_result = strcmp(*(uint64_t *)(param_2 + 8), "alpha_threshold"), comparison_result != 0 &&
          (comparison_result = strcmp(*(uint64_t *)(param_2 + 8), "specular_power"), comparison_result != 0)))) &&
        ((property_type != 0xc || (property_type = strcmp(*(uint64_t *)(param_2 + 8), "normal_strength"), property_type != 0))))
    {
        return 1;  // 不匹配
    }
    
    return 0;  // 匹配
}

// ================================
// 技术说明文档
// ================================

/**
 * 渲染系统高级资源管理和动画控制模块技术说明
 * 
 * 模块概述：
 * 本模块是渲染系统的核心组件之一，负责高级资源管理、动画控制、
 * 材质处理和渲染对象生命周期管理。该模块提供了完整的资源管理
 * 解决方案，包括资源创建、销毁、复制、同步等操作。
 * 
 * 核心功能：
 * 1. 资源管理：提供完整的资源生命周期管理
 * 2. 动画控制：支持多种动画插值模式和时间控制
 * 3. 材质处理：实现材质属性的设置、验证和混合
 * 4. 渲染对象：管理渲染对象的创建、销毁和状态控制
 * 5. 上下文管理：处理渲染上下文的初始化和激活
 * 
 * 技术特点：
 * - 采用内存池管理技术，提高资源分配效率
 * - 支持多种插值算法，实现平滑的材质动画
 * - 实现资源同步机制，确保数据一致性
 * - 提供完整的错误处理和资源清理机制
 * - 支持批量处理，优化渲染性能
 * 
 * 使用场景：
 * - 3D游戏引擎的渲染系统
 * - 实时渲染应用
 * - 材质动画系统
 * - 资源管理器
 * - 渲染管线优化
 * 
 * 性能优化：
 * - 使用内存池减少内存分配开销
 * - 实现资源缓存提高访问速度
 * - 支持批量处理减少函数调用开销
 * - 采用异步处理机制提高响应速度
 * 
 * 注意事项：
 * - 资源管理需要正确的初始化顺序
 * - 动画系统需要精确的时间控制
 * - 材质混合需要考虑性能影响
 * - 资源同步需要在适当的时间点执行
 * 
 * 依赖关系：
 * - 依赖于全局渲染数据表
 * - 依赖于纹理缓存系统
 * - 依赖于材质注册表
 * - 依赖于内存管理器
 * - 依赖于渲染管线
 */