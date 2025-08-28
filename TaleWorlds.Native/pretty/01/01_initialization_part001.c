#include "TaleWorlds.Native.Split.h"

// 01_initialization_part001.c - 41 个函数

// 全局组件注册表根节点
component_registry_t* global_registry_root = (component_registry_t*)0x1809fc768;

// 初始化注册表键值对数组
registry_key_pair_t initialization_key_pairs[] = {
    {0x18098c7a0, "tw_engine"},      // 引擎组件注册键
    {0x18098c7a8, "tw_render"},     // 渲染组件注册键
    {0x18098c7b0, "tw_input"},      // 输入组件注册键
    {0x18098c7b8, "tw_audio"},      // 音频组件注册键
    {0x18098c7c0, "tw_physics"},    // 物理组件注册键
    {0x18098c7c8, "tw_network"},    // 网络组件注册键
    {0x18098c7d0, "tw_ui"},         // UI组件注册键
    {0x18098c7d8, "tw_resources"},  // 资源组件注册键
    {0x18098c7e0, "tw_scene"},      // 场景组件注册键
    {0x18098c7e8, "tw_animation"}   // 动画组件注册键
};

/**
 * @brief 注册引擎核心组件
 * @param component_id 组件ID
 * @param component_data 组件数据指针
 * @return 注册成功返回0，失败返回-1
 */
int register_engine_component(uint64_t component_id, void* component_data) {
    if (!global_registry_root || !component_data) {
        return -1;
    }
    
    component_registry_t* engine_registry = global_registry_root->next;
    if (!engine_registry) {
        engine_registry = create_component_registry("engine", 0x1000);
        global_registry_root->next = engine_registry;
    }
    
    return add_component_entry(engine_registry, component_id, component_data);
}

/**
 * @brief 注册渲染系统组件
 * @param component_id 组件ID
 * @param render_context 渲染上下文指针
 * @return 注册成功返回0，失败返回-1
 */
int register_render_component(uint64_t component_id, void* render_context) {
    if (!global_registry_root || !render_context) {
        return -1;
    }
    
    component_registry_t* render_registry = global_registry_root->next;
    while (render_registry && render_registry->component_type != 0x2000) {
        render_registry = render_registry->next;
    }
    
    if (!render_registry) {
        render_registry = create_component_registry("render", 0x2000);
        // 添加到链表末尾
        component_registry_t* current = global_registry_root->next;
        while (current->next) {
            current = current->next;
        }
        current->next = render_registry;
    }
    
    return add_component_entry(render_registry, component_id, render_context);
}

/**
 * @brief 注册输入系统组件
 * @param component_id 组件ID
 * @param input_handler 输入处理器指针
 * @return 注册成功返回0，失败返回-1
 */
int register_input_component(uint64_t component_id, void* input_handler) {
    if (!global_registry_root || !input_handler) {
        return -1;
    }
    
    component_registry_t* input_registry = global_registry_root->next;
    while (input_registry && input_registry->component_type != 0x3000) {
        input_registry = input_registry->next;
    }
    
    if (!input_registry) {
        input_registry = create_component_registry("input", 0x3000);
        // 添加到链表末尾
        component_registry_t* current = global_registry_root->next;
        while (current->next) {
            current = current->next;
        }
        current->next = input_registry;
    }
    
    return add_component_entry(input_registry, component_id, input_handler);
}

/**
 * @brief 注册音频系统组件
 * @param component_id 组件ID
 * @param audio_context 音频上下文指针
 * @return 注册成功返回0，失败返回-1
 */
int register_audio_component(uint64_t component_id, void* audio_context) {
    if (!global_registry_root || !audio_context) {
        return -1;
    }
    
    component_registry_t* audio_registry = global_registry_root->next;
    while (audio_registry && audio_registry->component_type != 0x4000) {
        audio_registry = audio_registry->next;
    }
    
    if (!audio_registry) {
        audio_registry = create_component_registry("audio", 0x4000);
        // 添加到链表末尾
        component_registry_t* current = global_registry_root->next;
        while (current->next) {
            current = current->next;
        }
        current->next = audio_registry;
    }
    
    return add_component_entry(audio_registry, component_id, audio_context);
}

/**
 * @brief 注册物理系统组件
 * @param component_id 组件ID
 * @param physics_context 物理上下文指针
 * @return 注册成功返回0，失败返回-1
 */
