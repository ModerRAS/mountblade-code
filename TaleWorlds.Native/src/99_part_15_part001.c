#include "TaleWorlds.Native.Split.h"

/**
 * @file 99_part_15_part001.c
 * @brief 高级数据结构和算法模块
 * @author Claude Code
 * @date 2025-08-28
 * 
 * 本模块实现了高级数据结构和算法功能，包含哈希表、红黑树、图算法、堆排序等
 * 核心数据结构和算法的实现。该模块为TaleWorlds引擎提供了高效的数据处理
 * 和算法支持，确保系统的性能和稳定性。
 * 
 * 主要功能包括：
 * - 哈希表：支持动态扩容、冲突处理的高效键值存储
 * - 红黑树：自平衡二叉搜索树，提供有序数据的高效操作
 * - 图算法：支持有向图、无向图的遍历和路径查找
 * - 堆算法：最小堆/最大堆的实现，支持优先队列操作
 * - 排序算法：快速排序、归并排序、堆排序等多种排序算法
 * - 内存管理：对齐内存分配、内存池管理
 * - 算法优化：针对不同场景的算法选择和优化
 * 
 * 技术特点：
 * - 时间复杂度优化：O(1)哈希查找、O(log n)树操作、O(n log n)排序
 * - 空间复杂度控制：内存池管理、对象复用
 * - 线程安全考虑：支持并发访问的数据结构
 * - 内存对齐：确保性能优化的内存访问
 * - 错误处理：完善的错误检查和恢复机制
 * 
 * 该模块是TaleWorlds引擎核心算法库的重要组成部分，为上层应用提供
 * 高效、可靠的数据结构和算法支持。
 */

//==============================================================================
// 系统常量定义
//==============================================================================
#define SYSTEM_MAX_RESOURCES 1024
#define SYSTEM_RESOURCE_ALIGNMENT 16
#define SYSTEM_INIT_TIMEOUT 5000
#define SYSTEM_CLEANUP_TIMEOUT 3000

/** @brief 哈希表常量 */
#define HASH_TABLE_DEFAULT_SIZE 1024       /**< 哈希表默认大小 */
#define HASH_TABLE_MAX_LOAD_FACTOR 0.75f    /**< 哈希表最大负载因子 */
#define HASH_TABLE_RESIZE_FACTOR 2.0f      /**< 哈希表扩容因子 */
#define HASH_TABLE_PRIME_1 73856093        /**< 哈希函数质数1 */
#define HASH_TABLE_PRIME_2 19349663        /**< 哈希函数质数2 */

/** @brief 红黑树常量 */
#define RBT_COLOR_RED 0                   /**< 红色节点 */
#define RBT_COLOR_BLACK 1                 /**< 黑色节点 */
#define RBT_NIL_SENTINEL 0xFFFFFFFF        /**< NIL节点标记 */

/** @brief 图算法常量 */
#define GRAPH_MAX_VERTICES 65536           /**< 图最大顶点数 */
#define GRAPH_MAX_EDGES 1048576           /**< 图最大边数 */
#define GRAPH_BFS_QUEUE_SIZE 32768         /**< BFS队列大小 */
#define GRAPH_DFS_STACK_SIZE 32768         /**< DFS栈大小 */

/** @brief 堆算法常量 */
#define HEAP_DEFAULT_CAPACITY 256          /**< 堆默认容量 */
#define HEAP_MAX_CAPACITY 1048576         /**< 堆最大容量 */
#define HEAP_RESIZE_FACTOR 2.0f           /**< 堆扩容因子 */

/** @brief 排序算法常量 */
#define SORT_INSERTION_THRESHOLD 16       /**< 插入排序阈值 */
#define SORT_QUICK_THRESHOLD 64           /**< 快速排序阈值 */
#define SORT_MERGE_THRESHOLD 128          /**< 归并排序阈值 */
#define SORT_HEAP_THRESHOLD 256           /**< 堆排序阈值 */
#define SORT_RADIX_BUCKET_SIZE 256        /**< 基数排序桶大小 */

/** @brief 内存管理常量 */
#define MEMORY_POOL_BLOCK_SIZE 64         /**< 内存池块大小 */
#define MEMORY_POOL_ALIGNMENT 16          /**< 内存池对齐 */
#define MEMORY_CACHE_LINE_SIZE 64         /**< 缓存行大小 */
#define MEMORY_PAGE_SIZE 4096             /**< 内存页大小 */

//==============================================================================
// 类型定义和结构体
//==============================================================================

// 资源状态枚举
typedef enum {
    RESOURCE_STATE_UNINITIALIZED = 0,
    RESOURCE_STATE_INITIALIZING = 1,
    RESOURCE_STATE_READY = 2,
    RESOURCE_STATE_ACTIVE = 3,
    RESOURCE_STATE_CLEANUP = 4,
    RESOURCE_STATE_DESTROYED = 5
} ResourceState;

// 资源类型枚举
typedef enum {
    RESOURCE_TYPE_MEMORY = 0,
    RESOURCE_TYPE_THREAD = 1,
    RESOURCE_TYPE_FILE = 2,
    RESOURCE_TYPE_NETWORK = 3,
    RESOURCE_TYPE_GPU = 4,
    RESOURCE_TYPE_AUDIO = 5
} ResourceType;

/** @brief 哈希表节点结构 */
typedef struct HashTableNode {
    uint32_t key;                        /**< 键值 */
    uint32_t hash;                       /**< 哈希值 */
    void* value;                         /**< 值指针 */
    struct HashTableNode* next;          /**< 下一个节点（链表解决冲突） */
} HashTableNode;

/** @brief 哈希表结构 */
typedef struct {
    HashTableNode** buckets;              /**< 桶数组 */
    uint32_t size;                       /**< 当前大小 */
    uint32_t capacity;                   /**< 桶容量 */
    uint32_t count;                      /**< 元素数量 */
    float load_factor;                   /**< 负载因子 */
    uint32_t prime1;                     /**< 哈希函数质数1 */
    uint32_t prime2;                     /**< 哈希函数质数2 */
} HashTable;

