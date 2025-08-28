#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part198.c - 核心引擎模块第198部分
// 包含14个函数，主要处理各种系统组件的初始化和配置

/**
 * 创建并初始化基础系统组件
 * @param param_1 系统上下文指针
 * @param param_2 组件配置参数
 */
void create_base_system_component(void* param_1, void* param_2)
{
    void* component_data;
    void* vtable_ptr;
    void* interface_ptr;
    void* string_data;
    void* stack_data[2];
    int string_length;
    int64_t temp_value;
    
    // 分配组件内存空间
    component_data = (void*)allocate_component_memory(_global_memory_pool, 0xa8, 8, 3);
    temp_value = 0xfffffffffffffffe;
    vtable_ptr = component_data;
    
    // 初始化组件基础数据
    initialize_component_data(component_data, param_2, param_1);
    
    // 设置虚函数表指针
    *vtable_ptr = &base_component_vtable;
    interface_ptr = vtable_ptr + 0xe;
    *interface_ptr = &component_interface_table;
    
    // 初始化组件属性
    vtable_ptr[0xf] = 0;
    *(int*)(vtable_ptr + 0x10) = 0;
    *interface_ptr = &component_method_table;
    vtable_ptr[0x11] = 0;
    vtable_ptr[0xf] = 0;
    *(int*)(vtable_ptr + 0x10) = 0;
    
    // 设置组件名称
    stack_data[0] = &component_method_table;
    string_data = (void*)0x0;
    string_length = 0;
    
    // 创建字符串标识符
    string_data = (void*)create_string_identifier(_global_memory_pool, 0x10, 0x13);
    *(char*)string_data = 0;
    stack_data[1] = string_data;
    string_length = get_string_length(string_data);
    temp_value = ((temp_value & 0xFFFFFFFF) << 32) | string_length;
    
    // 设置组件名称为 "Path Name"
    *string_data = 0x6d614e2068746150;  // "Path Nam"
    *(short*)(string_data + 1) = 0x65;   // "e"
    string_length = 9;
    
    // 注册组件到系统
    register_component_to_system(component_data, &stack_data[0], interface_ptr, 0, temp_value);
    
    // 清理临时数据
    stack_data[0] = &component_method_table;
    // 注意: 此函数不会返回
    cleanup_string_data(string_data);
}

/**
 * 创建并初始化扩展系统组件
 * @param param_1 系统上下文指针
 * @param param_2 组件配置参数
 */
void create_extended_system_component(void* param_1, void* param_2)
{
    int64_t* interface_ptr;
    int string_length;
    void* component_data;
    void* vtable_ptr;
    int64_t temp_value;
    int64_t* method_ptr;
    void* stack_data[2];
    int stack_length;
    int64_t stack_value;
    
    temp_value = 0xfffffffffffffffe;
    
    // 分配扩展组件内存
    component_data = (void*)allocate_component_memory(_global_memory_pool, 0x178, 8, 3, 0xfffffffffffffffe);
    initialize_extended_component(component_data, param_2, param_1);
    
    // 设置虚函数表
    *component_data = &extended_component_vtable;
    interface_ptr = (int64_t*)component_data + 0x2a;
    *interface_ptr = (int64_t)&component_interface_table;
    
    // 初始化扩展组件属性
    component_data[0x2b] = 0;
    *(int*)(component_data + 0x2c) = 0;
    *interface_ptr = (int64_t)&extended_method_table;
    component_data[0x2d] = 0;
    component_data[0x2b] = 0;
    *(int*)(component_data + 0x2c) = 0;
    component_data[0x2e] = 0;
    
    // 调用初始化方法
    method_ptr = interface_ptr;
    (*(void(**)(void*, void*))(*method_ptr + 0x10))(method_ptr, &system_constants);
    
    // 设置组件标识
    stack_data[0] = &extended_method_table;
    stack_value = 0;
    stack_data[1] = (void*)0x0;
    stack_length = 0;
    
    // 创建组件名称字符串
    vtable_ptr = (void*)create_string_identifier(_global_memory_pool, 0x10, 0x13);
    *(char*)vtable_ptr = 0;
    stack_data[1] = vtable_ptr;
    string_length = get_string_length(vtable_ptr);
    stack_value = ((stack_value & 0xFFFFFFFF) << 32) | string_length;
    
    // 设置名称为 "Path Name"
    *vtable_ptr = 0x6d614e2068746150;
    *(short*)(vtable_ptr + 1) = 0x65;
    stack_length = 9;
    
    // 注册扩展组件
    register_component_to_system(component_data, &stack_data[0], interface_ptr, 0, temp_value, method_ptr);
    
    // 清理临时数据
    stack_data[0] = &extended_method_table;
    // 注意: 此函数不会返回
    cleanup_string_data(vtable_ptr);
}

/**
 * 创建内存管理组件
 * @param param_1 系统上下文指针
 * @param param_2 内存配置参数
 */
