/*
 * 数据结构处理模块 - 企业级实现
 * TaleWorlds.Native 数据结构管理系统
 *
 * 本模块实现了游戏引擎中所有核心数据结构的管理和操作，
 * 包括内存管理、数据结构操作、算法实现等功能。
 *
 * 主要功能：
 * 1. 内存管理系统 - 内存池、分配器、垃圾回收
 * 2. 基础数据结构 - 链表、哈希表、树、队列、栈
 * 3. 高级容器 - 动态数组、映射、集合
 * 4. 算法实现 - 排序、搜索、数学运算
 * 5. 性能优化 - 内存池、缓存友好、SIMD优化
 */

#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

// ============================================================================
// 平台特定的API导出定义
// ============================================================================

#ifdef _WIN32
#ifdef DATA_STRUCTURE_EXPORTS
#define DATA_STRUCTURE_API __declspec(dllexport)
#else
#define DATA_STRUCTURE_API __declspec(dllimport)
#endif
#else
#define DATA_STRUCTURE_API
#endif

// ============================================================================
// 系统常量和类型定义
// ============================================================================

/**
 * 内存管理常量
 */
#define MEMORY_POOL_SIZE_SMALL      64      // 小对象池大小
#define MEMORY_POOL_SIZE_MEDIUM    256     // 中对象池大小
#define MEMORY_POOL_SIZE_LARGE     1024    // 大对象池大小
#define MEMORY_ALIGNMENT          16       // 内存对齐大小
#define MAX_MEMORY_POOLS          8        // 最大内存池数量

/**
 * 数据结构常量
 */
#define HASHTABLE_DEFAULT_SIZE    1024     // 哈希表默认大小
#define HASHTABLE_LOAD_FACTOR     0.75f    // 哈希表负载因子
#define LINKED_LIST_INITIAL_SIZE  16       // 链表初始大小
#define QUEUE_INITIAL_CAPACITY    32       // 队列初始容量
#define STACK_INITIAL_CAPACITY    32       // 栈初始容量

/**
 * 系统状态枚举
 */
typedef enum {
    SYSTEM_STATE_UNINITIALIZED = 0,    // 未初始化
    SYSTEM_STATE_INITIALIZING,          // 正在初始化
    SYSTEM_STATE_READY,                 // 就绪
    SYSTEM_STATE_RUNNING,               // 运行中
    SYSTEM_STATE_PAUSED,                // 暂停
    SYSTEM_STATE_ERROR,                 // 错误状态
    SYSTEM_STATE_SHUTTING_DOWN,         // 正在关闭
    SYSTEM_STATE_TERMINATED             // 已终止
} SystemState;

/**
 * 错误代码枚举
 */
typedef enum {
    ERROR_SUCCESS = 0,                  // 成功
    ERROR_OUT_OF_MEMORY,               // 内存不足
    ERROR_INVALID_PARAMETER,           // 无效参数
    ERROR_NULL_POINTER,                // 空指针
    ERROR_BUFFER_OVERFLOW,             // 缓冲区溢出
    ERROR_INDEX_OUT_OF_RANGE,          // 索引越界
    ERROR_ALLOCATION_FAILED,           // 分配失败
    ERROR_INITIALIZATION_FAILED,       // 初始化失败
    ERROR_OPERATION_FAILED,            // 操作失败
    ERROR_SYSTEM_BUSY,                 // 系统忙
    ERROR_TIMEOUT,                     // 超时
    ERROR_NOT_FOUND,                   // 未找到
    ERROR_ALREADY_EXISTS,              // 已存在
    ERROR_PERMISSION_DENIED,           // 权限拒绝
    ERROR_DEVICE_ERROR,                // 设备错误
    ERROR_NETWORK_ERROR,               // 网络错误
    ERROR_UNKNOWN                      // 未知错误
} ErrorCode;

/**
 * 内存分配策略枚举
 */
typedef enum {
    ALLOCATION_STRATEGY_FIRST_FIT,     // 首次适应
    ALLOCATION_STRATEGY_BEST_FIT,      // 最佳适应
    ALLOCATION_STRATEGY_WORST_FIT,     // 最差适应
    ALLOCATION_STRATEGY_BUDDY,         // 伙伴系统
    ALLOCATION_STRATEGY_POOL           // 内存池
} AllocationStrategy;

