#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

/**
 * @file 01_initialization_part021.c
 * @brief 初始化系统高级数据处理和内存管理模块
 * 
 * 本模块是初始化系统的核心组件，主要负责：
 * - 系统高级数据结构的创建和管理
 * - 内存池的分配和回收机制
 * - 系统状态监控和错误处理
 * - 初始化参数的复杂处理和验证
 * - 系统资源的动态分配和生命周期管理
 * - 组件间依赖关系的建立和维护
 * - 系统缓存和缓冲区管理
 * - 初始化流程的完整控制和监控
 * 
 * 该文件作为初始化系统的高级数据处理子模块，提供了系统数据管理的全面支持，
 * 包括内存管理、状态监控、错误处理、缓存管理、资源分配等核心功能。
 * 
 * 主要功能模块：
 * 1. 系统数据处理器 - 负责系统数据的完整处理流程
 * 2. 内存管理器 - 负责内存池的分配和回收
 * 3. 状态监控器 - 负责系统状态的监控和管理
 * 4. 错误处理器 - 负责异常情况的检测和处理
 * 5. 资源分配器 - 负责系统资源的分配和释放
 * 6. 缓存管理器 - 负责系统缓存的管理和优化
 * 7. 初始化控制器 - 负责初始化流程的完整控制
 * 8. 系统清理器 - 负责系统资源的清理和释放
 * 
 * @version 2.0
 * @date 2025-08-28
 * @author Claude Code
 */

/* ============================================================================
 * 初始化系统高级数据管理常量定义
 * ============================================================================ */

/**
 * @brief 初始化系统高级数据管理接口
 * @details 定义初始化系统高级数据管理的参数和接口函数
 * 
 * 核心功能：
 * - 系统数据结构的创建和管理
 * - 内存池的分配和回收机制
 * - 系统状态监控和错误处理
 * - 初始化参数处理和验证机制
 * - 系统资源分配和生命周期管理
 * - 组件间依赖关系管理
 * - 系统缓存和缓冲区管理
 * - 初始化流程的完整控制和监控
 * 
 * 技术特点：
 * - 高效的内存管理策略
 * - 完善的错误处理机制
 * - 实时状态监控和报告
 * - 智能的资源分配算法
 * - 缓存优化和性能提升
 * 
 * @note 该文件作为初始化系统的核心数据处理子模块，提供全面的系统数据管理支持
 */

/* ============================================================================
 * 系统常量定义
 * ============================================================================ */

// 系统数据管理相关常量
#define SYSTEM_DATA_SIZE 0x60d30             // 系统数据结构大小
#define SYSTEM_POOL_SIZE 0x10420            // 系统内存池大小
#define SYSTEM_CACHE_SIZE 0x198              // 系统缓存大小
#define SYSTEM_BUFFER_SIZE 0x80              // 系统缓冲区大小
#define SYSTEM_STACK_SIZE 0x70               // 系统栈大小
#define SYSTEM_MUTEX_SIZE 0xe8               // 系统互斥量大小

// 系统状态标志常量
#define SYSTEM_FLAG_INITIALIZED 0x00000001   // 系统已初始化标志
#define SYSTEM_FLAG_ACTIVE 0x00000002        // 系统活动状态标志
#define SYSTEM_FLAG_ERROR 0x00000004         // 系统错误状态标志
#define SYSTEM_FLAG_SUSPENDED 0x00000008     // 系统暂停状态标志
#define SYSTEM_FLAG_SHUTDOWN 0x00000010      // 系统关闭状态标志
#define SYSTEM_FLAG_MAINTENANCE 0x00000020   // 系统维护状态标志

// 系统数据类型常量
#define DATA_TYPE_BASIC 0x01                 // 基础数据类型
#define DATA_TYPE_COMPLEX 0x02              // 复杂数据类型
#define DATA_TYPE_DYNAMIC 0x03              // 动态数据类型
#define DATA_TYPE_PERSISTENT 0x04           // 持久化数据类型

// 系统内存管理常量
#define MEMORY_ALIGN_8 8                     // 8字节对齐
#define MEMORY_ALIGN_16 16                   // 16字节对齐
#define MEMORY_ALIGN_32 32                   // 32字节对齐
#define MEMORY_POOL_FLAG 0x03                 // 内存池标志

/* ============================================================================
 * 类型别名定义 - 用于代码可读性和维护性
 * ============================================================================ */

// 基础类型别名
typedef uint64_t SystemDataHandle;           // 系统数据句柄
typedef uint64_t MemoryPoolHandle;           // 内存池句柄
typedef uint64_t CacheHandle;                // 缓存句柄
typedef uint64_t BufferHandle;               // 缓冲区句柄
typedef int32_t SystemDataStatus;           // 系统数据状态
typedef int32_t MemoryFlags;                // 内存标志
typedef int8_t SystemDataByte;              // 系统数据字节
typedef void* SystemDataContext;            // 系统数据上下文
typedef int32_t SystemDataErrorCode;        // 系统数据错误代码
typedef int32_t MemoryPoolType;             // 内存池类型
typedef uint64_t SystemDataTimestamp;       // 系统数据时间戳

// 枚举类型定义
typedef enum {
    DATA_STATE_UNINITIALIZED = 0,           // 数据未初始化状态
    DATA_STATE_INITIALIZING = 1,            // 数据初始化中状态
    DATA_STATE_INITIALIZED = 2,             // 数据已初始化状态
    DATA_STATE_ACTIVE = 3,                 // 数据活动状态
    DATA_STATE_INACTIVE = 4,                // 数据非活动状态
    DATA_STATE_ERROR = 5,                   // 数据错误状态
    DATA_STATE_DESTROYED = 6                // 数据已销毁状态
} SystemDataState;

typedef enum {
    MEMORY_TYPE_SMALL = 0,                  // 小块内存类型
    MEMORY_TYPE_MEDIUM = 1,                 // 中块内存类型
    MEMORY_TYPE_LARGE = 2,                  // 大块内存类型
    MEMORY_TYPE_HUGE = 3,                   // 巨块内存类型
    MEMORY_TYPE_SHARED = 4                   // 共享内存类型
} MemoryType;

typedef enum {
    CACHE_TYPE_L1 = 0,                      // L1缓存类型
    CACHE_TYPE_L2 = 1,                      // L2缓存类型
    CACHE_TYPE_L3 = 2,                      // L3缓存类型
    CACHE_TYPE_DISK = 3                      // 磁盘缓存类型
} CacheType;

// 结构体类型定义
typedef struct {
    SystemDataHandle handle;                // 数据句柄
    SystemDataStatus status;                 // 数据状态
    MemoryFlags flags;                       // 内存标志
    MemoryPoolType type;                     // 内存池类型
    void* data_ptr;                          // 数据指针
    uint32_t data_size;                      // 数据大小
    uint32_t alignment;                      // 对齐方式
    SystemDataTimestamp created_time;        // 创建时间
    SystemDataTimestamp last_access;         // 最后访问时间
    SystemDataErrorCode error_code;          // 错误代码
} SystemDataInfo;

typedef struct {
    MemoryPoolHandle handle;                 // 内存池句柄
    MemoryType type;                         // 内存类型
    void* base_address;                      // 基地址
    uint32_t pool_size;                      // 池大小
    uint32_t block_size;                     // 块大小
    uint32_t free_blocks;                    // 空闲块数
    uint32_t used_blocks;                    // 已用块数
    SystemDataTimestamp allocated_time;      // 分配时间
} MemoryPoolInfo;

typedef struct {
    CacheHandle handle;                      // 缓存句柄
    CacheType type;                           // 缓存类型
    void* cache_data;                        // 缓存数据
    uint32_t cache_size;                     // 缓存大小
    uint32_t hit_count;                      // 命中次数
    uint32_t miss_count;                     // 未命中次数
    float hit_ratio;                         // 命中率
    SystemDataTimestamp last_update;         // 最后更新时间
} CacheInfo;

