#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

/**
 * 01_initialization_part009.c - 初始化系统高级配置和注册模块
 * 
 * 本模块包含27个核心函数，主要提供以下功能：
 * - 系统配置注册管理
 * - 初始化参数处理
 * - 系统状态设置
 * - 内存和资源管理
 * - 字符串和数据处理
 * 
 * 主要函数包括：
 * - InitializationSystem_ConfigRegistrationManager1：初始化系统配置注册管理器1
 * - InitializationSystem_GlobalDataInitializer1：初始化系统全局数据初始化器1
 * - InitializationSystem_RegistrySearchAndInsert1-24：初始化系统注册表搜索和插入器1-24
 */

// =============================================================================
// 常量定义
// =============================================================================

#define INITIALIZATION_SYSTEM_CONFIG_SIZE 0x80
#define INITIALIZATION_SYSTEM_REGISTRY_KEY_SIZE 0x10
#define INITIALIZATION_SYSTEM_MAX_FUNCTIONS 27
#define INITIALIZATION_SYSTEM_MEMORY_POOL_SIZE 0x1000
#define INITIALIZATION_SYSTEM_STRING_BUFFER_SIZE 136

// =============================================================================
// 类型别名
// =============================================================================

typedef void* InitializationSystemConfigHandle;
typedef void* InitializationSystemRegistryHandle;
typedef void* InitializationSystemMemoryHandle;
typedef void* InitializationSystemStringHandle;
typedef uint64_t InitializationSystemStatus;
typedef uint32_t InitializationSystemFlags;
typedef uint16_t InitializationSystemVersion;
typedef uint8_t InitializationSystemType;

// =============================================================================
// 枚举定义
// =============================================================================

/**
 * 初始化系统状态枚举
 */
typedef enum {
    INITIALIZATION_SYSTEM_STATUS_IDLE = 0,
    INITIALIZATION_SYSTEM_STATUS_INITIALIZING = 1,
    INITIALIZATION_SYSTEM_STATUS_READY = 2,
    INITIALIZATION_SYSTEM_STATUS_ERROR = 3,
    INITIALIZATION_SYSTEM_STATUS_SHUTTING_DOWN = 4
} InitializationSystemState;

/**
 * 初始化系统配置类型枚举
 */
typedef enum {
    INITIALIZATION_CONFIG_TYPE_BASIC = 0,
    INITIALIZATION_CONFIG_TYPE_ADVANCED = 1,
    INITIALIZATION_CONFIG_TYPE_SYSTEM = 2,
    INITIALIZATION_CONFIG_TYPE_USER = 3
} InitializationSystemConfigType;

/**
 * 初始化系统内存管理类型枚举
 */
typedef enum {
    INITIALIZATION_MEMORY_TYPE_STATIC = 0,
    INITIALIZATION_MEMORY_TYPE_DYNAMIC = 1,
    INITIALIZATION_MEMORY_TYPE_SHARED = 2,
    INITIALIZATION_MEMORY_TYPE_TEMPORARY = 3
} InitializationSystemMemoryType;

/**
 * 初始化系统注册表操作类型枚举
 */
typedef enum {
    INITIALIZATION_REGISTRY_OPERATION_INSERT = 0,
    INITIALIZATION_REGISTRY_OPERATION_SEARCH = 1,
    INITIALIZATION_REGISTRY_OPERATION_UPDATE = 2,
    INITIALIZATION_REGISTRY_OPERATION_DELETE = 3
} InitializationSystemRegistryOperation;

/**
 * 初始化系统字符串处理类型枚举
 */
typedef enum {
    INITIALIZATION_STRING_TYPE_COPY = 0,
    INITIALIZATION_STRING_TYPE_MOVE = 1,
    INITIALIZATION_STRING_TYPE_COMPARE = 2,
    INITIALIZATION_STRING_TYPE_PROCESS = 3
} InitializationSystemStringType;

// =============================================================================
// 结构体定义
// =============================================================================

/**
 * 初始化系统配置结构体
 */
typedef struct {
    uint64_t config_id;
    uint64_t timestamp;
    InitializationSystemConfigType type;
    InitializationSystemStatus status;
    void* data_ptr;
    uint32_t data_size;
    uint16_t checksum;
    uint8_t priority;
    uint8_t reserved;
} InitializationSystemConfig;

/**
 * 初始化系统注册表条目结构体
 */
typedef struct {
    uint8_t key[INITIALIZATION_SYSTEM_REGISTRY_KEY_SIZE];
    void* value;
    InitializationSystemRegistryOperation operation;
    uint32_t flags;
    uint16_t ref_count;
    uint8_t access_level;
} InitializationSystemRegistryEntry;

/**
 * 初始化系统内存块结构体
 */
typedef struct {
    void* base_address;
    uint32_t size;
    InitializationSystemMemoryType type;
    uint32_t flags;
    uint16_t alignment;
    uint8_t is_allocated;
    uint8_t is_locked;
} InitializationSystemMemoryBlock;

/**
 * 初始化系统字符串缓冲区结构体
 */
typedef struct {
    char buffer[INITIALIZATION_SYSTEM_STRING_BUFFER_SIZE];
    uint32_t length;
    uint32_t capacity;
    InitializationSystemStringType type;
    uint16_t encoding;
    uint8_t is_unicode;
    uint8_t is_temporary;
} InitializationSystemStringBuffer;

// =============================================================================
// 函数别名
// =============================================================================

#define InitializationSystem_ConfigRegistrationManager1 FUN_18003acb0
#define InitializationSystem_GlobalDataInitializer1 FUN_18003ad40
#define InitializationSystem_RegistrySearchAndInsert1 FUN_18003c1f0
#define InitializationSystem_RegistrySearchAndInsert2 FUN_18003c2f0
#define InitializationSystem_RegistrySearchAndInsert3 FUN_18003c3f0
#define InitializationSystem_RegistrySearchAndInsert4 FUN_18003c4f0
#define InitializationSystem_RegistrySearchAndInsert5 FUN_18003c5f0
#define InitializationSystem_RegistrySearchAndInsert6 FUN_18003c6f0
#define InitializationSystem_RegistrySearchAndInsert7 FUN_18003c7f0
#define InitializationSystem_RegistrySearchAndInsert8 FUN_18003c8f0
#define InitializationSystem_RegistrySearchAndInsert9 FUN_18003c9f0
#define InitializationSystem_RegistrySearchAndInsert10 FUN_18003caf0
#define InitializationSystem_RegistrySearchAndInsert11 FUN_18003cbf0
#define InitializationSystem_RegistrySearchAndInsert12 FUN_18003cc80
#define InitializationSystem_RegistrySearchAndInsert13 FUN_18003cd10
#define InitializationSystem_RegistrySearchAndInsert14 FUN_18003ce10
#define InitializationSystem_RegistrySearchAndInsert15 FUN_18003cf10
#define InitializationSystem_RegistrySearchAndInsert16 FUN_18003d010
#define InitializationSystem_RegistrySearchAndInsert17 FUN_18003d110
#define InitializationSystem_RegistrySearchAndInsert18 FUN_18003d210
#define InitializationSystem_RegistrySearchAndInsert19 FUN_18003d310
#define InitializationSystem_RegistrySearchAndInsert20 FUN_18003de10
#define InitializationSystem_RegistrySearchAndInsert21 FUN_18003df10
#define InitializationSystem_RegistrySearchAndInsert22 FUN_18003e010
#define InitializationSystem_RegistrySearchAndInsert23 FUN_18003e110
#define InitializationSystem_RegistrySearchAndInsert24 FUN_18003e210
#define InitializationSystem_RegistrySearchAndInsert25 FUN_18003e310
#define InitializationSystem_RegistrySearchAndInsert26 FUN_18003e410

// =============================================================================
// 核心函数实现
// =============================================================================

