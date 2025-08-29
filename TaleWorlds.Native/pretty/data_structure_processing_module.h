/*
 * 数据结构处理模块 - 企业级头文件
 * TaleWorlds.Native 数据结构管理系统
 *
 * 本文件定义了数据结构处理模块的所有接口，
 * 包括数据结构、函数原型、常量和错误码。
 *
 * 主要定义：
 * 1. 数据结构类型 - 内存池、链表、哈希表、队列、栈等
 * 2. 函数原型 - 所有公共API的声明
 * 3. 常量和宏定义 - 系统配置和限制
 * 4. 错误码定义 - 错误处理和状态码
 * 5. 内存管理接口 - 内存池和分配策略
 */

#ifndef DATA_STRUCTURE_PROCESSING_MODULE_H
#define DATA_STRUCTURE_PROCESSING_MODULE_H

#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#ifdef __cplusplus
extern "C" {
#endif

// ============================================================================
// 版本信息和配置
// ============================================================================

#define DATA_STRUCTURE_SYSTEM_VERSION_MAJOR 1
#define DATA_STRUCTURE_SYSTEM_VERSION_MINOR 0
#define DATA_STRUCTURE_SYSTEM_VERSION_PATCH 0
#define DATA_STRUCTURE_SYSTEM_VERSION_STRING "1.0.0"

// 系统配置
#define MEMORY_ALIGNMENT 16
#define MAX_MEMORY_POOL_SIZE 1024 * 1024 * 1024  // 1GB
#define MIN_BLOCK_SIZE 16
#define MAX_BLOCK_SIZE 1024 * 1024  // 1MB
#define DEFAULT_LOAD_FACTOR 0.75f

// ============================================================================
// 错误码定义
// ============================================================================

/**
 * 错误码枚举
 */
typedef enum {
    ERROR_SUCCESS = 0,              // 成功
    ERROR_OUT_OF_MEMORY = -1,       // 内存不足
    ERROR_INVALID_PARAMETER = -2,   // 无效参数
    ERROR_NULL_POINTER = -3,        // 空指针
    ERROR_BUFFER_OVERFLOW = -4,      // 缓冲区溢出
    ERROR_INDEX_OUT_OF_RANGE = -5,  // 索引越界
    ERROR_ALLOCATION_FAILED = -6,   // 分配失败
    ERROR_INITIALIZATION_FAILED = -7, // 初始化失败
    ERROR_OPERATION_FAILED = -8,     // 操作失败
    ERROR_SYSTEM_BUSY = -9,         // 系统忙
    ERROR_TIMEOUT = -10,             // 超时
    ERROR_NOT_FOUND = -11,           // 未找到
    ERROR_ALREADY_EXISTS = -12,      // 已存在
    ERROR_PERMISSION_DENIED = -13,  // 权限拒绝
    ERROR_DEVICE_ERROR = -14,        // 设备错误
    ERROR_NETWORK_ERROR = -15,       // 网络错误
    ERROR_UNKNOWN = -16              // 未知错误
} ErrorCode;

// ============================================================================
// 系统状态定义
// ============================================================================

/**
 * 系统状态枚举
 */
typedef enum {
    SYSTEM_STATE_UNINITIALIZED = 0,  // 未初始化
    SYSTEM_STATE_INITIALIZING = 1,   // 正在初始化
    SYSTEM_STATE_READY = 2,           // 就绪
    SYSTEM_STATE_RUNNING = 3,         // 运行中
    SYSTEM_STATE_PAUSED = 4,          // 暂停
    SYSTEM_STATE_SHUTTING_DOWN = 5,   // 正在关闭
    SYSTEM_STATE_TERMINATED = 6,      // 已终止
    SYSTEM_STATE_ERROR = 7            // 错误状态
} SystemState;

// ============================================================================
// 内存管理定义
// ============================================================================

/**
 * 内存分配策略
 */
typedef enum {
    ALLOCATION_STRATEGY_FIRST_FIT = 0,  // 首次适应
    ALLOCATION_STRATEGY_BEST_FIT = 1,   // 最佳适应
    ALLOCATION_STRATEGY_POOL = 2         // 内存池策略
} AllocationStrategy;

/**
 * 内存池结构
 */
typedef struct MemoryPool {
    void* pool_start;                    // 内存池起始地址
    void* pool_end;                      // 内存池结束地址
    void* current_position;              // 当前分配位置
    size_t block_size;                   // 块大小
    size_t total_blocks;                 // 总块数
    size_t free_blocks;                  // 空闲块数
    uint32_t* allocation_bitmap;         // 分配位图
    AllocationStrategy strategy;         // 分配策略
} MemoryPool;

// ============================================================================
// 链表定义
// ============================================================================

/**
 * 链表节点结构
 */
typedef struct LinkedListNode {
    void* data;                         // 数据指针
    struct LinkedListNode* next;        // 下一个节点
    struct LinkedListNode* prev;        // 前一个节点
    uint32_t hash;                      // 哈希值（用于快速查找）
} LinkedListNode;

/**
 * 链表结构
 */
typedef struct LinkedList {
    LinkedListNode* head;                // 头节点
    LinkedListNode* tail;                // 尾节点
    size_t size;                         // 节点数量
    size_t capacity;                     // 容量
    bool is_sorted;                      // 是否已排序
    MemoryPool* node_pool;               // 节点内存池
} LinkedList;

// ============================================================================
// 哈希表定义
// ============================================================================

/**
 * 哈希表节点结构
 */
typedef struct HashTableNode {
    void* key;                          // 键
    void* value;                        // 值
    uint32_t hash;                      // 哈希值
    struct HashTableNode* next;         // 下一个节点（链地址法）
} HashTableNode;

/**
 * 哈希表结构
 */
typedef struct HashTable {
    HashTableNode** buckets;            // 桶数组
    size_t bucket_count;                 // 桶数量
    size_t size;                         // 键值对数量
    float load_factor;                  // 负载因子
    MemoryPool* node_pool;              // 节点内存池
    uint32_t (*hash_function)(const void*, size_t);     // 哈希函数
    bool (*compare_function)(const void*, const void*);  // 比较函数
} HashTable;

// ============================================================================
// 队列定义
// ============================================================================

/**
 * 队列节点结构
 */
typedef struct QueueNode {
    void* data;                         // 数据
    struct QueueNode* next;             // 下一个节点
} QueueNode;

/**
 * 队列结构
 */
typedef struct Queue {
    QueueNode* front;                   // 队首
    QueueNode* rear;                    // 队尾
    size_t size;                        // 大小
    size_t capacity;                    // 容量
    MemoryPool* node_pool;              // 节点内存池
} Queue;

// ============================================================================
// 栈定义
// ============================================================================

/**
 * 栈结构
 */
typedef struct Stack {
    void** data;                        // 数据数组
    size_t size;                        // 当前大小
    size_t capacity;                    // 容量
    size_t element_size;                // 元素大小
    MemoryPool* data_pool;              // 数据内存池
} Stack;

// ============================================================================
// 内存池管理函数
// ============================================================================

/**
 * 创建内存池
 * @param pool 输出参数，返回创建的内存池指针
 * @param block_size 块大小
 * @param block_count 块数量
 * @param strategy 分配策略
 * @return 错误码
 */
ErrorCode memory_pool_create(MemoryPool** pool, size_t block_size, size_t block_count, AllocationStrategy strategy);

/**
 * 销毁内存池
 * @param pool 要销毁的内存池
 * @return 错误码
 */
ErrorCode memory_pool_destroy(MemoryPool* pool);

/**
 * 从内存池分配内存
 * @param pool 内存池
 * @return 分配的内存块指针，失败返回NULL
 */
void* memory_pool_allocate(MemoryPool* pool);

/**
 * 释放内存池中的内存块
 * @param pool 内存池
 * @param block 要释放的内存块
 * @return 错误码
 */
ErrorCode memory_pool_free(MemoryPool* pool, void* block);

/**
 * 获取内存池空闲块数量
 * @param pool 内存池
 * @return 空闲块数量
 */
size_t memory_pool_get_free_blocks(const MemoryPool* pool);

/**
 * 获取内存池总块数量
 * @param pool 内存池
 * @return 总块数量
 */
size_t memory_pool_get_total_blocks(const MemoryPool* pool);

/**
 * 获取内存池碎片率
 * @param pool 内存池
 * @return 碎片率（0.0-1.0）
 */
float memory_pool_get_fragmentation_ratio(const MemoryPool* pool);

// ============================================================================
// 链表操作函数
// ============================================================================

/**
 * 创建链表
 * @param list 输出参数，返回创建的链表指针
 * @param initial_capacity 初始容量
 * @return 错误码
 */
ErrorCode linked_list_create(LinkedList** list, size_t initial_capacity);

/**
 * 销毁链表
 * @param list 要销毁的链表
 * @return 错误码
 */
ErrorCode linked_list_destroy(LinkedList* list);

/**
 * 在链表尾部添加节点
 * @param list 链表
 * @param data 数据
 * @return 错误码
 */
ErrorCode linked_list_append(LinkedList* list, void* data);

/**
 * 在链表头部添加节点
 * @param list 链表
 * @param data 数据
 * @return 错误码
 */
ErrorCode linked_list_prepend(LinkedList* list, void* data);

/**
 * 在指定位置插入节点
 * @param list 链表
 * @param index 插入位置
 * @param data 数据
 * @return 错误码
 */
ErrorCode linked_list_insert_at(LinkedList* list, size_t index, void* data);

/**
 * 删除指定位置的节点
 * @param list 链表
 * @param index 删除位置
 * @return 错误码
 */
ErrorCode linked_list_remove_at(LinkedList* list, size_t index);

/**
 * 获取指定位置的节点数据
 * @param list 链表
 * @param index 位置
 * @return 数据指针，失败返回NULL
 */
void* linked_list_get_at(const LinkedList* list, size_t index);

/**
 * 获取链表大小
 * @param list 链表
 * @return 链表大小
 */
size_t linked_list_size(const LinkedList* list);

/**
 * 检查链表是否为空
 * @param list 链表
 * @return 是否为空
 */
bool linked_list_is_empty(const LinkedList* list);

// ============================================================================
// 哈希表操作函数
// ============================================================================

/**
 * 默认字符串哈希函数
 * @param key 键
 * @param key_size 键大小
 * @return 哈希值
 */
uint32_t hash_string(const void* key, size_t key_size);

/**
 * 创建哈希表
 * @param table 输出参数，返回创建的哈希表指针
 * @param initial_size 初始大小
 * @param load_factor 负载因子
 * @param hash_func 哈希函数（可选，NULL使用默认）
 * @param compare_func 比较函数（可选）
 * @return 错误码
 */
ErrorCode hashtable_create(HashTable** table, size_t initial_size, float load_factor,
                         uint32_t (*hash_func)(const void*, size_t),
                         bool (*compare_func)(const void*, const void*));

/**
 * 销毁哈希表
 * @param table 要销毁的哈希表
 * @return 错误码
 */
ErrorCode hashtable_destroy(HashTable* table);

/**
 * 向哈希表插入键值对
 * @param table 哈希表
 * @param key 键
 * @param value 值
 * @return 错误码
 */
ErrorCode hashtable_put(HashTable* table, void* key, void* value);

/**
 * 从哈希表获取值
 * @param table 哈希表
 * @param key 键
 * @param value 输出参数，返回找到的值
 * @return 错误码
 */
ErrorCode hashtable_get(const HashTable* table, const void* key, void** value);

/**
 * 检查哈希表是否包含键
 * @param table 哈希表
 * @param key 键
 * @return 是否包含
 */
bool hashtable_contains(const HashTable* table, const void* key);

/**
 * 获取哈希表大小
 * @param table 哈希表
 * @return 哈希表大小
 */
size_t hashtable_size(const HashTable* table);

/**
 * 哈希表扩容（内部使用）
 * @param table 哈希表
 * @param new_size 新大小
 * @return 错误码
 */
ErrorCode hashtable_resize(HashTable* table, size_t new_size);

// ============================================================================
// 队列操作函数
// ============================================================================

/**
 * 创建队列
 * @param queue 输出参数，返回创建的队列指针
 * @param initial_capacity 初始容量
 * @return 错误码
 */
ErrorCode queue_create(Queue** queue, size_t initial_capacity);

/**
 * 销毁队列
 * @param queue 要销毁的队列
 * @return 错误码
 */
ErrorCode queue_destroy(Queue* queue);

/**
 * 入队操作
 * @param queue 队列
 * @param data 数据
 * @return 错误码
 */
ErrorCode queue_enqueue(Queue* queue, void* data);

/**
 * 出队操作
 * @param queue 队列
 * @param data 输出参数，返回出队的数据
 * @return 错误码
 */
ErrorCode queue_dequeue(Queue* queue, void** data);

/**
 * 查看队首元素
 * @param queue 队列
 * @return 队首元素指针，队列为空返回NULL
 */
void* queue_peek(const Queue* queue);

/**
 * 获取队列大小
 * @param queue 队列
 * @return 队列大小
 */
size_t queue_size(const Queue* queue);

/**
 * 检查队列是否为空
 * @param queue 队列
 * @return 是否为空
 */
bool queue_is_empty(const Queue* queue);

// ============================================================================
// 栈操作函数
// ============================================================================

/**
 * 创建栈
 * @param stack 输出参数，返回创建的栈指针
 * @param initial_capacity 初始容量
 * @param element_size 元素大小
 * @return 错误码
 */
ErrorCode stack_create(Stack** stack, size_t initial_capacity, size_t element_size);

/**
 * 销毁栈
 * @param stack 要销毁的栈
 * @return 错误码
 */
ErrorCode stack_destroy(Stack* stack);

/**
 * 压栈操作
 * @param stack 栈
 * @param data 数据
 * @return 错误码
 */
ErrorCode stack_push(Stack* stack, void* data);

/**
 * 弹栈操作
 * @param stack 栈
 * @param data 输出参数，返回弹栈的数据
 * @return 错误码
 */
ErrorCode stack_pop(Stack* stack, void* data);

/**
 * 查看栈顶元素
 * @param stack 栈
 * @return 栈顶元素指针，栈为空返回NULL
 */
void* stack_peek(const Stack* stack);

/**
 * 获取栈大小
 * @param stack 栈
 * @return 栈大小
 */
size_t stack_size(const Stack* stack);

/**
 * 检查栈是否为空
 * @param stack 栈
 * @return 是否为空
 */
bool stack_is_empty(const Stack* stack);

// ============================================================================
// 排序和搜索算法
// ============================================================================

/**
 * 快速排序算法
 * @param array 数组
 * @param size 大小
 * @param element_size 元素大小
 * @param compare 比较函数
 */
void quick_sort(void* array, size_t size, size_t element_size, int (*compare)(const void*, const void*));

/**
 * 默认比较函数
 * @param a 元素a
 * @param b 元素b
 * @return 比较结果
 */
int default_compare(const void* a, const void* b);

/**
 * 二分查找算法
 * @param array 数组
 * @param size 大小
 * @param element_size 元素大小
 * @param key 键
 * @param compare 比较函数
 * @return 找到的元素指针，未找到返回NULL
 */
void* binary_search(const void* array, size_t size, size_t element_size, const void* key, int (*compare)(const void*, const void*));

// ============================================================================
// 系统管理函数
// ============================================================================

/**
 * 初始化数据结构系统
 * @return 错误码
 */
ErrorCode data_structure_system_initialize(void);

/**
 * 关闭数据结构系统
 * @return 错误码
 */
ErrorCode data_structure_system_shutdown(void);

/**
 * 获取系统状态
 * @return 系统状态
 */
SystemState data_structure_system_get_state(void);

/**
 * 获取系统统计信息
 * @param total_memory 输出参数，总内存使用
 * @param total_allocations 输出参数，总分配次数
 * @param active_objects 输出参数，活跃对象数
 * @return 错误码
 */
ErrorCode data_structure_system_get_statistics(size_t* total_memory, size_t* total_allocations, size_t* active_objects);

/**
 * 获取错误字符串
 * @param error 错误码
 * @return 错误字符串
 */
const char* data_structure_system_get_error_string(ErrorCode error);

// ============================================================================
// 版本信息函数
// ============================================================================

/**
 * 获取版本字符串
 * @return 版本字符串
 */
const char* data_structure_get_version(void);

// ============================================================================
// 示例代码（条件编译）
// ============================================================================

#ifdef DATA_STRUCTURE_EXAMPLES

/**
 * 数据结构使用示例
 */
void data_structure_usage_examples(void);

#endif // DATA_STRUCTURE_EXAMPLES

// ============================================================================
// API导出定义
// ============================================================================

#ifdef _WIN32
#define DATA_STRUCTURE_API __declspec(dllexport)
#else
#define DATA_STRUCTURE_API __attribute__((visibility("default")))
#endif

/**
 * 导出的初始化函数
 * @return 错误码
 */
DATA_STRUCTURE_API ErrorCode data_structure_initialize(void);

/**
 * 导出的关闭函数
 * @return 错误码
 */
DATA_STRUCTURE_API ErrorCode data_structure_shutdown(void);

/**
 * 导出的版本函数
 * @return 版本字符串
 */
DATA_STRUCTURE_API const char* data_structure_get_version_export(void);

#ifdef __cplusplus
}
#endif

#endif // DATA_STRUCTURE_PROCESSING_MODULE_H