void create_memory_management_component(void* param_1, void* param_2)
{
    int string_length;
    void* component_data;
    void* vtable_ptr;
    void* stack_data[2];
    int stack_length;
    int64_t stack_value;
    int64_t function_ptr;
    
    // 设置函数指针
    function_ptr = 0x18017ca3a;
    
    // 分配内存管理组件内存
    component_data = (void*)allocate_component_memory(_global_memory_pool, 0x180, 8, 3);
    stack_value = 0xfffffffffffffffe;
    vtable_ptr = component_data;
    
    // 初始化内存管理组件
    initialize_memory_component(component_data, param_2, param_1);
    *vtable_ptr = &memory_component_vtable;
    
    // 设置内存管理回调
    setup_memory_callbacks(vtable_ptr + 0xe, 0x20, 4, memory_allocate_callback, memory_free_callback);
    setup_memory_callbacks(component_data + 0x1e, 0x20, 4, memory_allocate_callback, memory_free_callback);
    
    // 初始化内存池
    component_data[0x2f] = 0;
    
    // 设置组件标识
    stack_data[0] = &memory_method_table;
    stack_value = 0;
    stack_data[1] = (void*)0x0;
    stack_length = 0;
    
    // 创建组件名称
    vtable_ptr = (void*)create_string_identifier(_global_memory_pool, 0x10, 0x13);
    *(char*)vtable_ptr = 0;
    stack_data[1] = vtable_ptr;
    string_length = get_string_length(vtable_ptr);
    stack_value = ((stack_value & 0xFFFFFFFF) << 32) | string_length;
    
    // 设置名称为 "Summer Memory"
    *vtable_ptr = 0x614d72656d6d7553;  // "SummerMem"
    *(int*)(vtable_ptr + 1) = 0x69726574; // "ory"
    *(short*)((int64_t)vtable_ptr + 0xc) = 0x6c61; // "la"
    *(char*)((int64_t)vtable_ptr + 0xe) = 0;
    stack_length = 0xe;
    
    // 注册内存管理组件
    register_component_to_system(component_data, &stack_data[0], component_data + 0xe, 0);
    
    // 清理临时数据
    stack_data[0] = &memory_method_table;
    // 注意: 此函数不会返回
    cleanup_string_data(vtable_ptr);
}

/**
 * 创建多接口系统组件
 * @param param_1 系统上下文指针
 * @param param_2 组件配置参数
 */
void create_multi_interface_component(void* param_1, void* param_2)
{
    int64_t* interface1_ptr;
    int64_t* interface2_ptr;
    int64_t* interface3_ptr;
    int string_length;
    void* component_data;
    void* vtable_ptr;
    int64_t stack_value;
    
    // 分配多接口组件内存
    component_data = (void*)allocate_component_memory(_global_memory_pool, 0x130, 8, 3);
    stack_value = 0xfffffffffffffffe;
    vtable_ptr = component_data;
    
    // 初始化多接口组件
    initialize_multi_interface_component(component_data, param_2, param_1);
    *vtable_ptr = &multi_interface_vtable;
    
    // 设置第一个接口
    interface1_ptr = (int64_t*)vtable_ptr + 0xe;
    *interface1_ptr = (int64_t)&component_interface_table;
    vtable_ptr[0xf] = 0;
    *(int*)(vtable_ptr + 0x10) = 0;
    *interface1_ptr = (int64_t)&interface_method_table;
    vtable_ptr[0x11] = 0;
    vtable_ptr[0xf] = 0;
    *(int*)(vtable_ptr + 0x10) = 0;
    
    // 设置第二个接口
    interface2_ptr = (int64_t*)component_data + 0x12;
    *interface2_ptr = (int64_t)&component_interface_table;
    component_data[0x13] = 0;
    *(int*)(component_data + 0x14) = 0;
    *interface2_ptr = (int64_t)&interface_method_table;
    component_data[0x15] = 0;
    component_data[0x13] = 0;
    *(int*)(component_data + 0x14) = 0;
    
    // 设置第三个接口
    interface3_ptr = (int64_t*)component_data + 0x16;
    *interface3_ptr = (int64_t)&component_interface_table;
    component_data[0x17] = 0;
    *(int*)(component_data + 0x18) = 0;
    *interface3_ptr = (int64_t)&interface_method_table;
    component_data[0x19] = 0;
    component_data[0x17] = 0;
    *(int*)(component_data + 0x18) = 0;
    
    // 设置第四个接口
    component_data[0x1a] = &component_interface_table;
    component_data[0x1b] = 0;
    *(int*)(component_data + 0x1c) = 0;
    component_data[0x1a] = &interface_method_table;
    component_data[0x1d] = 0;
    component_data[0x1b] = 0;
    *(int*)(component_data + 0x1c) = 0;
    
    // 调用所有接口的初始化方法
    (*(void(**)(void*, void*))(*interface1_ptr + 0x10))(interface1_ptr, &system_constants);
    (*(void(**)(void*, void*))(*interface2_ptr + 0x10))(interface2_ptr, &system_constants);
    (*(void(**)(void*, void*))(*interface3_ptr + 0x10))(interface3_ptr, &system_constants);
    
    // 设置组件默认值
    component_data[0x1e] = 0x3ff0000000000000;  // 1.0
    component_data[0x1f] = 0;
    component_data[0x20] = 0;
    *(char*)(component_data + 0x22) = 0;
    
    // 注册多接口组件到系统
    register_multi_interface_component(component_data, interface1_ptr);
}