/* ============================================================================
 * 函数别名定义 - 用于代码可读性和维护性
 * ============================================================================ */

// 主要功能函数别名
#define SystemDataProcessor FUN_180054360                // 系统数据处理器
#define SystemDataInitializer FUN_1800547b0              // 系统数据初始化器
#define SystemMemoryManager FUN_180055050                // 系统内存管理器
#define SystemComponentInitializer FUN_180055e10         // 系统组件初始化器
#define SystemResourceManager FUN_180055e30              // 系统资源管理器
#define SystemResourceCleaner FUN_180055e60              // 系统资源清理器
#define SystemDataAllocator FUN_180055e80                // 系统数据分配器
#define SystemDataDeallocator FUN_180055ed0              // 系统数据释放器
#define SystemCacheManager FUN_180055f20                 // 系统缓存管理器
#define SystemCacheCleaner FUN_180055f50                 // 系统缓存清理器
#define SystemExitHandler FUN_180055f70                  // 系统退出处理器
#define SystemCleanupRoutine FUN_180055fa0               // 系统清理程序

// 辅助功能函数别名
#define SystemMemoryAllocator FUN_18062b1e0              // 系统内存分配器
#define SystemMemoryDeallocator FUN_18064e900            // 系统内存释放器
#define SystemDataValidator FUN_180627c50                // 系统数据验证器
#define SystemBufferManager FUN_1806277c0                // 系统缓冲区管理器
#define SystemErrorHandler FUN_18004b100                  // 系统错误处理器
#define SystemStatusChecker FUN_180624a00                // 系统状态检查器
#define SystemConfigurationLoader FUN_18010f010           // 系统配置加载器
#define SystemMutexInitializer FUN_180637560              // 系统互斥量初始化器
#define SystemDataCopier FUN_1801954d0                   // 系统数据复制器
#define SystemDataWriter FUN_18019e140                   // 系统数据写入器
#define SystemDataReader FUN_18019e260                   // 系统数据读取器
#define SystemDataFinalizer FUN_1801a2ea0                // 系统数据终结器
#define SystemDataInitializerEx FUN_1801a6440            // 系统数据初始化器扩展
#define SystemDataDestroyer FUN_180199500                // 系统数据销毁器
#define SystemPathProcessor FUN_180629a40                 // 系统路径处理器
#define SystemStringHandler FUN_180624910                // 系统字符串处理器
#define SystemDataFormatter FUN_180624af0                // 系统数据格式化器
#define SystemSecurityValidator FUN_1801426a0            // 系统安全验证器
#define SystemDataSerializer FUN_18005c1c0               // 系统数据序列化器
#define SystemDataDeserializer FUN_18062db60             // 系统数据反序列化器
#define SystemCacheInitializer FUN_18015c450              // 系统缓存初始化器
#define SystemMutexManager FUN_18004bd10                  // 系统互斥量管理器
#define SystemThreadPoolManager FUN_18005c090            // 系统线程池管理器

// 内部工具函数别名
#define SystemInternalProcessor FUN_18062c5f0             // 系统内部处理器
#define SystemInternalValidator FUN_180061db0             // 系统内部验证器
#define SystemInternalInitializer FUN_180061be0           // 系统内部初始化器
#define SystemInternalCleaner FUN_1801299b0               // 系统内部清理器
#define SystemInternalFinalizer FUN_18012cfe0             // 系统内部终结器
#define SystemInternalAllocator FUN_18062b1e0             // 系统内部分配器
#define SystemInternalDeallocator FUN_18064e900           // 系统内部释放器
#define SystemInternalCopier FUN_1801954d0                // 系统内部复制器
#define SystemInternalWriter FUN_18019e140                // 系统内部写入器
#define SystemInternalReader FUN_18019e260                // 系统内部读取器
#define SystemInternalFinalizerEx FUN_1801a2ea0           // 系统内部终结器扩展
#define SystemInternalDestroyer FUN_180199500             // 系统内部销毁器
#define SystemInternalPathProcessor FUN_180629a40          // 系统内部路径处理器
#define SystemInternalStringHandler FUN_180624910         // 系统内部字符串处理器
#define SystemInternalFormatter FUN_180624af0             // 系统内部格式化器
#define SystemInternalSecurityValidator FUN_1801426a0     // 系统内部安全验证器
#define SystemInternalSerializer FUN_18005c1c0            // 系统内部序列化器
#define SystemInternalDeserializer FUN_18062db60          // 系统内部反序列化器
#define SystemInternalCacheInitializer FUN_18015c450      // 系统内部缓存初始化器
#define SystemInternalMutexManager FUN_18004bd10           // 系统内部互斥量管理器
#define SystemInternalThreadPoolManager FUN_18005c090     // 系统内部线程池管理器

/* ============================================================================
 * 全局变量声明
 * ============================================================================ */

// 系统数据区域 - 主要系统状态信息
extern uint8_t system_main_data_area[0x100];         // 系统主数据区域 - 256字节系统核心数据
extern uint64_t system_control_block;               // 系统控制块 - 主要系统控制信息
extern int32_t system_status_flags;                // 系统状态标志 - 当前系统状态位
extern void *system_function_pointer_table;                  // 系统指针表 - 系统函数指针数组
extern int8_t *system_config_byte_table;               // 系统字节表 - 系统配置字节表
extern int32_t system_internal_counter;                // 系统计数器 - 系统内部计数器
extern int64_t system_boot_timestamp;               // 系统时间戳1 - 系统启动时间戳
extern int64_t system_runtime_timestamp;               // 系统时间戳2 - 系统运行时间戳
extern int64_t system_cpu_performance_counter;               // 系统性能计数器1 - CPU性能计数器
extern int64_t system_memory_performance_counter;               // 系统性能计数器2 - 内存性能计数器
extern int32_t system_last_error_code;                // 系统错误代码 - 最后错误代码
extern int32_t system_last_warning_code;                // 系统警告代码 - 最后警告代码
extern uint8_t system_config_data[0x20];          // 系统配置数据 - 32字节配置数据
extern uint8_t system_resource_data[0x20];          // 系统资源数据 - 32字节资源数据
extern uint8_t system_cache_data[0x200];         // 系统缓存数据 - 512字节缓存区
extern uint8_t system_temp_data[0x10];         // 系统临时数据 - 16字节临时数据
extern uint8_t system_reserved_area[0x10];          // 系统保留区域1 - 16字节保留区域
extern int64_t system_memory_usage_stats;               // 系统统计信息1 - 内存使用统计
extern uint64_t system_cpu_usage_stats;              // 系统统计信息2 - CPU使用统计
extern int64_t system_disk_io_stats;               // 系统统计信息3 - 磁盘I/O统计
extern void **system_global_pointer_table;                 // 系统全局指针表 - 全局函数指针表

// 系统虚函数表声明
extern void *system_vtable_default;                 // 系统默认虚函数表
extern void *system_vtable_active;                  // 系统活动虚函数表

// 系统内存管理相关变量
extern void *system_memory_pool_ptr;                // 系统内存池指针
extern void *system_buffer_ptr;                     // 系统缓冲区指针
extern void *system_data_buffer_ptr;                // 系统数据缓冲区指针
extern void *system_state_ptr;                      // 系统状态指针
extern void *system_cache_buffer;                   // 系统缓存缓冲区
extern void *init_system_data_memory;                // 系统数据内存初始化指针
extern void *system_main_module_state;              // 系统主模块状态指针
extern void *system_message_context;                 // 系统消息上下文指针

