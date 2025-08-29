/**
 * 数据结构处理模块企业级实现
 * 
 * 本文件实现了企业级数据结构处理功能，包括：
 * - 高性能数据结构操作
 * - 内存管理和优化
 * - 线程安全机制
 * - 数据完整性验证
 * - 性能监控和优化
 * 
 * @author Claude Code
 * @date 2025-08-28
 * @version 1.0
 * @license 企业级标准
 */

#ifndef DATA_STRUCTURE_PROCESSOR_H
#define DATA_STRUCTURE_PROCESSOR_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <stdatomic.h>

/*=============================================================================
 * 系统常量和类型定义
=============================================================================*/

/** 数据结构类型枚举 */
typedef enum {
    DATA_STRUCTURE_TYPE_ARRAY = 0,        // 数组类型
    DATA_STRUCTURE_TYPE_LINKED_LIST = 1,   // 链表类型
    DATA_STRUCTURE_TYPE_HASH_TABLE = 2,     // 哈希表类型
    DATA_STRUCTURE_TYPE_TREE = 3,           // 树类型
    DATA_STRUCTURE_TYPE_GRAPH = 4,          // 图类型
    DATA_STRUCTURE_TYPE_QUEUE = 5,          // 队列类型
    DATA_STRUCTURE_TYPE_STACK = 6,          // 栈类型
    DATA_STRUCTURE_TYPE_CUSTOM = 7          // 自定义类型
} DataStructureType;

/** 数据结构状态枚举 */
typedef enum {
    DATA_STRUCTURE_STATUS_UNINITIALIZED = 0, // 未初始化
    DATA_STRUCTURE_STATUS_INITIALIZING = 1,  // 初始化中
    DATA_STRUCTURE_STATUS_READY = 2,          // 就绪状态
    DATA_STRUCTURE_STATUS_PROCESSING = 3,     // 处理中
    DATA_STRUCTURE_STATUS_LOCKED = 4,         // 锁定状态
    DATA_STRUCTURE_STATUS_ERROR = 5,         // 错误状态
    DATA_STRUCTURE_STATUS_DESTROYED = 6       // 已销毁
} DataStructureStatus;

/** 错误代码枚举 */
typedef enum {
    DATA_STRUCTURE_ERROR_SUCCESS = 0,           // 成功
    DATA_STRUCTURE_ERROR_INVALID_PARAMETER = 1,  // 无效参数
    DATA_STRUCTURE_ERROR_OUT_OF_MEMORY = 2,      // 内存不足
    DATA_STRUCTURE_ERROR_ALREADY_EXISTS = 3,     // 已存在
    DATA_STRUCTURE_ERROR_NOT_FOUND = 4,          // 未找到
    DATA_STRUCTURE_ERROR_ACCESS_DENIED = 5,      // 访问被拒绝
    DATA_STRUCTURE_ERROR_TIMEOUT = 6,            // 超时
    DATA_STRUCTURE_ERROR_CORRUPTED_DATA = 7,     // 数据损坏
    DATA_STRUCTURE_ERROR_OPERATION_FAILED = 8,   // 操作失败
    DATA_STRUCTURE_ERROR_NOT_INITIALIZED = 9,    // 未初始化
    DATA_STRUCTURE_ERROR_LOCK_ACQUIRE_FAILED = 10 // 锁获取失败
} DataStructureError;

/** 内存分配策略枚举 */
typedef enum {
    MEMORY_STRATEGY_STATIC = 0,     // 静态分配
    MEMORY_STRATEGY_DYNAMIC = 1,     // 动态分配
    MEMORY_STRATEGY_POOL = 2,       // 内存池分配
    MEMORY_STRATEGY_ARENA = 3,      // 竞技场分配
    MEMORY_STRATEGY_CUSTOM = 4      // 自定义分配
} MemoryStrategy;

