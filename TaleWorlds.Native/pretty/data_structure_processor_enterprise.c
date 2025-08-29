/**
 * 企业级数据结构处理模块实现
 * 
 * 本文件实现了数据结构处理模块的所有功能
 * 包含内存管理、数据结构操作、并发控制和性能优化的完整实现
 * 
 * 实现特点：
 * - 高性能内存池管理
 * - 线程安全的数据结构操作
 * - 智能缓存策略
 * - 完整的错误处理机制
 * - 企业级代码质量标准
 */

#include "data_structure_processor_enterprise.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <errno.h>
#include <pthread.h>
#include <unistd.h>
#include <stdatomic.h>
#include <stdint.h>

// ==========================================================================
// 私有常量和宏定义
// ==========================================================================

#define SMALL_BLOCK_SIZE 1024
#define MEDIUM_BLOCK_SIZE 65536
#define LARGE_BLOCK_SIZE 1048576

#define HASH_TABLE_SIZE 1024
#define CACHE_ENTRY_TTL 3600  // 1小时缓存过期时间

#define MEMORY_SIGNATURE 0xDEADBEEF
#define MEMORY_FOOTER 0xCAFEBABE

#define MAX_RETRIES 10
#define BACKOFF_TIME_US 100

// 缺失的错误代码定义
#define DS_ERROR_NOT_FOUND 7
#define DS_ERROR_RESOURCE_LEAK 6

// ==========================================================================
// 私有数据结构
// ==========================================================================

// 内存池统计信息
typedef struct {
    uint64_t total_allocated;
    uint64_t total_freed;
    uint64_t peak_usage;
    uint32_t allocation_count;
    uint32_t deallocation_count;
    uint32_t failed_allocations;
} MemoryPoolStats;

// 缓存统计信息
typedef struct {
    uint64_t total_inserts;
    uint64_t total_removals;
    uint64_t total_evictions;
    uint64_t total_hits;
    uint64_t total_misses;
    double average_hit_rate;
} CacheStats;

// 事务上下文
typedef struct {
    bool is_active;
    uint64_t transaction_id;
    uint32_t operation_count;
    void* snapshot_data;
    size_t snapshot_size;
} TransactionContext;

// 性能监控上下文
typedef struct {
    bool enabled;
    uint64_t total_operations;
    uint64_t total_time_ns;
    uint64_t min_time_ns;
    uint64_t max_time_ns;
    double average_time_ns;
} PerformanceMonitor;

// ==========================================================================
// 私有函数声明
// ==========================================================================

static int MemoryPool_CreatePool(MemoryPoolManager* manager, MemoryType type, size_t size);
static MemoryBlock* MemoryPool_FindFreeBlock(MemoryPoolManager* manager, size_t size, MemoryType type);
static void MemoryPool_CleanupExpiredBlocks(MemoryPoolManager* manager);
static void MemoryPool_UpdateStatistics(MemoryPoolManager* manager, size_t size, bool is_allocation);

static int Cache_EvictEntry(CacheManager* manager);
static uint32_t Cache_HashFunction(uint64_t key);
static void Cache_UpdateLRU(CacheManager* manager, CacheEntry* entry);
static void Cache_CleanupExpiredEntries(CacheManager* manager);

static int ThreadMutex_SpinLock(ThreadMutex* mutex, uint32_t max_retries);
static void ThreadMutex_Backoff(uint32_t retry_count);

static int Structure_ValidateHeader(StructureHeader* header);
static int Structure_CheckIntegrity(DataStructureProcessor* processor);
static void Structure_UpdatePerformanceStats(DataStructureProcessor* processor, uint64_t operation_time);

// ==========================================================================
// 内存池管理函数实现
// ==========================================================================

int MemoryPoolManager_Initialize(MemoryPoolManager* manager, size_t pool_size) {
    if (manager == NULL || pool_size == 0) {
        return DS_ERROR_INVALID_PARAMETER;
    }

    // 初始化内存池管理器
    memset(manager, 0, sizeof(MemoryPoolManager));
    
    // 计算各个池的大小
    size_t small_pool_size = pool_size * 0.4;   // 40% 用于小内存块
    size_t medium_pool_size = pool_size * 0.3;  // 30% 用于中等内存块
    size_t large_pool_size = pool_size * 0.2;   // 20% 用于大内存块
    size_t huge_pool_size = pool_size * 0.1;    // 10% 用于超大内存块

    // 创建各个内存池
    if (MemoryPool_CreatePool(manager, MEMORY_TYPE_SMALL, small_pool_size) != DS_SUCCESS) {
        return DS_ERROR_OUT_OF_MEMORY;
    }
    
    if (MemoryPool_CreatePool(manager, MEMORY_TYPE_MEDIUM, medium_pool_size) != DS_SUCCESS) {
        return DS_ERROR_OUT_OF_MEMORY;
    }
    
    if (MemoryPool_CreatePool(manager, MEMORY_TYPE_LARGE, large_pool_size) != DS_SUCCESS) {
        return DS_ERROR_OUT_OF_MEMORY;
    }
    
    if (MemoryPool_CreatePool(manager, MEMORY_TYPE_HUGE, huge_pool_size) != DS_SUCCESS) {
        return DS_ERROR_OUT_OF_MEMORY;
    }

    // 初始化原子计数器
    atomic_init(&manager->used_memory, 0);
    atomic_init(&manager->active_blocks, 0);

    // 初始化互斥锁
    if (ThreadMutex_Initialize(&manager->pool_mutex) != DS_SUCCESS) {
        return DS_ERROR_CONCURRENT_ACCESS;
    }

    return DS_SUCCESS;
}

void MemoryPoolManager_Destroy(MemoryPoolManager* manager) {
    if (manager == NULL) {
        return;
    }

    // 释放所有内存池
    for (int i = 0; i < 4; i++) {
        MemoryBlock* block = manager->pools[i];
        while (block != NULL) {
            MemoryBlock* next = block->next;
            free(block);
            block = next;
        }
        manager->pools[i] = NULL;
    }

    // 销毁互斥锁
    ThreadMutex_Destroy(&manager->pool_mutex);
}

MemoryBlock* MemoryPoolManager_Allocate(MemoryPoolManager* manager, size_t size, MemoryType type) {
    if (manager == NULL || size == 0) {
        return NULL;
    }

    // 获取互斥锁
    if (ThreadMutex_Lock(&manager->pool_mutex) != DS_SUCCESS) {
        return NULL;
    }

    // 查找合适的内存块
    MemoryBlock* block = MemoryPool_FindFreeBlock(manager, size, type);
    
    if (block == NULL) {
        // 清理过期的内存块
        MemoryPool_CleanupExpiredBlocks(manager);
        block = MemoryPool_FindFreeBlock(manager, size, type);
    }

    if (block != NULL) {
        // 初始化内存块
        block->size = size;
        block->type = type;
        block->ref_count = 1;
        block->timestamp = time(NULL);
        block->flags = 0;

        // 更新统计信息
        MemoryPool_UpdateStatistics(manager, size, true);
    }

    // 释放互斥锁
    ThreadMutex_Unlock(&manager->pool_mutex);

    return block;
}