int register_physics_component(uint64_t component_id, void* physics_context) {
    if (!global_registry_root || !physics_context) {
        return -1;
    }
    
    component_registry_t* physics_registry = global_registry_root->next;
    while (physics_registry && physics_registry->component_type != 0x5000) {
        physics_registry = physics_registry->next;
    }
    
    if (!physics_registry) {
        physics_registry = create_component_registry("physics", 0x5000);
        // 添加到链表末尾
        component_registry_t* current = global_registry_root->next;
        while (current->next) {
            current = current->next;
        }
        current->next = physics_registry;
    }
    
    return add_component_entry(physics_registry, component_id, physics_context);
}

/**
 * @brief 注册网络系统组件
 * @param component_id 组件ID
 * @param network_context 网络上下文指针
 * @return 注册成功返回0，失败返回-1
 */
int register_network_component(uint64_t component_id, void* network_context) {
    if (!global_registry_root || !network_context) {
        return -1;
    }
    
    component_registry_t* network_registry = global_registry_root->next;
    while (network_registry && network_registry->component_type != 0x6000) {
        network_registry = network_registry->next;
    }
    
    if (!network_registry) {
        network_registry = create_component_registry("network", 0x6000);
        // 添加到链表末尾
        component_registry_t* current = global_registry_root->next;
        while (current->next) {
            current = current->next;
        }
        current->next = network_registry;
    }
    
    return add_component_entry(network_registry, component_id, network_context);
}

/**
 * @brief 注册UI系统组件
 * @param component_id 组件ID
 * @param ui_context UI上下文指针
 * @return 注册成功返回0，失败返回-1
 */
int register_ui_component(uint64_t component_id, void* ui_context) {
    if (!global_registry_root || !ui_context) {
        return -1;
    }
    
    component_registry_t* ui_registry = global_registry_root->next;
    while (ui_registry && ui_registry->component_type != 0x7000) {
        ui_registry = ui_registry->next;
    }
    
    if (!ui_registry) {
        ui_registry = create_component_registry("ui", 0x7000);
        // 添加到链表末尾
        component_registry_t* current = global_registry_root->next;
        while (current->next) {
            current = current->next;
        }
        current->next = ui_registry;
    }
    
    return add_component_entry(ui_registry, component_id, ui_context);
}

/**
 * @brief 注册资源管理组件
 * @param component_id 组件ID
 * @param resource_context 资源上下文指针
 * @return 注册成功返回0，失败返回-1
 */
int register_resource_component(uint64_t component_id, void* resource_context) {
    if (!global_registry_root || !resource_context) {
        return -1;
    }
    
    component_registry_t* resource_registry = global_registry_root->next;
    while (resource_registry && resource_registry->component_type != 0x8000) {
        resource_registry = resource_registry->next;
    }
    
    if (!resource_registry) {
        resource_registry = create_component_registry("resource", 0x8000);
        // 添加到链表末尾
        component_registry_t* current = global_registry_root->next;
        while (current->next) {
            current = current->next;
        }
        current->next = resource_registry;
    }
    
    return add_component_entry(resource_registry, component_id, resource_context);
}

/**
 * @brief 注册场景管理组件
 * @param component_id 组件ID
 * @param scene_context 场景上下文指针
 * @return 注册成功返回0，失败返回-1
 */
int register_scene_component(uint64_t component_id, void* scene_context) {
    if (!global_registry_root || !scene_context) {
        return -1;
    }
    
    component_registry_t* scene_registry = global_registry_root->next;
    while (scene_registry && scene_registry->component_type != 0x9000) {
        scene_registry = scene_registry->next;
    }
    
    if (!scene_registry) {
        scene_registry = create_component_registry("scene", 0x9000);
        // 添加到链表末尾
        component_registry_t* current = global_registry_root->next;
        while (current->next) {
            current = current->next;
        }
        current->next = scene_registry;
    }
    
    return add_component_entry(scene_registry, component_id, scene_context);
}

/**
 * @brief 注册动画系统组件
 * @param component_id 组件ID
 * @param animation_context 动画上下文指针
 * @return 注册成功返回0，失败返回-1
 */
