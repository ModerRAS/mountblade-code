# Mount & Blade II: Bannerlord 渲染系统架构

## 文档信息

- **文档版本**: 1.0
- **创建日期**: 2025-08-28
- **最后更新**: 2025-08-28
- **文档类型**: 技术架构文档
- **适用对象**: 图形程序员、引擎开发者、技术美术

## 1. 概述

Mount & Blade II: Bannerlord 的渲染系统是一个高性能、可扩展的图形渲染引擎，专为大规模开放世界RPG游戏设计。系统采用现代化的渲染架构，支持先进的图形技术，包括延迟渲染、PBR材质、实时阴影等。

### 1.1 设计目标

- **高性能**: 支持大规模场景（数百个单位、复杂地形）
- **视觉效果**: 提供高质量的视觉体验
- **可扩展**: 易于添加新的渲染特性
- **跨平台**: 支持多种图形API（DirectX 11/12）
- **灵活性**: 支持多种渲染技术和艺术风格

### 1.2 核心特性

- **延迟渲染**: 提高复杂场景的性能
- **PBR材质**: 基于物理的材质系统
- **实时全局光照**: 动态光照效果
- **高级阴影**: 级联阴影贴图（CSM）
- **后处理效果**: 景深、运动模糊、HDR等
- **粒子系统**: 高性能粒子效果
- **地形渲染**: 大规模地形渲染

## 2. 渲染架构设计

### 2.1 整体架构

```
┌─────────────────────────────────────────────────────────────┐
│                     渲染系统架构                              │
├─────────────────────────────────────────────────────────────┤
│                                                             │
│  ┌─────────────────────────────────────────────────┐       │
│  │                应用层接口                          │       │
│  │  ┌─────────┐ ┌─────────┐ ┌─────────┐ ┌─────────┐│       │
│  │  │ 场景管理 │ │ 材质系统 │ │ 动画系统 │ │ 粒子系统 ││       │
│  │  └─────────┘ └─────────┘ └─────────┘ └─────────┘│       │
│  └─────────────────────────────────────────────────┘       │
│                    │                                      │
│  ┌─────────────────────────────────────────────────┐       │
│  │                渲染管线层                          │       │
│  │  ┌─────────┐ ┌─────────┐ ┌─────────┐ ┌─────────┐│       │
│  │  │ 几何处理 │ │ 光照计算 │ │ 阴影渲染 │ │ 后处理  ││       │
│  │  └─────────┘ └─────────┘ └─────────┘ └─────────┘│       │
│  └─────────────────────────────────────────────────┘       │
│                    │                                      │
│  ┌─────────────────────────────────────────────────┐       │
│  │                资源管理层                          │       │
│  │  ┌─────────┐ ┌─────────┐ ┌─────────┐ ┌─────────┐│       │
│  │  │ 纹理管理 │ │ 缓冲区管理│ │ 着色器管理│ │ 内存管理 ││       │
│  │  └─────────┘ └─────────┘ └─────────┘ └─────────┘│       │
│  └─────────────────────────────────────────────────┘       │
│                    │                                      │
│  ┌─────────────────────────────────────────────────┐       │
│  │                平台抽象层                          │       │
│  │  ┌─────────┐ ┌─────────┐ ┌─────────┐ ┌─────────┐│       │
│  │  │ DirectX 11│ │ DirectX 12│ │  资源加载 │ │ 命令缓冲 ││       │
│  │  └─────────┘ └─────────┘ └─────────┘ └─────────┘│       │
│  └─────────────────────────────────────────────────┘       │
│                                                             │
└─────────────────────────────────────────────────────────────┘
```

### 2.2 渲染管线流程