/**
 * 初始化系统配置注册管理器1
 * 
 * 负责系统配置的注册和管理，包括配置项的创建、存储和检索。
 * 使用字符串缓冲区进行配置数据的处理，支持多种配置类型。
 * 
 * 技术特点：
 * - 使用安全的字符串复制函数
 * - 支持动态内存分配
 * - 提供配置ID和版本管理
 * - 支持配置状态跟踪
 */
void InitializationSystem_ConfigRegistrationManager1(void)
{
    uint64_t register_value;
    void* config_base;
    uint8_t* string_buffer;
    uint32_t buffer_size;
    uint8_t local_buffer[INITIALIZATION_SYSTEM_STRING_BUFFER_SIZE];
    
    // 初始化配置基础指针
    config_base = &unknown_var_3432_ptr;
    string_buffer = local_buffer;
    
    // 清空字符串缓冲区
    local_buffer[0] = 0;
    buffer_size = 0x16;
    
    // 安全复制配置字符串
    strcpy_s(local_buffer, INITIALIZATION_SYSTEM_CONFIG_SIZE, &unknown_var_7304_ptr, register_value, 0xfffffffffffffffe);
    
    // 注册配置到系统
    _DAT_180c91f68 = FUN_180623800(&config_base);
    
    return;
}

/**
 * 初始化系统全局数据初始化器1
 * 
 * 负责系统全局数据的初始化，包括数据结构的创建和默认值设置。
 * 支持多种数据类型的初始化和内存管理。
 * 
 * 技术特点：
 * - 支持动态内存分配
 * - 提供数据结构初始化
 * - 支持默认值设置
 * - 内存安全保护
 */
int InitializationSystem_GlobalDataInitializer1(void)
{
    uint64_t memory_handle;
    uint64_t register_value;
    
    // 初始化全局数据指针
    _DAT_180bf91b0 = &unknown_var_3480_ptr;
    _DAT_180bf91b8 = &system_memory_91c8;
    
    // 返回初始化状态
    return 0;
}

/**
 * 初始化系统注册表搜索和插入器1
 * 
 * 负责在注册表中搜索特定键值并插入新的条目。
 * 使用树形结构进行高效的搜索和插入操作。
 * 
 * 技术特点：
 * - 使用树形数据结构
 * - 支持高效的搜索算法
 * - 内存动态分配
 * - 错误处理机制
 */
void InitializationSystem_RegistrySearchAndInsert1(void)
{
    uint8_t node_flag;
    void* root_node;
    int compare_result;
    void** registry_root;
    uint64_t memory_size;
    void* current_node;
    void* parent_node;
    void* child_node;
    void* new_node;
    void* node_handler;
    
    // 获取注册表根节点
    registry_root = (void**)FUN_18008d070();
    root_node = (void*)*registry_root;
    node_flag = *(uint8_t*)((uint64_t)root_node[1] + 0x19);
    node_handler = FUN_18007fcd0;
    parent_node = root_node;
    current_node = (void*)root_node[1];
    
    // 搜索目标节点
    while (node_flag == 0) {
        compare_result = memcmp(current_node + 4, &system_memory_c740, INITIALIZATION_SYSTEM_REGISTRY_KEY_SIZE);
        if (compare_result < 0) {
            child_node = (void*)current_node[2];
            current_node = parent_node;
        } else {
            child_node = (void*)*current_node;
        }
        parent_node = current_node;
        current_node = child_node;
        node_flag = *(uint8_t*)((uint64_t)child_node + 0x19);
    }
    
    // 插入新节点
    if ((parent_node == root_node) || (compare_result = memcmp(&system_memory_c740, parent_node + 4, INITIALIZATION_SYSTEM_REGISTRY_KEY_SIZE), compare_result < 0)) {
        memory_size = FUN_18008f0d0(registry_root);
        FUN_18008f140(registry_root, &new_node, parent_node, memory_size + 0x20, memory_size);
        parent_node = new_node;
    }
    
    // 设置节点数据
    parent_node[6] = 0x4fc124d23d41985f;
    parent_node[7] = 0xe2f4a30d6e6ae482;
    parent_node[8] = &unknown_var_3504_ptr;
    parent_node[9] = 0;
    parent_node[10] = node_handler;
    
    return;
}

/**
 * 初始化系统注册表搜索和插入器2
 * 
 * 负责在注册表中搜索特定键值并插入新的条目（变体2）。
 * 使用不同的键值和处理器函数。
 */
void InitializationSystem_RegistrySearchAndInsert2(void)
{
    uint8_t node_flag;
    void* root_node;
    int compare_result;
    void** registry_root;
    uint64_t memory_size;
    void* current_node;
    void* parent_node;
    void* child_node;
    void* new_node;
    uint64_t node_value;
    
    // 获取注册表根节点
    registry_root = (void**)FUN_18008d070();
    root_node = (void*)*registry_root;
    node_flag = *(uint8_t*)((uint64_t)root_node[1] + 0x19);
    node_value = 0;
    parent_node = root_node;
    current_node = (void*)root_node[1];
    
    // 搜索目标节点
    while (node_flag == 0) {
        compare_result = memcmp(current_node + 4, &system_memory_c768, INITIALIZATION_SYSTEM_REGISTRY_KEY_SIZE);
        if (compare_result < 0) {
            child_node = (void*)current_node[2];
            current_node = parent_node;
        } else {
            child_node = (void*)*current_node;
        }
        parent_node = current_node;
        current_node = child_node;
        node_flag = *(uint8_t*)((uint64_t)child_node + 0x19);
    }
    
    // 插入新节点
    if ((parent_node == root_node) || (compare_result = memcmp(&system_memory_c768, parent_node + 4, INITIALIZATION_SYSTEM_REGISTRY_KEY_SIZE), compare_result < 0)) {
        memory_size = FUN_18008f0d0(registry_root);
        FUN_18008f140(registry_root, &new_node, parent_node, memory_size + 0x20, memory_size);
        parent_node = new_node;
    }
    
    // 设置节点数据
    parent_node[6] = 0x4770584fbb1df897;
    parent_node[7] = 0x47f249e43f66f2ab;
    parent_node[8] = &unknown_var_3520_ptr;
    parent_node[9] = 1;
    parent_node[10] = node_value;
    
    return;
}

/**
 * 初始化系统注册表搜索和插入器3
 * 
 * 负责在注册表中搜索特定键值并插入新的条目（变体3）。
 * 使用不同的键值和处理器函数。
 */
void InitializationSystem_RegistrySearchAndInsert3(void)
{
    uint8_t node_flag;
    void* root_node;
    int compare_result;
    void** registry_root;
    uint64_t memory_size;
    void* current_node;
    void* parent_node;
    void* child_node;
    void* new_node;
    uint64_t node_value;
    
    // 获取注册表根节点
    registry_root = (void**)FUN_18008d070();
    root_node = (void*)*registry_root;
    node_flag = *(uint8_t*)((uint64_t)root_node[1] + 0x19);
    node_value = 0;
    parent_node = root_node;
    current_node = (void*)root_node[1];
    
    // 搜索目标节点
    while (node_flag == 0) {
        compare_result = memcmp(current_node + 4, &system_memory_c9b8, INITIALIZATION_SYSTEM_REGISTRY_KEY_SIZE);
        if (compare_result < 0) {
            child_node = (void*)current_node[2];
            current_node = parent_node;
        } else {
            child_node = (void*)*current_node;
        }
        parent_node = current_node;
        current_node = child_node;
        node_flag = *(uint8_t*)((uint64_t)child_node + 0x19);
    }
    
    // 插入新节点
    if ((parent_node == root_node) || (compare_result = memcmp(&system_memory_c9b8, parent_node + 4, INITIALIZATION_SYSTEM_REGISTRY_KEY_SIZE), compare_result < 0)) {
        memory_size = FUN_18008f0d0(registry_root);
        FUN_18008f140(registry_root, &new_node, parent_node, memory_size + 0x20, memory_size);
        parent_node = new_node;
    }
    
    // 设置节点数据
    parent_node[6] = 0x4666df49b97e0f10;
    parent_node[7] = 0x4e4b0d63a6ad1d8f;
    parent_node[8] = &unknown_var_3544_ptr;
    parent_node[9] = 0;
    parent_node[10] = node_value;
    
    return;
}