// ============================================================================
// 基础数据结构定义
// ============================================================================

/**
 * 内存池结构体
 */
typedef struct {
    void* pool_start;                   // 池起始地址
    void* pool_end;                     // 池结束地址
    void* current_position;             // 当前分配位置
    size_t block_size;                  // 块大小
    size_t total_blocks;                // 总块数
    size_t free_blocks;                 // 空闲块数
    uint32_t* allocation_bitmap;        // 分配位图
    AllocationStrategy strategy;        // 分配策略
} MemoryPool;

/**
 * 链表节点结构体
 */
typedef struct LinkedListNode {
    void* data;                         // 数据指针
    struct LinkedListNode* prev;        // 前驱节点
    struct LinkedListNode* next;        // 后继节点
    uint32_t hash;                     // 哈希值（用于快速查找）
} LinkedListNode;

/**
 * 链表结构体
 */
typedef struct {
    LinkedListNode* head;               // 头节点
    LinkedListNode* tail;               // 尾节点
    size_t size;                        // 链表大小
    size_t capacity;                    // 链表容量
    MemoryPool* node_pool;              // 节点内存池
    bool is_sorted;                     // 是否已排序
} LinkedList;

/**
 * 哈希表节点结构体
 */
typedef struct HashTableNode {
    void* key;                         // 键指针
    void* value;                       // 值指针
    uint32_t hash;                     // 哈希值
    struct HashTableNode* next;        // 冲突链表下一个节点
} HashTableNode;

/**
 * 哈希表结构体
 */
typedef struct {
    HashTableNode** buckets;            // 桶数组
    size_t bucket_count;                // 桶数量
    size_t size;                        // 元素数量
    float load_factor;                  // 负载因子
    MemoryPool* node_pool;              // 节点内存池
    uint32_t (*hash_function)(const void* key, size_t key_size);  // 哈希函数
    bool (*compare_function)(const void* key1, const void* key2); // 比较函数
} HashTable;

/**
 * 队列节点结构体
 */
typedef struct QueueNode {
    void* data;                         // 数据指针
    struct QueueNode* next;             // 下一个节点
} QueueNode;

/**
 * 队列结构体
 */
typedef struct {
    QueueNode* front;                   // 队首
    QueueNode* rear;                    // 队尾
    size_t size;                        // 队列大小
    size_t capacity;                    // 队列容量
    MemoryPool* node_pool;              // 节点内存池
} Queue;

/**
 * 栈结构体
 */
typedef struct {
    void** data;                        // 数据数组
    size_t size;                        // 栈大小
    size_t capacity;                    // 栈容量
    size_t element_size;                // 元素大小
    MemoryPool* data_pool;             // 数据内存池
} Stack;

/**
 * 动态数组结构体
 */
typedef struct {
    void** data;                        // 数据数组
    size_t size;                        // 数组大小
    size_t capacity;                    // 数组容量
    size_t element_size;                // 元素大小
    MemoryPool* data_pool;             // 数据内存池
    bool is_sorted;                     // 是否已排序
} DynamicArray;

// ============================================================================
// 内存管理函数声明
// ============================================================================

/**
 * 内存池管理函数
 */
ErrorCode memory_pool_create(MemoryPool** pool, size_t block_size, size_t block_count, AllocationStrategy strategy);
ErrorCode memory_pool_destroy(MemoryPool* pool);
void* memory_pool_allocate(MemoryPool* pool);
ErrorCode memory_pool_free(MemoryPool* pool, void* block);
ErrorCode memory_pool_defragment(MemoryPool* pool);
size_t memory_pool_get_free_blocks(const MemoryPool* pool);
size_t memory_pool_get_total_blocks(const MemoryPool* pool);
float memory_pool_get_fragmentation_ratio(const MemoryPool* pool);

/**
 * 主内存分配器函数
 */
ErrorCode memory_allocator_initialize(void);
ErrorCode memory_allocator_shutdown(void);
void* memory_allocate(size_t size);
ErrorCode memory_free(void* ptr);
void* memory_reallocate(void* ptr, size_t new_size);
ErrorCode memory_defragment_all(void);
size_t memory_get_total_allocated(void);
size_t memory_get_total_free(void);
float memory_get_fragmentation_ratio(void);