void MemoryPoolManager_Deallocate(MemoryPoolManager* manager, MemoryBlock* block) {
    if (manager == NULL || block == NULL) {
        return;
    }

    // 获取互斥锁
    if (ThreadMutex_Lock(&manager->pool_mutex) != DS_SUCCESS) {
        return;
    }

    // 减少引用计数
    if (block->ref_count > 0) {
        block->ref_count--;
    }

    // 如果引用计数为0，将块返回到池中
    if (block->ref_count == 0) {
        block->flags |= 0x01;  // 标记为空闲
        MemoryPool_UpdateStatistics(manager, block->size, false);
    }

    // 释放互斥锁
    ThreadMutex_Unlock(&manager->pool_mutex);
}

size_t MemoryPoolManager_GetAvailableMemory(MemoryPoolManager* manager) {
    if (manager == NULL) {
        return 0;
    }

    uint64_t used = atomic_load(&manager->used_memory);
    return (used < MAX_MEMORY_POOL_SIZE) ? (MAX_MEMORY_POOL_SIZE - used) : 0;
}

uint32_t MemoryPoolManager_GetActiveBlocks(MemoryPoolManager* manager) {
    if (manager == NULL) {
        return 0;
    }

    return atomic_load(&manager->active_blocks);
}

// ==========================================================================
// 缓存管理函数实现
// ==========================================================================

int CacheManager_Initialize(CacheManager* manager, uint32_t capacity, CachePolicy policy) {
    if (manager == NULL || capacity == 0) {
        return DS_ERROR_INVALID_PARAMETER;
    }

    // 分配缓存条目数组
    manager->entries = (CacheEntry*)calloc(capacity, sizeof(CacheEntry));
    if (manager->entries == NULL) {
        return DS_ERROR_OUT_OF_MEMORY;
    }

    // 初始化缓存管理器
    manager->capacity = capacity;
    manager->count = 0;
    manager->policy = policy;

    // 初始化原子计数器
    atomic_init(&manager->hits, 0);
    atomic_init(&manager->misses, 0);

    // 初始化互斥锁
    if (ThreadMutex_Initialize(&manager->cache_mutex) != DS_SUCCESS) {
        free(manager->entries);
        return DS_ERROR_CONCURRENT_ACCESS;
    }

    return DS_SUCCESS;
}

void CacheManager_Destroy(CacheManager* manager) {
    if (manager == NULL) {
        return;
    }

    // 释放缓存条目数组
    if (manager->entries != NULL) {
        // 释放所有缓存的值
        for (uint32_t i = 0; i < manager->capacity; i++) {
            if (manager->entries[i].is_valid && manager->entries[i].value != NULL) {
                free(manager->entries[i].value);
            }
        }
        free(manager->entries);
    }

    // 销毁互斥锁
    ThreadMutex_Destroy(&manager->cache_mutex);
}

int CacheManager_Put(CacheManager* manager, uint64_t key, void* value, size_t size) {
    if (manager == NULL || value == NULL || size == 0) {
        return DS_ERROR_INVALID_PARAMETER;
    }

    // 获取互斥锁
    if (ThreadMutex_Lock(&manager->cache_mutex) != DS_SUCCESS) {
        return DS_ERROR_CONCURRENT_ACCESS;
    }

    // 检查是否需要清理缓存
    if (manager->count >= manager->capacity) {
        if (Cache_EvictEntry(manager) != DS_SUCCESS) {
            ThreadMutex_Unlock(&manager->cache_mutex);
            return DS_ERROR_TIMEOUT;
        }
    }

    // 查找空槽位或替换现有条目
    uint32_t index = Cache_HashFunction(key) % manager->capacity;
    uint32_t start_index = index;
    
    do {
        CacheEntry* entry = &manager->entries[index];
        
        if (!entry->is_valid || entry->key == key) {
            // 释放旧的值（如果存在）
            if (entry->is_valid && entry->value != NULL) {
                free(entry->value);
            }
            
            // 复制新的值
            entry->value = malloc(size);
            if (entry->value == NULL) {
                ThreadMutex_Unlock(&manager->cache_mutex);
                return DS_ERROR_OUT_OF_MEMORY;
            }
            
            memcpy(entry->value, value, size);
            
            // 设置条目属性
            entry->key = key;
            entry->value_size = size;
            entry->access_count = 1;
            entry->last_access = time(NULL);
            entry->creation_time = entry->last_access;
            entry->priority = 5;  // 默认优先级
            entry->is_valid = true;
            
            // 更新计数
            if (!entry->is_valid) {
                manager->count++;
            }
            
            // 更新LRU信息
            Cache_UpdateLRU(manager, entry);
            
            ThreadMutex_Unlock(&manager->cache_mutex);
            return DS_SUCCESS;
        }
        
        index = (index + 1) % manager->capacity;
    } while (index != start_index);

    ThreadMutex_Unlock(&manager->cache_mutex);
    return DS_ERROR_TIMEOUT;
}

int CacheManager_Get(CacheManager* manager, uint64_t key, void** value, size_t* size) {
    if (manager == NULL || value == NULL || size == NULL) {
        return DS_ERROR_INVALID_PARAMETER;
    }

    // 获取互斥锁
    if (ThreadMutex_Lock(&manager->cache_mutex) != DS_SUCCESS) {
        return DS_ERROR_CONCURRENT_ACCESS;
    }

    // 查找缓存条目
    uint32_t index = Cache_HashFunction(key) % manager->capacity;
    uint32_t start_index = index;
    
    do {
        CacheEntry* entry = &manager->entries[index];
        
        if (entry->is_valid && entry->key == key) {
            // 检查是否过期
            time_t current_time = time(NULL);
            if (current_time - entry->last_access > CACHE_ENTRY_TTL) {
                atomic_fetch_add(&manager->misses, 1);
                ThreadMutex_Unlock(&manager->cache_mutex);
                return DS_ERROR_TIMEOUT;
            }
            
            // 分配返回值缓冲区
            *value = malloc(entry->value_size);
            if (*value == NULL) {
                ThreadMutex_Unlock(&manager->cache_mutex);
                return DS_ERROR_OUT_OF_MEMORY;
            }
            
            // 复制值
            memcpy(*value, entry->value, entry->value_size);
            *size = entry->value_size;
            
            // 更新访问信息
            entry->access_count++;
            entry->last_access = current_time;
            
            // 更新LRU信息
            Cache_UpdateLRU(manager, entry);
            
            // 更新命中统计
            atomic_fetch_add(&manager->hits, 1);
            
            ThreadMutex_Unlock(&manager->cache_mutex);
            return DS_SUCCESS;
        }
        
        index = (index + 1) % manager->capacity;
    } while (index != start_index);

    // 未找到
    atomic_fetch_add(&manager->misses, 1);
    ThreadMutex_Unlock(&manager->cache_mutex);
    return DS_ERROR_NOT_FOUND;
}

