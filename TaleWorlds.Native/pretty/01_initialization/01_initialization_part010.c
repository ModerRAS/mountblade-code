#include "TaleWorlds.Native.Split.h"

// 01_initialization_part010.c - 系统组件注册和初始化函数
// 本文件包含28个函数，主要用于注册和初始化各种系统组件

/**
 * 注册基础系统组件
 * 在系统注册表中注册一个基础系统组件，包含特定的标识符和参数
 */
void register_base_system_component(void)
{
    char component_flag;
    uint64_t *registry_root;
    int compare_result;
    int64_t *system_manager;
    int64_t allocation_size;
    uint64_t *current_node;
    uint64_t *previous_node;
    uint64_t *next_node;
    uint64_t *new_node;
    uint64_t null_parameter;
    
    system_manager = (int64_t *)get_system_manager();
    registry_root = (uint64_t *)*system_manager;
    component_flag = *(char *)((int64_t)registry_root[1] + 0x19);
    null_parameter = 0;
    previous_node = registry_root;
    current_node = (uint64_t *)registry_root[1];
    
    // 在注册表中查找合适的位置
    while (component_flag == '\0') {
        compare_result = memcmp(current_node + 4, &base_system_identifier_00fb0, 0x10);
        if (compare_result < 0) {
            next_node = (uint64_t *)current_node[2];
            current_node = previous_node;
        } else {
            next_node = (uint64_t *)*current_node;
        }
        previous_node = current_node;
        current_node = next_node;
        component_flag = *(char *)((int64_t)next_node + 0x19);
    }
    
    // 如果需要创建新节点
    if ((previous_node == registry_root) || (compare_result = memcmp(&base_system_identifier_00fb0, previous_node + 4, 0x10), compare_result < 0)) {
        allocation_size = allocate_registry_node(system_manager);
        insert_registry_node(system_manager, &new_node, previous_node, allocation_size + 0x20, allocation_size);
        previous_node = new_node;
    }
    
    // 设置系统组件参数
    previous_node[6] = 0x4140994454d56503;  // 组件标识符
    previous_node[7] = 0x399eced9bb5517ad;  // 校验值
    previous_node[8] = &system_constant_00400;  // 系统常量指针
    previous_node[9] = 0;                    // 优先级
    previous_node[10] = null_parameter;     // 额外参数
    return;
}





/**
 * 注册输入处理系统组件
 * 在系统注册表中注册输入处理系统组件，包含特定的处理函数和参数
 */
void register_input_system_component(void)
{
    char component_flag;
    uint64_t *registry_root;
    int compare_result;
    int64_t *system_manager;
    int64_t allocation_size;
    uint64_t *current_node;
    uint64_t *previous_node;
    uint64_t *next_node;
    uint64_t *new_node;
    void *input_handler;
    
    system_manager = (int64_t *)get_system_manager();
    registry_root = (uint64_t *)*system_manager;
    component_flag = *(char *)((int64_t)registry_root[1] + 0x19);
    input_handler = input_handler_25cc00;
    previous_node = registry_root;
    current_node = (uint64_t *)registry_root[1];
    
    // 在注册表中查找合适的位置
    while (component_flag == '\0') {
        compare_result = memcmp(current_node + 4, &input_system_identifier_010a0, 0x10);
        if (compare_result < 0) {
            next_node = (uint64_t *)current_node[2];
            current_node = previous_node;
        } else {
            next_node = (uint64_t *)*current_node;
        }
        previous_node = current_node;
        current_node = next_node;
        component_flag = *(char *)((int64_t)next_node + 0x19);
    }
    
    // 如果需要创建新节点
    if ((previous_node == registry_root) || (compare_result = memcmp(&input_system_identifier_010a0, previous_node + 4, 0x10), compare_result < 0)) {
        allocation_size = allocate_registry_node(system_manager);
        insert_registry_node(system_manager, &new_node, previous_node, allocation_size + 0x20, allocation_size);
        previous_node = new_node;
    }
    
    // 设置输入系统组件参数
    previous_node[6] = 0x43330a43fcdb3653;  // 输入系统标识符
    previous_node[7] = 0xdcfdc333a769ec93;  // 校验值
    previous_node[8] = &input_constant_00370;  // 输入常量指针
    previous_node[9] = 1;                    // 系统类型标识
    previous_node[10] = input_handler;      // 输入处理函数指针
    return;
}





/**
 * 注册渲染系统组件
 * 在系统注册表中注册渲染系统组件，包含特定的渲染处理函数和参数
 */
void register_render_system_component(void)
{
    char component_flag;
    uint64_t *registry_root;
    int compare_result;
    int64_t *system_manager;
    int64_t allocation_size;
    uint64_t *current_node;
    uint64_t *previous_node;
    uint64_t *next_node;
    uint64_t *new_node;
    void *render_handler;
    
    system_manager = (int64_t *)get_system_manager();
    registry_root = (uint64_t *)*system_manager;
    component_flag = *(char *)((int64_t)registry_root[1] + 0x19);
    render_handler = render_handler_25c000;
    previous_node = registry_root;
    current_node = (uint64_t *)registry_root[1];
    
    // 在注册表中查找合适的位置
    while (component_flag == '\0') {
        compare_result = memcmp(current_node + 4, &render_system_identifier_01078, 0x10);
        if (compare_result < 0) {
            next_node = (uint64_t *)current_node[2];
            current_node = previous_node;
        } else {
            next_node = (uint64_t *)*current_node;
        }
        previous_node = current_node;
        current_node = next_node;
        component_flag = *(char *)((int64_t)next_node + 0x19);
    }
    
    // 如果需要创建新节点
    if ((previous_node == registry_root) || (compare_result = memcmp(&render_system_identifier_01078, previous_node + 4, 0x10), compare_result < 0)) {
        allocation_size = allocate_registry_node(system_manager);
        insert_registry_node(system_manager, &new_node, previous_node, allocation_size + 0x20, allocation_size);
        previous_node = new_node;
    }
    
    // 设置渲染系统组件参数
    previous_node[6] = 0x431d7c8d7c475be2;  // 渲染系统标识符
    previous_node[7] = 0xb97f048d2153e1b0;  // 校验值
    previous_node[8] = &render_constant_00388;  // 渲染常量指针
    previous_node[9] = 4;                    // 渲染类型标识
    previous_node[10] = render_handler;      // 渲染处理函数指针
    return;
}





