#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part004.c - 核心引擎数据结构初始化模块
// 本模块包含26个数据结构初始化函数，用于注册各种引擎组件

/**
 * 注册基础场景组件
 * 在全局组件注册表中注册场景基础组件，包括组件ID、处理函数和相关信息
 * 
 * 功能说明：
 * 1. 获取全局组件管理器
 * 2. 在组件树中查找合适的插入位置
 * 3. 创建新的组件节点
 * 4. 设置组件的属性和回调函数
 * 
 * 组件属性：
 * - 组件类型ID: 0x40afa5469b6ac06d
 * - 组件版本ID: 0x2f4bab01d34055a5
 * - 组件名称: UNK_1809ff990
 * - 优先级: 3
 * - 处理函数: FUN_1802285e0
 */
void 注册基础场景组件(void)
{
    char node_is_valid;
    uint64_t *component_manager;
    uint64_t *root_node;
    uint64_t *current_node;
    uint64_t *parent_node;
    uint64_t *next_node;
    uint64_t *new_node;
    void (*component_handler)(void);
    
    // 获取全局组件管理器
    component_manager = (uint64_t *)FUN_18008d070();
    root_node = (uint64_t *)*component_manager;
    
    // 检查根节点是否有效
    node_is_valid = *(char *)((uint64_t)root_node[1] + 0x19);
    component_handler = FUN_1802285e0;
    parent_node = root_node;
    current_node = (uint64_t *)root_node[1];
    
    // 在组件树中遍历寻找合适的插入位置
    while (node_is_valid == '\0') {
        int compare_result = memcmp(current_node + 4, &COMPONENT_SIGNATURE_BASE_SCENE, 0x10);
        if (compare_result < 0) {
            // 向左子树移动
            next_node = (uint64_t *)current_node[2];
            current_node = parent_node;
        } else {
            // 向右子树移动
            next_node = (uint64_t *)*current_node;
        }
        parent_node = current_node;
        current_node = next_node;
        node_is_valid = *(char *)((uint64_t)next_node + 0x19);
    }
    
    // 如果需要创建新节点
    if ((parent_node == root_node) || 
        (int compare_result = memcmp(&COMPONENT_SIGNATURE_BASE_SCENE, parent_node + 4, 0x10), compare_result < 0)) {
        uint64_t allocation_size = FUN_18008f0d0(component_manager);
        FUN_18008f140(component_manager, &new_node, parent_node, allocation_size + 0x20, allocation_size);
        parent_node = new_node;
    }
    
    // 设置组件属性
    parent_node[6] = COMPONENT_TYPE_BASE_SCENE;      // 组件类型ID
    parent_node[7] = COMPONENT_VERSION_BASE_SCENE;   // 组件版本ID
    parent_node[8] = &COMPONENT_NAME_BASE_SCENE;    // 组件名称
    parent_node[9] = COMPONENT_PRIORITY_BASE_SCENE; // 组件优先级
    parent_node[10] = (uint64_t)component_handler;  // 组件处理函数
    
    return;
}

/**
 * 注册渲染组件
 * 在全局组件注册表中注册渲染组件，负责图形渲染相关功能
 * 
 * 组件属性：
 * - 组件类型ID: 0x43330a43fcdb3653
 * - 组件版本ID: 0xdcfdc333a769ec93
 * - 组件名称: UNK_180a00370
 * - 优先级: 1
 * - 处理函数: FUN_18025cc00
 */
void 注册渲染组件(void)
{
    char node_is_valid;
    uint64_t *component_manager;
    uint64_t *root_node;
    uint64_t *current_node;
    uint64_t *parent_node;
    uint64_t *next_node;
    uint64_t *new_node;
    void (*component_handler)(void);
    
    component_manager = (uint64_t *)FUN_18008d070();
    root_node = (uint64_t *)*component_manager;
    node_is_valid = *(char *)((uint64_t)root_node[1] + 0x19);
    component_handler = FUN_18025cc00;
    parent_node = root_node;
    current_node = (uint64_t *)root_node[1];
    
    while (node_is_valid == '\0') {
        int compare_result = memcmp(current_node + 4, &COMPONENT_SIGNATURE_RENDER, 0x10);
        if (compare_result < 0) {
            next_node = (uint64_t *)current_node[2];
            current_node = parent_node;
        } else {
            next_node = (uint64_t *)*current_node;
        }
        parent_node = current_node;
        current_node = next_node;
        node_is_valid = *(char *)((uint64_t)next_node + 0x19);
    }
    
    if ((parent_node == root_node) || 
        (int compare_result = memcmp(&COMPONENT_SIGNATURE_RENDER, parent_node + 4, 0x10), compare_result < 0)) {
        uint64_t allocation_size = FUN_18008f0d0(component_manager);
        FUN_18008f140(component_manager, &new_node, parent_node, allocation_size + 0x20, allocation_size);
        parent_node = new_node;
    }
    
    parent_node[6] = COMPONENT_TYPE_RENDER;      // 渲染组件类型ID
    parent_node[7] = COMPONENT_VERSION_RENDER;   // 渲染组件版本ID
    parent_node[8] = &COMPONENT_NAME_RENDER;      // 渲染组件名称
    parent_node[9] = COMPONENT_PRIORITY_RENDER;   // 渲染组件优先级
    parent_node[10] = (uint64_t)component_handler; // 渲染组件处理函数
    
    return;
}

/**
 * 注册物理组件
 * 在全局组件注册表中注册物理组件，负责物理模拟相关功能
 * 
 * 组件属性：
 * - 组件类型ID: 0x431d7c8d7c475be2
 * - 组件版本ID: 0xb97f048d2153e1b0
 * - 组件名称: UNK_180a00388
 * - 优先级: 4
 * - 处理函数: FUN_18025c000
 */
void 注册物理组件(void)
{
    char node_is_valid;
    uint64_t *component_manager;
    uint64_t *root_node;
    uint64_t *current_node;
    uint64_t *parent_node;
    uint64_t *next_node;
    uint64_t *new_node;
    void (*component_handler)(void);
    
    component_manager = (uint64_t *)FUN_18008d070();
    root_node = (uint64_t *)*component_manager;
    node_is_valid = *(char *)((uint64_t)root_node[1] + 0x19);
    component_handler = FUN_18025c000;
    parent_node = root_node;
    current_node = (uint64_t *)root_node[1];
    
    while (node_is_valid == '\0') {
        int compare_result = memcmp(current_node + 4, &COMPONENT_SIGNATURE_PHYSICS, 0x10);
        if (compare_result < 0) {
            next_node = (uint64_t *)current_node[2];
            current_node = parent_node;
        } else {
            next_node = (uint64_t *)*current_node;
        }
        parent_node = current_node;
        current_node = next_node;
        node_is_valid = *(char *)((uint64_t)next_node + 0x19);
    }
    
    if ((parent_node == root_node) || 
        (int compare_result = memcmp(&COMPONENT_SIGNATURE_PHYSICS, parent_node + 4, 0x10), compare_result < 0)) {
        uint64_t allocation_size = FUN_18008f0d0(component_manager);
        FUN_18008f140(component_manager, &new_node, parent_node, allocation_size + 0x20, allocation_size);
        parent_node = new_node;
    }
    
    parent_node[6] = COMPONENT_TYPE_PHYSICS;      // 物理组件类型ID
    parent_node[7] = COMPONENT_VERSION_PHYSICS;   // 物理组件版本ID
    parent_node[8] = &COMPONENT_NAME_PHYSICS;      // 物理组件名称
    parent_node[9] = COMPONENT_PRIORITY_PHYSICS;  // 物理组件优先级
    parent_node[10] = (uint64_t)component_handler; // 物理组件处理函数
    
    return;
}

/**
 * 注册音频组件
 * 在全局组件注册表中注册音频组件，负责音频处理相关功能
 * 
 * 组件属性：
 * - 组件类型ID: 0x4b2d79e470ee4e2c
 * - 组件版本ID: 0x9c552acd3ed5548d
 * - 组件名称: UNK_180a003a0
 * - 优先级: 0
 * - 处理函数: NULL
 */
void 注册音频组件(void)
{
    char node_is_valid;
    uint64_t *component_manager;
    uint64_t *root_node;
    uint64_t *current_node;
    uint64_t *parent_node;
    uint64_t *next_node;
    uint64_t *new_node;
    uint64_t component_handler;
    
    component_manager = (uint64_t *)FUN_18008d070();
    root_node = (uint64_t *)*component_manager;
    node_is_valid = *(char *)((uint64_t)root_node[1] + 0x19);
    component_handler = 0; // 音频组件没有处理函数
    parent_node = root_node;
    current_node = (uint64_t *)root_node[1];
    
    while (node_is_valid == '\0') {
        int compare_result = memcmp(current_node + 4, &COMPONENT_SIGNATURE_AUDIO, 0x10);
        if (compare_result < 0) {
            next_node = (uint64_t *)current_node[2];
            current_node = parent_node;
        } else {
            next_node = (uint64_t *)*current_node;
        }
        parent_node = current_node;
        current_node = next_node;
        node_is_valid = *(char *)((uint64_t)next_node + 0x19);
    }
    
    if ((parent_node == root_node) || 
        (int compare_result = memcmp(&COMPONENT_SIGNATURE_AUDIO, parent_node + 4, 0x10), compare_result < 0)) {
        uint64_t allocation_size = FUN_18008f0d0(component_manager);
        FUN_18008f140(component_manager, &new_node, parent_node, allocation_size + 0x20, allocation_size);
        parent_node = new_node;
    }
    
    parent_node[6] = COMPONENT_TYPE_AUDIO;       // 音频组件类型ID
    parent_node[7] = COMPONENT_VERSION_AUDIO;     // 音频组件版本ID
    parent_node[8] = &COMPONENT_NAME_AUDIO;       // 音频组件名称
    parent_node[9] = COMPONENT_PRIORITY_AUDIO;    // 音频组件优先级
    parent_node[10] = component_handler;          // 音频组件处理函数
    
    return;
}

