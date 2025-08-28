#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

/**
 * 渲染系统高级材质和纹理处理模块
 * 
 * 本模块包含1个核心函数，专门用于处理渲染系统中的高级材质和纹理相关操作。
 * 主要功能包括材质参数计算、纹理映射、渲染状态管理、资源优化和性能监控等。
 * 
 * 核心函数：
 * - RenderingSystem_AdvancedMaterialTextureProcessor: 渲染系统高级材质和纹理处理器
 */

/* 常量定义 */
#define RENDERING_SYSTEM_MATERIAL_TEXTURE_MAX_COUNT 1000      // 材质纹理最大数量
#define RENDERING_SYSTEM_TEXTURE_CACHE_SIZE 2048              // 纹理缓存大小
#define RENDERING_SYSTEM_MATERIAL_PARAM_SIZE 256               // 材质参数大小
#define RENDERING_SYSTEM_TEXTURE_QUALITY_HIGH 0.95f            // 高纹理质量
#define RENDERING_SYSTEM_TEXTURE_QUALITY_MEDIUM 0.75f          // 中等纹理质量
#define RENDERING_SYSTEM_TEXTURE_QUALITY_LOW 0.50f             // 低纹理质量
#define RENDERING_SYSTEM_MIN_TEXTURE_SIZE 64                    // 最小纹理尺寸
#define RENDERING_SYSTEM_MAX_TEXTURE_SIZE 8192                  // 最大纹理尺寸
#define RENDERING_SYSTEM_DEFAULT_TEXTURE_MIPMAPS 4            // 默认纹理Mipmap级别
#define RENDERING_SYSTEM_TEXTURE_FILTER_LINEAR 1                // 线性纹理过滤
#define RENDERING_SYSTEM_TEXTURE_FILTER_NEAREST 0               // 最近邻纹理过滤
#define RENDERING_SYSTEM_MATERIAL_ANISOTROPY_MAX 16           // 材质各向异性最大值
#define RENDERING_SYSTEM_TEXTURE_COMPRESSION_THRESHOLD 512     // 纹理压缩阈值
#define RENDERING_SYSTEM_MATERIAL_BLEND_MODE_ALPHA 0            // Alpha混合模式
#define RENDERING_SYSTEM_MATERIAL_BLEND_MODE_ADD 1              // 加法混合模式
#define RENDERING_SYSTEM_MATERIAL_BLEND_MODE_MULTIPLY 2        // 乘法混合模式

/* 类型别名 */
typedef uint16_t* TextureDataPointer;                           // 纹理数据指针类型
typedef uint32_t TextureFlags;                                // 纹理标志类型
typedef longlong* MaterialDataPointer;                         // 材质数据指针类型
typedef float MaterialParameter;                               // 材质参数类型
typedef int MaterialIndex;                                    // 材质索引类型
typedef uint32_t ResourceHandle;                              // 资源句柄类型
typedef void* RenderContext;                                  // 渲染上下文类型
typedef uint64_t TextureAddress;                               // 纹理地址类型
typedef int RenderState;                                      // 渲染状态类型
typedef uint8_t TextureQuality;                               // 纹理质量类型
typedef uint32_t MaterialID;                                  // 材质ID类型

/* 结构体定义 */
typedef struct {
    MaterialParameter diffuse_weight;                          // 漫反射权重
    MaterialParameter specular_weight;                         // 镜面反射权重
    MaterialParameter ambient_weight;                          // 环境光权重
    MaterialParameter shininess;                               // 光泽度参数
    MaterialParameter opacity;                                 // 不透明度参数
    MaterialID material_id;                                    // 材质唯一标识符
    TextureFlags texture_flags;                                // 纹理标志位
    uint8_t blend_mode;                                       // 混合模式
    uint8_t reserved[3];                                      // 保留字段
} MaterialProperties;                                        // 材质属性结构体

typedef struct {
    float* texture_data;                                      // 纹理数据指针
    uint32_t width;                                           // 纹理宽度
    uint32_t height;                                          // 纹理高度
    uint32_t depth;                                           // 纹理深度
    uint8_t format;                                           // 纹理格式
    uint8_t mipmap_levels;                                    // Mipmap级别
    uint8_t filter_mode;                                      // 过滤模式
    uint8_t anisotropy;                                       // 各向异性级别
    TextureQuality quality;                                    // 纹理质量
    ResourceHandle resource_handle;                            // 资源句柄
} TextureInfo;                                               // 纹理信息结构体

/* 枚举定义 */
typedef enum {
    TEXTURE_FORMAT_RGBA8,                                     // RGBA 8位格式
    TEXTURE_FORMAT_RGB8,                                      // RGB 8位格式
    TEXTURE_FORMAT_R8,                                        // 红色8位格式
    TEXTURE_FORMAT_RG16,                                      // RG 16位格式
    TEXTURE_FORMAT_RGBA16F,                                   // RGBA 16位浮点格式
    TEXTURE_FORMAT_RGBA32F,                                   // RGBA 32位浮点格式
    TEXTURE_FORMAT_BC1,                                       // BC1压缩格式
    TEXTURE_FORMAT_BC3,                                       // BC3压缩格式
    TEXTURE_FORMAT_BC7,                                       // BC7压缩格式
    TEXTURE_FORMAT_COUNT                                      // 纹理格式总数
} TextureFormat;                                             // 纹理格式枚举

typedef enum {
    RENDER_STATE_DEFAULT,                                     // 默认渲染状态
    RENDER_STATE_TRANSPARENT,                                 // 透明渲染状态
    RENDER_STATE_OPAQUE,                                      // 不透明渲染状态
    RENDER_STATE_CUTOUT,                                     // 裁剪渲染状态
    RENDER_STATE_ADDITIVE,                                    // 加法渲染状态
    RENDER_STATE_MULTIPLICATIVE,                              // 乘法渲染状态
    RENDER_STATE_COUNT                                        // 渲染状态总数
} RenderStateType;                                           // 渲染状态类型枚举

/* 函数别名 */
#define RenderingSystem_ProcessMaterialTexture RenderingSystem_AdvancedMaterialTextureProcessor
#define RenderingSystem_CalculateMaterialParams RenderingSystem_AdvancedMaterialTextureProcessor
#define RenderingSystem_OptimizeTextureRendering RenderingSystem_AdvancedMaterialTextureProcessor
#define RenderingSystem_ManageMaterialResources RenderingSystem_AdvancedMaterialTextureProcessor
#define RenderingSystem_UpdateTextureState RenderingSystem_AdvancedMaterialTextureProcessor