/**
 * 注册音频系统组件
 * 在系统注册表中注册音频系统组件，包含特定的音频处理参数
 */
void register_audio_system_component(void)
{
    char component_flag;
    uint64_t *registry_root;
    int compare_result;
    int64_t *system_manager;
    int64_t allocation_size;
    uint64_t *current_node;
    uint64_t *previous_node;
    uint64_t *next_node;
    uint64_t *new_node;
    uint64_t null_parameter;
    
    system_manager = (int64_t *)get_system_manager();
    registry_root = (uint64_t *)*system_manager;
    component_flag = *(char *)((int64_t)registry_root[1] + 0x19);
    null_parameter = 0;
    previous_node = registry_root;
    current_node = (uint64_t *)registry_root[1];
    
    // 在注册表中查找合适的位置
    while (component_flag == '\0') {
        compare_result = memcmp(current_node + 4, &audio_system_identifier_01050, 0x10);
        if (compare_result < 0) {
            next_node = (uint64_t *)current_node[2];
            current_node = previous_node;
        } else {
            next_node = (uint64_t *)*current_node;
        }
        previous_node = current_node;
        current_node = next_node;
        component_flag = *(char *)((int64_t)next_node + 0x19);
    }
    
    // 如果需要创建新节点
    if ((previous_node == registry_root) || (compare_result = memcmp(&audio_system_identifier_01050, previous_node + 4, 0x10), compare_result < 0)) {
        allocation_size = allocate_registry_node(system_manager);
        insert_registry_node(system_manager, &new_node, previous_node, allocation_size + 0x20, allocation_size);
        previous_node = new_node;
    }
    
    // 设置音频系统组件参数
    previous_node[6] = 0x4b2d79e470ee4e2c;  // 音频系统标识符
    previous_node[7] = 0x9c552acd3ed5548d;  // 校验值
    previous_node[8] = &audio_constant_003a0;  // 音频常量指针
    previous_node[9] = 0;                    // 优先级
    previous_node[10] = null_parameter;     // 额外参数
    return;
}





/**
 * 注册网络系统组件
 * 在系统注册表中注册网络系统组件，包含特定的网络处理函数和参数
 */
void register_network_system_component(void)
{
    char component_flag;
    uint64_t *registry_root;
    int compare_result;
    int64_t *system_manager;
    int64_t allocation_size;
    uint64_t *current_node;
    uint64_t *previous_node;
    uint64_t *next_node;
    uint64_t *new_node;
    void *network_handler;
    
    system_manager = (int64_t *)get_system_manager();
    registry_root = (uint64_t *)*system_manager;
    component_flag = *(char *)((int64_t)registry_root[1] + 0x19);
    network_handler = network_handler_25d270;
    previous_node = registry_root;
    current_node = (uint64_t *)registry_root[1];
    
    // 在注册表中查找合适的位置
    while (component_flag == '\0') {
        compare_result = memcmp(current_node + 4, &network_system_identifier_01028, 0x10);
        if (compare_result < 0) {
            next_node = (uint64_t *)current_node[2];
            current_node = previous_node;
        } else {
            next_node = (uint64_t *)*current_node;
        }
        previous_node = current_node;
        current_node = next_node;
        component_flag = *(char *)((int64_t)next_node + 0x19);
    }
    
    // 如果需要创建新节点
    if ((previous_node == registry_root) || (compare_result = memcmp(&network_system_identifier_01028, previous_node + 4, 0x10), compare_result < 0)) {
        allocation_size = allocate_registry_node(system_manager);
        insert_registry_node(system_manager, &new_node, previous_node, allocation_size + 0x20, allocation_size);
        previous_node = new_node;
    }
    
    // 设置网络系统组件参数
    previous_node[6] = 0x49086ba08ab981a7;  // 网络系统标识符
    previous_node[7] = 0xa9191d34ad910696;  // 校验值
    previous_node[8] = &network_constant_003b8;  // 网络常量指针
    previous_node[9] = 0;                    // 优先级
    previous_node[10] = network_handler;    // 网络处理函数指针
    return;
}





/**
 * 注册物理系统组件
 * 在系统注册表中注册物理系统组件，包含特定的物理处理参数
 */