```
┌─────────────┐  ┌─────────────┐  ┌─────────────┐  ┌─────────────┐
│  场景遍历    │→│  可见性剔除  │→│  渲染队列    │→│  几何渲染   │
└─────────────┘  └─────────────┘  └─────────────┘  └─────────────┘
       │                │                │                │
       ▼                ▼                ▼                ▼
┌─────────────┐  ┌─────────────┐  ┌─────────────┐  ┌─────────────┐
│  G-Buffer   │  │  光照渲染   │  │  阴影渲染   │  │  后处理     │
│   填充      │  │  计算       │  │  生成       │  │  效果       │
└─────────────┘  └─────────────┘  └─────────────┘  └─────────────┘
                                                         │
                                                         ▼
                                                  ┌─────────────┐
                                                  │  帧缓冲输出  │
                                                  └─────────────┘
```

## 3. 核心组件详解

### 3.1 渲染设备管理器 (Render Device Manager)

**功能职责**:
- 管理图形设备和上下文
- 创建和管理渲染资源
- 处理渲染命令
- 管理交换链和显示

**关键结构**:
```c
// 渲染设备结构
typedef struct {
    // 设备信息
    uint32_t        device_type;     // 设备类型 (DX11/DX12)
    void*           native_device;   // 原生设备指针
    void*           immediate_context;// 立即上下文
    
    // 交换链
    void*           swap_chain;      // 交换链
    uint32_t        buffer_count;    // 缓冲区数量
    uint32_t        width;           // 宽度
    uint32_t        height;          // 高度
    texture_format_t format;         // 格式
    
    // 渲染目标
    render_target_t* render_targets; // 渲染目标数组
    uint32_t        rt_count;        // 渲染目标数量
    depth_stencil_t* depth_stencil;   // 深度模板
    
    // 命令队列 (DX12)
    void*           command_queue;   // 命令队列
    void*           command_allocator;// 命令分配器
    void*           command_list;    // 命令列表
} render_device_t;

// 渲染设备管理器
typedef struct {
    render_device_t* device;          // 主渲染设备
    adapter_info_t*  adapters;        // 适配器信息
    uint32_t        adapter_count;    // 适配器数量
    display_mode_t* display_modes;    // 显示模式
    uint32_t        mode_count;       // 模式数量
    
    // 功能支持
    bool            supports_dx12;    // 是否支持DX12
    bool            supports_raytracing;// 是否支持光线追踪
    uint32_t        max_texture_size; // 最大纹理尺寸
    uint32_t        max_anisotropy;   // 最大各向异性
    
    // 统计信息
    frame_stats_t   frame_stats;     // 帧统计
    memory_stats_t  memory_stats;    // 内存统计
} render_device_manager_t;
```

**特性支持**:
- 支持DirectX 11和DirectX 12
- 动态切换渲染API
- 多显示器支持
- 全屏和窗口模式

### 3.2 渲染管线管理器 (Render Pipeline Manager)

**功能职责**:
- 管理渲染管线状态
- 组织渲染流程
- 处理渲染队列
- 优化渲染顺序

**关键结构**:
```c
// 渲染管线配置
typedef struct {
    // 几何处理阶段
    pipeline_stage_t geometry_stage;  // 几何处理
    pipeline_stage_t shadow_stage;    // 阴影渲染
    pipeline_stage_t gbuffer_stage;   // G-Buffer填充
    
    // 光照处理阶段
    pipeline_stage_t lighting_stage; // 光照计算
    pipeline_stage_t reflection_stage;// 反射渲染
    
    // 后处理阶段
    pipeline_stage_t postprocess_stage;// 后处理
    pipeline_stage_t ui_stage;        // UI渲染
    
    // 管线状态
    blend_state_t   blend_state;      // 混合状态
    rasterizer_state_t raster_state;  // 光栅化状态
    depth_stencil_state_t depth_state;// 深度模板状态
} render_pipeline_config_t;

// 渲染队列项
typedef struct {
    uint64_t        sort_key;        // 排序键
    uint32_t        layer;           // 渲染层
    uint32_t        technique_id;    // 技术ID
    mesh_t*         mesh;            // 网格数据
    material_t*     material;        // 材质
    matrix4x4       world_matrix;    // 世界矩阵
    matrix4x4       view_proj_matrix;// 视图投影矩阵
    bounding_box_t  bbox;            // 包围盒
    float           distance;        // 距离
    uint32_t        flags;           // 标志位
} render_queue_item_t;

// 渲染管线管理器
typedef struct {
    render_pipeline_config_t config;      // 管线配置
    render_queue_item_t*   queue;         // 渲染队列
    uint32_t               queue_size;    // 队列大小
    uint32_t               queue_count;   // 队列项数量
    
    // 渲染目标
    gbuffer_t*             gbuffer;       // G-Buffer
    shadow_map_t*          shadow_maps;   // 阴影贴图
    render_target_t*       lighting_rt;   // 光照渲染目标
    
    // 渲染状态
    uint32_t               pass_mask;     // 渲染通道掩码
    bool                   wireframe;     // 线框模式
    bool                   debug_view;    // 调试视图
} render_pipeline_manager_t;
```