/**
 * 创建简单数据组件
 * @param param_1 系统上下文指针
 * @param param_2 数据配置参数
 * @return 创建的组件指针
 */
void* create_simple_data_component(void* param_1, void* param_2)
{
    void* component_data;
    
    // 分配简单数据组件内存
    component_data = (void*)allocate_component_memory(_global_memory_pool, 0x70, 8, 3, 0xfffffffffffffffe);
    initialize_simple_data_component(component_data, param_2, param_1);
    *component_data = &simple_data_vtable;
    
    return component_data;
}

/**
 * 销毁简单数据组件
 * @param param_1 要销毁的组件指针
 * @param param_2 销毁标志
 * @param param_3 保留参数
 * @param param_4 保留参数
 * @return 销毁后的组件指针
 */
void*
destroy_simple_data_component(void* param_1, unsigned long long param_2, void* param_3, void* param_4)
{
    int64_t destroy_flag;
    
    destroy_flag = 0xfffffffffffffffe;
    *param_1 = &simple_data_vtable;
    perform_cleanup_operations();
    
    // 如果需要释放内存
    if ((param_2 & 1) != 0) {
        free_memory(param_1, 0x70, param_3, param_4, destroy_flag);
    }
    
    return param_1;
}

/**
 * 创建显示组件
 * @param param_1 系统上下文指针
 * @param param_2 显示配置参数
 */
void create_display_component(void* param_1, void* param_2)
{
    int string_length;
    void* component_data;
    void* vtable_ptr;
    int* string_ptr;
    void* stack_data[2];
    int stack_length;
    int64_t stack_value;
    
    // 分配显示组件内存
    component_data = (void*)allocate_component_memory(_global_memory_pool, 0xa8, 8, 3, 0xfffffffffffffffe);
    vtable_ptr = component_data;
    
    // 初始化显示组件
    initialize_display_component(component_data, param_2, param_1);
    *vtable_ptr = &display_component_vtable;
    
    // 初始化显示属性
    *(int*)(vtable_ptr + 0x14) = 0;
    vtable_ptr[0xe] = 0;
    vtable_ptr[0xf] = 0;
    vtable_ptr[0x10] = 0;
    vtable_ptr[0x11] = 0;
    vtable_ptr[0x12] = 0;
    vtable_ptr[0x13] = 0;
    *(char*)((int64_t)vtable_ptr + 0xa4) = 0;
    
    // 设置组件标识
    stack_data[0] = &display_method_table;
    stack_value = 0;
    stack_data[1] = (int*)0x0;
    stack_length = 0;
    
    // 创建组件名称字符串
    string_ptr = (int*)create_string_identifier(_global_memory_pool, 0x10, 0x13);
    *(char*)string_ptr = 0;
    stack_data[1] = string_ptr;
    string_length = get_string_length(string_ptr);
    stack_value = ((stack_value & 0xFFFFFFFF) << 32) | string_length;
    
    // 设置名称为 "Show"
    *string_ptr = 0x776f6853;  // "Show"
    *(char*)(string_ptr + 1) = 0;
    stack_length = 4;
    
    // 注册显示组件
    register_display_component(component_data, &stack_data[0], (int64_t)component_data + 0xa4, 3);
    
    // 清理临时数据
    stack_data[0] = &display_method_table;
    // 注意: 此函数不会返回
    cleanup_string_data(string_ptr);
}

/**
 * 处理系统消息
 * @param param_1 消息上下文指针
 */
void process_system_message(void* param_1)
{
    char message_buffer[32];
    int message_flags;
    int64_t context_value;
    void* message_handlers[2];
    void* message_data;
    char* message_text;
    int message_length;
    char temp_buffer[72];
    void* handler_params[11];
    int handler_type;
    unsigned int64_t message_hash;
    
    context_value = 0xfffffffffffffffe;
    message_hash = _message_constant ^ (unsigned int64_t)message_buffer;
    message_flags = 0;
    
    // 设置消息数据
    message_data = &message_handler_table;
    message_text = temp_buffer;
    temp_buffer[0] = 0;
    message_length = 4;
    
    // 复制消息模板
    copy_string_safely(temp_buffer, 0x40, &default_message_template);
    
    // 初始化消息处理器
    initialize_message_handlers(handler_params, &message_data);
    handler_type = 3;
    message_flags = 1;
    
    // 处理消息
    process_message(param_1, message_handlers, handler_params);
    message_flags = 0;
    
    // 设置默认处理器
    message_handlers[0] = handler_params;
    handler_params[0] = &component_interface_table;
    message_data = &component_interface_table;
    
    // 执行消息处理
    // 注意: 此函数不会返回
    execute_message_handler(message_hash ^ (unsigned int64_t)message_buffer);
}

/**
 * 销毁显示组件
 * @param param_1 要销毁的组件指针
 * @param param_2 销毁标志
 * @param param_3 保留参数
 * @param param_4 保留参数
 * @return 销毁后的组件指针
 */
