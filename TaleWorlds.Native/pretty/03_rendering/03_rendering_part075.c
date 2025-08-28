#include "TaleWorlds.Native.Split.h"

// 渲染系统高级资源管理和布料模拟模块
// 包含11个核心函数，涵盖渲染资源管理、布料模拟、对象处理、内存管理等高级渲染功能

// 函数别名定义
#define rendering_system_update_cloth_simulation FUN_18030b270
#define rendering_system_create_render_object_ext FUN_18030b420
#define rendering_system_release_render_object_ext FUN_18030b510
#define rendering_system_get_render_object_id FUN_18030b610
#define rendering_system_get_render_object_data FUN_18030b650
#define rendering_system_setup_cloth_simulator FUN_18030b680
#define rendering_system_process_cloth_simulation FUN_18030b780
#define rendering_system_create_cloth_object FUN_18030b970
#define rendering_system_initialize_cloth_params FUN_18030bac0
#define rendering_system_update_cloth_parameters FUN_18030bb40
#define rendering_system_process_cloth_texture FUN_18030bc60
#define rendering_system_cleanup_cloth_resources FUN_18030bd90

// 常量定义
#define RENDERING_CLOTH_SIMULATOR_FLAG 0xfffffffffffffffe
#define RENDERING_CLOTH_OBJECT_SIZE 200
#define RENDERING_CLOTH_DATA_SIZE 0x3d0
#define RENDERING_CLOTH_NAME_SIZE 0x10
#define RENDERING_CLOTH_TEXTURE_SIZE 0xf
#define RENDERING_MAX_FLOAT_VALUE 0x7f7fffff
#define RENDERING_RESOURCE_HANDLE 0xffffffff
#define RENDERING_MEMORY_FLAG_EXCLUSIVE 0xfffffffffffffffe

// 全局变量声明
extern uint64_t *rendering_null_pointer;
extern uint64_t *rendering_cleanup_sequence1;
extern uint64_t *rendering_cleanup_sequence2;
extern int64_t global_memory_allocator;
extern int64_t global_cloth_manager;
extern uint64_t *cloth_simulator_table;
extern uint64_t *cloth_texture_table;
extern uint64_t *cloth_name_registry;
extern uint64_t *cloth_string_constants;

// 辅助函数声明
void FUN_18005d4b0(int64_t param1, void *param2, int param3, uint64_t param4, uint64_t memory_flags);
void DataPipelineManager(int64_t param1, int param2);
void CoreSystem_LoggingManager0(void *allocator, int size, int alignment, int flags, uint64_t memory_flags);
void CoreEngine_MemoryAllocator(void *allocator, int size, int flags, uint64_t param4, int param5, uint64_t memory_flags);
void FUN_180275090(uint64_t param1);
void FUN_180275370(uint64_t param1, int64_t param2);
void FUN_180275540(uint64_t param1, int64_t param2, int64_t param3);
void FUN_180275a60(int64_t param1, int64_t *param2, int param3);
void FUN_18064e990(void *ptr);
void FUN_1806277c0(void *param1, int param2, uint64_t param3, uint64_t param4, int param5, uint64_t memory_flags);
void CoreSystem_ConfigValidator0(void *param1, int64_t param2, uint64_t param3, uint64_t param4, uint64_t memory_flags);
void FUN_180628f30(void *param1, uint *param2, uint param3, uint64_t param4, uint64_t memory_flags);
void System_QueueProcessor(uint64_t param1, void *param2);
void FUN_1800f5a90(uint64_t param1, uint64_t param2, uint64_t param3, void *param4, uint64_t memory_flags);
uint FUN_18064e990(void *ptr);
void free(void *ptr, int size, ...);
void LOCK(void);
void UNLOCK(void);

/**
 * 渲染系统布料模拟更新函数
 * 
 * 处理布料模拟的物理更新，包括位置插值、碰撞检测和状态同步。
 * 
 * @param render_context 渲染上下文指针
 * @param cloth_object 布料对象指针
 */