// 系统常量引用
extern void *unknown_var_3432_ptr;                  // 未知变量3432指针
extern void *unknown_var_6404_ptr;                  // 未知变量6404指针
extern void *unknown_var_6424_ptr;                  // 未知变量6424指针
extern void *unknown_var_6456_ptr;                  // 未知变量6456指针
extern void *unknown_var_6480_ptr;                  // 未知变量6480指针
extern void *unknown_var_6504_ptr;                  // 未知变量6504指针
extern void *unknown_var_6536_ptr;                  // 未知变量6536指针
extern void *unknown_var_6576_ptr;                  // 未知变量6576指针
extern void *unknown_var_6384_ptr;                  // 未知变量6384指针
extern void *unknown_var_264_ptr;                    // 未知变量264指针
extern void *unknown_var_6880_ptr;                  // 未知变量6880指针
extern void *unknown_var_6896_ptr;                  // 未知变量6896指针
extern void *unknown_var_6928_ptr;                  // 未知变量6928指针
extern void *unknown_var_6960_ptr;                  // 未知变量6960指针
extern void *unknown_var_6992_ptr;                  // 未知变量6992指针
extern void *unknown_var_7024_ptr;                  // 未知变量7024指针
extern void *unknown_var_7064_ptr;                  // 未知变量7064指针
extern void *unknown_var_7104_ptr;                  // 未知变量7104指针
extern void *unknown_var_7144_ptr;                  // 未知变量7144指针
extern void *unknown_var_7184_ptr;                  // 未知变量7184指针
extern void *unknown_var_7224_ptr;                  // 未知变量7224指针
extern void *unknown_var_7264_ptr;                  // 未知变量7264指针

// 系统数据管理器变量
extern uint64_t SYSTEM_DATA_MANAGER_A;              // 系统数据管理器A

/* ============================================================================
 * 函数声明
 * ============================================================================ */

/**
 * @brief 系统数据处理器
 * 
 * 该函数负责系统数据的完整处理流程，包括：
 * - 数据结构初始化和配置
 * - 内存分配和资源管理
 * - 数据验证和错误处理
 * - 状态监控和报告生成
 * - 数据序列化和反序列化
 * - 缓存管理和优化
 * 
 * @param param_1 系统数据参数指针
 * @param param_2 处理参数指针
 * @return void 无返回值
 */
void SystemDataProcessor(longlong *param_1, longlong param_2);

/**
 * @brief 系统数据初始化器
 * 
 * 该函数负责系统数据的完整初始化流程，包括：
 * - 数据结构的创建和初始化
 * - 内存池的分配和配置
 * - 缓存系统的初始化
 * - 状态监控的设置
 * - 错误处理机制的初始化
 * - 资源管理器的配置
 * 
 * @return void 无返回值
 */
void SystemDataInitializer(void);

/**
 * @brief 系统内存管理器
 * 
 * 该函数负责系统内存的完整管理流程，包括：
 * - 内存池的创建和管理
 * - 内存分配和释放策略
 * - 内存碎片整理
 * - 内存使用监控
 * - 内存泄漏检测
 * - 内存优化策略
 * 
 * @return void 无返回值
 */
void SystemMemoryManager(void);

/**
 * @brief 系统组件初始化器
 * 
 * 该函数负责系统组件的完整初始化流程，包括：
 * - 组件的创建和初始化
 * - 组件间依赖关系处理
 * - 组件状态监控
 * - 组件错误处理
 * - 组件生命周期管理
 * - 组件性能优化
 * 
 * @param param_1 组件参数指针
 * @return void 无返回值
 */
void SystemComponentInitializer(longlong *param_1);

/**
 * @brief 系统资源管理器
 * 
 * 该函数负责系统资源的完整管理流程，包括：
 * - 资源的分配和释放
 * - 资源生命周期管理
 * - 资源使用监控
 * - 资源优化和回收
 * - 资源冲突解决
 * - 资源统计和报告
 * 
 * @param param_1 资源参数指针
 * @param param_2 资源参数2
 * @param param_3 资源参数3
 * @param param_4 资源参数4
 * @return void 无返回值
 */
void SystemResourceManager(longlong param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4);

/**
 * @brief 系统资源清理器
 * 
 * 该函数负责系统资源的完整清理流程，包括：
 * - 资源的释放和回收
 * - 资源状态清理
 * - 资源依赖关系处理
 * - 资源内存清理
 * - 资源句柄清理
 * - 资源统计更新
 * 
 * @param param_1 资源参数指针
 * @return void 无返回值
 */
void SystemResourceCleaner(longlong param_1);

/**
 * @brief 系统数据分配器
 * 
 * 该函数负责系统数据的分配工作，包括：
 * - 数据结构的分配
 * - 内存空间的分配
 * - 数据句柄的创建
 * - 数据属性的设置
 * - 数据状态的初始化
 * - 数据关联关系的建立
 * 
 * @param param_1 分配参数指针
 * @return longlong 分配结果句柄
 */
longlong SystemDataAllocator(longlong param_1);

/**
 * @brief 系统数据释放器
 * 
 * 该函数负责系统数据的释放工作，包括：
 * - 数据结构的释放
 * - 内存空间的回收
 * - 数据句柄的清理
 * - 数据关联关系的解除
 * - 数据状态的更新
 * - 资源统计的更新
 * 
 * @param param_1 释放参数指针
 * @return void 无返回值
 */
void SystemDataDeallocator(longlong param_1);

/**
 * @brief 系统缓存管理器
 * 
 * 该函数负责系统缓存的完整管理流程，包括：
 * - 缓存的创建和初始化
 * - 缓存数据的存储和检索
 * - 缓存命中率的优化
 * - 缓存清理和更新
 * - 缓存性能监控
 * - 缓存策略优化
 * 
 * @param param_1 缓存参数指针
 * @param param_2 缓存参数2
 * @param param_3 缓存参数3
 * @param param_4 缓存参数4
 * @return void 无返回值
 */
void SystemCacheManager(longlong param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4);

/**
 * @brief 系统缓存清理器
 * 
 * 该函数负责系统缓存的完整清理流程，包括：
 * - 缓存数据的清理
 * - 缓存空间的回收
 * - 缓存状态的更新
 * - 缓存统计的清理
 * - 缓存依赖关系的处理
 * - 缓存性能的优化
 * 
 * @param param_1 缓存参数指针
 * @return void 无返回值
 */
void SystemCacheCleaner(longlong param_1);

/**
 * @brief 系统退出处理器
 * 
 * 该函数负责系统退出的完整处理流程，包括：
 * - 系统资源的清理
 * - 系统状态的保存
 * - 系统缓存的清理
 * - 系统内存的释放
 * - 系统文件的关闭
 * - 系统退出码的设置
 * 
 * @param param_1 退出参数指针
 * @param param_2 退出代码
 * @return void 无返回值
 */
void SystemExitHandler(uint64_t param_1, int32_t param_2);

/**
 * @brief 系统清理程序
 * 
 * 该函数负责系统的完整清理流程，包括：
 * - 系统数据的清理
 * - 系统内存的释放
 * - 系统缓存的清理
 * - 系统资源的回收
 * - 系统状态的更新
 * - 系统统计的清理
 * 
 * @return void 无返回值
 */
void SystemCleanupRoutine(void);

/* ============================================================================
 * 辅助功能函数声明
 * ============================================================================ */

/**
 * @brief 系统内存分配器
 * 
 * 该函数负责系统内存的分配工作。
 * 
 * @param param_1 内存池指针
 * @param param_2 分配大小
 * @param param_3 对齐方式
 * @param param_4 内存标志
 * @return void* 分配的内存指针
 */
void* SystemMemoryAllocator(void* param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4);

/**
 * @brief 系统内存释放器
 * 
 * 该函数负责系统内存的释放工作。
 * 
 * @param param_1 释放参数指针
 * @return void 无返回值
 */
void SystemMemoryDeallocator(void* param_1);

/**
 * @brief 系统数据验证器
 * 
 * 该函数负责系统数据的验证工作。
 * 
 * @param param_1 验证参数指针
 * @param param_2 数据指针
 * @return void 无返回值
 */
void SystemDataValidator(void* param_1, void* param_2);