/** 数据结构配置结构体 */
typedef struct {
    DataStructureType type;                  // 数据结构类型
    size_t initial_capacity;                 // 初始容量
    size_t max_capacity;                     // 最大容量
    float growth_factor;                     // 增长因子
    MemoryStrategy memory_strategy;          // 内存分配策略
    bool thread_safe;                        // 线程安全标志
    bool enable_validation;                  // 启用验证标志
    bool enable_performance_monitoring;     // 启用性能监控标志
    bool enable_memory_tracking;            // 启用内存跟踪标志
    uint32_t hash_seed;                     // 哈希种子
    void* custom_allocator;                 // 自定义分配器
} DataStructureConfig;

/** 性能统计结构体 */
typedef struct {
    uint64_t operations_count;             // 操作计数
    uint64_t total_time_ns;                // 总时间(纳秒)
    uint64_t memory_allocated_bytes;       // 已分配内存(字节)
    uint64_t memory_freed_bytes;           // 已释放内存(字节)
    uint64_t cache_hits;                   // 缓存命中次数
    uint64_t cache_misses;                 // 缓存未命中次数
    uint32_t error_count;                  // 错误计数
    float average_operation_time_ns;       // 平均操作时间(纳秒)
    float memory_efficiency;               // 内存效率
    float cache_hit_rate;                  // 缓存命中率
} PerformanceStats;

/** 内存块结构体 */
typedef struct {
    void* address;                        // 内存地址
    size_t size;                          // 内存大小
    uint32_t magic_number;               // 魔数
    bool in_use;                         // 使用中标志
    uint32_t allocation_id;               // 分配ID
    struct MemoryBlock* next;            // 下一个内存块
    struct MemoryBlock* prev;            // 前一个内存块
} MemoryBlock;

/** 内存池结构体 */
typedef struct {
    MemoryBlock* free_blocks;            // 空闲块链表
    MemoryBlock* used_blocks;            // 已用块链表
    size_t block_size;                    // 块大小
    uint32_t total_blocks;               // 总块数
    uint32_t free_blocks_count;          // 空闲块计数
    atomic_flag lock;                     // 自旋锁
    uint32_t allocation_counter;          // 分配计数器
} MemoryPool;

/** 数据结构基类 */
typedef struct {
    DataStructureType type;              // 数据结构类型
    DataStructureStatus status;          // 状态
    DataStructureConfig config;          // 配置
    PerformanceStats stats;               // 性能统计
    atomic_int ref_count;                // 引用计数
    atomic_flag lock;                    // 自旋锁
    uint32_t version;                   // 版本号
    uint64_t creation_time_ns;          // 创建时间
    uint64_t last_access_time_ns;        // 最后访问时间
    uint32_t access_count;               // 访问计数
    void* user_data;                    // 用户数据
    MemoryPool* memory_pool;             // 内存池
} DataStructureBase;

/** 链表节点结构体 */
typedef struct ListNode {
    void* data;                          // 数据指针
    size_t data_size;                    // 数据大小
    struct ListNode* next;               // 下一个节点
    struct ListNode* prev;               // 前一个节点
    uint32_t node_id;                    // 节点ID
    uint64_t creation_time_ns;          // 创建时间
    bool marked_for_deletion;           // 删除标记
} ListNode;

/** 链表结构体 */
typedef struct {
    DataStructureBase base;              // 基类
    ListNode* head;                      // 头节点
    ListNode* tail;                      // 尾节点
    size_t size;                        // 链表大小
    ListNode* free_nodes;               // 空闲节点链表
    uint32_t next_node_id;               // 下一个节点ID
    atomic_int modification_count;        // 修改计数
} LinkedList;

/** 哈希表项结构体 */
typedef struct {
    void* key;                          // 键指针
    size_t key_size;                    // 键大小
    void* value;                        // 值指针
    size_t value_size;                  // 值大小
    uint32_t hash;                      // 哈希值
    struct HashTableItem* next;         // 下一个项(链地址法)
    uint64_t last_access_time_ns;       // 最后访问时间
    uint32_t access_count;              // 访问计数
    bool is_deleted;                    // 删除标记
} HashTableItem;