void rendering_system_update_cloth_simulation(
    int64_t render_context, 
    int64_t *cloth_object
) {
    float *position_ptr;
    int64_t *prev_object;
    uint64_t *transform_data;
    float delta_x, delta_y, delta_z;
    float min_delta = 0.05f;
    
    // 处理之前的布料对象
    if (cloth_object != (int64_t *)0x0) {
        (**(code **)(*cloth_object + 0x28))(cloth_object);
    }
    
    // 更新布料对象链表
    prev_object = *(int64_t **)(render_context + 0x48);
    *(int64_t **)(render_context + 0x48) = cloth_object;
    
    // 清理之前的对象
    if (prev_object != (int64_t *)0x0) {
        (**(code **)(*prev_object + 0x38))();
    }
    
    // 设置渲染标志
    *(uint32_t *)(render_context + 0x30) = RENDERING_RESOURCE_HANDLE;
    
    // 如果没有布料对象，重置所有位置数据
    if (*(int64_t *)(render_context + 0x48) == 0) {
        *(uint64_t *)(render_context + 0x84) = 0;
        *(uint64_t *)(render_context + 0x8c) = 0;
        *(uint64_t *)(render_context + 0x94) = 0;
        *(uint64_t *)(render_context + 0x9c) = 0;
        *(uint64_t *)(render_context + 0xa4) = 0;
        *(uint64_t *)(render_context + 0xac) = 0;
        *(uint32_t *)(render_context + 0xb4) = 0;
        return;
    }
    
    // 执行布料对象的变换处理
    (**(code **)(*cloth_object + 0x1e0))(cloth_object, *(uint64_t *)(render_context + 0x28));
    
    // 获取变换数据
    if (*(code **)(*cloth_object + 0x198) == (code *)&cloth_simulator_table) {
        transform_data = (uint64_t *)((int64_t)cloth_object + 0x214);
    }
    else {
        transform_data = (uint64_t *)(**(code **)(*cloth_object + 0x198))(cloth_object);
    }
    
    // 应用变换数据到渲染上下文
    position_ptr = (float *)(render_context + 0x84);
    *(uint64_t *)position_ptr = *transform_data;
    *(uint64_t *)(render_context + 0x8c) = transform_data[1];
    *(uint64_t *)(render_context + 0x94) = transform_data[2];
    *(uint64_t *)(render_context + 0x9c) = transform_data[3];
    *(uint64_t *)(render_context + 0xa4) = transform_data[4];
    *(uint64_t *)(render_context + 0xac) = transform_data[5];
    *(uint32_t *)(render_context + 0xb4) = *(uint32_t *)(transform_data + 6);
    
    // 计算位置增量
    delta_x = (*(float *)(render_context + 0x94) - *(float *)(render_context + 0xa4)) * 0.05f;
    if (delta_x <= min_delta) {
        delta_x = min_delta;
    }
    
    delta_y = (*(float *)(render_context + 0x98) - *(float *)(render_context + 0xa8)) * 0.05f;
    if (delta_y <= min_delta) {
        delta_y = min_delta;
    }
    
    delta_z = (*(float *)(render_context + 0x9c) - *(float *)(render_context + 0xac)) * 0.05f;
    if (delta_z <= min_delta) {
        delta_z = min_delta;
    }
    
    // 更新位置
    *(float *)(render_context + 0x94) = delta_x + *(float *)(render_context + 0x94);
    *(float *)(render_context + 0x98) = delta_y + *(float *)(render_context + 0x98);
    *(float *)(render_context + 0x9c) = delta_z + *(float *)(render_context + 0x9c);
    *position_ptr = *position_ptr - delta_x;
    *(float *)(render_context + 0x88) = *(float *)(render_context + 0x88) - delta_y;
    *(float *)(render_context + 0x8c) = *(float *)(render_context + 0x8c) - delta_z;
    
    // 计算中心点
    delta_x = *(float *)(render_context + 0x94);
    if (*position_ptr <= delta_x) {
        delta_y = (delta_x + *position_ptr) * 0.5f;
        *(float *)(render_context + 0xa4) = delta_y;
        *(float *)(render_context + 0xa8) = (*(float *)(render_context + 0x98) + *(float *)(render_context + 0x88)) * 0.5f;
        *(float *)(render_context + 0xac) = (*(float *)(render_context + 0x9c) + *(float *)(render_context + 0x8c)) * 0.5f;
        *(uint32_t *)(render_context + 0xb0) = RENDERING_MAX_FLOAT_VALUE;
        delta_x = delta_x - delta_y;
        delta_z = *(float *)(render_context + 0x9c) - *(float *)(render_context + 0xac);
        delta_y = *(float *)(render_context + 0x98) - *(float *)(render_context + 0xa8);
        *(float *)(render_context + 0xb4) = SQRT(delta_y * delta_y + delta_x * delta_x + delta_z * delta_z);
        return;
    }
    
    // 重置位置数据
    *(uint32_t *)(render_context + 0xb4) = 0;
    position_ptr[0] = 0.0f;
    position_ptr[1] = 0.0f;
    *(uint64_t *)(render_context + 0x8c) = 0;
    *(uint64_t *)(render_context + 0x94) = 0;
    *(uint64_t *)(render_context + 0x9c) = 0;
    *(uint64_t *)(render_context + 0xa4) = 0;
    *(uint64_t *)(render_context + 0xac) = 0;
    
    return;
}