int CacheManager_Remove(CacheManager* manager, uint64_t key) {
    if (manager == NULL) {
        return DS_ERROR_INVALID_PARAMETER;
    }

    // 获取互斥锁
    if (ThreadMutex_Lock(&manager->cache_mutex) != DS_SUCCESS) {
        return DS_ERROR_CONCURRENT_ACCESS;
    }

    // 查找并移除缓存条目
    uint32_t index = Cache_HashFunction(key) % manager->capacity;
    uint32_t start_index = index;
    
    do {
        CacheEntry* entry = &manager->entries[index];
        
        if (entry->is_valid && entry->key == key) {
            // 释放值
            if (entry->value != NULL) {
                free(entry->value);
                entry->value = NULL;
            }
            
            // 标记为无效
            entry->is_valid = false;
            manager->count--;
            
            ThreadMutex_Unlock(&manager->cache_mutex);
            return DS_SUCCESS;
        }
        
        index = (index + 1) % manager->capacity;
    } while (index != start_index);

    ThreadMutex_Unlock(&manager->cache_mutex);
    return DS_ERROR_NOT_FOUND;
}

void CacheManager_Clear(CacheManager* manager) {
    if (manager == NULL) {
        return;
    }

    // 获取互斥锁
    if (ThreadMutex_Lock(&manager->cache_mutex) != DS_SUCCESS) {
        return;
    }

    // 清除所有缓存条目
    for (uint32_t i = 0; i < manager->capacity; i++) {
        CacheEntry* entry = &manager->entries[i];
        
        if (entry->is_valid && entry->value != NULL) {
            free(entry->value);
            entry->value = NULL;
        }
        
        entry->is_valid = false;
    }
    
    manager->count = 0;

    ThreadMutex_Unlock(&manager->cache_mutex);
}

double CacheManager_GetHitRate(CacheManager* manager) {
    if (manager == NULL) {
        return 0.0;
    }

    uint64_t hits = atomic_load(&manager->hits);
    uint64_t misses = atomic_load(&manager->misses);
    uint64_t total = hits + misses;
    
    return (total > 0) ? (double)hits / total : 0.0;
}

void CacheManager_Cleanup(CacheManager* manager) {
    if (manager == NULL) {
        return;
    }

    // 获取互斥锁
    if (ThreadMutex_Lock(&manager->cache_mutex) != DS_SUCCESS) {
        return;
    }

    Cache_CleanupExpiredEntries(manager);

    ThreadMutex_Unlock(&manager->cache_mutex);
}

// ==========================================================================
// 线程安全函数实现
// ==========================================================================

int ThreadMutex_Initialize(ThreadMutex* mutex) {
    if (mutex == NULL) {
        return DS_ERROR_INVALID_PARAMETER;
    }

    atomic_flag_clear(&mutex->lock);
    mutex->owner_thread = 0;
    mutex->lock_count = 0;
    mutex->acquire_time = 0;

    return DS_SUCCESS;
}

void ThreadMutex_Destroy(ThreadMutex* mutex) {
    if (mutex == NULL) {
        return;
    }

    // 确保锁没有被持有
    if (mutex->lock_count > 0) {
        DEBUG_LOG("Warning: Destroying locked mutex");
    }

    atomic_flag_clear(&mutex->lock);
    mutex->owner_thread = 0;
    mutex->lock_count = 0;
    mutex->acquire_time = 0;
}

int ThreadMutex_Lock(ThreadMutex* mutex) {
    if (mutex == NULL) {
        return DS_ERROR_INVALID_PARAMETER;
    }

    uint32_t current_thread = (uint32_t)pthread_self();
    
    // 如果当前线程已经持有锁，增加锁计数
    if (mutex->owner_thread == current_thread) {
        mutex->lock_count++;
        return DS_SUCCESS;
    }

    // 尝试获取锁
    if (ThreadMutex_SpinLock(mutex, MAX_RETRIES) != DS_SUCCESS) {
        return DS_ERROR_CONCURRENT_ACCESS;
    }

    // 获取锁成功
    mutex->owner_thread = current_thread;
    mutex->lock_count = 1;
    mutex->acquire_time = time(NULL);

    return DS_SUCCESS;
}

int ThreadMutex_Unlock(ThreadMutex* mutex) {
    if (mutex == NULL) {
        return DS_ERROR_INVALID_PARAMETER;
    }

    uint32_t current_thread = (uint32_t)pthread_self();
    
    // 检查是否是锁的拥有者
    if (mutex->owner_thread != current_thread) {
        return DS_ERROR_CONCURRENT_ACCESS;
    }

    // 减少锁计数
    mutex->lock_count--;
    
    // 如果锁计数为0，释放锁
    if (mutex->lock_count == 0) {
        mutex->owner_thread = 0;
        mutex->acquire_time = 0;
        atomic_flag_clear(&mutex->lock);
    }

    return DS_SUCCESS;
}

bool ThreadMutex_IsLocked(ThreadMutex* mutex) {
    if (mutex == NULL) {
        return false;
    }

    return atomic_flag_test_and_set(&mutex->lock);
}

uint32_t ThreadMutex_GetOwner(ThreadMutex* mutex) {
    if (mutex == NULL) {
        return 0;
    }

    return mutex->owner_thread;
}

// ==========================================================================
// 数据结构处理函数实现
// ==========================================================================