/** 哈希表结构体 */
typedef struct {
    DataStructureBase base;              // 基类
    HashTableItem** buckets;            // 桶数组
    size_t bucket_count;                 // 桶数量
    size_t size;                        // 哈希表大小
    size_t deleted_count;               // 已删除项计数
    float load_factor;                   // 负载因子
    float max_load_factor;               // 最大负载因子
    HashTableItem* free_items;          // 空闲项链表
    uint32_t hash_function_id;          // 哈希函数ID
    atomic_int resize_in_progress;       // 调整大小进行中标志
} HashTable;

/** 树节点结构体 */
typedef struct TreeNode {
    void* key;                          // 键指针
    size_t key_size;                    // 键大小
    void* value;                        // 值指针
    size_t value_size;                  // 值大小
    struct TreeNode* left;              // 左子节点
    struct TreeNode* right;             // 右子节点
    struct TreeNode* parent;            // 父节点
    int32_t balance_factor;             // 平衡因子
    uint32_t node_height;               // 节点高度
    uint32_t node_id;                   // 节点ID
    uint64_t last_access_time_ns;       // 最后访问时间
    uint32_t access_count;              // 访问计数
    bool is_red;                        // 红黑树颜色标志
} TreeNode;

/** 树结构体 */
typedef struct {
    DataStructureBase base;              // 基类
    TreeNode* root;                     // 根节点
    TreeNode* free_nodes;               // 空闲节点链表
    size_t size;                        // 树大小
    uint32_t tree_height;                // 树高度
    uint32_t next_node_id;               // 下一个节点ID
    atomic_int modification_count;        // 修改计数
    bool allow_duplicates;              // 允许重复键
    bool auto_balance;                  // 自动平衡标志
} Tree;

/*=============================================================================
 * 函数指针类型定义
=============================================================================*/

/** 哈希函数指针类型 */
typedef uint32_t (*HashFunction)(const void* key, size_t key_size, uint32_t seed);

/** 键比较函数指针类型 */
typedef int32_t (*KeyCompareFunction)(const void* key1, size_t key1_size,
                                     const void* key2, size_t key2_size);

/** 数据处理函数指针类型 */
typedef DataStructureError (*DataProcessFunction)(void* data, size_t data_size,
                                                  void* user_data);

/** 内存分配函数指针类型 */
typedef void* (*MemoryAllocateFunction)(size_t size);

/** 内存释放函数指针类型 */
typedef void (*MemoryFreeFunction)(void* ptr);

/** 数据验证函数指针类型 */
typedef bool (*DataValidationFunction)(const void* data, size_t data_size);

/** 数据克隆函数指针类型 */
typedef DataStructureError (*DataCloneFunction)(const void* src, size_t src_size,
                                               void* dst, size_t dst_size);

/*=============================================================================
 * 系统函数别名定义
=============================================================================*/

/** 数据结构处理器核心函数 */
#define DataStructureProcessor_Create SystemCore_DataStructureProcessor_Create
#define DataStructureProcessor_Destroy SystemCore_DataStructureProcessor_Destroy
#define DataStructureProcessor_Initialize SystemCore_DataStructureProcessor_Initialize
#define DataStructureProcessor_Process SystemCore_DataStructureProcessor_Process
#define DataStructureProcessor_GetStatus SystemCore_DataStructureProcessor_GetStatus
#define DataStructureProcessor_GetStats SystemCore_DataStructureProcessor_GetStats

/** 链表操作函数 */
#define LinkedList_Create SystemCore_LinkedList_Create
#define LinkedList_Destroy SystemCore_LinkedList_Destroy
#define LinkedList_Insert SystemCore_LinkedList_Insert
#define LinkedList_Remove SystemCore_LinkedList_Remove
#define LinkedList_Find SystemCore_LinkedList_Find
#define LinkedList_GetSize SystemCore_LinkedList_GetSize
#define LinkedList_Clear SystemCore_LinkedList_Clear