void register_physics_system_component(void)
{
    char component_flag;
    uint64_t *registry_root;
    int compare_result;
    int64_t *system_manager;
    int64_t allocation_size;
    uint64_t *current_node;
    uint64_t *previous_node;
    uint64_t *next_node;
    uint64_t *new_node;
    uint64_t null_parameter;
    
    system_manager = (int64_t *)get_system_manager();
    registry_root = (uint64_t *)*system_manager;
    component_flag = *(char *)((int64_t)registry_root[1] + 0x19);
    null_parameter = 0;
    previous_node = registry_root;
    current_node = (uint64_t *)registry_root[1];
    
    // 在注册表中查找合适的位置
    while (component_flag == '\0') {
        compare_result = memcmp(current_node + 4, &physics_system_identifier_01000, 0x10);
        if (compare_result < 0) {
            next_node = (uint64_t *)current_node[2];
            current_node = previous_node;
        } else {
            next_node = (uint64_t *)*current_node;
        }
        previous_node = current_node;
        current_node = next_node;
        component_flag = *(char *)((int64_t)next_node + 0x19);
    }
    
    // 如果需要创建新节点
    if ((previous_node == registry_root) || (compare_result = memcmp(&physics_system_identifier_01000, previous_node + 4, 0x10), compare_result < 0)) {
        allocation_size = allocate_registry_node(system_manager);
        insert_registry_node(system_manager, &new_node, previous_node, allocation_size + 0x20, allocation_size);
        previous_node = new_node;
    }
    
    // 设置物理系统组件参数
    previous_node[6] = 0x402feffe4481676e;  // 物理系统标识符
    previous_node[7] = 0xd4c2151109de93a0;  // 校验值
    previous_node[8] = &physics_constant_003d0;  // 物理常量指针
    previous_node[9] = 0;                    // 优先级
    previous_node[10] = null_parameter;     // 额外参数
    return;
}





/**
 * 注册内存管理系统组件
 * 在系统注册表中注册内存管理系统组件，包含特定的内存处理函数和参数
 */
void register_memory_system_component(void)
{
    char component_flag;
    uint64_t *registry_root;
    int compare_result;
    int64_t *system_manager;
    int64_t allocation_size;
    uint64_t *current_node;
    uint64_t *previous_node;
    uint64_t *next_node;
    uint64_t *new_node;
    void *memory_handler;
    
    system_manager = (int64_t *)get_system_manager();
    registry_root = (uint64_t *)*system_manager;
    component_flag = *(char *)((int64_t)registry_root[1] + 0x19);
    memory_handler = memory_handler_0868c0;
    previous_node = registry_root;
    current_node = (uint64_t *)registry_root[1];
    
    // 在注册表中查找合适的位置
    while (component_flag == '\0') {
        compare_result = memcmp(current_node + 4, &memory_system_identifier_00fd8, 0x10);
        if (compare_result < 0) {
            next_node = (uint64_t *)current_node[2];
            current_node = previous_node;
        } else {
            next_node = (uint64_t *)*current_node;
        }
        previous_node = current_node;
        current_node = next_node;
        component_flag = *(char *)((int64_t)next_node + 0x19);
    }
    
    // 如果需要创建新节点
    if ((previous_node == registry_root) || (compare_result = memcmp(&memory_system_identifier_00fd8, previous_node + 4, 0x10), compare_result < 0)) {
        allocation_size = allocate_registry_node(system_manager);
        insert_registry_node(system_manager, &new_node, previous_node, allocation_size + 0x20, allocation_size);
        previous_node = new_node;
    }
    
    // 设置内存管理系统组件参数
    previous_node[6] = 0x4384dcc4b6d3f417;  // 内存系统标识符
    previous_node[7] = 0x92a15d52fe2679bd;  // 校验值
    previous_node[8] = &memory_constant_003e8;  // 内存常量指针
    previous_node[9] = 0;                    // 优先级
    previous_node[10] = memory_handler;      // 内存处理函数指针
    return;
}





/**
 * 注册文件系统组件
 * 在系统注册表中注册文件系统组件，包含特定的文件处理参数
 */