void*
destroy_display_component(void* param_1, unsigned long long param_2, void* param_3, void* param_4)
{
    int64_t destroy_flag;
    
    destroy_flag = 0xfffffffffffffffe;
    *param_1 = &display_component_vtable;
    perform_cleanup_operations();
    
    // 如果需要释放内存
    if ((param_2 & 1) != 0) {
        free_memory(param_1, 0xa8, param_3, param_4, destroy_flag);
    }
    
    return param_1;
}

/**
 * 创建设备驱动组件
 * @param param_1 系统上下文指针
 * @param param_2 驱动配置参数
 */
void create_device_driver_component(void* param_1, void* param_2)
{
    int64_t* driver_interface;
    int string_length;
    void* component_data;
    void* vtable_ptr;
    int64_t stack_value;
    
    // 分配设备驱动组件内存
    component_data = (void*)allocate_component_memory(_global_memory_pool, 0x230, 0x10, 3);
    stack_value = 0xfffffffffffffffe;
    vtable_ptr = component_data;
    
    // 初始化设备驱动组件
    initialize_device_driver(component_data, param_2, param_1);
    *vtable_ptr = &device_driver_vtable;
    
    // 初始化驱动接口
    setup_driver_interface(vtable_ptr + 0xe);
    
    // 初始化驱动状态
    component_data[0x36] = 0;
    component_data[0x43] = 0;
    component_data[0x44] = 0;
    
    // 清理旧的驱动接口
    driver_interface = (int64_t*)component_data[0x36];
    component_data[0x36] = 0;
    if (driver_interface != (int64_t*)0x0) {
        (*(void(**)())(*driver_interface + 0x38))();
    }
    
    // 设置驱动参数
    component_data[0x37] = 0x404e000000000000;  // 驱动版本
    *(int*)(component_data + 0x38) = 0x100;      // 缓冲区大小
    *(int*)(component_data + 0x39) = 0x100;      // 块大小
    *(int*)((int64_t)component_data + 0x1c4) = 0x100; // 队列大小
    
    // 设置驱动性能参数
    component_data[0x3a] = 0x3f847ae147ae147b;  // 1.03
    component_data[0x3b] = 0x408f400000000000;  // 1000.0
    component_data[0x3f] = 0;
    component_data[0x40] = 0;
    component_data[0x41] = 0;
    *(short*)(component_data + 0x42) = 0;
    
    // 设置驱动精度参数
    *(int*)(component_data + 0x3c) = 0x3f800000;  // 1.0
    *(int*)((int64_t)component_data + 0x1e4) = 0;
    *(int*)(component_data + 0x3d) = 0x3f800000;  // 1.0
    *(int*)((int64_t)component_data + 0x1ec) = 0x3f800000; // 1.0
    *(char*)(component_data + 0x3e) = 0;
    
    // 注册设备驱动组件
    register_device_driver(component_data, vtable_ptr + 0x37);
}

/**
 * 初始化系统组件工厂
 * @param param_1 系统上下文指针
 */