int register_animation_component(uint64_t component_id, void* animation_context) {
    if (!global_registry_root || !animation_context) {
        return -1;
    }
    
    component_registry_t* animation_registry = global_registry_root->next;
    while (animation_registry && animation_registry->component_type != 0xA000) {
        animation_registry = animation_registry->next;
    }
    
    if (!animation_registry) {
        animation_registry = create_component_registry("animation", 0xA000);
        // 添加到链表末尾
        component_registry_t* current = global_registry_root->next;
        while (current->next) {
            current = current->next;
        }
        current->next = animation_registry;
    }
    
    return add_component_entry(animation_registry, component_id, animation_context);
}

/**
 * @brief 创建组件注册表
 * @param name 注册表名称
 * @param component_type 组件类型
 * @return 新创建的组件注册表指针
 */
component_registry_t* create_component_registry(const char* name, uint32_t component_type) {
    component_registry_t* registry = (component_registry_t*)malloc(sizeof(component_registry_t));
    if (!registry) {
        return NULL;
    }
    
    registry->name = strdup(name);
    registry->component_type = component_type;
    registry->component_count = 0;
    registry->components = NULL;
    registry->next = NULL;
    
    return registry;
}

/**
 * @brief 添加组件条目到注册表
 * @param registry 目标注册表
 * @param component_id 组件ID
 * @param component_data 组件数据指针
 * @return 添加成功返回0，失败返回-1
 */
int add_component_entry(component_registry_t* registry, uint64_t component_id, void* component_data) {
    if (!registry || !component_data) {
        return -1;
    }
    
    // 检查是否已存在相同ID的组件
    for (int i = 0; i < registry->component_count; i++) {
        if (registry->components[i].component_id == component_id) {
            return -1; // 组件已存在
        }
    }
    
    // 扩展组件数组
    component_entry_t* new_components = (component_entry_t*)realloc(
        registry->components, 
        (registry->component_count + 1) * sizeof(component_entry_t)
    );
    
    if (!new_components) {
        return -1;
    }
    
    registry->components = new_components;
    registry->components[registry->component_count].component_id = component_id;
    registry->components[registry->component_count].component_data = component_data;
    registry->component_count++;
    
    return 0;
}

/**
 * @brief 初始化全局组件注册系统
 * @return 初始化成功返回0，失败返回-1
 */
int initialize_global_registry() {
    if (global_registry_root) {
        return 0; // 已经初始化
    }
    
    global_registry_root = create_component_registry("root", 0);
    if (!global_registry_root) {
        return -1;
    }
    
    return 0;
}

/**
 * @brief 清理全局组件注册系统
 */
void cleanup_global_registry() {
    if (!global_registry_root) {
        return;
    }
    
    component_registry_t* current = global_registry_root;
    while (current) {
        component_registry_t* next = current->next;
        
        // 释放组件数组
        if (current->components) {
            free(current->components);
        }
        
        // 释放名称字符串
        if (current->name) {
            free(current->name);
        }
        
        // 释放注册表结构
        free(current);
        current = next;
    }
    
    global_registry_root = NULL;
}

/**
 * @brief 根据名称查找组件注册表
 * @param name 注册表名称
 * @return 找到的注册表指针，未找到返回NULL
 */
component_registry_t* find_registry_by_name(const char* name) {
    if (!global_registry_root || !name) {
        return NULL;
    }
    
    component_registry_t* current = global_registry_root->next;
    while (current) {
        if (strcmp(current->name, name) == 0) {
            return current;
        }
        current = current->next;
    }
    
    return NULL;
}

/**
 * @brief 根据类型查找组件注册表
 * @param component_type 组件类型
 * @return 找到的注册表指针，未找到返回NULL
 */
component_registry_t* find_registry_by_type(uint32_t component_type) {
    if (!global_registry_root) {
        return NULL;
    }
    
    component_registry_t* current = global_registry_root->next;
    while (current) {
        if (current->component_type == component_type) {
            return current;
        }
        current = current->next;
    }
    
    return NULL;
}

/**
 * @brief 从注册表中获取组件数据
 * @param registry 目标注册表
 * @param component_id 组件ID
 * @return 组件数据指针，未找到返回NULL
 */
void* get_component_data(component_registry_t* registry, uint64_t component_id) {
    if (!registry) {
        return NULL;
    }
    
    for (int i = 0; i < registry->component_count; i++) {
        if (registry->components[i].component_id == component_id) {
            return registry->components[i].component_data;
        }
    }
    
    return NULL;
}

/**
 * @brief 从注册表中移除组件
 * @param registry 目标注册表
 * @param component_id 组件ID
 * @return 移除成功返回0，失败返回-1
 */