void register_file_system_component(void)
{
    char component_flag;
    uint64_t *registry_root;
    int compare_result;
    int64_t *system_manager;
    int64_t allocation_size;
    uint64_t *current_node;
    uint64_t *previous_node;
    uint64_t *next_node;
    uint64_t *new_node;
    uint64_t null_parameter;
    
    system_manager = (int64_t *)get_system_manager();
    registry_root = (uint64_t *)*system_manager;
    component_flag = *(char *)((int64_t)registry_root[1] + 0x19);
    null_parameter = 0;
    previous_node = registry_root;
    current_node = (uint64_t *)registry_root[1];
    
    // 在注册表中查找合适的位置
    while (component_flag == '\0') {
        compare_result = memcmp(current_node + 4, &file_system_identifier_00fb0, 0x10);
        if (compare_result < 0) {
            next_node = (uint64_t *)current_node[2];
            current_node = previous_node;
        } else {
            next_node = (uint64_t *)*current_node;
        }
        previous_node = current_node;
        current_node = next_node;
        component_flag = *(char *)((int64_t)next_node + 0x19);
    }
    
    // 如果需要创建新节点
    if ((previous_node == registry_root) || (compare_result = memcmp(&file_system_identifier_00fb0, previous_node + 4, 0x10), compare_result < 0)) {
        allocation_size = allocate_registry_node(system_manager);
        insert_registry_node(system_manager, &new_node, previous_node, allocation_size + 0x20, allocation_size);
        previous_node = new_node;
    }
    
    // 设置文件系统组件参数
    previous_node[6] = 0x4140994454d56503;  // 文件系统标识符
    previous_node[7] = 0x399eced9bb5517ad;  // 校验值
    previous_node[8] = &file_constant_00400;  // 文件常量指针
    previous_node[9] = 0;                    // 优先级
    previous_node[10] = null_parameter;     // 额外参数
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 初始化基础系统字符串
 * 设置基础系统的字符串常量和标识符，用于系统识别和初始化
 */
void initialize_base_system_strings(void)
{
    uint64_t reserved_param;
    void *string_table_ptr;
    uint8_t *string_buffer;
    uint32_t string_length;
    uint8_t local_buffer[136];
    
    string_table_ptr = &string_table_fcc28;
    string_buffer = local_buffer;
    local_buffer[0] = 0;
    string_length = 0x1b;  // 27字节
    
    // 复制基础系统字符串到本地缓冲区
    secure_string_copy(local_buffer, 0x80, &base_system_string_2ac10, reserved_param, 0xfffffffffffffffe);
    
    // 注册字符串到系统表中
    system_string_table_9246c = register_system_string(&string_table_ptr);
    return;
}



/**
 * 初始化系统核心模块
 * 初始化系统的核心功能模块，包括基础服务和管理器
 * @return 初始化成功返回0，失败返回-1
 */
int initialize_system_core_module(void)
{
    int64_t initialization_result;
    
    // 初始化系统核心服务
    initialize_core_services();
    
    // 验证核心模块初始化状态
    initialization_result = verify_module_initialization(core_module_function_942890);
    return (initialization_result != 0) - 1;
}



/**
 * 初始化系统配置模块
 * 初始化系统的配置管理模块，处理系统参数和设置
 * @return 初始化成功返回0，失败返回-1
 */
int initialize_system_config_module(void)
{
    int64_t initialization_result;
    uint8_t config_params[32];
    
    // 设置配置参数
    config_params[0] = 1;  // 启用配置模块
    
    // 注册配置参数
    register_config_parameters(&system_config_table_92490, config_params);
    
    // 验证配置模块初始化状态
    initialization_result = verify_module_initialization(config_module_function_9428e0);
    return (initialization_result != 0) - 1;
}



/**
 * 初始化系统资源模块
 * 初始化系统的资源管理模块，处理内存、文件等资源
 * @return 初始化成功返回0，失败返回-1
 */
int initialize_system_resource_module(void)
{
    int64_t initialization_result;
    uint8_t resource_params[32];
    
    // 设置资源参数
    resource_params[0] = 0;  // 初始状态
    
    // 注册资源参数
    register_resource_parameters(&system_resource_table_92480, resource_params);
    
    // 验证资源模块初始化状态
    initialization_result = verify_module_initialization(resource_module_function_942930);
    return (initialization_result != 0) - 1;
}



/**
 * 初始化系统调试模块
 * 初始化系统的调试和日志记录模块
 * @return 初始化成功返回0，失败返回-1
 */
int initialize_system_debug_module(void)
{
    int64_t initialization_result;
    
    // 验证调试模块初始化状态
    initialization_result = verify_module_initialization(debug_module_function_942a20);
    return (initialization_result != 0) - 1;
}



/**
 * 初始化系统性能模块
 * 初始化系统的性能监控和优化模块
 * @return 初始化成功返回0，失败返回-1
 */
int initialize_system_performance_module(void)
{
    int64_t initialization_result;
    
    // 设置性能监控参数
    setup_performance_monitoring(0x180d49d50);
    
    // 验证性能模块初始化状态
    initialization_result = verify_module_initialization(performance_module_function_9429f0);
    return (initialization_result != 0) - 1;
}





/**
 * 注册引擎核心组件
 * 在系统注册表中注册引擎核心组件，包含主要的引擎处理函数
 */
void register_engine_core_component(void)
{
    char component_flag;
    uint64_t *registry_root;
    int compare_result;
    int64_t *system_manager;
    int64_t allocation_size;
    uint64_t *current_node;
    uint64_t *previous_node;
    uint64_t *next_node;
    uint64_t *new_node;
    void *engine_handler;
    
    system_manager = (int64_t *)get_system_manager();
    registry_root = (uint64_t *)*system_manager;
    component_flag = *(char *)((int64_t)registry_root[1] + 0x19);
    engine_handler = engine_core_handler_07fcd0;
    previous_node = registry_root;
    current_node = (uint64_t *)registry_root[1];
    
    // 在注册表中查找合适的位置
    while (component_flag == '\0') {
        compare_result = memcmp(current_node + 4, &engine_core_identifier_fc740, 0x10);
        if (compare_result < 0) {
            next_node = (uint64_t *)current_node[2];
            current_node = previous_node;
        } else {
            next_node = (uint64_t *)*current_node;
        }
        previous_node = current_node;
        current_node = next_node;
        component_flag = *(char *)((int64_t)next_node + 0x19);
    }
    
    // 如果需要创建新节点
    if ((previous_node == registry_root) || (compare_result = memcmp(&engine_core_identifier_fc740, previous_node + 4, 0x10), compare_result < 0)) {
        allocation_size = allocate_registry_node(system_manager);
        insert_registry_node(system_manager, &new_node, previous_node, allocation_size + 0x20, allocation_size);
        previous_node = new_node;
    }
    
    // 设置引擎核心组件参数
    previous_node[6] = 0x4fc124d23d41985f;  // 引擎核心标识符
    previous_node[7] = 0xe2f4a30d6e6ae482;  // 校验值
    previous_node[8] = &engine_constant_c790;  // 引擎常量指针
    previous_node[9] = 0;                    // 优先级
    previous_node[10] = engine_handler;      // 引擎处理函数指针
    return;
}





/**
 * 注册场景管理组件
 * 在系统注册表中注册场景管理组件，处理游戏场景的加载和管理
 */
void register_scene_management_component(void)
{
    char component_flag;
    uint64_t *registry_root;
    int compare_result;
    int64_t *system_manager;
    int64_t allocation_size;
    uint64_t *current_node;
    uint64_t *previous_node;
    uint64_t *next_node;
    uint64_t *new_node;
    uint64_t null_parameter;
    
    system_manager = (int64_t *)get_system_manager();
    registry_root = (uint64_t *)*system_manager;
    component_flag = *(char *)((int64_t)registry_root[1] + 0x19);
    null_parameter = 0;
    previous_node = registry_root;
    current_node = (uint64_t *)registry_root[1];
    
    // 在注册表中查找合适的位置
    while (component_flag == '\0') {
        compare_result = memcmp(current_node + 4, &scene_management_identifier_fc768, 0x10);
        if (compare_result < 0) {
            next_node = (uint64_t *)current_node[2];
            current_node = previous_node;
        } else {
            next_node = (uint64_t *)*current_node;
        }
        previous_node = current_node;
        current_node = next_node;
        component_flag = *(char *)((int64_t)next_node + 0x19);
    }
    
    // 如果需要创建新节点
    if ((previous_node == registry_root) || (compare_result = memcmp(&scene_management_identifier_fc768, previous_node + 4, 0x10), compare_result < 0)) {
        allocation_size = allocate_registry_node(system_manager);
        insert_registry_node(system_manager, &new_node, previous_node, allocation_size + 0x20, allocation_size);
        previous_node = new_node;
    }
    
    // 设置场景管理组件参数
    previous_node[6] = 0x4770584fbb1df897;  // 场景管理标识符
    previous_node[7] = 0x47f249e43f66f2ab;  // 校验值
    previous_node[8] = &scene_constant_c7a0;  // 场景常量指针
    previous_node[9] = 1;                    // 场景类型标识
    previous_node[10] = null_parameter;     // 额外参数
    return;
}





/**
 * 注册实体管理组件
 * 在系统注册表中注册实体管理组件，处理游戏实体的创建和管理
 */
void register_entity_management_component(void)
{
    char component_flag;
    uint64_t *registry_root;
    int compare_result;
    int64_t *system_manager;
    int64_t allocation_size;
    uint64_t *current_node;
    uint64_t *previous_node;
    uint64_t *next_node;
    uint64_t *new_node;
    uint64_t null_parameter;
    
    system_manager = (int64_t *)get_system_manager();
    registry_root = (uint64_t *)*system_manager;
    component_flag = *(char *)((int64_t)registry_root[1] + 0x19);
    null_parameter = 0;
    previous_node = registry_root;
    current_node = (uint64_t *)registry_root[1];
    
    // 在注册表中查找合适的位置
    while (component_flag == '\0') {
        compare_result = memcmp(current_node + 4, &entity_management_identifier_c9b8, 0x10);
        if (compare_result < 0) {
            next_node = (uint64_t *)current_node[2];
            current_node = previous_node;
        } else {
            next_node = (uint64_t *)*current_node;
        }
        previous_node = current_node;
        current_node = next_node;
        component_flag = *(char *)((int64_t)next_node + 0x19);
    }
    
    // 如果需要创建新节点
    if ((previous_node == registry_root) || (compare_result = memcmp(&entity_management_identifier_c9b8, previous_node + 4, 0x10), compare_result < 0)) {
        allocation_size = allocate_registry_node(system_manager);
        insert_registry_node(system_manager, &new_node, previous_node, allocation_size + 0x20, allocation_size);
        previous_node = new_node;
    }
    
    // 设置实体管理组件参数
    previous_node[6] = 0x4666df49b97e0f10;  // 实体管理标识符
    previous_node[7] = 0x4e4b0d63a6ad1d8f;  // 校验值
    previous_node[8] = &entity_constant_c7b8;  // 实体常量指针
    previous_node[9] = 0;                    // 优先级
    previous_node[10] = null_parameter;     // 额外参数
    return;
}





/**
 * 注册动画系统组件
 * 在系统注册表中注册动画系统组件，处理角色和对象的动画
 */
void register_animation_system_component(void)
{
    char component_flag;
    uint64_t *registry_root;
    int compare_result;
    int64_t *system_manager;
    int64_t allocation_size;
    uint64_t *current_node;
    uint64_t *previous_node;
    uint64_t *next_node;
    uint64_t *new_node;
    uint64_t null_parameter;
    
    system_manager = (int64_t *)get_system_manager();
    registry_root = (uint64_t *)*system_manager;
    component_flag = *(char *)((int64_t)registry_root[1] + 0x19);
    null_parameter = 0;
    previous_node = registry_root;
    current_node = (uint64_t *)registry_root[1];
    
    // 在注册表中查找合适的位置
    while (component_flag == '\0') {
        compare_result = memcmp(current_node + 4, &animation_system_identifier_c940, 0x10);
        if (compare_result < 0) {
            next_node = (uint64_t *)current_node[2];
            current_node = previous_node;
        } else {
            next_node = (uint64_t *)*current_node;
        }
        previous_node = current_node;
        current_node = next_node;
        component_flag = *(char *)((int64_t)next_node + 0x19);
    }
    
    // 如果需要创建新节点
    if ((previous_node == registry_root) || (compare_result = memcmp(&animation_system_identifier_c940, previous_node + 4, 0x10), compare_result < 0)) {
        allocation_size = allocate_registry_node(system_manager);
        insert_registry_node(system_manager, &new_node, previous_node, allocation_size + 0x20, allocation_size);
        previous_node = new_node;
    }
    
    // 设置动画系统组件参数
    previous_node[6] = 0x46ecbd4daf41613e;  // 动画系统标识符
    previous_node[7] = 0xdc42c056bbde8482;  // 校验值
    previous_node[8] = &animation_constant_c7c8;  // 动画常量指针
    previous_node[9] = 0;                    // 优先级
    previous_node[10] = null_parameter;     // 额外参数
    return;
}





/**
 * 注册UI系统组件
 * 在系统注册表中注册UI系统组件，处理用户界面的显示和交互
 */
void register_ui_system_component(void)
{
    char component_flag;
    uint64_t *registry_root;
    int compare_result;
    int64_t *system_manager;
    int64_t allocation_size;
    uint64_t *current_node;
    uint64_t *previous_node;
    uint64_t *next_node;
    uint64_t *new_node;
    uint64_t null_parameter;
    
    system_manager = (int64_t *)get_system_manager();
    registry_root = (uint64_t *)*system_manager;
    component_flag = *(char *)((int64_t)registry_root[1] + 0x19);
    null_parameter = 0;
    previous_node = registry_root;
    current_node = (uint64_t *)registry_root[1];
    
    // 在注册表中查找合适的位置
    while (component_flag == '\0') {
        compare_result = memcmp(current_node + 4, &ui_system_identifier_c918, 0x10);
        if (compare_result < 0) {
            next_node = (uint64_t *)current_node[2];
            current_node = previous_node;
        } else {
            next_node = (uint64_t *)*current_node;
        }
        previous_node = current_node;
        current_node = next_node;
        component_flag = *(char *)((int64_t)next_node + 0x19);
    }
    
    // 如果需要创建新节点
    if ((previous_node == registry_root) || (compare_result = memcmp(&ui_system_identifier_c918, previous_node + 4, 0x10), compare_result < 0)) {
        allocation_size = allocate_registry_node(system_manager);
        insert_registry_node(system_manager, &new_node, previous_node, allocation_size + 0x20, allocation_size);
        previous_node = new_node;
    }
    
    // 设置UI系统组件参数
    previous_node[6] = 0x4c868a42644030f6;  // UI系统标识符
    previous_node[7] = 0xc29193aa9d9b35b9;  // 校验值
    previous_node[8] = &ui_constant_c7d8;    // UI常量指针
    previous_node[9] = 0;                    // 优先级
    previous_node[10] = null_parameter;     // 额外参数
    return;
}





/**
 * 注册脚本系统组件
 * 在系统注册表中注册脚本系统组件，处理游戏脚本的执行和管理
 */
void register_script_system_component(void)
{
    char component_flag;
    uint64_t *registry_root;
    int compare_result;
    int64_t *system_manager;
    int64_t allocation_size;
    uint64_t *current_node;
    uint64_t *previous_node;
    uint64_t *next_node;
    uint64_t *new_node;
    uint64_t null_parameter;
    
    system_manager = (int64_t *)get_system_manager();
    registry_root = (uint64_t *)*system_manager;
    component_flag = *(char *)((int64_t)registry_root[1] + 0x19);
    null_parameter = 0;
    previous_node = registry_root;
    current_node = (uint64_t *)registry_root[1];
    
    // 在注册表中查找合适的位置
    while (component_flag == '\0') {
        compare_result = memcmp(current_node + 4, &script_system_identifier_c968, 0x10);
        if (compare_result < 0) {
            next_node = (uint64_t *)current_node[2];
            current_node = previous_node;
        } else {
            next_node = (uint64_t *)*current_node;
        }
        previous_node = current_node;
        current_node = next_node;
        component_flag = *(char *)((int64_t)next_node + 0x19);
    }
    
    // 如果需要创建新节点
    if ((previous_node == registry_root) || (compare_result = memcmp(&script_system_identifier_c968, previous_node + 4, 0x10), compare_result < 0)) {
        allocation_size = allocate_registry_node(system_manager);
        insert_registry_node(system_manager, &new_node, previous_node, allocation_size + 0x20, allocation_size);
        previous_node = new_node;
    }
    
    // 设置脚本系统组件参数
    previous_node[6] = 0x40ea3a798283cbbb;  // 脚本系统标识符
    previous_node[7] = 0x7f74eb2c5a7fadae;  // 校验值
    previous_node[8] = &script_constant_c7f0;  // 脚本常量指针
    previous_node[9] = 3;                    // 脚本类型标识
    previous_node[10] = null_parameter;     // 额外参数
    return;
}





/**
 * 注册网络同步组件
 * 在系统注册表中注册网络同步组件，处理多人游戏的网络同步
 */
void register_network_sync_component(void)
{
    char component_flag;
    uint64_t *registry_root;
    int compare_result;
    int64_t *system_manager;
    int64_t allocation_size;
    uint64_t *current_node;
    uint64_t *previous_node;
    uint64_t *next_node;
    uint64_t *new_node;
    uint64_t null_parameter;
    
    system_manager = (int64_t *)get_system_manager();
    registry_root = (uint64_t *)*system_manager;
    component_flag = *(char *)((int64_t)registry_root[1] + 0x19);
    null_parameter = 0;
    previous_node = registry_root;
    current_node = (uint64_t *)registry_root[1];
    
    // 在注册表中查找合适的位置
    while (component_flag == '\0') {
        compare_result = memcmp(current_node + 4, &network_sync_identifier_c990, 0x10);
        if (compare_result < 0) {
            next_node = (uint64_t *)current_node[2];
            current_node = previous_node;
        } else {
            next_node = (uint64_t *)*current_node;
        }
        previous_node = current_node;
        current_node = next_node;
        component_flag = *(char *)((int64_t)next_node + 0x19);
    }
    
    // 如果需要创建新节点
    if ((previous_node == registry_root) || (compare_result = memcmp(&network_sync_identifier_c990, previous_node + 4, 0x10), compare_result < 0)) {
        allocation_size = allocate_registry_node(system_manager);
        insert_registry_node(system_manager, &new_node, previous_node, allocation_size + 0x20, allocation_size);
        previous_node = new_node;
    }
    
    // 设置网络同步组件参数
    previous_node[6] = 0x45b8d074df27d12f;  // 网络同步标识符
    previous_node[7] = 0x8d98f4c06880eda4;  // 校验值
    previous_node[8] = &network_sync_constant_c810;  // 网络同步常量指针
    previous_node[9] = 3;                    // 同步类型标识
    previous_node[10] = null_parameter;     // 额外参数
    return;
}





/**
 * 注册资源管理组件
 * 在系统注册表中注册资源管理组件，处理游戏资源的加载和管理
 */
void register_resource_management_component(void)
{
    char component_flag;
    uint64_t *registry_root;
    int compare_result;
    int64_t *system_manager;
    int64_t allocation_size;
    uint64_t *current_node;
    uint64_t *previous_node;
    uint64_t *next_node;
    uint64_t *new_node;
    uint64_t null_parameter;
    
    system_manager = (int64_t *)get_system_manager();
    registry_root = (uint64_t *)*system_manager;
    component_flag = *(char *)((int64_t)registry_root[1] + 0x19);
    null_parameter = 0;
    previous_node = registry_root;
    current_node = (uint64_t *)registry_root[1];
    
    // 在注册表中查找合适的位置
    while (component_flag == '\0') {
        compare_result = memcmp(current_node + 4, &resource_management_identifier_c9e0, 0x10);
        if (compare_result < 0) {
            next_node = (uint64_t *)current_node[2];
            current_node = previous_node;
        } else {
            next_node = (uint64_t *)*current_node;
        }
        previous_node = current_node;
        current_node = next_node;
        component_flag = *(char *)((int64_t)next_node + 0x19);
    }
    
    // 如果需要创建新节点
    if ((previous_node == registry_root) || (compare_result = memcmp(&resource_management_identifier_c9e0, previous_node + 4, 0x10), compare_result < 0)) {
        allocation_size = allocate_registry_node(system_manager);
        insert_registry_node(system_manager, &new_node, previous_node, allocation_size + 0x20, allocation_size);
        previous_node = new_node;
    }
    
    // 设置资源管理组件参数
    previous_node[6] = 0x42d293584c8cf3e5;  // 资源管理标识符
    previous_node[7] = 0x355ffeb2d29e668a;  // 校验值
    previous_node[8] = &resource_constant_c870;  // 资源常量指针
    previous_node[9] = 0;                    // 优先级
    previous_node[10] = null_parameter;     // 额外参数
    return;
}





/**
 * 注册事件系统组件
 * 在系统注册表中注册事件系统组件，处理游戏事件的分发和处理
 */
void register_event_system_component(void)
{
    char component_flag;
    uint64_t *registry_root;
    int compare_result;
    int64_t *system_manager;
    int64_t allocation_size;
    uint64_t *current_node;
    uint64_t *previous_node;
    uint64_t *next_node;
    uint64_t *new_node;
    void *event_handler;
    
    system_manager = (int64_t *)get_system_manager();
    registry_root = (uint64_t *)*system_manager;
    component_flag = *(char *)((int64_t)registry_root[1] + 0x19);
    event_handler = event_handler_073930;
    previous_node = registry_root;
    current_node = (uint64_t *)registry_root[1];
    
    // 在注册表中查找合适的位置
    while (component_flag == '\0') {
        compare_result = memcmp(current_node + 4, &event_system_identifier_c8f0, 0x10);
        if (compare_result < 0) {
            next_node = (uint64_t *)current_node[2];
            current_node = previous_node;
        } else {
            next_node = (uint64_t *)*current_node;
        }
        previous_node = current_node;
        current_node = next_node;
        component_flag = *(char *)((int64_t)next_node + 0x19);
    }
    
    // 如果需要创建新节点
    if ((previous_node == registry_root) || (compare_result = memcmp(&event_system_identifier_c8f0, previous_node + 4, 0x10), compare_result < 0)) {
        allocation_size = allocate_registry_node(system_manager);
        insert_registry_node(system_manager, &new_node, previous_node, allocation_size + 0x20, allocation_size);
        previous_node = new_node;
    }
    
    // 设置事件系统组件参数
    previous_node[6] = 0x421c3cedd07d816d;  // 事件系统标识符
    previous_node[7] = 0xbec25de793b7afa6;  // 校验值
    previous_node[8] = &event_constant_c880;  // 事件常量指针
    previous_node[9] = 0;                    // 优先级
    previous_node[10] = event_handler;       // 事件处理函数指针
    return;
}





/**
 * 注册任务系统组件
 * 在系统注册表中注册任务系统组件，处理异步任务和作业管理
 */
void register_task_system_component(void)
{
    char component_flag;
    uint64_t *registry_root;
    int compare_result;
    int64_t *system_manager;
    int64_t allocation_size;
    uint64_t *current_node;
    uint64_t *previous_node;
    uint64_t *next_node;
    uint64_t *new_node;
    uint64_t null_parameter;
    
    system_manager = (int64_t *)get_system_manager();
    registry_root = (uint64_t *)*system_manager;
    component_flag = *(char *)((int64_t)registry_root[1] + 0x19);
    null_parameter = 0;
    previous_node = registry_root;
    current_node = (uint64_t *)registry_root[1];
    
    // 在注册表中查找合适的位置
    while (component_flag == '\0') {
        compare_result = memcmp(current_node + 4, &task_system_identifier_c8c8, 0x10);
        if (compare_result < 0) {
            next_node = (uint64_t *)current_node[2];
            current_node = previous_node;
        } else {
            next_node = (uint64_t *)*current_node;
        }
        previous_node = current_node;
        current_node = next_node;
        component_flag = *(char *)((int64_t)next_node + 0x19);
    }
    
    // 如果需要创建新节点
    if ((previous_node == registry_root) || (compare_result = memcmp(&task_system_identifier_c8c8, previous_node + 4, 0x10), compare_result < 0)) {
        allocation_size = allocate_registry_node(system_manager);
        insert_registry_node(system_manager, &new_node, previous_node, allocation_size + 0x20, allocation_size);
        previous_node = new_node;
    }
    
    // 设置任务系统组件参数
    previous_node[6] = 0x4c22bb0c326587ce;  // 任务系统标识符
    previous_node[7] = 0x5e3cf00ce2978287;  // 校验值
    previous_node[8] = &task_constant_c898;  // 任务常量指针
    previous_node[9] = 1;                    // 任务类型标识
    previous_node[10] = null_parameter;     // 额外参数
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 初始化输入系统字符串
 * 设置输入系统的字符串常量和标识符，用于输入设备识别
 */
void initialize_input_system_strings(void)
{
    uint64_t reserved_param;
    void *string_table_ptr;
    uint8_t *string_buffer;
    uint32_t string_length;
    uint8_t local_buffer[136];
    
    string_table_ptr = &string_table_fcc28;
    string_buffer = local_buffer;
    local_buffer[0] = 0;
    string_length = 0x10;  // 16字节
    
    // 复制输入系统字符串到本地缓冲区
    secure_string_copy(local_buffer, 0x80, &input_system_string_2bf10, reserved_param, 0xfffffffffffffffe);
    
    // 注册字符串到系统表中
    input_string_table_924ac = register_system_string(&string_table_ptr);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 初始化渲染系统字符串
 * 设置渲染系统的字符串常量和标识符，用于渲染器识别
 */
void initialize_render_system_strings(void)
{
    uint64_t reserved_param;
    void *string_table_ptr;
    uint8_t *string_buffer;
    uint32_t string_length;
    uint8_t local_buffer[136];
    
    string_table_ptr = &string_table_fcc28;
    string_buffer = local_buffer;
    local_buffer[0] = 0;
    string_length = 0xf;  // 15字节
    
    // 复制渲染系统字符串到本地缓冲区
    secure_string_copy(local_buffer, 0x80, &render_system_string_2c1d0, reserved_param, 0xfffffffffffffffe);
    
    // 注册字符串到系统表中
    render_string_table_924b0 = register_system_string(&string_table_ptr);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 初始化音频系统字符串
 * 设置音频系统的字符串常量和标识符，用于音频设备识别
 */
void initialize_audio_system_strings(void)
{
    uint64_t reserved_param;
    void *string_table_ptr;
    uint8_t *string_buffer;
    uint32_t string_length;
    uint8_t local_buffer[136];
    
    string_table_ptr = &string_table_fcc28;
    string_buffer = local_buffer;
    local_buffer[0] = 0;
    string_length = 0x19;  // 25字节
    
    // 复制音频系统字符串到本地缓冲区
    secure_string_copy(local_buffer, 0x80, &audio_system_string_2c338, reserved_param, 0xfffffffffffffffe);
    
    // 注册字符串到系统表中
    audio_string_table_924b4 = register_system_string(&string_table_ptr);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 初始化网络系统字符串
 * 设置网络系统的字符串常量和标识符，用于网络协议识别
 */
void initialize_network_system_strings(void)
{
    uint64_t reserved_param;
    void *string_table_ptr;
    uint8_t *string_buffer;
    uint32_t string_length;
    uint8_t local_buffer[136];
    
    string_table_ptr = &string_table_fcc28;
    string_buffer = local_buffer;
    local_buffer[0] = 0;
    string_length = 0x14;  // 20字节
    
    // 复制网络系统字符串到本地缓冲区
    secure_string_copy(local_buffer, 0x80, &network_system_string_2c510, reserved_param, 0xfffffffffffffffe);
    
    // 注册字符串到系统表中
    network_string_table_924b8 = register_system_string(&string_table_ptr);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_18003fad0(void)

{
  longlong lVar1;
  undefined8 in_R9;
  
  _DAT_180bf6048 = &UNK_18098bc80;
  _DAT_180bf6050 = &DAT_180bf6060;


// 函数: void FUN_18003fbb0(void)
void FUN_18003fbb0(void)

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





// 函数: void FUN_18003fcb0(void)
void FUN_18003fcb0(void)

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





// 函数: void FUN_18003fdb0(void)
void FUN_18003fdb0(void)

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
  pcStackX_18 = FUN_18007fcd0;
  puVar7 = puVar2;
  puVar6 = (undefined8 *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&DAT_1809fc740,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&DAT_1809fc740,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x4fc124d23d41985f;
  puVar7[7] = 0xe2f4a30d6e6ae482;
  puVar7[8] = &UNK_18098c790;
  puVar7[9] = 0;
  puVar7[10] = pcStackX_18;
  return;
}





// 函数: void FUN_18003feb0(void)
void FUN_18003feb0(void)

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
    iVar3 = memcmp(puVar6 + 4,&DAT_1809fc768,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&DAT_1809fc768,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x4770584fbb1df897;
  puVar7[7] = 0x47f249e43f66f2ab;
  puVar7[8] = &UNK_18098c7a0;
  puVar7[9] = 1;
  puVar7[10] = uStackX_18;
  return;
}





// 函数: void FUN_18003ffb0(void)
void FUN_18003ffb0(void)

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
    iVar3 = memcmp(puVar6 + 4,&DAT_18098c9b8,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&DAT_18098c9b8,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x4666df49b97e0f10;
  puVar7[7] = 0x4e4b0d63a6ad1d8f;
  puVar7[8] = &UNK_18098c7b8;
  puVar7[9] = 0;
  puVar7[10] = uStackX_18;
  return;
}





