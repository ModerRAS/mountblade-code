/**
 * @file 00_data_definitions.h
 * @brief TaleWorlds引擎数据定义和系统常量头文件
 * 
 * 本文件包含Mount & Blade II: Bannerlord引擎的核心数据定义、系统常量
 * 和全局变量声明。这些定义涵盖了系统初始化、内存管理、线程同步、
 * 资源管理等核心功能的底层实现。
 * 
 * 主要内容包括：
 * - 系统全局变量和常量定义
 * - 内存管理相关的数据结构
 * - 线程同步机制的定义
 * - 系统状态和控制变量
 * - 资源管理相关的数据定义
 * - 错误处理和异常控制
 * 
 * @author Claude Code
 * @date 2025-08-28
 * @version 1.0
 */

#ifndef DATA_DEFINITIONS_H
#define DATA_DEFINITIONS_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

/*=============================================================================
 * 标准类型别名定义
=============================================================================*/

/** 
 * @defgroup StandardTypes 标准类型别名
 * @brief 将undefined类型替换为标准C类型
 * @{
 */

/** 8位无符号整数 - 原 undefined1 */
typedef uint8_t uint8;

/** 16位无符号整数 - 原 undefined2 */
typedef uint16_t uint16;

/** 32位无符号整数 - 原 undefined4 */
typedef uint32_t uint32;

/** 64位无符号整数 - 原 undefined8 */
typedef uint64_t uint64;

/** 通用指针类型 - 原 undefined* */
typedef void* void_ptr;

/** 函数指针类型 */
typedef void* (*function_ptr)();

/** 字节类型 */
typedef uint8_t byte;

/** 字符类型 */
typedef char char_t;

/** 布尔类型 */
typedef bool bool_t;

/** 句柄类型 */
typedef uint64_t handle_t;

/** 状态码类型 */
typedef int32_t status_t;

/** 错误码类型 */
typedef int32_t error_t;

/** 大小类型 */
typedef size_t size_t;

/** 偏移量类型 */
typedef ptrdiff_t offset_t;

/** @} */

/*=============================================================================
 * 系统常量定义
 *=============================================================================*/

/** 
 * @defgroup SystemConstants 系统常量定义
 * @brief 系统核心模块使用的常量定义
 * @{
 */

/** 系统内存地址常量 */
#define SYSTEM_BASE_ADDRESS            0x18000000    /**< 系统基地址 */
#define SYSTEM_DATA_SEGMENT            0x18090000    /**< 数据段地址 */
#define SYSTEM_CODE_SEGMENT            0x18000000    /**< 代码段地址 */

/** 系统互斥锁地址 */
#define SYSTEM_MUTEX_ADDRESS          0x180c95528   /**< 主系统互斥锁地址 */
#define SYSTEM_MUTEX_SIZE             0x100         /**< 互斥锁大小 */

/** 系统条件变量地址 */
#define SYSTEM_CONDITION_ADDRESS       0x180c910a8   /**< 条件变量地址 */
#define SYSTEM_CONDITION_SIZE          0x100         /**< 条件变量大小 */

/** 系统数据缓冲区大小 */
#define SYSTEM_DATA_BUFFER_SIZE        0xa60         /**< 数据缓冲区大小 */
#define SYSTEM_STACK_SIZE             0x1000        /**< 栈大小 */
#define SYSTEM_HEAP_SIZE              0x10000       /**< 堆大小 */

/** 系统最大对象数量 */
#define SYSTEM_MAX_OBJECTS            0x1000        /**< 最大对象数 */
#define SYSTEM_MAX_THREADS            0x100         /**< 最大线程数 */

/** 系统对齐常量 */
#define SYSTEM_MEMORY_ALIGNMENT        0x8           /**< 内存对齐 */
#define SYSTEM_CACHE_LINE_SIZE         0x40          /**< 缓存行大小 */

/** @} */

/*=============================================================================
 * 系统全局变量定义
 *=============================================================================*/

/** 
 * @defgroup SystemGlobals 系统全局变量
 * @brief 系统核心功能使用的全局变量
 * @{
 */

