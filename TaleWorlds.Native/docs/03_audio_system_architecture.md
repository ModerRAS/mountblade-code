# Mount & Blade II: Bannerlord 音频系统架构

## 文档信息

- **文档版本**: 1.0
- **创建日期**: 2025-08-28
- **最后更新**: 2025-08-28
- **文档类型**: 技术架构文档
- **适用对象**: 音频程序员、引擎开发者、音效设计师

## 1. 概述

Mount & Blade II: Bannerlord 的音频系统是一个功能强大、高性能的3D音频引擎，专为大型开放世界游戏设计。系统支持多种音频格式、3D空间音效、实时音频处理和流式播放，为玩家提供沉浸式的音频体验。

### 1.1 设计目标

- **沉浸式体验**: 提供逼真的3D空间音效
- **高性能**: 支持大量并发音效
- **灵活性**: 支持多种音频格式和处理效果
- **可扩展**: 易于添加新的音频功能
- **跨平台**: 支持多种音频API和硬件

### 1.2 核心特性

- **3D音频**: 完整的3D空间音效系统
- **流式播放**: 支持大文件的流式加载
- **音频效果**: 实时音频效果处理
- **多格式支持**: OGG、MP3、WAV、FLAC等
- **硬件加速**: 充分利用音频硬件性能
- **动态混音**: 智能混音和音量控制

## 2. 系统架构

### 2.1 整体架构

```
┌─────────────────────────────────────────────────────────────┐
│                     音频系统架构                              │
├─────────────────────────────────────────────────────────────┤
│                                                             │
│  ┌─────────────────────────────────────────────────┐       │
│  │                应用层接口                          │       │
│  │  ┌─────────┐ ┌─────────┐ ┌─────────┐ ┌─────────┐│       │
│  │  │ 音频请求 │ │ 音频事件 │ │ 音频配置 │ │ 状态查询 ││       │
│  │  └─────────┘ └─────────┘ └─────────┘ └─────────┘│       │
│  └─────────────────────────────────────────────────┘       │
│                    │                                      │
│  ┌─────────────────────────────────────────────────┐       │
│  │                音频引擎层                          │       │
│  │  ┌─────────┐ ┌─────────┐ ┌─────────┐ ┌─────────┐│       │
│  │  │ 音源管理 │ │ 监听器   │ │ 混音器   │ │ 效果器  ││       │
│  │  └─────────┘ └─────────┘ └─────────┘ └─────────┘│       │
│  └─────────────────────────────────────────────────┘       │
│                    │                                      │
│  ┌─────────────────────────────────────────────────┐       │
│  │                资源管理层                          │       │
│  │  ┌─────────┐ ┌─────────┐ ┌─────────┐ ┌─────────┐│       │
│  │  │ 缓冲区管理│ │ 流管理  │ │ 缓存管理 │ │ 内存管理 ││       │
│  │  └─────────┘ └─────────┘ └─────────┘ └─────────┘│       │
│  └─────────────────────────────────────────────────┘       │
│                    │                                      │
│  ┌─────────────────────────────────────────────────┐       │
│  │                平台抽象层                          │       │
│  │  ┌─────────┐ ┌─────────┐ ┌─────────┐ ┌─────────┐│       │
│  │  │ OpenAL  │ │ XAudio2 │ │ DirectSound│ │ WASAPI  ││       │
│  │  └─────────┘ └─────────┘ └─────────┘ └─────────┘│       │
│  └─────────────────────────────────────────────────┘       │
│                                                             │
└─────────────────────────────────────────────────────────────┘
```

### 2.2 音频处理流程

```
┌─────────────┐  ┌─────────────┐  ┌─────────────┐  ┌─────────────┐
│  音频请求    │→│  音频加载   │→│  解码处理   │→│  音频播放   │
└─────────────┘  └─────────────┘  └─────────────┘  └─────────────┘
       │                │                │                │
       ▼                ▼                ▼                ▼
┌─────────────┐  ┌─────────────┐  ┌─────────────┐  ┌─────────────┐
│  3D定位     │  │  空间化处理  │  │  效果处理   │  │  混音输出   │
│  计算       │  │ (HRTF)      │  │ (混响等)    │  │  到设备     │
└─────────────┘  └─────────────┘  └─────────────┘  └─────────────┘
```

## 3. 核心组件详解

### 3.1 音频引擎核心 (Audio Engine Core)