/**
 * 渲染系统扩展渲染对象创建函数
 * 
 * 创建扩展的渲染对象，初始化布料模拟相关的属性和资源。
 * 
 * @param render_object_ptr 渲染对象指针
 * @param cloth_param 布料参数
 * @param cloth_flag 布料标志
 * @return 创建的渲染对象指针
 */
uint64_t *rendering_system_create_render_object_ext(
    uint64_t *render_object_ptr, 
    uint64_t cloth_param, 
    uint8_t cloth_flag
) {
    // 初始化渲染对象的基础结构
    *render_object_ptr = rendering_cleanup_sequence2;
    *render_object_ptr = rendering_cleanup_sequence1;
    *(uint32_t *)(render_object_ptr + 1) = 0;
    *render_object_ptr = cloth_name_registry;
    *(uint32_t *)(render_object_ptr + 2) = 4;
    render_object_ptr[3] = 0;
    render_object_ptr[4] = 0;
    *(uint32_t *)(render_object_ptr + 1) = 0;
    render_object_ptr[5] = 0;
    *render_object_ptr = cloth_simulator_table;
    render_object_ptr[7] = 0;
    render_object_ptr[9] = 0;
    render_object_ptr[10] = 0;
    render_object_ptr[0xb] = 0;
    render_object_ptr[0xc] = 0;
    *(uint32_t *)(render_object_ptr + 0xd) = 3;
    *(uint32_t *)((int64_t)render_object_ptr + 0xb4) = 0;
    *(uint64_t *)((int64_t)render_object_ptr + 0x84) = 0;
    *(uint64_t *)((int64_t)render_object_ptr + 0x8c) = 0;
    *(uint64_t *)((int64_t)render_object_ptr + 0x94) = 0;
    *(uint64_t *)((int64_t)render_object_ptr + 0x9c) = 0;
    *(uint64_t *)((int64_t)render_object_ptr + 0xa4) = 0;
    *(uint64_t *)((int64_t)render_object_ptr + 0xac) = 0;
    *(uint32_t *)(render_object_ptr + 6) = RENDERING_RESOURCE_HANDLE;
    *(uint16_t *)((int64_t)render_object_ptr + 0x41) = 0;
    *(uint8_t *)((int64_t)render_object_ptr + 0x43) = cloth_flag;
    *(uint8_t *)((int64_t)render_object_ptr + 0x44) = 1;
    *(uint32_t *)((int64_t)render_object_ptr + 0xbc) = 0;
    *(uint8_t *)(render_object_ptr + 8) = 0;
    *(uint8_t *)(render_object_ptr + 0x18) = 0;
    *(uint32_t *)(render_object_ptr + 0xe) = 0;
    *(uint32_t *)((int64_t)render_object_ptr + 0x74) = 0;
    *(uint32_t *)(render_object_ptr + 0xf) = 0;
    *(uint32_t *)((int64_t)render_object_ptr + 0x7c) = 0;
    *(uint32_t *)(render_object_ptr + 0x10) = 0;
    *(uint32_t *)(render_object_ptr + 0x17) = 0x3f800000; // 1.0f
    
    // 初始化布料模拟
    rendering_system_update_cloth_simulation(render_object_ptr);
    
    return render_object_ptr;
}

/**
 * 渲染系统扩展渲染对象释放函数
 * 
 * 释放扩展的渲染对象及其相关资源，包括布料模拟资源。
 * 
 * @param render_object_ptr 渲染对象指针
 * @param memory_flags 内存标志
 * @param param3 参数3
 * @param param4 参数4
 * @return 释放后的渲染对象指针
 */