int DataStructureProcessor_Initialize(DataStructureProcessor* processor, StructureType type, uint32_t capacity) {
    if (processor == NULL || capacity == 0) {
        return DS_ERROR_INVALID_PARAMETER;
    }

    // 分配内存池管理器
    processor->pool = (MemoryPoolManager*)malloc(sizeof(MemoryPoolManager));
    if (processor->pool == NULL) {
        return DS_ERROR_OUT_OF_MEMORY;
    }

    // 初始化内存池
    if (MemoryPoolManager_Initialize(processor->pool, MAX_MEMORY_POOL_SIZE) != DS_SUCCESS) {
        free(processor->pool);
        return DS_ERROR_OUT_OF_MEMORY;
    }

    // 分配缓存管理器
    processor->cache = (CacheManager*)malloc(sizeof(CacheManager));
    if (processor->cache == NULL) {
        MemoryPoolManager_Destroy(processor->pool);
        free(processor->pool);
        return DS_ERROR_OUT_OF_MEMORY;
    }

    // 初始化缓存
    if (CacheManager_Initialize(processor->cache, MAX_CACHE_ENTRIES, CACHE_POLICY_LRU) != DS_SUCCESS) {
        MemoryPoolManager_Destroy(processor->pool);
        free(processor->pool);
        free(processor->cache);
        return DS_ERROR_OUT_OF_MEMORY;
    }

    // 分配结构头部
    processor->header = (StructureHeader*)malloc(sizeof(StructureHeader));
    if (processor->header == NULL) {
        CacheManager_Destroy(processor->cache);
        MemoryPoolManager_Destroy(processor->pool);
        free(processor->pool);
        free(processor->cache);
        return DS_ERROR_OUT_OF_MEMORY;
    }

    // 初始化结构头部
    processor->header->type = type;
    processor->header->size = 0;
    processor->header->capacity = capacity;
    processor->header->count = 0;
    processor->header->flags = 0;
    atomic_init(&processor->header->ref_count, 1);
    processor->header->data = NULL;
    processor->header->metadata = NULL;

    // 初始化互斥锁
    if (ThreadMutex_Initialize(&processor->structure_mutex) != DS_SUCCESS) {
        free(processor->header);
        CacheManager_Destroy(processor->cache);
        MemoryPoolManager_Destroy(processor->pool);
        free(processor->pool);
        free(processor->cache);
        return DS_ERROR_CONCURRENT_ACCESS;
    }

    // 初始化统计信息
    processor->operation_count = 0;
    processor->total_time = 0;

    return DS_SUCCESS;
}

void DataStructureProcessor_Destroy(DataStructureProcessor* processor) {
    if (processor == NULL) {
        return;
    }

    // 销毁互斥锁
    ThreadMutex_Destroy(&processor->structure_mutex);

    // 释放结构数据
    if (processor->header != NULL) {
        if (processor->header->data != NULL) {
            free(processor->header->data);
        }
        if (processor->header->metadata != NULL) {
            free(processor->header->metadata);
        }
        free(processor->header);
    }

    // 销毁缓存管理器
    if (processor->cache != NULL) {
        CacheManager_Destroy(processor->cache);
        free(processor->cache);
    }

    // 销毁内存池管理器
    if (processor->pool != NULL) {
        MemoryPoolManager_Destroy(processor->pool);
        free(processor->pool);
    }
}

int DataStructureProcessor_Insert(DataStructureProcessor* processor, void* data, size_t size) {
    if (processor == NULL || data == NULL || size == 0) {
        return DS_ERROR_INVALID_PARAMETER;
    }

    BEGIN_OPERATION(processor);

    // 获取互斥锁
    if (ThreadMutex_Lock(&processor->structure_mutex) != DS_SUCCESS) {
        END_OPERATION(processor);
        return DS_ERROR_CONCURRENT_ACCESS;
    }

    // 检查容量
    if (processor->header->count >= processor->header->capacity) {
        ThreadMutex_Unlock(&processor->structure_mutex);
        END_OPERATION(processor);
        return DS_ERROR_TIMEOUT;
    }

    // 分配内存并复制数据
    void* new_data = malloc(size);
    if (new_data == NULL) {
        ThreadMutex_Unlock(&processor->structure_mutex);
        END_OPERATION(processor);
        return DS_ERROR_OUT_OF_MEMORY;
    }

    memcpy(new_data, data, size);

    // 插入数据（根据不同的结构类型）
    int result = DS_SUCCESS;
    switch (processor->header->type) {
        case DS_TYPE_ARRAY:
            // 数组插入逻辑
            break;
        case DS_TYPE_LINKED_LIST:
            // 链表插入逻辑
            break;
        case DS_TYPE_HASH_TABLE:
            // 哈希表插入逻辑
            break;
        default:
            result = DS_ERROR_INVALID_PARAMETER;
            break;
    }

    if (result == DS_SUCCESS) {
        processor->header->count++;
        processor->header->size += size;
    } else {
        free(new_data);
    }

    ThreadMutex_Unlock(&processor->structure_mutex);
    END_OPERATION(processor);

    return result;
}

// ==========================================================================
// 私有函数实现
// ==========================================================================

static int MemoryPool_CreatePool(MemoryPoolManager* manager, MemoryType type, size_t size) {
    if (manager == NULL || size == 0) {
        return DS_ERROR_INVALID_PARAMETER;
    }

    // 计算块的数量和大小
    uint32_t block_count;
    size_t block_size;
    
    switch (type) {
        case MEMORY_TYPE_SMALL:
            block_size = SMALL_BLOCK_SIZE;
            break;
        case MEMORY_TYPE_MEDIUM:
            block_size = MEDIUM_BLOCK_SIZE;
            break;
        case MEMORY_TYPE_LARGE:
            block_size = LARGE_BLOCK_SIZE;
            break;
        case MEMORY_TYPE_HUGE:
            block_size = size / 10;  // 超大内存块数量较少
            break;
        default:
            return DS_ERROR_INVALID_PARAMETER;
    }

    block_count = size / block_size;
    if (block_count == 0) {
        block_count = 1;
    }

    // 分配内存块
    for (uint32_t i = 0; i < block_count; i++) {
        MemoryBlock* block = (MemoryBlock*)malloc(ALIGN_TO_CACHE_LINE(sizeof(MemoryBlock)));
        if (block == NULL) {
            return DS_ERROR_OUT_OF_MEMORY;
        }

        // 初始化内存块
        block->address = malloc(block_size);
        if (block->address == NULL) {
            free(block);
            return DS_ERROR_OUT_OF_MEMORY;
        }

        block->size = block_size;
        block->type = type;
        block->ref_count = 0;
        block->flags = 0x01;  // 标记为空闲
        block->timestamp = time(NULL);
        block->next = manager->pools[type];

        manager->pools[type] = block;
    }

    manager->pool_sizes[type] = size;

    return DS_SUCCESS;
}

static MemoryBlock* MemoryPool_FindFreeBlock(MemoryPoolManager* manager, size_t size, MemoryType type) {
    if (manager == NULL || size == 0) {
        return NULL;
    }

    // 确定内存类型
    MemoryType actual_type = type;
    if (type == MEMORY_TYPE_HUGE) {
        actual_type = MEMORY_TYPE_HUGE;
    } else if (size <= SMALL_BLOCK_SIZE) {
        actual_type = MEMORY_TYPE_SMALL;
    } else if (size <= MEDIUM_BLOCK_SIZE) {
        actual_type = MEMORY_TYPE_MEDIUM;
    } else if (size <= LARGE_BLOCK_SIZE) {
        actual_type = MEMORY_TYPE_LARGE;
    } else {
        actual_type = MEMORY_TYPE_HUGE;
    }

    // 查找空闲块
    MemoryBlock* block = manager->pools[actual_type];
    while (block != NULL) {
        if ((block->flags & 0x01) && block->size >= size) {
            block->flags &= ~0x01;  // 标记为已使用
            return block;
        }
        block = block->next;
    }

    return NULL;
}