/** 哈希表操作函数 */
#define HashTable_Create SystemCore_HashTable_Create
#define HashTable_Destroy SystemCore_HashTable_Destroy
#define HashTable_Insert SystemCore_HashTable_Insert
#define HashTable_Remove SystemCore_HashTable_Remove
#define HashTable_Find SystemCore_HashTable_Find
#define HashTable_GetSize SystemCore_HashTable_GetSize
#define HashTable_Clear SystemCore_HashTable_Clear

/** 树操作函数 */
#define Tree_Create SystemCore_Tree_Create
#define Tree_Destroy SystemCore_Tree_Destroy
#define Tree_Insert SystemCore_Tree_Insert
#define Tree_Remove SystemCore_Tree_Remove
#define Tree_Find SystemCore_Tree_Find
#define Tree_GetSize SystemCore_Tree_GetSize
#define Tree_Clear SystemCore_Tree_Clear

/** 内存管理函数 */
#define MemoryPool_Create SystemCore_MemoryPool_Create
#define MemoryPool_Destroy SystemCore_MemoryPool_Destroy
#define MemoryPool_Allocate SystemCore_MemoryPool_Allocate
#define MemoryPool_Free SystemCore_MemoryPool_Free
#define MemoryPool_GetStats SystemCore_MemoryPool_GetStats

/** 性能监控函数 */
#define PerformanceMonitor_Start SystemCore_PerformanceMonitor_Start
#define PerformanceMonitor_Stop SystemCore_PerformanceMonitor_Stop
#define PerformanceMonitor_GetStats SystemCore_PerformanceMonitor_GetStats
#define PerformanceMonitor_Reset SystemCore_PerformanceMonitor_Reset

/** 数据验证函数 */
#define DataValidator_Validate SystemCore_DataValidator_Validate
#define DataValidator_CheckIntegrity SystemCore_DataValidator_CheckIntegrity
#define DataValidator_Repair SystemCore_DataValidator_Repair

/*=============================================================================
 * 全局变量声明
=============================================================================*/

/** 全局内存池数组 */
extern MemoryPool* g_memory_pools[8];

/** 全局性能统计 */
extern PerformanceStats g_global_performance_stats;

/** 全局数据结构计数器 */
extern atomic_int g_data_structure_count;

/** 全局初始化标志 */
extern bool g_data_structure_system_initialized;

/** 全局配置 */
extern DataStructureConfig g_default_config;

/*=============================================================================
 * 系统初始化和清理函数声明
=============================================================================*/

/**
 * 初始化数据结构处理系统
 * @return DataStructureError 错误代码
 */
DataStructureError DataStructureProcessor_Initialize(void);

/**
 * 清理数据结构处理系统
 * @return DataStructureError 错误代码
 */
DataStructureError DataStructureProcessor_Cleanup(void);

/**
 * 创建数据结构处理器
 * @param config 配置参数
 * @return DataStructureBase* 数据结构基类指针
 */
DataStructureBase* DataStructureProcessor_Create(const DataStructureConfig* config);

/**
 * 销毁数据结构处理器
 * @param data_structure 数据结构基类指针
 * @return DataStructureError 错误代码
 */
DataStructureError DataStructureProcessor_Destroy(DataStructureBase* data_structure);

/**
 * 处理数据结构操作
 * @param data_structure 数据结构基类指针
 * @param operation 操作类型
 * @param input_data 输入数据
 * @param input_size 输入数据大小
 * @param output_data 输出数据
 * @param output_size 输出数据大小
 * @return DataStructureError 错误代码
 */
DataStructureError DataStructureProcessor_Process(DataStructureBase* data_structure,
                                                 uint32_t operation,
                                                 const void* input_data, size_t input_size,
                                                 void* output_data, size_t* output_size);

/**
 * 获取数据结构状态
 * @param data_structure 数据结构基类指针
 * @return DataStructureStatus 状态
 */
DataStructureStatus DataStructureProcessor_GetStatus(const DataStructureBase* data_structure);

/**
 * 获取数据结构性能统计
 * @param data_structure 数据结构基类指针
 * @param stats 性能统计指针
 * @return DataStructureError 错误代码
 */