/** 系统状态变量 */
extern uint64_t g_system_state;                      /**< 系统状态标志 */
extern uint64_t g_system_flags;                      /**< 系统标志位 */
extern uint64_t g_system_error_code;                 /**< 系统错误代码 */

/** 内存管理变量 */
extern uint64_t g_memory_pool_base;                  /**< 内存池基地址 */
extern uint64_t g_memory_pool_size;                  /**< 内存池大小 */
extern uint64_t g_memory_allocated;                  /**< 已分配内存大小 */
extern uint64_t g_memory_free_count;                 /**< 空闲内存块数量 */

/** 线程同步变量 */
extern uint64_t g_thread_count;                      /**< 线程数量 */
extern uint64_t g_mutex_count;                      /**< 互斥锁数量 */
extern uint64_t g_condition_count;                  /**< 条件变量数量 */
extern uint64_t g_semaphore_count;                   /**< 信号量数量 */

/** 资源管理变量 */
extern uint64_t g_resource_count;                    /**< 资源数量 */
extern uint64_t g_resource_pool_base;               /**< 资源池基地址 */
extern uint64_t g_resource_pool_size;               /**< 资源池大小 */

/** 系统配置变量 */
extern uint64_t g_config_flags;                      /**< 配置标志 */
extern uint64_t g_config_buffer_base;                /**< 配置缓冲区基地址 */
extern uint64_t g_config_buffer_size;                /**< 配置缓冲区大小 */

/** @} */

/*=============================================================================
 * 数据类型定义
 *=============================================================================*/

/** 
 * @defgroup DataTypes 数据类型定义
 * @brief 系统使用的自定义数据类型
 * @{
 */

/** 系统状态枚举 */
typedef enum {
    SYSTEM_STATE_UNINITIALIZED = 0,     /**< 未初始化状态 */
    SYSTEM_STATE_INITIALIZING = 1,      /**< 正在初始化 */
    SYSTEM_STATE_INITIALIZED = 2,       /**< 已初始化 */
    SYSTEM_STATE_RUNNING = 3,           /**< 运行中 */
    SYSTEM_STATE_PAUSED = 4,            /**< 暂停状态 */
    SYSTEM_STATE_SHUTTING_DOWN = 5,     /**< 正在关闭 */
    SYSTEM_STATE_SHUTDOWN = 6,          /**< 已关闭 */
    SYSTEM_STATE_ERROR = 7               /**< 错误状态 */
} SystemState;

/** 系统错误代码枚举 */
typedef enum {
    SYSTEM_ERROR_NONE = 0,               /**< 无错误 */
    SYSTEM_ERROR_MEMORY = 1,            /**< 内存错误 */
    SYSTEM_ERROR_THREAD = 2,            /**< 线程错误 */
    SYSTEM_ERROR_RESOURCE = 3,          /**< 资源错误 */
    SYSTEM_ERROR_INITIALIZATION = 4,    /**< 初始化错误 */
    SYSTEM_ERROR_TIMEOUT = 5,           /**< 超时错误 */
    SYSTEM_ERROR_INVALID_PARAM = 6,     /**< 无效参数 */
    SYSTEM_ERROR_NOT_FOUND = 7,         /**< 未找到 */
    SYSTEM_ERROR_ACCESS_DENIED = 8,     /**< 访问被拒绝 */
    SYSTEM_ERROR_UNKNOWN = 0xFFFFFFFF    /**< 未知错误 */
} SystemError;

/** 内存块类型 */
typedef struct {
    uint64_t base_address;               /**< 基地址 */
    uint64_t size;                      /**< 大小 */
    uint32_t flags;                     /**< 标志位 */
    uint32_t alignment;                 /**< 对齐方式 */
    uint8_t* data;                      /**< 数据指针 */
    struct MemoryBlock* next;           /**< 下一个块 */
    struct MemoryBlock* prev;           /**< 前一个块 */
} MemoryBlock;

/** 系统互斥锁类型 */
typedef struct {
    uint64_t handle;                    /**< 句柄 */
    uint32_t flags;                     /**< 标志位 */
    uint32_t lock_count;                /**< 锁计数 */
    uint64_t owner_thread;              /**< 拥有者线程 */
    uint64_t* data;                     /**< 数据指针 */
} SystemMutex;