**渲染流程**:
1. **场景遍历**: 收集所有可渲染对象
2. **可见性剔除**: 移除不可见对象
3. **队列排序**: 按材质、深度等排序
4. **几何渲染**: 渲染几何信息到G-Buffer
5. **光照计算**: 计算场景光照
6. **阴影渲染**: 生成阴影贴图
7. **后处理**: 应用后处理效果
8. **UI渲染**: 渲染用户界面

### 3.3 材质系统 (Material System)

**功能职责**:
- 管理材质资源
- 处理材质参数
- 编译着色器
- 支持材质变体

**关键结构**:
```c
// 材质参数类型
typedef enum {
    PARAM_FLOAT,     // 浮点数
    PARAM_FLOAT2,    // 2D浮点向量
    PARAM_FLOAT3,    // 3D浮点向量
    PARAM_FLOAT4,    // 4D浮点向量
    PARAM_INT,       // 整数
    PARAM_INT2,      // 2D整数向量
    PARAM_INT3,      // 3D整数向量
    PARAM_INT4,      // 4D整数向量
    PARAM_BOOL,      // 布尔值
    PARAM_TEXTURE2D, // 2D纹理
    PARAM_TEXTURE3D, // 3D纹理
    PARAM_TEXTURECUBE,// 立方体贴图
    PARAM_SAMPLER    // 采样器
} material_param_type_t;

// 材质参数
typedef struct {
    char            name[64];        // 参数名称
    material_param_type_t type;     // 参数类型
    uint32_t        offset;          // 偏移量
    uint32_t        size;            // 大小
    uint32_t        flags;           // 标志位
    void*           default_value;   // 默认值
    void*           min_value;       // 最小值
    void*           max_value;       // 最大值
} material_param_t;

// 材质定义
typedef struct {
    char                name[128];     // 材质名称
    uint32_t            material_id;   // 材质ID
    shader_program_t*    shader;        // 着色器程序
    material_param_t*    parameters;    // 参数数组
    uint32_t            param_count;   // 参数数量
    texture_slot_t*      textures;      // 纹理槽位
    uint32_t            texture_count; // 纹理数量
    render_state_t       render_state;  // 渲染状态
    material_flags_t     flags;         // 材质标志
    
    // PBR参数
    float               base_color[4]; // 基础颜色
    float               metallic;       // 金属度
    float               roughness;      // 粗糙度
    float               ao;            // 环境光遮蔽
    float               emissive[4];   // 自发光
} material_t;

// 材质管理器
typedef struct {
    material_t*        materials;      // 材质数组
    uint32_t           material_count; // 材质数量
    shader_library_t*   shader_lib;     // 着色器库
    texture_manager_t*  texture_mgr;    // 纹理管理器
    
    // 材质实例
    material_instance_t* instances;    // 材质实例
    uint32_t           instance_count; // 实例数量
    
    // 材质缓存
    hash_table_t*      material_cache; // 材质哈希表
    hash_table_t*      shader_cache;   // 着色器缓存
} material_manager_t;
```