DataStructureError DataStructureProcessor_GetStats(const DataStructureBase* data_structure,
                                                   PerformanceStats* stats);

/*=============================================================================
 * 链表操作函数声明
=============================================================================*/

/**
 * 创建链表
 * @param config 配置参数
 * @return LinkedList* 链表指针
 */
LinkedList* LinkedList_Create(const DataStructureConfig* config);

/**
 * 销毁链表
 * @param list 链表指针
 * @return DataStructureError 错误代码
 */
DataStructureError LinkedList_Destroy(LinkedList* list);

/**
 * 向链表插入数据
 * @param list 链表指针
 * @param data 数据指针
 * @param data_size 数据大小
 * @param position 插入位置(-1表示尾部)
 * @return DataStructureError 错误代码
 */
DataStructureError LinkedList_Insert(LinkedList* list, const void* data, size_t data_size, int32_t position);

/**
 * 从链表移除数据
 * @param list 链表指针
 * @param position 移除位置(-1表示尾部)
 * @param removed_data 移除的数据指针
 * @param removed_data_size 移除的数据大小
 * @return DataStructureError 错误代码
 */
DataStructureError LinkedList_Remove(LinkedList* list, int32_t position,
                                   void** removed_data, size_t* removed_data_size);

/**
 * 在链表中查找数据
 * @param list 链表指针
 * @param data 数据指针
 * @param data_size 数据大小
 * @param compare_function 比较函数
 * @return int32_t 找到的位置(-1表示未找到)
 */
int32_t LinkedList_Find(const LinkedList* list, const void* data, size_t data_size,
                       KeyCompareFunction compare_function);

/**
 * 获取链表大小
 * @param list 链表指针
 * @return size_t 链表大小
 */
size_t LinkedList_GetSize(const LinkedList* list);

/**
 * 清空链表
 * @param list 链表指针
 * @return DataStructureError 错误代码
 */
DataStructureError LinkedList_Clear(LinkedList* list);

/*=============================================================================
 * 哈希表操作函数声明
=============================================================================*/

/**
 * 创建哈希表
 * @param config 配置参数
 * @return HashTable* 哈希表指针
 */
HashTable* HashTable_Create(const DataStructureConfig* config);

/**
 * 销毁哈希表
 * @param table 哈希表指针
 * @return DataStructureError 错误代码
 */
DataStructureError HashTable_Destroy(HashTable* table);

/**
 * 向哈希表插入数据
 * @param table 哈希表指针
 * @param key 键指针
 * @param key_size 键大小
 * @param value 值指针
 * @param value_size 值大小
 * @return DataStructureError 错误代码
 */
DataStructureError HashTable_Insert(HashTable* table, const void* key, size_t key_size,
                                  const void* value, size_t value_size);

/**
 * 从哈希表移除数据
 * @param table 哈希表指针
 * @param key 键指针
 * @param key_size 键大小
 * @param removed_value 移除的值指针
 * @param removed_value_size 移除的值大小
 * @return DataStructureError 错误代码
 */
DataStructureError HashTable_Remove(HashTable* table, const void* key, size_t key_size,
                                   void** removed_value, size_t* removed_value_size);

/**
 * 在哈希表中查找数据
 * @param table 哈希表指针
 * @param key 键指针
 * @param key_size 键大小
 * @param found_value 找到的值指针
 * @param found_value_size 找到的值大小
 * @return DataStructureError 错误代码
 */
DataStructureError HashTable_Find(const HashTable* table, const void* key, size_t key_size,
                                 void** found_value, size_t* found_value_size);

/**
 * 获取哈希表大小
 * @param table 哈希表指针
 * @return size_t 哈希表大小
 */
size_t HashTable_GetSize(const HashTable* table);

/**
 * 清空哈希表
 * @param table 哈希表指针
 * @return DataStructureError 错误代码
 */
DataStructureError HashTable_Clear(HashTable* table);

/*=============================================================================
 * 树操作函数声明
=============================================================================*/