/**
 * 注册输入组件
 * 在全局组件注册表中注册输入组件，负责输入处理相关功能
 * 
 * 组件属性：
 * - 组件类型ID: 0x49086ba08ab981a7
 * - 组件版本ID: 0xa9191d34ad910696
 * - 组件名称: UNK_180a003b8
 * - 优先级: 0
 * - 处理函数: FUN_18025d270
 */
void 注册输入组件(void)
{
    char node_is_valid;
    uint64_t *component_manager;
    uint64_t *root_node;
    uint64_t *current_node;
    uint64_t *parent_node;
    uint64_t *next_node;
    uint64_t *new_node;
    void (*component_handler)(void);
    
    component_manager = (uint64_t *)FUN_18008d070();
    root_node = (uint64_t *)*component_manager;
    node_is_valid = *(char *)((uint64_t)root_node[1] + 0x19);
    component_handler = FUN_18025d270;
    parent_node = root_node;
    current_node = (uint64_t *)root_node[1];
    
    while (node_is_valid == '\0') {
        int compare_result = memcmp(current_node + 4, &COMPONENT_SIGNATURE_INPUT, 0x10);
        if (compare_result < 0) {
            next_node = (uint64_t *)current_node[2];
            current_node = parent_node;
        } else {
            next_node = (uint64_t *)*current_node;
        }
        parent_node = current_node;
        current_node = next_node;
        node_is_valid = *(char *)((uint64_t)next_node + 0x19);
    }
    
    if ((parent_node == root_node) || 
        (int compare_result = memcmp(&COMPONENT_SIGNATURE_INPUT, parent_node + 4, 0x10), compare_result < 0)) {
        uint64_t allocation_size = FUN_18008f0d0(component_manager);
        FUN_18008f140(component_manager, &new_node, parent_node, allocation_size + 0x20, allocation_size);
        parent_node = new_node;
    }
    
    parent_node[6] = COMPONENT_TYPE_INPUT;       // 输入组件类型ID
    parent_node[7] = COMPONENT_VERSION_INPUT;     // 输入组件版本ID
    parent_node[8] = &COMPONENT_NAME_INPUT;       // 输入组件名称
    parent_node[9] = COMPONENT_PRIORITY_INPUT;    // 输入组件优先级
    parent_node[10] = (uint64_t)component_handler; // 输入组件处理函数
    
    return;
}

/**
 * 注册网络组件
 * 在全局组件注册表中注册网络组件，负责网络通信相关功能
 * 
 * 组件属性：
 * - 组件类型ID: 0x402feffe4481676e
 * - 组件版本ID: 0xd4c2151109de93a0
 * - 组件名称: UNK_180a003d0
 * - 优先级: 0
 * - 处理函数: NULL
 */
void 注册网络组件(void)
{
    char node_is_valid;
    uint64_t *component_manager;
    uint64_t *root_node;
    uint64_t *current_node;
    uint64_t *parent_node;
    uint64_t *next_node;
    uint64_t *new_node;
    uint64_t component_handler;
    
    component_manager = (uint64_t *)FUN_18008d070();
    root_node = (uint64_t *)*component_manager;
    node_is_valid = *(char *)((uint64_t)root_node[1] + 0x19);
    component_handler = 0; // 网络组件没有处理函数
    parent_node = root_node;
    current_node = (uint64_t *)root_node[1];
    
    while (node_is_valid == '\0') {
        int compare_result = memcmp(current_node + 4, &COMPONENT_SIGNATURE_NETWORK, 0x10);
        if (compare_result < 0) {
            next_node = (uint64_t *)current_node[2];
            current_node = parent_node;
        } else {
            next_node = (uint64_t *)*current_node;
        }
        parent_node = current_node;
        current_node = next_node;
        node_is_valid = *(char *)((uint64_t)next_node + 0x19);
    }
    
    if ((parent_node == root_node) || 
        (int compare_result = memcmp(&COMPONENT_SIGNATURE_NETWORK, parent_node + 4, 0x10), compare_result < 0)) {
        uint64_t allocation_size = FUN_18008f0d0(component_manager);
        FUN_18008f140(component_manager, &new_node, parent_node, allocation_size + 0x20, allocation_size);
        parent_node = new_node;
    }
    
    parent_node[6] = COMPONENT_TYPE_NETWORK;      // 网络组件类型ID
    parent_node[7] = COMPONENT_VERSION_NETWORK;    // 网络组件版本ID
    parent_node[8] = &COMPONENT_NAME_NETWORK;      // 网络组件名称
    parent_node[9] = COMPONENT_PRIORITY_NETWORK;   // 网络组件优先级
    parent_node[10] = component_handler;          // 网络组件处理函数
    
    return;
}

/**
 * 注册脚本组件
 * 在全局组件注册表中注册脚本组件，负责脚本执行相关功能
 * 
 * 组件属性：
 * - 组件类型ID: 0x4384dcc4b6d3f417
 * - 组件版本ID: 0x92a15d52fe2679bd
 * - 组件名称: UNK_180a003e8
 * - 优先级: 0
 * - 处理函数: UNK_1800868c0
 */
void 注册脚本组件(void)
{
    char node_is_valid;
    uint64_t *component_manager;
    uint64_t *root_node;
    uint64_t *current_node;
    uint64_t *parent_node;
    uint64_t *next_node;
    uint64_t *new_node;
    void *component_handler;
    
    component_manager = (uint64_t *)FUN_18008d070();
    root_node = (uint64_t *)*component_manager;
    node_is_valid = *(char *)((uint64_t)root_node[1] + 0x19);
    component_handler = &SCRIPT_ENGINE_HANDLER;
    parent_node = root_node;
    current_node = (uint64_t *)root_node[1];
    
    while (node_is_valid == '\0') {
        int compare_result = memcmp(current_node + 4, &COMPONENT_SIGNATURE_SCRIPT, 0x10);
        if (compare_result < 0) {
            next_node = (uint64_t *)current_node[2];
            current_node = parent_node;
        } else {
            next_node = (uint64_t *)*current_node;
        }
        parent_node = current_node;
        current_node = next_node;
        node_is_valid = *(char *)((uint64_t)next_node + 0x19);
    }
    
    if ((parent_node == root_node) || 
        (int compare_result = memcmp(&COMPONENT_SIGNATURE_SCRIPT, parent_node + 4, 0x10), compare_result < 0)) {
        uint64_t allocation_size = FUN_18008f0d0(component_manager);
        FUN_18008f140(component_manager, &new_node, parent_node, allocation_size + 0x20, allocation_size);
        parent_node = new_node;
    }
    
    parent_node[6] = COMPONENT_TYPE_SCRIPT;      // 脚本组件类型ID
    parent_node[7] = COMPONENT_VERSION_SCRIPT;    // 脚本组件版本ID
    parent_node[8] = &COMPONENT_NAME_SCRIPT;      // 脚本组件名称
    parent_node[9] = COMPONENT_PRIORITY_SCRIPT;   // 脚本组件优先级
    parent_node[10] = (uint64_t)component_handler; // 脚本组件处理函数
    
    return;
}

/**
 * 注册资源管理组件
 * 在全局组件注册表中注册资源管理组件，负责资源加载和管理
 * 
 * 组件属性：
 * - 组件类型ID: 0x4140994454d56503
 * - 组件版本ID: 0x399eced9bb5517ad
 * - 组件名称: UNK_180a00400
 * - 优先级: 0
 * - 处理函数: NULL
 */
