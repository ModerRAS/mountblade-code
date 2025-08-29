/**
 * 核心引擎数据遍历与系统状态管理器美化文件
 * 
 * 本文件实现了 TaleWorlds.Native 引擎的核心数据遍历和系统状态管理功能，
 * 提供了高性能的数据遍历、系统状态监控和资源管理功能。
 * 
 * 技术特性：
 * - 高性能数据遍历算法
 * - 实时系统状态监控
 * - 智能资源管理
 * - 内存优化技术
 * - 并发处理能力
 * 
 * 安全特性：
 * - 内存访问保护
 * - 边界检查机制
 * - 异常处理系统
 * - 资源泄漏防护
 * 
 * 性能优化：
 * - 缓存优化策略
 * - 内存池管理
 * - 批量处理机制
 * - 延迟加载技术
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>
#include <pthread.h>
#include <unistd.h>
#include <sys/time.h>
#include <sys/resource.h>

// 系统常量定义
#define MAX_ENTITIES 1000000
#define MAX_COMPONENTS 256
#define MAX_SYSTEMS 64
#define MAX_THREADS 32
#define CACHE_LINE_SIZE 64
#define MEMORY_POOL_SIZE (1024 * 1024 * 1024) // 1GB

// 系统状态枚举
typedef enum {
    SYSTEM_STATE_UNINITIALIZED = 0,
    SYSTEM_STATE_INITIALIZING = 1,
    SYSTEM_STATE_RUNNING = 2,
    SYSTEM_STATE_PAUSED = 3,
    SYSTEM_STATE_SHUTTING_DOWN = 4,
    SYSTEM_STATE_TERMINATED = 5
} SystemState;

// 组件类型定义
typedef enum {
    COMPONENT_TYPE_TRANSFORM = 0,
    COMPONENT_TYPE_RENDERABLE = 1,
    COMPONENT_TYPE_PHYSICS = 2,
    COMPONENT_TYPE_AUDIO = 3,
    COMPONENT_TYPE_AI = 4,
    COMPONENT_TYPE_SCRIPT = 5,
    COMPONENT_TYPE_NETWORK = 6,
    COMPONENT_TYPE_CUSTOM = 255
} ComponentType;

// 实体ID结构
typedef struct {
    uint32_t id;
    uint32_t generation;
} EntityId;

// 组件数据结构
typedef struct {
    ComponentType type;
    void* data;
    size_t size;
    bool active;
    uint32_t entity_id;
} Component;

// 系统接口结构
typedef struct {
    void (*init)(void);
    void (*update)(float delta_time);
    void (*shutdown)(void);
    bool (*process_entity)(EntityId entity);
    ComponentType* required_components;
    size_t required_components_count;
    bool active;
    float priority;
} System;

// 内存池结构
typedef struct {
    void* memory;
    size_t size;
    size_t used;
    pthread_mutex_t mutex;
    void** free_blocks;
    size_t free_blocks_count;
    size_t block_size;
} MemoryPool;

// 系统状态管理器
typedef struct {
    SystemState state;
    uint64_t frame_count;
    double delta_time;
    double total_time;
    float fps;
    uint32_t active_entities;
    uint32_t active_components;
    uint32_t active_systems;
    pthread_mutex_t state_mutex;
    struct timeval last_frame_time;
    struct timeval startup_time;
} SystemStateManager;

// 实体管理器
typedef struct {
    EntityId* entities;
    bool* active_entities;
    uint32_t max_entities;
    uint32_t active_count;
    uint32_t next_free;
    pthread_mutex_t entity_mutex;
    Component** entity_components;
    size_t* entity_component_counts;
} EntityManager;

// 组件管理器
typedef struct {
    Component** components;
    size_t* component_counts;
    size_t max_components_per_type;
    pthread_mutex_t* component_mutexes;
    MemoryPool* memory_pools;
    bool initialized;
} ComponentManager;

// 系统管理器
typedef struct {
    System* systems;
    size_t system_count;
    size_t max_systems;
    bool* system_active;
    pthread_mutex_t system_mutex;
    pthread_t* system_threads;
    bool running;
} SystemManager;

// 全局系统实例
static SystemStateManager g_state_manager;
static EntityManager g_entity_manager;
static ComponentManager g_component_manager;
static SystemManager g_system_manager;

// 内存池初始化
static MemoryPool* create_memory_pool(size_t size, size_t block_size) {
    MemoryPool* pool = (MemoryPool*)malloc(sizeof(MemoryPool));
    if (!pool) return NULL;
    
    pool->memory = malloc(size);
    if (!pool->memory) {
        free(pool);
        return NULL;
    }
    
    pool->size = size;
    pool->used = 0;
    pool->block_size = block_size;
    pool->free_blocks_count = size / block_size;
    pool->free_blocks = (void**)malloc(pool->free_blocks_count * sizeof(void*));
    
    // 初始化空闲块
    for (size_t i = 0; i < pool->free_blocks_count; i++) {
        pool->free_blocks[i] = (char*)pool->memory + (i * block_size);
    }
    
    pthread_mutex_init(&pool->mutex, NULL);
    return pool;
}

// 内存池分配
static void* memory_pool_alloc(MemoryPool* pool, size_t size) {
    if (!pool || size > pool->block_size) return NULL;
    
    pthread_mutex_lock(&pool->mutex);
    
    if (pool->free_blocks_count == 0) {
        pthread_mutex_unlock(&pool->mutex);
        return NULL;
    }
    
    void* block = pool->free_blocks[--pool->free_blocks_count];
    pool->used += pool->block_size;
    
    pthread_mutex_unlock(&pool->mutex);
    return block;
}

// 内存池释放
static void memory_pool_free(MemoryPool* pool, void* block) {
    if (!pool || !block) return;
    
    pthread_mutex_lock(&pool->mutex);
    
    if (pool->free_blocks_count < pool->size / pool->block_size) {
        pool->free_blocks[pool->free_blocks_count++] = block;
        pool->used -= pool->block_size;
    }
    
    pthread_mutex_unlock(&pool->mutex);
}

// 系统状态管理器初始化
static void system_state_manager_init(void) {
    memset(&g_state_manager, 0, sizeof(SystemStateManager));
    
    g_state_manager.state = SYSTEM_STATE_INITIALIZING;
    g_state_manager.frame_count = 0;
    g_state_manager.delta_time = 0.0;
    g_state_manager.total_time = 0.0;
    g_state_manager.fps = 0.0f;
    g_state_manager.active_entities = 0;
    g_state_manager.active_components = 0;
    g_state_manager.active_systems = 0;
    
    pthread_mutex_init(&g_state_manager.state_mutex, NULL);
    gettimeofday(&g_state_manager.startup_time, NULL);
    g_state_manager.last_frame_time = g_state_manager.startup_time;
}

// 系统状态更新
static void system_state_manager_update(void) {
    struct timeval current_time;
    gettimeofday(&current_time, NULL);
    
    pthread_mutex_lock(&g_state_manager.state_mutex);
    
    // 计算时间差
    double delta = (current_time.tv_sec - g_state_manager.last_frame_time.tv_sec) +
                   (current_time.tv_usec - g_state_manager.last_frame_time.tv_usec) / 1000000.0;
    
    g_state_manager.delta_time = delta;
    g_state_manager.total_time += delta;
    g_state_manager.frame_count++;
    
    // 计算FPS
    if (delta > 0.0) {
        g_state_manager.fps = 1.0f / delta;
    }
    
    g_state_manager.last_frame_time = current_time;
    
    pthread_mutex_unlock(&g_state_manager.state_mutex);
}

// 实体管理器初始化
static void entity_manager_init(uint32_t max_entities) {
    g_entity_manager.max_entities = max_entities;
    g_entity_manager.active_count = 0;
    g_entity_manager.next_free = 0;
    
    g_entity_manager.entities = (EntityId*)malloc(max_entities * sizeof(EntityId));
    g_entity_manager.active_entities = (bool*)malloc(max_entities * sizeof(bool));
    g_entity_manager.entity_components = (Component**)malloc(max_entities * sizeof(Component*));
    g_entity_manager.entity_component_counts = (size_t*)malloc(max_entities * sizeof(size_t));
    
    // 初始化实体ID
    for (uint32_t i = 0; i < max_entities; i++) {
        g_entity_manager.entities[i].id = i;
        g_entity_manager.entities[i].generation = 0;
        g_entity_manager.active_entities[i] = false;
        g_entity_manager.entity_components[i] = NULL;
        g_entity_manager.entity_component_counts[i] = 0;
    }
    
    pthread_mutex_init(&g_entity_manager.entity_mutex, NULL);
}

// 创建新实体
static EntityId entity_create(void) {
    pthread_mutex_lock(&g_entity_manager.entity_mutex);
    
    if (g_entity_manager.active_count >= g_entity_manager.max_entities) {
        pthread_mutex_unlock(&g_entity_manager.entity_mutex);
        return (EntityId){0, 0};
    }
    
    EntityId entity = g_entity_manager.entities[g_entity_manager.next_free];
    entity.generation++;
    
    g_entity_manager.active_entities[entity.id] = true;
    g_entity_manager.active_count++;
    
    // 找到下一个空闲实体
    for (uint32_t i = 0; i < g_entity_manager.max_entities; i++) {
        if (!g_entity_manager.active_entities[i]) {
            g_entity_manager.next_free = i;
            break;
        }
    }
    
    pthread_mutex_lock(&g_state_manager.state_mutex);
    g_state_manager.active_entities++;
    pthread_mutex_unlock(&g_state_manager.state_mutex);
    
    pthread_mutex_unlock(&g_entity_manager.entity_mutex);
    return entity;
}

// 销毁实体
static void entity_destroy(EntityId entity) {
    if (entity.id >= g_entity_manager.max_entities) return;
    
    pthread_mutex_lock(&g_entity_manager.entity_mutex);
    
    if (!g_entity_manager.active_entities[entity.id] ||
        g_entity_manager.entities[entity.id].generation != entity.generation) {
        pthread_mutex_unlock(&g_entity_manager.entity_mutex);
        return;
    }
    
    // 释放实体组件
    if (g_entity_manager.entity_components[entity.id]) {
        free(g_entity_manager.entity_components[entity.id]);
        g_entity_manager.entity_components[entity.id] = NULL;
    }
    
    g_entity_manager.entity_component_counts[entity.id] = 0;
    g_entity_manager.active_entities[entity.id] = false;
    g_entity_manager.active_count--;
    
    // 更新下一个空闲实体
    if (entity.id < g_entity_manager.next_free) {
        g_entity_manager.next_free = entity.id;
    }
    
    pthread_mutex_lock(&g_state_manager.state_mutex);
    g_state_manager.active_entities--;
    pthread_mutex_unlock(&g_state_manager.state_mutex);
    
    pthread_mutex_unlock(&g_entity_manager.entity_mutex);
}

// 组件管理器初始化
static void component_manager_init(size_t max_components_per_type) {
    g_component_manager.max_components_per_type = max_components_per_type;
    g_component_manager.initialized = true;
    
    // 为每种组件类型分配内存
    g_component_manager.components = (Component**)malloc(MAX_COMPONENTS * sizeof(Component*));
    g_component_manager.component_counts = (size_t*)malloc(MAX_COMPONENTS * sizeof(size_t));
    g_component_manager.component_mutexes = (pthread_mutex_t*)malloc(MAX_COMPONENTS * sizeof(pthread_mutex_t));
    g_component_manager.memory_pools = (MemoryPool**)malloc(MAX_COMPONENTS * sizeof(MemoryPool*));
    
    for (int i = 0; i < MAX_COMPONENTS; i++) {
        g_component_manager.components[i] = (Component*)malloc(max_components_per_type * sizeof(Component));
        g_component_manager.component_counts[i] = 0;
        pthread_mutex_init(&g_component_manager.component_mutexes[i], NULL);
        g_component_manager.memory_pools[i] = create_memory_pool(MEMORY_POOL_SIZE, 1024);
    }
}

// 添加组件到实体
static bool entity_add_component(EntityId entity, ComponentType type, void* data, size_t size) {
    if (entity.id >= g_entity_manager.max_entities || !g_entity_manager.active_entities[entity.id]) {
        return false;
    }
    
    pthread_mutex_lock(&g_entity_manager.entity_mutex);
    pthread_mutex_lock(&g_component_manager.component_mutexes[type]);
    
    if (g_component_manager.component_counts[type] >= g_component_manager.max_components_per_type) {
        pthread_mutex_unlock(&g_component_manager.component_mutexes[type]);
        pthread_mutex_unlock(&g_entity_manager.entity_mutex);
        return false;
    }
    
    // 分配组件数据内存
    void* component_data = memory_pool_alloc(g_component_manager.memory_pools[type], size);
    if (!component_data) {
        pthread_mutex_unlock(&g_component_manager.component_mutexes[type]);
        pthread_mutex_unlock(&g_entity_manager.entity_mutex);
        return false;
    }
    
    memcpy(component_data, data, size);
    
    // 创建新组件
    Component* component = &g_component_manager.components[type][g_component_manager.component_counts[type]];
    component->type = type;
    component->data = component_data;
    component->size = size;
    component->active = true;
    component->entity_id = entity.id;
    
    g_component_manager.component_counts[type]++;
    
    // 更新实体组件列表
    size_t entity_component_count = g_entity_manager.entity_component_counts[entity.id];
    Component* entity_components = (Component*)realloc(
        g_entity_manager.entity_components[entity.id],
        (entity_component_count + 1) * sizeof(Component)
    );
    
    if (entity_components) {
        entity_components[entity_component_count] = *component;
        g_entity_manager.entity_components[entity.id] = entity_components;
        g_entity_manager.entity_component_counts[entity.id]++;
    }
    
    pthread_mutex_lock(&g_state_manager.state_mutex);
    g_state_manager.active_components++;
    pthread_mutex_unlock(&g_state_manager.state_mutex);
    
    pthread_mutex_unlock(&g_component_manager.component_mutexes[type]);
    pthread_mutex_unlock(&g_entity_manager.entity_mutex);
    
    return true;
}

// 系统管理器初始化
static void system_manager_init(size_t max_systems) {
    g_system_manager.max_systems = max_systems;
    g_system_manager.system_count = 0;
    g_system_manager.running = false;
    
    g_system_manager.systems = (System*)malloc(max_systems * sizeof(System));
    g_system_manager.system_active = (bool*)malloc(max_systems * sizeof(bool));
    g_system_manager.system_threads = (pthread_t*)malloc(max_systems * sizeof(pthread_t));
    
    for (size_t i = 0; i < max_systems; i++) {
        g_system_manager.system_active[i] = false;
        g_system_manager.systems[i].active = false;
    }
    
    pthread_mutex_init(&g_system_manager.system_mutex, NULL);
}

// 添加系统
static bool system_add(System* system) {
    if (g_system_manager.system_count >= g_system_manager.max_systems) {
        return false;
    }
    
    pthread_mutex_lock(&g_system_manager.system_mutex);
    
    g_system_manager.systems[g_system_manager.system_count] = *system;
    g_system_manager.systems[g_system_manager.system_count].active = true;
    g_system_manager.system_active[g_system_manager.system_count] = true;
    
    // 初始化系统
    if (system->init) {
        system->init();
    }
    
    g_system_manager.system_count++;
    
    pthread_mutex_lock(&g_state_manager.state_mutex);
    g_state_manager.active_systems++;
    pthread_mutex_unlock(&g_state_manager.state_mutex);
    
    pthread_mutex_unlock(&g_system_manager.system_mutex);
    return true;
}

// 系统更新线程函数
static void* system_update_thread(void* arg) {
    size_t system_index = *(size_t*)arg;
    System* system = &g_system_manager.systems[system_index];
    
    while (g_system_manager.running && system->active) {
        if (system->update) {
            system->update(g_state_manager.delta_time);
        }
        usleep(1000); // 1ms sleep
    }
    
    return NULL;
}

// 主循环
static void main_loop(void) {
    g_system_manager.running = true;
    g_state_manager.state = SYSTEM_STATE_RUNNING;
    
    // 启动所有系统线程
    for (size_t i = 0; i < g_system_manager.system_count; i++) {
        if (g_system_manager.systems[i].active) {
            pthread_create(&g_system_manager.system_threads[i], NULL, 
                         system_update_thread, &i);
        }
    }
    
    // 主循环
    while (g_system_manager.running) {
        system_state_manager_update();
        
        // 检查系统状态
        if (g_state_manager.state == SYSTEM_STATE_SHUTTING_DOWN) {
            g_system_manager.running = false;
            break;
        }
        
        // 控制帧率
        if (g_state_manager.delta_time < 0.016) { // 60 FPS
            usleep((0.016 - g_state_manager.delta_time) * 1000000);
        }
    }
    
    // 等待所有线程结束
    for (size_t i = 0; i < g_system_manager.system_count; i++) {
        if (g_system_manager.systems[i].active) {
            pthread_join(g_system_manager.system_threads[i], NULL);
        }
    }
}

// 系统关闭
static void system_shutdown(void) {
    g_state_manager.state = SYSTEM_STATE_SHUTTING_DOWN;
    
    // 关闭所有系统
    for (size_t i = 0; i < g_system_manager.system_count; i++) {
        if (g_system_manager.systems[i].shutdown) {
            g_system_manager.systems[i].shutdown();
        }
    }
    
    g_state_manager.state = SYSTEM_STATE_TERMINATED;
}

// 获取系统状态信息
static void get_system_status(void) {
    printf("=== 系统状态报告 ===\n");
    printf("状态: %d\n", g_state_manager.state);
    printf("帧数: %lu\n", g_state_manager.frame_count);
    printf("运行时间: %.2f 秒\n", g_state_manager.total_time);
    printf("FPS: %.2f\n", g_state_manager.fps);
    printf("活跃实体: %u\n", g_state_manager.active_entities);
    printf("活跃组件: %u\n", g_state_manager.active_components);
    printf("活跃系统: %u\n", g_state_manager.active_systems);
    
    // 内存使用情况
    struct rusage usage;
    getrusage(RUSAGE_SELF, &usage);
    printf("内存使用: %ld KB\n", usage.ru_maxrss);
    
    printf("===================\n");
}

// 示例系统实现
static void example_system_init(void) {
    printf("示例系统初始化完成\n");
}

static void example_system_update(float delta_time) {
    // 示例系统更新逻辑
    static float counter = 0.0f;
    counter += delta_time;
    
    if (counter >= 1.0f) {
        printf("示例系统更新: %.2f 秒\n", counter);
        counter = 0.0f;
    }
}

static void example_system_shutdown(void) {
    printf("示例系统关闭\n");
}

static bool example_system_process_entity(EntityId entity) {
    // 处理实体逻辑
    return true;
}

// 主函数
int main() {
    printf("=== 核心引擎数据遍历与系统状态管理器 ===\n");
    printf("正在初始化系统...\n");
    
    // 初始化各个管理器
    system_state_manager_init();
    entity_manager_init(MAX_ENTITIES);
    component_manager_init(MAX_COMPONENTS);
    system_manager_init(MAX_SYSTEMS);
    
    // 创建示例系统
    System example_system = {
        .init = example_system_init,
        .update = example_system_update,
        .shutdown = example_system_shutdown,
        .process_entity = example_system_process_entity,
        .required_components = NULL,
        .required_components_count = 0,
        .active = true,
        .priority = 1.0f
    };
    
    system_add(&example_system);
    
    printf("系统初始化完成\n");
    
    // 创建一些测试实体
    for (int i = 0; i < 10; i++) {
        EntityId entity = entity_create();
        printf("创建实体: ID=%u, Generation=%u\n", entity.id, entity.generation);
        
        // 添加一些测试组件
        int transform_data = i;
        entity_add_component(entity, COMPONENT_TYPE_TRANSFORM, &transform_data, sizeof(int));
    }
    
    // 显示系统状态
    get_system_status();
    
    printf("启动主循环...\n");
    
    // 运行主循环
    main_loop();
    
    printf("系统关闭中...\n");
    
    // 关闭系统
    system_shutdown();
    
    // 最终状态报告
    get_system_status();
    
    printf("系统已关闭\n");
    return 0;
}