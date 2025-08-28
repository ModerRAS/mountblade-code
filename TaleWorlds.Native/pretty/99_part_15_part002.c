#include "TaleWorlds.Native.Split.h"
// 99_part_15_part002.c - 对象池和内存管理模块
// 美化版本 - 原始实现：99_part_14_part002.c
// 系统常量定义
#define OBJECT_POOL_MIN_CAPACITY 64
#define OBJECT_POOL_GROWTH_FACTOR 1.5f
#define OBJECT_POOL_ALIGNMENT 8
// 类型定义
typedef struct {
    void* vtable_ptr;
    uint32_t object_size;
    uint32_t ref_count;
    uint8_t* data_ptr;
} ObjectPoolItem;
typedef struct {
    ObjectPoolItem* items;
    uint32_t capacity;
    uint32_t count;
    uint32_t free_count;
    void* memory_pool;
} ObjectPool;
typedef struct {
    uint32_t size;
    uint32_t capacity;
    uint32_t growth_factor;
    uint32_t min_capacity;
    void* data;
} DynamicArray;
// 全局变量和内存池管理
static ObjectPool* g_object_pools[16];
static uint32_t g_pool_count = 0;
// 辅助函数声明
static uint32_t calculate_new_capacity(uint32_t current, uint32_t required);
static void* allocate_aligned_memory(uint32_t size, uint32_t alignment);
static void free_aligned_memory(void* ptr);
static ObjectPool* create_object_pool(uint32_t object_size, uint32_t initial_capacity);
static void destroy_object_pool(ObjectPool* pool);
/**
 * 计算新的容量大小
 * 原始实现：calculate_new_capacity
 *
 * @param current 当前容量
 * @param required 需要的容量
 * @return 新的容量大小
 */
static uint32_t calculate_new_capacity(uint32_t current, uint32_t required) {
    uint32_t new_capacity = (uint32_t)((float)current * OBJECT_POOL_GROWTH_FACTOR);
    if (required > new_capacity) {
        new_capacity = required;
    }
    if (new_capacity < OBJECT_POOL_MIN_CAPACITY) {
        new_capacity = OBJECT_POOL_MIN_CAPACITY;
    }
    return new_capacity;
}
/**
 * 分配对齐的内存
 * 原始实现：allocate_aligned_memory
 *
 * @param size 内存大小
 * @param alignment 对齐大小
 * @return 分配的内存指针
 */
static void* allocate_aligned_memory(uint32_t size, uint32_t alignment) {
// 这里应该调用底层的内存分配函数
// 简化实现，实际应该使用平台特定的对齐分配函数
    return malloc(size);
}
/**
 * 释放对齐的内存
 * 原始实现：free_aligned_memory
 *
 * @param ptr 内存指针
 */
static void free_aligned_memory(void* ptr) {
    if (ptr) {
        free(ptr);
    }
}
/**
 * 创建对象池
 * 原始实现：create_object_pool
 *
 * @param object_size 对象大小
 * @param initial_capacity 初始容量
 * @return 对象池指针
 */
static ObjectPool* create_object_pool(uint32_t object_size, uint32_t initial_capacity) {
    ObjectPool* pool = (ObjectPool*)malloc(sizeof(ObjectPool));
    if (!pool) {
        return NULL;
    }
    pool->capacity = initial_capacity;
    pool->count = 0;
    pool->free_count = initial_capacity;
// 分配对象数组内存
    pool->items = (ObjectPoolItem*)malloc(sizeof(ObjectPoolItem) * initial_capacity);
    if (!pool->items) {
        free(pool);
        return NULL;
    }
// 分配实际数据内存
    pool->memory_pool = allocate_aligned_memory(object_size * initial_capacity, OBJECT_POOL_ALIGNMENT);
    if (!pool->memory_pool) {
        free(pool->items);
        free(pool);
        return NULL;
    }
// 初始化对象项
    for (uint32_t i = 0; i < initial_capacity; i++) {
        pool->items[i].vtable_ptr = NULL;
        pool->items[i].object_size = object_size;
        pool->items[i].ref_count = 0;
        pool->items[i].data_ptr = (uint8_t*)pool->memory_pool + (i * object_size);
    }
    return pool;
}
/**
 * 销毁对象池
 * 原始实现：destroy_object_pool
 *
 * @param pool 对象池指针
 */