void 注册资源管理组件(void)
{
    char node_is_valid;
    uint64_t *component_manager;
    uint64_t *root_node;
    uint64_t *current_node;
    uint64_t *parent_node;
    uint64_t *next_node;
    uint64_t *new_node;
    uint64_t component_handler;
    
    component_manager = (uint64_t *)FUN_18008d070();
    root_node = (uint64_t *)*component_manager;
    node_is_valid = *(char *)((uint64_t)root_node[1] + 0x19);
    component_handler = 0; // 资源管理组件没有处理函数
    parent_node = root_node;
    current_node = (uint64_t *)root_node[1];
    
    while (node_is_valid == '\0') {
        int compare_result = memcmp(current_node + 4, &COMPONENT_SIGNATURE_RESOURCE, 0x10);
        if (compare_result < 0) {
            next_node = (uint64_t *)current_node[2];
            current_node = parent_node;
        } else {
            next_node = (uint64_t *)*current_node;
        }
        parent_node = current_node;
        current_node = next_node;
        node_is_valid = *(char *)((uint64_t)next_node + 0x19);
    }
    
    if ((parent_node == root_node) || 
        (int compare_result = memcmp(&COMPONENT_SIGNATURE_RESOURCE, parent_node + 4, 0x10), compare_result < 0)) {
        uint64_t allocation_size = FUN_18008f0d0(component_manager);
        FUN_18008f140(component_manager, &new_node, parent_node, allocation_size + 0x20, allocation_size);
        parent_node = new_node;
    }
    
    parent_node[6] = COMPONENT_TYPE_RESOURCE;      // 资源管理组件类型ID
    parent_node[7] = COMPONENT_VERSION_RESOURCE;   // 资源管理组件版本ID
    parent_node[8] = &COMPONENT_NAME_RESOURCE;     // 资源管理组件名称
    parent_node[9] = COMPONENT_PRIORITY_RESOURCE;  // 资源管理组件优先级
    parent_node[10] = component_handler;          // 资源管理组件处理函数
    
    return;
}

/**
 * 注册AI组件
 * 在全局组件注册表中注册AI组件，负责人工智能相关功能
 * 
 * 组件属性：
 * - 组件类型ID: 0x40db4257e97d3df8
 * - 组件版本ID: 0x81d539e33614429f
 * - 组件名称: UNK_180a004a8
 * - 优先级: 4
 * - 处理函数: FUN_1802633c0
 */
void 注册AI组件(void)
{
    char node_is_valid;
    uint64_t *component_manager;
    uint64_t *root_node;
    uint64_t *current_node;
    uint64_t *parent_node;
    uint64_t *next_node;
    uint64_t *new_node;
    void (*component_handler)(void);
    
    component_manager = (uint64_t *)FUN_18008d070();
    root_node = (uint64_t *)*component_manager;
    node_is_valid = *(char *)((uint64_t)root_node[1] + 0x19);
    component_handler = FUN_1802633c0;
    parent_node = root_node;
    current_node = (uint64_t *)root_node[1];
    
    while (node_is_valid == '\0') {
        int compare_result = memcmp(current_node + 4, &COMPONENT_SIGNATURE_AI, 0x10);
        if (compare_result < 0) {
            next_node = (uint64_t *)current_node[2];
            current_node = parent_node;
        } else {
            next_node = (uint64_t *)*current_node;
        }
        parent_node = current_node;
        current_node = next_node;
        node_is_valid = *(char *)((uint64_t)next_node + 0x19);
    }
    
    if ((parent_node == root_node) || 
        (int compare_result = memcmp(&COMPONENT_SIGNATURE_AI, parent_node + 4, 0x10), compare_result < 0)) {
        uint64_t allocation_size = FUN_18008f0d0(component_manager);
        FUN_18008f140(component_manager, &new_node, parent_node, allocation_size + 0x20, allocation_size);
        parent_node = new_node;
    }
    
    parent_node[6] = COMPONENT_TYPE_AI;           // AI组件类型ID
    parent_node[7] = COMPONENT_VERSION_AI;        // AI组件版本ID
    parent_node[8] = &COMPONENT_NAME_AI;          // AI组件名称
    parent_node[9] = COMPONENT_PRIORITY_AI;        // AI组件优先级
    parent_node[10] = (uint64_t)component_handler; // AI组件处理函数
    
    return;
}

/**
 * 注册动画组件
 * 在全局组件注册表中注册动画组件，负责动画系统相关功能
 * 
 * 组件属性：
 * - 组件类型ID: 0x4e33c4803e67a08f
 * - 组件版本ID: 0x703a29a844ce399
 * - 组件名称: UNK_180a004c0
 * - 优先级: 3
 * - 处理函数: FUN_180262b00
 */
void 注册动画组件(void)
{
    char node_is_valid;
    uint64_t *component_manager;
    uint64_t *root_node;
    uint64_t *current_node;
    uint64_t *parent_node;
    uint64_t *next_node;
    uint64_t *new_node;
    void (*component_handler)(void);
    
    component_manager = (uint64_t *)FUN_18008d070();
    root_node = (uint64_t *)*component_manager;
    node_is_valid = *(char *)((uint64_t)root_node[1] + 0x19);
    component_handler = FUN_180262b00;
    parent_node = root_node;
    current_node = (uint64_t *)root_node[1];
    
    while (node_is_valid == '\0') {
        int compare_result = memcmp(current_node + 4, &COMPONENT_SIGNATURE_ANIMATION, 0x10);
        if (compare_result < 0) {
            next_node = (uint64_t *)current_node[2];
            current_node = parent_node;
        } else {
            next_node = (uint64_t *)*current_node;
        }
        parent_node = current_node;
        current_node = next_node;
        node_is_valid = *(char *)((uint64_t)next_node + 0x19);
    }
    
    if ((parent_node == root_node) || 
        (int compare_result = memcmp(&COMPONENT_SIGNATURE_ANIMATION, parent_node + 4, 0x10), compare_result < 0)) {
        uint64_t allocation_size = FUN_18008f0d0(component_manager);
        FUN_18008f140(component_manager, &new_node, parent_node, allocation_size + 0x20, allocation_size);
        parent_node = new_node;
    }
    
    parent_node[6] = COMPONENT_TYPE_ANIMATION;      // 动画组件类型ID
    parent_node[7] = COMPONENT_VERSION_ANIMATION;   // 动画组件版本ID
    parent_node[8] = &COMPONENT_NAME_ANIMATION;     // 动画组件名称
    parent_node[9] = COMPONENT_PRIORITY_ANIMATION;   // 动画组件优先级
    parent_node[10] = (uint64_t)component_handler;   // 动画组件处理函数
    
    return;
}

/**
 * 注册UI组件
 * 在全局组件注册表中注册UI组件，负责用户界面相关功能
 * 
 * 组件属性：
 * - 组件类型ID: 0x43330a43fcdb3653
 * - 组件版本ID: 0xdcfdc333a769ec93
 * - 组件名称: UNK_180a00370
 * - 优先级: 1
 * - 处理函数: FUN_18025cc00
 */
void 注册UI组件(void)
{
    char node_is_valid;
    uint64_t *component_manager;
    uint64_t *root_node;
    uint64_t *current_node;
    uint64_t *parent_node;
    uint64_t *next_node;
    uint64_t *new_node;
    void (*component_handler)(void);
    
    component_manager = (uint64_t *)FUN_18008d070();
    root_node = (uint64_t *)*component_manager;
    node_is_valid = *(char *)((uint64_t)root_node[1] + 0x19);
    component_handler = FUN_18025cc00;
    parent_node = root_node;
    current_node = (uint64_t *)root_node[1];
    
    while (node_is_valid == '\0') {
        int compare_result = memcmp(current_node + 4, &COMPONENT_SIGNATURE_UI, 0x10);
        if (compare_result < 0) {
            next_node = (uint64_t *)current_node[2];
            current_node = parent_node;
        } else {
            next_node = (uint64_t *)*current_node;
        }
        parent_node = current_node;
        current_node = next_node;
        node_is_valid = *(char *)((uint64_t)next_node + 0x19);
    }
    
    if ((parent_node == root_node) || 
        (int compare_result = memcmp(&COMPONENT_SIGNATURE_UI, parent_node + 4, 0x10), compare_result < 0)) {
        uint64_t allocation_size = FUN_18008f0d0(component_manager);
        FUN_18008f140(component_manager, &new_node, parent_node, allocation_size + 0x20, allocation_size);
        parent_node = new_node;
    }
    
    parent_node[6] = COMPONENT_TYPE_UI;           // UI组件类型ID
    parent_node[7] = COMPONENT_VERSION_UI;        // UI组件版本ID
    parent_node[8] = &COMPONENT_NAME_UI;           // UI组件名称
    parent_node[9] = COMPONENT_PRIORITY_UI;        // UI组件优先级
    parent_node[10] = (uint64_t)component_handler; // UI组件处理函数
    
    return;
}

/**
 * 注册粒子系统组件
 * 在全局组件注册表中注册粒子系统组件，负责粒子效果相关功能
 * 
 * 组件属性：
 * - 组件类型ID: 0x431d7c8d7c475be2
 * - 组件版本ID: 0xb97f048d2153e1b0
 * - 组件名称: UNK_180a00388
 * - 优先级: 4
 * - 处理函数: FUN_18025c000
 */