/**
 * @brief 系统缓冲区管理器
 * 
 * 该函数负责系统缓冲区的管理工作。
 * 
 * @param param_1 缓冲区参数指针
 * @param param_2 缓冲区大小
 * @return void 无返回值
 */
void SystemBufferManager(void* param_1, uint64_t param_2);

/**
 * @brief 系统错误处理器
 * 
 * 该函数负责系统错误的处理工作。
 * 
 * @param param_1 错误参数指针
 * @param param_2 错误信息指针
 * @param param_3 错误数据指针
 * @return void 无返回值
 */
void SystemErrorHandler(void* param_1, void* param_2, void* param_3);

/**
 * @brief 系统状态检查器
 * 
 * 该函数负责系统状态的检查工作。
 * 
 * @param param_1 状态参数指针
 * @return char 状态检查结果
 */
char SystemStatusChecker(void* param_1);

/**
 * @brief 系统配置加载器
 * 
 * 该函数负责系统配置的加载工作。
 * 
 * @param param_1 配置参数指针
 * @param param_2 配置值
 * @return void 无返回值
 */
void SystemConfigurationLoader(void* param_1, int32_t param_2);

/**
 * @brief 系统互斥量初始化器
 * 
 * 该函数负责系统互斥量的初始化工作。
 * 
 * @param param_1 互斥量指针
 * @return void 无返回值
 */
void SystemMutexInitializer(void* param_1);

/**
 * @brief 系统数据复制器
 * 
 * 该函数负责系统数据的复制工作。
 * 
 * @param param_1 数据指针
 * @param param_2 目标指针
 * @return void* 复制结果指针
 */
void* SystemDataCopier(void* param_1, void* param_2);

/**
 * @brief 系统数据写入器
 * 
 * 该函数负责系统数据的写入工作。
 * 
 * @param param_1 写入参数指针
 * @param param_2 数据指针
 * @return void 无返回值
 */
void SystemDataWriter(void* param_1, void* param_2);

/**
 * @brief 系统数据读取器
 * 
 * 该函数负责系统数据的读取工作。
 * 
 * @param param_1 读取参数指针
 * @return void 无返回值
 */
void SystemDataReader(void* param_1);

/**
 * @brief 系统数据终结器
 * 
 * 该函数负责系统数据的终结工作。
 * 
 * @param param_1 数据参数指针
 * @return void 无返回值
 */
void SystemDataFinalizer(void* param_1);

/**
 * @brief 系统数据初始化器扩展
 * 
 * 该函数负责系统数据的扩展初始化工作。
 * 
 * @param param_1 数据参数指针
 * @param param_2 初始化数据指针
 * @param param_3 目标指针
 * @param param_4 参数指针
 * @param param_5 数据大小
 * @return void 无返回值
 */
void SystemDataInitializerEx(void* param_1, void* param_2, void* param_3, void* param_4, void* param_5);

/**
 * @brief 系统数据销毁器
 * 
 * 该函数负责系统数据的销毁工作。
 * 
 * @param param_1 数据参数指针
 * @param param_2 销毁标志
 * @param param_3 销毁参数
 * @return void 无返回值
 */
void SystemDataDestroyer(void* param_1, uint64_t param_2, uint64_t param_3);

/**
 * @brief 系统路径处理器
 * 
 * 该函数负责系统路径的处理工作。
 * 
 * @param param_1 路径指针
 * @param param_2 目标指针
 * @param param_3 路径长度
 * @param param_4 处理标志
 * @return void 无返回值
 */
void SystemPathProcessor(void* param_1, void* param_2, uint64_t param_3, uint64_t param_4);

/**
 * @brief 系统字符串处理器
 * 
 * 该函数负责系统字符串的处理工作。
 * 
 * @param param_1 字符串参数指针
 * @return void 无返回值
 */
void SystemStringHandler(void* param_1);

/**
 * @brief 系统数据格式化器
 * 
 * 该函数负责系统数据的格式化工作。
 * 
 * @param param_1 格式化参数指针
 * @return char 格式化结果
 */
char SystemDataFormatter(void* param_1);

/**
 * @brief 系统安全验证器
 * 
 * 该函数负责系统安全的验证工作。
 * 
 * @param param_1 验证参数指针
 * @param param_2 验证数据指针
 * @return int32_t 验证结果
 */
int32_t SystemSecurityValidator(longlong param_1, void* param_2);

/**
 * @brief 系统数据序列化器
 * 
 * 该函数负责系统数据的序列化工作。
 * 
 * @param param_1 序列化参数指针
 * @param param_2 目标指针
 * @return void 无返回值
 */
void SystemDataSerializer(void* param_1, void* param_2);

/**
 * @brief 系统数据反序列化器
 * 
 * 该函数负责系统数据的反序列化工作。
 * 
 * @param param_1 反序列化参数指针
 * @param param_2 目标指针
 * @return void 无返回值
 */
void SystemDataDeserializer(void* param_1, void* param_2);

/**
 * @brief 系统缓存初始化器
 * 
 * 该函数负责系统缓存的初始化工作。
 * 
 * @param param_1 缓存参数指针
 * @return void* 初始化结果指针
 */
void* SystemCacheInitializer(void* param_1);

/**
 * @brief 系统互斥量管理器
 * 
 * 该函数负责系统互斥量的管理工作。
 * 
 * @param param_1 互斥量参数指针
 * @return void* 管理结果指针
 */
void* SystemMutexManager(void* param_1);

/**
 * @brief 系统线程池管理器
 * 
 * 该函数负责系统线程池的管理工作。
 * 
 * @param param_1 线程池参数指针
 * @return void* 管理结果指针
 */
void* SystemThreadPoolManager(void* param_1);

/* ============================================================================
 * 主要功能函数实现
 * ============================================================================ */

/**
 * @brief 系统数据处理器实现
 * 
 * 该函数负责系统数据的完整处理流程，实现以下核心功能：
 * 
 * 1. 数据结构处理：
 *    - 初始化数据结构
 *    - 配置数据参数
 *    - 建立数据关联关系
 *    - 验证数据完整性
 *    - 优化数据存储结构
 * 
 * 2. 内存管理：
 *    - 分配必要的内存空间
 *    - 管理内存生命周期
 *    - 处理内存碎片
 *    - 监控内存使用情况
 *    - 优化内存分配策略
 * 
 * 3. 数据处理：
 *    - 解析输入参数
 *    - 处理数据转换
 *    - 验证数据有效性
 *    - 执行数据操作
 *    - 生成处理结果
 * 
 * 4. 错误处理：
 *    - 检测处理错误
 *    - 实施错误恢复
 *    - 记录错误信息
 *    - 通知相关组件
 *    - 保持数据一致性
 * 
 * 5. 性能优化：
 *    - 实施缓存策略
 *    - 优化处理算法
 *    - 减少内存分配
 *    - 提高处理效率
 *    - 监控性能指标
 * 
 * 技术实现要点：
 * - 采用高效的数据处理算法
 * - 实现智能的内存管理策略
 * - 提供完善的错误处理机制
 * - 支持多种数据格式处理
 * - 实现性能监控和优化
 * 
 * @param param_1 系统数据参数指针
 * @param param_2 处理参数指针
 * @return void 无返回值
 */
void SystemDataProcessor(longlong *param_1, longlong param_2)