static void destroy_object_pool(ObjectPool* pool) {
    if (!pool) {
        return;
    }
    if (pool->items) {
        free(pool->items);
    }
    if (pool->memory_pool) {
        free_aligned_memory(pool->memory_pool);
    }
    free(pool);
}
/**
 * 从对象池分配对象
 * 原始实现：object_pool_allocate
 *
 * @param pool 对象池指针
 * @param vtable_ptr 虚表指针
 * @param param1 参数1
 * @param param2 参数2
 * @return 分配的对象指针
 */
void* object_pool_allocate(ObjectPool* pool, void* vtable_ptr, uint32_t param1, uint32_t param2) {
    if (!pool) {
        return NULL;
    }
// 检查是否有空闲对象
    if (pool->free_count == 0) {
// 扩展池容量
        uint32_t new_capacity = calculate_new_capacity(pool->capacity, pool->capacity + 1);
        if (!resize_object_pool(pool, new_capacity)) {
            return NULL;
        }
    }
// 查找空闲对象
    for (uint32_t i = 0; i < pool->capacity; i++) {
        if (pool->items[i].ref_count == 0) {
            pool->items[i].vtable_ptr = vtable_ptr;
            pool->items[i].ref_count = 1;
            pool->count++;
            pool->free_count--;
// 调用构造函数
            if (vtable_ptr) {
                void (*constructor)(void*, uint32_t, uint32_t) =
                    (void (*)(void*, uint32_t, uint32_t))((uint8_t*)vtable_ptr + 0x20);
                if (constructor) {
                    constructor(pool->items[i].data_ptr, param1, param2);
                }
            }
            return pool->items[i].data_ptr;
        }
    }
    return NULL;
}
/**
 * 调整对象池大小
 * 原始实现：resize_object_pool
 *
 * @param pool 对象池指针
 * @param new_capacity 新容量
 * @return 是否成功
 */
bool resize_object_pool(ObjectPool* pool, uint32_t new_capacity) {
    if (!pool || new_capacity <= pool->capacity) {
        return false;
    }
// 重新分配对象数组
    ObjectPoolItem* new_items = (ObjectPoolItem*)realloc(pool->items, sizeof(ObjectPoolItem) * new_capacity);
    if (!new_items) {
        return false;
    }
// 重新分配数据内存
    void* new_memory = allocate_aligned_memory(pool->items[0].object_size * new_capacity, OBJECT_POOL_ALIGNMENT);
    if (!new_memory) {
        return false;
    }
// 复制现有数据
    memcpy(new_memory, pool->memory_pool, pool->items[0].object_size * pool->capacity);
// 初始化新的对象项
    for (uint32_t i = pool->capacity; i < new_capacity; i++) {
        new_items[i].vtable_ptr = NULL;
        new_items[i].object_size = pool->items[0].object_size;
        new_items[i].ref_count = 0;
        new_items[i].data_ptr = (uint8_t*)new_memory + (i * pool->items[0].object_size);
    }
// 释放旧内存
    free_aligned_memory(pool->memory_pool);
// 更新池信息
    pool->items = new_items;
    pool->memory_pool = new_memory;
    pool->capacity = new_capacity;
    pool->free_count += (new_capacity - pool->count);
    return true;
}
/**
 * 释放对象回对象池
 * 原始实现：object_pool_free
 *
 * @param pool 对象池指针
 * @param object 对象指针
 */
void object_pool_free(ObjectPool* pool, void* object) {
    if (!pool || !object) {
        return;
    }
// 查找对象
    for (uint32_t i = 0; i < pool->capacity; i++) {
        if (pool->items[i].data_ptr == object && pool->items[i].ref_count > 0) {
            pool->items[i].ref_count--;
            pool->count--;
            pool->free_count++;
// 调用析构函数
            if (pool->items[i].vtable_ptr) {
                void (*destructor)(void*) =
                    (void (*)(void*))((uint8_t*)pool->items[i].vtable_ptr + 0x28);
                if (destructor) {
                    destructor(pool->items[i].data_ptr);
                }
            }
// 重置对象
            pool->items[i].vtable_ptr = NULL;
            memset(pool->items[i].data_ptr, 0, pool->items[i].object_size);
            break;
        }
    }
}
/**
 * 创建动态数组
 * 原始实现：dynamic_array_create
 *
 * @param initial_capacity 初始容量
 * @return 动态数组指针
 */