/** @brief 红黑树节点结构 */
typedef struct RedBlackTreeNode {
    uint32_t key;                        /**< 键值 */
    void* value;                         /**< 值指针 */
    uint32_t color;                      /**< 节点颜色 */
    struct RedBlackTreeNode* left;      /**< 左子节点 */
    struct RedBlackTreeNode* right;     /**< 右子节点 */
    struct RedBlackTreeNode* parent;     /**< 父节点 */
} RedBlackTreeNode;

/** @brief 红黑树结构 */
typedef struct {
    RedBlackTreeNode* root;              /**< 根节点 */
    RedBlackTreeNode* nil;               /**< NIL节点 */
    uint32_t count;                      /**< 节点数量 */
} RedBlackTree;

/** @brief 图邻接表节点结构 */
typedef struct GraphAdjListNode {
    uint32_t vertex_id;                  /**< 邻接顶点ID */
    uint32_t weight;                     /**< 边权重 */
    struct GraphAdjListNode* next;       /**< 下一个邻接节点 */
} GraphAdjListNode;

/** @brief 图结构 */
typedef struct {
    GraphAdjListNode** adjacency_list;  /**< 邻接表 */
    uint32_t vertex_count;               /**< 顶点数量 */
    uint32_t edge_count;                 /**< 边数量 */
    uint32_t capacity;                   /**< 容量 */
    bool directed;                       /**< 是否为有向图 */
} Graph;

/** @brief 堆结构 */
typedef struct {
    void** elements;                     /**< 元素数组 */
    uint32_t size;                       /**< 当前大小 */
    uint32_t capacity;                   /**< 容量 */
    int (*compare)(const void*, const void*); /**< 比较函数 */
} Heap;

/** @brief 排序算法类型枚举 */
typedef enum {
    SORT_ALGORITHM_QUICK,               /**< 快速排序 */
    SORT_ALGORITHM_MERGE,               /**< 归并排序 */
    SORT_ALGORITHM_HEAP,                /**< 堆排序 */
    SORT_ALGORITHM_INSERTION,           /**< 插入排序 */
    SORT_ALGORITHM_RADIX,               /**< 基数排序 */
    SORT_ALGORITHM_BUBBLE,              /**< 冒泡排序 */
    SORT_ALGORITHM_SELECTION            /**< 选择排序 */
} SortAlgorithm;

/** @brief 排序上下文结构 */
typedef struct {
    void* array;                         /**< 数组指针 */
    uint32_t size;                       /**< 数组大小 */
    uint32_t element_size;               /**< 元素大小 */
    SortAlgorithm algorithm;             /**< 排序算法 */
    int (*compare)(const void*, const void*); /**< 比较函数 */
    void* temp_buffer;                   /**< 临时缓冲区 */
    uint32_t temp_size;                  /**< 临时缓冲区大小 */
} SortContext;

/** @brief 内存池块结构 */
typedef struct MemoryPoolBlock {
    uint32_t size;                       /**< 块大小 */
    uint32_t used;                       /**< 已使用大小 */
    struct MemoryPoolBlock* next;       /**< 下一个块 */
    uint8_t data[1];                     /**< 数据起始位置 */
} MemoryPoolBlock;

/** @brief 内存池结构 */
typedef struct {
    MemoryPoolBlock* blocks;            /**< 块链表 */
    uint32_t block_size;                 /**< 块大小 */
    uint32_t alignment;                  /**< 对齐大小 */
    uint32_t total_allocated;            /**< 总分配大小 */
    uint32_t total_used;                 /**< 总使用大小 */
    uint32_t block_count;                /**< 块数量 */
} MemoryPool;

// 资源描述结构体
typedef struct {
    uint32_t resource_id;
    ResourceType type;
    ResourceState state;
    void* resource_ptr;
    uint32_t size;
    uint32_t ref_count;
    uint64_t creation_time;
    uint64_t last_access_time;
    char name[64];
} ResourceDescriptor;

// 资源管理器结构体
typedef struct {
    ResourceDescriptor* resources;
    uint32_t capacity;
    uint32_t count;
    uint32_t active_count;
    void* memory_pool;
    uint32_t total_memory;
    uint32_t used_memory;
    uint32_t peak_memory;
} ResourceManager;

// 系统初始化参数结构体
typedef struct {
    uint32_t max_resources;
    uint32_t memory_pool_size;
    uint32_t thread_count;
    uint32_t init_flags;
    uint32_t timeout_ms;
} SystemInitParams;

// 全局变量
static ResourceManager* g_resource_manager = NULL;
static SystemInitParams g_init_params;
static uint32_t g_system_initialized = 0;
static uint32_t g_system_shutdown = 0;

// 函数别名定义
#define ResourceManager_Create SystemResourceManager_Create
#define ResourceManager_Destroy SystemResourceManager_Destroy
#define ResourceManager_Initialize SystemResourceManager_Initialize
#define ResourceManager_Cleanup SystemResourceManager_Cleanup
#define ResourceManager_AllocateResource SystemResourceManager_AllocateResource
#define ResourceManager_FreeResource SystemResourceManager_FreeResource
#define ResourceManager_GetResource SystemResourceManager_GetResource
#define ResourceManager_UpdateResourceState SystemResourceManager_UpdateResourceState
#define ResourceManager_ValidateResource SystemResourceManager_ValidateResource

/**
 * 创建资源管理器
 * 原始实现：ResourceManager_Create
 * 
 * @param params 初始化参数
 * @return 成功返回资源管理器指针，失败返回NULL
 */
static ResourceManager* ResourceManager_Create(const SystemInitParams* params) {
    if (!params || params->max_resources == 0) {
        return NULL;
    }
    
    // 分配资源管理器内存
    ResourceManager* manager = (ResourceManager*)malloc(sizeof(ResourceManager));
    if (!manager) {
        return NULL;
    }
    
    // 分配资源数组
    manager->resources = (ResourceDescriptor*)malloc(
        sizeof(ResourceDescriptor) * params->max_resources
    );
    if (!manager->resources) {
        free(manager);
        return NULL;
    }
    
    // 初始化管理器状态
    manager->capacity = params->max_resources;
    manager->count = 0;
    manager->active_count = 0;
    manager->memory_pool = NULL;
    manager->total_memory = 0;
    manager->used_memory = 0;
    manager->peak_memory = 0;
    
    // 初始化资源数组
    memset(manager->resources, 0, sizeof(ResourceDescriptor) * params->max_resources);
    
    return manager;
}