void 注册粒子系统组件(void)
{
    char node_is_valid;
    uint64_t *component_manager;
    uint64_t *root_node;
    uint64_t *current_node;
    uint64_t *parent_node;
    uint64_t *next_node;
    uint64_t *new_node;
    void (*component_handler)(void);
    
    component_manager = (uint64_t *)FUN_18008d070();
    root_node = (uint64_t *)*component_manager;
    node_is_valid = *(char *)((uint64_t)root_node[1] + 0x19);
    component_handler = FUN_18025c000;
    parent_node = root_node;
    current_node = (uint64_t *)root_node[1];
    
    while (node_is_valid == '\0') {
        int compare_result = memcmp(current_node + 4, &COMPONENT_SIGNATURE_PARTICLE, 0x10);
        if (compare_result < 0) {
            next_node = (uint64_t *)current_node[2];
            current_node = parent_node;
        } else {
            next_node = (uint64_t *)*current_node;
        }
        parent_node = current_node;
        current_node = next_node;
        node_is_valid = *(char *)((uint64_t)next_node + 0x19);
    }
    
    if ((parent_node == root_node) || 
        (int compare_result = memcmp(&COMPONENT_SIGNATURE_PARTICLE, parent_node + 4, 0x10), compare_result < 0)) {
        uint64_t allocation_size = FUN_18008f0d0(component_manager);
        FUN_18008f140(component_manager, &new_node, parent_node, allocation_size + 0x20, allocation_size);
        parent_node = new_node;
    }
    
    parent_node[6] = COMPONENT_TYPE_PARTICLE;      // 粒子系统组件类型ID
    parent_node[7] = COMPONENT_VERSION_PARTICLE;   // 粒子系统组件版本ID
    parent_node[8] = &COMPONENT_NAME_PARTICLE;      // 粒子系统组件名称
    parent_node[9] = COMPONENT_PRIORITY_PARTICLE;   // 粒子系统组件优先级
    parent_node[10] = (uint64_t)component_handler; // 粒子系统组件处理函数
    
    return;
}

/**
 * 注册地形组件
 * 在全局组件注册表中注册地形组件，负责地形系统相关功能
 * 
 * 组件属性：
 * - 组件类型ID: 0x4b2d79e470ee4e2c
 * - 组件版本ID: 0x9c552acd3ed5548d
 * - 组件名称: UNK_180a003a0
 * - 优先级: 0
 * - 处理函数: NULL
 */
void 注册地形组件(void)
{
    char node_is_valid;
    uint64_t *component_manager;
    uint64_t *root_node;
    uint64_t *current_node;
    uint64_t *parent_node;
    uint64_t *next_node;
    uint64_t *new_node;
    uint64_t component_handler;
    
    component_manager = (uint64_t *)FUN_18008d070();
    root_node = (uint64_t *)*component_manager;
    node_is_valid = *(char *)((uint64_t)root_node[1] + 0x19);
    component_handler = 0; // 地形组件没有处理函数
    parent_node = root_node;
    current_node = (uint64_t *)root_node[1];
    
    while (node_is_valid == '\0') {
        int compare_result = memcmp(current_node + 4, &COMPONENT_SIGNATURE_TERRAIN, 0x10);
        if (compare_result < 0) {
            next_node = (uint64_t *)current_node[2];
            current_node = parent_node;
        } else {
            next_node = (uint64_t *)*current_node;
        }
        parent_node = current_node;
        current_node = next_node;
        node_is_valid = *(char *)((uint64_t)next_node + 0x19);
    }
    
    if ((parent_node == root_node) || 
        (int compare_result = memcmp(&COMPONENT_SIGNATURE_TERRAIN, parent_node + 4, 0x10), compare_result < 0)) {
        uint64_t allocation_size = FUN_18008f0d0(component_manager);
        FUN_18008f140(component_manager, &new_node, parent_node, allocation_size + 0x20, allocation_size);
        parent_node = new_node;
    }
    
    parent_node[6] = COMPONENT_TYPE_TERRAIN;      // 地形组件类型ID
    parent_node[7] = COMPONENT_VERSION_TERRAIN;   // 地形组件版本ID
    parent_node[8] = &COMPONENT_NAME_TERRAIN;     // 地形组件名称
    parent_node[9] = COMPONENT_PRIORITY_TERRAIN;  // 地形组件优先级
    parent_node[10] = component_handler;          // 地形组件处理函数
    
    return;
}

/**
 * 注册光照组件
 * 在全局组件注册表中注册光照组件，负责光照系统相关功能
 * 
 * 组件属性：
 * - 组件类型ID: 0x49086ba08ab981a7
 * - 组件版本ID: 0xa9191d34ad910696
 * - 组件名称: UNK_180a003b8
 * - 优先级: 0
 * - 处理函数: FUN_18025d270
 */
void 注册光照组件(void)
{
    char node_is_valid;
    uint64_t *component_manager;
    uint64_t *root_node;
    uint64_t *current_node;
    uint64_t *parent_node;
    uint64_t *next_node;
    uint64_t *new_node;
    void (*component_handler)(void);
    
    component_manager = (uint64_t *)FUN_18008d070();
    root_node = (uint64_t *)*component_manager;
    node_is_valid = *(char *)((uint64_t)root_node[1] + 0x19);
    component_handler = FUN_18025d270;
    parent_node = root_node;
    current_node = (uint64_t *)root_node[1];
    
    while (node_is_valid == '\0') {
        int compare_result = memcmp(current_node + 4, &COMPONENT_SIGNATURE_LIGHTING, 0x10);
        if (compare_result < 0) {
            next_node = (uint64_t *)current_node[2];
            current_node = parent_node;
        } else {
            next_node = (uint64_t *)*current_node;
        }
        parent_node = current_node;
        current_node = next_node;
        node_is_valid = *(char *)((uint64_t)next_node + 0x19);
    }
    
    if ((parent_node == root_node) || 
        (int compare_result = memcmp(&COMPONENT_SIGNATURE_LIGHTING, parent_node + 4, 0x10), compare_result < 0)) {
        uint64_t allocation_size = FUN_18008f0d0(component_manager);
        FUN_18008f140(component_manager, &new_node, parent_node, allocation_size + 0x20, allocation_size);
        parent_node = new_node;
    }
    
    parent_node[6] = COMPONENT_TYPE_LIGHTING;      // 光照组件类型ID
    parent_node[7] = COMPONENT_VERSION_LIGHTING;   // 光照组件版本ID
    parent_node[8] = &COMPONENT_NAME_LIGHTING;      // 光照组件名称
    parent_node[9] = COMPONENT_PRIORITY_LIGHTING;  // 光照组件优先级
    parent_node[10] = (uint64_t)component_handler; // 光照组件处理函数
    
    return;
}

/**
 * 注册材质组件
 * 在全局组件注册表中注册材质组件，负责材质系统相关功能
 * 
 * 组件属性：
 * - 组件类型ID: 0x402feffe4481676e
 * - 组件版本ID: 0xd4c2151109de93a0
 * - 组件名称: UNK_180a003d0
 * - 优先级: 0
 * - 处理函数: NULL
 */
void 注册材质组件(void)
{
    char node_is_valid;
    uint64_t *component_manager;
    uint64_t *root_node;
    uint64_t *current_node;
    uint64_t *parent_node;
    uint64_t *next_node;
    uint64_t *new_node;
    uint64_t component_handler;
    
    component_manager = (uint64_t *)FUN_18008d070();
    root_node = (uint64_t *)*component_manager;
    node_is_valid = *(char *)((uint64_t)root_node[1] + 0x19);
    component_handler = 0; // 材质组件没有处理函数
    parent_node = root_node;
    current_node = (uint64_t *)root_node[1];
    
    while (node_is_valid == '\0') {
        int compare_result = memcmp(current_node + 4, &COMPONENT_SIGNATURE_MATERIAL, 0x10);
        if (compare_result < 0) {
            next_node = (uint64_t *)current_node[2];
            current_node = parent_node;
        } else {
            next_node = (uint64_t *)*current_node;
        }
        parent_node = current_node;
        current_node = next_node;
        node_is_valid = *(char *)((uint64_t)next_node + 0x19);
    }
    
    if ((parent_node == root_node) || 
        (int compare_result = memcmp(&COMPONENT_SIGNATURE_MATERIAL, parent_node + 4, 0x10), compare_result < 0)) {
        uint64_t allocation_size = FUN_18008f0d0(component_manager);
        FUN_18008f140(component_manager, &new_node, parent_node, allocation_size + 0x20, allocation_size);
        parent_node = new_node;
    }
    
    parent_node[6] = COMPONENT_TYPE_MATERIAL;      // 材质组件类型ID
    parent_node[7] = COMPONENT_VERSION_MATERIAL;   // 材质组件版本ID
    parent_node[8] = &COMPONENT_NAME_MATERIAL;     // 材质组件名称
    parent_node[9] = COMPONENT_PRIORITY_MATERIAL;  // 材质组件优先级
    parent_node[10] = component_handler;          // 材质组件处理函数
    
    return;
}

/**
 * 注册着色器组件
 * 在全局组件注册表中注册着色器组件，负责着色器系统相关功能
 * 
 * 组件属性：
 * - 组件类型ID: 0x4384dcc4b6d3f417
 * - 组件版本ID: 0x92a15d52fe2679bd
 * - 组件名称: UNK_180a003e8
 * - 优先级: 0
 * - 处理函数: UNK_1800868c0
 */
