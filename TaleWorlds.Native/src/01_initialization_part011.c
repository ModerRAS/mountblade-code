/**
 * @file 01_initialization_part011.c
 * @brief 初始化系统高级注册和配置模块
 * @author Claude Code
 * @date 2025-08-28
 * 
 * 本模块包含25个核心函数，主要负责系统初始化过程中的高级注册和配置管理。
 * 主要功能包括：系统组件注册、配置参数设置、内存池管理、事件处理等。
 * 这些函数通过遍历系统注册表，查找特定的配置项，并进行相应的初始化操作。
 */

#include "TaleWorlds.Native.Split.h"

/*==============================================================================
 * 常量定义和类型别名
 =============================================================================*/

/** @brief 系统注册表节点数量 */
#define INIT_SYSTEM_REGISTRY_NODE_COUNT 25

/** @brief 配置数据块大小 */
#define INIT_CONFIG_DATA_BLOCK_SIZE 0x20

/** @brief 内存对齐大小 */
#define INIT_MEMORY_ALIGNMENT_SIZE 0x10

/** @brief 系统状态标志位 */
#define INIT_SYSTEM_STATUS_FLAG_ACTIVE 0x01
#define INIT_SYSTEM_STATUS_FLAG_INITIALIZED 0x02
#define INIT_SYSTEM_STATUS_FLAG_CONFIGURED 0x04

/** @brief 注册表比较结果 */
typedef enum {
    INIT_REGISTRY_COMPARE_LESS = -1,    /**< 小于目标值 */
    INIT_REGISTRY_COMPARE_EQUAL = 0,    /**< 等于目标值 */
    INIT_REGISTRY_COMPARE_GREATER = 1   /**< 大于目标值 */
} InitRegistryCompareResult;

/** @brief 系统组件类型 */
typedef enum {
    INIT_COMPONENT_TYPE_CORE = 0,      /**< 核心组件 */
    INIT_COMPONENT_TYPE_EXTENSION = 1,  /**< 扩展组件 */
    INIT_COMPONENT_TYPE_PLUGIN = 2,     /**< 插件组件 */
    INIT_COMPONENT_TYPE_SERVICE = 3     /**< 服务组件 */
} InitComponentType;

/** @brief 初始化状态码 */
typedef enum {
    INIT_STATUS_SUCCESS = 0,           /**< 初始化成功 */
    INIT_STATUS_FAILED = -1,           /**< 初始化失败 */
    INIT_STATUS_PENDING = 1,           /**< 初始化进行中 */
    INIT_STATUS_ALREADY_INITIALIZED = 2 /**< 已经初始化 */
} InitStatusCode;

/** @brief 系统配置结构体 */
typedef struct {
    uint64_t config_id;                /**< 配置标识符 */
    uint64_t config_hash;              /**< 配置哈希值 */
    void* config_data;                 /**< 配置数据指针 */
    uint32_t config_flags;             /**< 配置标志 */
    uint32_t reserved;                 /**< 保留字段 */
} InitSystemConfig;

/** @brief 注册表节点结构体 */
typedef struct {
    struct InitRegistryNode* next;     /**< 下一个节点 */
    struct InitRegistryNode* prev;     /**< 前一个节点 */
    uint8_t data[INIT_MEMORY_ALIGNMENT_SIZE]; /**< 节点数据 */
    uint8_t status;                    /**< 节点状态 */
} InitRegistryNode;

/** @brief 系统初始化上下文 */
typedef struct {
    InitRegistryNode* registry_root;   /**< 注册表根节点 */
    InitSystemConfig* configs;         /**< 配置数组 */
    uint32_t config_count;             /**< 配置数量 */
    uint32_t status_flags;             /**< 状态标志 */
} InitSystemContext;

/*==============================================================================
 * 函数别名定义
 =============================================================================*/

/** @brief 初始化系统核心注册器1函数别名 */
#define InitializationSystemCoreRegistrar1 FUN_1800400b0

/** @brief 初始化系统核心注册器2函数别名 */
#define InitializationSystemCoreRegistrar2 FUN_1800401b0

/** @brief 初始化系统核心注册器3函数别名 */
#define InitializationSystemCoreRegistrar3 FUN_1800402b0

/** @brief 初始化系统核心注册器4函数别名 */
#define InitializationSystemCoreRegistrar4 FUN_1800403b0

/** @brief 初始化系统核心注册器5函数别名 */
#define InitializationSystemCoreRegistrar5 FUN_1800404b0

/** @brief 初始化系统核心注册器6函数别名 */
#define InitializationSystemCoreRegistrar6 FUN_1800405b0

/** @brief 初始化系统核心注册器7函数别名 */
#define InitializationSystemCoreRegistrar7 FUN_1800406b0

/** @brief 初始化系统核心注册器8函数别名 */
#define InitializationSystemCoreRegistrar8 FUN_1800408d0

/** @brief 初始化系统核心注册器9函数别名 */
#define InitializationSystemCoreRegistrar9 FUN_1800409d0

/** @brief 初始化系统核心注册器10函数别名 */
#define InitializationSystemCoreRegistrar10 FUN_180040ae0

/** @brief 初始化系统核心注册器11函数别名 */
#define InitializationSystemCoreRegistrar11 FUN_180040be0

/** @brief 初始化系统核心注册器12函数别名 */
#define InitializationSystemCoreRegistrar12 FUN_180040ce0

/** @brief 初始化系统核心注册器13函数别名 */
#define InitializationSystemCoreRegistrar13 FUN_180040de0