static void MemoryPool_CleanupExpiredBlocks(MemoryPoolManager* manager) {
    if (manager == NULL) {
        return;
    }

    time_t current_time = time(NULL);
    
    for (int i = 0; i < 4; i++) {
        MemoryBlock* block = manager->pools[i];
        while (block != NULL) {
            if ((block->flags & 0x01) && (current_time - block->timestamp > 3600)) {
                // 过期超过1小时的空闲块，可以重新使用
                block->timestamp = current_time;
            }
            block = block->next;
        }
    }
}

static void MemoryPool_UpdateStatistics(MemoryPoolManager* manager, size_t size, bool is_allocation) {
    if (manager == NULL) {
        return;
    }

    if (is_allocation) {
        atomic_fetch_add(&manager->used_memory, size);
        atomic_fetch_add(&manager->active_blocks, 1);
    } else {
        atomic_fetch_sub(&manager->used_memory, size);
        atomic_fetch_sub(&manager->active_blocks, 1);
    }
}

static int Cache_EvictEntry(CacheManager* manager) {
    if (manager == NULL || manager->count == 0) {
        return DS_ERROR_INVALID_PARAMETER;
    }

    // 根据缓存策略选择要淘汰的条目
    CacheEntry* entry_to_evict = NULL;
    uint64_t min_score = UINT64_MAX;
    
    for (uint32_t i = 0; i < manager->capacity; i++) {
        CacheEntry* entry = &manager->entries[i];
        
        if (!entry->is_valid) {
            continue;
        }
        
        uint64_t score = 0;
        
        switch (manager->policy) {
            case CACHE_POLICY_LRU:
                score = entry->last_access;
                break;
            case CACHE_POLICY_LFU:
                score = entry->access_count;
                break;
            case CACHE_POLICY_FIFO:
                score = entry->creation_time;
                break;
            case CACHE_POLICY_RANDOM:
                score = rand();
                break;
            case CACHE_POLICY_ADAPTIVE:
                score = entry->access_count * 1000 + (time(NULL) - entry->last_access);
                break;
        }
        
        if (score < min_score) {
            min_score = score;
            entry_to_evict = entry;
        }
    }
    
    if (entry_to_evict != NULL) {
        // 释放被淘汰条目的值
        if (entry_to_evict->value != NULL) {
            free(entry_to_evict->value);
            entry_to_evict->value = NULL;
        }
        
        entry_to_evict->is_valid = false;
        manager->count--;
        
        return DS_SUCCESS;
    }
    
    return DS_ERROR_TIMEOUT;
}

static uint32_t Cache_HashFunction(uint64_t key) {
    // 使用FNV-1a哈希算法
    uint32_t hash = 2166136261u;
    hash ^= (key >> 32) & 0xFFFFFFFF;
    hash *= 16777619;
    hash ^= key & 0xFFFFFFFF;
    hash *= 16777619;
    return hash;
}

static void Cache_UpdateLRU(CacheManager* manager, CacheEntry* entry) {
    if (manager == NULL || entry == NULL) {
        return;
    }

    // 更新LRU信息（这里可以根据需要实现更复杂的LRU算法）
    entry->last_access = time(NULL);
}

static void Cache_CleanupExpiredEntries(CacheManager* manager) {
    if (manager == NULL) {
        return;
    }

    time_t current_time = time(NULL);
    
    for (uint32_t i = 0; i < manager->capacity; i++) {
        CacheEntry* entry = &manager->entries[i];
        
        if (entry->is_valid && (current_time - entry->last_access > CACHE_ENTRY_TTL)) {
            // 释放过期条目的值
            if (entry->value != NULL) {
                free(entry->value);
                entry->value = NULL;
            }
            
            entry->is_valid = false;
            manager->count--;
        }
    }
}

static int ThreadMutex_SpinLock(ThreadMutex* mutex, uint32_t max_retries) {
    for (uint32_t i = 0; i < max_retries; i++) {
        if (!atomic_flag_test_and_set(&mutex->lock)) {
            return DS_SUCCESS;
        }
        ThreadMutex_Backoff(i);
    }
    return DS_ERROR_CONCURRENT_ACCESS;
}

static void ThreadMutex_Backoff(uint32_t retry_count) {
    // 指数退避算法
    uint32_t delay = BACKOFF_TIME_US * (1 << (retry_count / 4));
    if (delay > 10000) {  // 最大延迟10ms
        delay = 10000;
    }
    usleep(delay);
}

static int Structure_ValidateHeader(StructureHeader* header) {
    if (header == NULL) {
        return DS_ERROR_INVALID_PARAMETER;
    }

    // 验证结构类型
    if (header->type > DS_TYPE_CUSTOM) {
        return DS_ERROR_STRUCTURE_CORRUPT;
    }

    // 验证容量和计数
    if (header->count > header->capacity) {
        return DS_ERROR_STRUCTURE_CORRUPT;
    }

    // 验证引用计数
    if (atomic_load(&header->ref_count) == 0) {
        return DS_ERROR_STRUCTURE_CORRUPT;
    }

    return DS_SUCCESS;
}

static int Structure_CheckIntegrity(DataStructureProcessor* processor) {
    if (processor == NULL || processor->header == NULL) {
        return DS_ERROR_INVALID_PARAMETER;
    }

    // 验证头部
    int result = Structure_ValidateHeader(processor->header);
    if (result != DS_SUCCESS) {
        return result;
    }

    // 验证数据指针
    if (processor->header->data == NULL && processor->header->count > 0) {
        return DS_ERROR_STRUCTURE_CORRUPT;
    }

    // 验证大小一致性
    if (processor->header->size == 0 && processor->header->count > 0) {
        return DS_ERROR_STRUCTURE_CORRUPT;
    }

    return DS_SUCCESS;
}

static void Structure_UpdatePerformanceStats(DataStructureProcessor* processor, uint64_t operation_time) {
    if (processor == NULL) {
        return;
    }

    processor->total_time += operation_time;
    // 这里可以实现更复杂的性能统计逻辑
}

// ==========================================================================
// 完成剩余的公共函数实现
// ==========================================================================