void 注册着色器组件(void)
{
    char node_is_valid;
    uint64_t *component_manager;
    uint64_t *root_node;
    uint64_t *current_node;
    uint64_t *parent_node;
    uint64_t *next_node;
    uint64_t *new_node;
    void *component_handler;
    
    component_manager = (uint64_t *)FUN_18008d070();
    root_node = (uint64_t *)*component_manager;
    node_is_valid = *(char *)((uint64_t)root_node[1] + 0x19);
    component_handler = &SHADER_ENGINE_HANDLER;
    parent_node = root_node;
    current_node = (uint64_t *)root_node[1];
    
    while (node_is_valid == '\0') {
        int compare_result = memcmp(current_node + 4, &COMPONENT_SIGNATURE_SHADER, 0x10);
        if (compare_result < 0) {
            next_node = (uint64_t *)current_node[2];
            current_node = parent_node;
        } else {
            next_node = (uint64_t *)*current_node;
        }
        parent_node = current_node;
        current_node = next_node;
        node_is_valid = *(char *)((uint64_t)next_node + 0x19);
    }
    
    if ((parent_node == root_node) || 
        (int compare_result = memcmp(&COMPONENT_SIGNATURE_SHADER, parent_node + 4, 0x10), compare_result < 0)) {
        uint64_t allocation_size = FUN_18008f0d0(component_manager);
        FUN_18008f140(component_manager, &new_node, parent_node, allocation_size + 0x20, allocation_size);
        parent_node = new_node;
    }
    
    parent_node[6] = COMPONENT_TYPE_SHADER;       // 着色器组件类型ID
    parent_node[7] = COMPONENT_VERSION_SHADER;     // 着色器组件版本ID
    parent_node[8] = &COMPONENT_NAME_SHADER;       // 着色器组件名称
    parent_node[9] = COMPONENT_PRIORITY_SHADER;     // 着色器组件优先级
    parent_node[10] = (uint64_t)component_handler; // 着色器组件处理函数
    
    return;
}

/**
 * 注册纹理组件
 * 在全局组件注册表中注册纹理组件，负责纹理系统相关功能
 * 
 * 组件属性：
 * - 组件类型ID: 0x4140994454d56503
 * - 组件版本ID: 0x399eced9bb5517ad
 * - 组件名称: UNK_180a00400
 * - 优先级: 0
 * - 处理函数: NULL
 */
void 注册纹理组件(void)
{
    char node_is_valid;
    uint64_t *component_manager;
    uint64_t *root_node;
    uint64_t *current_node;
    uint64_t *parent_node;
    uint64_t *next_node;
    uint64_t *new_node;
    uint64_t component_handler;
    
    component_manager = (uint64_t *)FUN_18008d070();
    root_node = (uint64_t *)*component_manager;
    node_is_valid = *(char *)((uint64_t)root_node[1] + 0x19);
    component_handler = 0; // 纹理组件没有处理函数
    parent_node = root_node;
    current_node = (uint64_t *)root_node[1];
    
    while (node_is_valid == '\0') {
        int compare_result = memcmp(current_node + 4, &COMPONENT_SIGNATURE_TEXTURE, 0x10);
        if (compare_result < 0) {
            next_node = (uint64_t *)current_node[2];
            current_node = parent_node;
        } else {
            next_node = (uint64_t *)*current_node;
        }
        parent_node = current_node;
        current_node = next_node;
        node_is_valid = *(char *)((uint64_t)next_node + 0x19);
    }
    
    if ((parent_node == root_node) || 
        (int compare_result = memcmp(&COMPONENT_SIGNATURE_TEXTURE, parent_node + 4, 0x10), compare_result < 0)) {
        uint64_t allocation_size = FUN_18008f0d0(component_manager);
        FUN_18008f140(component_manager, &new_node, parent_node, allocation_size + 0x20, allocation_size);
        parent_node = new_node;
    }
    
    parent_node[6] = COMPONENT_TYPE_TEXTURE;      // 纹理组件类型ID
    parent_node[7] = COMPONENT_VERSION_TEXTURE;   // 纹理组件版本ID
    parent_node[8] = &COMPONENT_NAME_TEXTURE;      // 纹理组件名称
    parent_node[9] = COMPONENT_PRIORITY_TEXTURE;   // 纹理组件优先级
    parent_node[10] = component_handler;          // 纹理组件处理函数
    
    return;
}

/**
 * 注册游戏逻辑组件
 * 在全局组件注册表中注册游戏逻辑组件，负责游戏逻辑处理
 * 
 * 组件属性：
 * - 组件类型ID: 0x449bafe9b77ddd3c
 * - 组件版本ID: 0xc160408bde99e59f
 * - 组件名称: UNK_180a00430
 * - 优先级: 0
 * - 处理函数: FUN_18025d510
 */
void 注册游戏逻辑组件(void)
{
    char node_is_valid;
    uint64_t *component_manager;
    uint64_t *root_node;
    uint64_t *current_node;
    uint64_t *parent_node;
    uint64_t *next_node;
    uint64_t *new_node;
    void (*component_handler)(void);
    
    component_manager = (uint64_t *)FUN_18008d070();
    root_node = (uint64_t *)*component_manager;
    node_is_valid = *(char *)((uint64_t)root_node[1] + 0x19);
    component_handler = FUN_18025d510;
    parent_node = root_node;
    current_node = (uint64_t *)root_node[1];
    
    while (node_is_valid == '\0') {
        int compare_result = memcmp(current_node + 4, &COMPONENT_SIGNATURE_GAME_LOGIC, 0x10);
        if (compare_result < 0) {
            next_node = (uint64_t *)current_node[2];
            current_node = parent_node;
        } else {
            next_node = (uint64_t *)*current_node;
        }
        parent_node = current_node;
        current_node = next_node;
        node_is_valid = *(char *)((uint64_t)next_node + 0x19);
    }
    
    if ((parent_node == root_node) || 
        (int compare_result = memcmp(&COMPONENT_SIGNATURE_GAME_LOGIC, parent_node + 4, 0x10), compare_result < 0)) {
        uint64_t allocation_size = FUN_18008f0d0(component_manager);
        FUN_18008f140(component_manager, &new_node, parent_node, allocation_size + 0x20, allocation_size);
        parent_node = new_node;
    }
    
    parent_node[6] = COMPONENT_TYPE_GAME_LOGIC;    // 游戏逻辑组件类型ID
    parent_node[7] = COMPONENT_VERSION_GAME_LOGIC; // 游戏逻辑组件版本ID
    parent_node[8] = &COMPONENT_NAME_GAME_LOGIC;   // 游戏逻辑组件名称
    parent_node[9] = COMPONENT_PRIORITY_GAME_LOGIC; // 游戏逻辑组件优先级
    parent_node[10] = (uint64_t)component_handler; // 游戏逻辑组件处理函数
    
    return;
}

/**
 * 注册场景管理组件
 * 在全局组件注册表中注册场景管理组件，负责场景管理功能
 * 
 * 组件属性：
 * - 组件类型ID: 0x45425dc186a5d575
 * - 组件版本ID: 0xfab48faa65382fa5
 * - 组件名称: UNK_180a00460
 * - 优先级: 0
 * - 处理函数: FUN_18025e330
 */
void 注册场景管理组件(void)
{
    char node_is_valid;
    uint64_t *component_manager;
    uint64_t *root_node;
    uint64_t *current_node;
    uint64_t *parent_node;
    uint64_t *next_node;
    uint64_t *new_node;
    void (*component_handler)(void);
    
    component_manager = (uint64_t *)FUN_18008d070();
    root_node = (uint64_t *)*component_manager;
    node_is_valid = *(char *)((uint64_t)root_node[1] + 0x19);
    component_handler = FUN_18025e330;
    parent_node = root_node;
    current_node = (uint64_t *)root_node[1];
    
    while (node_is_valid == '\0') {
        int compare_result = memcmp(current_node + 4, &COMPONENT_SIGNATURE_SCENE_MANAGER, 0x10);
        if (compare_result < 0) {
            next_node = (uint64_t *)current_node[2];
            current_node = parent_node;
        } else {
            next_node = (uint64_t *)*current_node;
        }
        parent_node = current_node;
        current_node = next_node;
        node_is_valid = *(char *)((uint64_t)next_node + 0x19);
    }
    
    if ((parent_node == root_node) || 
        (int compare_result = memcmp(&COMPONENT_SIGNATURE_SCENE_MANAGER, parent_node + 4, 0x10), compare_result < 0)) {
        uint64_t allocation_size = FUN_18008f0d0(component_manager);
        FUN_18008f140(component_manager, &new_node, parent_node, allocation_size + 0x20, allocation_size);
        parent_node = new_node;
    }
    
    parent_node[6] = COMPONENT_TYPE_SCENE_MANAGER; // 场景管理组件类型ID
    parent_node[7] = COMPONENT_VERSION_SCENE_MANAGER; // 场景管理组件版本ID
    parent_node[8] = &COMPONENT_NAME_SCENE_MANAGER; // 场景管理组件名称
    parent_node[9] = COMPONENT_PRIORITY_SCENE_MANAGER; // 场景管理组件优先级
    parent_node[10] = (uint64_t)component_handler; // 场景管理组件处理函数
    
    return;
}