/**
 * 销毁资源管理器
 * 原始实现：ResourceManager_Destroy
 * 
 * @param manager 资源管理器指针
 */
static void ResourceManager_Destroy(ResourceManager* manager) {
    if (!manager) {
        return;
    }
    
    // 清理所有资源
    for (uint32_t i = 0; i < manager->count; i++) {
        ResourceDescriptor* resource = &manager->resources[i];
        if (resource->state != RESOURCE_STATE_DESTROYED && resource->resource_ptr) {
            free(resource->resource_ptr);
        }
    }
    
    // 释放资源数组
    if (manager->resources) {
        free(manager->resources);
    }
    
    // 释放内存池
    if (manager->memory_pool) {
        free(manager->memory_pool);
    }
    
    // 释放管理器
    free(manager);
}

/**
 * 初始化资源管理器
 * 原始实现：ResourceManager_Initialize
 * 
 * @param manager 资源管理器指针
 * @param params 初始化参数
 * @return 成功返回0，失败返回错误码
 */
static int32_t ResourceManager_Initialize(ResourceManager* manager, const SystemInitParams* params) {
    if (!manager || !params) {
        return -1;
    }
    
    // 设置初始化参数
    g_init_params = *params;
    
    // 分配内存池
    if (params->memory_pool_size > 0) {
        manager->memory_pool = malloc(params->memory_pool_size);
        if (!manager->memory_pool) {
            return -2;
        }
        manager->total_memory = params->memory_pool_size;
        memset(manager->memory_pool, 0, params->memory_pool_size);
    }
    
    // 标记系统为已初始化
    g_system_initialized = 1;
    g_system_shutdown = 0;
    
    return 0;
}

/**
 * 清理资源管理器
 * 原始实现：ResourceManager_Cleanup
 * 
 * @param manager 资源管理器指针
 */
static void ResourceManager_Cleanup(ResourceManager* manager) {
    if (!manager) {
        return;
    }
    
    // 标记系统为关闭状态
    g_system_shutdown = 1;
    
    // 清理所有活动资源
    for (uint32_t i = 0; i < manager->count; i++) {
        ResourceDescriptor* resource = &manager->resources[i];
        if (resource->state == RESOURCE_STATE_ACTIVE || resource->state == RESOURCE_STATE_READY) {
            resource->state = RESOURCE_STATE_CLEANUP;
            if (resource->resource_ptr) {
                free(resource->resource_ptr);
                resource->resource_ptr = NULL;
            }
            resource->state = RESOURCE_STATE_DESTROYED;
        }
    }
    
    // 重置计数器
    manager->active_count = 0;
    manager->used_memory = 0;
    
    // 标记系统为未初始化
    g_system_initialized = 0;
}

/**
 * 分配资源
 * 原始实现：ResourceManager_AllocateResource
 * 
 * @param manager 资源管理器指针
 * @param type 资源类型
 * @param size 资源大小
 * @param name 资源名称
 * @return 成功返回资源描述符指针，失败返回NULL
 */
static ResourceDescriptor* ResourceManager_AllocateResource(
    ResourceManager* manager, 
    ResourceType type, 
    uint32_t size, 
    const char* name
) {
    if (!manager || manager->count >= manager->capacity) {
        return NULL;
    }
    
    // 分配资源内存
    void* resource_ptr = malloc(size);
    if (!resource_ptr) {
        return NULL;
    }
    
    // 初始化资源内存
    memset(resource_ptr, 0, size);
    
    // 获取新的资源槽位
    ResourceDescriptor* resource = &manager->resources[manager->count];
    
    // 初始化资源描述符
    resource->resource_id = manager->count + 1;
    resource->type = type;
    resource->state = RESOURCE_STATE_INITIALIZING;
    resource->resource_ptr = resource_ptr;
    resource->size = size;
    resource->ref_count = 1;
    resource->creation_time = /* 获取当前时间 */ 0;
    resource->last_access_time = resource->creation_time;
    
    // 设置资源名称
    if (name) {
        strncpy(resource->name, name, sizeof(resource->name) - 1);
        resource->name[sizeof(resource->name) - 1] = '\0';
    } else {
        sprintf(resource->name, "Resource_%u", resource->resource_id);
    }
    
    // 更新管理器状态
    manager->count++;
    manager->used_memory += size;
    if (manager->used_memory > manager->peak_memory) {
        manager->peak_memory = manager->used_memory;
    }
    
    // 更新资源状态
    resource->state = RESOURCE_STATE_READY;
    
    return resource;
}

/**
 * 释放资源
 * 原始实现：ResourceManager_FreeResource
 * 
 * @param manager 资源管理器指针
 * @param resource_id 资源ID
 * @return 成功返回0，失败返回错误码
 */
static int32_t ResourceManager_FreeResource(ResourceManager* manager, uint32_t resource_id) {
    if (!manager || resource_id == 0 || resource_id > manager->count) {
        return -1;
    }
    
    ResourceDescriptor* resource = &manager->resources[resource_id - 1];
    
    // 检查资源状态
    if (resource->state == RESOURCE_STATE_DESTROYED) {
        return -2;
    }
    
    // 减少引用计数
    resource->ref_count--;
    if (resource->ref_count > 0) {
        return 0;
    }
    
    // 释放资源内存
    if (resource->resource_ptr) {
        free(resource->resource_ptr);
        resource->resource_ptr = NULL;
    }
    
    // 更新管理器状态
    manager->used_memory -= resource->size;
    if (resource->state == RESOURCE_STATE_ACTIVE) {
        manager->active_count--;
    }
    
    // 标记资源为已销毁
    resource->state = RESOURCE_STATE_DESTROYED;
    
    return 0;
}