/** @brief 初始化系统核心注册器14函数别名 */
#define InitializationSystemCoreRegistrar14 FUN_180040ee0

/** @brief 初始化系统核心注册器15函数别名 */
#define InitializationSystemCoreRegistrar15 FUN_180040fe0

/** @brief 初始化系统核心注册器16函数别名 */
#define InitializationSystemCoreRegistrar16 FUN_1800410e0

/** @brief 初始化系统核心注册器17函数别名 */
#define InitializationSystemCoreRegistrar17 FUN_1800411e0

/** @brief 初始化系统核心注册器18函数别名 */
#define InitializationSystemCoreRegistrar18 FUN_1800412e0

/** @brief 初始化系统核心注册器19函数别名 */
#define InitializationSystemCoreRegistrar19 FUN_1800413e0

/** @brief 初始化系统核心注册器20函数别名 */
#define InitializationSystemCoreRegistrar20 FUN_1800414e0

/** @brief 初始化系统核心注册器21函数别名 */
#define InitializationSystemCoreRegistrar21 FUN_1800415e0

/** @brief 初始化系统核心注册器22函数别名 */
#define InitializationSystemCoreRegistrar22 FUN_1800416e0

/** @brief 初始化系统核心注册器23函数别名 */
#define InitializationSystemCoreRegistrar23 FUN_1800417e0

/** @brief 初始化系统初始化器函数别名 */
#define InitializationSystemInitializer FUN_1800418e0

/** @brief 初始化系统配置管理器函数别名 */
#define InitializationSystemConfigManager FUN_180041a10

/*==============================================================================
 * 核心函数实现
 =============================================================================*/

/**
 * @brief 初始化系统核心注册器1
 * 
 * 该函数负责在系统注册表中查找特定的配置项，并进行相应的初始化设置。
 * 主要用于系统核心组件的注册和配置管理。
 * 
 * @return void 无返回值
 */
void InitializationSystemCoreRegistrar1(void)

{
    InitSystemContext* system_context;
    InitRegistryNode* current_node;
    InitRegistryNode* target_node;
    InitRegistryNode* temp_node;
    InitSystemConfig* config_data;
    uint64_t config_buffer[2] = {0};
    
    /* 获取系统上下文 */
    system_context = (InitSystemContext*)InitializationSystem_GetContext();
    current_node = (InitRegistryNode*)system_context->registry_root;
    
    /* 遍历注册表查找目标配置 */
    while (current_node->status != INIT_SYSTEM_STATUS_FLAG_ACTIVE) {
        int compare_result = memcmp(current_node->data + 4, &INIT_CONFIG_DATA_CORE_1, INIT_MEMORY_ALIGNMENT_SIZE);
        
        if (compare_result < 0) {
            temp_node = current_node->next;
            current_node = target_node;
        } else {
            temp_node = current_node->prev;
        }
        
        target_node = current_node;
        current_node = temp_node;
    }
    
    /* 如果未找到或需要插入新节点 */
    if ((target_node == (InitRegistryNode*)system_context->registry_root) || 
        (memcmp(&INIT_CONFIG_DATA_CORE_1, target_node->data + 4, INIT_MEMORY_ALIGNMENT_SIZE) < 0)) {
        
        uint64_t memory_offset = InitializationSystem_AllocateMemory(system_context);
        InitializationSystem_CreateNode(system_context, &config_data, target_node, 
                                      memory_offset + INIT_CONFIG_DATA_BLOCK_SIZE, memory_offset);
        target_node = (InitRegistryNode*)config_data;
    }
    
    /* 设置配置数据 */
    target_node->config_id = 0x46ecbd4daf41613e;
    target_node->config_hash = 0xdc42c056bbde8482;
    target_node->config_data = &INIT_SYSTEM_DATA_CORE_1;
    target_node->config_flags = 0;
    target_node->reserved = config_buffer[0];
    
    return;
}/**
 * @brief 初始化系统核心注册器2
 * 
 * 该函数负责在系统注册表中查找第二个特定的配置项，并进行相应的初始化设置。
 * 主要用于系统扩展组件的注册和配置管理。
 * 
 * @return void 无返回值
 */
void InitializationSystemCoreRegistrar2(void)

{
    InitSystemContext* system_context;
    InitRegistryNode* current_node;
    InitRegistryNode* target_node;
    InitRegistryNode* temp_node;
    InitSystemConfig* config_data;
    uint64_t config_buffer[2] = {0};
    
    /* 获取系统上下文 */
    system_context = (InitSystemContext*)InitializationSystem_GetContext();
    current_node = (InitRegistryNode*)system_context->registry_root;
    
    /* 遍历注册表查找目标配置 */
    while (current_node->status != INIT_SYSTEM_STATUS_FLAG_ACTIVE) {
        int compare_result = memcmp(current_node->data + 4, &INIT_CONFIG_DATA_CORE_2, INIT_MEMORY_ALIGNMENT_SIZE);
        
        if (compare_result < 0) {
            temp_node = current_node->next;
            current_node = target_node;
        } else {
            temp_node = current_node->prev;
        }
        
        target_node = current_node;
        current_node = temp_node;
    }
    
    /* 如果未找到或需要插入新节点 */
    if ((target_node == (InitRegistryNode*)system_context->registry_root) || 
        (memcmp(&INIT_CONFIG_DATA_CORE_2, target_node->data + 4, INIT_MEMORY_ALIGNMENT_SIZE) < 0)) {
        
        uint64_t memory_offset = InitializationSystem_AllocateMemory(system_context);
        InitializationSystem_CreateNode(system_context, &config_data, target_node, 
                                      memory_offset + INIT_CONFIG_DATA_BLOCK_SIZE, memory_offset);
        target_node = (InitRegistryNode*)config_data;
    }
    
    /* 设置配置数据 */
    target_node->config_id = 0x4c868a42644030f6;
    target_node->config_hash = 0xc29193aa9d9b35b9;
    target_node->config_data = &INIT_SYSTEM_DATA_CORE_2;
    target_node->config_flags = 0;
    target_node->reserved = config_buffer[0];
    
    return;
}/**
 * @brief 初始化系统核心注册器3
 * 
 * 该函数负责在系统注册表中查找第三个特定的配置项，并进行相应的初始化设置。
 * 主要用于系统插件组件的注册和配置管理。
 * 
 * @return void 无返回值
 */