/**
 * 注册行为树组件
 * 在全局组件注册表中注册行为树组件，负责AI行为树系统
 * 
 * 组件属性：
 * - 组件类型ID: 0x40db4257e97d3df8
 * - 组件版本ID: 0x81d539e33614429f
 * - 组件名称: UNK_180a004a8
 * - 优先级: 4
 * - 处理函数: FUN_1802633c0
 */
void 注册行为树组件(void)
{
    char node_is_valid;
    uint64_t *component_manager;
    uint64_t *root_node;
    uint64_t *current_node;
    uint64_t *parent_node;
    uint64_t *next_node;
    uint64_t *new_node;
    void (*component_handler)(void);
    
    component_manager = (uint64_t *)FUN_18008d070();
    root_node = (uint64_t *)*component_manager;
    node_is_valid = *(char *)((uint64_t)root_node[1] + 0x19);
    component_handler = FUN_1802633c0;
    parent_node = root_node;
    current_node = (uint64_t *)root_node[1];
    
    while (node_is_valid == '\0') {
        int compare_result = memcmp(current_node + 4, &COMPONENT_SIGNATURE_BEHAVIOR_TREE, 0x10);
        if (compare_result < 0) {
            next_node = (uint64_t *)current_node[2];
            current_node = parent_node;
        } else {
            next_node = (uint64_t *)*current_node;
        }
        parent_node = current_node;
        current_node = next_node;
        node_is_valid = *(char *)((uint64_t)next_node + 0x19);
    }
    
    if ((parent_node == root_node) || 
        (int compare_result = memcmp(&COMPONENT_SIGNATURE_BEHAVIOR_TREE, parent_node + 4, 0x10), compare_result < 0)) {
        uint64_t allocation_size = FUN_18008f0d0(component_manager);
        FUN_18008f140(component_manager, &new_node, parent_node, allocation_size + 0x20, allocation_size);
        parent_node = new_node;
    }
    
    parent_node[6] = COMPONENT_TYPE_BEHAVIOR_TREE; // 行为树组件类型ID
    parent_node[7] = COMPONENT_VERSION_BEHAVIOR_TREE; // 行为树组件版本ID
    parent_node[8] = &COMPONENT_NAME_BEHAVIOR_TREE; // 行为树组件名称
    parent_node[9] = COMPONENT_PRIORITY_BEHAVIOR_TREE; // 行为树组件优先级
    parent_node[10] = (uint64_t)component_handler; // 行为树组件处理函数
    
    return;
}

/**
 * 注册骨骼动画组件
 * 在全局组件注册表中注册骨骼动画组件，负责骨骼动画系统
 * 
 * 组件属性：
 * - 组件类型ID: 0x4e33c4803e67a08f
 * - 组件版本ID: 0x703a29a844ce399
 * - 组件名称: UNK_180a004c0
 * - 优先级: 3
 * - 处理函数: FUN_180262b00
 */
void 注册骨骼动画组件(void)
{
    char node_is_valid;
    uint64_t *component_manager;
    uint64_t *root_node;
    uint64_t *current_node;
    uint64_t *parent_node;
    uint64_t *next_node;
    uint64_t *new_node;
    void (*component_handler)(void);
    
    component_manager = (uint64_t *)FUN_18008d070();
    root_node = (uint64_t *)*component_manager;
    node_is_valid = *(char *)((uint64_t)root_node[1] + 0x19);
    component_handler = FUN_180262b00;
    parent_node = root_node;
    current_node = (uint64_t *)root_node[1];
    
    while (node_is_valid == '\0') {
        int compare_result = memcmp(current_node + 4, &COMPONENT_SIGNATURE_SKELETAL_ANIMATION, 0x10);
        if (compare_result < 0) {
            next_node = (uint64_t *)current_node[2];
            current_node = parent_node;
        } else {
            next_node = (uint64_t *)*current_node;
        }
        parent_node = current_node;
        current_node = next_node;
        node_is_valid = *(char *)((uint64_t)next_node + 0x19);
    }
    
    if ((parent_node == root_node) || 
        (int compare_result = memcmp(&COMPONENT_SIGNATURE_SKELETAL_ANIMATION, parent_node + 4, 0x10), compare_result < 0)) {
        uint64_t allocation_size = FUN_18008f0d0(component_manager);
        FUN_18008f140(component_manager, &new_node, parent_node, allocation_size + 0x20, allocation_size);
        parent_node = new_node;
    }
    
    parent_node[6] = COMPONENT_TYPE_SKELETAL_ANIMATION; // 骨骼动画组件类型ID
    parent_node[7] = COMPONENT_VERSION_SKELETAL_ANIMATION; // 骨骼动画组件版本ID
    parent_node[8] = &COMPONENT_NAME_SKELETAL_ANIMATION; // 骨骼动画组件名称
    parent_node[9] = COMPONENT_PRIORITY_SKELETAL_ANIMATION; // 骨骼动画组件优先级
    parent_node[10] = (uint64_t)component_handler; // 骨骼动画组件处理函数
    
    return;
}

/**
 * 注册摄像机组件
 * 在全局组件注册表中注册摄像机组件，负责摄像机系统
 * 
 * 组件属性：
 * - 组件类型ID: 0x42bea5b911d9c4bf
 * - 组件版本ID: 0x1aa83fc0020dc1b6
 * - 组件名称: UNK_1809fd0d8
 * - 优先级: 0
 * - 处理函数: NULL
 */
void 注册摄像机组件(void)
{
    char node_is_valid;
    uint64_t *component_manager;
    uint64_t *root_node;
    uint64_t *current_node;
    uint64_t *parent_node;
    uint64_t *next_node;
    uint64_t *new_node;
    uint64_t component_handler;
    
    component_manager = (uint64_t *)FUN_18008d070();
    root_node = (uint64_t *)*component_manager;
    node_is_valid = *(char *)((uint64_t)root_node[1] + 0x19);
    component_handler = 0; // 摄像机组件没有处理函数
    parent_node = root_node;
    current_node = (uint64_t *)root_node[1];
    
    while (node_is_valid == '\0') {
        int compare_result = memcmp(current_node + 4, &COMPONENT_SIGNATURE_CAMERA, 0x10);
        if (compare_result < 0) {
            next_node = (uint64_t *)current_node[2];
            current_node = parent_node;
        } else {
            next_node = (uint64_t *)*current_node;
        }
        parent_node = current_node;
        current_node = next_node;
        node_is_valid = *(char *)((uint64_t)next_node + 0x19);
    }
    
    if ((parent_node == root_node) || 
        (int compare_result = memcmp(&COMPONENT_SIGNATURE_CAMERA, parent_node + 4, 0x10), compare_result < 0)) {
        uint64_t allocation_size = FUN_18008f0d0(component_manager);
        FUN_18008f140(component_manager, &new_node, parent_node, allocation_size + 0x20, allocation_size);
        parent_node = new_node;
    }
    
    parent_node[6] = COMPONENT_TYPE_CAMERA;       // 摄像机组件类型ID
    parent_node[7] = COMPONENT_VERSION_CAMERA;    // 摄像机组件版本ID
    parent_node[8] = &COMPONENT_NAME_CAMERA;       // 摄像机组件名称
    parent_node[9] = COMPONENT_PRIORITY_CAMERA;    // 摄像机组件优先级
    parent_node[10] = component_handler;          // 摄像机组件处理函数
    
    return;
}

/**
 * 注册后处理组件
 * 在全局组件注册表中注册后处理组件，负责后处理效果
 * 
 * 组件属性：
 * - 组件类型ID: 0x43330a43fcdb3653
 * - 组件版本ID: 0xdcfdc333a769ec93
 * - 组件名称: UNK_180a00370
 * - 优先级: 1
 * - 处理函数: FUN_18025cc00
 */
void 注册后处理组件(void)
{
    char node_is_valid;
    uint64_t *component_manager;
    uint64_t *root_node;
    uint64_t *current_node;
    uint64_t *parent_node;
    uint64_t *next_node;
    uint64_t *new_node;
    void (*component_handler)(void);
    
    component_manager = (uint64_t *)FUN_18008d070();
    root_node = (uint64_t *)*component_manager;
    node_is_valid = *(char *)((uint64_t)root_node[1] + 0x19);
    component_handler = FUN_18025cc00;
    parent_node = root_node;
    current_node = (uint64_t *)root_node[1];
    
    while (node_is_valid == '\0') {
        int compare_result = memcmp(current_node + 4, &COMPONENT_SIGNATURE_POST_PROCESS, 0x10);
        if (compare_result < 0) {
            next_node = (uint64_t *)current_node[2];
            current_node = parent_node;
        } else {
            next_node = (uint64_t *)*current_node;
        }
        parent_node = current_node;
        current_node = next_node;
        node_is_valid = *(char *)((uint64_t)next_node + 0x19);
    }
    
    if ((parent_node == root_node) || 
        (int compare_result = memcmp(&COMPONENT_SIGNATURE_POST_PROCESS, parent_node + 4, 0x10), compare_result < 0)) {
        uint64_t allocation_size = FUN_18008f0d0(component_manager);
        FUN_18008f140(component_manager, &new_node, parent_node, allocation_size + 0x20, allocation_size);
        parent_node = new_node;
    }
    
    parent_node[6] = COMPONENT_TYPE_POST_PROCESS; // 后处理组件类型ID
    parent_node[7] = COMPONENT_VERSION_POST_PROCESS; // 后处理组件版本ID
    parent_node[8] = &COMPONENT_NAME_POST_PROCESS; // 后处理组件名称
    parent_node[9] = COMPONENT_PRIORITY_POST_PROCESS; // 后处理组件优先级
    parent_node[10] = (uint64_t)component_handler; // 后处理组件处理函数
    
    return;
}