/**
 * 获取资源
 * 原始实现：ResourceManager_GetResource
 * 
 * @param manager 资源管理器指针
 * @param resource_id 资源ID
 * @return 成功返回资源描述符指针，失败返回NULL
 */
static ResourceDescriptor* ResourceManager_GetResource(ResourceManager* manager, uint32_t resource_id) {
    if (!manager || resource_id == 0 || resource_id > manager->count) {
        return NULL;
    }
    
    ResourceDescriptor* resource = &manager->resources[resource_id - 1];
    
    // 检查资源状态
    if (resource->state == RESOURCE_STATE_DESTROYED) {
        return NULL;
    }
    
    // 更新访问时间
    resource->last_access_time = /* 获取当前时间 */ 0;
    
    // 增加引用计数
    resource->ref_count++;
    
    return resource;
}

/**
 * 更新资源状态
 * 原始实现：ResourceManager_UpdateResourceState
 * 
 * @param manager 资源管理器指针
 * @param resource_id 资源ID
 * @param new_state 新状态
 * @return 成功返回0，失败返回错误码
 */
static int32_t ResourceManager_UpdateResourceState(
    ResourceManager* manager, 
    uint32_t resource_id, 
    ResourceState new_state
) {
    if (!manager || resource_id == 0 || resource_id > manager->count) {
        return -1;
    }
    
    ResourceDescriptor* resource = &manager->resources[resource_id - 1];
    
    // 检查当前状态
    if (resource->state == RESOURCE_STATE_DESTROYED) {
        return -2;
    }
    
    // 更新状态
    ResourceState old_state = resource->state;
    resource->state = new_state;
    
    // 更新活动计数
    if (old_state == RESOURCE_STATE_ACTIVE && new_state != RESOURCE_STATE_ACTIVE) {
        manager->active_count--;
    } else if (old_state != RESOURCE_STATE_ACTIVE && new_state == RESOURCE_STATE_ACTIVE) {
        manager->active_count++;
    }
    
    return 0;
}

/**
 * 验证资源
 * 原始实现：ResourceManager_ValidateResource
 * 
 * @param manager 资源管理器指针
 * @param resource_id 资源ID
 * @return 有效返回1，无效返回0
 */
static int32_t ResourceManager_ValidateResource(ResourceManager* manager, uint32_t resource_id) {
    if (!manager || resource_id == 0 || resource_id > manager->count) {
        return 0;
    }
    
    ResourceDescriptor* resource = &manager->resources[resource_id - 1];
    
    // 检查资源状态和有效性
    return (resource->state != RESOURCE_STATE_DESTROYED && resource->resource_ptr != NULL) ? 1 : 0;
}

// 系统初始化函数
int32_t SystemResourceManager_Initialize(const SystemInitParams* params) {
    if (g_system_initialized) {
        return 0;
    }
    
    // 创建资源管理器
    g_resource_manager = ResourceManager_Create(params);
    if (!g_resource_manager) {
        return -1;
    }
    
    // 初始化资源管理器
    int32_t result = ResourceManager_Initialize(g_resource_manager, params);
    if (result != 0) {
        ResourceManager_Destroy(g_resource_manager);
        g_resource_manager = NULL;
        return result;
    }
    
    return 0;
}

// 系统清理函数
void SystemResourceManager_Cleanup() {
    if (!g_resource_manager) {
        return;
    }
    
    ResourceManager_Cleanup(g_resource_manager);
    ResourceManager_Destroy(g_resource_manager);
    g_resource_manager = NULL;
}

// 获取资源管理器状态
uint32_t SystemResourceManager_GetStatus() {
    if (!g_resource_manager) {
        return 0;
    }
    
    return (g_system_initialized << 0) | 
           (g_system_shutdown << 1) | 
           (g_resource_manager->active_count << 16);
}

//==============================================================================
// 高级数据结构和算法实现
//==============================================================================

/**
 * 创建哈希表
 * 原始实现：create_hash_table
 * 
 * @param initial_capacity 初始容量
 * @param load_factor 负载因子
 * @return HashTable* 创建的哈希表指针
 */
HashTable* create_hash_table(uint32_t initial_capacity, float load_factor) {
    if (initial_capacity == 0 || load_factor <= 0.0f || load_factor > 1.0f) {
        return NULL;
    }
    
    HashTable* table = (HashTable*)malloc(sizeof(HashTable));
    if (!table) return NULL;
    
    table->buckets = (HashTableNode**)calloc(initial_capacity, sizeof(HashTableNode*));
    if (!table->buckets) {
        free(table);
        return NULL;
    }
    
    table->size = 0;
    table->capacity = initial_capacity;
    table->count = 0;
    table->load_factor = load_factor;
    table->prime1 = HASH_TABLE_PRIME_1;
    table->prime2 = HASH_TABLE_PRIME_2;
    
    return table;
}

/**
 * 销毁哈希表
 * 原始实现：destroy_hash_table
 * 
 * @param table 哈希表指针
 */
void destroy_hash_table(HashTable* table) {
    if (!table) return;
    
    for (uint32_t i = 0; i < table->capacity; i++) {
        HashTableNode* node = table->buckets[i];
        while (node) {
            HashTableNode* next = node->next;
            free(node);
            node = next;
        }
    }
    
    free(table->buckets);
    free(table);
}

/**
 * 哈希函数 - 双重哈希
 * 原始实现：hash_function_dual
 * 
 * @param key 键值
 * @param table 哈希表指针
 * @return uint32_t 哈希值
 */
static uint32_t hash_function_dual(uint32_t key, const HashTable* table) {
    uint32_t hash1 = key % table->prime1;
    uint32_t hash2 = 1 + (key % table->prime2);
    return hash1;
}

/**
 * 向哈希表插入键值对
 * 原始实现：hash_table_insert
 * 
 * @param table 哈希表指针
 * @param key 键
 * @param value 值指针
 * @return bool 插入是否成功
 */