uint64_t *rendering_system_release_render_object_ext(
    uint64_t *render_object_ptr, 
    uint64_t memory_flags, 
    uint64_t param3, 
    uint64_t param4
) {
    uint64_t cleanup_flag = RENDERING_CLOTH_SIMULATOR_FLAG;
    
    *render_object_ptr = cloth_simulator_table;
    
    // 检查对象状态
    if (render_object_ptr[10] != 0) {
        // 警告：子程序不返回
        CoreEngine_MemoryPoolManager();
    }
    
    // 清理相关资源
    if ((int64_t *)render_object_ptr[9] != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)render_object_ptr[9] + 0x38))();
    }
    
    if ((int64_t *)render_object_ptr[7] != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)render_object_ptr[7] + 0x38))();
    }
    
    // 重置对象结构
    *render_object_ptr = cloth_name_registry;
    render_object_ptr[5] = 0;
    *render_object_ptr = rendering_cleanup_sequence1;
    *render_object_ptr = rendering_cleanup_sequence2;
    
    // 根据内存标志释放内存
    if ((memory_flags & 1) != 0) {
        free(render_object_ptr, RENDERING_CLOTH_OBJECT_SIZE, param3, param4, cleanup_flag);
    }
    
    return render_object_ptr;
}

/**
 * 渲染系统渲染对象ID获取函数
 * 
 * 获取渲染对象的唯一标识符。
 * 
 * @param render_context 渲染上下文指针
 * @return 渲染对象ID
 */
uint64_t rendering_system_get_render_object_id(int64_t render_context) {
    void *object_type;
    uint64_t object_id;
    
    // 获取对象类型指针
    object_type = (void *)**(uint64_t **)(render_context + 0x48);
    
    // 检查是否为默认类型
    if (object_type == &cloth_string_constants) {
        return (uint64_t)*(uint32_t *)(*(uint64_t **)(render_context + 0x48) + 0x42);
    }
    
    // 获取对象ID
    object_id = (**(code **)(object_type + 0x130))();
    
    return object_id;
}

/**
 * 渲染系统渲染对象数据获取函数
 * 
 * 获取渲染对象的扩展数据指针。
 * 
 * @param render_context 渲染上下文指针
 * @return 渲染对象数据指针
 */
uint64_t *rendering_system_get_render_object_data(int64_t render_context) {
    void *object_type;
    uint64_t *object_data;
    
    // 获取对象类型指针
    object_type = (void *)**(uint64_t **)(render_context + 0x48);
    
    // 检查是否为默认类型
    if (object_type == &cloth_string_constants) {
        return *(uint64_t **)(render_context + 0x48) + 0x66;
    }
    
    // 获取对象数据
    object_data = (uint64_t *)(**(code **)(object_type + 0x158))();
    
    return object_data;
}

/**
 * 渲染系统布料模拟器设置函数
 * 
 * 设置布料模拟器的参数和配置。
 * 
 * @param render_context 渲染上下文指针
 * @param simulator_param 模拟器参数
 * @param target_context 目标上下文
 * @param source_data 源数据
 * @param render_flags 渲染标志
 */
void rendering_system_setup_cloth_simulator(
    int64_t render_context, 
    int64_t simulator_param, 
    int64_t target_context, 
    int64_t source_data, 
    uint32_t render_flags
) {
    uint64_t *simulator_data;
    char *simulator_name;
    char *name_ptr;
    uint64_t source_param = 0;
    
    // 分配模拟器数据内存
    simulator_data = (uint64_t *)DataPipelineManager(simulator_param + 0x60, 0x60);
    source_param = 0;
    
    // 初始化模拟器数据结构
    *simulator_data = 0;
    simulator_data[1] = 0;
    simulator_data[4] = 0;
    *(uint32_t *)(simulator_data + 5) = 1;
    simulator_data[6] = 0;
    simulator_data[8] = 0;
    
    // 设置模拟器名称
    simulator_name = "cloth_simulator";
    do {
        name_ptr = simulator_name;
        simulator_name = name_ptr + 1;
    } while (*simulator_name != '\0');
    
    *simulator_data = &cloth_texture_table;
    simulator_data[2] = name_ptr + -0x180a09de7;
    
    // 处理源数据参数
    if (source_data != 0) {
        source_param = *(uint64_t *)(source_data + 0x48);
    }
    
    // 执行模拟器初始化
    (**(code **)(**(int64_t **)(render_context + 0x48) + 0x70))
            (*(int64_t **)(render_context + 0x48), simulator_param, simulator_data, source_param, render_flags);
    
    // 添加到目标上下文的链表
    if (*(int64_t *)(target_context + 0x30) == 0) {
        simulator_data[10] = 0;
        *(uint64_t **)(target_context + 0x30) = simulator_data;
    }
    else {
        simulator_data[10] = *(uint64_t *)(target_context + 0x38);
        *(uint64_t **)(*(int64_t *)(target_context + 0x38) + 0x58) = simulator_data;
    }
    
    *(uint64_t **)(target_context + 0x38) = simulator_data;
    simulator_data[4] = target_context;
    simulator_data[0xb] = 0;
    
    return;
}