/**
 * 注册水面组件
 * 在全局组件注册表中注册水面组件，负责水面渲染效果
 * 
 * 组件属性：
 * - 组件类型ID: 0x431d7c8d7c475be2
 * - 组件版本ID: 0xb97f048d2153e1b0
 * - 组件名称: UNK_180a00388
 * - 优先级: 4
 * - 处理函数: FUN_18025c000
 */
void 注册水面组件(void)
{
    char node_is_valid;
    uint64_t *component_manager;
    uint64_t *root_node;
    uint64_t *current_node;
    uint64_t *parent_node;
    uint64_t *next_node;
    uint64_t *new_node;
    void (*component_handler)(void);
    
    component_manager = (uint64_t *)FUN_18008d070();
    root_node = (uint64_t *)*component_manager;
    node_is_valid = *(char *)((uint64_t)root_node[1] + 0x19);
    component_handler = FUN_18025c000;
    parent_node = root_node;
    current_node = (uint64_t *)root_node[1];
    
    while (node_is_valid == '\0') {
        int compare_result = memcmp(current_node + 4, &COMPONENT_SIGNATURE_WATER, 0x10);
        if (compare_result < 0) {
            next_node = (uint64_t *)current_node[2];
            current_node = parent_node;
        } else {
            next_node = (uint64_t *)*current_node;
        }
        parent_node = current_node;
        current_node = next_node;
        node_is_valid = *(char *)((uint64_t)next_node + 0x19);
    }
    
    if ((parent_node == root_node) || 
        (int compare_result = memcmp(&COMPONENT_SIGNATURE_WATER, parent_node + 4, 0x10), compare_result < 0)) {
        uint64_t allocation_size = FUN_18008f0d0(component_manager);
        FUN_18008f140(component_manager, &new_node, parent_node, allocation_size + 0x20, allocation_size);
        parent_node = new_node;
    }
    
    parent_node[6] = COMPONENT_TYPE_WATER;        // 水面组件类型ID
    parent_node[7] = COMPONENT_VERSION_WATER;     // 水面组件版本ID
    parent_node[8] = &COMPONENT_NAME_WATER;        // 水面组件名称
    parent_node[9] = COMPONENT_PRIORITY_WATER;    // 水面组件优先级
    parent_node[10] = (uint64_t)component_handler; // 水面组件处理函数
    
    return;
}

/**
 * 注册天空组件
 * 在全局组件注册表中注册天空组件，负责天空渲染效果
 * 
 * 组件属性：
 * - 组件类型ID: 0x4b2d79e470ee4e2c
 * - 组件版本ID: 0x9c552acd3ed5548d
 * - 组件名称: UNK_180a003a0
 * - 优先级: 0
 * - 处理函数: NULL
 */
void 注册天空组件(void)
{
    char node_is_valid;
    uint64_t *component_manager;
    uint64_t *root_node;
    uint64_t *current_node;
    uint64_t *parent_node;
    uint64_t *next_node;
    uint64_t *new_node;
    uint64_t component_handler;
    
    component_manager = (uint64_t *)FUN_18008d070();
    root_node = (uint64_t *)*component_manager;
    node_is_valid = *(char *)((uint64_t)root_node[1] + 0x19);
    component_handler = 0; // 天空组件没有处理函数
    parent_node = root_node;
    current_node = (uint64_t *)root_node[1];
    
    while (node_is_valid == '\0') {
        int compare_result = memcmp(current_node + 4, &COMPONENT_SIGNATURE_SKY, 0x10);
        if (compare_result < 0) {
            next_node = (uint64_t *)current_node[2];
            current_node = parent_node;
        } else {
            next_node = (uint64_t *)*current_node;
        }
        parent_node = current_node;
        current_node = next_node;
        node_is_valid = *(char *)((uint64_t)next_node + 0x19);
    }
    
    if ((parent_node == root_node) || 
        (int compare_result = memcmp(&COMPONENT_SIGNATURE_SKY, parent_node + 4, 0x10), compare_result < 0)) {
        uint64_t allocation_size = FUN_18008f0d0(component_manager);
        FUN_18008f140(component_manager, &new_node, parent_node, allocation_size + 0x20, allocation_size);
        parent_node = new_node;
    }
    
    parent_node[6] = COMPONENT_TYPE_SKY;          // 天空组件类型ID
    parent_node[7] = COMPONENT_VERSION_SKY;        // 天空组件版本ID
    parent_node[8] = &COMPONENT_NAME_SKY;          // 天空组件名称
    parent_node[9] = COMPONENT_PRIORITY_SKY;        // 天空组件优先级
    parent_node[10] = component_handler;          // 天空组件处理函数
    
    return;
}

/**
 * 注册天气组件
 * 在全局组件注册表中注册天气组件，负责天气系统
 * 
 * 组件属性：
 * - 组件类型ID: 0x49086ba08ab981a7
 * - 组件版本ID: 0xa9191d34ad910696
 * - 组件名称: UNK_180a003b8
 * - 优先级: 0
 * - 处理函数: FUN_18025d270
 */
void 注册天气组件(void)
{
    char node_is_valid;
    uint64_t *component_manager;
    uint64_t *root_node;
    uint64_t *current_node;
    uint64_t *parent_node;
    uint64_t *next_node;
    uint64_t *new_node;
    void (*component_handler)(void);
    
    component_manager = (uint64_t *)FUN_18008d070();
    root_node = (uint64_t *)*component_manager;
    node_is_valid = *(char *)((uint64_t)root_node[1] + 0x19);
    component_handler = FUN_18025d270;
    parent_node = root_node;
    current_node = (uint64_t *)root_node[1];
    
    while (node_is_valid == '\0') {
        int compare_result = memcmp(current_node + 4, &COMPONENT_SIGNATURE_WEATHER, 0x10);
        if (compare_result < 0) {
            next_node = (uint64_t *)current_node[2];
            current_node = parent_node;
        } else {
            next_node = (uint64_t *)*current_node;
        }
        parent_node = current_node;
        current_node = next_node;
        node_is_valid = *(char *)((uint64_t)next_node + 0x19);
    }
    
    if ((parent_node == root_node) || 
        (int compare_result = memcmp(&COMPONENT_SIGNATURE_WEATHER, parent_node + 4, 0x10), compare_result < 0)) {
        uint64_t allocation_size = FUN_18008f0d0(component_manager);
        FUN_18008f140(component_manager, &new_node, parent_node, allocation_size + 0x20, allocation_size);
        parent_node = new_node;
    }
    
    parent_node[6] = COMPONENT_TYPE_WEATHER;       // 天气组件类型ID
    parent_node[7] = COMPONENT_VERSION_WEATHER;     // 天气组件版本ID
    parent_node[8] = &COMPONENT_NAME_WEATHER;       // 天气组件名称
    parent_node[9] = COMPONENT_PRIORITY_WEATHER;    // 天气组件优先级
    parent_node[10] = (uint64_t)component_handler; // 天气组件处理函数
    
    return;
}

// 组件签名常量定义
#define COMPONENT_SIGNATURE_BASE_SCENE        system_data_f9c0
#define COMPONENT_SIGNATURE_RENDER           system_data_10a0
#define COMPONENT_SIGNATURE_PHYSICS          system_data_1078
#define COMPONENT_SIGNATURE_AUDIO            system_data_1050
#define COMPONENT_SIGNATURE_INPUT            system_data_1028
#define COMPONENT_SIGNATURE_NETWORK          system_data_1000
#define COMPONENT_SIGNATURE_SCRIPT           system_data_0fd8
#define COMPONENT_SIGNATURE_RESOURCE         system_data_0fb0
#define COMPONENT_SIGNATURE_AI               system_data_0bb0
#define COMPONENT_SIGNATURE_ANIMATION        system_data_0b88
#define COMPONENT_SIGNATURE_UI               system_data_10a0
#define COMPONENT_SIGNATURE_PARTICLE         system_data_1078
#define COMPONENT_SIGNATURE_TERRAIN          system_data_1050
#define COMPONENT_SIGNATURE_LIGHTING         system_data_1028
#define COMPONENT_SIGNATURE_MATERIAL         system_data_1000
#define COMPONENT_SIGNATURE_SHADER           system_data_0fd8
#define COMPONENT_SIGNATURE_TEXTURE          system_data_0fb0
#define COMPONENT_SIGNATURE_GAME_LOGIC       system_data_0e28
#define COMPONENT_SIGNATURE_SCENE_MANAGER    system_data_0d48
#define COMPONENT_SIGNATURE_BEHAVIOR_TREE    system_data_0bb0
#define COMPONENT_SIGNATURE_SKELETAL_ANIMATION system_data_0b88
#define COMPONENT_SIGNATURE_CAMERA           system_data_e0d0
#define COMPONENT_SIGNATURE_POST_PROCESS     system_data_10a0
#define COMPONENT_SIGNATURE_WATER            system_data_1078
#define COMPONENT_SIGNATURE_SKY              system_data_1050
#define COMPONENT_SIGNATURE_WEATHER          system_data_1028