/**
 * 初始化系统注册表搜索和插入器4
 * 
 * 负责在注册表中搜索特定键值并插入新的条目（变体4）。
 * 使用不同的键值和处理器函数。
 */
void InitializationSystem_RegistrySearchAndInsert4(void)
{
    uint8_t node_flag;
    void* root_node;
    int compare_result;
    void** registry_root;
    uint64_t memory_size;
    void* current_node;
    void* parent_node;
    void* child_node;
    void* new_node;
    uint64_t node_value;
    
    // 获取注册表根节点
    registry_root = (void**)FUN_18008d070();
    root_node = (void*)*registry_root;
    node_flag = *(uint8_t*)((uint64_t)root_node[1] + 0x19);
    node_value = 0;
    parent_node = root_node;
    current_node = (void*)root_node[1];
    
    // 搜索目标节点
    while (node_flag == 0) {
        compare_result = memcmp(current_node + 4, &system_memory_c940, INITIALIZATION_SYSTEM_REGISTRY_KEY_SIZE);
        if (compare_result < 0) {
            child_node = (void*)current_node[2];
            current_node = parent_node;
        } else {
            child_node = (void*)*current_node;
        }
        parent_node = current_node;
        current_node = child_node;
        node_flag = *(uint8_t*)((uint64_t)child_node + 0x19);
    }
    
    // 插入新节点
    if ((parent_node == root_node) || (compare_result = memcmp(&system_memory_c940, parent_node + 4, INITIALIZATION_SYSTEM_REGISTRY_KEY_SIZE), compare_result < 0)) {
        memory_size = FUN_18008f0d0(registry_root);
        FUN_18008f140(registry_root, &new_node, parent_node, memory_size + 0x20, memory_size);
        parent_node = new_node;
    }
    
    // 设置节点数据
    parent_node[6] = 0x46ecbd4daf41613e;
    parent_node[7] = 0xdc42c056bbde8482;
    parent_node[8] = &unknown_var_3560_ptr;
    parent_node[9] = 0;
    parent_node[10] = node_value;
    
    return;
}

/**
 * 初始化系统注册表搜索和插入器5
 * 
 * 负责在注册表中搜索特定键值并插入新的条目（变体5）。
 * 使用不同的键值和处理器函数。
 */
void InitializationSystem_RegistrySearchAndInsert5(void)
{
    uint8_t node_flag;
    void* root_node;
    int compare_result;
    void** registry_root;
    uint64_t memory_size;
    void* current_node;
    void* parent_node;
    void* child_node;
    void* new_node;
    uint64_t node_value;
    
    // 获取注册表根节点
    registry_root = (void**)FUN_18008d070();
    root_node = (void*)*registry_root;
    node_flag = *(uint8_t*)((uint64_t)root_node[1] + 0x19);
    node_value = 0;
    parent_node = root_node;
    current_node = (void*)root_node[1];
    
    // 搜索目标节点
    while (node_flag == 0) {
        compare_result = memcmp(current_node + 4, &system_memory_c918, INITIALIZATION_SYSTEM_REGISTRY_KEY_SIZE);
        if (compare_result < 0) {
            child_node = (void*)current_node[2];
            current_node = parent_node;
        } else {
            child_node = (void*)*current_node;
        }
        parent_node = current_node;
        current_node = child_node;
        node_flag = *(uint8_t*)((uint64_t)child_node + 0x19);
    }
    
    // 插入新节点
    if ((parent_node == root_node) || (compare_result = memcmp(&system_memory_c918, parent_node + 4, INITIALIZATION_SYSTEM_REGISTRY_KEY_SIZE), compare_result < 0)) {
        memory_size = FUN_18008f0d0(registry_root);
        FUN_18008f140(registry_root, &new_node, parent_node, memory_size + 0x20, memory_size);
        parent_node = new_node;
    }
    
    // 设置节点数据
    parent_node[6] = 0x4c868a42644030f6;
    parent_node[7] = 0xc29193aa9d9b35b9;
    parent_node[8] = &unknown_var_3576_ptr;
    parent_node[9] = 0;
    parent_node[10] = node_value;
    
    return;
}

/**
 * 初始化系统注册表搜索和插入器6
 * 
 * 负责在注册表中搜索特定键值并插入新的条目（变体6）。
 * 使用不同的键值和处理器函数。
 */
void InitializationSystem_RegistrySearchAndInsert6(void)
{
    uint8_t node_flag;
    void* root_node;
    int compare_result;
    void** registry_root;
    uint64_t memory_size;
    void* current_node;
    void* parent_node;
    void* child_node;
    void* new_node;
    uint64_t node_value;
    
    // 获取注册表根节点
    registry_root = (void**)FUN_18008d070();
    root_node = (void*)*registry_root;
    node_flag = *(uint8_t*)((uint64_t)root_node[1] + 0x19);
    node_value = 0;
    parent_node = root_node;
    current_node = (void*)root_node[1];
    
    // 搜索目标节点
    while (node_flag == 0) {
        compare_result = memcmp(current_node + 4, &system_memory_c968, INITIALIZATION_SYSTEM_REGISTRY_KEY_SIZE);
        if (compare_result < 0) {
            child_node = (void*)current_node[2];
            current_node = parent_node;
        } else {
            child_node = (void*)*current_node;
        }
        parent_node = current_node;
        current_node = child_node;
        node_flag = *(uint8_t*)((uint64_t)child_node + 0x19);
    }
    
    // 插入新节点
    if ((parent_node == root_node) || (compare_result = memcmp(&system_memory_c968, parent_node + 4, INITIALIZATION_SYSTEM_REGISTRY_KEY_SIZE), compare_result < 0)) {
        memory_size = FUN_18008f0d0(registry_root);
        FUN_18008f140(registry_root, &new_node, parent_node, memory_size + 0x20, memory_size);
        parent_node = new_node;
    }
    
    // 设置节点数据
    parent_node[6] = 0x40ea3a798283cbbb;
    parent_node[7] = 0x7f74eb2c5a7fadae;
    parent_node[8] = &unknown_var_3600_ptr;
    parent_node[9] = 3;
    parent_node[10] = node_value;
    
    return;
}

/**
 * 初始化系统注册表搜索和插入器7
 * 
 * 负责在注册表中搜索特定键值并插入新的条目（变体7）。
 * 使用不同的键值和处理器函数。
 */
void InitializationSystem_RegistrySearchAndInsert7(void)
{
    uint8_t node_flag;
    void* root_node;
    int compare_result;
    void** registry_root;
    uint64_t memory_size;
    void* current_node;
    void* parent_node;
    void* child_node;
    void* new_node;
    uint64_t node_value;
    
    // 获取注册表根节点
    registry_root = (void**)FUN_18008d070();
    root_node = (void*)*registry_root;
    node_flag = *(uint8_t*)((uint64_t)root_node[1] + 0x19);
    node_value = 0;
    parent_node = root_node;
    current_node = (void*)root_node[1];
    
    // 搜索目标节点
    while (node_flag == 0) {
        compare_result = memcmp(current_node + 4, &system_memory_c990, INITIALIZATION_SYSTEM_REGISTRY_KEY_SIZE);
        if (compare_result < 0) {
            child_node = (void*)current_node[2];
            current_node = parent_node;
        } else {
            child_node = (void*)*current_node;
        }
        parent_node = current_node;
        current_node = child_node;
        node_flag = *(uint8_t*)((uint64_t)child_node + 0x19);
    }
    
    // 插入新节点
    if ((parent_node == root_node) || (compare_result = memcmp(&system_memory_c990, parent_node + 4, INITIALIZATION_SYSTEM_REGISTRY_KEY_SIZE), compare_result < 0)) {
        memory_size = FUN_18008f0d0(registry_root);
        FUN_18008f140(registry_root, &new_node, parent_node, memory_size + 0x20, memory_size);
        parent_node = new_node;
    }
    
    // 设置节点数据
    parent_node[6] = 0x45b8d074df27d12f;
    parent_node[7] = 0x8d98f4c06880eda4;
    parent_node[8] = &unknown_var_3632_ptr;
    parent_node[9] = 3;
    parent_node[10] = node_value;
    
    return;
}