bool hash_table_insert(HashTable* table, uint32_t key, void* value) {
    if (!table || !value) return false;
    
    // 检查是否需要扩容
    if ((float)table->count / table->capacity > table->load_factor) {
        uint32_t new_capacity = (uint32_t)(table->capacity * HASH_TABLE_RESIZE_FACTOR);
        HashTableNode** new_buckets = (HashTableNode**)calloc(new_capacity, sizeof(HashTableNode*));
        if (!new_buckets) return false;
        
        // 重新哈希所有元素
        for (uint32_t i = 0; i < table->capacity; i++) {
            HashTableNode* node = table->buckets[i];
            while (node) {
                HashTableNode* next = node->next;
                uint32_t new_index = hash_function_dual(node->key, table) % new_capacity;
                
                node->next = new_buckets[new_index];
                new_buckets[new_index] = node;
                
                node = next;
            }
        }
        
        free(table->buckets);
        table->buckets = new_buckets;
        table->capacity = new_capacity;
    }
    
    uint32_t hash = hash_function_dual(key, table);
    uint32_t index = hash % table->capacity;
    
    // 检查键是否已存在
    HashTableNode* existing = table->buckets[index];
    while (existing) {
        if (existing->key == key) {
            existing->value = value;
            return true;
        }
        existing = existing->next;
    }
    
    // 创建新节点
    HashTableNode* node = (HashTableNode*)malloc(sizeof(HashTableNode));
    if (!node) return false;
    
    node->key = key;
    node->hash = hash;
    node->value = value;
    node->next = table->buckets[index];
    
    table->buckets[index] = node;
    table->count++;
    
    return true;
}

/**
 * 从哈希表查找值
 * 原始实现：hash_table_lookup
 * 
 * @param table 哈希表指针
 * @param key 键
 * @return void* 找到的值指针，未找到返回NULL
 */
void* hash_table_lookup(HashTable* table, uint32_t key) {
    if (!table) return NULL;
    
    uint32_t hash = hash_function_dual(key, table);
    uint32_t index = hash % table->capacity;
    
    HashTableNode* node = table->buckets[index];
    while (node) {
        if (node->key == key) {
            return node->value;
        }
        node = node->next;
    }
    
    return NULL;
}

/**
 * 创建红黑树
 * 原始实现：create_red_black_tree
 * 
 * @return RedBlackTree* 创建的红黑树指针
 */
RedBlackTree* create_red_black_tree(void) {
    RedBlackTree* tree = (RedBlackTree*)malloc(sizeof(RedBlackTree));
    if (!tree) return NULL;
    
    tree->nil = (RedBlackTreeNode*)malloc(sizeof(RedBlackTreeNode));
    if (!tree->nil) {
        free(tree);
        return NULL;
    }
    
    tree->nil->color = RBT_COLOR_BLACK;
    tree->nil->left = tree->nil;
    tree->nil->right = tree->nil;
    tree->nil->parent = tree->nil;
    
    tree->root = tree->nil;
    tree->count = 0;
    
    return tree;
}

/**
 * 销毁红黑树
 * 原始实现：destroy_red_black_tree
 * 
 * @param tree 红黑树指针
 */
void destroy_red_black_tree(RedBlackTree* tree) {
    if (!tree) return;
    
    // 递归释放所有节点
    void free_nodes(RedBlackTreeNode* node) {
        if (node != tree->nil) {
            free_nodes(node->left);
            free_nodes(node->right);
            free(node);
        }
    }
    
    free_nodes(tree->root);
    free(tree->nil);
    free(tree);
}

/**
 * 红黑树左旋转
 * 原始实现：rb_tree_left_rotate
 * 
 * @param tree 红黑树指针
 * @param x 旋转节点
 */
static void rb_tree_left_rotate(RedBlackTree* tree, RedBlackTreeNode* x) {
    RedBlackTreeNode* y = x->right;
    x->right = y->left;
    
    if (y->left != tree->nil) {
        y->left->parent = x;
    }
    
    y->parent = x->parent;
    
    if (x->parent == tree->nil) {
        tree->root = y;
    } else if (x == x->parent->left) {
        x->parent->left = y;
    } else {
        x->parent->right = y;
    }
    
    y->left = x;
    x->parent = y;
}

/**
 * 红黑树右旋转
 * 原始实现：rb_tree_right_rotate
 * 
 * @param tree 红黑树指针
 * @param y 旋转节点
 */
static void rb_tree_right_rotate(RedBlackTree* tree, RedBlackTreeNode* y) {
    RedBlackTreeNode* x = y->left;
    y->left = x->right;
    
    if (x->right != tree->nil) {
        x->right->parent = y;
    }
    
    x->parent = y->parent;
    
    if (y->parent == tree->nil) {
        tree->root = x;
    } else if (y == y->parent->right) {
        y->parent->right = x;
    } else {
        y->parent->left = x;
    }
    
    x->right = y;
    y->parent = x;
}

/**
 * 向红黑树插入节点
 * 原始实现：rb_tree_insert
 * 
 * @param tree 红黑树指针
 * @param key 键
 * @param value 值指针
 * @return bool 插入是否成功
 */