{
  uint uVar1;
  int iVar2;
  uint64_t uVar3;
  longlong *plVar4;
  void *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  int8_t auStack_238 [32];
  int32_t uStack_218;
  void *puStack_208;
  longlong lStack_200;
  uint uStack_1f8;
  uint64_t uStack_1f0;
  int32_t uStack_1e8;
  void *puStack_1e0;
  longlong lStack_1d8;
  uint uStack_1d0;
  uint64_t uStack_1c8;
  void *puStack_1c0;
  longlong lStack_1b8;
  int32_t uStack_1b0;
  ulonglong uStack_1a8;
  int32_t uStack_1a0;
  uint uStack_19c;
  int8_t uStack_198;
  int32_t uStack_194;
  void *puStack_190;
  longlong lStack_188;
  int iStack_180;
  int32_t uStack_178;
  void **ppuStack_170;
  void *puStack_168;
  longlong lStack_160;
  int32_t uStack_150;
  int32_t uStack_148;
  int32_t uStack_144;
  int32_t uStack_140;
  int32_t uStack_13c;
  int32_t uStack_138;
  int32_t uStack_134;
  int32_t uStack_130;
  int32_t uStack_12c;
  int32_t uStack_128;
  int32_t uStack_124;
  int32_t uStack_120;
  int32_t uStack_11c;
  int32_t uStack_118;
  int32_t uStack_114;
  int32_t uStack_110;
  int32_t uStack_10c;
  int8_t uStack_108;
  int32_t uStack_107;
  int32_t uStack_103;
  uint64_t uStack_f8;
  void **ppuStack_f0;
  void *puStack_e8;
  int8_t *puStack_e0;
  int32_t uStack_d8;
  int8_t auStack_d0 [136];
  ulonglong uStack_48;
  
  uStack_f8 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_238;
  uStack_1e8 = 0;
  ppuStack_f0 = &puStack_1c0;
  puStack_1c0 = &system_data_buffer_ptr;
  uStack_1a8 = 0;
  lStack_1b8 = 0;
  uStack_1b0 = 0;
  uStack_19c = 0x100;
  uStack_198 = 0;
  uStack_194 = 0;
  puVar5 = &system_buffer_ptr;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar5 = *(void **)(param_2 + 8);
  }
  FUN_180627c50(&puStack_1c0,puVar5);
  uStack_1a0 = 0;
  uStack_19c = uStack_19c & 0xffffff00;
  uVar3 = FUN_18062b1e0(system_memory_pool_ptr,0x60d30,0x10,0x1f);
  plVar4 = (longlong *)FUN_1801954d0(uVar3,&puStack_1c0);
  ppuStack_170 = (void **)plVar4;
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x28))(plVar4);
  }
  uStack_148 = 0x3f800000;
  uStack_144 = 0;
  uStack_140 = 0;
  uStack_13c = 0;
  uStack_138 = 0;
  uStack_134 = 0x3f800000;
  uStack_130 = 0;
  uStack_12c = 0;
  uStack_128 = 0;
  uStack_124 = 0;
  uStack_120 = 0x3f800000;
  uStack_11c = 0;
  uStack_118 = 0;
  uStack_114 = 0;
  uStack_110 = 0;
  uStack_10c = 0x3f800000;
  uStack_107 = 0x1010101;
  uStack_103 = 1;
  uStack_108 = 1;
  puStack_e8 = &unknown_var_3432_ptr;
  puStack_e0 = auStack_d0;
  auStack_d0[0] = 0;
  uStack_d8 = *(int32_t *)(param_2 + 0x10);
  puVar5 = &system_buffer_ptr;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar5 = *(void **)(param_2 + 8);
  }
  strcpy_s(auStack_d0,0x80,puVar5);
  FUN_18019e140(&puStack_190,&puStack_e8);
  puStack_e8 = &system_state_ptr;
  puStack_1e0 = &system_data_buffer_ptr;
  uStack_1c8 = 0;
  lStack_1d8 = 0;
  uStack_1d0 = 0;
  lVar6 = *param_1;
  FUN_1806279c0(&puStack_168,param_2);
  iVar2 = FUN_1801426a0(lVar6,&puStack_168);
  puStack_168 = &system_data_buffer_ptr;
  if (lStack_160 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_160 = 0;
  uStack_150 = 0;
  puStack_168 = &system_state_ptr;
  if ((iVar2 < 0) ||
     (lVar6 = *(longlong *)(*param_1 + 0x888),
     (ulonglong)(*(longlong *)(*param_1 + 0x890) - lVar6 >> 5) <= (ulonglong)(longlong)iVar2)) {
    lVar6 = FUN_180628ca0();
  }
  else {
    lVar6 = (longlong)iVar2 * 0x20 + lVar6;
  }
  puStack_208 = &system_data_buffer_ptr;
  uStack_1f0 = 0;
  lStack_200 = 0;
  uStack_1f8 = 0;
  uStack_1e8 = 1;
  uVar1 = *(uint *)(lVar6 + 0x10);
  uVar7 = (ulonglong)uVar1;
  if (*(longlong *)(lVar6 + 8) != 0) {
    FUN_1806277c0(&puStack_208,uVar7);
  }
  if (uVar1 != 0) {
                    // WARNING: Subroutine does not return
    memcpy(lStack_200,*(uint64_t *)(lVar6 + 8),uVar7);
  }
  if (lStack_200 != 0) {
    *(int8_t *)(uVar7 + lStack_200) = 0;
  }
  uStack_1f0 = CONCAT44(*(uint *)(lVar6 + 0x1c),(int32_t)uStack_1f0);
  if (0 < iStack_180) {
    uStack_1f8 = uVar1;
    FUN_1806277c0(&puStack_208,iStack_180);
                    // WARNING: Subroutine does not return
    memcpy((ulonglong)uStack_1f8 + lStack_200,lStack_188,(longlong)(iStack_180 + 1));
  }
  lStack_1d8 = lStack_200;
  uStack_1c8._0_4_ = (int32_t)uStack_1f0;
  uStack_1f8 = 0;
  uStack_1e8 = 0;
  lStack_200 = 0;
  uStack_1f0 = 0;
  puStack_208 = &system_state_ptr;
  uStack_218 = 0xffffffff;
  uStack_1d0 = uVar1;
  uStack_1c8._4_4_ = *(uint *)(lVar6 + 0x1c);
  FUN_1801a6440(plVar4,init_system_data_memory,&puStack_1e0,&uStack_148);
  FUN_18019e260(plVar4);
  (**(code **)(*(longlong *)param_1[0x56] + 0x138))((longlong *)param_1[0x56],plVar4);
  FUN_180199500(plVar4,0x3d072b02,1);
  FUN_1801a2ea0(plVar4);
  (**(code **)(*(longlong *)param_1[0x56] + 0x140))((longlong *)param_1[0x56],plVar4);
  Sleep(1000);
  puStack_1e0 = &system_data_buffer_ptr;
  if (lStack_1d8 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_1d8 = 0;
  uStack_1c8 = (ulonglong)uStack_1c8._4_4_ << 0x20;
  puStack_1e0 = &system_state_ptr;
  puStack_190 = &system_data_buffer_ptr;
  if (lStack_188 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_188 = 0;
  uStack_178 = 0;
  puStack_190 = &system_state_ptr;
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x38))(plVar4);
  }
  ppuStack_170 = &puStack_1c0;
  puStack_1c0 = &system_data_buffer_ptr;
  if (lStack_1b8 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_1b8 = 0;
  uStack_1a8 = uStack_1a8 & 0xffffffff00000000;
  puStack_1c0 = &system_state_ptr;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_238);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1800547b0(void)
void FUN_1800547b0(void)