**PBR材质系统**:
- 基于物理的材质模型
- 支持金属度和粗糙度工作流
- 支持各向异性材质
- 支持次表面散射

### 3.4 光照系统 (Lighting System)

**功能职责**:
- 管理光源
- 计算光照
- 处理阴影
- 支持全局光照

**关键结构**:
```c
// 光源类型
typedef enum {
    LIGHT_DIRECTIONAL,    // 方向光
    LIGHT_POINT,          // 点光源
    LIGHT_SPOT,           // 聚光灯
    LIGHT_AREA,           // 面光源
    LIGHT_ENVIRONMENT     // 环境光
} light_type_t;

// 光源数据
typedef struct {
    light_type_t      type;            // 光源类型
    uint32_t          light_id;        // 光源ID
    transform_t       transform;       // 变换
    vector3           position;        // 位置
    vector3           direction;       // 方向
    vector4           color;           // 颜色和强度
    float             intensity;       // 强度
    float             range;           // 范围
    float             spot_angle;      // 聚光灯角度
    float             spot_falloff;    // 聚光灯衰减
    
    // 阴影参数
    bool              cast_shadow;     // 是否投射阴影
    uint32_t          shadow_map_size; // 阴影贴图大小
    float             shadow_bias;     // 阴影偏移
    float             shadow_slope_bias;// 阴影斜率偏移
    
    // 光照贴图
    bool              use_lightmap;    // 使用光照贴图
    texture_t*        lightmap;        // 光照贴图
    vector4           lightmap_scale_offset;// 光照贴图缩放偏移
} light_t;

// 光照系统
typedef struct {
    light_t*          lights;          // 光源数组
    uint32_t          light_count;     // 光源数量
    light_t*          directional_lights;// 方向光
    uint32_t          directional_count;// 方向光数量
    light_t*          point_lights;    // 点光源
    uint32_t          point_count;     // 点光源数量
    light_t*          spot_lights;     // 聚光灯
    uint32_t          spot_count;      // 聚光灯数量
    
    // 光照贴图
    lightmap_t*       lightmaps;       // 光照贴图数组
    uint32_t          lightmap_count;  // 光照贴图数量
    
    // 全局光照
    probe_t*          reflection_probes;// 反射探针
    uint32_t          probe_count;     // 探针数量
    texture_t*        irradiance_map;  // 辐照度贴图
    texture_t*        prefilter_map;   // 预过滤贴图
    texture_t*        brdf_lut;        // BRDF查找表
} lighting_system_t;
```

**光照技术**:
- 延迟光照
- 前向+渲染
- 级联阴影贴图（CSM）
- 体积光
- 屏幕空间反射（SSR）
- 屏幕空间环境光遮蔽（SSAO）

### 3.5 阴影系统 (Shadow System)

**功能职责**:
- 生成阴影贴图
- 管理级联阴影
- 处理软阴影
- 优化阴影性能

**关键结构**:
```c
// 阴影贴图配置
typedef struct {
    uint32_t        map_size;        // 贴图尺寸
    uint32_t        cascade_count;   // 级联数量
    float           cascade_distances[4];// 级联距离
    float           shadow_bias;     // 阴影偏移
    float           slope_bias;      // 斜率偏移
    bool            soft_shadows;    // 软阴影
    uint32_t        pcf_samples;     // PCF采样数
} shadow_config_t;

// 级联阴影
typedef struct {
    texture_t*      cascade_maps[4];  // 级联贴图
    matrix4x4       view_proj_matrices[4];// 视图投影矩阵
    float           split_distances[4];// 分割距离
    bounding_frustum_t frustums[4];  // 视锥体
    uint32_t        resolution;      // 分辨率
    float           stability_factor; // 稳定性因子
} cascade_shadow_t;

// 阴影系统
typedef struct {
    shadow_config_t config;          // 配置
    cascade_shadow_t cascades;       // 级联阴影
    texture_t*      shadow_atlas;    // 阴影图集
    uint32_t        atlas_size;      // 图集尺寸
    uint32_t        free_slots;      // 空闲槽位
    
    // 阴影缓存
    shadow_cache_t* shadow_cache;    // 阴影缓存
    uint32_t        cache_size;      // 缓存大小
    
    // 统计
    shadow_stats_t  stats;           // 统计信息
} shadow_system_t;
```