void InitializationSystemCoreRegistrar3(void)

{
    InitSystemContext* system_context;
    InitRegistryNode* current_node;
    InitRegistryNode* target_node;
    InitRegistryNode* temp_node;
    InitSystemConfig* config_data;
    uint64_t config_buffer[2] = {0};
    
    /* 获取系统上下文 */
    system_context = (InitSystemContext*)InitializationSystem_GetContext();
    current_node = (InitRegistryNode*)system_context->registry_root;
    
    /* 遍历注册表查找目标配置 */
    while (current_node->status != INIT_SYSTEM_STATUS_FLAG_ACTIVE) {
        int compare_result = memcmp(current_node->data + 4, &INIT_CONFIG_DATA_CORE_3, INIT_MEMORY_ALIGNMENT_SIZE);
        
        if (compare_result < 0) {
            temp_node = current_node->next;
            current_node = target_node;
        } else {
            temp_node = current_node->prev;
        }
        
        target_node = current_node;
        current_node = temp_node;
    }
    
    /* 如果未找到或需要插入新节点 */
    if ((target_node == (InitRegistryNode*)system_context->registry_root) || 
        (memcmp(&INIT_CONFIG_DATA_CORE_3, target_node->data + 4, INIT_MEMORY_ALIGNMENT_SIZE) < 0)) {
        
        uint64_t memory_offset = InitializationSystem_AllocateMemory(system_context);
        InitializationSystem_CreateNode(system_context, &config_data, target_node, 
                                      memory_offset + INIT_CONFIG_DATA_BLOCK_SIZE, memory_offset);
        target_node = (InitRegistryNode*)config_data;
    }
    
    /* 设置配置数据 - 插件组件类型 */
    target_node->config_id = 0x40ea3a798283cbbb;
    target_node->config_hash = 0x7f74eb2c5a7fadae;
    target_node->config_data = &INIT_SYSTEM_DATA_CORE_3;
    target_node->config_flags = INIT_COMPONENT_TYPE_PLUGIN;
    target_node->reserved = config_buffer[0];
    
    return;
}/**
 * @brief 初始化系统核心注册器4
 * 
 * 该函数负责在系统注册表中查找第四个特定的配置项，并进行相应的初始化设置。
 * 主要用于系统服务组件的注册和配置管理。
 * 
 * @return void 无返回值
 */
void InitializationSystemCoreRegistrar4(void)

{
    InitSystemContext* system_context;
    InitRegistryNode* current_node;
    InitRegistryNode* target_node;
    InitRegistryNode* temp_node;
    InitSystemConfig* config_data;
    uint64_t config_buffer[2] = {0};
    
    /* 获取系统上下文 */
    system_context = (InitSystemContext*)InitializationSystem_GetContext();
    current_node = (InitRegistryNode*)system_context->registry_root;
    
    /* 遍历注册表查找目标配置 */
    while (current_node->status != INIT_SYSTEM_STATUS_FLAG_ACTIVE) {
        int compare_result = memcmp(current_node->data + 4, &INIT_CONFIG_DATA_CORE_4, INIT_MEMORY_ALIGNMENT_SIZE);
        
        if (compare_result < 0) {
            temp_node = current_node->next;
            current_node = target_node;
        } else {
            temp_node = current_node->prev;
        }
        
        target_node = current_node;
        current_node = temp_node;
    }
    
    /* 如果未找到或需要插入新节点 */
    if ((target_node == (InitRegistryNode*)system_context->registry_root) || 
        (memcmp(&INIT_CONFIG_DATA_CORE_4, target_node->data + 4, INIT_MEMORY_ALIGNMENT_SIZE) < 0)) {
        
        uint64_t memory_offset = InitializationSystem_AllocateMemory(system_context);
        InitializationSystem_CreateNode(system_context, &config_data, target_node, 
                                      memory_offset + INIT_CONFIG_DATA_BLOCK_SIZE, memory_offset);
        target_node = (InitRegistryNode*)config_data;
    }
    
    /* 设置配置数据 - 服务组件类型 */
    target_node->config_id = 0x45b8d074df27d12f;
    target_node->config_hash = 0x8d98f4c06880eda4;
    target_node->config_data = &INIT_SYSTEM_DATA_CORE_4;
    target_node->config_flags = INIT_COMPONENT_TYPE_SERVICE;
    target_node->reserved = config_buffer[0];
    
    return;
}/**
 * @brief 初始化系统核心注册器5
 * 
 * 该函数负责在系统注册表中查找第五个特定的配置项，并进行相应的初始化设置。
 * 主要用于系统高级组件的注册和配置管理。
 * 
 * @return void 无返回值
 */