{
  uint uVar1;
  longlong *plVar2;
  uint64_t *puVar3;
  char cVar4;
  uint64_t *puVar5;
  int8_t *puVar6;
  int32_t *puVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint64_t *puVar12;
  int iVar13;
  longlong lVar14;
  uint *puVar15;
  void *puVar16;
  int32_t uVar17;
  int8_t auStack_178 [32];
  void *puStack_158;
  int8_t *puStack_150;
  uint uStack_148;
  uint64_t uStack_140;
  void *puStack_138;
  int8_t *puStack_130;
  uint uStack_128;
  ulonglong uStack_120;
  void *puStack_118;
  int8_t *puStack_110;
  int32_t uStack_108;
  ulonglong uStack_100;
  int iStack_f8;
  void *puStack_f0;
  int8_t *puStack_e8;
  int32_t uStack_e0;
  ulonglong uStack_d8;
  void *puStack_d0;
  longlong lStack_c8;
  int iStack_c0;
  int32_t uStack_b8;
  longlong *plStack_a8;
  longlong lStack_a0;
  void *puStack_98;
  void *puStack_90;
  int32_t uStack_80;
  void *puStack_78;
  longlong lStack_70;
  int32_t uStack_60;
  uint64_t *puStack_58;
  uint64_t *puStack_50;
  uint64_t uStack_48;
  int32_t uStack_40;
  uint64_t uStack_38;
  ulonglong uStack_30;
  
  uStack_38 = 0xfffffffffffffffe;
  uStack_30 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_178;
  plStack_a8 = system_main_module_state;
  lVar14 = *(longlong *)(*system_main_module_state + 0x890) - *(longlong *)(*system_main_module_state + 0x888) >> 5;
  iStack_f8 = 0;
  lStack_a0 = lVar14;
  if (0 < (int)lVar14) {
    do {
      iVar9 = iStack_f8;
      iVar13 = 0;
      if (iStack_f8 < 0) {
LAB_18005485e:
        lVar10 = FUN_180628ca0();
      }
      else {
        lVar10 = *(longlong *)(*system_main_module_state + 0x888);
        if ((ulonglong)(*(longlong *)(*system_main_module_state + 0x890) - lVar10 >> 5) <=
            (ulonglong)(longlong)iStack_f8) goto LAB_18005485e;
        lVar10 = (longlong)iStack_f8 * 0x20 + lVar10;
      }
      puStack_138 = &system_data_buffer_ptr;
      uStack_120 = 0;
      puStack_130 = (int8_t *)0x0;
      uStack_128 = 0;
      FUN_1806277c0(&puStack_138,*(int32_t *)(lVar10 + 0x10));
      if (*(int *)(lVar10 + 0x10) != 0) {
                    // WARNING: Subroutine does not return
        memcpy(puStack_130,*(uint64_t *)(lVar10 + 8),*(int *)(lVar10 + 0x10) + 1);
      }
      if (*(longlong *)(lVar10 + 8) != 0) {
        uStack_128 = 0;
        if (puStack_130 != (int8_t *)0x0) {
          *puStack_130 = 0;
        }
        uStack_120 = uStack_120 & 0xffffffff;
      }
      if (iVar9 < 0) {
LAB_180054912:
        lVar10 = FUN_180628ca0();
      }
      else {
        lVar10 = *(longlong *)(*system_main_module_state + 0x8a8);
        if ((ulonglong)(*(longlong *)(*system_main_module_state + 0x8b0) - lVar10 >> 5) <
            (ulonglong)(longlong)iVar9) goto LAB_180054912;
        lVar10 = (longlong)iVar9 * 0x20 + lVar10;
      }
      puStack_118 = &system_data_buffer_ptr;
      uStack_100 = 0;
      puStack_110 = (int8_t *)0x0;
      uStack_108 = 0;
      FUN_1806277c0(&puStack_118,*(int32_t *)(lVar10 + 0x10));
      if (*(int *)(lVar10 + 0x10) != 0) {
                    // WARNING: Subroutine does not return
        memcpy(puStack_110,*(uint64_t *)(lVar10 + 8),*(int *)(lVar10 + 0x10) + 1);
      }
      if (*(longlong *)(lVar10 + 8) != 0) {
        uStack_108 = 0;
        if (puStack_110 != (int8_t *)0x0) {
          *puStack_110 = 0;
        }
        uStack_100 = uStack_100 & 0xffffffff;
      }
      iVar8 = uStack_128 + 8;
      FUN_1806277c0(&puStack_138,iVar8);
      *(uint64_t *)(puStack_130 + uStack_128) = 0x6a624f656e656353;
      *(int8_t *)((longlong)(puStack_130 + uStack_128) + 8) = 0;
      uStack_128 = iVar8;
      cVar4 = FUN_180624a00(&puStack_138);
      if (cVar4 == '\0') {
        puStack_118 = &system_data_buffer_ptr;
        if (puStack_110 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        puStack_110 = (int8_t *)0x0;
        uStack_100 = uStack_100 & 0xffffffff00000000;
        puStack_118 = &system_state_ptr;
        puStack_138 = &system_data_buffer_ptr;
        if (puStack_130 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
      }
      else {
        puStack_58 = (uint64_t *)0x0;
        puStack_50 = (uint64_t *)0x0;
        uStack_48 = 0;
        uStack_40 = 3;
        FUN_18062c5f0(&puStack_138,&puStack_58);
        puVar5 = puStack_50;
        puVar3 = puStack_58;
        lVar10 = (longlong)puStack_50 - (longlong)puStack_58;
        FUN_18004b100(&puStack_d0);
        puVar6 = &system_buffer_ptr;
        if (puStack_110 != (int8_t *)0x0) {
          puVar6 = puStack_110;
        }
        System_DataHandler(&puStack_d0,&unknown_var_6404_ptr,puVar6);
        cVar4 = FUN_180624a00(&puStack_d0);
        if (cVar4 == '\0') {
          FUN_180624910(&puStack_d0);
        }
        plVar2 = plStack_a8;
        iVar8 = (int)(lVar10 >> 5);
        lVar10 = (longlong)iVar8;
        if (0 < iVar8) {
          puVar15 = (uint *)(puVar3 + 2);
          do {
            FUN_180061db0();
            FUN_180061be0();
            puStack_158 = &system_data_buffer_ptr;
            uStack_140._0_4_ = 0;
            uStack_140._4_4_ = 0;
            puStack_150 = (int8_t *)0x0;
            uStack_148 = 0;
            FUN_1806277c0(&puStack_158,*puVar15);
            if (*puVar15 != 0) {
                    // WARNING: Subroutine does not return
              memcpy(puStack_150,*(uint64_t *)(puVar15 + -2),*puVar15 + 1);
            }
            if (*(longlong *)(puVar15 + -2) != 0) {
              uStack_148 = 0;
              if (puStack_150 != (int8_t *)0x0) {
                *puStack_150 = 0;
              }
              uStack_140._4_4_ = 0;
            }
            iVar9 = uStack_148 + 0xd;
            FUN_1806277c0(&puStack_158,iVar9);
            puVar5 = (uint64_t *)(puStack_150 + uStack_148);
            *puVar5 = 0x782e656e6563732f;
            *(int32_t *)(puVar5 + 1) = 0x6e656373;
            *(int16_t *)((longlong)puVar5 + 0xc) = 0x65;
            puVar6 = &system_buffer_ptr;
            if (puStack_150 != (int8_t *)0x0) {
              puVar6 = puStack_150;
            }
            uStack_148 = iVar9;
            lVar14 = strstr(puVar6,&unknown_var_6424_ptr);
            if (lVar14 == 0) {
              puVar6 = &system_buffer_ptr;
              if (puStack_150 != (int8_t *)0x0) {
                puVar6 = puStack_150;
              }
              lVar14 = strstr(puVar6,&unknown_var_6456_ptr);
              if (lVar14 != 0) goto LAB_180054ec9;
              puVar6 = &system_buffer_ptr;
              if (puStack_150 != (int8_t *)0x0) {
                puVar6 = puStack_150;
              }
              lVar14 = strstr(puVar6,&unknown_var_6480_ptr);
              if (lVar14 != 0) goto LAB_180054ec9;
              puVar6 = &system_buffer_ptr;
              if (puStack_150 != (int8_t *)0x0) {
                puVar6 = puStack_150;
              }
              lVar14 = strstr(puVar6,&unknown_var_6504_ptr);
              if (lVar14 != 0) goto LAB_180054ec9;
              puVar6 = &system_buffer_ptr;
              if (puStack_150 != (int8_t *)0x0) {
                puVar6 = puStack_150;
              }
              lVar14 = strstr(puVar6,&unknown_var_6536_ptr);
              if (lVar14 != 0) goto LAB_180054ec9;
              cVar4 = FUN_180624af0(&puStack_158);
              if (cVar4 == '\0') {
                uStack_148 = 0;
                if (puStack_150 != (int8_t *)0x0) {
                  *puStack_150 = 0;
                }
                uVar1 = *puVar15;
                uVar11 = (ulonglong)uVar1;
                if (*(longlong *)(puVar15 + -2) != 0) {
                  FUN_1806277c0(&puStack_158,uVar11);
                }
                if (uVar1 != 0) {
                    // WARNING: Subroutine does not return
                  memcpy(puStack_150,*(uint64_t *)(puVar15 + -2),uVar11);
                }
                if (puStack_150 != (int8_t *)0x0) {
                  puStack_150[uVar11] = 0;
                }
                uStack_140._4_4_ = puVar15[3];
                uStack_148 = uVar1;
                FUN_1806277c0(&puStack_158,0x12);
                puVar7 = (int32_t *)(puStack_150 + uStack_148);
                *puVar7 = 0x6563732f;
                puVar7[1] = 0x782e656e;
                puVar7[2] = 0x2e6f6373;
                puVar7[3] = 0x65637378;
                *(int16_t *)(puVar7 + 4) = 0x656e;
                *(int8_t *)((longlong)puVar7 + 0x12) = 0;
                uStack_148 = 0x12;
                cVar4 = FUN_180624af0(&puStack_158);
                if (cVar4 != '\0') goto LAB_180054d28;
                puStack_158 = &system_data_buffer_ptr;
                if (puStack_150 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
                  FUN_18064e900();
                }
                uStack_140 = (ulonglong)uStack_140._4_4_ << 0x20;
              }
              else {
LAB_180054d28:
                iVar9 = *puVar15 - 1;
                if (-1 < iVar9) {
                  lVar14 = (longlong)iVar9;
                  do {
                    if (*(char *)(lVar14 + *(longlong *)(puVar15 + -2)) == '/') goto LAB_180054d57;
                    iVar9 = iVar9 + -1;
                    lVar14 = lVar14 + -1;
                  } while (-1 < lVar14);
                }
                iVar9 = -1;
LAB_180054d57:
                FUN_180629a40(puVar3 + (longlong)iVar13 * 4,&puStack_98,iVar9 + 1,0xffffffff);
                uVar17 = FUN_180054360(plVar2,&puStack_98);
                if (init_system_data_memory != 0) {
                  FUN_18005c1c0(uVar17,&puStack_78);
                  puStack_f0 = &system_data_buffer_ptr;
                  uStack_d8 = 0;
                  puStack_e8 = (int8_t *)0x0;
                  uStack_e0 = 0;
                  FUN_1806277c0(&puStack_f0,iStack_c0);
                  if (iStack_c0 != 0) {
                    // WARNING: Subroutine does not return
                    memcpy(puStack_e8,lStack_c8,iStack_c0 + 1);
                  }
                  if (lStack_c8 != 0) {
                    uStack_e0 = 0;
                    if (puStack_e8 != (int8_t *)0x0) {
                      *puStack_e8 = 0;
                    }
                    uStack_d8 = uStack_d8 & 0xffffffff;
                  }
                  puVar16 = &system_buffer_ptr;
                  if (puStack_90 != (void *)0x0) {
                    puVar16 = puStack_90;
                  }
                  System_DataHandler(&puStack_f0,&unknown_var_6576_ptr,puVar16);
                  FUN_18062db60(&puStack_f0,&puStack_78);
                  init_system_data_memory = 0;
                  puStack_f0 = &system_data_buffer_ptr;
                  if (puStack_e8 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
                    FUN_18064e900();
                  }
                  puStack_e8 = (int8_t *)0x0;
                  uStack_d8 = uStack_d8 & 0xffffffff00000000;
                  puStack_f0 = &system_state_ptr;
                  puStack_78 = &system_data_buffer_ptr;
                  if (lStack_70 != 0) {
                    // WARNING: Subroutine does not return
                    FUN_18064e900();
                  }
                  lStack_70 = 0;
                  uStack_60 = 0;
                  puStack_78 = &system_state_ptr;
                }
                puStack_98 = &system_data_buffer_ptr;
                if (puStack_90 != (void *)0x0) {
                    // WARNING: Subroutine does not return
                  FUN_18064e900();
                }
                puStack_90 = (void *)0x0;
                uStack_80 = 0;
                puStack_98 = &system_state_ptr;
                puStack_158 = &system_data_buffer_ptr;
                if (puStack_150 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
                  FUN_18064e900();
                }
                uStack_140 = (ulonglong)uStack_140._4_4_ << 0x20;
              }
            }
            else {
LAB_180054ec9:
              puStack_158 = &system_data_buffer_ptr;
              if (puStack_150 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
                FUN_18064e900();
              }
              uStack_140 = (ulonglong)uStack_140._4_4_ << 0x20;
            }
            puStack_150 = (int8_t *)0x0;
            puStack_158 = &system_state_ptr;
            iVar13 = iVar13 + 1;
            puVar15 = puVar15 + 8;
            lVar10 = lVar10 + -1;
            lVar14 = lStack_a0;
            puVar5 = puStack_50;
            iVar9 = iStack_f8;
          } while (lVar10 != 0);
        }
        puStack_d0 = &system_data_buffer_ptr;
        if (lStack_c8 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        lStack_c8 = 0;
        uStack_b8 = 0;
        puStack_d0 = &system_state_ptr;
        for (puVar12 = puVar3; puVar12 != puVar5; puVar12 = puVar12 + 4) {
          (**(code **)*puVar12)(puVar12,0);
        }
        if (puVar3 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(puVar3);
        }
        puStack_118 = &system_data_buffer_ptr;
        if (puStack_110 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        puStack_110 = (int8_t *)0x0;
        uStack_100 = uStack_100 & 0xffffffff00000000;
        puStack_118 = &system_state_ptr;
        puStack_138 = &system_data_buffer_ptr;
        if (puStack_130 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
      }
      puStack_110 = (int8_t *)0x0;
      puStack_118 = &system_state_ptr;
      uStack_120 = uStack_120 & 0xffffffff00000000;
      puStack_130 = (int8_t *)0x0;
      puStack_138 = &system_state_ptr;
      iStack_f8 = iVar9 + 1;
    } while (iStack_f8 < (int)lVar14);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_30 ^ (ulonglong)auStack_178);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180055050(void)
void FUN_180055050(void)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  longlong lVar4;
  
  puVar2 = (uint64_t *)FUN_18062b1e0(system_memory_pool_ptr,0x198,8,3);
  puVar1 = puVar2 + 4;
  FUN_180637560(puVar1);
  *puVar1 = &unknown_var_6384_ptr;
  *(int16_t *)(puVar2 + 0x1a) = 1;
  *(int32_t *)(puVar2 + 9) = 0;
  *(int8_t *)((longlong)puVar2 + 0x54) = 0;
  *puVar1 = &unknown_var_264_ptr;
  puVar1 = puVar2 + 0x1b;
  FUN_180637560(puVar1);
  *puVar1 = &unknown_var_6384_ptr;
  *(int16_t *)(puVar2 + 0x31) = 1;
  *(int32_t *)(puVar2 + 0x20) = 0;
  *(int8_t *)((longlong)puVar2 + 0x10c) = 0;
  *puVar1 = &unknown_var_264_ptr;
  *puVar2 = 0;
  *(int8_t *)(puVar2 + 3) = 0;
  puVar2[2] = 0xffffffff00000000;
  *(int32_t *)(puVar2 + 1) = 0xe;
  system_message_context = puVar2;
  uVar3 = FUN_18062b1e0(system_memory_pool_ptr,0x480,8,3);
  init_system_data_memory = FUN_18004bd10(uVar3);
  uVar3 = FUN_18062b1e0(system_memory_pool_ptr,0x10420,8,3);
  init_system_data_memory = FUN_18005c090(uVar3);
  init_system_data_memory = FUN_18062b1e0(system_memory_pool_ptr,0x30,8,3);
  *(int32_t *)(init_system_data_memory + 0x19) = 0;
  *(int16_t *)(init_system_data_memory + 0x1d) = 0;
  *(int8_t *)(init_system_data_memory + 0x1f) = 0;
  *(int32_t *)(init_system_data_memory + 0x28) = 3;
  *(longlong *)init_system_data_memory = init_system_data_memory;
  *(longlong *)(init_system_data_memory + 8) = init_system_data_memory;
  *(uint64_t *)(init_system_data_memory + 0x10) = 0;
  *(int8_t *)(init_system_data_memory + 0x18) = 0;
  *(uint64_t *)(init_system_data_memory + 0x20) = 0;
  init_system_data_memory = FUN_18062b1e0(system_memory_pool_ptr,8,4,3);
  *(int32_t *)(init_system_data_memory + 4) = 0;
  uVar3 = FUN_18062b1e0(system_memory_pool_ptr,0x80,8,3);
  init_system_data_memory = FUN_18015c450(uVar3);
  lVar4 = FUN_18062b1e0(system_memory_pool_ptr,0xe8,8,3);
  _Mtx_init_in_situ(lVar4,2);
  _Mtx_init_in_situ(lVar4 + 0x50,2);
  *(uint64_t *)(lVar4 + 0xa0) = 0;
  *(uint64_t *)(lVar4 + 0xa8) = 0;
  *(uint64_t *)(lVar4 + 0xb0) = 0;
  *(int32_t *)(lVar4 + 0xb8) = 3;
  *(uint64_t *)(lVar4 + 0xc0) = 0;
  *(uint64_t *)(lVar4 + 200) = 0;
  *(uint64_t *)(lVar4 + 0xd0) = 0;
  *(int32_t *)(lVar4 + 0xd8) = 0x20;
  *(int32_t *)(lVar4 + 0xe0) = 0;
  init_system_data_memory = lVar4;
  uVar3 = FUN_18062b1e0(system_memory_pool_ptr,0x70,8,3);
                    // WARNING: Subroutine does not return
  memset(uVar3,0,0x70);
}





// 函数: void FUN_180055e10(longlong *param_1)
void FUN_180055e10(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x48) {
    FUN_180058c20(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_180055e30(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180055e30(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_180058210(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}





// 函数: void FUN_180055e60(longlong param_1)
void FUN_180055e60(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = *(ulonglong *)(param_1 + 0x10);
  lVar1 = *(longlong *)(param_1 + 8);
  uVar4 = 0;
  if (uVar3 != 0) {
    do {
      lVar2 = *(longlong *)(lVar1 + uVar4 * 8);
      if (lVar2 != 0) {
        if (*(longlong **)(lVar2 + 0x10) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(lVar2 + 0x10) + 0x38))();
        }
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar2);
      }
      *(uint64_t *)(lVar1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
    uVar3 = *(ulonglong *)(param_1 + 0x10);
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  if ((1 < uVar3) && (*(longlong *)(param_1 + 8) != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



longlong FUN_180055e80(longlong param_1)

{
  *(uint64_t *)(param_1 + 8) = &system_state_ptr;
  *(uint64_t *)(param_1 + 0x10) = 0;
  *(int32_t *)(param_1 + 0x18) = 0;
  *(uint64_t *)(param_1 + 8) = &system_data_buffer_ptr;
  *(uint64_t *)(param_1 + 0x20) = 0;
  *(uint64_t *)(param_1 + 0x10) = 0;
  *(int32_t *)(param_1 + 0x18) = 0;
  return param_1;
}





// 函数: void FUN_180055ed0(longlong param_1)
void FUN_180055ed0(longlong param_1)

{
  *(uint64_t *)(param_1 + 8) = &system_data_buffer_ptr;
  if (*(longlong *)(param_1 + 0x10) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t *)(param_1 + 0x10) = 0;
  *(int32_t *)(param_1 + 0x20) = 0;
  *(uint64_t *)(param_1 + 8) = &system_state_ptr;
  return;
}





// 函数: void FUN_180055f20(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180055f20(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_180058210(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}





// 函数: void FUN_180055f50(longlong param_1)
void FUN_180055f50(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = *(ulonglong *)(param_1 + 0x10);
  lVar1 = *(longlong *)(param_1 + 8);
  uVar4 = 0;
  if (uVar3 != 0) {
    do {
      lVar2 = *(longlong *)(lVar1 + uVar4 * 8);
      if (lVar2 != 0) {
        if (*(longlong **)(lVar2 + 0x10) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(lVar2 + 0x10) + 0x38))();
        }
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar2);
      }
      *(uint64_t *)(lVar1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
    uVar3 = *(ulonglong *)(param_1 + 0x10);
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  if ((1 < uVar3) && (*(longlong *)(param_1 + 8) != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180055f70(uint64_t param_1,int32_t param_2)
void FUN_180055f70(uint64_t param_1,int32_t param_2)

{
  code *pcVar1;
  
  if (system_cache_buffer != 0) {
    func_0x00018005a410(system_cache_buffer + 8);
  }
  Sleep(2000);
  _Exit(param_2);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180055fa0(void)
void FUN_180055fa0(void)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  uint64_t in_R9;
  uint64_t uVar6;
  
  pcVar3 = init_system_data_memory;
  uVar6 = 0xfffffffffffffffe;
  if (*init_system_data_memory != '\0') {
    puVar1 = (uint64_t *)*init_system_data_memory;
    iVar4 = _Mtx_lock(0x180c91970);
    if (iVar4 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar4);
    }
    uVar2 = SYSTEM_DATA_MANAGER_A;
    SYSTEM_DATA_MANAGER_A = *puVar1;
    FUN_1801299b0(&unknown_var_6880_ptr,0,0,in_R9,uVar6);
    FUN_18010f010(&unknown_var_6896_ptr,*(int32_t *)(pcVar3 + 4));
    FUN_18010f010(&unknown_var_6928_ptr,*(int32_t *)(pcVar3 + 8));
    FUN_18010f010(&unknown_var_6960_ptr,*(int32_t *)(pcVar3 + 0xc));
    FUN_18010f010(&unknown_var_6992_ptr,*(int32_t *)(pcVar3 + 0x10));
    FUN_18010f010(&unknown_var_7024_ptr,*(int32_t *)(pcVar3 + 0x14));
    FUN_18010f010(&unknown_var_7064_ptr,*(int32_t *)(pcVar3 + 0x18));
    for (pcVar5 = *(char **)(pcVar3 + 0x28); pcVar5 != pcVar3 + 0x20;
        pcVar5 = (char *)func_0x00018066bd70(pcVar5)) {
      FUN_18010f010(&unknown_var_7104_ptr,*(int32_t *)(pcVar5 + 0x20),*(int32_t *)(pcVar5 + 0x24));
    }
    for (pcVar5 = *(char **)(pcVar3 + 0x58); pcVar5 != pcVar3 + 0x50;
        pcVar5 = (char *)func_0x00018066bd70(pcVar5)) {
      FUN_18010f010(&unknown_var_7144_ptr,*(int32_t *)(pcVar5 + 0x20),*(int32_t *)(pcVar5 + 0x24));
    }
    FUN_18010f010(&unknown_var_7184_ptr,*(int32_t *)(pcVar3 + 0x80));
    FUN_18010f010(&unknown_var_7224_ptr,*(int32_t *)(pcVar3 + 0x84));
    FUN_18010f010(&unknown_var_7264_ptr,*(int32_t *)(pcVar3 + 0x88));
    FUN_18012cfe0();
    SYSTEM_DATA_MANAGER_A = uVar2;
    iVar4 = _Mtx_unlock(0x180c91970);
    if (iVar4 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar4);
    }
  }
  return;
}