**阴影技术**:
- 级联阴影贴图（CSM）
- Percentage-Closer Filtering (PCF)
- Percentage-Closer Soft Shadows (PCSS)
- 阴影图集
- 阴影缓存

### 3.6 后处理系统 (Post-processing System)

**功能职责**:
- 应用后处理效果
- 管理效果链
- 处理HDR渲染
- 实现色调映射

**关键结构**:
```c
// 后处理效果类型
typedef enum {
    POST_TONEMAPPING,     // 色调映射
    POST_BLOOM,           // 辉光
    POST_MOTION_BLUR,     // 运动模糊
    POST_DEPTH_OF_FIELD,  // 景深
    POST_ANTIALIASING,    // 抗锯齿
    POST_COLOR_GRADING,   // 色彩分级
    POST_VIGNETTE,        // 晕影
    POST_FXAA,            // FXAA抗锯齿
    POST_TAA,             // TAA抗锯齿
    POST_COUNT
} post_effect_type_t;

// 后处理效果
typedef struct {
    post_effect_type_t type;           // 效果类型
    char            name[64];         // 效果名称
    bool            enabled;           // 是否启用
    shader_program_t* shader;          // 着色器程序
    render_target_t* input_rt;        // 输入渲染目标
    render_target_t* output_rt;       // 输出渲染目标
    
    // 效果参数
    void*           parameters;       // 参数指针
    uint32_t        param_count;      // 参数数量
    
    // 执行顺序
    uint32_t        order;            // 执行顺序
} post_effect_t;

// 后处理管理器
typedef struct {
    post_effect_t*  effects;          // 效果数组
    uint32_t        effect_count;     // 效果数量
    render_target_t* scene_rt;        // 场景渲染目标
    render_target_t* temp_rt[2];      // 临时渲染目标
    
    // HDR设置
    float           exposure;         // 曝光
    float           adaptation_speed; // 适应速度
    float           white_point;      // 白点
    
    // 色调映射
    tonemapper_t    tonemapper;       // 色调映射器
    color_grading_t color_grading;    // 色彩分级
} postprocess_manager_t;
```

**后处理效果**:
- HDR渲染和色调映射
- 辉光效果
- 运动模糊
- 景深效果
- 抗锯齿（FXAA、TAA）
- 色彩分级和校正

### 3.7 粒子系统 (Particle System)

**功能职责**:
- 管理粒子发射器
- 更新粒子状态
- 渲染粒子效果
- 优化粒子性能

**关键结构**:
```c
// 粒子数据
typedef struct {
    vector3         position;        // 位置
    vector3         velocity;        // 速度
    vector3         acceleration;    // 加速度
    vector4         color;           // 颜色
    float           size;            // 大小
    float           rotation;        // 旋转
    float           lifetime;        // 生命周期
    float           age;             // 当前年龄
    float           mass;            // 质量
} particle_t;

// 粒子发射器
typedef struct {
    uint32_t        emitter_id;      // 发射器ID
    transform_t     transform;       // 变换
    uint32_t        max_particles;   // 最大粒子数
    uint32_t        active_particles;// 活动粒子数
    particle_t*     particles;       // 粒子数组
    
    // 发射参数
    float           emission_rate;   // 发射速率
    float           particle_lifetime;// 粒子生命周期
    vector3         start_velocity;  // 初始速度
    vector3         velocity_random;  // 速度随机性
    vector4         start_color;     // 初始颜色
    vector4         end_color;       // 结束颜色
    float           start_size;      // 初始大小
    float           end_size;        // 结束大小
    
    // 渲染
    material_t*     material;        // 材质
    mesh_t*         mesh;            // 网格（用于网格粒子）
    bool            sort_particles;  // 是否排序
} particle_emitter_t;

// 粒子系统管理器
typedef struct {
    particle_emitter_t* emitters;     // 发射器数组
    uint32_t           emitter_count; // 发射器数量
    uint32_t           max_emitters;  // 最大发射器数
    
    // 粒子池
    particle_pool_t*  particle_pools; // 粒子池
    uint32_t           pool_count;     // 池数量
    
    // GPU模拟
    bool              gpu_simulation; // GPU模拟
    compute_shader_t*  update_shader;  // 更新着色器
    structured_buffer_t particle_buffer;// 粒子缓冲区
} particle_system_t;
```