void initialize_component_factory(void* param_1)
{
    char security_buffer[32];
    int factory_flags;
    int64_t context_value;
    void* factory_handlers[2];
    int64_t factory_data;
    void* component_params[11];
    int param_count;
    void* component_data;
    char* component_name;
    int name_length;
    char name_buffer[72];
    void* config_data;
    char* config_text;
    int config_length;
    char config_buffer[72];
    void* render_data;
    char* render_text;
    int render_length;
    char render_buffer[72];
    void* texture_data;
    char* texture_text;
    int texture_length;
    char texture_buffer[72];
    void* shader_data;
    char* shader_text;
    int shader_length;
    char shader_buffer[72];
    void* mesh_data;
    char* mesh_text;
    int mesh_length;
    char mesh_buffer[72];
    void* material_data;
    char* material_text;
    int material_length;
    char material_buffer[72];
    void* physics_data;
    char* physics_text;
    int physics_length;
    char physics_buffer[72];
    void* audio_data;
    char* audio_text;
    int audio_length;
    char audio_buffer[72];
    void* input_data;
    char* input_text;
    int input_length;
    char input_buffer[72];
    void* network_data;
    char* network_text;
    int network_length;
    char network_buffer[72];
    void* ui_data;
    char* ui_text;
    int ui_length;
    char ui_buffer[72];
    unsigned int64_t factory_hash;
    
    factory_data = 0xfffffffffffffffe;
    factory_hash = _factory_constant ^ (unsigned int64_t)security_buffer;
    factory_flags = 0;
    
    // 初始化基础组件
    component_data = &component_handler_table;
    component_name = name_buffer;
    name_buffer[0] = 0;
    name_length = 0xc;
    copy_string_safely(name_buffer, 0x40, &base_component_name);
    initialize_component_params(component_params, &component_data);
    param_count = 1;
    factory_flags = 1;
    
    // 注册基础组件
    register_component_factory(param_1, factory_handlers, component_params);
    factory_flags = 0;
    factory_handlers[0] = component_params;
    component_params[0] = &component_interface_table;
    component_data = &component_interface_table;
    
    // 初始化渲染组件
    config_data = &component_handler_table;
    config_text = config_buffer;
    config_buffer[0] = 0;
    config_length = 5;
    copy_string_safely(config_buffer, 0x40, &render_config_name);
    initialize_component_params(component_params, &config_data);
    param_count = 4;
    factory_flags = 2;
    register_component_factory(param_1, factory_handlers, component_params);
    factory_flags = 0;
    factory_handlers[0] = component_params;
    component_params[0] = &component_interface_table;
    config_data = &component_interface_table;
    
    // 初始化UI组件
    render_data = &component_handler_table;
    render_text = render_buffer;
    render_buffer[0] = 0;
    render_length = 6;
    copy_string_safely(render_buffer, 0x40, &ui_component_name);
    initialize_component_params(component_params, &render_data);
    param_count = 4;
    factory_flags = 4;
    register_component_factory(param_1, factory_handlers, component_params);
    factory_flags = 0;
    factory_handlers[0] = component_params;
    component_params[0] = &component_interface_table;
    render_data = &component_interface_table;
    
    // 初始化纹理组件
    texture_data = &component_handler_table;
    texture_text = texture_buffer;
    texture_buffer[0] = 0;
    texture_length = 0xf;
    copy_string_safely(texture_buffer, 0x40, &texture_component_name);
    initialize_component_params(component_params, &texture_data);
    param_count = 4;
    factory_flags = 8;
    register_component_factory(param_1, factory_handlers, component_params);
    factory_flags = 0;
    factory_handlers[0] = component_params;
    component_params[0] = &component_interface_table;
    texture_data = &component_interface_table;
    
    // 初始化着色器组件
    shader_data = &component_handler_table;
    shader_text = shader_buffer;
    shader_buffer[0] = 0;
    shader_length = 4;
    copy_string_safely(shader_buffer, 0x40, &shader_component_name);
    initialize_component_params(component_params, &shader_data);
    param_count = 1;
    factory_flags = 0x10;
    register_component_factory(param_1, factory_handlers, component_params);
    factory_flags = 0;
    factory_handlers[0] = component_params;
    component_params[0] = &component_interface_table;
    shader_data = &component_interface_table;
    
    // 初始化网格组件
    mesh_data = &component_handler_table;
    mesh_text = mesh_buffer;
    mesh_buffer[0] = 0;
    mesh_length = 3;
    copy_string_safely(mesh_buffer, 0x40, &mesh_component_name);
    initialize_component_params(component_params, &mesh_data);
    param_count = 1;
    factory_flags = 0x20;
    register_component_factory(param_1, factory_handlers, component_params);
    factory_flags = 0;
    factory_handlers[0] = component_params;
    component_params[0] = &component_interface_table;
    mesh_data = &component_interface_table;
    
    // 初始化材质组件
    material_data = &component_handler_table;
    material_text = material_buffer;
    material_buffer[0] = 0;
    material_length = 0xf;
    copy_string_safely(material_buffer, 0x40, &material_component_name);
    initialize_component_params(component_params, &material_data);
    param_count = 1;
    factory_flags = 0x40;
    register_component_factory(param_1, factory_handlers, component_params);
    factory_flags = 0;
    factory_handlers[0] = component_params;
    component_params[0] = &component_interface_table;
    material_data = &component_interface_table;
    
    // 初始化物理组件
    physics_data = &component_handler_table;
    physics_text = physics_buffer;
    physics_buffer[0] = 0;
    physics_length = 9;
    copy_string_safely(physics_buffer, 0x40, &physics_component_name);
    initialize_component_params(component_params, &physics_data);
    param_count = 1;
    factory_flags = 0x80;
    register_component_factory(param_1, factory_handlers, component_params);
    factory_flags = 0;
    factory_handlers[0] = component_params;
    component_params[0] = &component_interface_table;
    physics_data = &component_interface_table;
    
    // 初始化音频组件
    audio_data = &component_handler_table;
    audio_text = audio_buffer;
    audio_buffer[0] = 0;
    audio_length = 0xd;
    copy_string_safely(audio_buffer, 0x40, &audio_component_name);
    initialize_component_params(component_params, &audio_data);
    param_count = 1;
    factory_flags = 0x100;
    register_component_factory(param_1, factory_handlers, component_params);
    factory_flags = 0;
    factory_handlers[0] = component_params;
    component_params[0] = &component_interface_table;
    audio_data = &component_interface_table;
    
    // 初始化输入组件
    input_data = &component_handler_table;
    input_text = input_buffer;
    input_buffer[0] = 0;
    input_length = 0x10;
    copy_string_safely(input_buffer, 0x40, &input_component_name);
    initialize_component_params(component_params, &input_data);
    param_count = 0xc;
    factory_flags = 0x200;
    register_component_factory(param_1, factory_handlers, component_params);
    factory_flags = 0;
    factory_handlers[0] = component_params;
    component_params[0] = &component_interface_table;
    input_data = &component_interface_table;
    
    // 初始化网络组件
    network_data = &component_handler_table;
    network_text = network_buffer;
    network_buffer[0] = 0;
    network_length = 0xd;
    copy_string_safely(network_buffer, 0x40, &network_component_name);
    initialize_component_params(component_params, &network_data);
    param_count = 3;
    factory_flags = 0x400;
    register_component_factory(param_1, factory_handlers, component_params);
    factory_flags = 0;
    factory_handlers[0] = component_params;
    component_params[0] = &component_interface_table;
    network_data = &component_interface_table;
    
    // 初始化文件系统组件
    ui_data = &component_handler_table;
    ui_text = ui_buffer;
    ui_buffer[0] = 0;
    ui_length = 0x18;
    copy_string_safely(ui_buffer, 0x40, &filesystem_component_name);
    initialize_component_params(component_params, &ui_data);
    param_count = 0xb;
    factory_flags = 0x800;
    register_component_factory(param_1, factory_handlers, component_params);
    factory_flags = 0;
    factory_handlers[0] = component_params;
    component_params[0] = &component_interface_table;
    ui_data = &component_interface_table;
    
    // 初始化资源管理组件
    component_data = &component_handler_table;
    component_name = name_buffer;
    name_buffer[0] = 0;
    name_length = 0xc;
    copy_string_safely(name_buffer, 0x40, &resource_component_name);
    initialize_component_params(component_params, &component_data);
    param_count = 0xb;
    factory_flags = 0x1000;
    register_component_factory(param_1, factory_handlers, component_params);
    factory_flags = 0;
    factory_handlers[0] = component_params;
    component_params[0] = &component_interface_table;
    component_data = &component_interface_table;
    
    // 初始化脚本系统组件
    config_data = &component_handler_table;
    config_text = config_buffer;
    config_buffer[0] = 0;
    config_length = 10;
    copy_string_safely(config_buffer, 0x40, &script_component_name);
    initialize_component_params(component_params, &config_data);
    param_count = 0xb;
    factory_flags = 0x2000;
    register_component_factory(param_1, factory_handlers, component_params);
    factory_flags = 0;
    factory_handlers[0] = component_params;
    component_params[0] = &component_interface_table;
    config_data = &component_interface_table;
    
    // 执行工厂初始化
    // 注意: 此函数不会返回
    execute_factory_initialization(factory_hash ^ (unsigned int64_t)security_buffer);
}