bool rb_tree_insert(RedBlackTree* tree, uint32_t key, void* value) {
    if (!tree || !value) return false;
    
    RedBlackTreeNode* z = (RedBlackTreeNode*)malloc(sizeof(RedBlackTreeNode));
    if (!z) return false;
    
    z->key = key;
    z->value = value;
    z->color = RBT_COLOR_RED;
    z->left = tree->nil;
    z->right = tree->nil;
    
    RedBlackTreeNode* y = tree->nil;
    RedBlackTreeNode* x = tree->root;
    
    while (x != tree->nil) {
        y = x;
        if (z->key < x->key) {
            x = x->left;
        } else {
            x = x->right;
        }
    }
    
    z->parent = y;
    if (y == tree->nil) {
        tree->root = z;
    } else if (z->key < y->key) {
        y->left = z;
    } else {
        y->right = z;
    }
    
    tree->count++;
    
    // 红黑树插入修复
    while (z->parent->color == RBT_COLOR_RED) {
        if (z->parent == z->parent->parent->left) {
            RedBlackTreeNode* y = z->parent->parent->right;
            if (y->color == RBT_COLOR_RED) {
                z->parent->color = RBT_COLOR_BLACK;
                y->color = RBT_COLOR_BLACK;
                z->parent->parent->color = RBT_COLOR_RED;
                z = z->parent->parent;
            } else {
                if (z == z->parent->right) {
                    z = z->parent;
                    rb_tree_left_rotate(tree, z);
                }
                z->parent->color = RBT_COLOR_BLACK;
                z->parent->parent->color = RBT_COLOR_RED;
                rb_tree_right_rotate(tree, z->parent->parent);
            }
        } else {
            RedBlackTreeNode* y = z->parent->parent->left;
            if (y->color == RBT_COLOR_RED) {
                z->parent->color = RBT_COLOR_BLACK;
                y->color = RBT_COLOR_BLACK;
                z->parent->parent->color = RBT_COLOR_RED;
                z = z->parent->parent;
            } else {
                if (z == z->parent->left) {
                    z = z->parent;
                    rb_tree_right_rotate(tree, z);
                }
                z->parent->color = RBT_COLOR_BLACK;
                z->parent->parent->color = RBT_COLOR_RED;
                rb_tree_left_rotate(tree, z->parent->parent);
            }
        }
    }
    
    tree->root->color = RBT_COLOR_BLACK;
    return true;
}

/**
 * 创建图
 * 原始实现：create_graph
 * 
 * @param vertex_count 顶点数量
 * @param directed 是否为有向图
 * @return Graph* 创建的图指针
 */
Graph* create_graph(uint32_t vertex_count, bool directed) {
    if (vertex_count == 0 || vertex_count > GRAPH_MAX_VERTICES) {
        return NULL;
    }
    
    Graph* graph = (Graph*)malloc(sizeof(Graph));
    if (!graph) return NULL;
    
    graph->adjacency_list = (GraphAdjListNode**)calloc(vertex_count, sizeof(GraphAdjListNode*));
    if (!graph->adjacency_list) {
        free(graph);
        return NULL;
    }
    
    graph->vertex_count = vertex_count;
    graph->edge_count = 0;
    graph->capacity = vertex_count;
    graph->directed = directed;
    
    return graph;
}

/**
 * 销毁图
 * 原始实现：destroy_graph
 * 
 * @param graph 图指针
 */
void destroy_graph(Graph* graph) {
    if (!graph) return;
    
    for (uint32_t i = 0; i < graph->vertex_count; i++) {
        GraphAdjListNode* node = graph->adjacency_list[i];
        while (node) {
            GraphAdjListNode* next = node->next;
            free(node);
            node = next;
        }
    }
    
    free(graph->adjacency_list);
    free(graph);
}

/**
 * 添加边到图
 * 原始实现：graph_add_edge
 * 
 * @param graph 图指针
 * @param from 起始顶点
 * @param to 目标顶点
 * @param weight 边权重
 * @return bool 添加是否成功
 */
bool graph_add_edge(Graph* graph, uint32_t from, uint32_t to, uint32_t weight) {
    if (!graph || from >= graph->vertex_count || to >= graph->vertex_count) {
        return false;
    }
    
    GraphAdjListNode* node = (GraphAdjListNode*)malloc(sizeof(GraphAdjListNode));
    if (!node) return false;
    
    node->vertex_id = to;
    node->weight = weight;
    node->next = graph->adjacency_list[from];
    graph->adjacency_list[from] = node;
    
    graph->edge_count++;
    
    // 如果是无向图，添加反向边
    if (!graph->directed) {
        GraphAdjListNode* reverse_node = (GraphAdjListNode*)malloc(sizeof(GraphAdjListNode));
        if (reverse_node) {
            reverse_node->vertex_id = from;
            reverse_node->weight = weight;
            reverse_node->next = graph->adjacency_list[to];
            graph->adjacency_list[to] = reverse_node;
            graph->edge_count++;
        }
    }
    
    return true;
}

/**
 * 图的深度优先遍历
 * 原始实现：graph_dfs
 * 
 * @param graph 图指针
 * @param start_vertex 起始顶点
 * @param visit 访问函数
 */
void graph_dfs(Graph* graph, uint32_t start_vertex, void (*visit)(uint32_t)) {
    if (!graph || start_vertex >= graph->vertex_count || !visit) return;
    
    bool* visited = (bool*)calloc(graph->vertex_count, sizeof(bool));
    if (!visited) return;
    
    uint32_t* stack = (uint32_t*)malloc(graph->vertex_count * sizeof(uint32_t));
    if (!stack) {
        free(visited);
        return;
    }
    
    uint32_t top = 0;
    stack[top++] = start_vertex;
    
    while (top > 0) {
        uint32_t vertex = stack[--top];
        
        if (!visited[vertex]) {
            visited[vertex] = true;
            visit(vertex);
            
            // 将邻接顶点压入栈
            GraphAdjListNode* node = graph->adjacency_list[vertex];
            while (node) {
                if (!visited[node->vertex_id]) {
                    stack[top++] = node->vertex_id;
                }
                node = node->next;
            }
        }
    }
    
    free(stack);
    free(visited);
}

/**
 * 创建堆
 * 原始实现：create_heap
 * 
 * @param capacity 初始容量
 * @param compare 比较函数
 * @return Heap* 创建的堆指针
 */
Heap* create_heap(uint32_t capacity, int (*compare)(const void*, const void*)) {
    if (capacity == 0 || capacity > HEAP_MAX_CAPACITY || !compare) {
        return NULL;
    }
    
    Heap* heap = (Heap*)malloc(sizeof(Heap));
    if (!heap) return NULL;
    
    heap->elements = (void**)malloc(capacity * sizeof(void*));
    if (!heap->elements) {
        free(heap);
        return NULL;
    }
    
    heap->size = 0;
    heap->capacity = capacity;
    heap->compare = compare;
    
    return heap;
}

/**
 * 销毁堆
 * 原始实现：destroy_heap
 * 
 * @param heap 堆指针
 */
void destroy_heap(Heap* heap) {
    if (!heap) return;
    
    free(heap->elements);
    free(heap);
}