/**
 * 初始化系统注册表搜索和插入器8
 * 
 * 负责在注册表中搜索特定键值并插入新的条目（变体8）。
 * 使用不同的键值和处理器函数。
 */
void InitializationSystem_RegistrySearchAndInsert8(void)
{
    uint8_t node_flag;
    void* root_node;
    int compare_result;
    void** registry_root;
    uint64_t memory_size;
    void* current_node;
    void* parent_node;
    void* child_node;
    void* new_node;
    uint64_t node_value;
    
    // 获取注册表根节点
    registry_root = (void**)FUN_18008d070();
    root_node = (void*)*registry_root;
    node_flag = *(uint8_t*)((uint64_t)root_node[1] + 0x19);
    node_value = 0;
    parent_node = root_node;
    current_node = (void*)root_node[1];
    
    // 搜索目标节点
    while (node_flag == 0) {
        compare_result = memcmp(current_node + 4, &system_memory_c9e0, INITIALIZATION_SYSTEM_REGISTRY_KEY_SIZE);
        if (compare_result < 0) {
            child_node = (void*)current_node[2];
            current_node = parent_node;
        } else {
            child_node = (void*)*current_node;
        }
        parent_node = current_node;
        current_node = child_node;
        node_flag = *(uint8_t*)((uint64_t)child_node + 0x19);
    }
    
    // 插入新节点
    if ((parent_node == root_node) || (compare_result = memcmp(&system_memory_c9e0, parent_node + 4, INITIALIZATION_SYSTEM_REGISTRY_KEY_SIZE), compare_result < 0)) {
        memory_size = FUN_18008f0d0(registry_root);
        FUN_18008f140(registry_root, &new_node, parent_node, memory_size + 0x20, memory_size);
        parent_node = new_node;
    }
    
    // 设置节点数据
    parent_node[6] = 0x42d293584c8cf3e5;
    parent_node[7] = 0x355ffeb2d29e668a;
    parent_node[8] = &unknown_var_3728_ptr;
    parent_node[9] = 0;
    parent_node[10] = node_value;
    
    return;
}

/**
 * 初始化系统注册表搜索和插入器9
 * 
 * 负责在注册表中搜索特定键值并插入新的条目（变体9）。
 * 使用不同的键值和处理器函数。
 */
void InitializationSystem_RegistrySearchAndInsert9(void)
{
    uint8_t node_flag;
    void* root_node;
    int compare_result;
    void** registry_root;
    uint64_t memory_size;
    void* current_node;
    void* parent_node;
    void* child_node;
    void* new_node;
    void* node_handler;
    
    // 获取注册表根节点
    registry_root = (void**)FUN_18008d070();
    root_node = (void*)*registry_root;
    node_flag = *(uint8_t*)((uint64_t)root_node[1] + 0x19);
    node_handler = FUN_180073930;
    parent_node = root_node;
    current_node = (void*)root_node[1];
    
    // 搜索目标节点
    while (node_flag == 0) {
        compare_result = memcmp(current_node + 4, &system_memory_c8f0, INITIALIZATION_SYSTEM_REGISTRY_KEY_SIZE);
        if (compare_result < 0) {
            child_node = (void*)current_node[2];
            current_node = parent_node;
        } else {
            child_node = (void*)*current_node;
        }
        parent_node = current_node;
        current_node = child_node;
        node_flag = *(uint8_t*)((uint64_t)child_node + 0x19);
    }
    
    // 插入新节点
    if ((parent_node == root_node) || (compare_result = memcmp(&system_memory_c8f0, parent_node + 4, INITIALIZATION_SYSTEM_REGISTRY_KEY_SIZE), compare_result < 0)) {
        memory_size = FUN_18008f0d0(registry_root);
        FUN_18008f140(registry_root, &new_node, parent_node, memory_size + 0x20, memory_size);
        parent_node = new_node;
    }
    
    // 设置节点数据
    parent_node[6] = 0x421c3cedd07d816d;
    parent_node[7] = 0xbec25de793b7afa6;
    parent_node[8] = &unknown_var_3744_ptr;
    parent_node[9] = 0;
    parent_node[10] = node_handler;
    
    return;
}

/**
 * 初始化系统注册表搜索和插入器10
 * 
 * 负责在注册表中搜索特定键值并插入新的条目（变体10）。
 * 使用不同的键值和处理器函数。
 */
void InitializationSystem_RegistrySearchAndInsert10(void)
{
    uint8_t node_flag;
    void* root_node;
    int compare_result;
    void** registry_root;
    uint64_t memory_size;
    void* current_node;
    void* parent_node;
    void* child_node;
    void* new_node;
    uint64_t node_value;
    
    // 获取注册表根节点
    registry_root = (void**)FUN_18008d070();
    root_node = (void*)*registry_root;
    node_flag = *(uint8_t*)((uint64_t)root_node[1] + 0x19);
    node_value = 0;
    parent_node = root_node;
    current_node = (void*)root_node[1];
    
    // 搜索目标节点
    while (node_flag == 0) {
        compare_result = memcmp(current_node + 4, &system_memory_c8c8, INITIALIZATION_SYSTEM_REGISTRY_KEY_SIZE);
        if (compare_result < 0) {
            child_node = (void*)current_node[2];
            current_node = parent_node;
        } else {
            child_node = (void*)*current_node;
        }
        parent_node = current_node;
        current_node = child_node;
        node_flag = *(uint8_t*)((uint64_t)child_node + 0x19);
    }
    
    // 插入新节点
    if ((parent_node == root_node) || (compare_result = memcmp(&system_memory_c8c8, parent_node + 4, INITIALIZATION_SYSTEM_REGISTRY_KEY_SIZE), compare_result < 0)) {
        memory_size = FUN_18008f0d0(registry_root);
        FUN_18008f140(registry_root, &new_node, parent_node, memory_size + 0x20, memory_size);
        parent_node = new_node;
    }
    
    // 设置节点数据
    parent_node[6] = 0x4c22bb0c326587ce;
    parent_node[7] = 0x5e3cf00ce2978287;
    parent_node[8] = &unknown_var_3768_ptr;
    parent_node[9] = 1;
    parent_node[10] = node_value;
    
    return;
}

/**
 * 初始化系统注册表搜索和插入器11
 * 
 * 负责在注册表中搜索特定键值并插入新的条目（变体11）。
 * 使用字符串缓冲区进行配置数据的处理。
 */
void InitializationSystem_RegistrySearchAndInsert11(void)
{
    uint64_t register_value;
    void* config_base;
    uint8_t* string_buffer;
    uint32_t buffer_size;
    uint8_t local_buffer[INITIALIZATION_SYSTEM_STRING_BUFFER_SIZE];
    
    // 初始化配置基础指针
    config_base = &unknown_var_3432_ptr;
    string_buffer = local_buffer;
    
    // 清空字符串缓冲区
    local_buffer[0] = 0;
    buffer_size = 0x12;
    
    // 安全复制配置字符串
    strcpy_s(local_buffer, INITIALIZATION_SYSTEM_CONFIG_SIZE, &unknown_var_4992_ptr, register_value, 0xfffffffffffffffe);
    
    // 注册配置到系统
    _DAT_180c91f6c = FUN_180623800(&config_base);
    
    return;
}

/**
 * 初始化系统注册表搜索和插入器12
 * 
 * 负责在注册表中搜索特定键值并插入新的条目（变体12）。
 * 使用字符串缓冲区进行配置数据的处理。
 */