/**
 * 创建渲染对象组件
 * @param param_1 系统上下文指针
 * @param param_2 渲染配置参数
 */
void create_render_object_component(void* param_1, void* param_2)
{
    int string_length;
    void* component_data;
    int* string_ptr;
    void* vtable_ptr;
    void* stack_data[2];
    int stack_length;
    int64_t stack_value;
    
    // 分配渲染对象组件内存
    component_data = (void*)allocate_component_memory(_global_memory_pool, 0x88, 8, 3, 0xfffffffffffffffe);
    vtable_ptr = component_data;
    
    // 初始化渲染对象组件
    initialize_render_object(component_data, param_2, param_1);
    *vtable_ptr = &render_object_vtable;
    
    // 设置渲染对象属性
    vtable_ptr[0xe] = param_2;
    vtable_ptr[0xf] = 0;
    *(int*)(vtable_ptr + 0x10) = 0;
    *(char*)((int64_t)vtable_ptr + 0x84) = 0;
    
    // 设置组件标识
    stack_data[0] = &render_method_table;
    stack_value = 0;
    stack_data[1] = (int*)0x0;
    stack_length = 0;
    
    // 创建组件名称字符串
    string_ptr = (int*)create_string_identifier(_global_memory_pool, 0x10, 0x13);
    *(char*)string_ptr = 0;
    stack_data[1] = string_ptr;
    string_length = get_string_length(string_ptr);
    stack_value = ((stack_value & 0xFFFFFFFF) << 32) | string_length;
    
    // 设置名称为 "Ragdoll Enable"
    *string_ptr = 0x64676152;  // "Ragd"
    string_ptr[1] = 0x206c6c6f; // "oll "
    string_ptr[2] = 0x62616e45; // "Enab"
    string_ptr[3] = 0x64656c;   // "le"
    stack_length = 0xf;
    
    // 注册渲染对象组件
    register_render_object(component_data, &stack_data[0], (int64_t)component_data + 0x84, 3);
    
    // 清理临时数据
    stack_data[0] = &render_method_table;
    // 注意: 此函数不会返回
    cleanup_string_data(string_ptr);
}

/**
 * 创建相机系统组件
 * @param param_1 系统上下文指针
 * @param param_2 相机配置参数
 */