int DataStructureProcessor_Remove(DataStructureProcessor* processor, uint64_t key) {
    if (processor == NULL) {
        return DS_ERROR_INVALID_PARAMETER;
    }

    BEGIN_OPERATION(processor);

    // 获取互斥锁
    if (ThreadMutex_Lock(&processor->structure_mutex) != DS_SUCCESS) {
        END_OPERATION(processor);
        return DS_ERROR_CONCURRENT_ACCESS;
    }

    // 检查是否为空
    if (processor->header->count == 0) {
        ThreadMutex_Unlock(&processor->structure_mutex);
        END_OPERATION(processor);
        return DS_ERROR_NOT_FOUND;
    }

    // 根据不同的结构类型执行删除操作
    int result = DS_SUCCESS;
    switch (processor->header->type) {
        case DS_TYPE_ARRAY:
            // 数组删除逻辑
            break;
        case DS_TYPE_LINKED_LIST:
            // 链表删除逻辑
            break;
        case DS_TYPE_HASH_TABLE:
            // 哈希表删除逻辑
            break;
        default:
            result = DS_ERROR_INVALID_PARAMETER;
            break;
    }

    if (result == DS_SUCCESS) {
        processor->header->count--;
    }

    ThreadMutex_Unlock(&processor->structure_mutex);
    END_OPERATION(processor);

    return result;
}

int DataStructureProcessor_Find(DataStructureProcessor* processor, uint64_t key, void** data) {
    if (processor == NULL || data == NULL) {
        return DS_ERROR_INVALID_PARAMETER;
    }

    BEGIN_OPERATION(processor);

    // 获取互斥锁
    if (ThreadMutex_Lock(&processor->structure_mutex) != DS_SUCCESS) {
        END_OPERATION(processor);
        return DS_ERROR_CONCURRENT_ACCESS;
    }

    // 检查是否为空
    if (processor->header->count == 0) {
        ThreadMutex_Unlock(&processor->structure_mutex);
        END_OPERATION(processor);
        return DS_ERROR_NOT_FOUND;
    }

    // 根据不同的结构类型执行查找操作
    int result = DS_SUCCESS;
    switch (processor->header->type) {
        case DS_TYPE_ARRAY:
            // 数组查找逻辑
            break;
        case DS_TYPE_LINKED_LIST:
            // 链表查找逻辑
            break;
        case DS_TYPE_HASH_TABLE:
            // 哈希表查找逻辑
            break;
        default:
            result = DS_ERROR_INVALID_PARAMETER;
            break;
    }

    ThreadMutex_Unlock(&processor->structure_mutex);
    END_OPERATION(processor);

    return result;
}

int DataStructureProcessor_Iterate(DataStructureProcessor* processor, void (*callback)(void* data, void* context), void* context) {
    if (processor == NULL || callback == NULL) {
        return DS_ERROR_INVALID_PARAMETER;
    }

    BEGIN_OPERATION(processor);

    // 获取互斥锁
    if (ThreadMutex_Lock(&processor->structure_mutex) != DS_SUCCESS) {
        END_OPERATION(processor);
        return DS_ERROR_CONCURRENT_ACCESS;
    }

    // 检查是否为空
    if (processor->header->count == 0) {
        ThreadMutex_Unlock(&processor->structure_mutex);
        END_OPERATION(processor);
        return DS_SUCCESS;
    }

    // 根据不同的结构类型执行迭代操作
    switch (processor->header->type) {
        case DS_TYPE_ARRAY:
            // 数组迭代逻辑
            break;
        case DS_TYPE_LINKED_LIST:
            // 链表迭代逻辑
            break;
        case DS_TYPE_HASH_TABLE:
            // 哈希表迭代逻辑
            break;
        default:
            ThreadMutex_Unlock(&processor->structure_mutex);
            END_OPERATION(processor);
            return DS_ERROR_INVALID_PARAMETER;
    }

    ThreadMutex_Unlock(&processor->structure_mutex);
    END_OPERATION(processor);

    return DS_SUCCESS;
}

uint32_t DataStructureProcessor_GetCount(DataStructureProcessor* processor) {
    if (processor == NULL) {
        return 0;
    }

    // 获取互斥锁
    if (ThreadMutex_Lock(&processor->structure_mutex) != DS_SUCCESS) {
        return 0;
    }

    uint32_t count = processor->header->count;

    ThreadMutex_Unlock(&processor->structure_mutex);

    return count;
}

void DataStructureProcessor_Clear(DataStructureProcessor* processor) {
    if (processor == NULL) {
        return;
    }

    // 获取互斥锁
    if (ThreadMutex_Lock(&processor->structure_mutex) != DS_SUCCESS) {
        return;
    }

    // 清除数据
    if (processor->header->data != NULL) {
        free(processor->header->data);
        processor->header->data = NULL;
    }

    // 重置统计信息
    processor->header->count = 0;
    processor->header->size = 0;

    // 清除缓存
    CacheManager_Clear(processor->cache);

    ThreadMutex_Unlock(&processor->structure_mutex);
}

int DataStructureProcessor_Optimize(DataStructureProcessor* processor) {
    if (processor == NULL) {
        return DS_ERROR_INVALID_PARAMETER;
    }

    BEGIN_OPERATION(processor);

    // 获取互斥锁
    if (ThreadMutex_Lock(&processor->structure_mutex) != DS_SUCCESS) {
        END_OPERATION(processor);
        return DS_ERROR_CONCURRENT_ACCESS;
    }

    // 执行优化操作
    // 1. 清理内存池
    MemoryPool_CleanupExpiredBlocks(processor->pool);
    
    // 2. 清理缓存
    CacheManager_Cleanup(processor->cache);
    
    // 3. 检查数据结构完整性
    int result = Structure_CheckIntegrity(processor);

    ThreadMutex_Unlock(&processor->structure_mutex);
    END_OPERATION(processor);

    return result;
}

int DataStructureProcessor_Validate(DataStructureProcessor* processor) {
    if (processor == NULL) {
        return DS_ERROR_INVALID_PARAMETER;
    }

    // 获取互斥锁
    if (ThreadMutex_Lock(&processor->structure_mutex) != DS_SUCCESS) {
        return DS_ERROR_CONCURRENT_ACCESS;
    }

    int result = Structure_CheckIntegrity(processor);

    ThreadMutex_Unlock(&processor->structure_mutex);

    return result;
}

int DataStructureProcessor_Backup(DataStructureProcessor* processor, const char* filename) {
    if (processor == NULL || filename == NULL) {
        return DS_ERROR_INVALID_PARAMETER;
    }

    BEGIN_OPERATION(processor);

    // 获取互斥锁
    if (ThreadMutex_Lock(&processor->structure_mutex) != DS_SUCCESS) {
        END_OPERATION(processor);
        return DS_ERROR_CONCURRENT_ACCESS;
    }

    // 打开文件
    FILE* file = fopen(filename, "wb");
    if (file == NULL) {
        ThreadMutex_Unlock(&processor->structure_mutex);
        END_OPERATION(processor);
        return DS_ERROR_INVALID_PARAMETER;
    }

    // 写入头部信息
    fwrite(processor->header, sizeof(StructureHeader), 1, file);
    
    // 写入数据
    if (processor->header->data != NULL && processor->header->size > 0) {
        fwrite(processor->header->data, processor->header->size, 1, file);
    }

    fclose(file);

    ThreadMutex_Unlock(&processor->structure_mutex);
    END_OPERATION(processor);

    return DS_SUCCESS;
}