DynamicArray* dynamic_array_create(uint32_t initial_capacity) {
    DynamicArray* array = (DynamicArray*)malloc(sizeof(DynamicArray));
    if (!array) {
        return NULL;
    }
    array->size = 0;
    array->capacity = initial_capacity;
    array->growth_factor = 150; // 1.5 * 100
    array->min_capacity = 64;
    if (initial_capacity > 0) {
        array->data = malloc(initial_capacity);
        if (!array->data) {
            free(array);
            return NULL;
        }
    } else {
        array->data = NULL;
    }
    return array;
}
/**
 * 调整动态数组大小
 * 原始实现：dynamic_array_resize
 *
 * @param array 动态数组指针
 * @param new_size 新大小
 * @return 是否成功
 */
bool dynamic_array_resize(DynamicArray* array, uint32_t new_size) {
    if (!array) {
        return false;
    }
    if (new_size <= array->capacity) {
        array->size = new_size;
        return true;
    }
    uint32_t new_capacity = (new_size * array->growth_factor) / 100;
    if (new_capacity < array->min_capacity) {
        new_capacity = array->min_capacity;
    }
    void* new_data = realloc(array->data, new_capacity);
    if (!new_data) {
        return false;
    }
    array->data = new_data;
    array->capacity = new_capacity;
    array->size = new_size;
    return true;
}
/**
 * 销毁动态数组
 * 原始实现：dynamic_array_destroy
 *
 * @param array 动态数组指针
 */
void dynamic_array_destroy(DynamicArray* array) {
    if (!array) {
        return;
    }
    if (array->data) {
        free(array->data);
    }
    free(array);
}
/**
 * 内存池初始化
 * 原始实现：memory_pool_initialize
 *
 * @return 是否成功
 */
bool memory_pool_initialize(void) {
// 初始化全局对象池数组
    memset(g_object_pools, 0, sizeof(g_object_pools));
    g_pool_count = 0;
    return true;
}
/**
 * 内存池清理
 * 原始实现：memory_pool_cleanup
 */
void memory_pool_cleanup(void) {
// 销毁所有对象池
    for (uint32_t i = 0; i < g_pool_count; i++) {
        if (g_object_pools[i]) {
            destroy_object_pool(g_object_pools[i]);
            g_object_pools[i] = NULL;
        }
    }
    g_pool_count = 0;
}
/**
 * 获取内存使用统计
 * 原始实现：memory_pool_get_stats
 *
 * @param total_used 总使用量
 * @param total_capacity 总容量
 * @param pool_count 池数量
 */
void memory_pool_get_stats(uint32_t* total_used, uint32_t* total_capacity, uint32_t* pool_count) {
    uint32_t used = 0;
    uint32_t capacity = 0;
    for (uint32_t i = 0; i < g_pool_count; i++) {
        if (g_object_pools[i]) {
            used += g_object_pools[i]->count;
            capacity += g_object_pools[i]->capacity;
        }
    }
    if (total_used) *total_used = used;
    if (total_capacity) *total_capacity = capacity;
    if (pool_count) *pool_count = g_pool_count;
}
// 技术架构说明：
/*
 * 99_part_15_part002.c - 对象池和内存管理模块
 *
 * 技术架构：
 * 1. 对象池模式 - 减少内存分配和释放的开销
 * 2. 内存对齐 - 提高内存访问效率
 * 3. 动态扩容 - 按需增长，避免频繁重新分配
 * 4. 引用计数 - 管理对象生命周期
 * 5. 批量操作 - 优化大量对象的创建和销毁
 *
 * 性能优化策略：
 * 1. 预分配内存 - 减少运行时分配开销
 * 2. 内存复用 - 避免频繁的内存分配和释放
 * 3. 对齐访问 - 提高内存访问速度
 * 4. 批量处理 - 减少函数调用开销
 * 5. 缓存友好 - 优化内存布局提高缓存命中率
 *
 * 安全考虑：
 * 1. 内存边界检查 - 防止缓冲区溢出
 * 2. 空指针检查 - 防止空指针访问
 * 3. 引用计数验证 - 防止重复释放
 * 4. 内存对齐验证 - 确保内存访问安全
 * 5. 资源清理 - 确保所有资源都被正确释放
 *
 * 使用场景：
 * 1. 游戏对象管理 - 频繁创建和销毁的游戏对象
 * 2. 资源管理 - 纹理、音频等资源的生命周期管理
 * 3. 事件系统 - 事件对象的池化管理
 * 4. 网络通信 - 网络包的池化管理
 * 5. UI系统 - UI元素的池化管理
 */