void create_camera_system_component(void* param_1, void* param_2)
{
    int64_t* camera_interface;
    int string_length;
    void* component_data;
    void* vtable_ptr;
    int64_t stack_value;
    int64_t* interface_ptr;
    
    // 分配相机系统组件内存
    component_data = (void*)allocate_component_memory(_global_memory_pool, 0xa0, 8, 3);
    stack_value = 0xfffffffffffffffe;
    vtable_ptr = component_data;
    
    // 初始化相机系统组件
    initialize_camera_system(component_data, param_2, param_1);
    *vtable_ptr = &camera_system_vtable;
    
    // 设置相机接口
    camera_interface = (int64_t*)vtable_ptr + 0xe;
    *camera_interface = (int64_t)&camera_interface_table;
    vtable_ptr[0xf] = 0;
    *(int*)(vtable_ptr + 0x10) = 0;
    *camera_interface = (int64_t)&camera_method_table;
    vtable_ptr[0x11] = 0;
    vtable_ptr[0xf] = 0;
    *(int*)(vtable_ptr + 0x10) = 0;
    vtable_ptr[0x12] = 0;
    
    // 调用相机初始化方法
    interface_ptr = camera_interface;
    (*(void(**)(void*, void*))(*camera_interface + 0x10))(camera_interface, &system_constants);
    
    // 注册相机系统组件
    register_camera_system(component_data, camera_interface);
}

/**
 * 创建动画组件
 * @param param_1 系统上下文指针
 * @param param_2 动画配置参数
 * @return 创建的动画组件指针
 */
void* create_animation_component(void* param_1, void* param_2)
{
    void* component_data;
    
    // 分配动画组件内存
    component_data = (void*)allocate_component_memory(_global_memory_pool, 0x78, 8, 3, 0xfffffffffffffffe);
    initialize_animation_component(component_data, param_2, param_1);
    *component_data = &animation_component_vtable;
    
    // 设置动画组件标志
    *(int*)((int64_t)component_data + 0x74) = 0xdeadbeaf;
    *(char*)(component_data + 0xe) = 0;
    
    return component_data;
}

/**
 * 创建音频混合组件
 * @param param_1 系统上下文指针
 * @param param_2 音频配置参数
 */
void create_audio_mixer_component(void* param_1, void* param_2)
{
    int string_length;
    void* component_data;
    void* vtable_ptr;
    void* stack_data[2];
    int stack_length;
    int64_t stack_value;
    int64_t function_ptr;
    
    // 设置函数指针
    function_ptr = 0x18017da2a;
    
    // 分配音频混合组件内存
    component_data = (void*)allocate_component_memory(_global_memory_pool, 0xa8, 8, 3);
    stack_value = 0xfffffffffffffffe;
    vtable_ptr = component_data;
    
    // 初始化音频混合组件
    initialize_audio_mixer(component_data, param_2, param_1);
    *vtable_ptr = &audio_mixer_vtable;
    
    // 设置音频混合参数
    *(int*)(component_data + 0x14) = 0x3f800000;  // 1.0
    component_data[0xe] = 0x4044000000000000;      // 32.0
    component_data[0xf] = 0x4010000000000000;      // 4.0
    *(int*)(component_data + 0x12) = 0;
    *(int*)((int64_t)component_data + 0x94) = 0;
    *(int*)(component_data + 0x13) = 0;
    *(int*)((int64_t)component_data + 0x9c) = 0;
    *(int*)(component_data + 0x14) = 0x3f800000;   // 1.0
    component_data[0x10] = 0x4024000000000000;    // 10.0
    component_data[0x11] = 0x3fd0000000000000;    // 0.25
    
    // 设置组件标识
    stack_data[0] = &audio_mixer_method_table;
    stack_value = 0;
    stack_data[1] = (void*)0x0;
    stack_length = 0;
    
    // 创建组件名称
    vtable_ptr = (void*)create_string_identifier(_global_memory_pool, 0x10, 0x13);
    *(char*)vtable_ptr = 0;
    stack_data[1] = vtable_ptr;
    string_length = get_string_length(vtable_ptr);
    stack_value = ((stack_value & 0xFFFFFFFF) << 32) | string_length;
    
    // 设置名称为 "Move Amount"
    *vtable_ptr = 0x6f6d412065766f4d;  // "Move Amo"
    *(int*)(vtable_ptr + 1) = 0x746e75; // "unt"
    stack_length = 0xb;
    
    // 注册音频混合组件
    register_audio_mixer(component_data, &stack_data[0], component_data + 0xe, 1);
    
    // 清理临时数据
    stack_data[0] = &audio_mixer_method_table;
    // 注意: 此函数不会返回
    cleanup_string_data(vtable_ptr);
}

/**
 * 创建粒子系统组件
 * @param param_1 系统上下文指针
 * @param param_2 粒子配置参数
 */
void create_particle_system_component(void* param_1, void* param_2)
{
    int64_t* emitter_interface;
    int64_t* particle_data;
    int string_length;
    void* component_data;
    void* vtable_ptr;
    int64_t stack_value;
    int64_t* interface_ptr;
    
    stack_value = 0xfffffffffffffffe;
    
    // 分配粒子系统组件内存
    component_data = (void*)allocate_component_memory(_global_memory_pool, 0x98, 8, 3, 0xfffffffffffffffe);
    vtable_ptr = component_data;
    
    // 初始化粒子系统组件
    initialize_particle_system(component_data, param_2, param_1);
    *vtable_ptr = &particle_system_vtable;
    
    // 设置发射器接口
    emitter_interface = (int64_t*)vtable_ptr + 0xe;
    *emitter_interface = (int64_t)&particle_interface_table;
    vtable_ptr[0xf] = 0;
    *(int*)(vtable_ptr + 0x10) = 0;
    *emitter_interface = (int64_t)&emitter_method_table;
    vtable_ptr[0x11] = 0;
    vtable_ptr[0xf] = 0;
    *(int*)(vtable_ptr + 0x10) = 0;
    vtable_ptr[0x12] = 0;
    
    // 调用发射器初始化方法
    interface_ptr = emitter_interface;
    (*(void(**)(void*, int64_t))(*emitter_interface + 0x10))(emitter_interface, 0);
    
    // 清理旧的粒子数据
    particle_data = (int64_t*)component_data[0x12];
    component_data[0x12] = 0;
    if (particle_data != (int64_t*)0x0) {
        (*(void(**)())(*particle_data + 0x38))();
    }
    
    // 注册粒子系统组件
    register_particle_system(component_data, emitter_interface);
}