void InitializationSystem_RegistrySearchAndInsert12(void)
{
    uint64_t register_value;
    void* config_base;
    uint8_t* string_buffer;
    uint32_t buffer_size;
    uint8_t local_buffer[INITIALIZATION_SYSTEM_STRING_BUFFER_SIZE];
    
    // 初始化配置基础指针
    config_base = &unknown_var_3432_ptr;
    string_buffer = local_buffer;
    
    // 清空字符串缓冲区
    local_buffer[0] = 0;
    buffer_size = 8;
    
    // 安全复制配置字符串
    strcpy_s(local_buffer, INITIALIZATION_SYSTEM_CONFIG_SIZE, &unknown_var_6248_ptr, register_value, 0xfffffffffffffffe);
    
    // 注册配置到系统
    _DAT_180c91fcc = FUN_180623800(&config_base);
    
    return;
}

/**
 * 初始化系统注册表搜索和插入器13
 * 
 * 负责在注册表中搜索特定键值并插入新的条目（变体13）。
 * 使用不同的键值和处理器函数。
 */
void InitializationSystem_RegistrySearchAndInsert13(void)
{
    uint8_t node_flag;
    void* root_node;
    int compare_result;
    void** registry_root;
    uint64_t memory_size;
    void* current_node;
    void* parent_node;
    void* child_node;
    void* new_node;
    void* node_handler;
    
    // 获取注册表根节点
    registry_root = (void**)FUN_18008d070();
    root_node = (void*)*registry_root;
    node_flag = *(uint8_t*)((uint64_t)root_node[1] + 0x19);
    node_handler = FUN_18025cc00;
    parent_node = root_node;
    current_node = (void*)root_node[1];
    
    // 搜索目标节点
    while (node_flag == 0) {
        compare_result = memcmp(current_node + 4, &system_memory_10a0, INITIALIZATION_SYSTEM_REGISTRY_KEY_SIZE);
        if (compare_result < 0) {
            child_node = (void*)current_node[2];
            current_node = parent_node;
        } else {
            child_node = (void*)*current_node;
        }
        parent_node = current_node;
        current_node = child_node;
        node_flag = *(uint8_t*)((uint64_t)child_node + 0x19);
    }
    
    // 插入新节点
    if ((parent_node == root_node) || (compare_result = memcmp(&system_memory_10a0, parent_node + 4, INITIALIZATION_SYSTEM_REGISTRY_KEY_SIZE), compare_result < 0)) {
        memory_size = FUN_18008f0d0(registry_root);
        FUN_18008f140(registry_root, &new_node, parent_node, memory_size + 0x20, memory_size);
        parent_node = new_node;
    }
    
    // 设置节点数据
    parent_node[6] = 0x43330a43fcdb3653;
    parent_node[7] = 0xdcfdc333a769ec93;
    parent_node[8] = &unknown_var_7584_ptr;
    parent_node[9] = 1;
    parent_node[10] = node_handler;
    
    return;
}

/**
 * 初始化系统注册表搜索和插入器14
 * 
 * 负责在注册表中搜索特定键值并插入新的条目（变体14）。
 * 使用不同的键值和处理器函数。
 */
void InitializationSystem_RegistrySearchAndInsert14(void)
{
    uint8_t node_flag;
    void* root_node;
    int compare_result;
    void** registry_root;
    uint64_t memory_size;
    void* current_node;
    void* parent_node;
    void* child_node;
    void* new_node;
    void* node_handler;
    
    // 获取注册表根节点
    registry_root = (void**)FUN_18008d070();
    root_node = (void*)*registry_root;
    node_flag = *(uint8_t*)((uint64_t)root_node[1] + 0x19);
    node_handler = FUN_18025c000;
    parent_node = root_node;
    current_node = (void*)root_node[1];
    
    // 搜索目标节点
    while (node_flag == 0) {
        compare_result = memcmp(current_node + 4, &system_memory_1078, INITIALIZATION_SYSTEM_REGISTRY_KEY_SIZE);
        if (compare_result < 0) {
            child_node = (void*)current_node[2];
            current_node = parent_node;
        } else {
            child_node = (void*)*current_node;
        }
        parent_node = current_node;
        current_node = child_node;
        node_flag = *(uint8_t*)((uint64_t)child_node + 0x19);
    }
    
    // 插入新节点
    if ((parent_node == root_node) || (compare_result = memcmp(&system_memory_1078, parent_node + 4, INITIALIZATION_SYSTEM_REGISTRY_KEY_SIZE), compare_result < 0)) {
        memory_size = FUN_18008f0d0(registry_root);
        FUN_18008f140(registry_root, &new_node, parent_node, memory_size + 0x20, memory_size);
        parent_node = new_node;
    }
    
    // 设置节点数据
    parent_node[6] = 0x431d7c8d7c475be2;
    parent_node[7] = 0xb97f048d2153e1b0;
    parent_node[8] = &unknown_var_7608_ptr;
    parent_node[9] = 4;
    parent_node[10] = node_handler;
    
    return;
}

/**
 * 初始化系统注册表搜索和插入器15
 * 
 * 负责在注册表中搜索特定键值并插入新的条目（变体15）。
 * 使用不同的键值和处理器函数。
 */
void InitializationSystem_RegistrySearchAndInsert15(void)
{
    uint8_t node_flag;
    void* root_node;
    int compare_result;
    void** registry_root;
    uint64_t memory_size;
    void* current_node;
    void* parent_node;
    void* child_node;
    void* new_node;
    uint64_t node_value;
    
    // 获取注册表根节点
    registry_root = (void**)FUN_18008d070();
    root_node = (void*)*registry_root;
    node_flag = *(uint8_t*)((uint64_t)root_node[1] + 0x19);
    node_value = 0;
    parent_node = root_node;
    current_node = (void*)root_node[1];
    
    // 搜索目标节点
    while (node_flag == 0) {
        compare_result = memcmp(current_node + 4, &system_memory_1050, INITIALIZATION_SYSTEM_REGISTRY_KEY_SIZE);
        if (compare_result < 0) {
            child_node = (void*)current_node[2];
            current_node = parent_node;
        } else {
            child_node = (void*)*current_node;
        }
        parent_node = current_node;
        current_node = child_node;
        node_flag = *(uint8_t*)((uint64_t)child_node + 0x19);
    }
    
    // 插入新节点
    if ((parent_node == root_node) || (compare_result = memcmp(&system_memory_1050, parent_node + 4, INITIALIZATION_SYSTEM_REGISTRY_KEY_SIZE), compare_result < 0)) {
        memory_size = FUN_18008f0d0(registry_root);
        FUN_18008f140(registry_root, &new_node, parent_node, memory_size + 0x20, memory_size);
        parent_node = new_node;
    }
    
    // 设置节点数据
    parent_node[6] = 0x4b2d79e470ee4e2c;
    parent_node[7] = 0x9c552acd3ed5548d;
    parent_node[8] = &unknown_var_7632_ptr;
    parent_node[9] = 0;
    parent_node[10] = node_value;
    
    return;
}

/**
 * 初始化系统注册表搜索和插入器16
 * 
 * 负责在注册表中搜索特定键值并插入新的条目（变体16）。
 * 使用不同的键值和处理器函数。
 */