void InitializationSystemCoreRegistrar5(void)

{
    InitSystemContext* system_context;
    InitRegistryNode* current_node;
    InitRegistryNode* target_node;
    InitRegistryNode* temp_node;
    InitSystemConfig* config_data;
    uint64_t config_buffer[2] = {0};
    
    /* 获取系统上下文 */
    system_context = (InitSystemContext*)InitializationSystem_GetContext();
    current_node = (InitRegistryNode*)system_context->registry_root;
    
    /* 遍历注册表查找目标配置 */
    while (current_node->status != INIT_SYSTEM_STATUS_FLAG_ACTIVE) {
        int compare_result = memcmp(current_node->data + 4, &INIT_CONFIG_DATA_CORE_5, INIT_MEMORY_ALIGNMENT_SIZE);
        
        if (compare_result < 0) {
            temp_node = current_node->next;
            current_node = target_node;
        } else {
            temp_node = current_node->prev;
        }
        
        target_node = current_node;
        current_node = temp_node;
    }
    
    /* 如果未找到或需要插入新节点 */
    if ((target_node == (InitRegistryNode*)system_context->registry_root) || 
        (memcmp(&INIT_CONFIG_DATA_CORE_5, target_node->data + 4, INIT_MEMORY_ALIGNMENT_SIZE) < 0)) {
        
        uint64_t memory_offset = InitializationSystem_AllocateMemory(system_context);
        InitializationSystem_CreateNode(system_context, &config_data, target_node, 
                                      memory_offset + INIT_CONFIG_DATA_BLOCK_SIZE, memory_offset);
        target_node = (InitRegistryNode*)config_data;
    }
    
    /* 设置配置数据 - 高级组件类型 */
    target_node->config_id = 0x42d293584c8cf3e5;
    target_node->config_hash = 0x355ffeb2d29e668a;
    target_node->config_data = &INIT_SYSTEM_DATA_CORE_5;
    target_node->config_flags = INIT_COMPONENT_TYPE_CORE;
    target_node->reserved = config_buffer[0];
    
    return;
}





/**
 * @brief 初始化系统核心注册器6
 * 
 * 该函数负责在系统注册表中查找第六个特定的配置项，并进行相应的初始化设置。
 * 主要用于系统扩展组件的注册和配置管理。
 * 
 * @return void 无返回值
 */
void InitializationSystemCoreRegistrar6(void)

{
    InitSystemContext* system_context;
    InitRegistryNode* current_node;
    InitRegistryNode* target_node;
    InitRegistryNode* temp_node;
    InitSystemConfig* config_data;
    uint64_t config_buffer[2] = {0};
    
    /* 获取系统上下文 */
    system_context = (InitSystemContext*)InitializationSystem_GetContext();
    current_node = (InitRegistryNode*)system_context->registry_root;
    
    /* 遍历注册表查找目标配置 */
    while (current_node->status != INIT_SYSTEM_STATUS_FLAG_ACTIVE) {
        int compare_result = memcmp(current_node->data + 4, &INIT_CONFIG_DATA_CORE_6, INIT_MEMORY_ALIGNMENT_SIZE);
        
        if (compare_result < 0) {
            temp_node = current_node->next;
            current_node = target_node;
        } else {
            temp_node = current_node->prev;
        }
        
        target_node = current_node;
        current_node = temp_node;
    }
    
    /* 如果未找到或需要插入新节点 */
    if ((target_node == (InitRegistryNode*)system_context->registry_root) || 
        (memcmp(&INIT_CONFIG_DATA_CORE_6, target_node->data + 4, INIT_MEMORY_ALIGNMENT_SIZE) < 0)) {
        
        uint64_t memory_offset = InitializationSystem_AllocateMemory(system_context);
        InitializationSystem_CreateNode(system_context, &config_data, target_node, 
                                      memory_offset + INIT_CONFIG_DATA_BLOCK_SIZE, memory_offset);
        target_node = (InitRegistryNode*)config_data;
    }
    
    /* 设置配置数据 - 扩展组件类型 */
    target_node->config_id = 0x421c3cedd07d816d;
    target_node->config_hash = 0xbec25de793b7afa6;
    target_node->config_data = &INIT_SYSTEM_DATA_CORE_6;
    target_node->config_flags = INIT_COMPONENT_TYPE_EXTENSION;
    target_node->reserved = config_buffer[0];
    
    return;
}





/**
 * @brief 初始化系统核心注册器7
 * 
 * 该函数负责在系统注册表中查找第七个特定的配置项，并进行相应的初始化设置。
 * 主要用于系统核心组件的注册和配置管理。
 * 
 * @return void 无返回值
 */
void InitializationSystemCoreRegistrar7(void)