/**
 * 创建资源组件
 * @param param_1 系统上下文指针
 * @param param_2 资源配置参数
 */
void create_resource_component(void* param_1, void* param_2)
{
    int string_length;
    void* component_data;
    int* string_ptr;
    void* vtable_ptr;
    void* stack_data[2];
    int stack_length;
    int64_t stack_value;
    
    // 分配资源组件内存
    component_data = (void*)allocate_component_memory(_global_memory_pool, 0x78, 8, 3, 0xfffffffffffffffe);
    vtable_ptr = component_data;
    
    // 初始化资源组件
    initialize_resource_component(component_data, param_2, param_1);
    *vtable_ptr = &resource_component_vtable;
    
    // 设置资源组件标志
    *(char*)(vtable_ptr + 0xe) = 0;
    
    // 设置组件标识
    stack_data[0] = &resource_method_table;
    stack_value = 0;
    stack_data[1] = (int*)0x0;
    stack_length = 0;
    
    // 创建组件名称字符串
    string_ptr = (int*)create_string_identifier(_global_memory_pool, 0x12, 0x13);
    *(char*)string_ptr = 0;
    stack_data[1] = string_ptr;
    string_length = get_string_length(string_ptr);
    stack_value = ((stack_value & 0xFFFFFFFF) << 32) | string_length;
    
    // 设置名称为 "Reserve every Frame"
    *string_ptr = 0x65736552;  // "Rese"
    string_ptr[1] = 0x76452074; // "rve "
    string_ptr[2] = 0x20797265; // "ery"
    string_ptr[3] = 0x6d617246; // "Fram"
    *(short*)(string_ptr + 4) = 0x65; // "e"
    stack_length = 0x11;
    
    // 注册资源组件
    register_resource_component(component_data, &stack_data[0], component_data + 0xe, 3);
    
    // 清理临时数据
    stack_data[0] = &resource_method_table;
    // 注意: 此函数不会返回
    cleanup_string_data(string_ptr);
}

/**
 * 创建边界框组件
 * @param param_1 系统上下文指针
 * @param param_2 边界框配置参数
 */
void create_bounding_box_component(void* param_1, void* param_2)
{
    int string_length;
    void* component_data;
    int* string_ptr;
    void* vtable_ptr;
    void* stack_data[2];
    int stack_length;
    int64_t stack_value;
    int64_t function_ptr;
    
    // 设置函数指针
    function_ptr = 0x18017dd3a;
    
    // 分配边界框组件内存
    component_data = (void*)allocate_component_memory(_global_memory_pool, 0xb8, 8, 3);
    stack_value = 0xfffffffffffffffe;
    vtable_ptr = component_data;
    
    // 初始化边界框组件
    initialize_bounding_box(component_data, param_2, param_1);
    *vtable_ptr = &bounding_box_vtable;
    
    // 设置边界框属性
    vtable_ptr[0x13] = 0;
    vtable_ptr[0x14] = 0;
    vtable_ptr[0x15] = 0;
    *(int*)(vtable_ptr + 0x16) = 3;
    
    // 设置组件标识
    stack_data[0] = &bounding_box_method_table;
    stack_value = 0;
    stack_data[1] = (int*)0x0;
    stack_length = 0;
    
    // 创建组件名称字符串
    string_ptr = (int*)create_string_identifier(_global_memory_pool, 0x18, 0x13);
    *(char*)string_ptr = 0;
    stack_data[1] = string_ptr;
    string_length = get_string_length(string_ptr);
    stack_value = ((stack_value & 0xFFFFFFFF) << 32) | string_length;
    
    // 设置名称为 "Bounding Box Contraints"
    *string_ptr = 0x6e756f42;  // "Boun"
    string_ptr[1] = 0x676e6964; // "ding"
    string_ptr[2] = 0x786f4220; // "Box "
    string_ptr[3] = 0x6e6f4320; // "Con"
    *(int64_t*)(string_ptr + 4) = 0x746e6961727473; // "straints"
    stack_length = 0x17;
    
    // 注册边界框组件
    register_bounding_box(component_data, &stack_data[0], (int64_t)component_data + 0x74, 2);
    
    // 清理临时数据
    stack_data[0] = &bounding_box_method_table;
    // 注意: 此函数不会返回
    cleanup_string_data(string_ptr);
}

// 注意: 全局变量起始地址与较小符号重叠