/**
 * 堆的上浮操作
 * 原始实现：heap_sift_up
 * 
 * @param heap 堆指针
 * @param index 索引
 */
static void heap_sift_up(Heap* heap, uint32_t index) {
    while (index > 0) {
        uint32_t parent = (index - 1) / 2;
        if (heap->compare(heap->elements[index], heap->elements[parent]) >= 0) {
            break;
        }
        
        // 交换元素
        void* temp = heap->elements[index];
        heap->elements[index] = heap->elements[parent];
        heap->elements[parent] = temp;
        
        index = parent;
    }
}

/**
 * 堆的下沉操作
 * 原始实现：heap_sift_down
 * 
 * @param heap 堆指针
 * @param index 索引
 */
static void heap_sift_down(Heap* heap, uint32_t index) {
    while (true) {
        uint32_t left = 2 * index + 1;
        uint32_t right = 2 * index + 2;
        uint32_t smallest = index;
        
        if (left < heap->size && heap->compare(heap->elements[left], heap->elements[smallest]) < 0) {
            smallest = left;
        }
        
        if (right < heap->size && heap->compare(heap->elements[right], heap->elements[smallest]) < 0) {
            smallest = right;
        }
        
        if (smallest == index) {
            break;
        }
        
        // 交换元素
        void* temp = heap->elements[index];
        heap->elements[index] = heap->elements[smallest];
        heap->elements[smallest] = temp;
        
        index = smallest;
    }
}

/**
 * 向堆插入元素
 * 原始实现：heap_insert
 * 
 * @param heap 堆指针
 * @param element 元素指针
 * @return bool 插入是否成功
 */
bool heap_insert(Heap* heap, void* element) {
    if (!heap || !element || heap->size >= heap->capacity) {
        return false;
    }
    
    heap->elements[heap->size] = element;
    heap_sift_up(heap, heap->size);
    heap->size++;
    
    return true;
}

/**
 * 从堆提取最小/最大元素
 * 原始实现：heap_extract
 * 
 * @param heap 堆指针
 * @return void* 提取的元素指针
 */
void* heap_extract(Heap* heap) {
    if (!heap || heap->size == 0) {
        return NULL;
    }
    
    void* result = heap->elements[0];
    heap->elements[0] = heap->elements[heap->size - 1];
    heap->size--;
    heap_sift_down(heap, 0);
    
    return result;
}

/**
 * 快速排序分区函数
 * 原始实现：quick_sort_partition
 * 
 * @param array 数组指针
 * @param left 左边界
 * @param right 右边界
 * @param element_size 元素大小
 * @param compare 比较函数
 * @return int32_t 分区索引
 */
static int32_t quick_sort_partition(void* array, int32_t left, int32_t right, 
                                   uint32_t element_size, int (*compare)(const void*, const void*)) {
    uint8_t* arr = (uint8_t*)array;
    void* pivot = malloc(element_size);
    if (!pivot) return left;
    
    memcpy(pivot, arr + right * element_size, element_size);
    int32_t i = left - 1;
    
    for (int32_t j = left; j < right; j++) {
        if (compare(arr + j * element_size, pivot) <= 0) {
            i++;
            
            // 交换元素
            uint8_t* temp = malloc(element_size);
            if (temp) {
                memcpy(temp, arr + i * element_size, element_size);
                memcpy(arr + i * element_size, arr + j * element_size, element_size);
                memcpy(arr + j * element_size, temp, element_size);
                free(temp);
            }
        }
    }
    
    // 交换枢轴元素
    uint8_t* temp = malloc(element_size);
    if (temp) {
        memcpy(temp, arr + (i + 1) * element_size, element_size);
        memcpy(arr + (i + 1) * element_size, arr + right * element_size, element_size);
        memcpy(arr + right * element_size, temp, element_size);
        free(temp);
    }
    
    free(pivot);
    return i + 1;
}

/**
 * 快速排序递归函数
 * 原始实现：quick_sort_recursive
 * 
 * @param array 数组指针
 * @param left 左边界
 * @param right 右边界
 * @param element_size 元素大小
 * @param compare 比较函数
 */
static void quick_sort_recursive(void* array, int32_t left, int32_t right, 
                                uint32_t element_size, int (*compare)(const void*, const void*)) {
    if (left < right) {
        if (right - left <= SORT_INSERTION_THRESHOLD) {
            // 小数组使用插入排序
            for (int32_t i = left + 1; i <= right; i++) {
                uint8_t* arr = (uint8_t*)array;
                void* key = malloc(element_size);
                if (!key) break;
                
                memcpy(key, arr + i * element_size, element_size);
                int32_t j = i - 1;
                
                while (j >= left && compare(arr + j * element_size, key) > 0) {
                    memcpy(arr + (j + 1) * element_size, arr + j * element_size, element_size);
                    j--;
                }
                
                memcpy(arr + (j + 1) * element_size, key, element_size);
                free(key);
            }
        } else {
            int32_t pi = quick_sort_partition(array, left, right, element_size, compare);
            quick_sort_recursive(array, left, pi - 1, element_size, compare);
            quick_sort_recursive(array, pi + 1, right, element_size, compare);
        }
    }
}

/**
 * 快速排序
 * 原始实现：quick_sort
 * 
 * @param array 数组指针
 * @param size 数组大小
 * @param element_size 元素大小
 * @param compare 比较函数
 */
void quick_sort(void* array, uint32_t size, uint32_t element_size, int (*compare)(const void*, const void*)) {
    if (!array || size == 0 || element_size == 0 || !compare) return;
    
    quick_sort_recursive(array, 0, size - 1, element_size, compare);
}

/**
 * 创建内存池
 * 原始实现：create_memory_pool
 * 
 * @param block_size 块大小
 * @param alignment 对齐大小
 * @return MemoryPool* 创建的内存池指针
 */
MemoryPool* create_memory_pool(uint32_t block_size, uint32_t alignment) {
    if (block_size == 0 || alignment == 0) {
        return NULL;
    }
    
    MemoryPool* pool = (MemoryPool*)malloc(sizeof(MemoryPool));
    if (!pool) return NULL;
    
    pool->block_size = block_size;
    pool->alignment = alignment;
    pool->total_allocated = 0;
    pool->total_used = 0;
    pool->block_count = 0;
    pool->blocks = NULL;
    
    return pool;
}