**粒子特性**:
- CPU和GPU模拟
- 支持网格粒子
- 粒子排序（正确混合）
- 多种发射形状
- 纹理动画支持

## 4. 性能优化策略

### 4.1 渲染优化

#### 4.1.1 可见性剔除

```c
// 视锥剔除
typedef struct {
    plane_t         planes[6];       // 视锥体平面
    matrix4x4       view_proj;       // 视图投影矩阵
    bounding_frustum_t frustum;       // 视锥体
} frustum_culler_t;

// 遮挡剔除
typedef struct {
    depth_buffer_t*  depth_buffer;    // 深度缓冲区
    hiz_buffer_t*    hiz_buffer;      // 分层深度缓冲区
    occluder_t*     occluders;       // 遮挡体数组
    uint32_t        occluder_count;  // 遮挡体数量
} occlusion_culler_t;
```

**剔除技术**:
- 视锥剔除（Frustum Culling）
- 遮挡剔除（Occlusion Culling）
- 分层深度缓冲区（Hi-Z）
- 遮挡体生成

#### 4.1.2 批处理和实例化

```c
// 实例化渲染数据
typedef struct {
    mesh_t*         mesh;            // 网格
    material_t*     material;        // 材料
    matrix4x4*      instances;       // 实例矩阵数组
    uint32_t        instance_count;  // 实例数量
    instance_data_t* instance_data;   // 实例数据
    uint32_t        data_stride;     // 数据步长
} instanced_batch_t;

// 批处理管理器
typedef struct {
    instanced_batch_t* batches;      // 批次数组
    uint32_t        batch_count;     // 批次数量
    uint32_t        max_batches;     // 最大批次数
    
    // 实例化缓冲区
    vertex_buffer_t* instance_buffers;// 实例化顶点缓冲区
    uint32_t        buffer_count;    // 缓冲区数量
} batch_manager_t;
```

**批处理技术**:
- 静态批处理
- 动态批处理
- 实例化渲染
- GPU Driven渲染

### 4.2 内存优化

#### 4.2.1 资源管理

```c
// 纹理流式加载
typedef struct {
    texture_t*       texture;         // 纹理
    uint32_t        mip_levels;      // Mipmap级别
    uint32_t        loaded_mips;     // 已加载级别
    stream_priority_t priority;       // 流优先级
    float           last_used_time;  // 最后使用时间
} streaming_texture_t;

// 资源缓存
typedef struct {
    hash_table_t*    resource_cache; // 资源缓存
    lru_cache_t*     lru_cache;       // LRU缓存
    uint32_t         cache_size;      // 缓存大小
    uint32_t         used_memory;     // 已用内存
    uint32_t         memory_budget;   // 内存预算
} resource_cache_manager_t;
```

**内存优化技术**:
- 纹理流式加载
- 资源缓存和LRU淘汰
- 内存池管理
- 资源压缩

### 4.3 GPU优化

#### 4.3.1 多线程渲染