// ============================================================================
// 数据结构函数声明
// ============================================================================

/**
 * 链表操作函数
 */
ErrorCode linked_list_create(LinkedList** list, size_t initial_capacity);
ErrorCode linked_list_destroy(LinkedList* list);
ErrorCode linked_list_append(LinkedList* list, void* data);
ErrorCode linked_list_prepend(LinkedList* list, void* data);
ErrorCode linked_list_insert_at(LinkedList* list, size_t index, void* data);
ErrorCode linked_list_remove_at(LinkedList* list, size_t index);
ErrorCode linked_list_remove_head(LinkedList* list);
ErrorCode linked_list_remove_tail(LinkedList* list);
void* linked_list_get_at(const LinkedList* list, size_t index);
ErrorCode linked_list_set_at(LinkedList* list, size_t index, void* data);
ErrorCode linked_list_sort(LinkedList* list, int (*compare)(const void*, const void*));
size_t linked_list_find(const LinkedList* list, const void* data, int (*compare)(const void*, const void*));
ErrorCode linked_list_clear(LinkedList* list);
size_t linked_list_size(const LinkedList* list);
bool linked_list_is_empty(const LinkedList* list);
ErrorCode linked_list_reverse(LinkedList* list);

/**
 * 哈希表操作函数
 */
ErrorCode hashtable_create(HashTable** table, size_t initial_size, float load_factor,
                         uint32_t (*hash_func)(const void*, size_t),
                         bool (*compare_func)(const void*, const void*));
ErrorCode hashtable_destroy(HashTable* table);
ErrorCode hashtable_put(HashTable* table, void* key, void* value);
ErrorCode hashtable_get(const HashTable* table, const void* key, void** value);
ErrorCode hashtable_remove(HashTable* table, const void* key);
bool hashtable_contains(const HashTable* table, const void* key);
ErrorCode hashtable_clear(HashTable* table);
size_t hashtable_size(const HashTable* table);
size_t hashtable_bucket_count(const HashTable* table);
float hashtable_load_factor(const HashTable* table);
ErrorCode hashtable_resize(HashTable* table, size_t new_size);

/**
 * 队列操作函数
 */
ErrorCode queue_create(Queue** queue, size_t initial_capacity);
ErrorCode queue_destroy(Queue* queue);
ErrorCode queue_enqueue(Queue* queue, void* data);
ErrorCode queue_dequeue(Queue* queue, void** data);
void* queue_peek(const Queue* queue);
ErrorCode queue_clear(Queue* queue);
size_t queue_size(const Queue* queue);
bool queue_is_empty(const Queue* queue);
bool queue_is_full(const Queue* queue);

/**
 * 栈操作函数
 */
ErrorCode stack_create(Stack** stack, size_t initial_capacity, size_t element_size);
ErrorCode stack_destroy(Stack* stack);
ErrorCode stack_push(Stack* stack, void* data);
ErrorCode stack_pop(Stack* stack, void* data);
void* stack_peek(const Stack* stack);
ErrorCode stack_clear(Stack* stack);
size_t stack_size(const Stack* stack);
bool stack_is_empty(const Stack* stack);
bool stack_is_full(const Stack* stack);

/**
 * 动态数组操作函数
 */
ErrorCode dynamic_array_create(DynamicArray** array, size_t initial_capacity, size_t element_size);
ErrorCode dynamic_array_destroy(DynamicArray* array);
ErrorCode dynamic_array_append(DynamicArray* array, void* data);
ErrorCode dynamic_array_insert_at(DynamicArray* array, size_t index, void* data);
ErrorCode dynamic_array_remove_at(DynamicArray* array, size_t index);
void* dynamic_array_get_at(const DynamicArray* array, size_t index);
ErrorCode dynamic_array_set_at(DynamicArray* array, size_t index, void* data);
ErrorCode dynamic_array_sort(DynamicArray* array, int (*compare)(const void*, const void*));
ErrorCode dynamic_array_clear(DynamicArray* array);
size_t dynamic_array_size(const DynamicArray* array);
size_t dynamic_array_capacity(const DynamicArray* array);
ErrorCode dynamic_array_resize(DynamicArray* array, size_t new_capacity);
ErrorCode dynamic_array_trim(DynamicArray* array);