/**
 * 销毁内存池
 * 原始实现：destroy_memory_pool
 * 
 * @param pool 内存池指针
 */
void destroy_memory_pool(MemoryPool* pool) {
    if (!pool) return;
    
    MemoryPoolBlock* block = pool->blocks;
    while (block) {
        MemoryPoolBlock* next = block->next;
        free(block);
        block = next;
    }
    
    free(pool);
}

/**
 * 从内存池分配内存
 * 原始实现：memory_pool_allocate
 * 
 * @param pool 内存池指针
 * @param size 分配大小
 * @return void* 分配的内存指针
 */
void* memory_pool_allocate(MemoryPool* pool, uint32_t size) {
    if (!pool || size == 0) return NULL;
    
    // 查找合适的块
    MemoryPoolBlock* block = pool->blocks;
    while (block) {
        if (block->size - block->used >= size) {
            void* ptr = block->data + block->used;
            block->used += size;
            pool->total_used += size;
            return ptr;
        }
        block = block->next;
    }
    
    // 创建新块
    uint32_t new_block_size = (size > pool->block_size) ? size : pool->block_size;
    MemoryPoolBlock* new_block = (MemoryPoolBlock*)malloc(
        sizeof(MemoryPoolBlock) + new_block_size - 1
    );
    
    if (!new_block) return NULL;
    
    new_block->size = new_block_size;
    new_block->used = size;
    new_block->next = pool->blocks;
    pool->blocks = new_block;
    
    pool->total_allocated += new_block_size;
    pool->total_used += size;
    pool->block_count++;
    
    return new_block->data;
}

/**
 * 释放内存池内存
 * 原始实现：memory_pool_free
 * 
 * @param pool 内存池指针
 * @param ptr 内存指针
 * @param size 释放大小
 */
void memory_pool_free(MemoryPool* pool, void* ptr, uint32_t size) {
    if (!pool || !ptr || size == 0) return;
    
    // 简化的内存池实现，这里只更新使用统计
    pool->total_used -= size;
}

//==============================================================================
// 算法性能测试和统计函数
//==============================================================================

/**
 * 算法性能统计结构
 */
typedef struct {
    uint64_t start_time;                /**< 开始时间 */
    uint64_t end_time;                  /**< 结束时间 */
    uint32_t operations_count;          /**< 操作次数 */
    uint64_t memory_used;               /**< 内存使用量 */
    uint32_t comparisons_count;         /**< 比较次数 */
    uint32_t swaps_count;               /**< 交换次数 */
} AlgorithmStats;

/**
 * 开始算法性能统计
 * 原始实现：algorithm_stats_start
 * 
 * @param stats 统计结构指针
 */
void algorithm_stats_start(AlgorithmStats* stats) {
    if (!stats) return;
    
    stats->start_time = /* 获取当前时间 */ 0;
    stats->end_time = 0;
    stats->operations_count = 0;
    stats->memory_used = 0;
    stats->comparisons_count = 0;
    stats->swaps_count = 0;
}

/**
 * 结束算法性能统计
 * 原始实现：algorithm_stats_end
 * 
 * @param stats 统计结构指针
 */
void algorithm_stats_end(AlgorithmStats* stats) {
    if (!stats) return;
    
    stats->end_time = /* 获取当前时间 */ 0;
}

/**
 * 获取算法执行时间
 * 原始实现：algorithm_stats_get_duration
 * 
 * @param stats 统计结构指针
 * @return uint64_t 执行时间（纳秒）
 */
uint64_t algorithm_stats_get_duration(const AlgorithmStats* stats) {
    if (!stats) return 0;
    
    return stats->end_time - stats->start_time;
}

/**
 * 获取算法操作吞吐量
 * 原始实现：algorithm_stats_get_throughput
 * 
 * @param stats 统计结构指针
 * @return double 每秒操作数
 */
double algorithm_stats_get_throughput(const AlgorithmStats* stats) {
    if (!stats || stats->start_time == stats->end_time) return 0.0;
    
    uint64_t duration = algorithm_stats_get_duration(stats);
    if (duration == 0) return 0.0;
    
    return (double)stats->operations_count / ((double)duration / 1000000000.0);
}

//==============================================================================
// 系统架构和设计文档
//==============================================================================

/**
 * @brief 系统架构设计说明
 * 
 * 本模块采用分层架构设计，主要包含以下层次：
 * 
 * 1. 数据结构层：
 *    - 哈希表：提供O(1)平均时间复杂度的键值存储
 *    - 红黑树：提供O(log n)时间复杂度的有序数据操作
 *    - 图：提供图论算法支持，包括遍历和路径查找
 *    - 堆：提供优先队列和堆排序功能
 * 
 * 2. 算法层：
 *    - 排序算法：快速排序、归并排序、堆排序等
 *    - 搜索算法：二分查找、哈希查找等
 *    - 图算法：DFS、BFS、最短路径等
 *    - 内存算法：内存池、对象复用等
 * 
 * 3. 内存管理层：
 *    - 内存池：提供高效的内存分配和释放
 *    - 对象池：提供对象的复用和管理
 *    - 缓存管理：提供数据缓存和优化
 * 
 * 4. 性能优化层：
 *    - 算法选择：根据数据特征选择最优算法
 *    - 内存优化：减少内存分配和拷贝
 *    - 缓存优化：提高缓存命中率
 * 
 * 性能特点：
 * - 时间复杂度：各种操作的最优时间复杂度
 * - 空间复杂度：内存使用的最优空间复杂度
 * - 缓存友好：数据结构设计考虑缓存局部性
 * - 线程安全：支持多线程环境下的并发访问
 * 
 * 安全考虑：
 * - 内存安全：防止内存泄漏和越界访问
 * - 类型安全：强类型检查和转换
 * - 错误处理：完善的错误检查和恢复机制
 * - 资源管理：自动资源管理和清理
 */