**功能职责**:
- 管理音频设备和上下文
- 处理音频播放和停止
- 控制3D音频参数
- 管理音频优先级

**关键结构**:
```c
// 音频设备信息
typedef struct {
    char            device_name[128]; // 设备名称
    uint32_t        device_id;       // 设备ID
    uint32_t        sample_rate;     // 采样率
    uint16_t        channels;        // 通道数
    uint16_t        bits_per_sample; // 采样位数
    uint32_t        buffer_size;     // 缓冲区大小
    audio_format_t  format;          // 音频格式
    bool            supports_3d;     // 支持3D音频
    bool            supports_efx;    // 支持音效
} audio_device_info_t;

// 音频引擎配置
typedef struct {
    uint32_t        max_sources;     // 最大音源数
    uint32_t        max_buffers;     // 最大缓冲区数
    uint32_t        max_streams;     // 最大流数
    uint32_t        cache_size_mb;   // 缓存大小(MB)
    float           master_volume;   // 主音量
    bool            enable_3d;       // 启用3D音频
    bool            enable_efx;      // 启用音效
    doppler_factor_t doppler_factor; // 多普勒因子
    distance_model_t distance_model; // 距离模型
} audio_engine_config_t;

// 音频引擎核心
typedef struct {
    // 设备和上下文
    void*                   device;         // 音频设备
    void*                   context;        // 音频上下文
    audio_device_info_t      device_info;    // 设备信息
    audio_engine_config_t    config;         // 引擎配置
    
    // 音源管理
    audio_source_t*          sources;        // 音源数组
    uint32_t                source_count;   // 音源数量
    uint32_t                active_sources; // 活动音源数
    
    // 监听器
    audio_listener_t         listener;       // 3D监听器
    
    // 混音器
    audio_mixer_t*           mixer;          // 混音器
    
    // 音效系统
    audio_effect_system_t*    effect_system;  // 音效系统
    
    // 统计信息
    audio_stats_t            stats;          // 统计信息
} audio_engine_t;
```

**特性支持**:
- 多音频后端支持（OpenAL、XAudio2等）
- 动态设备切换
- 采样率转换
- 低延迟音频处理

### 3.2 音源管理 (Audio Source Management)

**功能职责**:
- 管理音频播放源
- 控制3D音频属性
- 处理音源状态
- 优化音源分配

**关键结构**:
```c
// 音源状态
typedef enum {
    SOURCE_STATE_INITIAL,    // 初始状态
    SOURCE_STATE_PLAYING,     // 播放中
    SOURCE_STATE_PAUSED,      // 已暂停
    SOURCE_STATE_STOPPED,     // 已停止
    SOURCE_STATE_STREAMING    // 流式播放
} audio_source_state_t;

// 3D音源属性
typedef struct {
    vector3         position;        // 3D位置
    vector3         velocity;        // 速度
    vector3         direction;       // 方向
    float           inner_angle;     // 内锥角
    float           outer_angle;     // 外锥角
    float           outer_gain;      // 外锥增益
    float           reference_distance; // 参考距离
    float           max_distance;    // 最大距离
    float           rolloff_factor;  // 衰减因子
    bool            loop;            // 循环播放
} audio_source_3d_t;

// 音频源
typedef struct {
    uint32_t                source_id;       // 音源ID
    audio_source_state_t    state;           // 状态
    audio_buffer_t*         buffer;          // 关联缓冲区
    audio_stream_t*         stream;          // 关联流
    
    // 基本属性
    float                   gain;            // 增益(音量)
    float                   pitch;           // 音调
    bool                    looping;         // 循环
    float                   play_position;   // 播放位置
    
    // 3D属性
    audio_source_3d_t       spatial;         // 3D属性
    bool                    is_3d;           // 是否为3D音源
    
    // 优先级
    audio_priority_t        priority;        // 优先级
    float                   importance;      // 重要性
    
    // 效果
    audio_effect_slot_t*    effect_slots;   // 效果槽位
    uint32_t                effect_count;   // 效果数量
    
    // 用户数据
    void*                   user_data;       // 用户数据
    void (*on_complete)(struct audio_source*); // 完成回调
} audio_source_t;

// 音源管理器
typedef struct {
    audio_source_t*         sources;        // 音源池
    uint32_t                pool_size;       // 池大小
    uint32_t                free_count;      // 空闲数量
    uint32_t                active_count;    // 活动数量
    
    // 优先级队列
    priority_queue_t*       priority_queue; // 优先级队列
    
    // 分配策略
    allocation_strategy_t   strategy;       // 分配策略
} audio_source_manager_t;
```