/**
 * 创建树
 * @param config 配置参数
 * @return Tree* 树指针
 */
Tree* Tree_Create(const DataStructureConfig* config);

/**
 * 销毁树
 * @param tree 树指针
 * @return DataStructureError 错误代码
 */
DataStructureError Tree_Destroy(Tree* tree);

/**
 * 向树插入数据
 * @param tree 树指针
 * @param key 键指针
 * @param key_size 键大小
 * @param value 值指针
 * @param value_size 值大小
 * @return DataStructureError 错误代码
 */
DataStructureError Tree_Insert(Tree* tree, const void* key, size_t key_size,
                              const void* value, size_t value_size);

/**
 * 从树移除数据
 * @param tree 树指针
 * @param key 键指针
 * @param key_size 键大小
 * @param removed_value 移除的值指针
 * @param removed_value_size 移除的值大小
 * @return DataStructureError 错误代码
 */
DataStructureError Tree_Remove(Tree* tree, const void* key, size_t key_size,
                             void** removed_value, size_t* removed_value_size);

/**
 * 在树中查找数据
 * @param tree 树指针
 * @param key 键指针
 * @param key_size 键大小
 * @param found_value 找到的值指针
 * @param found_value_size 找到的值大小
 * @return DataStructureError 错误代码
 */
DataStructureError Tree_Find(const Tree* tree, const void* key, size_t key_size,
                            void** found_value, size_t* found_value_size);

/**
 * 获取树大小
 * @param tree 树指针
 * @return size_t 树大小
 */
size_t Tree_GetSize(const Tree* tree);

/**
 * 清空树
 * @param tree 树指针
 * @return DataStructureError 错误代码
 */
DataStructureError Tree_Clear(Tree* tree);

/*=============================================================================
 * 内存管理函数声明
=============================================================================*/

/**
 * 创建内存池
 * @param block_size 块大小
 * @param block_count 块数量
 * @return MemoryPool* 内存池指针
 */
MemoryPool* MemoryPool_Create(size_t block_size, uint32_t block_count);

/**
 * 销毁内存池
 * @param pool 内存池指针
 * @return DataStructureError 错误代码
 */
DataStructureError MemoryPool_Destroy(MemoryPool* pool);

/**
 * 从内存池分配内存
 * @param pool 内存池指针
 * @param size 请求大小
 * @return void* 分配的内存指针
 */
void* MemoryPool_Allocate(MemoryPool* pool, size_t size);

/**
 * 释放内存到内存池
 * @param pool 内存池指针
 * @param ptr 内存指针
 * @return DataStructureError 错误代码
 */
DataStructureError MemoryPool_Free(MemoryPool* pool, void* ptr);

/**
 * 获取内存池统计
 * @param pool 内存池指针
 * @param stats 统计指针
 * @return DataStructureError 错误代码
 */
DataStructureError MemoryPool_GetStats(const MemoryPool* pool, PerformanceStats* stats);

/*=============================================================================
 * 性能监控函数声明
=============================================================================*/

/**
 * 开始性能监控
 * @param data_structure 数据结构基类指针
 * @return DataStructureError 错误代码
 */
DataStructureError PerformanceMonitor_Start(DataStructureBase* data_structure);

/**
 * 停止性能监控
 * @param data_structure 数据结构基类指针
 * @return DataStructureError 错误代码
 */
DataStructureError PerformanceMonitor_Stop(DataStructureBase* data_structure);

/**
 * 获取性能监控统计
 * @param data_structure 数据结构基类指针
 * @param stats 统计指针
 * @return DataStructureError 错误代码
 */
DataStructureError PerformanceMonitor_GetStats(const DataStructureBase* data_structure,
                                             PerformanceStats* stats);

/**
 * 重置性能监控统计
 * @param data_structure 数据结构基类指针
 * @return DataStructureError 错误代码
 */
DataStructureError PerformanceMonitor_Reset(DataStructureBase* data_structure);

/*=============================================================================
 * 数据验证函数声明
=============================================================================*/