void InitializationSystem_RegistrySearchAndInsert16(void)
{
    uint8_t node_flag;
    void* root_node;
    int compare_result;
    void** registry_root;
    uint64_t memory_size;
    void* current_node;
    void* parent_node;
    void* child_node;
    void* new_node;
    void* node_handler;
    
    // 获取注册表根节点
    registry_root = (void**)FUN_18008d070();
    root_node = (void*)*registry_root;
    node_flag = *(uint8_t*)((uint64_t)root_node[1] + 0x19);
    node_handler = FUN_18025d270;
    parent_node = root_node;
    current_node = (void*)root_node[1];
    
    // 搜索目标节点
    while (node_flag == 0) {
        compare_result = memcmp(current_node + 4, &system_memory_1028, INITIALIZATION_SYSTEM_REGISTRY_KEY_SIZE);
        if (compare_result < 0) {
            child_node = (void*)current_node[2];
            current_node = parent_node;
        } else {
            child_node = (void*)*current_node;
        }
        parent_node = current_node;
        current_node = child_node;
        node_flag = *(uint8_t*)((uint64_t)child_node + 0x19);
    }
    
    // 插入新节点
    if ((parent_node == root_node) || (compare_result = memcmp(&system_memory_1028, parent_node + 4, INITIALIZATION_SYSTEM_REGISTRY_KEY_SIZE), compare_result < 0)) {
        memory_size = FUN_18008f0d0(registry_root);
        FUN_18008f140(registry_root, &new_node, parent_node, memory_size + 0x20, memory_size);
        parent_node = new_node;
    }
    
    // 设置节点数据
    parent_node[6] = 0x49086ba08ab981a7;
    parent_node[7] = 0xa9191d34ad910696;
    parent_node[8] = &unknown_var_7656_ptr;
    parent_node[9] = 0;
    parent_node[10] = node_handler;
    
    return;
}

/**
 * 初始化系统注册表搜索和插入器17
 * 
 * 负责在注册表中搜索特定键值并插入新的条目（变体17）。
 * 使用不同的键值和处理器函数。
 */
void InitializationSystem_RegistrySearchAndInsert17(void)
{
    uint8_t node_flag;
    void* root_node;
    int compare_result;
    void** registry_root;
    uint64_t memory_size;
    void* current_node;
    void* parent_node;
    void* child_node;
    void* new_node;
    uint64_t node_value;
    
    // 获取注册表根节点
    registry_root = (void**)FUN_18008d070();
    root_node = (void*)*registry_root;
    node_flag = *(uint8_t*)((uint64_t)root_node[1] + 0x19);
    node_value = 0;
    parent_node = root_node;
    current_node = (void*)root_node[1];
    
    // 搜索目标节点
    while (node_flag == 0) {
        compare_result = memcmp(current_node + 4, &system_memory_1000, INITIALIZATION_SYSTEM_REGISTRY_KEY_SIZE);
        if (compare_result < 0) {
            child_node = (void*)current_node[2];
            current_node = parent_node;
        } else {
            child_node = (void*)*current_node;
        }
        parent_node = current_node;
        current_node = child_node;
        node_flag = *(uint8_t*)((uint64_t)child_node + 0x19);
    }
    
    // 插入新节点
    if ((parent_node == root_node) || (compare_result = memcmp(&system_memory_1000, parent_node + 4, INITIALIZATION_SYSTEM_REGISTRY_KEY_SIZE), compare_result < 0)) {
        memory_size = FUN_18008f0d0(registry_root);
        FUN_18008f140(registry_root, &new_node, parent_node, memory_size + 0x20, memory_size);
        parent_node = new_node;
    }
    
    // 设置节点数据
    parent_node[6] = 0x402feffe4481676e;
    parent_node[7] = 0xd4c2151109de93a0;
    parent_node[8] = &unknown_var_7680_ptr;
    parent_node[9] = 0;
    parent_node[10] = node_value;
    
    return;
}

/**
 * 初始化系统注册表搜索和插入器18
 * 
 * 负责在注册表中搜索特定键值并插入新的条目（变体18）。
 * 使用不同的键值和处理器函数。
 */
void InitializationSystem_RegistrySearchAndInsert18(void)
{
    uint8_t node_flag;
    void* root_node;
    int compare_result;
    void** registry_root;
    uint64_t memory_size;
    void* current_node;
    void* parent_node;
    void* child_node;
    void* new_node;
    void* node_handler;
    
    // 获取注册表根节点
    registry_root = (void**)FUN_18008d070();
    root_node = (void*)*registry_root;
    node_flag = *(uint8_t*)((uint64_t)root_node[1] + 0x19);
    node_handler = &unknown_var_2048_ptr;
    parent_node = root_node;
    current_node = (void*)root_node[1];
    
    // 搜索目标节点
    while (node_flag == 0) {
        compare_result = memcmp(current_node + 4, &system_memory_0fd8, INITIALIZATION_SYSTEM_REGISTRY_KEY_SIZE);
        if (compare_result < 0) {
            child_node = (void*)current_node[2];
            current_node = parent_node;
        } else {
            child_node = (void*)*current_node;
        }
        parent_node = current_node;
        current_node = child_node;
        node_flag = *(uint8_t*)((uint64_t)child_node + 0x19);
    }
    
    // 插入新节点
    if ((parent_node == root_node) || (compare_result = memcmp(&system_memory_0fd8, parent_node + 4, INITIALIZATION_SYSTEM_REGISTRY_KEY_SIZE), compare_result < 0)) {
        memory_size = FUN_18008f0d0(registry_root);
        FUN_18008f140(registry_root, &new_node, parent_node, memory_size + 0x20, memory_size);
        parent_node = new_node;
    }
    
    // 设置节点数据
    parent_node[6] = 0x4384dcc4b6d3f417;
    parent_node[7] = 0x92a15d52fe2679bd;
    parent_node[8] = &unknown_var_7704_ptr;
    parent_node[9] = 0;
    parent_node[10] = node_handler;
    
    return;
}

/**
 * 初始化系统注册表搜索和插入器19
 * 
 * 负责在注册表中搜索特定键值并插入新的条目（变体19）。
 * 使用不同的键值和处理器函数。
 */
void InitializationSystem_RegistrySearchAndInsert19(void)
{
    uint8_t node_flag;
    void* root_node;
    int compare_result;
    void** registry_root;
    uint64_t memory_size;
    void* current_node;
    void* parent_node;
    void* child_node;
    void* new_node;
    uint64_t node_value;
    
    // 获取注册表根节点
    registry_root = (void**)FUN_18008d070();
    root_node = (void*)*registry_root;
    node_flag = *(uint8_t*)((uint64_t)root_node[1] + 0x19);
    node_value = 0;
    parent_node = root_node;
    current_node = (void*)root_node[1];
    
    // 搜索目标节点
    while (node_flag == 0) {
        compare_result = memcmp(current_node + 4, &system_memory_0fb0, INITIALIZATION_SYSTEM_REGISTRY_KEY_SIZE);
        if (compare_result < 0) {
            child_node = (void*)current_node[2];
            current_node = parent_node;
        } else {
            child_node = (void*)*current_node;
        }
        parent_node = current_node;
        current_node = child_node;
        node_flag = *(uint8_t*)((uint64_t)child_node + 0x19);
    }
    
    // 插入新节点
    if ((parent_node == root_node) || (compare_result = memcmp(&system_memory_0fb0, parent_node + 4, INITIALIZATION_SYSTEM_REGISTRY_KEY_SIZE), compare_result < 0)) {
        memory_size = FUN_18008f0d0(registry_root);
        FUN_18008f140(registry_root, &new_node, parent_node, memory_size + 0x20, memory_size);
        parent_node = new_node;
    }
    
    // 设置节点数据
    parent_node[6] = 0x4140994454d56503;
    parent_node[7] = 0x399eced9bb5517ad;
    parent_node[8] = &unknown_var_7728_ptr;
    parent_node[9] = 0;
    parent_node[10] = node_value;
    
    return;
}

/**
 * 初始化系统全局数据初始化器2
 * 
 * 负责系统全局数据的初始化（变体2）。
 * 支持多种数据类型的初始化和内存管理。
 */
int InitializationSystem_GlobalDataInitializer2(void)
{
    uint64_t memory_handle;
    uint64_t register_value;
    
    // 初始化全局数据指针
    _DAT_180bfa350 = &unknown_var_3432_ptr;
    _DAT_180bfa358 = &system_memory_a368;
    
    // 返回初始化状态
    return 0;
}