**音源特性**:
- 支持2D和3D音频
- 动态优先级管理
- 音源池复用
- 自动音量衰减

### 3.3 音频缓冲区管理 (Audio Buffer Management)

**功能职责**:
- 管理音频数据缓冲区
- 处理音频格式转换
- 支持多格式音频
- 优化内存使用

**关键结构**:
```c
// 音频格式
typedef enum {
    AUDIO_FORMAT_MONO8,       // 8位单声道
    AUDIO_FORMAT_MONO16,      // 16位单声道
    AUDIO_FORMAT_STEREO8,     // 8位立体声
    AUDIO_FORMAT_STEREO16,    // 16位立体声
    AUDIO_FORMAT_MONO_FLOAT32, // 32位浮点单声道
    AUDIO_FORMAT_STEREO_FLOAT32// 32位浮点立体声
} audio_format_t;

// 音频缓冲区
typedef struct {
    uint32_t        buffer_id;       // 缓冲区ID
    uint32_t        size;            // 数据大小
    uint32_t        frequency;       // 采样率
    audio_format_t  format;          // 格式
    uint16_t        channels;        // 通道数
    uint16_t        bits_per_sample; // 采样位数
    
    // 数据
    void*           data;            // 音频数据
    uint32_t        data_size;       // 实际数据大小
    
    // 压缩信息
    bool            compressed;      // 是否压缩
    compression_t    compression;     // 压缩格式
    uint32_t        uncompressed_size;// 解压后大小
    
    // 缓存信息
    uint32_t        ref_count;       // 引用计数
    uint64_t        last_access;     // 最后访问时间
    cache_priority_t cache_priority; // 缓存优先级
} audio_buffer_t;

// 缓冲区管理器
typedef struct {
    audio_buffer_t* buffers;         // 缓冲区数组
    uint32_t        buffer_count;    // 缓冲区数量
    uint32_t        max_buffers;     // 最大缓冲区数
    
    // 内存池
    memory_pool_t*   memory_pool;    // 内存池
    uint32_t        total_memory;    // 总内存
    uint32_t        used_memory;     // 已用内存
    
    // 格式转换器
    format_converter_t* converters;  // 格式转换器数组
    uint32_t        converter_count; // 转换器数量
    
    // 缓存策略
    cache_policy_t   cache_policy;   // 缓存策略
} audio_buffer_manager_t;
```

**缓冲区特性**:
- 支持多种音频格式
- 自动格式转换
- 智能缓存管理
- 内存池优化

### 3.4 音频流系统 (Audio Streaming System)

**功能职责**:
- 处理大文件的流式播放
- 管理流缓冲区
- 控制流播放状态
- 优化流性能

**关键结构**:
```c
// 流配置
typedef struct {
    uint32_t        buffer_size;     // 缓冲区大小
    uint32_t        buffer_count;    // 缓冲区数量
    uint32_t        pre_buffer_count;// 预缓冲数量
    float           stream_threshold; // 流阈值
    bool            loop_stream;     // 循环流
    stream_priority_t priority;      // 流优先级
} stream_config_t;

// 音频流
typedef struct {
    uint32_t        stream_id;       // 流ID
    stream_state_t  state;           // 流状态
    stream_config_t config;          // 流配置
    
    // 文件信息
    file_handle_t   file_handle;     // 文件句柄
    uint64_t        file_size;       // 文件大小
    uint64_t        file_pos;        // 文件位置
    
    // 音频信息
    audio_info_t    audio_info;      // 音频信息
    decoder_t*      decoder;         // 解码器
    
    // 缓冲区
    audio_buffer_t* buffers;        // 缓冲区数组
    uint32_t        buffer_count;    // 缓冲区数量
    ring_buffer_t   data_buffer;     // 数据环缓冲区
    
    // 播放控制
    float           play_position;   // 播放位置
    float           duration;        // 总时长
    bool            eof;             // 文件结束
    
    // 线程
    thread_t*       stream_thread;   // 流线程
    mutex_t         stream_mutex;    // 流互斥锁
    semaphore_t     data_semaphore;  // 数据信号量
} audio_stream_t;

// 流管理器
typedef struct {
    audio_stream_t* streams;         // 流数组
    uint32_t        stream_count;    // 流数量
    uint32_t        max_streams;     // 最大流数
    
    // 线程池
    thread_pool_t*  thread_pool;     // 线程池
    uint32_t        thread_count;    // 线程数量
    
    // 统计
    stream_stats_t  stats;           // 流统计
} audio_stream_manager_t;
```

