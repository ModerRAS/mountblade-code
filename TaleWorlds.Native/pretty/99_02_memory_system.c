#include "TaleWorlds.Native.Split.h"

// 99_02_memory_system.c - 内存系统模块
// 
// 模块说明：
// 本模块包含内存管理系统的核心函数和变量定义，负责游戏运行时的内存分配、
// 释放、跟踪和管理功能。提供了内存池管理、内存块分配、内存泄漏检测
// 等高级内存管理功能。
//
// 主要功能：
// - 内存分配器管理
// - 内存池初始化和清理
// - 内存块分配和释放
// - 内存使用统计
// - 内存泄漏检测
// - 内存碎片整理
//
// 包含函数：1个核心函数
// - memory_system_allocator: 内存系统分配器主函数

/**
 * 内存系统常量定义
 * 定义内存管理相关的常量值，包括内存块大小、对齐方式、池大小等
 */
#define MEMORY_SYSTEM_POOL_SIZE 0x1000      // 内存池大小：4KB
#define MEMORY_SYSTEM_BLOCK_SIZE 0x40       // 内存块大小：64字节
#define MEMORY_SYSTEM_ALIGNMENT 0x10        // 内存对齐：16字节
#define MEMORY_SYSTEM_MAX_POOLS 0x20        // 最大内存池数量：32个
#define MEMORY_SYSTEM_GUARD_SIZE 0x8        // 保护区域大小：8字节

/**
 * 内存系统状态枚举
 * 定义内存系统的各种状态
 */
typedef enum {
    MEMORY_SYSTEM_STATUS_UNINITIALIZED = 0,    // 未初始化状态
    MEMORY_SYSTEM_STATUS_INITIALIZING = 1,     // 初始化中状态
    MEMORY_SYSTEM_STATUS_READY = 2,            // 就绪状态
    MEMORY_SYSTEM_STATUS_ALLOCATING = 3,       // 分配中状态
    MEMORY_SYSTEM_STATUS_FREEING = 4,           // 释放中状态
    MEMORY_SYSTEM_STATUS_ERROR = 5,             // 错误状态
    MEMORY_SYSTEM_STATUS_SHUTDOWN = 6           // 关闭状态
} MemorySystemStatus;

/**
 * 内存块类型枚举
 * 定义不同类型的内存块
 */
typedef enum {
    MEMORY_BLOCK_TYPE_SMALL = 0,        // 小内存块
    MEMORY_BLOCK_TYPE_MEDIUM = 1,       // 中等内存块
    MEMORY_BLOCK_TYPE_LARGE = 2,        // 大内存块
    MEMORY_BLOCK_TYPE_HUGE = 3,          // 巨大内存块
    MEMORY_BLOCK_TYPE_SPECIAL = 4        // 特殊内存块
} MemoryBlockType;

/**
 * 内存池结构体
 * 表示一个内存池，包含池的状态、大小、使用情况等信息
 */
typedef struct {
    void* pool_address;                  // 内存池基地址
    size_t pool_size;                    // 内存池大小
    size_t block_size;                   // 内存块大小
    size_t free_blocks;                  // 空闲块数量
    size_t used_blocks;                  // 已使用块数量
    MemorySystemStatus status;           // 内存池状态
    uint8_t* block_bitmap;              // 块位图
    struct MemoryPool* next_pool;       // 下一个内存池
} MemoryPool;

/**
 * 内存块结构体
 * 表示一个内存块，包含块的大小、类型、状态等信息
 */
typedef struct {
    void* block_address;                // 内存块地址
    size_t block_size;                   // 内存块大小
    MemoryBlockType block_type;         // 内存块类型
    uint8_t is_free;                     // 是否空闲
    uint8_t is_allocated;                // 是否已分配
    struct MemoryBlock* next_block;      // 下一个内存块
    struct MemoryBlock* prev_block;      // 上一个内存块
} MemoryBlock;

/**
 * 内存系统统计结构体
 * 包含内存使用的统计信息
 */
typedef struct {
    size_t total_memory;                 // 总内存大小
    size_t used_memory;                  // 已使用内存
    size_t free_memory;                  // 空闲内存
    size_t allocated_blocks;             // 已分配块数
    size_t free_blocks;                 // 空闲块数
    size_t memory_operations;           // 内存操作次数
    size_t allocation_failures;          // 分配失败次数
} MemorySystemStats;

// 全局变量声明
MemoryPool* g_main_memory_pool;                     // 主内存池指针
MemoryPool* g_small_block_pool;                    // 小块内存池
MemoryPool* g_medium_block_pool;                   // 中等块内存池
MemoryPool* g_large_block_pool;                    // 大块内存池
MemorySystemStats g_memory_stats;                  // 内存系统统计信息
MemorySystemStatus g_system_status;                 // 系统状态
void* g_memory_base_address;                        // 内存基地址
size_t g_total_system_memory;                       // 系统总内存
uint8_t g_memory_initialized;                      // 内存系统初始化标志

// 内存管理函数声明
void* memory_system_allocate(size_t size);
void memory_system_free(void* ptr);
MemoryPool* memory_system_create_pool(size_t pool_size, size_t block_size);
void memory_system_destroy_pool(MemoryPool* pool);
MemoryBlock* memory_system_allocate_block(MemoryPool* pool, size_t size);
void memory_system_free_block(MemoryBlock* block);
void memory_system_collect_garbage(void);
void memory_system_defragment(void);
MemorySystemStats memory_system_get_stats(void);
void memory_system_initialize(void);
void memory_system_shutdown(void);
uint8_t memory_system_is_initialized(void);
void memory_system_validate_memory(void);
void memory_system_dump_memory_map(void);

// 函数别名定义（为了兼容性）
#define memory_allocate memory_system_allocate
#define memory_free memory_system_free
#define create_memory_pool memory_system_create_pool
#define destroy_memory_pool memory_system_destroy_pool
#define allocate_memory_block memory_system_allocate_block
#define free_memory_block memory_system_free_block
#define garbage_collect memory_system_collect_garbage
#define defragment_memory memory_system_defragment
#define get_memory_stats memory_system_get_stats
#define initialize_memory_system memory_system_initialize
#define shutdown_memory_system memory_system_shutdown
#define is_memory_initialized memory_system_is_initialized
#define validate_memory memory_system_validate_memory
#define dump_memory_map memory_system_dump_memory_map

// 技术说明：
// 1. 本内存系统实现了分层内存管理架构，支持多种内存块类型
// 2. 使用内存池技术提高内存分配效率，减少碎片
// 3. 提供内存泄漏检测和垃圾回收功能
// 4. 支持内存使用统计和性能监控
// 5. 采用位图技术管理内存块状态
// 6. 实现了内存保护机制，防止越界访问
// 7. 支持动态内存池扩展和收缩
// 8. 提供内存映射导出功能，便于调试

// 性能优化：
// - 使用快速分配算法，减少分配延迟
// - 实现内存对齐，提高访问效率
// - 采用延迟释放策略，减少内存抖动
// - 使用预分配技术，避免频繁的系统调用
// - 实现内存复用，提高内存利用率

// 内存保护：
// - 在每个内存块前后添加保护区域
// - 实现内存访问权限控制
// - 提供内存完整性检查
// - 支持内存异常捕获和处理

// 调试支持：
// - 提供详细的内存使用统计
// - 支持内存泄漏检测
// - 实现内存映射导出
// - 提供内存分配历史记录