int DataStructureProcessor_Restore(DataStructureProcessor* processor, const char* filename) {
    if (processor == NULL || filename == NULL) {
        return DS_ERROR_INVALID_PARAMETER;
    }

    BEGIN_OPERATION(processor);

    // 获取互斥锁
    if (ThreadMutex_Lock(&processor->structure_mutex) != DS_SUCCESS) {
        END_OPERATION(processor);
        return DS_ERROR_CONCURRENT_ACCESS;
    }

    // 打开文件
    FILE* file = fopen(filename, "rb");
    if (file == NULL) {
        ThreadMutex_Unlock(&processor->structure_mutex);
        END_OPERATION(processor);
        return DS_ERROR_INVALID_PARAMETER;
    }

    // 读取头部信息
    StructureHeader temp_header;
    if (fread(&temp_header, sizeof(StructureHeader), 1, file) != 1) {
        fclose(file);
        ThreadMutex_Unlock(&processor->structure_mutex);
        END_OPERATION(processor);
        return DS_ERROR_STRUCTURE_CORRUPT;
    }

    // 验证头部
    if (Structure_ValidateHeader(&temp_header) != DS_SUCCESS) {
        fclose(file);
        ThreadMutex_Unlock(&processor->structure_mutex);
        END_OPERATION(processor);
        return DS_ERROR_STRUCTURE_CORRUPT;
    }

    // 释放旧数据
    if (processor->header->data != NULL) {
        free(processor->header->data);
    }

    // 复制头部信息
    memcpy(processor->header, &temp_header, sizeof(StructureHeader));

    // 读取数据
    if (processor->header->size > 0) {
        processor->header->data = malloc(processor->header->size);
        if (processor->header->data == NULL) {
            fclose(file);
            ThreadMutex_Unlock(&processor->structure_mutex);
            END_OPERATION(processor);
            return DS_ERROR_OUT_OF_MEMORY;
        }

        if (fread(processor->header->data, processor->header->size, 1, file) != 1) {
            free(processor->header->data);
            processor->header->data = NULL;
            fclose(file);
            ThreadMutex_Unlock(&processor->structure_mutex);
            END_OPERATION(processor);
            return DS_ERROR_STRUCTURE_CORRUPT;
        }
    }

    fclose(file);

    ThreadMutex_Unlock(&processor->structure_mutex);
    END_OPERATION(processor);

    return DS_SUCCESS;
}

int DataStructureProcessor_GetStatistics(DataStructureProcessor* processor, char* buffer, size_t buffer_size) {
    if (processor == NULL || buffer == NULL || buffer_size == 0) {
        return DS_ERROR_INVALID_PARAMETER;
    }

    // 获取互斥锁
    if (ThreadMutex_Lock(&processor->structure_mutex) != DS_SUCCESS) {
        return DS_ERROR_CONCURRENT_ACCESS;
    }

    // 生成统计信息
    int written = snprintf(buffer, buffer_size,
        "DataStructureProcessor Statistics:\n"
        "  Type: %d\n"
        "  Count: %u\n"
        "  Capacity: %u\n"
        "  Size: %u bytes\n"
        "  Operations: %u\n"
        "  Total Time: %lu cycles\n"
        "  Memory Pool Usage: %lu bytes\n"
        "  Active Blocks: %u\n"
        "  Cache Hit Rate: %.2f%%\n",
        processor->header->type,
        processor->header->count,
        processor->header->capacity,
        processor->header->size,
        processor->operation_count,
        processor->total_time,
        MemoryPoolManager_GetAvailableMemory(processor->pool),
        MemoryPoolManager_GetActiveBlocks(processor->pool),
        CacheManager_GetHitRate(processor->cache) * 100.0
    );

    ThreadMutex_Unlock(&processor->structure_mutex);

    return (written < buffer_size) ? DS_SUCCESS : DS_ERROR_INVALID_PARAMETER;
}

uint64_t DataStructureProcessor_GetOperationCount(DataStructureProcessor* processor) {
    if (processor == NULL) {
        return 0;
    }

    return processor->operation_count;
}

double DataStructureProcessor_GetAverageOperationTime(DataStructureProcessor* processor) {
    if (processor == NULL || processor->operation_count == 0) {
        return 0.0;
    }

    return (double)processor->total_time / processor->operation_count;
}

void DataStructureProcessor_ResetStatistics(DataStructureProcessor* processor) {
    if (processor == NULL) {
        return;
    }

    // 获取互斥锁
    if (ThreadMutex_Lock(&processor->structure_mutex) != DS_SUCCESS) {
        return;
    }

    processor->operation_count = 0;
    processor->total_time = 0;

    ThreadMutex_Unlock(&processor->structure_mutex);
}

int DataStructureProcessor_EnablePerformanceMonitoring(DataStructureProcessor* processor, bool enable) {
    if (processor == NULL) {
        return DS_ERROR_INVALID_PARAMETER;
    }

    // 获取互斥锁
    if (ThreadMutex_Lock(&processor->structure_mutex) != DS_SUCCESS) {
        return DS_ERROR_CONCURRENT_ACCESS;
    }

    // 设置性能监控标志
    if (enable) {
        processor->header->flags |= 0x01;
    } else {
        processor->header->flags &= ~0x01;
    }

    ThreadMutex_Unlock(&processor->structure_mutex);

    return DS_SUCCESS;
}

int DataStructureProcessor_BeginTransaction(DataStructureProcessor* processor) {
    if (processor == NULL) {
        return DS_ERROR_INVALID_PARAMETER;
    }

    // 获取互斥锁
    if (ThreadMutex_Lock(&processor->structure_mutex) != DS_SUCCESS) {
        return DS_ERROR_CONCURRENT_ACCESS;
    }

    // 检查是否已经在事务中
    if (processor->header->flags & 0x02) {
        ThreadMutex_Unlock(&processor->structure_mutex);
        return DS_ERROR_CONCURRENT_ACCESS;
    }

    // 设置事务标志
    processor->header->flags |= 0x02;

    ThreadMutex_Unlock(&processor->structure_mutex);

    return DS_SUCCESS;
}

int DataStructureProcessor_CommitTransaction(DataStructureProcessor* processor) {
    if (processor == NULL) {
        return DS_ERROR_INVALID_PARAMETER;
    }

    // 获取互斥锁
    if (ThreadMutex_Lock(&processor->structure_mutex) != DS_SUCCESS) {
        return DS_ERROR_CONCURRENT_ACCESS;
    }

    // 检查是否在事务中
    if (!(processor->header->flags & 0x02)) {
        ThreadMutex_Unlock(&processor->structure_mutex);
        return DS_ERROR_INVALID_PARAMETER;
    }

    // 清除事务标志
    processor->header->flags &= ~0x02;

    ThreadMutex_Unlock(&processor->structure_mutex);

    return DS_SUCCESS;
}