// ============================================================================
// 算法函数声明
// ============================================================================

/**
 * 排序算法函数
 */
void quick_sort(void* array, size_t size, size_t element_size, int (*compare)(const void*, const void*));
void merge_sort(void* array, size_t size, size_t element_size, int (*compare)(const void*, const void*));
void heap_sort(void* array, size_t size, size_t element_size, int (*compare)(const void*, const void*));
void insertion_sort(void* array, size_t size, size_t element_size, int (*compare)(const void*, const void*));
void bubble_sort(void* array, size_t size, size_t element_size, int (*compare)(const void*, const void*));

/**
 * 搜索算法函数
 */
void* binary_search(const void* array, size_t size, size_t element_size, const void* key, int (*compare)(const void*, const void*));
void* linear_search(const void* array, size_t size, size_t element_size, const void* key, int (*compare)(const void*, const void*));
size_t find_first(const void* array, size_t size, size_t element_size, const void* key, int (*compare)(const void*, const void*));
size_t find_last(const void* array, size_t size, size_t element_size, const void* key, int (*compare)(const void*, const void*));

/**
 * 哈希函数
 */
uint32_t hash_string(const void* key, size_t key_size);
uint32_t hash_integer(const void* key, size_t key_size);
uint32_t hash_pointer(const void* key, size_t key_size);
uint32_t hash_bytes(const void* key, size_t key_size);

// ============================================================================
// 系统管理函数声明
// ============================================================================

/**
 * 系统初始化和关闭函数
 */
ErrorCode data_structure_system_initialize(void);
ErrorCode data_structure_system_shutdown(void);
SystemState data_structure_system_get_state(void);
ErrorCode data_structure_system_reset(void);

/**
 * 系统信息函数
 */
size_t data_structure_system_get_total_memory_usage(void);
size_t data_structure_system_get_total_allocations(void);
size_t data_structure_system_get_active_objects(void);
ErrorCode data_structure_system_get_statistics(size_t* total_memory, size_t* total_allocations, size_t* active_objects);

/**
 * 调试和诊断函数
 */
ErrorCode data_structure_system_validate(void);
ErrorCode data_structure_system_dump_state(const char* filename);
ErrorCode data_structure_system_run_diagnostics(void);
const char* data_structure_system_get_error_string(ErrorCode error);

// ============================================================================
// 性能优化函数声明
// ============================================================================

/**
 * 缓存优化函数
 */
ErrorCode prefetch_data(const void* address, size_t size);
ErrorCode flush_cache(void);
ErrorCode optimize_memory_access_pattern(void* data, size_t size, size_t element_size);

/**
 * SIMD优化函数
 */
ErrorCode simd_enabled(void);
ErrorCode vectorized_copy(void* dest, const void* src, size_t size);
ErrorCode vectorized_compare(const void* ptr1, const void* ptr2, size_t size, int* result);

/**
 * 内存屏障函数
 */
ErrorCode memory_barrier_load(void);
ErrorCode memory_barrier_store(void);
ErrorCode memory_barrier_full(void);

// ============================================================================
// 线程安全函数声明
// ============================================================================

/**
 * 原子操作函数
 */
uint32_t atomic_increment(uint32_t* value);
uint32_t atomic_decrement(uint32_t* value);
uint32_t atomic_compare_exchange(uint32_t* target, uint32_t expected, uint32_t desired);
void* atomic_exchange_ptr(void** target, void* desired);

/**
 * 锁机制函数
 */
typedef struct {
    uint32_t lock;
    uint32_t owner_thread;
    uint32_t recursion_count;
} SpinLock;

ErrorCode spin_lock_init(SpinLock* lock);
ErrorCode spin_lock_acquire(SpinLock* lock);
ErrorCode spin_lock_release(SpinLock* lock);
bool spin_lock_try_acquire(SpinLock* lock);

// ============================================================================
// 内存映射和文件操作函数声明
// ============================================================================

/**
 * 内存映射文件函数
 */