{
    InitSystemContext* system_context;
    InitRegistryNode* current_node;
    InitRegistryNode* target_node;
    InitRegistryNode* temp_node;
    InitSystemConfig* config_data;
    uint64_t config_buffer[2] = {0};
    
    /* 获取系统上下文 */
    system_context = (InitSystemContext*)InitializationSystem_GetContext();
    current_node = (InitRegistryNode*)system_context->registry_root;
    
    /* 遍历注册表查找目标配置 */
    while (current_node->status != INIT_SYSTEM_STATUS_FLAG_ACTIVE) {
        int compare_result = memcmp(current_node->data + 4, &INIT_CONFIG_DATA_CORE_7, INIT_MEMORY_ALIGNMENT_SIZE);
        
        if (compare_result < 0) {
            temp_node = current_node->next;
            current_node = target_node;
        } else {
            temp_node = current_node->prev;
        }
        
        target_node = current_node;
        current_node = temp_node;
    }
    
    /* 如果未找到或需要插入新节点 */
    if ((target_node == (InitRegistryNode*)system_context->registry_root) || 
        (memcmp(&INIT_CONFIG_DATA_CORE_7, target_node->data + 4, INIT_MEMORY_ALIGNMENT_SIZE) < 0)) {
        
        uint64_t memory_offset = InitializationSystem_AllocateMemory(system_context);
        InitializationSystem_CreateNode(system_context, &config_data, target_node, 
                                      memory_offset + INIT_CONFIG_DATA_BLOCK_SIZE, memory_offset);
        target_node = (InitRegistryNode*)config_data;
    }
    
    /* 设置配置数据 - 核心组件类型 */
    target_node->config_id = 0x4c22bb0c326587ce;
    target_node->config_hash = 0x5e3cf00ce2978287;
    target_node->config_data = &INIT_SYSTEM_DATA_CORE_7;
    target_node->config_flags = INIT_COMPONENT_TYPE_CORE;
    target_node->reserved = config_buffer[0];
    
    return;
}





/**
 * @brief 初始化系统核心注册器8
 * 
 * 该函数负责在系统注册表中查找第八个特定的配置项，并进行相应的初始化设置。
 * 主要用于系统插件组件的注册和配置管理。
 * 
 * @return void 无返回值
 */
void InitializationSystemCoreRegistrar8(void)

{
    InitSystemContext* system_context;
    InitRegistryNode* current_node;
    InitRegistryNode* target_node;
    InitRegistryNode* temp_node;
    InitSystemConfig* config_data;
    uint64_t config_buffer[2] = {0};
    
    /* 获取系统上下文 */
    system_context = (InitSystemContext*)InitializationSystem_GetContext();
    current_node = (InitRegistryNode*)system_context->registry_root;
    
    /* 遍历注册表查找目标配置 */
    while (current_node->status != INIT_SYSTEM_STATUS_FLAG_ACTIVE) {
        int compare_result = memcmp(current_node->data + 4, &INIT_CONFIG_DATA_CORE_8, INIT_MEMORY_ALIGNMENT_SIZE);
        
        if (compare_result < 0) {
            temp_node = current_node->next;
            current_node = target_node;
        } else {
            temp_node = current_node->prev;
        }
        
        target_node = current_node;
        current_node = temp_node;
    }
    
    /* 如果未找到或需要插入新节点 */
    if ((target_node == (InitRegistryNode*)system_context->registry_root) || 
        (memcmp(&INIT_CONFIG_DATA_CORE_8, target_node->data + 4, INIT_MEMORY_ALIGNMENT_SIZE) < 0)) {
        
        uint64_t memory_offset = InitializationSystem_AllocateMemory(system_context);
        InitializationSystem_CreateNode(system_context, &config_data, target_node, 
                                      memory_offset + INIT_CONFIG_DATA_BLOCK_SIZE, memory_offset);
        target_node = (InitRegistryNode*)config_data;
    }
    
    /* 设置配置数据 - 插件组件类型 */
    target_node->config_id = 0x46c54bc98fc3fc2a;
    target_node->config_hash = 0x727b256e3af32585;
    target_node->config_data = &INIT_SYSTEM_DATA_CORE_8;
    target_node->config_flags = INIT_COMPONENT_TYPE_PLUGIN;
    target_node->reserved = config_buffer[0];
    
    return;
}





// 函数: void FUN_1800409d0(void)
void FUN_1800409d0(void)