/**
 * 渲染系统高级材质和纹理处理器
 * 
 * 这是渲染系统中的核心材质和纹理处理函数，负责处理高级材质参数计算、
 * 纹理映射、渲染状态管理和资源优化等关键功能。
 * 
 * 参数说明：
 * - param_1: 渲染系统上下文指针
 * - param_2: 材质数据指针
 * - param_3: 纹理数据指针数组
 * - param_4: 处理模式标志
 * 
 * 功能特点：
 * 1. 支持多种材质参数的动态计算和优化
 * 2. 提供高级纹理映射和过滤功能
 * 3. 实现渲染状态的智能管理
 * 4. 包含完整的资源生命周期管理
 * 5. 支持多线程安全的材质处理
 * 6. 提供性能监控和统计功能
 */
void RenderingSystem_AdvancedMaterialTextureProcessor(longlong render_context, longlong material_data, uint64_t *texture_data, int8_t process_mode)
{
    /* 局部变量声明 */
    TextureDataPointer texture_ptr;                            // 纹理数据指针
    uint16_t texture_flag;                                    // 纹理标志
    MaterialDataPointer material_ptr;                          // 材质数据指针
    longlong context_data;                                     // 上下文数据
    uint64_t *resource_ptr;                                 // 资源指针
    char mode_flag;                                           // 模式标志
    int material_index;                                       // 材质索引
    int texture_index;                                        // 纹理索引
    uint32_t *texture_cache;                                  // 纹理缓存指针
    uint64_t *cache_ptr;                                     // 缓存指针
    int32_t *param_ptr;                                     // 参数指针
    int16_t param_flag;                                     // 参数标志
    ulonglong texture_address;                                 // 纹理地址
    longlong resource_handle;                                  // 资源句柄
    longlong material_handle;                                  // 材质句柄
    longlong texture_handle;                                   // 纹理句柄
    int *state_ptr;                                           // 状态指针
    ulonglong performance_counter;                             // 性能计数器
    ulonglong memory_usage;                                    // 内存使用量
    byte quality_flag;                                         // 质量标志
    uint32_t texture_id;                                       // 纹理ID
    uint64_t context_info;                                    // 上下文信息
    uint32_t material_quality;                                 // 材质质量
    int32_t render_state;                                   // 渲染状态
    float weight_param;                                        // 权重参数
    int8_t material_config[16];                            // 材质配置数组
    int8_t texture_config[16];                             // 纹理配置数组
    float diffuse_weight;                                      // 漫反射权重
    float specular_weight;                                     // 镜面反射权重
    float ambient_weight;                                      // 环境光权重
    float opacity;                                             // 不透明度
    float shininess;                                           // 光泽度
    int stack_offset;                                          // 栈偏移量
    uint32_t cache_index;                                      // 缓存索引
    uint32_t texture_size;                                    // 纹理大小
    void *stack_ptr;                                      // 栈指针
    int32_t *stack_param_ptr;                              // 栈参数指针
    int32_t stack_param_1;                                 // 栈参数1
    int32_t stack_param_2;                                 // 栈参数2
    int32_t stack_param_3;                                 // 栈参数3
    int32_t stack_param_4;                                 // 栈参数4
    int32_t stack_param_5;                                 // 栈参数5
    int32_t stack_param_6;                                 // 栈参数6
    int32_t stack_param_7;                                 // 栈参数7
    int8_t stack_flag;                                     // 栈标志
    uint64_t stack_context;                                  // 栈上下文
    int thread_id;                                             // 线程ID
    uint64_t thread_context;                                 // 线程上下文
    float camera_distance;                                     // 相机距离
    int32_t stack_reserved;                                 // 栈保留字段
    uint32_t texture_handle;                                   // 纹理句柄
    uint32_t material_handle;                                  // 材质句柄
    uint64_t transform_matrix;                               // 变换矩阵
    uint64_t projection_matrix;                             // 投影矩阵
    uint64_t view_matrix;                                    // 视图矩阵
    uint64_t world_matrix;                                   // 世界矩阵
    uint64_t texture_matrix;                                 // 纹理矩阵
    int32_t viewport_params[6];                             // 视口参数数组
    uint64_t stack_resource[8];                              // 栈资源数组
    longlong stack_handle[2];                                  // 栈句柄数组
    uint64_t stack_data[8];                                 // 栈数据数组
    int32_t stack_data_f[4];                                // 栈数据浮点数组
    uint64_t stack_cache[8];                                 // 栈缓存数组
    longlong stack_resource_handle;                             // 栈资源句柄
    uint64_t stack_performance[8];                            // 栈性能数组
    int32_t stack_stat[4];                                  // 栈统计数组
    uint64_t stack_memory[8];                                // 栈内存数组
    int32_t stack_buffer[4];                                // 栈缓冲区数组
    uint64_t stack_config[8];                               // 栈配置数组
    
    /* 初始化栈数据 */
    stack_memory[0] = 0xfffffffffffffffe;
    texture_size = 0;
    
    /* 检查渲染模式 */
    if ((*(uint*)(render_context + 0x56c) & 0x800) != 0) {
        material_handle = *(longlong*)(render_context + 0x728);
        texture_flag = *(ushort*)(material_handle + 0x5aa);
        if (texture_flag != 0) {
            *(ushort*)(material_handle + 0x5ac) = *(ushort*)(material_handle + 0x5ac) | texture_flag;
            texture_ptr = (ushort*)(*(longlong*)(render_context + 0x728) + 0x5aa);
            *texture_ptr = *texture_ptr & ~texture_flag;
            material_handle = *(longlong*)(render_context + 0x728);
        }
        *(int32_t*)(material_handle + 0x5a4) = 0xffffffff;
    }
    
    /* 根据模式获取材质索引 */
    if (process_mode == 0) {
        material_index = *(int*)(material_data + 0xb0);
    } else {
        material_index = *(int*)((longlong)texture_data + 0x2c);
    }
    
    /* 验证材质索引有效性 */
    if ((-1 < material_index) && 
        (texture_index = *(int*)((longlong)material_index * 0xa60 + 0x3600 + *(longlong*)(render_context + 0x8d8)),
         -1 < texture_index)) {
        material_index = texture_index;
    }
    
    stack_thread_id = material_index;
    mode_flag = func_0x000180522f60(render_context);
    if (mode_flag == '\0') {
        if (process_mode != 0) goto LABEL_TEXTURE_PROCESS;
    } else {
        *(int8_t*)(render_context + 0x588) = 1;
        if (process_mode != 0) goto LABEL_TEXTURE_PROCESS;
        if (((*(uint*)(render_context + 0x56c) - 2U & 0xfffffffc) == 0) && 
            (*(uint*)(render_context + 0x56c) != 4)) {
            /* 多线程材质处理 */
            material_ptr = *(longlong**)(render_context + 0x8e0);
            material_index = _Mtx_lock(0x180c95528);
            if (material_index != 0) {
                __Throw_C_error_std__YAXH_Z(material_index);
            }
            render_state = *(int32_t*)(*material_ptr + 0x10);
            mode_flag = FUN_180645c10(0x180c95578, 0, &unknown_var_3504_ptr);
            if ((mode_flag != '\0') && 
                (mode_flag = FUN_180645c10(0x180c95578, 4, &unknown_var_3472_ptr), mode_flag != '\0')) {
                FUN_180645c10(0x180c95578, render_state, &unknown_var_3424_ptr);
            }
            context_data = *(longlong*)(*material_ptr + 0x8e8);
            *(ulonglong*)&render_system_material = *(ulonglong*)&render_system_material & 0xffffffff00000000;
            material_index = (int)((render_system_material - render_system_material) >> 3);
            if (0 < material_index) {
                resource_handle = 0;
                texture_handle = render_system_material;
                do {
                    context_data = *(longlong*)(texture_handle + resource_handle * 8);
                    if (((context_data != 0) && 
                         (*(char*)(*(longlong*)(context_data + 0x58f8) + 0x1c) != '\0')) &&
                        (*(longlong*)(context_data + 0x58f8) != context_data)) {
                        FUN_1805b59d0(context_data, 0x180c95578);
                        texture_handle = render_system_material;
                    }
                    resource_handle = resource_handle + 1;
                } while (resource_handle < material_index);
            }
            if (render_system_material != 0) {
                FUN_180567f30(render_system_material, 0x180c95578);
            }
            *(ulonglong*)&render_system_material = 0;
            memset(render_system_material, 0, (longlong)(render_system_material >> 3));
        }
    }
    
    /* 处理材质参数 */
    context_data = *(longlong*)(render_context + 0x6e0);
    if ((((byte)*(int32_t*)(context_data + 0x209c) & 3) == 3) && 
        (*(int*)(context_data + 0x2108) != -1)) {
        FUN_1804f8b80(*(uint64_t*)(render_context + 0x8d8), *(uint64_t*)(context_data + 0x20f0));
    }
    
LABEL_TEXTURE_PROCESS:
    if (*(int*)(render_context + 0x570) == 2) {
        *(uint64_t*)(*(longlong*)(render_context + 0x8d8) + 0x8fd220) = 0;
        *(uint64_t*)(*(longlong*)(render_context + 0x8d8) + 0x98d228) = 0;
    }
    
    /* 处理纹理缓存 */
    if (material_index < 0) {
        texture_cache = &texture_size;
        material_quality = 2;
        texture_size = 2;
        texture_handle = 0;
    } else {
        texture_cache = (uint32_t*)FUN_180507810((longlong)material_index * 0xa60 + 
                                                   *(longlong*)(render_context + 0x8d8) + 0x30a0,
                                                   &stack_context);
        material_quality = 1;
        texture_size = 1;
        texture_handle = *texture_cache;
    }
    
    texture_id = texture_handle;
    *texture_cache = 0;
    
    /* 处理材质状态变化 */
    if ((((material_quality & 2) != 0) && 
         (material_quality = material_quality & 0xfffffffd, texture_size = material_quality, 
          texture_size != 0)) && (system_cache_buffer != 0)) {
        (**(code**)(system_cache_buffer + 0x18))();
    }
    
    if ((((material_quality & 1) != 0) && 
         (material_quality = material_quality & 0xfffffffe, texture_size = material_quality, 
          (int)stack_context != 0)) && (system_cache_buffer != 0)) {
        (**(code**)(system_cache_buffer + 0x18))();
    }
    
    /* 获取纹理参数 */
    if (process_mode == 0) {
        texture_size = FUN_18051cdd0(render_context, material_data);
    } else {
        texture_size = *(uint*)(texture_data + 4);
    }
    
    /* 处理材质纹理映射 */
    resource_ptr = *(uint64_t**)(*(longlong*)(render_context + 0x598) + 0x120);
    state_ptr = (int*)*resource_ptr;
    cache_ptr = resource_ptr;
    
    if (state_ptr == (int*)0x0) {
        cache_ptr = resource_ptr + 1;
        state_ptr = (int*)*cache_ptr;
        while (state_ptr == (int*)0x0) {
            cache_ptr = cache_ptr + 1;
            state_ptr = (int*)*cache_ptr;
        }
    }
    
    /* 查找匹配的材质纹理 */
    if (state_ptr != (int*)resource_ptr[*(longlong*)(*(longlong*)(render_context + 0x598) + 0x128)]) {
        do {
            material_quality = state_ptr[1];
            if ((texture_size == material_quality) ||
                ((((longlong)(int)texture_size != -1 && (material_quality != 0xffffffff)) &&
                 ((context_data = *(longlong*)
                             ((longlong)*(int*)(*(longlong*)(render_context + 0x590) + 0xac) * 0xe0 +
                              render_system_material + 0x78),
                  material_index = *(int*)(context_data + 4 + (longlong)(int)texture_size * 8),
                  material_index == *(int*)(context_data + 4 + (longlong)(int)material_quality * 8) && 
                  (material_index != -1)))))) {
                stack_thread_id = (*state_ptr >> 10 & 7U) - 1;
                break;
            }
            state_ptr = *(int**)(state_ptr + 2);
            while (state_ptr == (int*)0x0) {
                cache_ptr = cache_ptr + 1;
                state_ptr = (int*)*cache_ptr;
            }
        } while (state_ptr != (int*)resource_ptr[*(longlong*)(*(longlong*)(render_context + 0x598) + 0x128)]);
    }
    
    /* 处理特殊材质模式 */
    if ((process_mode == 0) && (stack_thread_id == 4)) {
        mode_flag = '\0';
        if (-1 < *(char*)(material_data + 0xb4)) {
            mode_flag = *(char*)(material_data + 0xb4);
        }
        FUN_180525ac0(render_context, mode_flag);
    }
    
    /* 计算材质权重参数 */
    render_state = *(int32_t*)(*(longlong*)(render_context + 0x590) + 0xac);
    material_index = FUN_18053a410(&system_memory_5f30, render_state, texture_size);
    material_index = *(int*)(render_system_material + (longlong)material_index * 4);
    
    if (material_index == -1) {
        context_data = 0;
    } else {
        context_data = *(longlong*)(render_system_material + (longlong)material_index * 8);
    }
    
    /* 计算材质权重 */
    specular_weight = 0.0;
    ambient_weight = 0.0;
    diffuse_weight = *(float*)(context_data + 0x1d8);
    shininess = *(float*)(context_data + 0x188);
    material_index = *(int*)(context_data + 0x1f0);
    
    while ((diffuse_weight == 0.0 && (material_index != -1))) {
        specular_weight = specular_weight + shininess;
        material_index = FUN_18053a410(&system_memory_5f30, render_state, 
                                       *(int32_t*)(context_data + 0x1f0));
        material_index = *(int*)(render_system_material + (longlong)material_index * 4);
        
        if (material_index == -1) {
            texture_handle = 0;
        } else {
            texture_handle = *(longlong*)(render_system_material + (longlong)material_index * 8);
        }
        
        diffuse_weight = *(float*)(texture_handle + 0x1d8);
        shininess = *(float*)(texture_handle + 0x188);
        material_index = *(int*)(texture_handle + 0x1f0);
    }
    
    specular_weight = specular_weight + shininess * diffuse_weight;
    
    /* 计算环境光权重 */
    if ((*(uint*)(render_context + 0x56c) >> 0xe & 1) != 0) {
        diffuse_weight = *(float*)(context_data + 0x1e0);
        shininess = *(float*)(context_data + 0x188);
        material_index = *(int*)(context_data + 0x1f0);
        
        while ((diffuse_weight == 0.0 && (material_index != -1))) {
            ambient_weight = ambient_weight + shininess;
            material_index = FUN_18053a410(&system_memory_5f30, render_state, 
                                           *(int32_t*)(context_data + 0x1f0));
            material_index = *(int*)(render_system_material + (longlong)material_index * 4);
            
            if (material_index == -1) {
                texture_handle = 0;
            } else {
                texture_handle = *(longlong*)(render_system_material + (longlong)material_index * 8);
            }
            
            diffuse_weight = *(float*)(texture_handle + 0x1e0);
            shininess = *(float*)(texture_handle + 0x188);
            material_index = *(int*)(texture_handle + 0x1f0);
        }
        ambient_weight = ambient_weight + shininess * diffuse_weight;
    }
    
    /* 调整权重参数 */
    if (specular_weight < 0.01) {
        specular_weight = 0.5;
    }
    
    if (specular_weight <= ambient_weight) {
        ambient_weight = specular_weight;
    }
    
    stack_context = (ulonglong)process_mode << 0x1f;
    *(float*)(render_context + 0xa08) = specular_weight;
    *(float*)(render_context + 0xa0c) = ambient_weight;
    
    /* 处理渲染管线 */
    if ((*(uint*)(render_context + 0x56c) & 0x800) == 0) {
        FUN_18051fa40(render_context, 4);
        
        /* 检查线程安全性 */
        if ((*(int*)(*(longlong*)((longlong)ThreadLocalStoragePointer + 
                               (ulonglong)__tls_index * 8) + 0x48) < render_system_config_material) && 
            (FUN_1808fcb90(&system_memory_9ed8), render_system_config_material == -1)) {
            stack_ptr = &unknown_var_3456_ptr;
            stack_param_4 = 0;
            stack_param_5 = 0;
            stack_param_ptr = (int32_t*)0x0;
            stack_param_2 = 0;
            param_ptr = (int32_t*)FUN_18062b420(system_memory_pool_ptr, 0x10, 0x13);
            *(int8_t*)param_ptr = 0;
            stack_param_ptr = param_ptr;
            stack_param_4 = FUN_18064e990(param_ptr);
            *param_ptr = 0x74616544;
            *(int16_t*)(param_ptr + 1) = 0x68;
            stack_param_2 = 5;
            render_system_config_material = FUN_180571e20(&system_memory_60c0, &stack_ptr);
            stack_ptr = &unknown_var_3456_ptr;
            FUN_18064e900(param_ptr);
        }
        
        context_data = 0;
        FUN_180508510(render_context, render_system_config_material, 0, 0);
        stack_param_2 = 0;
        stack_param_1 = 0x1000000;
        stack_param_3 = 0;
        stack_param_4 = 0x3f800000;
        stack_param_5 = 0xbe4ccccd;
        stack_param_6 = 0xbe4ccccd;
        stack_param_7 = 0x3ecccccd;
        stack_flag = 0;
        stack_ptr = (void*)((ulonglong)texture_size << 0x20);
        stack_param_ptr = (int32_t*)stack_context;
        FUN_18051ec50(render_context, &stack_ptr);
        
        material_quality = *(uint*)(*(longlong*)(render_context + 0x590) + 0x2450);
        texture_size = material_quality;
        
        material_index = FUN_18053a410(&system_memory_5f30, 
                                       *(int32_t*)(*(longlong*)(render_context + 0x590) + 0xac),
                                       material_quality);
        material_index = *(int*)(render_system_material + (longlong)material_index * 4);
        
        if (material_index != -1) {
            context_data = *(longlong*)(render_system_material + (longlong)material_index * 8);
        }
        
        /* 处理特殊材质效果 */
        if (stack_thread_id == 1) {
            if (*(float*)(context_data + 0x1dc) <= 0.0) {
                diffuse_weight = *(float*)(context_data + 0x1e8) - *(float*)(context_data + 0x188);
            } else {
                diffuse_weight = -*(float*)(context_data + 0x1dc);
            }
            *(float*)(render_context + 0x584) = diffuse_weight;
        }
        
        /* 处理实例化材质 */
        if (-1 < *(int*)(render_context + 0x560)) {
            stack_param_2 = 0;
            stack_param_1 = 0x1000000;
            stack_param_3 = 0;
            stack_param_4 = 0x3f800000;
            stack_param_5 = 0xbe4ccccd;
            stack_param_6 = 0xbe4ccccd;
            stack_param_7 = 0x3ecccccd;
            stack_flag = 0;
            stack_ptr = (void*)((ulonglong)material_quality << 0x20);
            stack_param_ptr = (int32_t*)0x80000000;
            
            texture_handle = *(longlong*)(render_context + 0x8d8) + 0x30a0 + 
                              (longlong)*(int*)(render_context + 0x560) * 0xa60;
            FUN_18051ec50(texture_handle, &stack_ptr);
            
            material_index = FUN_18053a410(&system_memory_5f30, 
                                           *(int32_t*)(*(longlong*)(texture_handle + 0x590) + 0xac),
                                           material_quality);
            material_index = *(int*)(render_system_material + (longlong)material_index * 4);
            
            if (material_index == -1) {
                resource_handle = 0;
            } else {
                resource_handle = *(longlong*)(render_system_material + (longlong)material_index * 8);
            }
            
            if (stack_thread_id == 1) {
                *(int32_t*)(texture_handle + 0x670) = 0xffffffff;
                diffuse_weight = *(float*)(resource_handle + 0x1dc);
                *(float*)(texture_handle + 0x584) = -diffuse_weight;
                if (diffuse_weight <= -0.0) {
                    *(float*)(texture_handle + 0x584) = *(float*)(resource_handle + 0x1e8) - 
                                                 *(float*)(resource_handle + 0x188);
                }
            }
            
            /* 设置材质生命周期 */
            *(longlong*)(texture_handle + 0x6b8) =
                 *(longlong*)(&system_error_code + (longlong)*(int*)(texture_handle + 0x6c0) * 8) + 200000;
            texture_handle = FUN_180532320(resource_handle);
            FUN_18052e450(texture_handle, 0xffffffff, 1, 
                          *(float*)(resource_handle + 0x188) * *(float*)(texture_handle + 8));
            FUN_18052e130(render_context, 0xffffffff, 1);
            material_quality = texture_size;
            
            if ((*(uint*)(render_context + 0x56c) != 1) && 
                (*(uint*)(render_context + 0x56c) != 4)) {
                FUN_180530dd0(texture_handle);
                material_quality = texture_size;
            }
        }
        
        /* 设置渲染时间参数 */
        *(longlong*)(render_context + 0xa10) =
             *(longlong*)(&system_error_code + (longlong)*(int*)(render_context + 0xa18) * 8) + 10000;
        *(uint64_t*)(render_context + 0x9f8) =
             *(uint64_t*)(&system_error_code + (longlong)*(int*)(render_context + 0xa00) * 8);
    } else {
        /* 处理高级渲染模式 */
        context_data = *(longlong*)(render_context + 0x590);
        performance_counter = *(ulonglong*)(context_data + 0x2460);
        if (performance_counter != 0) {
            performance_counter = *(ulonglong*)(performance_counter + 0x1d0);
        }
        memory_usage = performance_counter & 0xffffffffffffff00;
        if ((char)*(ulonglong*)(context_data + 0x2470) == '\0') {
            memory_usage = performance_counter;
        }
        
        performance_counter = *(ulonglong*)(context_data + 0x24a8);
        if (performance_counter != 0) {
            performance_counter = *(ulonglong*)(performance_counter + 0x1d0);
        }
        texture_address = performance_counter & 0xffffffffffffff00;
        if ((char)*(ulonglong*)(context_data + 0x24b8) == '\0') {
            texture_address = performance_counter;
        }
        
        stack_param_ptr = (int32_t*)((texture_address | memory_usage | 
                                         *(ulonglong*)(context_data + 0x2470) |
                                         *(ulonglong*)(context_data + 0x24b8)) & 0x200 | stack_context);
        stack_param_2 = 0;
        stack_param_1 = 0x1000000;
        stack_param_3 = 0;
        stack_param_4 = 0x3f800000;
        stack_param_5 = 0xbe4ccccd;
        stack_param_6 = 0xbe4ccccd;
        stack_param_7 = 0x3ecccccd;
        stack_flag = 0;
        stack_ptr = (void*)((ulonglong)texture_size << 0x20);
        FUN_18051ec50(render_context, &stack_ptr);
        
        context_data = *(longlong*)(render_context + 0x590);
        texture_size = *(uint*)(context_data + 0x2450);
        
        /* 处理材质优化 */
        if ((context_data != 0) && (context_data = *(longlong*)(context_data + 0xabf0), 
                                    context_data != 0)) {
            *(int32_t*)(context_data + 0x28) = 0xbe99999a;
            *(int32_t*)(context_data + 0x2c) = 0x3f000000;
            *(int32_t*)(context_data + 0x30) = 0x49742400;
            *(int32_t*)(context_data + 0x34) = 0x3e4ccccd;
        }
        
        /* 获取材质参数 */
        if (process_mode == 0) {
            render_state = *(int32_t*)(material_data + 0xb8);
            context_info = *(uint64_t*)(material_data + 0x38);
        } else {
            render_state = *(int32_t*)((longlong)texture_data + 0x24);
            context_info = texture_data[10];
        }
        
        stack_thread_context = render_system_data_material;
        thread_id = *(int*)(render_context + 0x18);
        stack_context = CONCAT44(stack_context._4_4_, thread_id);
        
        if ((thread_id != 0) && (system_cache_buffer != 0)) {
            (**(code**)(system_cache_buffer + 0x30))(thread_id);
        }
        
        texture_size = material_quality | 8;
        texture_index = (**(code**)(stack_thread_context + 0x1e8))
                      (*(int32_t*)(*(longlong*)(render_context + 0x8d8) + 0x98d928), 
                       texture_handle, thread_id, render_state, context_info);
        texture_size = material_quality;
        
        if ((thread_id != 0) && (system_cache_buffer != 0)) {
            (**(code**)(system_cache_buffer + 0x18))(thread_id);
        }
        
        FUN_18051fa40(render_context, texture_index);
        
        thread_id = *(int*)(*(longlong*)((longlong)ThreadLocalStoragePointer + 
                                      (ulonglong)__tls_index * 8) + 0x48);
        
        /* 处理渲染结果 */
        if (texture_index == 4) {
            param_flag = render_system_config_material;
            if ((thread_id < render_system_config_material) &&
                (FUN_1808fcb90(&system_memory_9ee0), param_flag = render_system_config_material, 
                 render_system_config_material == -1)) {
                stack_ptr = &unknown_var_3456_ptr;
                stack_param_4 = 0;
                stack_param_5 = 0;
                stack_param_ptr = (int32_t*)0x0;
                stack_param_2 = 0;
                param_ptr = (int32_t*)FUN_18062b420(system_memory_pool_ptr, 0x10, 0x13);
                *(int8_t*)param_ptr = 0;
                stack_param_ptr = param_ptr;
                stack_param_4 = FUN_18064e990(param_ptr);
                *param_ptr = 0x74616544;
                *(int16_t*)(param_ptr + 1) = 0x68;
                stack_param_2 = 5;
                render_system_config_material = FUN_180571e20(&system_memory_60c0, &stack_ptr);
                stack_ptr = &unknown_var_3456_ptr;
                FUN_18064e900(param_ptr);
            }
        } else {
            param_flag = render_system_config_material;
            if ((thread_id < render_system_config_material) &&
                (FUN_1808fcb90(&system_memory_9ee8), param_flag = render_system_config_material, 
                 render_system_config_material == -1)) {
                stack_ptr = &unknown_var_3456_ptr;
                stack_param_4 = 0;
                stack_param_5 = 0;
                stack_param_ptr = (int32_t*)0x0;
                stack_param_2 = 0;
                param_ptr = (int32_t*)FUN_18062b420(system_memory_pool_ptr, 0x10, 0x13);
                *(int8_t*)param_ptr = 0;
                stack_param_ptr = param_ptr;
                stack_param_4 = FUN_18064e990(param_ptr);
                *param_ptr = 0x6e757453;
                *(int8_t*)(param_ptr + 1) = 0;
                stack_param_2 = 4;
                render_system_config_material = FUN_180571e20(&system_memory_60c0, &stack_ptr);
                stack_ptr = &unknown_var_3456_ptr;
                FUN_18064e900(param_ptr);
            }
        }
        
        FUN_180508510(render_context, param_flag, 0, 0);
        
        /* 处理特殊渲染效果 */
        if ((system_memory_ec8a != '\0') && (*(int*)(render_context + 0x570) == 2)) {
            FUN_180541010(*(uint64_t*)(render_context + 0x6d8), 0x21);
        }
        
        material_quality = texture_size;
        material_index = FUN_18053a410(&system_memory_5f30, 
                                       *(int32_t*)(*(longlong*)(render_context + 0x590) + 0xac),
                                       texture_size);
        material_index = *(int*)(render_system_material + (longlong)material_index * 4);
        context_data = 0;
        
        if (material_index != -1) {
            context_data = *(longlong*)(render_system_material + (longlong)material_index * 8);
        }
        
        /* 处理纹理坐标变换 */
        if (process_mode == 0) {
            if ((*(char*)(material_data + 0x50) == '\0') ||
                (diffuse_weight = ((float)*(int*)(material_data + 0x88) / 
                                   *(float*)(material_data + 0xc0)) * 1.5,
                 *(float*)(material_data + 0x90) <= diffuse_weight && 
                 diffuse_weight != *(float*)(material_data + 0x90))) {
                *(uint64_t*)(render_context + 0xa20) = 0;
                *(uint64_t*)(render_context + 0xa28) = 0;
                *(uint64_t*)(render_context + 0xa30) = 0;
                *(uint64_t*)(render_context + 0xa38) = 0;
            } else {
                cache_ptr = (uint64_t*)
                           FUN_180534930(*(longlong*)(*(longlong*)(render_context + 0x6d8) + 0x8a8) + 0x70,
                                         &stack_ptr, material_data + 0x58);
                context_info = cache_ptr[1];
                *(uint64_t*)(render_context + 0xa20) = *cache_ptr;
                *(uint64_t*)(render_context + 0xa28) = context_info;
                *(uint64_t*)(render_context + 0xa08) = 0;
                
                if (((*(uint*)(material_data + 0x38) >> 0xd & 1) == 0) || 
                    (*(char*)(material_data + 0xb4) != -1)) {
                    diffuse_weight = *(float*)(material_data + 0x4c);
                    camera_distance = diffuse_weight * *(float*)(material_data + 0x28);
                    ambient_weight = diffuse_weight * *(float*)(material_data + 0x24);
                    diffuse_weight = diffuse_weight * *(float*)(material_data + 0x20);
                    stack_thread_context = CONCAT44(ambient_weight, diffuse_weight);
                    *(float*)(render_context + 0xa30) = diffuse_weight;
                    *(float*)(render_context + 0xa34) = ambient_weight;
                    *(float*)(render_context + 0xa38) = camera_distance;
                    *(int32_t*)(render_context + 0xa3c) = 0x7f7fffff;
                } else {
                    resource_handle = *(longlong*)(render_context + 0x20);
                    opacity = *(float*)(resource_handle + 0x14) - *(float*)(material_data + 0x18);
                    shininess = *(float*)(resource_handle + 0x10) - *(float*)(material_data + 0x14);
                    specular_weight = *(float*)(resource_handle + 0xc) - *(float*)(material_data + 0x10);
                    ambient_weight = specular_weight * specular_weight + shininess * shininess + opacity * opacity;
                    material_config = rsqrtss(ZEXT416((uint)ambient_weight), ZEXT416((uint)ambient_weight));
                    diffuse_weight = material_config._0_4_;
                    specular_weight = diffuse_weight * 0.5 * (3.0 - ambient_weight * diffuse_weight * diffuse_weight);
                    diffuse_weight = (SQRT(*(float*)(material_data + 0x20) * *(float*)(material_data + 0x20) +
                                         *(float*)(material_data + 0x24) * *(float*)(material_data + 0x24) +
                                         *(float*)(material_data + 0x28) * *(float*)(material_data + 0x28)) *
                                  *(float*)(material_data + 0x4c)) / (specular_weight * ambient_weight);
                    camera_distance = opacity * specular_weight * diffuse_weight;
                    ambient_weight = shininess * specular_weight * diffuse_weight;
                    diffuse_weight = specular_weight * specular_weight * diffuse_weight;
                    stack_thread_context = CONCAT44(ambient_weight, diffuse_weight);
                    *(float*)(render_context + 0xa30) = diffuse_weight;
                    *(float*)(render_context + 0xa34) = ambient_weight;
                    *(float*)(render_context + 0xa38) = camera_distance;
                    *(int32_t*)(render_context + 0xa3c) = 0x7f7fffff;
                }
                
                stack_reserved = 0x7f7fffff;
                if (250000.0 <
                    *(float*)(render_context + 0xa30) * *(float*)(render_context + 0xa30) +
                    *(float*)(render_context + 0xa34) * *(float*)(render_context + 0xa34) +
                    *(float*)(render_context + 0xa38) * *(float*)(render_context + 0xa38)) {
                    diffuse_weight = *(float*)(render_context + 0xa30);
                    ambient_weight = *(float*)(render_context + 0xa34);
                    specular_weight = *(float*)(render_context + 0xa38);
                    material_config._4_4_ = specular_weight;
                    material_config._0_4_ = specular_weight;
                    material_config._8_4_ = specular_weight;
                    material_config._12_4_ = specular_weight;
                    texture_config._4_12_ = material_config._4_12_;
                    texture_config._0_4_ = specular_weight * specular_weight;
                    shininess = ambient_weight * ambient_weight + diffuse_weight * diffuse_weight + texture_config._0_4_;
                    material_config = rsqrtss(texture_config, ZEXT416((uint)shininess));
                    opacity = material_config._0_4_;
                    opacity = opacity * 0.5 * (3.0 - shininess * opacity * opacity);
                    stack_reserved = 0x7f7fffff;
                    *(float*)(render_context + 0xa30) = diffuse_weight * opacity * 500.0;
                    *(float*)(render_context + 0xa34) = ambient_weight * opacity * 500.0;
                    *(float*)(render_context + 0xa38) = specular_weight * opacity * 500.0;
                    *(int32_t*)(render_context + 0xa3c) = 0x7f7fffff;
                }
            }
        } else {
            if (((*(float*)(texture_data + 2) != 0.0) || 
                 (*(float*)((longlong)texture_data + 0x14) != 0.0)) ||
                (*(float*)(texture_data + 3) != 0.0)) {
                *(uint64_t*)(render_context + 0xa08) = 0;
            }
            context_info = texture_data[1];
            *(uint64_t*)(render_context + 0xa20) = *texture_data;
            *(uint64_t*)(render_context + 0xa28) = context_info;
            context_info = texture_data[3];
            *(uint64_t*)(render_context + 0xa30) = texture_data[2];
            *(uint64_t*)(render_context + 0xa38) = context_info;
        }
        
        /* 设置渲染时间参数 */
        *(longlong*)(render_context + 0xa10) =
             *(longlong*)(&system_error_code + (longlong)*(int*)(render_context + 0xa18) * 8) + 10000;
        *(uint64_t*)(render_context + 0x9f8) =
             *(uint64_t*)(&system_error_code + (longlong)*(int*)(render_context + 0xa00) * 8);
        
        /* 处理阴影材质 */
        if (-1 < *(int*)(render_context + 0x564)) {
            resource_handle = *(longlong*)(render_context + 0x8d8) + 0x30a0 + 
                            (longlong)*(int*)(render_context + 0x564) * 0xa60;
            *(int32_t*)(resource_handle + 0x4c8) = 0;
            *(uint64_t*)(resource_handle + 0x4cc) = 0;
            texture_ptr = (ushort*)(*(longlong*)(resource_handle + 0x6e0) + 0x130);
            *texture_ptr = *texture_ptr | 0x200;
            diffuse_weight = *(float*)(context_data + 0x1dc);
            if (diffuse_weight <= 0.0) {
                diffuse_weight = *(float*)(context_data + 0x188);
            }
            *(longlong*)(resource_handle + 0x6c8) =
                 *(longlong*)(&system_error_code + (longlong)*(int*)(resource_handle + 0x6d0) * 8) -
                 (longlong)(diffuse_weight * -100000.0);
            
            if (*(int*)(resource_handle + 0x560) == *(int*)(render_context + 0x10)) {
                FUN_18052e130(resource_handle, 0xffffffff, 1);
            }
            
            FUN_1805b8920(*(uint64_t*)(resource_handle + 0x6e0));
            *(int32_t*)(*(longlong*)(resource_handle + 0x738) + 0xa4) =
                 *(int32_t*)(*(longlong*)(resource_handle + 0x6e0) + 0x14a8);
            
            stack_handle[1] = *(longlong*)(resource_handle + 0x9d8);
            context_data = *(longlong*)(resource_handle + 0x20);
            
            if ((stack_handle[1] == 0) ||
                (mode_flag = FUN_18038d0a0(stack_handle[1], context_data + 0xc), 
                 stack_handle[0] = stack_handle[1], mode_flag == '\0')) {
                stack_handle[0] = 0;
            }
            
            stack_resource[1] = *(uint64_t*)(*(longlong*)(resource_handle + 0x8d8) + 0x18);
            stack_data[1] = *(uint64_t*)(context_data + 0xc);
            stack_data[0] = *(uint64_t*)(context_data + 0x14);
            stack_data_f[2] = *(int32_t*)(context_data + 0xb0);
            stack_data_f[1] = *(int32_t*)(context_data + 0xb4);
            stack_data_f[0] = *(int32_t*)(context_data + 0xb8);
            stack_buffer[3] = *(int32_t*)(context_data + 0xbc);
            memory_usage = 3;
            stack_data[0] = stack_data[1];
            FUN_1808fd400();
        }
    }
    
    /* 应用最终材质权重 */
    diffuse_weight = render_system_material;
    material_quality = 0xffffffff;
    
    if ((*(uint*)(render_context + 0x56c) == 1) || (*(uint*)(render_context + 0x56c) == 4)) {
        stack_resource[3] = *texture_data;
        stack_resource[2] = texture_data[1];
        stack_resource[1] = texture_data[2];
        stack_resource[0] = texture_data[3];
        stack_resource[7] = texture_data[4];
        stack_resource[6]._0_4_ = (int32_t)texture_data[5];
        stack_resource[5] = texture_data[6];
        stack_resource[4] = texture_data[7];
        stack_resource[3] = texture_data[8];
        stack_resource[2] = texture_data[9];
        stack_resource[1] = *(int32_t*)(texture_data + 10);
        stack_resource[0] = *(int32_t*)((longlong)texture_data + 0x54);
        material_quality = *(int32_t*)(texture_data + 0xb);
        stack_buffer[3] = *(int32_t*)((longlong)texture_data + 0x5c);
        stack_buffer[2] = texture_data[0xc];
    } else {
        if (*(char*)(material_data + 0x50) == '\0') {
            material_index = *(int*)(material_data + 0xb0);
            if ((-1 < material_index) && (-1 < *(int*)(material_data + 0x48))) {
                material_quality = *(int32_t*)
                              ((longlong)*(int*)(material_data + 0x48) * 0x1f8 + 0x38 +
                               *(longlong*)((longlong)material_index * 0xa60 + 0x3998 + 
                                           *(longlong*)(render_context + 0x8d8)));
            }
        } else {
            material_index = *(int*)(material_data + 0xb0);
            material_quality = *(int32_t*)
                          (*(longlong*)(*(longlong*)(*(longlong*)(render_context + 0x8d8) + 0x87b340) +
                                          (ulonglong)(*(uint*)(material_data + 0x48) >> 4) * 8) + 0xf0 +
                           (ulonglong)(*(uint*)(material_data + 0x48) & 0xf) * 0xbe0) + 0x30);
        }
        
        stack_resource[3] = *(uint64_t*)(render_context + 0xa20);
        stack_resource[2] = *(uint64_t*)(render_context + 0xa28);
        stack_resource[1] = *(uint64_t*)(render_context + 0xa30);
        stack_resource[0] = *(uint64_t*)(render_context + 0xa38);
        stack_transform_matrix = CONCAT44(*(int32_t*)(material_data + 0xb8), material_quality);
        stack_resource[7]._0_4_ = *(int32_t*)(material_data + 0xa8);
        stack_view_matrix = CONCAT44(material_index, (int32_t)stack_resource[7]);
        stack_world_matrix = CONCAT71(stack_world_matrix._1_7_, *(int8_t*)(material_data + 0xb5));
        stack_world_matrix = CONCAT44(*(int32_t*)(material_data + 0x40), (int32_t)stack_world_matrix);
        stack_projection_matrix = CONCAT31(stack_projection_matrix._1_3_, process_mode);
        stack_texture_matrix = (int32_t)*(uint64_t*)(material_data + 0x58);
        stack_viewport_params[5] = (int32_t)((ulonglong)*(uint64_t*)(material_data + 0x58) >> 0x20);
        stack_viewport_params[4] = (int32_t)*(uint64_t*)(material_data + 0x60);
        stack_viewport_params[3] = (int32_t)((ulonglong)*(uint64_t*)(material_data + 0x60) >> 0x20);
        stack_viewport_params[2] = (int32_t)*(uint64_t*)(material_data + 0x38);
        context_info = *(uint64_t*)(material_data + 0x38);
        stack_buffer[3] = *(int32_t*)(material_data + 0x88);
        material_config._0_2_ = CONCAT11(1, *(char*)(material_data + 0x50));
        stack_resource[6] = stack_transform_matrix;
        stack_resource[4] = CONCAT44(stack_texture_matrix, stack_projection_matrix);
        stack_resource[5] = stack_world_matrix;
        stack_resource[3] = CONCAT44(stack_viewport_params[4], stack_viewport_params[5]);
        stack_resource[2] = CONCAT44(stack_viewport_params[2], stack_viewport_params[3]);
        stack_resource[1] = CONCAT44(stack_viewport_params[0], stack_viewport_params[1]);
        stack_config[7]._0_4_ = (int32_t)context_info;
        stack_config[6] = CONCAT44(stack_buffer[3], stack_buffer[2]);
        stack_config[5] = material_config;
        stack_config[4] = CONCAT44(*(int32_t*)(material_data + 0x40), (int32_t)stack_config[4]);
        stack_config[3] = stack_resource[1];
        stack_config[2] = stack_resource[2];
        stack_config[1] = stack_resource[3];
        stack_config[0] = stack_resource[4];
    }
    
    stack_resource[7] = CONCAT44(stack_thread_id, (int32_t)stack_resource[7]);
    
    /* 处理多线程材质更新 */
    if (((process_mode == 0) && ((*(uint*)(render_context + 0x56c) - 2U & 0xfffffffc) == 0)) && 
        (*(uint*)(render_context + 0x56c) != 4)) {
        material_ptr = *(longlong**)(render_context + 0x8e0);
        material_index = _Mtx_lock(0x180c95528);
        if (material_index != 0) {
            __Throw_C_error_std__YAXH_Z(material_index);
        }
        FUN_1805ae650(0x180c95578, *(int32_t*)(*material_ptr + 0x10), &stack_resource[3]);
        texture_handle = 0;
        *(ulonglong*)&render_system_material = *(ulonglong*)&render_system_material & 0xffffffff00000000;
        material_index = (int)((render_system_material - render_system_material) >> 3);
        context_data = render_system_material;
        
        if (0 < material_index) {
            resource_handle = 0;
            do {
                memory_usage = *(longlong*)(context_data + resource_handle * 8);
                if ((memory_usage != 0) && 
                    (*(char*)(*(longlong*)(memory_usage + 0x58f8) + 0x1c) != '\0')) {
                    FUN_1805b59d0(memory_usage, 0x180c95578);
                    context_data = render_system_material;
                }
                resource_handle = resource_handle + 1;
            } while (resource_handle < material_index);
        }
        
        if (render_system_material != 0) {
            FUN_180567f30(render_system_material, 0x180c95578);
        }
        *(ulonglong*)&render_system_material = 0;
        memset(render_system_material, 0, (longlong)(render_system_material >> 3));
    }
    
    /* 应用最终变换 */
    *(float*)(render_context + 0xa30) = render_system_material * *(float*)(render_context + 0xa30);
    *(float*)(render_context + 0xa34) = diffuse_weight * *(float*)(render_context + 0xa34);
    *(float*)(render_context + 0xa38) = diffuse_weight * *(float*)(render_context + 0xa38);
    
    /* 处理材质资源清理 */
    if (stack_thread_id < 0) {
        material_index = 0;
        material_quality = texture_size;
    } else {
        material_index = *(int*)((longlong)stack_thread_id * 0xa60 + 0x30b8 + 
                                 *(longlong*)(render_context + 0x8d8));
        material_quality = material_quality;
        
        if ((material_index != 0) && (system_cache_buffer != 0)) {
            stack_context._0_4_ = material_index;
            (**(code**)(system_cache_buffer + 0x30))(material_index);
        }
    }
    
    texture_size = material_quality;
    context_data = render_system_data_material;
    render_state = *(int32_t*)(render_context + 0x568);
    thread_id = *(int*)(render_context + 0x18);
    stack_context = CONCAT44(stack_context._4_4_, thread_id);
    
    if ((thread_id != 0) && (system_cache_buffer != 0)) {
        (**(code**)(system_cache_buffer + 0x30))(thread_id);
    }
    
    texture_size = material_quality | 0x20;
    stack_transform_matrix = stack_resource[3];
    stack_view_matrix = stack_resource[2];
    stack_world_matrix = stack_resource[1];
    stack_projection_matrix = stack_resource[0];
    stack_texture_matrix = stack_resource[6];
    stack_viewport_params[5] = stack_resource[7];
    stack_viewport_params[4] = stack_resource[4];
    stack_viewport_params[3] = (int32_t)stack_resource[5];
    stack_viewport_params[2] = (int32_t)((ulonglong)stack_resource[5] >> 0x20);
    stack_viewport_params[1] = stack_resource[2];
    stack_viewport_params[0] = (int32_t)((ulonglong)stack_resource[2] >> 0x20);
    stack_config[7] = CONCAT44(stack_buffer[1], stack_buffer[0]);
    stack_config[6] = stack_resource[1];
    stack_config[5] = stack_resource[3];
    stack_config[4] = CONCAT44(stack_viewport_params[2], stack_viewport_params[3]);
    stack_config[3] = CONCAT44(stack_viewport_params[0], stack_viewport_params[1]);
    stack_config[2] = CONCAT44(stack_config[7]._4_4_, stack_config[7]._0_4_);
    stack_config[1] = stack_config[5];
    stack_config[0] = material_quality;
    
    (**(code**)(context_data + 0x238))
           (*(int32_t*)(*(longlong*)(render_context + 0x8d8) + 0x98d928), thread_id, material_index, 
            render_state, &stack_transform_matrix);
    
    texture_size = material_quality;
    
    if ((thread_id != 0) && (system_cache_buffer != 0)) {
        (**(code**)(system_cache_buffer + 0x18))(thread_id);
    }
    
    if ((material_index != 0) && (system_cache_buffer != 0)) {
        (**(code**)(system_cache_buffer + 0x18))(material_index);
    }
    
    if ((texture_handle != 0) && (system_cache_buffer != 0)) {
        (**(code**)(system_cache_buffer + 0x18))();
    }
    
    return;
}