typedef struct {
    void* mapped_address;
    size_t mapped_size;
    int file_descriptor;
    bool read_only;
} MemoryMappedFile;

ErrorCode memory_mapped_file_create(MemoryMappedFile** mmf, const char* filename, size_t size, bool read_only);
ErrorCode memory_mapped_file_destroy(MemoryMappedFile* mmf);
void* memory_mapped_file_get_address(const MemoryMappedFile* mmf);
size_t memory_mapped_file_get_size(const MemoryMappedFile* mmf);
ErrorCode memory_mapped_file_sync(MemoryMappedFile* mmf);

// ============================================================================
// 示例代码和使用演示
// ============================================================================

#ifdef DATA_STRUCTURE_EXAMPLES

/**
 * 数据结构使用示例函数
 */
void data_structure_usage_examples(void) {
    // 链表示例
    LinkedList* list;
    linked_list_create(&list, 16);
    
    int data[] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++) {
        linked_list_append(list, &data[i]);
    }
    
    // 哈希表示例
    HashTable* table;
    hashtable_create(&table, 1024, 0.75f, hash_string, NULL);
    
    const char* key = "test_key";
    const char* value = "test_value";
    hashtable_put(table, (void*)key, (void*)value);
    
    // 队列示例
    Queue* queue;
    queue_create(&queue, 32);
    queue_enqueue(queue, &data[0]);
    
    // 栈示例
    Stack* stack;
    stack_create(&stack, 32, sizeof(int));
    stack_push(stack, &data[0]);
    
    // 清理资源
    linked_list_destroy(list);
    hashtable_destroy(table);
    queue_destroy(queue);
    stack_destroy(stack);
}

#endif // DATA_STRUCTURE_EXAMPLES

// ============================================================================
// 版本信息和编译配置
// ============================================================================

#define DATA_STRUCTURE_SYSTEM_VERSION_MAJOR    2
#define DATA_STRUCTURE_SYSTEM_VERSION_MINOR    0
#define DATA_STRUCTURE_SYSTEM_VERSION_PATCH    0
#define DATA_STRUCTURE_SYSTEM_VERSION_STRING   "2.0.0"

#ifdef __cplusplus
extern "C" {
#endif

// ============================================================================
// 导出函数声明（用于动态链接库）
// ============================================================================

// ============================================================================
// 导出函数实现
// ============================================================================

/**
 * 导出的初始化函数实现
 */
DATA_STRUCTURE_API ErrorCode data_structure_initialize(void) {
    return data_structure_system_initialize();
}

/**
 * 导出的关闭函数实现
 */
DATA_STRUCTURE_API ErrorCode data_structure_shutdown(void) {
    return data_structure_system_shutdown();
}

/**
 * 导出的版本函数实现
 */
DATA_STRUCTURE_API const char* data_structure_get_version(void) {
    return "2.0.0";
}

// ============================================================================
// 缺失的函数实现
// ============================================================================

/**
 * 获取哈希表大小实现
 */
size_t hashtable_size(const HashTable* table) {
    return table ? table->size : 0;
}

/**
 * 哈希表扩容实现
 */
ErrorCode hashtable_resize(HashTable* table, size_t new_size) {
    if (!table || new_size <= table->bucket_count) {
        return ERROR_INVALID_PARAMETER;
    }
    
    // 创建新的桶数组
    HashTableNode** new_buckets = (HashTableNode**)calloc(new_size, sizeof(HashTableNode*));
    if (!new_buckets) {
        return ERROR_OUT_OF_MEMORY;
    }
    
    // 重新哈希所有节点
    for (size_t i = 0; i < table->bucket_count; i++) {
        HashTableNode* current = table->buckets[i];
        while (current) {
            HashTableNode* next = current->next;
            
            // 计算新的桶索引
            size_t new_bucket_index = current->hash % new_size;
            
            // 插入到新桶中
            current->next = new_buckets[new_bucket_index];
            new_buckets[new_bucket_index] = current;
            
            current = next;
        }
    }
    
    // 释放旧的桶数组
    free(table->buckets);
    
    // 更新哈希表信息
    table->buckets = new_buckets;
    table->bucket_count = new_size;
    
    return ERROR_SUCCESS;
}

#ifdef __cplusplus
}
#endif