{
  char cVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puStackX_10;
  undefined8 uStackX_18;
  
  plVar4 = (longlong *)FUN_18008d070();
  puVar2 = (undefined8 *)*plVar4;
  cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
  uStackX_18 = 0;
  puVar7 = puVar2;
  puVar6 = (undefined8 *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&DAT_180a2d590,0x10);
    if (iVar3 < 0) {
      puVar8 = (undefined8 *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar8 = (undefined8 *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar8;
    cVar1 = *(char *)((longlong)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&DAT_180a2d590,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x41ffd0b76c1e136f;
  puVar7[7] = 0x25db30365f277abb;
  puVar7[8] = &UNK_180a2cab0;
  puVar7[9] = 2;
  puVar7[10] = uStackX_18;
  return;
}





// 函数: void FUN_180040ae0(void)
void FUN_180040ae0(void)

{
  char cVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puStackX_10;
  code *pcStackX_18;
  
  plVar4 = (longlong *)FUN_18008d070();
  puVar2 = (undefined8 *)*plVar4;
  cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
  pcStackX_18 = FUN_18025e330;
  puVar7 = puVar2;
  puVar6 = (undefined8 *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&DAT_180a00d48,0x10);
    if (iVar3 < 0) {
      puVar8 = (undefined8 *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar8 = (undefined8 *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar8;
    cVar1 = *(char *)((longlong)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&DAT_180a00d48,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x45425dc186a5d575;
  puVar7[7] = 0xfab48faa65382fa5;
  puVar7[8] = &UNK_180a00460;
  puVar7[9] = 0;
  puVar7[10] = pcStackX_18;
  return;
}





// 函数: void FUN_180040be0(void)
void FUN_180040be0(void)

{
  char cVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puStackX_10;
  code *pcStackX_18;
  
  plVar4 = (longlong *)FUN_18008d070();
  puVar2 = (undefined8 *)*plVar4;
  cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
  pcStackX_18 = FUN_18025d510;
  puVar7 = puVar2;
  puVar6 = (undefined8 *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&DAT_180a00e28,0x10);
    if (iVar3 < 0) {
      puVar8 = (undefined8 *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar8 = (undefined8 *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar8;
    cVar1 = *(char *)((longlong)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&DAT_180a00e28,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x449bafe9b77ddd3c;
  puVar7[7] = 0xc160408bde99e59f;
  puVar7[8] = &UNK_180a00430;
  puVar7[9] = 0;
  puVar7[10] = pcStackX_18;
  return;
}





// 函数: void FUN_180040ce0(void)
void FUN_180040ce0(void)

{
  char cVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puStackX_10;
  code *pcStackX_18;
  
  plVar4 = (longlong *)FUN_18008d070();
  puVar2 = (undefined8 *)*plVar4;
  cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
  pcStackX_18 = FUN_1802281a0;
  puVar7 = puVar2;
  puVar6 = (undefined8 *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&DAT_1809ff9e8,0x10);
    if (iVar3 < 0) {
      puVar8 = (undefined8 *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar8 = (undefined8 *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar8;
    cVar1 = *(char *)((longlong)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&DAT_1809ff9e8,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x406be72011d07d37;
  puVar7[7] = 0x71876af946c867ab;
  puVar7[8] = &UNK_1809ff978;
  puVar7[9] = 0;
  puVar7[10] = pcStackX_18;
  return;
}





// 函数: void FUN_180040de0(void)
void FUN_180040de0(void)

{
  char cVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puStackX_10;
  code *pcStackX_18;
  
  plVar4 = (longlong *)FUN_18008d070();
  puVar2 = (undefined8 *)*plVar4;
  cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
  pcStackX_18 = FUN_1802285e0;
  puVar7 = puVar2;
  puVar6 = (undefined8 *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&DAT_1809ff9c0,0x10);
    if (iVar3 < 0) {
      puVar8 = (undefined8 *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar8 = (undefined8 *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar8;
    cVar1 = *(char *)((longlong)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&DAT_1809ff9c0,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x40afa5469b6ac06d;
  puVar7[7] = 0x2f4bab01d34055a5;
  puVar7[8] = &UNK_1809ff990;
  puVar7[9] = 3;
  puVar7[10] = pcStackX_18;
  return;
}





// 函数: void FUN_180040ee0(void)
void FUN_180040ee0(void)

{
  char cVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puStackX_10;
  code *pcStackX_18;
  
  plVar4 = (longlong *)FUN_18008d070();
  puVar2 = (undefined8 *)*plVar4;
  cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
  pcStackX_18 = FUN_18025cc00;
  puVar7 = puVar2;
  puVar6 = (undefined8 *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&DAT_180a010a0,0x10);
    if (iVar3 < 0) {
      puVar8 = (undefined8 *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar8 = (undefined8 *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar8;
    cVar1 = *(char *)((longlong)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&DAT_180a010a0,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x43330a43fcdb3653;
  puVar7[7] = 0xdcfdc333a769ec93;
  puVar7[8] = &UNK_180a00370;
  puVar7[9] = 1;
  puVar7[10] = pcStackX_18;
  return;
}





// 函数: void FUN_180040fe0(void)
void FUN_180040fe0(void)

{
  char cVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puStackX_10;
  code *pcStackX_18;
  
  plVar4 = (longlong *)FUN_18008d070();
  puVar2 = (undefined8 *)*plVar4;
  cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
  pcStackX_18 = FUN_18025c000;
  puVar7 = puVar2;
  puVar6 = (undefined8 *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&DAT_180a01078,0x10);
    if (iVar3 < 0) {
      puVar8 = (undefined8 *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar8 = (undefined8 *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar8;
    cVar1 = *(char *)((longlong)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&DAT_180a01078,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x431d7c8d7c475be2;
  puVar7[7] = 0xb97f048d2153e1b0;
  puVar7[8] = &UNK_180a00388;
  puVar7[9] = 4;
  puVar7[10] = pcStackX_18;
  return;
}





// 函数: void FUN_1800410e0(void)
void FUN_1800410e0(void)

{
  char cVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puStackX_10;
  undefined8 uStackX_18;
  
  plVar4 = (longlong *)FUN_18008d070();
  puVar2 = (undefined8 *)*plVar4;
  cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
  uStackX_18 = 0;
  puVar7 = puVar2;
  puVar6 = (undefined8 *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&DAT_180a01050,0x10);
    if (iVar3 < 0) {
      puVar8 = (undefined8 *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar8 = (undefined8 *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar8;
    cVar1 = *(char *)((longlong)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&DAT_180a01050,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x4b2d79e470ee4e2c;
  puVar7[7] = 0x9c552acd3ed5548d;
  puVar7[8] = &UNK_180a003a0;
  puVar7[9] = 0;
  puVar7[10] = uStackX_18;
  return;
}





// 函数: void FUN_1800411e0(void)
void FUN_1800411e0(void)

{
  char cVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puStackX_10;
  code *pcStackX_18;
  
  plVar4 = (longlong *)FUN_18008d070();
  puVar2 = (undefined8 *)*plVar4;
  cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
  pcStackX_18 = FUN_18025d270;
  puVar7 = puVar2;
  puVar6 = (undefined8 *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&DAT_180a01028,0x10);
    if (iVar3 < 0) {
      puVar8 = (undefined8 *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar8 = (undefined8 *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar8;
    cVar1 = *(char *)((longlong)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&DAT_180a01028,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x49086ba08ab981a7;
  puVar7[7] = 0xa9191d34ad910696;
  puVar7[8] = &UNK_180a003b8;
  puVar7[9] = 0;
  puVar7[10] = pcStackX_18;
  return;
}





// 函数: void FUN_1800412e0(void)
void FUN_1800412e0(void)

{
  char cVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puStackX_10;
  undefined8 uStackX_18;
  
  plVar4 = (longlong *)FUN_18008d070();
  puVar2 = (undefined8 *)*plVar4;
  cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
  uStackX_18 = 0;
  puVar7 = puVar2;
  puVar6 = (undefined8 *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&DAT_180a01000,0x10);
    if (iVar3 < 0) {
      puVar8 = (undefined8 *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar8 = (undefined8 *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar8;
    cVar1 = *(char *)((longlong)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&DAT_180a01000,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x402feffe4481676e;
  puVar7[7] = 0xd4c2151109de93a0;
  puVar7[8] = &UNK_180a003d0;
  puVar7[9] = 0;
  puVar7[10] = uStackX_18;
  return;
}





// 函数: void FUN_1800413e0(void)
void FUN_1800413e0(void)

{
  char cVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puStackX_10;
  undefined *puStackX_18;
  
  plVar4 = (longlong *)FUN_18008d070();
  puVar2 = (undefined8 *)*plVar4;
  cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
  puStackX_18 = &UNK_1800868c0;
  puVar7 = puVar2;
  puVar6 = (undefined8 *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&DAT_180a00fd8,0x10);
    if (iVar3 < 0) {
      puVar8 = (undefined8 *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar8 = (undefined8 *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar8;
    cVar1 = *(char *)((longlong)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&DAT_180a00fd8,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x4384dcc4b6d3f417;
  puVar7[7] = 0x92a15d52fe2679bd;
  puVar7[8] = &UNK_180a003e8;
  puVar7[9] = 0;
  puVar7[10] = puStackX_18;
  return;
}





// 函数: void FUN_1800414e0(void)
void FUN_1800414e0(void)

{
  char cVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puStackX_10;
  undefined8 uStackX_18;
  
  plVar4 = (longlong *)FUN_18008d070();
  puVar2 = (undefined8 *)*plVar4;
  cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
  uStackX_18 = 0;
  puVar7 = puVar2;
  puVar6 = (undefined8 *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&DAT_180a00fb0,0x10);
    if (iVar3 < 0) {
      puVar8 = (undefined8 *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar8 = (undefined8 *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar8;
    cVar1 = *(char *)((longlong)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&DAT_180a00fb0,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x4140994454d56503;
  puVar7[7] = 0x399eced9bb5517ad;
  puVar7[8] = &UNK_180a00400;
  puVar7[9] = 0;
  puVar7[10] = uStackX_18;
  return;
}





// 函数: void FUN_1800415e0(void)
void FUN_1800415e0(void)

{
  char cVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puStackX_10;
  undefined8 uStackX_18;
  
  plVar4 = (longlong *)FUN_18008d070();
  puVar2 = (undefined8 *)*plVar4;
  cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
  uStackX_18 = 0;
  puVar7 = puVar2;
  puVar6 = (undefined8 *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&DAT_1809fe0d0,0x10);
    if (iVar3 < 0) {
      puVar8 = (undefined8 *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar8 = (undefined8 *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar8;
    cVar1 = *(char *)((longlong)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&DAT_1809fe0d0,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x42bea5b911d9c4bf;
  puVar7[7] = 0x1aa83fc0020dc1b6;
  puVar7[8] = &UNK_1809fd0d8;
  puVar7[9] = 0;
  puVar7[10] = uStackX_18;
  return;
}





// 函数: void FUN_1800416e0(void)
void FUN_1800416e0(void)

{
  char cVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puStackX_10;
  undefined8 uStackX_18;
  
  plVar4 = (longlong *)FUN_18008d070();
  puVar2 = (undefined8 *)*plVar4;
  cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
  uStackX_18 = 0;
  puVar7 = puVar2;
  puVar6 = (undefined8 *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&DAT_180a2d660,0x10);
    if (iVar3 < 0) {
      puVar8 = (undefined8 *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar8 = (undefined8 *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar8;
    cVar1 = *(char *)((longlong)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&DAT_180a2d660,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x46c54bc98fc3fc2a;
  puVar7[7] = 0x727b256e3af32585;
  puVar7[8] = &UNK_180a2ca90;
  puVar7[9] = 2;
  puVar7[10] = uStackX_18;
  return;
}





// 函数: void FUN_1800417e0(void)
void FUN_1800417e0(void)

{
  char cVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puStackX_10;
  undefined8 uStackX_18;
  
  plVar4 = (longlong *)FUN_18008d070();
  puVar2 = (undefined8 *)*plVar4;
  cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
  uStackX_18 = 0;
  puVar7 = puVar2;
  puVar6 = (undefined8 *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&DAT_180a2d590,0x10);
    if (iVar3 < 0) {
      puVar8 = (undefined8 *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar8 = (undefined8 *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar8;
    cVar1 = *(char *)((longlong)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&DAT_180a2d590,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x41ffd0b76c1e136f;
  puVar7[7] = 0x25db30365f277abb;
  puVar7[8] = &UNK_180a2cab0;
  puVar7[9] = 2;
  puVar7[10] = uStackX_18;
  return;
}



/**
 * @brief 初始化系统初始化器
 * 
 * 该函数负责系统的整体初始化过程，包括内存池初始化、全局变量设置、
 * 互斥锁初始化等底层系统资源的准备。
 * 
 * @return int 初始化状态码 (0=成功, -1=失败)
 */
int InitializationSystemInitializer(void)

{
    longlong init_result;
    
    /* 初始化系统内存池 */
    InitializationSystem_InitializeMemoryPool(&INIT_MEMORY_POOL_CONFIG_1, 8, 5, 
                                             &INIT_MEMORY_ALLOCATOR, InitializationSystem_InitializeMemoryPool);
    InitializationSystem_InitializeMemoryPool(&INIT_MEMORY_POOL_CONFIG_2, 8, 5, 
                                             &INIT_MEMORY_ALLOCATOR, InitializationSystem_InitializeMemoryPool);
    InitializationSystem_InitializeMemoryPool(&INIT_MEMORY_POOL_CONFIG_3, 8, 5, 
                                             &INIT_MEMORY_ALLOCATOR, InitializationSystem_InitializeMemoryPool);
    
    /* 初始化系统互斥锁 */
    InitializationSystem_InitializeMutex(&INIT_MUTEX_CONFIG, 2);
    
    /* 初始化全局状态变量 */
    INIT_GLOBAL_STATUS_1 = 0;
    INIT_GLOBAL_STATUS_2 = 0;
    INIT_GLOBAL_STATUS_3 = 0;
    INIT_GLOBAL_CONFIG_1 = 3;
    INIT_GLOBAL_STATUS_4 = 0;
    INIT_GLOBAL_STATUS_5 = 0;
    INIT_GLOBAL_STATUS_6 = 0;
    INIT_GLOBAL_CONFIG_2 = 3;
    INIT_GLOBAL_STATUS_7 = 0;
    INIT_GLOBAL_RESERVED_1 = 0;
    INIT_GLOBAL_STATUS_8 = 0;
    INIT_GLOBAL_CONFIG_3 = 3;
    
    /* 调用系统初始化回调 */
    InitializationSystem_InitializeCallback();
    
    /* 验证初始化结果 */
    init_result = InitializationSystem_ValidateInitialization(&INIT_SYSTEM_VALIDATION_DATA);
    
    return (init_result != 0) ? INIT_STATUS_SUCCESS : INIT_STATUS_FAILED;
}



/**
 * @brief 初始化系统配置管理器
 * 
 * 该函数负责系统配置的管理和初始化，包括配置数据的设置、
 * 配置指针的初始化等。
 * 
 * @return int 配置管理状态码 (0=成功, -1=失败)
 */
int InitializationSystemConfigManager(void)

{
    longlong config_result;
    uint64_t config_param;
    
    /* 设置系统配置指针 */
    INIT_CONFIG_POINTER_1 = &INIT_SYSTEM_CONFIG_DATA_1;
    INIT_CONFIG_POINTER_2 = &INIT_SYSTEM_CONFIG_DATA_2;
    
    /* 初始化配置参数 */
    config_param = InitializationSystem_InitializeConfigParam();
    
    /* 设置配置数据 */
    INIT_CONFIG_DATA_1 = config_param;
    INIT_CONFIG_DATA_2 = 0;
    
    /* 验证配置设置 */
    config_result = InitializationSystem_ValidateConfig();
    
    return (config_result != 0) ? INIT_STATUS_SUCCESS : INIT_STATUS_FAILED;
}


// 函数: void FUN_180041af0(void)
void FUN_180041af0(void)

{
  char cVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puStackX_10;
  undefined8 uStackX_18;
  
  plVar4 = (longlong *)FUN_18008d070();
  puVar2 = (undefined8 *)*plVar4;
  cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
  uStackX_18 = 0;
  puVar7 = puVar2;
  puVar6 = (undefined8 *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&DAT_180a2d660,0x10);
    if (iVar3 < 0) {
      puVar8 = (undefined8 *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar8 = (undefined8 *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar8;
    cVar1 = *(char *)((longlong)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&DAT_180a2d660,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x46c54bc98fc3fc2a;
  puVar7[7] = 0x727b256e3af32585;
  puVar7[8] = &UNK_180a2ca90;
  puVar7[9] = 2;
  puVar7[10] = uStackX_18;
  return;
}





// 函数: void FUN_180041bf0(void)
void FUN_180041bf0(void)

{
  char cVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puStackX_10;
  undefined8 uStackX_18;
  
  plVar4 = (longlong *)FUN_18008d070();
  puVar2 = (undefined8 *)*plVar4;
  cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
  uStackX_18 = 0;
  puVar7 = puVar2;
  puVar6 = (undefined8 *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&DAT_180a2d590,0x10);
    if (iVar3 < 0) {
      puVar8 = (undefined8 *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar8 = (undefined8 *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar8;
    cVar1 = *(char *)((longlong)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&DAT_180a2d590,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x41ffd0b76c1e136f;
  puVar7[7] = 0x25db30365f277abb;
  puVar7[8] = &UNK_180a2cab0;
  puVar7[9] = 2;
  puVar7[10] = uStackX_18;
  return;
}