/**
 * 渲染系统布料模拟处理函数
 * 
 * 处理布料模拟的物理计算和碰撞检测。
 * 
 * @param render_context 渲染上下文指针
 * @param cloth_param 布料参数
 * @param target_param 目标参数
 * @param source_param 源参数
 */
void rendering_system_process_cloth_simulation(
    int64_t render_context, 
    uint64_t cloth_param, 
    uint64_t target_param, 
    uint64_t source_param
) {
    int64_t resource_handle;
    uint64_t cleanup_param;
    int64_t *resource_ptr;
    char *name_ptr;
    int64_t name_length;
    uint64_t *resource_data;
    char *resource_name;
    char *name_compare;
    int64_t name_offset;
    void *resource_cleanup;
    int64_t cleanup_flag = 0;
    
    // 获取资源句柄
    resource_handle = FUN_18005d4b0(cloth_param, &cloth_texture_table, 0, source_param, RENDERING_CLOTH_SIMULATOR_FLAG);
    
    if (resource_handle != 0) {
        resource_cleanup = &cloth_string_constants;
        cleanup_param = 0;
        cleanup_flag = 0;
        uint32_t match_count = 0;
        
        // 设置资源名称
        name_ptr = "name";
        do {
            name_compare = name_ptr;
            name_ptr = name_compare + 1;
        } while (*name_ptr != '\0');
        
        // 遍历资源数据
        resource_data = *(uint64_t **)(resource_handle + 0x40);
        if (resource_data != (uint64_t *)0x0) {
            do {
                resource_name = (char *)*resource_data;
                if (resource_name == (char *)0x0) {
                    resource_name = (char *)0x180d48d24;
                    name_ptr = (char *)0x0;
                }
                else {
                    name_ptr = (char *)resource_data[2];
                }
                
                // 比较资源名称
                if (name_ptr == name_compare + -0x180a03a83) {
                    name_ptr = name_ptr + (int64_t)resource_name;
                    if (name_ptr <= resource_name) {
name_found:
                        name_length = 0x180d48d24;
                        if (resource_data[1] != 0) {
                            name_length = resource_data[1];
                        }
                        CoreSystem_ConfigValidator0(&resource_cleanup, name_length);
                        break;
                    }
                    
                    name_offset = (int64_t)&cloth_name_registry - (int64_t)resource_name;
                    while (*resource_name == resource_name[name_offset]) {
                        resource_name = resource_name + 1;
                        if (name_ptr <= resource_name) goto name_found;
                    }
                }
                
                resource_data = (uint64_t *)resource_data[6];
            } while (resource_data != (uint64_t *)0x0);
        }
        
        // 根据匹配结果处理资源
        if (match_count < 1) {
            cleanup_param = CoreSystem_LoggingManager0(global_memory_allocator, RENDERING_CLOTH_DATA_SIZE, 8, 0x16);
            resource_ptr = (int64_t *)FUN_180275540(cleanup_param, *(int64_t *)(render_context + 0x48) + 0x1f0, resource_handle);
            if (resource_ptr != (int64_t *)0x0) {
                (**(code **)(*resource_ptr + 0x28))(resource_ptr);
            }
            rendering_system_update_cloth_simulation(render_context, resource_ptr);
        }
        else {
            cleanup_param = CoreSystem_LoggingManager0(global_memory_allocator, RENDERING_CLOTH_DATA_SIZE, 8, 0x16);
            resource_ptr = (int64_t *)FUN_180275370(cleanup_param, resource_handle);
            if (resource_ptr != (int64_t *)0x0) {
                (**(code **)(*resource_ptr + 0x28))(resource_ptr);
            }
            rendering_system_update_cloth_simulation(render_context, resource_ptr);
        }
        
        // 清理资源
        if (resource_ptr != (int64_t *)0x0) {
            (**(code **)(*resource_ptr + 0x38))(resource_ptr);
        }
        
        resource_cleanup = &cloth_string_constants;
        if (cleanup_flag != 0) {
            // 警告：子程序不返回
            CoreEngine_MemoryPoolManager();
        }
    }
    
    return;
}