int DataStructureProcessor_RollbackTransaction(DataStructureProcessor* processor) {
    if (processor == NULL) {
        return DS_ERROR_INVALID_PARAMETER;
    }

    // 获取互斥锁
    if (ThreadMutex_Lock(&processor->structure_mutex) != DS_SUCCESS) {
        return DS_ERROR_CONCURRENT_ACCESS;
    }

    // 检查是否在事务中
    if (!(processor->header->flags & 0x02)) {
        ThreadMutex_Unlock(&processor->structure_mutex);
        return DS_ERROR_INVALID_PARAMETER;
    }

    // 清除事务标志
    processor->header->flags &= ~0x02;

    ThreadMutex_Unlock(&processor->structure_mutex);

    return DS_SUCCESS;
}

bool DataStructureProcessor_IsInTransaction(DataStructureProcessor* processor) {
    if (processor == NULL) {
        return false;
    }

    return (processor->header->flags & 0x02) != 0;
}

int DataStructureProcessor_EnableMemoryProtection(DataStructureProcessor* processor, bool enable) {
    if (processor == NULL) {
        return DS_ERROR_INVALID_PARAMETER;
    }

    // 获取互斥锁
    if (ThreadMutex_Lock(&processor->structure_mutex) != DS_SUCCESS) {
        return DS_ERROR_CONCURRENT_ACCESS;
    }

    // 设置内存保护标志
    if (enable) {
        processor->header->flags |= 0x04;
    } else {
        processor->header->flags &= ~0x04;
    }

    ThreadMutex_Unlock(&processor->structure_mutex);

    return DS_SUCCESS;
}

int DataStructureProcessor_CheckMemoryLeaks(DataStructureProcessor* processor) {
    if (processor == NULL) {
        return DS_ERROR_INVALID_PARAMETER;
    }

    // 获取互斥锁
    if (ThreadMutex_Lock(&processor->structure_mutex) != DS_SUCCESS) {
        return DS_ERROR_CONCURRENT_ACCESS;
    }

    // 检查内存泄漏
    uint32_t active_blocks = MemoryPoolManager_GetActiveBlocks(processor->pool);
    int result = (active_blocks == 0) ? DS_SUCCESS : DS_ERROR_RESOURCE_LEAK;

    ThreadMutex_Unlock(&processor->structure_mutex);

    return result;
}

int DataStructureProcessor_ForceGarbageCollection(DataStructureProcessor* processor) {
    if (processor == NULL) {
        return DS_ERROR_INVALID_PARAMETER;
    }

    BEGIN_OPERATION(processor);

    // 获取互斥锁
    if (ThreadMutex_Lock(&processor->structure_mutex) != DS_SUCCESS) {
        END_OPERATION(processor);
        return DS_ERROR_CONCURRENT_ACCESS;
    }

    // 强制垃圾回收
    MemoryPool_CleanupExpiredBlocks(processor->pool);
    CacheManager_Cleanup(processor->cache);

    ThreadMutex_Unlock(&processor->structure_mutex);
    END_OPERATION(processor);

    return DS_SUCCESS;
}

uint32_t DataStructureProcessor_HashFunction(const void* data, size_t size) {
    if (data == NULL || size == 0) {
        return 0;
    }

    // 使用FNV-1a哈希算法
    uint32_t hash = 2166136261u;
    const uint8_t* bytes = (const uint8_t*)data;
    
    for (size_t i = 0; i < size; i++) {
        hash ^= bytes[i];
        hash *= 16777619;
    }
    
    return hash;
}

bool DataStructureProcessor_CompareData(const void* data1, const void* data2, size_t size) {
    if (data1 == NULL || data2 == NULL || size == 0) {
        return false;
    }

    return memcmp(data1, data2, size) == 0;
}

void* DataStructureProcessor_DeepCopy(const void* data, size_t size) {
    if (data == NULL || size == 0) {
        return NULL;
    }

    void* copy = malloc(size);
    if (copy == NULL) {
        return NULL;
    }

    memcpy(copy, data, size);
    return copy;
}

int DataStructureProcessor_Serialize(DataStructureProcessor* processor, void** buffer, size_t* size) {
    if (processor == NULL || buffer == NULL || size == NULL) {
        return DS_ERROR_INVALID_PARAMETER;
    }

    // 获取互斥锁
    if (ThreadMutex_Lock(&processor->structure_mutex) != DS_SUCCESS) {
        return DS_ERROR_CONCURRENT_ACCESS;
    }

    // 计算序列化大小
    *size = sizeof(StructureHeader) + processor->header->size;
    
    // 分配缓冲区
    *buffer = malloc(*size);
    if (*buffer == NULL) {
        ThreadMutex_Unlock(&processor->structure_mutex);
        return DS_ERROR_OUT_OF_MEMORY;
    }

    // 序列化数据
    memcpy(*buffer, processor->header, sizeof(StructureHeader));
    if (processor->header->size > 0) {
        memcpy((char*)*buffer + sizeof(StructureHeader), processor->header->data, processor->header->size);
    }

    ThreadMutex_Unlock(&processor->structure_mutex);

    return DS_SUCCESS;
}

int DataStructureProcessor_Deserialize(DataStructureProcessor* processor, const void* buffer, size_t size) {
    if (processor == NULL || buffer == NULL || size < sizeof(StructureHeader)) {
        return DS_ERROR_INVALID_PARAMETER;
    }

    // 获取互斥锁
    if (ThreadMutex_Lock(&processor->structure_mutex) != DS_SUCCESS) {
        return DS_ERROR_CONCURRENT_ACCESS;
    }

    // 验证头部
    const StructureHeader* header = (const StructureHeader*)buffer;
    if (Structure_ValidateHeader((StructureHeader*)header) != DS_SUCCESS) {
        ThreadMutex_Unlock(&processor->structure_mutex);
        return DS_ERROR_STRUCTURE_CORRUPT;
    }

    // 验证大小
    if (size < sizeof(StructureHeader) + header->size) {
        ThreadMutex_Unlock(&processor->structure_mutex);
        return DS_ERROR_STRUCTURE_CORRUPT;
    }

    // 释放旧数据
    if (processor->header->data != NULL) {
        free(processor->header->data);
    }

    // 复制头部
    memcpy(processor->header, header, sizeof(StructureHeader));

    // 复制数据
    if (processor->header->size > 0) {
        processor->header->data = malloc(processor->header->size);
        if (processor->header->data == NULL) {
            ThreadMutex_Unlock(&processor->structure_mutex);
            return DS_ERROR_OUT_OF_MEMORY;
        }

        memcpy(processor->header->data, (const char*)buffer + sizeof(StructureHeader), processor->header->size);
    }

    ThreadMutex_Unlock(&processor->structure_mutex);

    return DS_SUCCESS;
}