**流特性**:
- 多线程流处理
- 自适应缓冲
- 智能预读取
- 低延迟播放

### 3.5 3D音频系统 (3D Audio System)

**功能职责**:
- 实现3D空间音效
- 处理HRTF
- 计算音频衰减
- 支持环境音效

**关键结构**:
```c
// 监听器
typedef struct {
    vector3         position;        // 位置
    vector3         velocity;        // 速度
    vector3         forward;         // 前向向量
    vector3         up;              // 上向量
    float           gain;            // 增益
    
    // HRTF设置
    bool            hrtf_enabled;    // 启用HRTF
    hrtf_dataset_t* hrtf_dataset;    // HRTF数据集
    head_model_t    head_model;      // 头部模型
} audio_listener_t;

// 距离模型
typedef enum {
    DISTANCE_MODEL_INVERSE,     // 反比模型
    DISTANCE_MODEL_INVERSE_CLAMPED,// 反比钳制模型
    DISTANCE_MODEL_LINEAR,      // 线性模型
    DISTANCE_MODEL_LINEAR_CLAMPED,// 线性钳制模型
    DISTANCE_MODEL_EXPONENT,    // 指数模型
    DISTANCE_MODEL_EXPONENT_CLAMPED// 指数钳制模型
} distance_model_t;

// 3D音频处理器
typedef struct {
    audio_listener_t listener;       // 监听器
    distance_model_t distance_model; // 距离模型
    float           doppler_factor; // 多普勒因子
    float           speed_of_sound; // 声速
    
    // HRTF处理器
    hrtf_processor_t* hrtf_processor;// HRTF处理器
    
    // 环境效果
    reverb_effect_t* environment;   // 环境混响
    occlusion_t*   occlusion;      // 遮挡处理
    
    // 音源组
    source_group_t* source_groups;  // 音源组
    uint32_t        group_count;    // 组数量
} audio_3d_processor_t;
```

**3D音频特性**:
- HRTF支持
- 多普勒效应
- 遮挡和衍射
- 环境混响

### 3.6 音效系统 (Audio Effect System)

**功能职责**:
- 实现实时音频效果
- 管理效果链
- 支持自定义效果
- 优化效果性能

**关键结构**:
```c
// 效果类型
typedef enum {
    EFFECT_TYPE_REVERB,      // 混响
    EFFECT_TYPE_CHORUS,      // 合唱
    EFFECT_TYPE_FLANGER,     // 镶边
    EFFECT_TYPE_DISTORTION,  // 失真
    EFFECT_TYPE_ECHO,        // 回声
    EFFECT_TYPE_EQUALIZER,   // 均衡器
    EFFECT_TYPE_COMPRESSOR,  // 压缩器
    EFFECT_TYPE_FILTER,      // 滤波器
    EFFECT_TYPE_PITCH_SHIFT, // 变调
    EFFECT_TYPE_CUSTOM       // 自定义效果
} effect_type_t;

// 效果参数
typedef struct {
    effect_type_t   type;           // 效果类型
    char            name[64];       // 效果名称
    void*           parameters;     // 参数指针
    uint32_t        param_count;    // 参数数量
    bool            enabled;        // 是否启用
    float           wet_level;      // 湿音量
    float           dry_level;      // 干音量
    float           feedback;       // 反馈
} effect_params_t;

// 效果槽位
typedef struct {
    uint32_t        slot_id;        // 槽位ID
    effect_t*       effect;         // 效果
    effect_params_t params;         // 效果参数
    bool            active;         // 活动状态
    effect_slot_t*  next_slot;      // 下一个槽位
} effect_slot_t;

// 效果系统
typedef struct {
    effect_slot_t*  effect_slots;    // 效果槽位数组
    uint32_t        slot_count;      // 槽位数量
    uint32_t        max_slots;       // 最大槽数
    
    // 效果工厂
    effect_factory_t* effect_factory;// 效果工厂
    hash_table_t*    effect_registry;// 效果注册表
    
    // 全局效果
    global_effects_t global_effects; // 全局效果
    
    // 处理器
    effect_processor_t* processor;  // 效果处理器
} audio_effect_system_t;
```