/** 系统条件变量类型 */
typedef struct {
    uint64_t handle;                    /**< 句柄 */
    uint32_t flags;                     /**< 标志位 */
    uint32_t wait_count;                /**< 等待计数 */
    uint64_t* data;                     /**< 数据指针 */
} SystemCondition;

/** 系统资源类型 */
typedef struct {
    uint64_t id;                        /**< 资源ID */
    uint64_t type;                      /**< 资源类型 */
    uint64_t size;                      /**< 资源大小 */
    uint32_t flags;                     /**< 标志位 */
    uint32_t ref_count;                 /**< 引用计数 */
    void* data;                         /**< 数据指针 */
    void* destructor;                   /**< 析构函数指针 */
} SystemResource;

/** 系统配置类型 */
typedef struct {
    uint64_t flags;                     /**< 配置标志 */
    uint32_t buffer_size;               /**< 缓冲区大小 */
    uint32_t max_objects;               /**< 最大对象数 */
    uint32_t max_threads;               /**< 最大线程数 */
    uint32_t memory_pool_size;          /**< 内存池大小 */
    uint32_t cache_size;                /**< 缓存大小 */
    uint8_t* data;                      /**< 配置数据 */
} SystemConfig;

/** @} */

/*=============================================================================
 * 系统函数声明
 *=============================================================================*/

/** 
 * @defgroup SystemFunctions 系统函数声明
 * @brief 系统核心功能函数的声明
 * @{
 */

/** 系统初始化函数 */
SystemError system_initialize(void);
SystemError system_shutdown(void);
SystemError system_reset(void);

/** 内存管理函数 */
MemoryBlock* memory_allocate(uint64_t size, uint32_t alignment);
void memory_free(MemoryBlock* block);
MemoryBlock* memory_reallocate(MemoryBlock* block, uint64_t new_size);
void memory_cleanup(void);

/** 线程同步函数 */
SystemError mutex_create(SystemMutex* mutex);
SystemError mutex_lock(SystemMutex* mutex);
SystemError mutex_unlock(SystemMutex* mutex);
SystemError mutex_destroy(SystemMutex* mutex);

SystemError condition_create(SystemCondition* condition);
SystemError condition_wait(SystemCondition* condition, SystemMutex* mutex, uint32_t timeout);
SystemError condition_signal(SystemCondition* condition);
SystemError condition_broadcast(SystemCondition* condition);
SystemError condition_destroy(SystemCondition* condition);

/** 资源管理函数 */
SystemResource* resource_create(uint64_t type, uint64_t size, void* data);
SystemError resource_destroy(SystemResource* resource);
SystemResource* resource_find(uint64_t id);
SystemError resource_acquire(SystemResource* resource);
SystemError resource_release(SystemResource* resource);

/** 系统配置函数 */
SystemError config_load(SystemConfig* config, const uint8_t* data, uint32_t size);
SystemError config_save(SystemConfig* config, uint8_t* data, uint32_t* size);
SystemError config_get_value(SystemConfig* config, uint64_t key, void* value);
SystemError config_set_value(SystemConfig* config, uint64_t key, const void* value);

/** 系统状态函数 */
SystemState system_get_state(void);
SystemError system_set_state(SystemState state);
uint32_t system_get_error_code(void);
void system_set_error_code(uint32_t error_code);
const char* system_get_error_string(uint32_t error_code);

/** @} */

/*=============================================================================
 * 内联函数定义
 *=============================================================================*/

/** 
 * @defgroup InlineFunctions 内联函数
 * @brief 常用的内联函数定义
 * @{
 */

/** 检查指针是否有效 */
static inline int is_valid_pointer(const void* ptr) {
    return (ptr != NULL) && ((uintptr_t)ptr >= SYSTEM_DATA_SEGMENT);
}

/** 检查地址是否对齐 */
static inline int is_aligned(uintptr_t addr, uint32_t alignment) {
    return (addr & (alignment - 1)) == 0;
}