/**
 * 渲染系统布料对象创建函数
 * 
 * 创建布料模拟对象并初始化其属性。
 * 
 * @param render_context 渲染上下文指针
 * @param cloth_param 布料参数
 * @param cloth_flag 布料标志
 * @return 创建的布料对象指针
 */
uint64_t *rendering_system_create_cloth_object(
    int64_t render_context, 
    uint64_t *cloth_param, 
    uint8_t cloth_flag
) {
    uint64_t cloth_memory;
    uint8_t cloth_type;
    uint64_t cloth_data[4];
    int64_t *resource_ptr;
    int64_t *cloth_resource;
    
    // 分配布料对象内存
    cloth_memory = CoreSystem_LoggingManager0(global_memory_allocator, 200, 8, 3, 0, RENDERING_MEMORY_FLAG_EXCLUSIVE);
    
    cloth_type = *(uint8_t *)(render_context + 0x43);
    cloth_data[0] = *(uint64_t *)(render_context + 0x48);
    
    // 分配资源内存
    cloth_data[2] = CoreSystem_LoggingManager0(global_memory_allocator, RENDERING_CLOTH_DATA_SIZE, 8, 0x16);
    resource_ptr = (int64_t *)FUN_180275090(cloth_data[2]);
    
    if (resource_ptr != (int64_t *)0x0) {
        (**(code **)(*resource_ptr + 0x28))(resource_ptr);
    }
    
    FUN_180275a60(cloth_data[0], resource_ptr, 1);
    
    // 创建布料资源
    cloth_resource = (int64_t *)rendering_system_create_render_object_ext(cloth_memory, resource_ptr, cloth_type);
    
    if (cloth_resource != (int64_t *)0x0) {
        (**(code **)(*cloth_resource + 0x28))(cloth_resource);
    }
    
    if (resource_ptr != (int64_t *)0x0) {
        (**(code **)(*resource_ptr + 0x38))(resource_ptr);
    }
    
    *cloth_param = cloth_resource;
    
    if (cloth_resource != (int64_t *)0x0) {
        (**(code **)(*cloth_resource + 0x28))(cloth_resource);
        (**(code **)(*cloth_resource + 0x38))(cloth_resource);
    }
    
    return cloth_param;
}

/**
 * 渲染系统布料参数初始化函数
 * 
 * 初始化布料模拟的参数和数据结构。
 * 
 * @param cloth_param 布料参数
 * @param param2 参数2
 * @param param3 参数3
 * @param param4 参数4
 * @return 初始化后的布料参数指针
 */
uint64_t *rendering_system_initialize_cloth_params(
    uint64_t cloth_param, 
    uint64_t *param2, 
    uint64_t param3, 
    uint64_t param4
) {
    uint64_t *cloth_data;
    
    // 初始化布料参数结构
    *param2 = rendering_null_pointer;
    param2[1] = 0;
    *(uint32_t *)(param2 + 2) = 0;
    *param2 = &cloth_string_constants;
    param2[3] = 0;
    param2[1] = 0;
    *(uint32_t *)(param2 + 2) = 0;
    
    FUN_1806277c0(param2, RENDERING_CLOTH_TEXTURE_SIZE, param3, param4, 0, RENDERING_MEMORY_FLAG_EXCLUSIVE);
    
    cloth_data = (uint64_t *)param2[1];
    *cloth_data = 0x69735f68746f6c63; // "cloth_is"
    cloth_data[1] = 0x726f74616c756d; // "multi_rot"
    *(uint32_t *)(param2 + 2) = RENDERING_CLOTH_TEXTURE_SIZE;
    
    return param2;
}

/**
 * 渲染系统布料参数更新函数
 * 
 * 更新布料模拟的参数和配置。
 * 
 * @param render_context 渲染上下文指针
 * @param param2 参数2
 * @param param3 参数3
 * @param cloth_flag 布料标志
 */