**效果特性**:
- 实时效果处理
- 效果链支持
- 参数自动化
- GPU加速处理

## 4. 性能优化策略

### 4.1 内存优化

#### 4.1.1 音频缓存

```c
// 缓存策略
typedef enum {
    CACHE_POLICY_LRU,        // 最近最少使用
    CACHE_POLICY_PRIORITY,   // 优先级策略
    CACHE_POLICY_FREQUENCY,  // 频率策略
    CACHE_POLICY_SIZE        // 大小策略
} cache_policy_t;

// 缓存项
typedef struct {
    uint32_t        item_id;         // 项ID
    void*           data;            // 数据指针
    uint32_t        size;            // 数据大小
    cache_priority_t priority;       // 优先级
    uint64_t        last_access;     // 最后访问
    uint32_t        access_count;    // 访问次数
} cache_item_t;

// 音频缓存管理器
typedef struct {
    cache_item_t*   items;           // 缓存项数组
    uint32_t        item_count;      // 项数量
    uint32_t        max_items;       // 最大项数
    uint32_t        max_memory;      // 最大内存
    
    // LRU链表
    list_t*         lru_list;        // LRU链表
    
    // 哈希表
    hash_table_t*   hash_table;      // 哈希表
    
    // 统计
    cache_stats_t   stats;           // 缓存统计
} audio_cache_manager_t;
```

**缓存优化技术**:
- LRU缓存策略
- 优先级缓存
- 预加载策略
- 内存压缩

### 4.2 CPU优化

#### 4.2.1 多线程处理

```c
// 音频任务
typedef struct {
    task_type_t     type;            // 任务类型
    void*           data;            // 任务数据
    uint32_t        data_size;       // 数据大小
    task_priority_t priority;        // 任务优先级
    void (*callback)(void*);         // 回调函数
} audio_task_t;

// 任务队列
typedef struct {
    audio_task_t*   tasks;           // 任务数组
    uint32_t        queue_size;      // 队列大小
    uint32_t        head;            // 队头
    uint32_t        tail;            // 队尾
    mutex_t         queue_mutex;     // 队列互斥锁
    semaphore_t     task_semaphore;  // 任务信号量
} audio_task_queue_t;

// 音频线程池
typedef struct {
    thread_t*       threads;         // 线程数组
    uint32_t        thread_count;    // 线程数量
    audio_task_queue_t task_queue;    // 任务队列
    bool            running;         // 运行状态
    
    // 工作窃取
    work_stealing_t work_stealing;   // 工作窃取
} audio_thread_pool_t;
```

**CPU优化技术**:
- 多线程解码
- 任务并行处理
- 工作窃取算法
- 锁优化

### 4.3 播放优化

#### 4.3.1 音源虚拟化

```c
// 虚拟音源
typedef struct {
    audio_source_t* real_source;     // 真实音源
    uint32_t        virtual_id;      // 虚拟ID
    float           virtual_gain;    // 虚拟增益
    float           real_gain;       // 真实增益
    vector3         virtual_position;// 虚拟位置
    vector3         real_position;   // 真实位置
    bool            is_virtual;      // 是否虚拟
} virtual_source_t;

// 虚拟化管理器
typedef struct {
    virtual_source_t* virtual_sources;// 虚拟音源数组
    uint32_t        virtual_count;   // 虚拟数量
    uint32_t        max_virtual;     // 最大虚拟数
    
    // 虚拟化策略
    virtualization_strategy_t strategy;// 虚拟化策略
    float           virtual_threshold;// 虚拟化阈值
    float           activation_threshold;// 激活阈值
    
    // 淡入淡出
    fade_manager_t  fade_manager;    // 淡入淡出管理器
} virtualization_manager_t;
```

**播放优化技术**:
- 音源虚拟化
- 优先级管理
- 淡入淡出
- 动态采样率

## 5. 工具和调试

### 5.1 音频调试器

```c
// 调试信息
typedef struct {
    bool            enabled;         // 是否启用
    debug_level_t   level;           // 调试级别
    log_callback_t  log_callback;    // 日志回调
    
    // 可视化
    visualization_t visualization;   // 可视化设置
    spectrum_analyzer_t spectrum;    // 频谱分析器
    waveform_display_t waveform;     // 波形显示
    
    // 性能监控
    performance_monitor_t perf_monitor;// 性能监控
} audio_debugger_t;

// 分析工具
typedef struct {
    // 音频分析
    spectrum_analyzer_t spectrum;    // 频谱分析
    phase_analyzer_t  phase;         // 相位分析
    peak_meter_t      peak_meter;    // 峰值表
    
    // 实时监控
    real_time_monitor_t rt_monitor;  // 实时监控
    alert_system_t    alert_system;   // 告警系统
} audio_analyzer_t;
```