```c
// 渲染线程
typedef struct {
    thread_t*        thread;          // 线程句柄
    command_buffer_t* command_buffer;  // 命令缓冲区
    semaphore_t*     semaphore;       // 信号量
    bool             running;         // 运行状态
    render_task_t*   task_queue;      // 任务队列
    uint32_t         queue_size;      // 队列大小
} render_thread_t;

// 多线程渲染管理器
typedef struct {
    render_thread_t  render_threads[4];// 渲染线程数组
    uint32_t         thread_count;    // 线程数量
    task_scheduler_t* task_scheduler; // 任务调度器
    fence_t*         fences;          // 围栏数组
    uint32_t         fence_count;     // 围栏数量
} multithread_renderer_t;
```

**GPU优化技术**:
- 多线程命令生成
- 异步计算
- GPU Driven渲染管线
- 显存带宽优化

## 5. 调试和分析工具

### 5.1 渲染调试器

```c
// 渲染调试信息
typedef struct {
    bool            wireframe;       // 线框模式
    bool            show_bounds;     // 显示包围盒
    bool            show_normals;    // 显示法线
    bool            show_tangents;   // 显示切线
    debug_view_t    debug_view;      // 调试视图
    uint32_t        debug_mode;      // 调试模式
} render_debug_t;

// 性能分析器
typedef struct {
    frame_stats_t   frame_stats;     // 帧统计
    gpu_stats_t     gpu_stats;       // GPU统计
    draw_call_stats_t draw_stats;    // 绘制调用统计
    memory_stats_t  memory_stats;    // 内存统计
    
    // 性能计数器
    uint64_t        gpu_time;        // GPU时间
    uint64_t        cpu_time;        // CPU时间
    float           frame_time;      // 帧时间
    float           fps;             // 帧率
} render_profiler_t;
```

**调试功能**:
- 渲染状态可视化
- 性能分析
- 内存使用监控
- 着色器调试

### 5.2 编辑器集成

```c
// 材质编辑器接口
typedef struct {
    material_t*     material;        // 当前材质
    parameter_ui_t*  parameter_ui;    // 参数UI
    preview_window_t preview_window; // 预览窗口
    shader_editor_t  shader_editor;   // 着色器编辑器
} material_editor_t;

// 场景编辑器
typedef struct {
    scene_t*        scene;           // 场景
    selection_t*     selection;       // 选择
    transform_gizmo_t gizmo;          // 变换Gizmo
    grid_t          grid;            // 网格
} scene_editor_t;
```

## 6. 最佳实践

### 6.1 渲染优化建议

1. **减少绘制调用**
   - 使用批处理和实例化
   - 合理使用材质
   - 避免频繁状态切换

2. **优化内存使用**
   - 使用适当的纹理格式
   - 实现资源流式加载
   - 及时释放不需要的资源

3. **GPU效率**
   - 使用适当的分辨率
   - 优化着色器复杂度
   - 避免过度绘制

### 6.2 开发建议

1. **模块化设计**
   - 保持渲染组件独立
   - 使用清晰的接口
   - 支持热重载

2. **错误处理**
   - 验证所有资源
   - 提供有意义的错误信息
   - 实现恢复机制

3. **文档和注释**
   - 记录渲染管线
   - 说明着色器功能
   - 提供使用示例

## 7. 未来扩展

### 7.1 计划特性

- **光线追踪**: 支持实时光线追踪
- **神经渲染**: 使用AI增强渲染
- **云渲染**: 支持云端渲染
- **VR支持**: 虚拟现实渲染

### 7.2 性能目标

- **4K@60Hz**: 支持4K分辨率60FPS
- **RTX**: 光线追踪性能优化
- **DLSS**: 深度学习超级采样
- **多GPU**: 支持多GPU渲染

## 8. 总结

Mount & Blade II: Bannerlord的渲染系统是一个功能强大、性能优异的现代渲染引擎。通过延迟渲染、PBR材质、高级光照等技术，为游戏提供了出色的视觉效果。系统的模块化设计和优化策略确保了在大规模场景下的稳定性能。

### 主要特点