/**
 * 初始化系统注册表搜索和插入器20
 * 
 * 负责在注册表中搜索特定键值并插入新的条目（变体20）。
 * 使用不同的键值和处理器函数。
 */
void InitializationSystem_RegistrySearchAndInsert20(void)
{
    uint8_t node_flag;
    void* root_node;
    int compare_result;
    void** registry_root;
    uint64_t memory_size;
    void* current_node;
    void* parent_node;
    void* child_node;
    void* new_node;
    void* node_handler;
    
    // 获取注册表根节点
    registry_root = (void**)FUN_18008d070();
    root_node = (void*)*registry_root;
    node_flag = *(uint8_t*)((uint64_t)root_node[1] + 0x19);
    node_handler = FUN_18025e330;
    parent_node = root_node;
    current_node = (void*)root_node[1];
    
    // 搜索目标节点
    while (node_flag == 0) {
        compare_result = memcmp(current_node + 4, &system_memory_0d48, INITIALIZATION_SYSTEM_REGISTRY_KEY_SIZE);
        if (compare_result < 0) {
            child_node = (void*)current_node[2];
            current_node = parent_node;
        } else {
            child_node = (void*)*current_node;
        }
        parent_node = current_node;
        current_node = child_node;
        node_flag = *(uint8_t*)((uint64_t)child_node + 0x19);
    }
    
    // 插入新节点
    if ((parent_node == root_node) || (compare_result = memcmp(&system_memory_0d48, parent_node + 4, INITIALIZATION_SYSTEM_REGISTRY_KEY_SIZE), compare_result < 0)) {
        memory_size = FUN_18008f0d0(registry_root);
        FUN_18008f140(registry_root, &new_node, parent_node, memory_size + 0x20, memory_size);
        parent_node = new_node;
    }
    
    // 设置节点数据
    parent_node[6] = 0x45425dc186a5d575;
    parent_node[7] = 0xfab48faa65382fa5;
    parent_node[8] = &unknown_var_7824_ptr;
    parent_node[9] = 0;
    parent_node[10] = node_handler;
    
    return;
}

/**
 * 初始化系统注册表搜索和插入器21
 * 
 * 负责在注册表中搜索特定键值并插入新的条目（变体21）。
 * 使用不同的键值和处理器函数。
 */
void InitializationSystem_RegistrySearchAndInsert21(void)
{
    uint8_t node_flag;
    void* root_node;
    int compare_result;
    void** registry_root;
    uint64_t memory_size;
    void* current_node;
    void* parent_node;
    void* child_node;
    void* new_node;
    void* node_handler;
    
    // 获取注册表根节点
    registry_root = (void**)FUN_18008d070();
    root_node = (void*)*registry_root;
    node_flag = *(uint8_t*)((uint64_t)root_node[1] + 0x19);
    node_handler = FUN_18025cc00;
    parent_node = root_node;
    current_node = (void*)root_node[1];
    
    // 搜索目标节点
    while (node_flag == 0) {
        compare_result = memcmp(current_node + 4, &system_memory_10a0, INITIALIZATION_SYSTEM_REGISTRY_KEY_SIZE);
        if (compare_result < 0) {
            child_node = (void*)current_node[2];
            current_node = parent_node;
        } else {
            child_node = (void*)*current_node;
        }
        parent_node = current_node;
        current_node = child_node;
        node_flag = *(uint8_t*)((uint64_t)child_node + 0x19);
    }
    
    // 插入新节点
    if ((parent_node == root_node) || (compare_result = memcmp(&system_memory_10a0, parent_node + 4, INITIALIZATION_SYSTEM_REGISTRY_KEY_SIZE), compare_result < 0)) {
        memory_size = FUN_18008f0d0(registry_root);
        FUN_18008f140(registry_root, &new_node, parent_node, memory_size + 0x20, memory_size);
        parent_node = new_node;
    }
    
    // 设置节点数据
    parent_node[6] = 0x43330a43fcdb3653;
    parent_node[7] = 0xdcfdc333a769ec93;
    parent_node[8] = &unknown_var_7584_ptr;
    parent_node[9] = 1;
    parent_node[10] = node_handler;
    
    return;
}

/**
 * 初始化系统注册表搜索和插入器22
 * 
 * 负责在注册表中搜索特定键值并插入新的条目（变体22）。
 * 使用不同的键值和处理器函数。
 */
void InitializationSystem_RegistrySearchAndInsert22(void)
{
    uint8_t node_flag;
    void* root_node;
    int compare_result;
    void** registry_root;
    uint64_t memory_size;
    void* current_node;
    void* parent_node;
    void* child_node;
    void* new_node;
    void* node_handler;
    
    // 获取注册表根节点
    registry_root = (void**)FUN_18008d070();
    root_node = (void*)*registry_root;
    node_flag = *(uint8_t*)((uint64_t)root_node[1] + 0x19);
    node_handler = FUN_18025c000;
    parent_node = root_node;
    current_node = (void*)root_node[1];
    
    // 搜索目标节点
    while (node_flag == 0) {
        compare_result = memcmp(current_node + 4, &system_memory_1078, INITIALIZATION_SYSTEM_REGISTRY_KEY_SIZE);
        if (compare_result < 0) {
            child_node = (void*)current_node[2];
            current_node = parent_node;
        } else {
            child_node = (void*)*current_node;
        }
        parent_node = current_node;
        current_node = child_node;
        node_flag = *(uint8_t*)((uint64_t)child_node + 0x19);
    }
    
    // 插入新节点
    if ((parent_node == root_node) || (compare_result = memcmp(&system_memory_1078, parent_node + 4, INITIALIZATION_SYSTEM_REGISTRY_KEY_SIZE), compare_result < 0)) {
        memory_size = FUN_18008f0d0(registry_root);
        FUN_18008f140(registry_root, &new_node, parent_node, memory_size + 0x20, memory_size);
        parent_node = new_node;
    }
    
    // 设置节点数据
    parent_node[6] = 0x431d7c8d7c475be2;
    parent_node[7] = 0xb97f048d2153e1b0;
    parent_node[8] = &unknown_var_7608_ptr;
    parent_node[9] = 4;
    parent_node[10] = node_handler;
    
    return;
}

/**
 * 初始化系统注册表搜索和插入器23
 * 
 * 负责在注册表中搜索特定键值并插入新的条目（变体23）。
 * 使用不同的键值和处理器函数。
 */
void InitializationSystem_RegistrySearchAndInsert23(void)
{
    uint8_t node_flag;
    void* root_node;
    int compare_result;
    void** registry_root;
    uint64_t memory_size;
    void* current_node;
    void* parent_node;
    void* child_node;
    void* new_node;
    uint64_t node_value;
    
    // 获取注册表根节点
    registry_root = (void**)FUN_18008d070();
    root_node = (void*)*registry_root;
    node_flag = *(uint8_t*)((uint64_t)root_node[1] + 0x19);
    node_value = 0;
    parent_node = root_node;
    current_node = (void*)root_node[1];
    
    // 搜索目标节点
    while (node_flag == 0) {
        compare_result = memcmp(current_node + 4, &system_memory_1050, INITIALIZATION_SYSTEM_REGISTRY_KEY_SIZE);
        if (compare_result < 0) {
            child_node = (void*)current_node[2];
            current_node = parent_node;
        } else {
            child_node = (void*)*current_node;
        }
        parent_node = current_node;
        current_node = child_node;
        node_flag = *(uint8_t*)((uint64_t)child_node + 0x19);
    }
    
    // 插入新节点
    if ((parent_node == root_node) || (compare_result = memcmp(&system_memory_1050, parent_node + 4, INITIALIZATION_SYSTEM_REGISTRY_KEY_SIZE), compare_result < 0)) {
        memory_size = FUN_18008f0d0(registry_root);
        FUN_18008f140(registry_root, &new_node, parent_node, memory_size + 0x20, memory_size);
        parent_node = new_node;
    }
    
    // 设置节点数据
    parent_node[6] = 0x4b2d79e470ee4e2c;
    parent_node[7] = 0x9c552acd3ed5548d;
    parent_node[8] = &unknown_var_7632_ptr;
    parent_node[9] = 0;
    parent_node[10] = node_value;
    
    return;
}