int remove_component_from_registry(component_registry_t* registry, uint64_t component_id) {
    if (!registry) {
        return -1;
    }
    
    for (int i = 0; i < registry->component_count; i++) {
        if (registry->components[i].component_id == component_id) {
            // 移动数组元素填补空缺
            for (int j = i; j < registry->component_count - 1; j++) {
                registry->components[j] = registry->components[j + 1];
            }
            
            // 缩小组件数组
            component_entry_t* new_components = (component_entry_t*)realloc(
                registry->components, 
                (registry->component_count - 1) * sizeof(component_entry_t)
            );
            
            if (new_components || registry->component_count == 1) {
                registry->components = new_components;
                registry->component_count--;
                return 0;
            }
        }
    }
    
    return -1;
}

/**
 * @brief 获取注册表中的组件数量
 * @param registry 目标注册表
 * @return 组件数量
 */
int get_registry_component_count(component_registry_t* registry) {
    if (!registry) {
        return 0;
    }
    return registry->component_count;
}

/**
 * @brief 遍历注册表中的所有组件
 * @param registry 目标注册表
 * @param callback 回调函数
 * @param user_data 用户数据指针
 */
void iterate_registry_components(component_registry_t* registry, 
                              component_callback_t callback, 
                              void* user_data) {
    if (!registry || !callback) {
        return;
    }
    
    for (int i = 0; i < registry->component_count; i++) {
        callback(registry->components[i].component_id, 
                registry->components[i].component_data, 
                user_data);
    }
}

/**
 * @brief 获取注册表类型字符串
 * @param component_type 组件类型
 * @return 类型字符串
 */
const char* get_component_type_string(uint32_t component_type) {
    switch (component_type) {
        case 0x0000: return "root";
        case 0x1000: return "engine";
        case 0x2000: return "render";
        case 0x3000: return "input";
        case 0x4000: return "audio";
        case 0x5000: return "physics";
        case 0x6000: return "network";
        case 0x7000: return "ui";
        case 0x8000: return "resource";
        case 0x9000: return "scene";
        case 0xA000: return "animation";
        default: return "unknown";
    }
}

/**
 * @brief 打印注册表信息（调试用）
 * @param registry 目标注册表
 */
void print_registry_info(component_registry_t* registry) {
    if (!registry) {
        printf("Registry is NULL\n");
        return;
    }
    
    printf("Registry: %s (type: %s)\n", 
           registry->name, 
           get_component_type_string(registry->component_type));
    printf("Component count: %d\n", registry->component_count);
    
    for (int i = 0; i < registry->component_count; i++) {
        printf("  Component %d: ID=0x%llx, Data=%p\n", 
               i, 
               registry->components[i].component_id,
               registry->components[i].component_data);
    }
}

/**
 * @brief 打印全局注册表信息（调试用）
 */
void print_global_registry_info() {
    if (!global_registry_root) {
        printf("Global registry is not initialized\n");
        return;
    }
    
    printf("=== Global Registry Info ===\n");
    component_registry_t* current = global_registry_root;
    while (current) {
        print_registry_info(current);
        current = current->next;
    }
    printf("============================\n");
}

/**
 * @brief 验证注册表完整性
 * @param registry 目标注册表
 * @return 验证通过返回0，失败返回-1
 */
int validate_registry_integrity(component_registry_t* registry) {
    if (!registry) {
        return -1;
    }
    
    // 检查名称
    if (!registry->name) {
        return -1;
    }
    
    // 检查组件数组一致性
    if (registry->component_count > 0 && !registry->components) {
        return -1;
    }
    
    if (registry->component_count == 0 && registry->components) {
        return -1;
    }
    
    // 检查组件ID唯一性
    for (int i = 0; i < registry->component_count; i++) {
        for (int j = i + 1; j < registry->component_count; j++) {
            if (registry->components[i].component_id == registry->components[j].component_id) {
                return -1;
            }
        }
    }
    
    return 0;
}

/**
 * @brief 验证全局注册表完整性
 * @return 验证通过返回0，失败返回-1
 */
int validate_global_registry_integrity() {
    if (!global_registry_root) {
        return -1;
    }
    
    component_registry_t* current = global_registry_root;
    while (current) {
        if (validate_registry_integrity(current) != 0) {
            return -1;
        }
        current = current->next;
    }
    
    return 0;
}