1. **先进的渲染技术**: 延迟渲染、PBR、实时光照
2. **高性能**: 多线程渲染、批处理、可见性剔除
3. **可扩展**: 模块化设计、插件系统
4. **工具支持**: 丰富的调试和分析工具

这个渲染系统不仅满足了当前游戏的需求，也为未来的技术发展奠定了坚实的基础。

## 附录

### A. 着色器示例

#### G-Buffer顶点着色器
```hlsl
// G-Buffer Vertex Shader
struct VS_INPUT {
    float3 position : POSITION;
    float3 normal   : NORMAL;
    float3 tangent  : TANGENT;
    float2 texcoord : TEXCOORD;
};

struct VS_OUTPUT {
    float4 position     : SV_POSITION;
    float3 world_pos    : WORLD_POS;
    float3 normal       : NORMAL;
    float3 tangent      : TANGENT;
    float3 bitangent    : BITANGENT;
    float2 texcoord     : TEXCOORD;
};

VS_OUTPUT main(VS_INPUT input) {
    VS_OUTPUT output;
    
    // Transform to world space
    output.world_pos = mul(float4(input.position, 1.0), WorldMatrix).xyz;
    output.position = mul(float4(input.position, 1.0), ViewProjMatrix);
    
    // Transform normals
    output.normal = normalize(mul(input.normal, (float3x3)WorldMatrix));
    output.tangent = normalize(mul(input.tangent, (float3x3)WorldMatrix));
    output.bitangent = cross(output.normal, output.tangent);
    
    output.texcoord = input.texcoord;
    
    return output;
}
```

#### PBR像素着色器
```hlsl
// PBR Pixel Shader
struct PS_INPUT {
    float4 position     : SV_POSITION;
    float3 world_pos    : WORLD_POS;
    float3 normal       : NORMAL;
    float3 tangent      : TANGENT;
    float3 bitangent    : BITANGENT;
    float2 texcoord     : TEXCOORD;
};

struct GBUFFER_OUTPUT {
    float4 albedo    : SV_TARGET0;
    float4 normal    : SV_TARGET1;
    float4 material : SV_TARGET2;
    float4 emission  : SV_TARGET3;
};

GBUFFER_OUTPUT main(PS_INPUT input) {
    GBUFFER_OUTPUT output;
    
    // Sample textures
    float4 albedo = SampleAlbedo(input.texcoord);
    float3 normal = SampleNormal(input.texcoord, input.normal, input.tangent, input.bitangent);
    float4 material = SampleMaterial(input.texcoord);
    
    // Output to G-Buffer
    output.albedo = albedo;
    output.normal = float4(normalize(normal) * 0.5 + 0.5, 1.0);
    output.material = material; // metallic, roughness, ao, unused
    output.emission = SampleEmission(input.texcoord);
    
    return output;
}
```

### B. 性能统计示例

```c
// 帧统计结构
typedef struct {
    uint32_t draw_calls;              // 绘制调用次数
    uint32_t triangles;              // 三角形数量
    uint32_t instances;              // 实例数量
    uint32_t batch_count;            // 批次数量
    
    // GPU统计
    float gpu_time_ms;               // GPU时间(毫秒)
    float vertex_processing_time;    // 顶点处理时间
    float pixel_processing_time;     // 像素处理时间
    
    // 内存统计
    uint32_t texture_memory_mb;      // 纹理内存(MB)
    uint32_t buffer_memory_mb;       // 缓冲区内存(MB)
    uint32_t total_memory_mb;        // 总内存(MB)
    
    // 带宽统计
    float vertex_bandwidth_mb_s;     // 顶点带宽(MB/s)
    float pixel_bandwidth_mb_s;      // 像素带宽(MB/s)
} frame_stats_t;
```

### C. 参考资源

1. 《Real-Time Rendering》- Tomas Akenine-Möller
2. 《Physically Based Rendering》- Matt Pharr
3. 《GPU Gems》系列
4. DirectX 12 Documentation
5. Vulkan Specification