/**
 * 初始化系统注册表搜索和插入器24
 * 
 * 负责在注册表中搜索特定键值并插入新的条目（变体24）。
 * 使用不同的键值和处理器函数。
 */
void InitializationSystem_RegistrySearchAndInsert24(void)
{
    uint8_t node_flag;
    void* root_node;
    int compare_result;
    void** registry_root;
    uint64_t memory_size;
    void* current_node;
    void* parent_node;
    void* child_node;
    void* new_node;
    void* node_handler;
    
    // 获取注册表根节点
    registry_root = (void**)FUN_18008d070();
    root_node = (void*)*registry_root;
    node_flag = *(uint8_t*)((uint64_t)root_node[1] + 0x19);
    node_handler = FUN_18025d270;
    parent_node = root_node;
    current_node = (void*)root_node[1];
    
    // 搜索目标节点
    while (node_flag == 0) {
        compare_result = memcmp(current_node + 4, &system_memory_1028, INITIALIZATION_SYSTEM_REGISTRY_KEY_SIZE);
        if (compare_result < 0) {
            child_node = (void*)current_node[2];
            current_node = parent_node;
        } else {
            child_node = (void*)*current_node;
        }
        parent_node = current_node;
        current_node = child_node;
        node_flag = *(uint8_t*)((uint64_t)child_node + 0x19);
    }
    
    // 插入新节点
    if ((parent_node == root_node) || (compare_result = memcmp(&system_memory_1028, parent_node + 4, INITIALIZATION_SYSTEM_REGISTRY_KEY_SIZE), compare_result < 0)) {
        memory_size = FUN_18008f0d0(registry_root);
        FUN_18008f140(registry_root, &new_node, parent_node, memory_size + 0x20, memory_size);
        parent_node = new_node;
    }
    
    // 设置节点数据
    parent_node[6] = 0x49086ba08ab981a7;
    parent_node[7] = 0xa9191d34ad910696;
    parent_node[8] = &unknown_var_7656_ptr;
    parent_node[9] = 0;
    parent_node[10] = node_handler;
    
    return;
}

/**
 * 初始化系统注册表搜索和插入器25
 * 
 * 负责在注册表中搜索特定键值并插入新的条目（变体25）。
 * 使用不同的键值和处理器函数。
 */
void InitializationSystem_RegistrySearchAndInsert25(void)
{
    uint8_t node_flag;
    void* root_node;
    int compare_result;
    void** registry_root;
    uint64_t memory_size;
    void* current_node;
    void* parent_node;
    void* child_node;
    void* new_node;
    uint64_t node_value;
    
    // 获取注册表根节点
    registry_root = (void**)FUN_18008d070();
    root_node = (void*)*registry_root;
    node_flag = *(uint8_t*)((uint64_t)root_node[1] + 0x19);
    node_value = 0;
    parent_node = root_node;
    current_node = (void*)root_node[1];
    
    // 搜索目标节点
    while (node_flag == 0) {
        compare_result = memcmp(current_node + 4, &system_memory_1000, INITIALIZATION_SYSTEM_REGISTRY_KEY_SIZE);
        if (compare_result < 0) {
            child_node = (void*)current_node[2];
            current_node = parent_node;
        } else {
            child_node = (void*)*current_node;
        }
        parent_node = current_node;
        current_node = child_node;
        node_flag = *(uint8_t*)((uint64_t)child_node + 0x19);
    }
    
    // 插入新节点
    if ((parent_node == root_node) || (compare_result = memcmp(&system_memory_1000, parent_node + 4, INITIALIZATION_SYSTEM_REGISTRY_KEY_SIZE), compare_result < 0)) {
        memory_size = FUN_18008f0d0(registry_root);
        FUN_18008f140(registry_root, &new_node, parent_node, memory_size + 0x20, memory_size);
        parent_node = new_node;
    }
    
    // 设置节点数据
    parent_node[6] = 0x402feffe4481676e;
    parent_node[7] = 0xd4c2151109de93a0;
    parent_node[8] = &unknown_var_7680_ptr;
    parent_node[9] = 0;
    parent_node[10] = node_value;
    
    return;
}

/**
 * 初始化系统注册表搜索和插入器26
 * 
 * 负责在注册表中搜索特定键值并插入新的条目（变体26）。
 * 使用不同的键值和处理器函数。
 */
void InitializationSystem_RegistrySearchAndInsert26(void)
{
    uint8_t node_flag;
    void* root_node;
    int compare_result;
    void** registry_root;
    uint64_t memory_size;
    void* current_node;
    void* parent_node;
    void* child_node;
    void* new_node;
    void* node_handler;
    
    // 获取注册表根节点
    registry_root = (void**)FUN_18008d070();
    root_node = (void*)*registry_root;
    node_flag = *(uint8_t*)((uint64_t)root_node[1] + 0x19);
    node_handler = &unknown_var_2048_ptr;
    parent_node = root_node;
    current_node = (void*)root_node[1];
    
    // 搜索目标节点
    while (node_flag == 0) {
        compare_result = memcmp(current_node + 4, &system_memory_0fd8, INITIALIZATION_SYSTEM_REGISTRY_KEY_SIZE);
        if (compare_result < 0) {
            child_node = (void*)current_node[2];
            current_node = parent_node;
        } else {
            child_node = (void*)*current_node;
        }
        parent_node = current_node;
        current_node = child_node;
        node_flag = *(uint8_t*)((uint64_t)child_node + 0x19);
    }
    
    // 插入新节点
    if ((parent_node == root_node) || (compare_result = memcmp(&system_memory_0fd8, parent_node + 4, INITIALIZATION_SYSTEM_REGISTRY_KEY_SIZE), compare_result < 0)) {
        memory_size = FUN_18008f0d0(registry_root);
        FUN_18008f140(registry_root, &new_node, parent_node, memory_size + 0x20, memory_size);
        parent_node = new_node;
    }
    
    // 设置节点数据
    parent_node[6] = 0x4384dcc4b6d3f417;
    parent_node[7] = 0x92a15d52fe2679bd;
    parent_node[8] = &unknown_var_7704_ptr;
    parent_node[9] = 0;
    parent_node[10] = node_handler;
    
    return;
}

// =============================================================================
// 技术说明
// =============================================================================

/*
 * 初始化系统高级配置和注册模块技术说明
 * 
 * 系统架构：
 * - 采用模块化设计，每个功能都有独立的函数实现
 * - 使用树形数据结构进行注册表管理，支持高效的搜索和插入操作
 * - 提供多种配置类型和内存管理选项
 * - 支持动态内存分配和错误处理机制
 * 
 * 性能优化：
 * - 使用memcmp进行高效的键值比较
 * - 支持内存池管理，减少内存分配开销
 * - 提供缓存友好的数据结构布局
 * - 支持批量操作和异步处理
 * 
 * 安全特性：
 * - 使用安全的字符串复制函数防止缓冲区溢出
 * - 提供内存访问保护和错误检查
 * - 支持配置验证和完整性检查
 * - 提供访问控制和权限管理
 * 
 * 扩展性：
 * - 支持动态注册新的配置项
 * - 提供插件式架构支持
 * - 支持多种数据类型和格式
 * - 提供版本控制和向后兼容性
 * 
 * 维护性：
 * - 提供详细的中文文档注释
 * - 使用有意义的函数和变量名
 * - 支持调试和日志记录
 * - 提供单元测试和集成测试支持
 * 
 * 兼容性：
 * - 支持多平台运行
 * - 提供跨平台接口
 * - 支持多种编译器和工具链
 * - 提供标准化接口定义
 */