/** 获取下一个2的幂次方 */
static inline uint32_t next_power_of_two(uint32_t value) {
    value--;
    value |= value >> 1;
    value |= value >> 2;
    value |= value >> 4;
    value |= value >> 8;
    value |= value >> 16;
    value++;
    return value;
}

/** 获取系统状态字符串 */
static inline const char* system_state_to_string(SystemState state) {
    switch (state) {
        case SYSTEM_STATE_UNINITIALIZED: return "UNINITIALIZED";
        case SYSTEM_STATE_INITIALIZING: return "INITIALIZING";
        case SYSTEM_STATE_INITIALIZED: return "INITIALIZED";
        case SYSTEM_STATE_RUNNING: return "RUNNING";
        case SYSTEM_STATE_PAUSED: return "PAUSED";
        case SYSTEM_STATE_SHUTTING_DOWN: return "SHUTTING_DOWN";
        case SYSTEM_STATE_SHUTDOWN: return "SHUTDOWN";
        case SYSTEM_STATE_ERROR: return "ERROR";
        default: return "UNKNOWN";
    }
}

/** @} */

/*=============================================================================
 * 宏定义
 *=============================================================================*/

/** 
 * @defgroup Macros 宏定义
 * @brief 系统使用的宏定义
 * @{
 */

/** 错误检查宏 */
#define CHECK_ERROR(condition, error) \
    do { \
        if (!(condition)) { \
            system_set_error_code(error); \
            return error; \
        } \
    } while (0)

/** 内存分配宏 */
#define SAFE_ALLOC(size, alignment) \
    memory_allocate(size, alignment)

/** 内存释放宏 */
#define SAFE_FREE(block) \
    do { \
        if (block) { \
            memory_free(block); \
            block = NULL; \
        } \
    } while (0)

/** 互斥锁锁定宏 */
#define MUTEX_LOCK(mutex) \
    do { \
        SystemError err = mutex_lock(mutex); \
        if (err != SYSTEM_ERROR_NONE) { \
            return err; \
        } \
    } while (0)

/** 互斥锁解锁宏 */
#define MUTEX_UNLOCK(mutex) \
    do { \
        SystemError err = mutex_unlock(mutex); \
        if (err != SYSTEM_ERROR_NONE) { \
            return err; \
        } \
    } while (0)

