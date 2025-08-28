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

#endif /* DATA_DEFINITIONS_H */