/**
 * 验证数据完整性
 * @param data 数据指针
 * @param data_size 数据大小
 * @param validation_function 验证函数
 * @return bool 验证结果
 */
bool DataValidator_Validate(const void* data, size_t data_size,
                           DataValidationFunction validation_function);

/**
 * 检查数据结构完整性
 * @param data_structure 数据结构基类指针
 * @return bool 完整性检查结果
 */
bool DataValidator_CheckIntegrity(const DataStructureBase* data_structure);

/**
 * 修复数据结构
 * @param data_structure 数据结构基类指针
 * @return DataStructureError 错误代码
 */
DataStructureError DataValidator_Repair(DataStructureBase* data_structure);

/*=============================================================================
 * 工具函数声明
=============================================================================*/

/**
 * 计算数据哈希值
 * @param data 数据指针
 * @param data_size 数据大小
 * @param seed 哈希种子
 * @return uint32_t 哈希值
 */
uint32_t DataStructureUtils_ComputeHash(const void* data, size_t data_size, uint32_t seed);

/**
 * 比较两个数据块
 * @param data1 数据1指针
 * @param data1_size 数据1大小
 * @param data2 数据2指针
 * @param data2_size 数据2大小
 * @return int32_t 比较结果
 */
int32_t DataStructureUtils_CompareData(const void* data1, size_t data1_size,
                                       const void* data2, size_t data2_size);

/**
 * 克隆数据
 * @param src 源数据指针
 * @param src_size 源数据大小
 * @param dst 目标数据指针
 * @param dst_size 目标数据大小
 * @return DataStructureError 错误代码
 */
DataStructureError DataStructureUtils_CloneData(const void* src, size_t src_size,
                                                void* dst, size_t dst_size);

/**
 * 获取当前时间戳(纳秒)
 * @return uint64_t 时间戳
 */
uint64_t DataStructureUtils_GetCurrentTimeNs(void);

/**
 * 获取系统内存使用情况
 * @param total_memory 总内存指针
 * @param available_memory 可用内存指针
 * @return DataStructureError 错误代码
 */
DataStructureError DataStructureUtils_GetMemoryInfo(uint64_t* total_memory,
                                                   uint64_t* available_memory);

/*=============================================================================
 * 线程安全函数声明
=============================================================================*/

/**
 * 获取自旋锁
 * @param lock 自旋锁指针
 * @return DataStructureError 错误代码
 */
DataStructureError ThreadSafety_SpinLock(atomic_flag* lock);

/**
 * 释放自旋锁
 * @param lock 自旋锁指针
 * @return DataStructureError 错误代码
 */
DataStructureError ThreadSafety_SpinUnlock(atomic_flag* lock);

/**
 * 尝试获取自旋锁
 * @param lock 自旋锁指针
 * @return bool 获取结果
 */
bool ThreadSafety_TrySpinLock(atomic_flag* lock);

/**
 * 原子操作：增加引用计数
 * @param ref_count 引用计数指针
 * @return int 增加后的值
 */
int ThreadSafety_AtomicIncrement(atomic_int* ref_count);

/**
 * 原子操作：减少引用计数
 * @param ref_count 引用计数指针
 * @return int 减少后的值
 */
int ThreadSafety_AtomicDecrement(atomic_int* ref_count);

/*=============================================================================
 * 调试和日志函数声明
=============================================================================*/

/**
 * 记录调试信息
 * @param level 日志级别
 * @param format 格式字符串
 * @param ... 可变参数
 */
void DataStructureDebug_Log(int level, const char* format, ...);

/**
 * 转储数据结构状态
 * @param data_structure 数据结构基类指针
 * @param output 输出文件指针
 * @return DataStructureError 错误代码
 */
DataStructureError DataStructureDebug_Dump(const DataStructureBase* data_structure,
                                          FILE* output);

/**
 * 验证数据结构系统状态
 * @return DataStructureError 错误代码
 */
DataStructureError DataStructureDebug_VerifySystem(void);

#endif /* DATA_STRUCTURE_PROCESSOR_H */