/** 日志宏 */
#define LOG_INFO(fmt, ...) \
    printf("[INFO] " fmt "\n", ##__VA_ARGS__)

#define LOG_ERROR(fmt, ...) \
    printf("[ERROR] " fmt "\n", ##__VA_ARGS__)

#define LOG_WARNING(fmt, ...) \
    printf("[WARNING] " fmt "\n", ##__VA_ARGS__)

/** @} */

/*=============================================================================
 * 函数别名定义
=============================================================================*/

/** 
 * @defgroup FunctionAliases 函数别名
 * @brief 为FUN_*函数创建有意义的别名
 * @{
 */

/** 系统初始化函数别名 */
#define FUN_18002ce30 engine_initialize_core_systems
#define FUN_18002ce80 engine_initialize_memory_manager
#define FUN_18002ced0 engine_initialize_resource_manager
#define FUN_18002cf20 engine_initialize_render_system
#define FUN_18002cf70 engine_initialize_audio_system
#define FUN_18002cfc0 engine_initialize_input_system
#define FUN_18002d010 engine_initialize_network_system
#define FUN_18002d060 engine_initialize_physics_system
#define FUN_18002d0b0 engine_initialize_ui_system
#define FUN_18002d100 engine_initialize_script_system

/** 系统注册函数别名 */
#define FUN_18002e450 engine_register_core_services
#define FUN_18002e4c0 engine_register_memory_services
#define FUN_18002e530 engine_register_resource_services
#define FUN_18002e5a0 engine_register_render_services
#define FUN_18002e610 engine_register_audio_services
#define FUN_18002e680 engine_register_input_services
#define FUN_18002e6f0 engine_register_network_services
#define FUN_18002e760 engine_register_physics_services
#define FUN_18002e7d0 engine_register_ui_services
#define FUN_18002e840 engine_register_script_services

/** 模块初始化函数别名 */
#define FUN_18002e8b0 module_initialize_game_state
#define FUN_180031350 module_initialize_world_system
#define FUN_1800313c0 module_initialize_character_system
#define FUN_180031430 module_initialize_combat_system
#define FUN_1800314b0 module_initialize_economy_system
#define FUN_180031b50 module_initialize_quest_system
#define FUN_180031bc0 module_initialize_weather_system
#define FUN_180031c30 module_initialize_camera_system
#define FUN_180031ca0 module_initialize_particle_system
#define FUN_180031d10 module_initialize_animation_system

/** 系统配置函数别名 */
#define FUN_180036c50 system_configure_graphics
#define FUN_180036cc0 system_configure_audio
#define FUN_180036d30 system_configure_input
#define FUN_180036da0 system_configure_network
#define FUN_180036e10 system_configure_physics
#define FUN_180036e80 system_configure_ui
#define FUN_180036ef0 system_configure_script
#define FUN_180036f60 system_configure_debug
#define FUN_180036fd0 system_configure_performance
#define FUN_180037040 system_configure_localization

/** 游戏模式初始化函数别名 */
#define FUN_18003adb0 game_mode_initialize_campaign
#define FUN_18003ae20 game_mode_initialize_custom_battle
#define FUN_18003ae90 game_mode_initialize_multiplayer
#define FUN_18003af00 game_mode_initialize_tutorial
#define FUN_18003af70 game_mode_initialize_scene_editor
#define FUN_18003afe0 game_mode_initialize_character_editor
#define FUN_18003b050 game_mode_initialize_module_editor
#define FUN_18003b0c0 game_mode_initialize_test_mode
#define FUN_18003b130 game_mode_initialize_developer_mode
#define FUN_18003b1a0 game_mode_initialize_server_mode
#define FUN_18003b210 game_mode_initialize_client_mode

/** 核心函数指针别名 */
#define FUN_1808fc7d0 core_function_dispatcher
#define FUN_1808fc7e0 core_system_call
#define FUN_1808fc7f0 core_error_handler
#define FUN_1808fc800 core_memory_manager
#define FUN_1808fc810 core_resource_manager
#define FUN_1808fc820 core_thread_manager
#define FUN_1808fc830 core_event_system
#define FUN_1808fc840 core_configuration_system
#define FUN_1808fc850 core_debug_system
#define FUN_1808fc860 core_performance_monitor

/** @} */

/*=============================================================================
 * 核心数据结构扩展
=============================================================================*/

/** 
 * @defgroup CoreStructures 核心数据结构扩展
 * @brief 引擎核心数据结构的扩展定义
 * @{
 */

/** 引擎核心结构 */
typedef struct {
    uint64_t engine_version;        /**< 引擎版本 */
    uint64_t memory_manager;        /**< 内存管理器指针 */
    uint64_t resource_manager;      /**< 资源管理器指针 */
    uint64_t game_state;            /**< 游戏状态指针 */
    uint64_t render_context;        /**< 渲染上下文 */
    uint64_t audio_system;           /**< 音频系统指针 */
    uint64_t input_manager;          /**< 输入管理器指针 */
    uint64_t network_manager;        /**< 网络管理器指针 */
    uint64_t physics_system;        /**< 物理系统指针 */
    uint64_t ui_system;             /**< UI系统指针 */
    uint64_t script_system;         /**< 脚本系统指针 */
} engine_core_t;

/** 游戏状态结构 */
typedef struct {
    uint64_t current_scene;         /**< 当前场景 */
    uint64_t player_character;      /**< 玩家角色 */
    uint64_t camera_system;         /**< 相机系统 */
    uint64_t world_data;            /**< 世界数据 */
    uint64_t faction_system;        /**< 派系系统 */
    uint64_t party_system;          /**< 队伍系统 */
    uint64_t battle_system;         /**< 战斗系统 */
    uint64_t economy_system;        /**< 经济系统 */
    uint64_t quest_system;          /**< 任务系统 */
    uint64_t weather_system;        /**< 天气系统 */
} game_state_t;

/** 渲染系统结构 */
typedef struct {
    uint64_t device;                /**< 渲染设备 */
    uint64_t context;               /**< 渲染上下文 */
    uint64_t swap_chain;            /**< 交换链 */
    uint64_t render_targets;        /**< 渲染目标 */
    uint64_t depth_stencil;         /**< 深度模板 */
    uint64_t vertex_buffer;         /**< 顶点缓冲区 */
    uint64_t index_buffer;          /**< 索引缓冲区 */
    uint64_t constant_buffer;       /**< 常量缓冲区 */
    uint64_t shader_program;        /**< 着色器程序 */
} render_system_t;

/** 音频系统结构 */
typedef struct {
    uint64_t device;                /**< 音频设备 */
    uint64_t context;               /**< 音频上下文 */
    uint64_t listener;              /**< 监听器 */
    uint64_t sound_sources;         /**< 声音源 */
    uint64_t audio_buffers;         /**< 音频缓冲区 */
    uint64_t music_player;          /**< 音乐播放器 */
    uint64_t sound_effects;         /**< 音效系统 */
} audio_system_t;

/** 输入系统结构 */
typedef struct {
    uint64_t keyboard;              /**< 键盘设备 */
    uint64_t mouse;                 /**< 鼠标设备 */
    uint64_t controller;            /**< 控制器设备 */
    uint64_t touch;                 /**< 触摸设备 */
    uint64_t input_mappings;        /**< 输入映射 */
    uint64_t input_events;          /**< 输入事件 */
} input_system_t;

/** 物理系统结构 */
typedef struct {
    uint64_t world;                 /**< 物理世界 */
    uint64_t rigid_bodies;          /**< 刚体 */
    uint64_t collision_shapes;      /**< 碰撞形状 */
    uint64_t constraints;           /**< 约束 */
    uint64_t character_controller;  /**< 角色控制器 */
    uint64_t raycast_results;       /**< 射线检测结果 */
} physics_system_t;

/** @} */

/*=============================================================================
 * 技术架构说明
=============================================================================*/

/** 
 * @defgroup TechnicalArchitecture 技术架构
 * @brief 引擎技术架构说明
 * @{
 */

/**
 * @brief 引擎架构概述
 * 
 * Mount & Blade II: Bannerlord引擎采用模块化架构设计，包含以下核心模块：
 * 
 * 1. 系统核心模块：负责引擎的初始化、配置和生命周期管理
 * 2. 内存管理模块：提供高效的内存分配和管理机制
 * 3. 资源管理模块：管理游戏资源的加载、卸载和缓存
 * 4. 渲染系统模块：处理图形渲染和视觉效果
 * 5. 音频系统模块：管理声音和音乐的播放
 * 6. 输入系统模块：处理用户输入和交互
 * 7. 物理系统模块：提供物理模拟和碰撞检测
 * 8. UI系统模块：处理用户界面和交互
 * 9. 脚本系统模块：支持游戏逻辑的脚本化
 * 10. 网络系统模块：处理多人游戏功能
 * 
 * 各模块之间通过统一的接口进行通信，实现了高度的模块化和可扩展性。
 */

/**
 * @brief 内存管理架构
 * 
 * 内存管理采用分层设计：
 * - 底层：操作系统内存分配
 * - 中层：内存池和缓存管理
 * - 高层：智能指针和垃圾回收
 * 
 * 特点：
 * - 高效的内存池分配
 * - 智能的内存缓存
 * - 自动垃圾回收
 * - 内存泄漏检测
 * - 性能监控
 */

/**
 * @brief 渲染管线架构
 * 
 * 渲染管线采用现代设计：
 * - 可编程着色器
 * - 延迟渲染
 * - 物理基础渲染(PBR)
 * - 实时阴影
 * - 后处理效果
 * - 抗锯齿
 * - 环境光遮蔽
 */

/**
 * @brief 性能优化策略
 * 
 * 性能优化包括：
 * - 多线程渲染
 * - 资源预加载
 * - LOD(Level of Detail)系统
 * - 视锥剔除
 * - 遮挡剔除
 * - 实例化渲染
 * - GPU计算
 * - 内存优化
 */

/**
 * @brief 安全机制
 * 
 * 安全机制包括：
 * - 内存访问保护
 * - 输入验证
 * - 错误处理
 * - 异常捕获
 * - 日志记录
 * - 调试信息
 * - 性能监控
 */

/** @} */

/*=============================================================================
 * 性能优化常量
=============================================================================*/

/** 
 * @defgroup PerformanceConstants 性能优化常量
 * @brief 性能优化相关的常量定义
 * @{
 */

/** 缓存大小配置 */
#define CACHE_SIZE_TEXTURES           1024 * 1024 * 1024    /**< 纹理缓存大小：1GB */
#define CACHE_SIZE_MODELS             512 * 1024 * 1024     /**< 模型缓存大小：512MB */
#define CACHE_SIZE_SOUNDS             256 * 1024 * 1024     /**< 声音缓存大小：256MB */
#define CACHE_SIZE_ANIMATIONS         128 * 1024 * 1024     /**< 动画缓存大小：128MB */

/** 线程池配置 */
#define THREAD_POOL_SIZE              8                    /**< 线程池大小 */
#define THREAD_STACK_SIZE             2 * 1024 * 1024      /**< 线程栈大小：2MB */
#define THREAD_PRIORITY_NORMAL        0                    /**< 普通优先级 */
#define THREAD_PRIORITY_HIGH          1                    /**< 高优先级 */
#define THREAD_PRIORITY_LOW           -1                   /**< 低优先级 */

/** 渲染配置 */
#define RENDER_TARGET_WIDTH          1920                 /**< 渲染目标宽度 */
#define RENDER_TARGET_HEIGHT         1080                 /**< 渲染目标高度 */
#define RENDER_TARGET_FORMAT         DXGI_FORMAT_R8G8B8A8_UNORM /**< 渲染目标格式 */
#define RENDER_DEPTH_FORMAT          DXGI_FORMAT_D32_FLOAT /**< 深度格式 */
#define RENDER_MSAA_SAMPLES          4                    /**< MSAA采样数 */

/** 物理配置 */
#define PHYSICS_MAX_RIGID_BODIES     10000                /**< 最大刚体数量 */
#define PHYSICS_MAX_CONSTRAINTS      5000                 /**< 最大约束数量 */
#define PHYSICS_MAX_COLLISION_SHAPES 20000                /**< 最大碰撞形状数量 */
#define PHYSICS_SUBSTEPS             3                    /**< 物理子步数 */
#define PHYSICS_FIXED_TIMESTEP       1.0f / 60.0f        /**< 固定时间步长 */

/** 音频配置 */
#define AUDIO_MAX_SOURCES            128                  /**< 最大音源数量 */
#define AUDIO_MAX_BUFFERS            256                  /**< 最大缓冲区数量 */
#define AUDIO_SAMPLE_RATE            44100                /**< 采样率 */
#define AUDIO_CHANNELS               2                    /**< 声道数 */
#define AUDIO_BITS_PER_SAMPLE        16                   /**< 每样本位数 */

/** 网络配置 */
#define NETWORK_MAX_CONNECTIONS      64                   /**< 最大连接数 */
#define NETWORK_BUFFER_SIZE          8192                 /**< 网络缓冲区大小 */
#define NETWORK_TIMEOUT              5000                 /**< 网络超时(ms) */
#define NETWORK_PING_INTERVAL        1000                 /**< 心跳间隔(ms) */

/** @} */

/*=============================================================================
 * 调试和日志常量
=============================================================================*/

/** 
 * @defgroup DebugConstants 调试和日志常量
 * @brief 调试和日志相关的常量定义
 * @{
 */

/** 日志级别 */
#define LOG_LEVEL_DEBUG              0                    /**< 调试级别 */
#define LOG_LEVEL_INFO               1                    /**< 信息级别 */
#define LOG_LEVEL_WARNING            2                    /**< 警告级别 */
#define LOG_LEVEL_ERROR              3                    /**< 错误级别 */
#define LOG_LEVEL_FATAL              4                    /**< 致命错误级别 */

/** 调试标志 */
#define DEBUG_FLAG_MEMORY            0x00000001           /**< 内存调试标志 */
#define DEBUG_FLAG_RENDER            0x00000002           /**< 渲染调试标志 */
#define DEBUG_FLAG_PHYSICS           0x00000004           /**< 物理调试标志 */
#define DEBUG_FLAG_AUDIO             0x00000008           /**< 音频调试标志 */
#define DEBUG_FLAG_NETWORK           0x00000010           /**< 网络调试标志 */
#define DEBUG_FLAG_INPUT             0x00000020           /**< 输入调试标志 */
#define DEBUG_FLAG_UI                0x00000040           /**< UI调试标志 */
#define DEBUG_FLAG_SCRIPT            0x00000080           /**< 脚本调试标志 */

/** 性能监控标志 */
#define PERF_FLAG_FPS                0x00000001           /**< FPS监控标志 */
#define PERF_FLAG_MEMORY             0x00000002           /**< 内存监控标志 */
#define PERF_FLAG_CPU                0x00000004           /**< CPU监控标志 */
#define PERF_FLAG_GPU                0x00000008           /**< GPU监控标志 */
#define PERF_FLAG_NETWORK            0x00000010           /**< 网络监控标志 */
#define PERF_FLAG_DISK               0x00000020           /**< 磁盘监控标志 */

/** @} */

/*=============================================================================
 * 平台特定定义
=============================================================================*/

/** 
 * @defgroup PlatformSpecific 平台特定定义
 * @brief 不同平台的特定定义
 * @{
 */

#ifdef _WIN32
/** Windows平台特定定义 */
#define PLATFORM_WINDOWS            1
#define WINAPI_CALL                __stdcall
#define PLATFORM_DLL_EXPORT        __declspec(dllexport)
#define PLATFORM_DLL_IMPORT        __declspec(dllimport)
#define THREAD_LOCAL               __declspec(thread)
#elif __linux__
/** Linux平台特定定义 */
#define PLATFORM_LINUX             1
#define PLATFORM_DLL_EXPORT        __attribute__((visibility("default")))
#define PLATFORM_DLL_IMPORT        __attribute__((visibility("default")))
#define THREAD_LOCAL               __thread
#elif __APPLE__
/** macOS平台特定定义 */
#define PLATFORM_MACOS             1
#define PLATFORM_DLL_EXPORT        __attribute__((visibility("default")))
#define PLATFORM_DLL_IMPORT        __attribute__((visibility("default")))
#define THREAD_LOCAL               __thread
#else
/** 其他平台特定定义 */
#define PLATFORM_UNKNOWN           0
#define PLATFORM_DLL_EXPORT
#define PLATFORM_DLL_IMPORT
#define THREAD_LOCAL
#endif

/** @} */

/*=============================================================================
 * 版本信息
=============================================================================*/

/** 
 * @defgroup VersionInformation 版本信息
 * @brief 引擎版本信息
 * @{
 */

/** 版本号定义 */
#define ENGINE_VERSION_MAJOR        2
#define ENGINE_VERSION_MINOR        0
#define ENGINE_VERSION_PATCH        0
#define ENGINE_VERSION_REVISION     0

/** 版本字符串 */
#define ENGINE_VERSION_STRING       "2.0.0.0"

/** 构建信息 */
#define BUILD_DATE                  __DATE__
#define BUILD_TIME                  __TIME__
#define BUILD_COMPILER              __VERSION__

/** 版本检查宏 */
#define ENGINE_VERSION_CHECK(major, minor, patch) \
    ((ENGINE_VERSION_MAJOR > (major)) || \
     (ENGINE_VERSION_MAJOR == (major) && ENGINE_VERSION_MINOR > (minor)) || \
     (ENGINE_VERSION_MAJOR == (major) && ENGINE_VERSION_MINOR == (minor) && ENGINE_VERSION_PATCH >= (patch)))

/** @} */

#endif /* DATA_DEFINITIONS_H */