void rendering_system_update_cloth_parameters(
    uint64_t render_context, 
    int64_t param2, 
    uint64_t param3, 
    uint8_t cloth_flag
) {
    uint32_t *data_ptr;
    uint32_t data_size;
    uint64_t cleanup_param;
    int64_t *resource_ptr;
    void *resource_cleanup;
    int64_t cleanup_flag = 0;
    uint64_t stack_data[3];
    
    // 初始化清理结构
    resource_cleanup = &cloth_string_constants;
    stack_data[0] = 0;
    cleanup_flag = 0;
    uint32_t temp_data = 0;
    
    // 获取数据指针和大小
    data_ptr = *(uint32_t **)(param2 + 8);
    data_size = *data_ptr;
    data_ptr = *(uint32_t **)(param2 + 8) + 1;
    *(uint32_t **)(param2 + 8) = data_ptr;
    
    if (data_size != 0) {
        FUN_180628f30(&resource_cleanup, data_ptr, data_size, cloth_flag, RENDERING_MEMORY_FLAG_EXCLUSIVE);
        *(int64_t *)(param2 + 8) = *(int64_t *)(param2 + 8) + (uint64_t)data_size;
    }
    
    // 分配资源内存
    cleanup_param = CoreSystem_LoggingManager0(global_memory_allocator, RENDERING_CLOTH_DATA_SIZE, 8, 3);
    resource_ptr = (int64_t *)FUN_180275090(cleanup_param);
    
    if (resource_ptr != (int64_t *)0x0) {
        (**(code **)(*resource_ptr + 0x28))(resource_ptr);
    }
    
    (**(code **)(*resource_ptr + 0x68))(resource_ptr, param2);
    rendering_system_update_cloth_simulation(render_context, resource_ptr);
    (**(code **)(*resource_ptr + 0x38))(resource_ptr);
    
    resource_cleanup = &cloth_string_constants;
    if (cleanup_flag != 0) {
        // 警告：子程序不返回
        CoreEngine_MemoryPoolManager();
    }
    
    return;
}

/**
 * 渲染系统布料纹理处理函数
 * 
 * 处理布料模拟的纹理和材质数据。
 * 
 * @param param1 参数1
 * @param param2 参数2
 * @param param3 参数3
 * @param param4 参数4
 */
void rendering_system_process_cloth_texture(
    uint64_t param1, 
    uint64_t param2, 
    uint64_t param3, 
    uint64_t param4
) {
    uint32_t texture_data;
    uint32_t *texture_ptr;
    void *texture_cleanup;
    uint32_t *texture_stack;
    uint32_t temp_data;
    uint64_t stack_data[2];
    
    // 初始化纹理处理结构
    texture_cleanup = &cloth_string_constants;
    stack_data[0] = 0;
    texture_stack = (uint32_t *)0x0;
    temp_data = 0;
    
    // 分配纹理内存
    texture_ptr = (uint32_t *)CoreEngine_MemoryAllocator(global_memory_allocator, RENDERING_CLOTH_NAME_SIZE, 0x13, param4, 0, RENDERING_MEMORY_FLAG_EXCLUSIVE);
    
    *(uint8_t *)texture_ptr = 0;
    texture_stack = texture_ptr;
    texture_data = FUN_18064e990(texture_ptr);
    stack_data[0] = ((uint64_t)temp_data << 32) | texture_data;
    
    // 设置纹理名称
    *texture_ptr = 0x746f6c63; // "clot"
    texture_ptr[1] = 0x69735f68; // "h_is"
    texture_ptr[2] = 0x616c756d; // "mulm"
    texture_ptr[3] = 0x726f74; // "trot"
    temp_data = RENDERING_CLOTH_TEXTURE_SIZE;
    
    System_QueueProcessor(param2, &texture_cleanup);
    texture_cleanup = &cloth_string_constants;
    
    // 警告：子程序不返回
    CoreEngine_MemoryPoolManager(texture_ptr);
}

/**
 * 渲染系统布料资源清理函数
 * 
 * 清理布料模拟相关的资源和内存。
 * 
 * @param param1 参数1
 * @param param2 参数2
 * @param param3 参数3
 */
void rendering_system_cleanup_cloth_resources(
    uint64_t param1, 
    uint64_t param2, 
    uint64_t param3
) {
    uint64_t stack_data;
    uint64_t *stack_ptr;
    
    // 检查是否需要清理
    if (*(int *)(global_cloth_manager + 0x624) != *(int *)(global_cloth_manager + 0x620)) {
        stack_ptr = &stack_data;
        stack_data = 0;
        FUN_1800f5a90(param1, param1, param3, &stack_data, RENDERING_MEMORY_FLAG_EXCLUSIVE);
    }
    
    return;
}