// 组件类型ID常量定义
#define COMPONENT_TYPE_BASE_SCENE       0x40afa5469b6ac06d
#define COMPONENT_TYPE_RENDER          0x43330a43fcdb3653
#define COMPONENT_TYPE_PHYSICS         0x431d7c8d7c475be2
#define COMPONENT_TYPE_AUDIO           0x4b2d79e470ee4e2c
#define COMPONENT_TYPE_INPUT           0x49086ba08ab981a7
#define COMPONENT_TYPE_NETWORK         0x402feffe4481676e
#define COMPONENT_TYPE_SCRIPT          0x4384dcc4b6d3f417
#define COMPONENT_TYPE_RESOURCE         0x4140994454d56503
#define COMPONENT_TYPE_AI              0x40db4257e97d3df8
#define COMPONENT_TYPE_ANIMATION       0x4e33c4803e67a08f
#define COMPONENT_TYPE_UI              0x43330a43fcdb3653
#define COMPONENT_TYPE_PARTICLE        0x431d7c8d7c475be2
#define COMPONENT_TYPE_TERRAIN         0x4b2d79e470ee4e2c
#define COMPONENT_TYPE_LIGHTING        0x49086ba08ab981a7
#define COMPONENT_TYPE_MATERIAL        0x402feffe4481676e
#define COMPONENT_TYPE_SHADER          0x4384dcc4b6d3f417
#define COMPONENT_TYPE_TEXTURE         0x4140994454d56503
#define COMPONENT_TYPE_GAME_LOGIC      0x449bafe9b77ddd3c
#define COMPONENT_TYPE_SCENE_MANAGER   0x45425dc186a5d575
#define COMPONENT_TYPE_BEHAVIOR_TREE   0x40db4257e97d3df8
#define COMPONENT_TYPE_SKELETAL_ANIMATION 0x4e33c4803e67a08f
#define COMPONENT_TYPE_CAMERA          0x42bea5b911d9c4bf
#define COMPONENT_TYPE_POST_PROCESS    0x43330a43fcdb3653
#define COMPONENT_TYPE_WATER           0x431d7c8d7c475be2
#define COMPONENT_TYPE_SKY             0x4b2d79e470ee4e2c
#define COMPONENT_TYPE_WEATHER         0x49086ba08ab981a7

// 组件版本ID常量定义
#define COMPONENT_VERSION_BASE_SCENE   0x2f4bab01d34055a5
#define COMPONENT_VERSION_RENDER       0xdcfdc333a769ec93
#define COMPONENT_VERSION_PHYSICS      0xb97f048d2153e1b0
#define COMPONENT_VERSION_AUDIO        0x9c552acd3ed5548d
#define COMPONENT_VERSION_INPUT        0xa9191d34ad910696
#define COMPONENT_VERSION_NETWORK      0xd4c2151109de93a0
#define COMPONENT_VERSION_SCRIPT       0x92a15d52fe2679bd
#define COMPONENT_VERSION_RESOURCE      0x399eced9bb5517ad
#define COMPONENT_VERSION_AI            0x81d539e33614429f
#define COMPONENT_VERSION_ANIMATION     0x703a29a844ce399
#define COMPONENT_VERSION_UI            0xdcfdc333a769ec93
#define COMPONENT_VERSION_PARTICLE      0xb97f048d2153e1b0
#define COMPONENT_VERSION_TERRAIN       0x9c552acd3ed5548d
#define COMPONENT_VERSION_LIGHTING      0xa9191d34ad910696
#define COMPONENT_VERSION_MATERIAL      0xd4c2151109de93a0
#define COMPONENT_VERSION_SHADER        0x92a15d52fe2679bd
#define COMPONENT_VERSION_TEXTURE       0x399eced9bb5517ad
#define COMPONENT_VERSION_GAME_LOGIC    0xc160408bde99e59f
#define COMPONENT_VERSION_SCENE_MANAGER 0xfab48faa65382fa5
#define COMPONENT_VERSION_BEHAVIOR_TREE 0x81d539e33614429f
#define COMPONENT_VERSION_SKELETAL_ANIMATION 0x703a29a844ce399
#define COMPONENT_VERSION_CAMERA        0x1aa83fc0020dc1b6
#define COMPONENT_VERSION_POST_PROCESS  0xdcfdc333a769ec93
#define COMPONENT_VERSION_WATER         0xb97f048d2153e1b0
#define COMPONENT_VERSION_SKY           0x9c552acd3ed5548d
#define COMPONENT_VERSION_WEATHER       0xa9191d34ad910696

// 组件名称常量定义
#define COMPONENT_NAME_BASE_SCENE       UNK_1809ff990
#define COMPONENT_NAME_RENDER          UNK_180a00370
#define COMPONENT_NAME_PHYSICS         UNK_180a00388
#define COMPONENT_NAME_AUDIO           UNK_180a003a0
#define COMPONENT_NAME_INPUT           UNK_180a003b8
#define COMPONENT_NAME_NETWORK         UNK_180a003d0
#define COMPONENT_NAME_SCRIPT          UNK_180a003e8
#define COMPONENT_NAME_RESOURCE         UNK_180a00400
#define COMPONENT_NAME_AI              UNK_180a004a8
#define COMPONENT_NAME_ANIMATION       UNK_180a004c0
#define COMPONENT_NAME_UI              UNK_180a00370
#define COMPONENT_NAME_PARTICLE        UNK_180a00388
#define COMPONENT_NAME_TERRAIN         UNK_180a003a0
#define COMPONENT_NAME_LIGHTING        UNK_180a003b8
#define COMPONENT_NAME_MATERIAL        UNK_180a003d0
#define COMPONENT_NAME_SHADER          UNK_180a003e8
#define COMPONENT_NAME_TEXTURE         UNK_180a00400
#define COMPONENT_NAME_GAME_LOGIC      UNK_180a00430
#define COMPONENT_NAME_SCENE_MANAGER   UNK_180a00460
#define COMPONENT_NAME_BEHAVIOR_TREE   UNK_180a004a8
#define COMPONENT_NAME_SKELETAL_ANIMATION UNK_180a004c0
#define COMPONENT_NAME_CAMERA          UNK_1809fd0d8
#define COMPONENT_NAME_POST_PROCESS    UNK_180a00370
#define COMPONENT_NAME_WATER           UNK_180a00388
#define COMPONENT_NAME_SKY             UNK_180a003a0
#define COMPONENT_NAME_WEATHER         UNK_180a003b8

// 组件优先级常量定义
#define COMPONENT_PRIORITY_BASE_SCENE   3
#define COMPONENT_PRIORITY_RENDER       1
#define COMPONENT_PRIORITY_PHYSICS      4
#define COMPONENT_PRIORITY_AUDIO        0
#define COMPONENT_PRIORITY_INPUT        0
#define COMPONENT_PRIORITY_NETWORK      0
#define COMPONENT_PRIORITY_SCRIPT       0
#define COMPONENT_PRIORITY_RESOURCE      0
#define COMPONENT_PRIORITY_AI           4
#define COMPONENT_PRIORITY_ANIMATION     3
#define COMPONENT_PRIORITY_UI           1
#define COMPONENT_PRIORITY_PARTICLE      4
#define COMPONENT_PRIORITY_TERRAIN       0
#define COMPONENT_PRIORITY_LIGHTING      0
#define COMPONENT_PRIORITY_MATERIAL      0
#define COMPONENT_PRIORITY_SHADER        0
#define COMPONENT_PRIORITY_TEXTURE       0
#define COMPONENT_PRIORITY_GAME_LOGIC    0
#define COMPONENT_PRIORITY_SCENE_MANAGER 0
#define COMPONENT_PRIORITY_BEHAVIOR_TREE 4
#define COMPONENT_PRIORITY_SKELETAL_ANIMATION 3
#define COMPONENT_PRIORITY_CAMERA        0
#define COMPONENT_PRIORITY_POST_PROCESS  1
#define COMPONENT_PRIORITY_WATER         4
#define COMPONENT_PRIORITY_SKY           0
#define COMPONENT_PRIORITY_WEATHER       0

// 组件处理函数常量定义
#define SCRIPT_ENGINE_HANDLER           UNK_1800868c0
#define SHADER_ENGINE_HANDLER           UNK_1800868c0