**调试功能**:
- 实时音频可视化
- 性能分析
- 内存使用监控
- 错误诊断

### 5.2 音频编辑器集成

```c
// 编辑器接口
typedef struct {
    // 资源浏览器
    asset_browser_t asset_browser;   // 资源浏览器
    
    // 音频编辑器
    waveform_editor_t waveform_editor;// 波形编辑器
    effect_editor_t  effect_editor;  // 效果编辑器
    mixer_editor_t   mixer_editor;   // 混音器编辑器
    
    // 预览系统
    preview_system_t preview_system;  // 预览系统
} audio_editor_interface_t;
```

## 6. 最佳实践

### 6.1 音频设计建议

1. **资源管理**
   - 使用适当的音频格式
   - 实现音频流式加载
   - 优化音频质量与大小

2. **3D音频**
   - 合理设置音频范围
   - 使用适当的衰减模型
   - 考虑环境遮挡

3. **性能优化**
   - 限制并发音源数量
   - 使用音源虚拟化
   - 实现智能缓存

### 6.2 开发建议

1. **代码结构**
   - 保持模块化设计
   - 使用清晰的接口
   - 实现错误处理

2. **测试策略**
   - 进行压力测试
   - 测试各种音频格式
   - 验证3D定位准确性

## 7. 故障排除

### 7.1 常见问题

1. **音频延迟**
   - 检查缓冲区大小
   - 优化线程调度
   - 减少处理开销

2. **音频卡顿**
   - 检查CPU使用率
   - 优化解码性能
   - 调整缓存策略

3. **3D定位不准**
   - 验证监听器设置
   - 检查音源位置
   - 调整距离模型

### 7.2 诊断工具

- 性能分析器
- 内存分析器
- 网络分析器（多人游戏）

## 8. 总结

Mount & Blade II: Bannerlord的音频系统是一个功能全面、性能优异的3D音频引擎。通过先进的空间音效技术、高效的流处理和智能的资源管理，为游戏提供了沉浸式的音频体验。

### 主要特点

1. **3D空间音效**: 完整的HRTF支持和空间化处理
2. **高性能**: 多线程处理、音源虚拟化、智能缓存
3. **灵活性**: 支持多种格式和效果
4. **可扩展**: 模块化设计，易于扩展

这个音频系统成功地为大型开放世界游戏提供了高质量的音频支持，确保了在各种场景下的稳定性能和优秀体验。

## 附录

### A. 音频格式支持

| 格式 | 编码 | 压缩 | 用途 |
|------|------|------|------|
| WAV  | PCM  | 无   | 音效、短音频 |
| OGG  | Vorbis | 有   | 音乐、长音频 |
| MP3  | MPEG | 有   | 音乐、语音 |
| FLAC | 无损 | 有   | 高质量音频 |

### B. HRTF配置示例

```c
// HRTF数据集配置
typedef struct {
    uint32_t        subject_id;      // 受试者ID
    uint32_t        elevation_count; // 仰角数量
    uint32_t        azimuth_count;   // 方位角数量
    uint32_t        sample_rate;     // 采样率
    uint32_t        filter_length;   // 滤波器长度
    float*          hrtf_data;       // HRTF数据
    uint64_t        data_size;       // 数据大小
} hrtf_dataset_t;
```

### C. 音效参数示例

```c
// 混响效果参数
typedef struct {
    float           density;         // 密度
    float           diffusion;       // 扩散
    float           gain;            // 增益
    float           gain_hf;         // 高频增益
    float           decay_time;      // 衰减时间
    float           decay_hf_ratio;  // 高频衰减比
    float           reflections_gain;// 反射增益
    float           reflections_delay;// 反射延迟
    float           late_reverb_gain;// 晚期混响增益
    float           late_reverb_delay;// 晚期混响延迟
} reverb_params_t;
```

### D. 参考资源

1. OpenAL Programming Guide
2. XAudio2 Documentation
3. 《Game Audio Programming》 - Guy Somberg
4. 《The Audio Programming Book》 - Richard Boulanger