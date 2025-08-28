/*
 * 核心引擎模块 - 第221部分
 * 
 * 本文件包含引擎核心功能，包括：
 * - 引擎资源清理和释放
 * - 事件系统管理
 * - 相机变换矩阵计算
 * - 线程安全队列操作
 * - 游戏场景初始化
 * - 实体创建和管理
 * 
 * 文件位置: /root/WorkSpace/CSharp/mountblade-code/TaleWorlds.Native/src/02_core_engine_part221.c
 * 美化时间: 2025-08-28
 */

#include "TaleWorlds.Native.Split.h"

/* 全局变量和常量 */
#define GLOBAL_ENGINE_VTABLE_1 (&unknown_var_7040_ptr)
#define GLOBAL_ENGINE_VTABLE_2 (&system_handler2_ptr)
#define GLOBAL_ENGINE_VTABLE_3 (&system_handler1_ptr)
#define GLOBAL_EVENT_SYSTEM_HANDLE (core_system_data_string)
#define GLOBAL_MEMORY_ALLOCATOR (system_memory_pool_ptr)
#define GLOBAL_EVENT_MANAGER (system_cache_buffer)

/* 函数声明 */
void cleanup_engine_resources(uint64_t *engine_context);
void register_game_event_handler(int64_t event_system, int64_t event_data);
void calculate_camera_transform_matrix(int64_t camera_context, float *transform_matrix);
void thread_safe_queue_operation(int64_t queue_context, uint64_t operation_id, uint64_t data_ptr, uint64_t priority, uint64_t timeout);
void initialize_game_scene(int64_t scene_context, int64_t initialization_param);
int64_t *create_game_entity(uint64_t entity_type, int64_t *entity_output, int8_t entity_flags);
void destroy_game_entity(int64_t entity_system, int64_t *entity_ptr, uint64_t destruction_flags, uint64_t cleanup_mode, int32_t entity_id);
uint64_t update_entity_status(int64_t world_context, int64_t *entity_ptr, int8_t update_flags, uint64_t update_priority, int8_t entity_mode, char force_update);

/**
 * 引擎资源清理函数
 * 
 * 执行全面的引擎资源清理，包括：
 * - 释放图形资源
 * - 清理音频系统
 * - 重置物理世界
 * - 清理内存池
 * - 销毁线程同步对象
 * 
 * @param engine_context 引擎上下文指针
 */
void cleanup_engine_resources(uint64_t *engine_context)
{
    uint64_t *resource_manager;
    int64_t resource_handle;
    
    // 初始化引擎上下文
    *engine_context = GLOBAL_ENGINE_VTABLE_1;
    FUN_1801a2ea0();  // 初始化资源管理器
    
    // 清理资源管理器
    resource_manager = (uint64_t *)engine_context[0x66c];
    if (resource_manager != (uint64_t *)0x0) {
        resource_handle = __RTCastToVoid(resource_manager);
        // 调用资源管理器的清理方法
        (**(code **)*resource_manager)(resource_manager, 0);
        if (resource_handle != 0) {
            CoreEngineMemoryPoolCleaner(resource_handle);  // 释放资源句柄
        }
    }
    
    engine_context[0x66c] = 0;
    FUN_180057830();  // 清理内存池
    _Mtx_destroy_in_situ();  // 销毁互斥体
    
    // 清理纹理缓存
    FUN_1801b9920(engine_context + 0xc190);
    
    // 清理着色器系统
    if ((int64_t *)engine_context[0xc18f] != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)engine_context[0xc18f] + 0x38))();
    }
    if ((int64_t *)engine_context[0xc18e] != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)engine_context[0xc18e] + 0x38))();
    }
    
    FUN_180319840(engine_context + 0xc182);  // 清理着色器系统
    
    // 清理图形设备
    if ((int64_t *)engine_context[0xc181] != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)engine_context[0xc181] + 0x38))();
    }
    
    FUN_1801ba4d0();  // 释放渲染缓冲区
    FUN_1801ba4d0();  // 再次释放以确保完全清理
    FUN_18004b730();  // 清理图形设备
    
    // 设置渲染目标为默认状态
    engine_context[0xc169] = &system_data_buffer_ptr;
    if (engine_context[0xc16a] != 0) {
        CoreEngineMemoryPoolCleaner();  // 触发错误处理
    }
    engine_context[0xc16a] = 0;
    *(int32_t *)(engine_context + 0xc16c) = 0;
    engine_context[0xc169] = &system_state_ptr;
    
    // 清理渲染管线
    FUN_180196de0(engine_context + 0xc11e);
    if ((code *)engine_context[0xc11c] != (code *)0x0) {
        (*(code *)engine_context[0xc11c])(engine_context + 0xc11a, 0, 0);
    }
    
    // 清理顶点和索引缓冲区
    FUN_180397ce0(engine_context + 0xc0fc);
    FUN_180196d20(engine_context + 0xc0e7);
    
    // 清理输入系统
    FUN_18005d580();
    SystemDataValidator(engine_context + 0xc061, 0x20, 0x20, FUN_18004a130);
    
    // 清理音频系统
    FUN_180196c40(engine_context + 0x1045);
    if ((int64_t *)engine_context[0x1043] != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)engine_context[0x1043] + 0x38))();
    }
    if ((int64_t *)engine_context[0x1042] != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)engine_context[0x1042] + 0x38))();
    }
    if ((int64_t *)engine_context[0x1041] != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)engine_context[0x1041] + 0x38))();
    }
    if ((int64_t *)engine_context[0x1040] != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)engine_context[0x1040] + 0x38))();
    }
    if ((int64_t *)engine_context[0x103f] != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)engine_context[0x103f] + 0x38))();
    }
    
    // 重置音频缓冲区
    engine_context[0x103a] = &system_data_buffer_ptr;
    if (engine_context[0x103b] != 0) {
        CoreEngineMemoryPoolCleaner();  // 触发错误处理
    }
    engine_context[0x103b] = 0;
    *(int32_t *)(engine_context + 0x103d) = 0;
    engine_context[0x103a] = &system_state_ptr;
    
    // 多次清理内存池
    FUN_180057830();
    FUN_18005d580();
    FUN_180057830();
    FUN_180057830();
    
    if (engine_context[0x1023] != 0) {
        CoreEngineMemoryPoolCleaner();  // 触发错误处理
    }
    
    // 清理网络系统
    _Mtx_destroy_in_situ();
    SystemDataValidator(engine_context + 0xb97, 0x2408, 1, FUN_1801b99e0);
    if (engine_context[0xb93] != 0) {
        CoreEngineMemoryPoolCleaner();  // 触发错误处理
    }
    
    _Mtx_destroy_in_situ();
    if (engine_context[0xb7f] != 0) {
        CoreEngineMemoryPoolCleaner();  // 触发错误处理
    }
    if (engine_context[0xb75] != 0) {
        CoreEngineMemoryPoolCleaner();  // 触发错误处理
    }
    
    _Mtx_destroy_in_situ();
    if (engine_context[0xb65] != 0) {
        CoreEngineMemoryPoolCleaner();  // 触发错误处理
    }
    
    // 清理物理世界
    FUN_1800e7c40(engine_context + 0xb5b);
    FUN_1800e7d00(engine_context + 0xa3a);
    SystemDataValidator(engine_context + 0x7f7, 0x908, 2, FUN_1800e7d00);
    FUN_1800e7c40(engine_context + 0x7ed);
    
    // 重置物理世界状态
    engine_context[0x7da] = &system_data_buffer_ptr;
    if (engine_context[0x7db] != 0) {
        CoreEngineMemoryPoolCleaner();  // 触发错误处理
    }
    engine_context[0x7db] = 0;
    *(int32_t *)(engine_context + 0x7dd) = 0;
    engine_context[0x7da] = &system_state_ptr;
    
    if (engine_context[0x7ce] != 0) {
        CoreEngineMemoryPoolCleaner();  // 触发错误处理
    }
    
    // 清理动画系统
    FUN_180397770(engine_context + 0x6d6);
    FUN_1801431d0(engine_context + 0x66d);
    FUN_1801431d0(engine_context + 0x603);
    FUN_18038bfe0(engine_context + 0x54d);
    
    _Mtx_destroy_in_situ();
    if (engine_context[0x53e] != 0) {
        CoreEngineMemoryPoolCleaner();  // 触发错误处理
    }
    if (engine_context[0x53a] != 0) {
        CoreEngineMemoryPoolCleaner();  // 触发错误处理
    }
    if (engine_context[0x536] != 0) {
        CoreEngineMemoryPoolCleaner();  // 触发错误处理
    }
    
    // 清理材质和纹理系统
    FUN_180389750(engine_context + 0x534);
    FUN_180389000(engine_context + 0x52e);
    
    // 清理着色器程序
    if (*(char *)((int64_t)engine_context + 0x2901) != '\0') {
        *(int8_t *)((int64_t)engine_context + 0x2901) = 0;
        FUN_1801c0df0(engine_context + 0x519);
    }
    FUN_1801c0df0(engine_context + 0x519);
    
    // 重置着色器程序状态
    engine_context[0x512] = &system_data_buffer_ptr;
    if (engine_context[0x513] != 0) {
        CoreEngineMemoryPoolCleaner();  // 触发错误处理
    }
    engine_context[0x513] = 0;
    *(int32_t *)(engine_context + 0x515) = 0;
    engine_context[0x512] = &system_state_ptr;
    
    if (engine_context[0x50e] != 0) {
        CoreEngineMemoryPoolCleaner();  // 触发错误处理
    }
    
    // 清理事件系统
    if ((*(int *)((int64_t)engine_context + 0x286c) != 0) && (GLOBAL_EVENT_MANAGER != 0)) {
        (**(code **)(GLOBAL_EVENT_MANAGER + 0x18))();
    }
    
    if ((code *)engine_context[0x50a] != (code *)0x0) {
        (*(code *)engine_context[0x50a])(engine_context + 0x508, 0, 0);
    }
    
    if (engine_context[0x502] != 0) {
        CoreEngineMemoryPoolCleaner();  // 触发错误处理
    }
    if (engine_context[0x4fe] != 0) {
        CoreEngineMemoryPoolCleaner();  // 触发错误处理
    }
    
    if ((int64_t *)engine_context[0x4fd] != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)engine_context[0x4fd] + 0x38))();
    }
    
    // 重置脚本引擎状态
    engine_context[0x4f9] = &system_data_buffer_ptr;
    if (engine_context[0x4fa] != 0) {
        CoreEngineMemoryPoolCleaner();  // 触发错误处理
    }
    engine_context[0x4fa] = 0;
    *(int32_t *)(engine_context + 0x4fc) = 0;
    engine_context[0x4f9] = &system_state_ptr;
    
    // 清理线程同步对象
    _Mtx_destroy_in_situ();
    _Cnd_destroy_in_situ(engine_context + 0x4e3);
    _Mtx_destroy_in_situ();
    _Cnd_destroy_in_situ(engine_context + 0x4cf);
    
    if ((int64_t *)engine_context[0x4ce] != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)engine_context[0x4ce] + 0x38))();
    }
    
    // 清理UI系统
    FUN_18024f2c0(engine_context + 0xae);
    if (engine_context[0xa8] != 0) {
        CoreEngineMemoryPoolCleaner();  // 触发错误处理
    }
    
    // 重置UI渲染器状态
    engine_context[0xa4] = &system_data_buffer_ptr;
    if (engine_context[0xa5] != 0) {
        CoreEngineMemoryPoolCleaner();  // 触发错误处理
    }
    engine_context[0xa5] = 0;
    *(int32_t *)(engine_context + 0xa7) = 0;
    engine_context[0xa4] = &system_state_ptr;
    
    // 重置字体系统状态
    engine_context[0xa0] = &system_data_buffer_ptr;
    if (engine_context[0xa1] != 0) {
        CoreEngineMemoryPoolCleaner();  // 触发错误处理
    }
    engine_context[0xa1] = 0;
    *(int32_t *)(engine_context + 0xa3) = 0;
    engine_context[0xa0] = &system_state_ptr;
    
    // 重置文本渲染器状态
    engine_context[0x9b] = &system_data_buffer_ptr;
    if (engine_context[0x9c] != 0) {
        CoreEngineMemoryPoolCleaner();  // 触发错误处理
    }
    engine_context[0x9c] = 0;
    *(int32_t *)(engine_context + 0xa7) = 0;
    engine_context[0x9b] = &system_state_ptr;
    
    // 重置窗口系统状态
    engine_context[0x91] = &system_data_buffer_ptr;
    if (engine_context[0x92] != 0) {
        CoreEngineMemoryPoolCleaner();  // 触发错误处理
    }
    engine_context[0x92] = 0;
    *(int32_t *)(engine_context + 0x94) = 0;
    engine_context[0x91] = &system_state_ptr;
    
    // 清理其他系统组件
    if ((int64_t *)engine_context[0x77] != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)engine_context[0x77] + 0x38))();
    }
    if ((int64_t *)engine_context[0x74] != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)engine_context[0x74] + 0x38))();
    }
    if ((int64_t *)engine_context[0x73] != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)engine_context[0x73] + 0x38))();
    }
    if ((int64_t *)engine_context[0x72] != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)engine_context[0x72] + 0x38))();
    }
    if ((int64_t *)engine_context[0x71] != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)engine_context[0x71] + 0x38))();
    }
    
    FUN_180057830();  // 再次清理内存池
    
    if ((int64_t *)engine_context[100] != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)engine_context[100] + 0x38))();
    }
    
    // 初始化文件系统
    SystemDataValidator(engine_context + 0x5e, 8, 4, DataCacheManager);
    if (engine_context[0x5a] != 0) {
        CoreEngineMemoryPoolCleaner();  // 触发错误处理
    }
    
    // 清理调试和分析系统
    FUN_180195450(engine_context + 0x4d);
    FUN_180383570(engine_context + 0x24);
    
    if ((code *)engine_context[0x22] != (code *)0x0) {
        (*(code *)engine_context[0x22])(engine_context + 0x20, 0, 0);
    }
    
    if (engine_context[0x1c] != 0) {
        CoreEngineMemoryPoolCleaner();  // 触发错误处理
    }
    
    // 清理线程系统
    FUN_1801ba340();
    
    if ((int64_t *)engine_context[0x12] != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)engine_context[0x12] + 0x38))();
    }
    
    if (engine_context[0xe] != 0) {
        CoreEngineMemoryPoolCleaner();  // 触发错误处理
    }
    if (engine_context[0xb] != 0) {
        CoreEngineMemoryPoolCleaner();  // 触发错误处理
    }
    
    engine_context[0xb] = 0;
    
    if ((int64_t *)engine_context[8] != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)engine_context[8] + 0x38))();
    }
    
    // 最终设置引擎状态
    *engine_context = GLOBAL_ENGINE_VTABLE_2;
    *engine_context = GLOBAL_ENGINE_VTABLE_3;
    
    return;
}

/**
 * 注册游戏事件处理器
 * 
 * 根据事件数据的类型，执行不同的事件注册逻辑：
 * - 如果事件名称为空，添加到事件列表
 * - 如果事件名称不为空，调用事件管理器
 * 
 * @param event_system 事件系统指针
 * @param event_data 事件数据指针
 */
void register_game_event_handler(int64_t event_system, int64_t event_data)
{
    int64_t event_manager;
    int64_t *event_list;
    int event_index;
    uint64_t event_count;
    int64_t event_parameter;
    
    event_manager = GLOBAL_EVENT_SYSTEM_HANDLE;
    event_index = 0;
    
    // 检查事件名称是否为空
    if (**(char **)(event_data + 0x10) == '\0') {
        event_list = *(int64_t **)(event_system + 0x2870);
        event_count = *(int64_t *)(event_system + 0x2878) - (int64_t)event_list >> 3;
        
        if (event_count != 0) {
            // 查找是否已存在相同事件
            do {
                if (*event_list == event_data) {
                    if (event_index != -1) {
                        return;  // 事件已存在，直接返回
                    }
                    break;
                }
                event_index = event_index + 1;
                event_list = event_list + 1;
            } while ((uint64_t)(int64_t)event_index < event_count);
        }
        
        // 添加新事件到系统
        event_parameter = event_data;
        SystemInitializer(event_system + 0x2870, &event_parameter, event_index, event_count, 0, 0xfffffffffffffffe);
    }
    else {
        // 处理命名事件
        event_index = *(int *)(event_data + 0x50);
        event_parameter = CONCAT44(event_parameter._4_4_, event_index);
        
        if ((event_index != 0) && (GLOBAL_EVENT_MANAGER != 0)) {
            (**(code **)(GLOBAL_EVENT_MANAGER + 0x30))(event_index);
        }
        
        (**(code **)(event_manager + 0x110))(*(int32_t *)(event_system + 0x286c), event_index);
        
        if ((event_index != 0) && (GLOBAL_EVENT_MANAGER != 0)) {
            (**(code **)(GLOBAL_EVENT_MANAGER + 0x18))(event_index);
        }
    }
    
    return;
}

/**
 * 计算相机变换矩阵
 * 
 * 根据相机的位置和方向计算变换矩阵：
 * - 获取相机前向向量
 * - 计算向量的长度并归一化
 * - 确保前向向量Z分量不小于-0.1
 * - 计算相机的右向和上向向量
 * - 构建完整的变换矩阵
 * 
 * @param camera_context 相机上下文指针
 * @param transform_matrix 变换矩阵输出指针
 */
void calculate_camera_transform_matrix(int64_t camera_context, float *transform_matrix)
{
    float camera_distance;
    float normalized_distance;
    int8_t matrix_data[16];
    float forward_x;
    float forward_y;
    float forward_z;
    int32_t max_float_value;
    
    // 获取相机前向向量
    if (*(char *)(camera_context + 0x3e05) == '\0') {
        forward_x = 0.0;
        forward_y = 0.0;
        forward_z = -1.0;
        max_float_value = 0x7f7fffff;
    }
    else {
        forward_x = *(float *)(camera_context + 0x3e0c);
        forward_y = *(float *)(camera_context + 0x3e10);
        forward_z = *(float *)(camera_context + 0x3e14);
        max_float_value = *(int32_t *)(camera_context + 0x3e18);
    }
    
    // 计算向量长度并归一化
    camera_distance = forward_y * forward_y + forward_x * forward_x + forward_z * forward_z;
    matrix_data = rsqrtss(ZEXT416((uint)camera_distance), ZEXT416((uint)camera_distance));
    normalized_distance = matrix_data._0_4_;
    camera_distance = normalized_distance * 0.5 * (3.0 - camera_distance * normalized_distance * normalized_distance);
    
    // 应用归一化
    forward_z = forward_z * camera_distance;
    forward_x = forward_x * camera_distance;
    forward_y = forward_y * camera_distance;
    
    // 确保前向向量Z分量不小于-0.1
    if (-0.1 < forward_z) {
        forward_z = -0.1;
        func_0x0001801c2560(&forward_x);  // 归一化相机向量
    }
    
    forward_z = -forward_z;
    camera_distance = -forward_y;
    
    // 设置变换矩阵的第三行（上向向量）
    transform_matrix[4] = 0.0;
    transform_matrix[5] = 0.0;
    transform_matrix[6] = 1.0;
    transform_matrix[7] = 3.4028235e+38;
    
    // 设置变换矩阵的第二行（前向向量）
    transform_matrix[8] = -forward_x;
    transform_matrix[9] = -forward_y;
    transform_matrix[10] = forward_z;
    transform_matrix[0xb] = 3.4028235e+38;
    
    // 计算右向向量（前向向量 × 上向向量）
    forward_x = forward_z * 0.0 - camera_distance * 1.0;
    forward_y = transform_matrix[8] * 1.0 - transform_matrix[4] * forward_z;
    forward_z = transform_matrix[4] * camera_distance - transform_matrix[8] * 0.0;
    max_float_value = 0x7f7fffff;
    
    // 设置变换矩阵的第一行（右向向量）
    *transform_matrix = forward_x;
    transform_matrix[1] = forward_y;
    transform_matrix[2] = forward_z;
    transform_matrix[3] = 3.4028235e+38;
    
    // 验证变换矩阵
    FUN_1801c24a0(transform_matrix);
    
    // 重新计算变换矩阵的第二行以确保正交性
    transform_matrix[4] = transform_matrix[2] * transform_matrix[9] - transform_matrix[1] * transform_matrix[10];
    transform_matrix[5] = *transform_matrix * transform_matrix[10] - transform_matrix[2] * transform_matrix[8];
    transform_matrix[6] = transform_matrix[1] * transform_matrix[8] - *transform_matrix * transform_matrix[9];
    transform_matrix[7] = 3.4028235e+38;
    
    return;
}

/**
 * 线程安全的队列操作
 * 
 * 执行线程安全的队列操作，包括：
 * - 获取队列锁
 * - 检查队列空间
 * - 必要时扩展队列缓冲区
 * - 添加队列项
 * - 释放队列锁
 * 
 * @param queue_context 队列上下文指针
 * @param operation_id 操作ID
 * @param data_ptr 数据指针
 * @param priority 优先级
 * @param timeout 超时时间
 */
void thread_safe_queue_operation(int64_t queue_context, uint64_t operation_id, uint64_t data_ptr, uint64_t priority, uint64_t timeout)
{
    int lock_result;
    int32_t *queue_data;
    int32_t *queue_start;
    int64_t queue_size;
    int32_t *queue_buffer;
    int32_t queue_item_data;
    int32_t queue_priority_hi;
    int32_t queue_priority_lo;
    int32_t timeout_hi;
    int32_t timeout_lo;
    
    // 获取队列锁
    lock_result = _Mtx_lock(queue_context + 0x5b48, operation_id, data_ptr, priority, 0xfffffffffffffffe);
    if (lock_result != 0) {
        __Throw_C_error_std__YAXH_Z(lock_result);  // 抛出错误
    }
    
    // 获取队列数据指针
    queue_data = *(int32_t **)(queue_context + 0x5b30);
    queue_priority_hi = (int32_t)priority;
    queue_priority_lo = (int32_t)((uint64_t)priority >> 0x20);
    timeout_hi = (int32_t)timeout;
    timeout_lo = (int32_t)((uint64_t)timeout >> 0x20);
    
    // 检查队列是否有足够空间
    if (queue_data < *(int32_t **)(queue_context + 0x5b38)) {
        // 有足够空间，直接添加
        *(int32_t **)(queue_context + 0x5b30) = queue_data + 8;
        *queue_data = (int)data_ptr;
        queue_data[1] = queue_item_data;
        queue_data[2] = queue_priority_hi;
        queue_data[3] = queue_priority_lo;
        queue_data[4] = timeout_hi;
        queue_data[5] = timeout_lo;
        queue_data[6] = operation_id;
        queue_data[7] = timeout_lo;
        goto QUEUE_OPERATION_COMPLETE;
    }
    
    // 队列空间不足，需要扩展
    queue_start = *(int32_t **)(queue_context + 0x5b28);
    queue_size = (int64_t)queue_data - (int64_t)queue_start >> 5;
    
    if (queue_size == 0) {
        queue_size = 1;
    }
    
    // 扩展队列缓冲区
EXPAND_QUEUE_BUFFER:
    queue_buffer = (int32_t *)CoreEngineMemoryPoolAllocator(GLOBAL_MEMORY_ALLOCATOR, queue_size << 5, *(int8_t *)(queue_context + 0x5b40));
    queue_data = *(int32_t **)(queue_context + 0x5b30);
    queue_start = *(int32_t **)(queue_context + 0x5b28);
    
    if (queue_size != 0) {
        queue_size = queue_size * 2;
        if (queue_size != 0) goto EXPAND_QUEUE_BUFFER;
        queue_buffer = (int32_t *)0x0;
    }
    
    // 移动现有数据到新缓冲区
    if (queue_start != queue_data) {
        memmove(queue_buffer, queue_start, (int64_t)queue_data - (int64_t)queue_start);
    }
    
    // 添加新数据到队列
    *queue_buffer = (int)data_ptr;
    queue_buffer[1] = queue_item_data;
    queue_buffer[2] = queue_priority_hi;
    queue_buffer[3] = queue_priority_lo;
    queue_buffer[4] = timeout_hi;
    queue_buffer[5] = timeout_lo;
    queue_buffer[6] = operation_id;
    queue_buffer[7] = timeout_lo;
    
    // 释放旧缓冲区
    if (*(int64_t *)(queue_context + 0x5b28) != 0) {
        CoreEngineMemoryPoolCleaner();  // 释放内存块
    }
    
    // 更新队列指针
    *(int32_t **)(queue_context + 0x5b28) = queue_buffer;
    *(int32_t **)(queue_context + 0x5b30) = queue_buffer + 8;
    *(int32_t **)(queue_context + 0x5b38) = queue_buffer + queue_size * 8;
    
QUEUE_OPERATION_COMPLETE:
    // 释放队列锁
    lock_result = _Mtx_unlock(queue_context + 0x5b48);
    if (lock_result != 0) {
        __Throw_C_error_std__YAXH_Z(lock_result);  // 抛出错误
    }
    
    return;
}

/**
 * 初始化游戏场景
 * 
 * 执行游戏场景的初始化，包括：
 * - 初始化场景对象
 * - 更新场景光照
 * - 设置相机参数
 * - 计算相机变换矩阵
 * - 创建场景实体
 * 
 * @param scene_context 场景上下文指针
 * @param initialization_param 初始化参数
 */
void initialize_game_scene(int64_t scene_context, int64_t initialization_param)
{
    int scene_flags;
    uint64_t *scene_object;
    int32_t position_x;
    int32_t position_y;
    int32_t position_z;
    int32_t rotation_w;
    int32_t *scene_data;
    int64_t object_id;
    int64_t *entity_list;
    float camera_fov;
    float camera_aspect;
    float camera_near;
    uint64_t scene_parameters[2];
    
    // 如果有初始化参数，执行场景初始化
    if (initialization_param != 0) {
        scene_flags = *(int *)(scene_context + 0x3358);
        FUN_18018d8f0(scene_context + 0x3018);  // 初始化场景对象
        *(int *)(scene_context + 0x3358) = scene_flags + 1;
        FUN_1801b4720(scene_context, *(int32_t *)(scene_context + 0x3054));  // 更新场景光照
    }
    
    // 获取场景对象数据
    scene_data = (int32_t *)FUN_180145140(scene_context + 0x3018, scene_parameters, *(int32_t *)(scene_context + 0x3f50));
    position_x = *scene_data;
    position_y = scene_data[1];
    position_z = scene_data[2];
    rotation_w = scene_data[3];
    
    // 设置场景位置和旋转
    *(int8_t *)(scene_context + 0x3e05) = 1;
    *(int32_t *)(scene_context + 0x3e0c) = position_x;
    *(int32_t *)(scene_context + 0x3e10) = position_y;
    *(int32_t *)(scene_context + 0x3e14) = position_z;
    *(int32_t *)(scene_context + 0x3e18) = rotation_w;
    
    // 设置场景标志
    *(bool *)(scene_context + 0x3e04) = 0.0 < *(float *)(scene_context + 0x312c);
    
    // 检查相机参数有效性
    if ((*(uint *)(scene_context + 0x3050) & 0x10000000) == 0) {
        camera_near = *(float *)(scene_context + 0x30c8);
        camera_aspect = camera_near * *(float *)(scene_context + 0x30e0);
        camera_fov = camera_near * *(float *)(scene_context + 0x30dc);
        camera_near = camera_near * *(float *)(scene_context + 0x30e4);
        
        if (1e-08 <= camera_aspect * camera_aspect + camera_fov * camera_fov + camera_near * camera_near) {
            *(uint *)(scene_context + 0x3e08) = *(uint *)(scene_context + 0x3e08) & 0xfffffffd;
            goto SCENE_INITIALIZED;
        }
    }
    
    *(uint *)(scene_context + 0x3e08) = *(uint *)(scene_context + 0x3e08) | 2;
    
SCENE_INITIALIZED:
    // 计算相机变换矩阵
    calculate_camera_transform_matrix(scene_context, scene_context + 0x3830);
    
    // 重置场景参数
    *(int32_t *)(scene_context + 0x3860) = 0;
    *(int32_t *)(scene_context + 0x3864) = 0;
    *(int32_t *)(scene_context + 0x3868) = 0;
    *(int32_t *)(scene_context + 0x386c) = 0x7f7fffff;
    
    FUN_1801b32d0(scene_context);  // 初始化渲染管线
    
    // 再次计算相机变换矩阵
    calculate_camera_transform_matrix(scene_context, scene_context + 0x3830);
    
    // 更新场景计数器
    *(int *)(scene_context + 0x28b4) = *(int *)(scene_context + 0x28b4) + 1;
    
    // 重置场景参数
    *(int32_t *)(scene_context + 0x3860) = 0;
    *(int32_t *)(scene_context + 0x3864) = 0;
    *(int32_t *)(scene_context + 0x3868) = 0;
    *(int32_t *)(scene_context + 0x386c) = 0x7f7fffff;
    
    scene_parameters[0] = 0xfffffffffffffffe;
    
    // 清理现有场景对象
    if (*(int64_t **)(scene_context + 0x28c0) != (int64_t *)0x0) {
        (**(code **)(**(int64_t **)(scene_context + 0x28c0) + 0x10))();
        scene_object = *(uint64_t **)(scene_context + 0x28c0);
        
        if (scene_object != (uint64_t *)0x0) {
            object_id = __RTCastToVoid(scene_object);
            (**(code **)*scene_object)(scene_object, 0);
            
            if (object_id != 0) {
                CoreEngineMemoryPoolCleaner(object_id);  // 释放资源句柄
            }
        }
        
        *(uint64_t *)(scene_context + 0x28c0) = 0;
    }
    
    // 根据场景参数创建实体
    if (*(float *)(scene_context + 0x3140) <= 0.1) {
        // 创建简单实体
        entity_list = (int64_t *)CoreEngineMemoryPoolReallocator(GLOBAL_MEMORY_ALLOCATOR, 0x10, 8, 3);
        *entity_list = (int64_t)&unknown_var_6232_ptr;
        entity_list[1] = scene_context;
    }
    else if (*(int *)(scene_context + 0x3054) == 2) {
        // 创建中等复杂度实体
        entity_list = (int64_t *)CoreEngineMemoryPoolReallocator(GLOBAL_MEMORY_ALLOCATOR, 0x20, 8, 3);
        *entity_list = (int64_t)&unknown_var_6232_ptr;
        entity_list[1] = scene_context;
        *entity_list = (int64_t)&unknown_var_6136_ptr;
        entity_list[2] = 0;
        entity_list[3] = 0;
    }
    else {
        // 创建复杂实体
        entity_list = (int64_t *)CoreEngineMemoryPoolReallocator(GLOBAL_MEMORY_ALLOCATOR, 0x70, 8, 3);
        *entity_list = (int64_t)&unknown_var_6232_ptr;
        entity_list[1] = scene_context;
        *entity_list = (int64_t)&unknown_var_6184_ptr;
        entity_list[2] = 0;
        entity_list[3] = 0;
        entity_list[4] = 0;
        *(int32_t *)(entity_list + 5) = 0;
    }
    
    // 设置场景实体并初始化
    *(int64_t **)(scene_context + 0x28c0) = entity_list;
    (**(code **)(*entity_list + 8))();
    *(uint *)(scene_context + 0x3674) = *(uint *)(scene_context + 0x3674) | 0x10;
    
    return;
}

/**
 * 创建游戏实体
 * 
 * 创建游戏实体并初始化其组件：
 * - 分配实体内存
 * - 初始化实体组件
 * - 注册实体到世界
 * 
 * @param entity_type 实体类型
 * @param entity_output 实体输出指针
 * @param entity_flags 实体标志
 * @return 实体指针
 */
int64_t *create_game_entity(uint64_t entity_type, int64_t *entity_output, int8_t entity_flags)
{
    uint64_t entity_handle;
    int64_t *entity_instance;
    int64_t *entity_reference;
    
    // 分配实体内存
    entity_handle = CoreEngineMemoryPoolReallocator(GLOBAL_MEMORY_ALLOCATOR, 0x2f0, 0x10, 0xd);
    
    // 初始化实体组件
    entity_instance = (int64_t *)FUN_1802e6b00(entity_handle, entity_flags);
    *entity_output = (int64_t)entity_instance;
    
    // 调用实体初始化方法
    if (entity_instance != (int64_t *)0x0) {
        (**(code **)(*entity_instance + 0x28))(entity_instance);
    }
    
    // 检查实体创建是否成功
    if (*entity_output == 0) {
        FUN_180626ee0(&unknown_var_2272_ptr);  // 触发实体创建错误
    }
    
    // 获取实体引用并初始化
    entity_reference = (int64_t *)*entity_output;
    if (entity_reference != (int64_t *)0x0) {
        (**(code **)(*entity_reference + 0x28))();
    }
    
    // 注册实体到世界
    FUN_180198b90(entity_type, &entity_reference, 1, 1, 0, 1, 0);
    
    return entity_output;
}

/**
 * 销毁游戏实体
 * 
 * 销毁游戏实体并清理相关资源：
 * - 从世界中移除实体
 * - 清理实体组件
 * - 释放实体内存
 * 
 * @param entity_system 实体系统指针
 * @param entity_ptr 实体指针
 * @param destruction_flags 销毁标志
 * @param cleanup_mode 清理模式
 * @param entity_id 实体ID
 */
void destroy_game_entity(int64_t entity_system, int64_t *entity_ptr, uint64_t destruction_flags, uint64_t cleanup_mode, int32_t entity_id)
{
    int64_t entity_owner;
    int component_count;
    uint entity_index;
    int64_t *component_ptr;
    uint current_component;
    int64_t *temp_entity;
    int64_t *world_entity;
    uint entity_state;
    
    world_entity = entity_ptr;
    
    // 调用实体清理方法
    if (entity_ptr != (int64_t *)0x0) {
        (**(code **)(*entity_ptr + 0x28))(entity_ptr);
    }
    
    // 检查实体是否属于指定系统
    if (entity_ptr[4] == entity_system) {
        // 从世界中移除实体
        if (*(int64_t *)(entity_system + 600) != 0) {
            FUN_1803a00c0(*(int64_t *)(entity_system + 600), entity_ptr);
        }
        
        entity_owner = entity_ptr[0x2d];
        current_component = 0;
        
        if (entity_owner == 0) {
            // 清理场景中的实体
            FUN_180398550(entity_system + 0x607e0, entity_ptr);
            
            // 清理各种实体引用
            if (*(int64_t **)(entity_system + 0x81f8) == entity_ptr) {
                temp_entity = *(int64_t **)(entity_system + 0x81f8);
                *(uint64_t *)(entity_system + 0x81f8) = 0;
                if (temp_entity != (int64_t *)0x0) {
                    (**(code **)(*temp_entity + 0x38))();
                }
            }
            if (*(int64_t **)(entity_system + 0x8200) == entity_ptr) {
                temp_entity = *(int64_t **)(entity_system + 0x8200);
                *(uint64_t *)(entity_system + 0x8200) = 0;
                if (temp_entity != (int64_t *)0x0) {
                    (**(code **)(*temp_entity + 0x38))();
                }
            }
            if (*(int64_t **)(entity_system + 0x8208) == entity_ptr) {
                temp_entity = *(int64_t **)(entity_system + 0x8208);
                *(uint64_t *)(entity_system + 0x8208) = 0;
                if (temp_entity != (int64_t *)0x0) {
                    (**(code **)(*temp_entity + 0x38))();
                }
            }
            if (*(int64_t **)(entity_system + 0x8210) == entity_ptr) {
                temp_entity = *(int64_t **)(entity_system + 0x8210);
                *(uint64_t *)(entity_system + 0x8210) = 0;
                if (temp_entity != (int64_t *)0x0) {
                    (**(code **)(*temp_entity + 0x38))();
                }
            }
            
            // 清理实体组件
            component_ptr = *(int64_t **)(entity_system + 0x28c0);
            if (component_ptr != (int64_t *)0x0) {
                (**(code **)(*component_ptr + 0x20))(component_ptr, entity_ptr);
            }
            
            FUN_1802eaec0(entity_ptr, 0, 1, 1, 0, entity_state & 0xffffff00, 1, entity_id);
        }
        else {
            // 清理实体所有者资源
            FUN_1802ed990(entity_owner, 1);
            FUN_1802eb9a0(entity_owner, entity_ptr, 0, 0, 1, entity_id);
        }
        
        // 清理实体组件
        component_count = FUN_1802ed190(entity_ptr, 7);
        if (component_count != 0) {
            do {
                component_ptr = (int64_t *)FUN_1802ed2b0(entity_ptr, &temp_entity, 7, current_component);
                entity_owner = *component_ptr;
                if (temp_entity != (int64_t *)0x0) {
                    (**(code **)(*temp_entity + 0x38))();
                }
                *(int8_t *)(entity_owner + 0x39) = 1;
                current_component = current_component + 1;
                entity_index = FUN_1802ed190(entity_ptr, 7);
            } while (current_component < entity_index);
        }
    }
    else {
        SystemDataInitializer(&system_param2_ptr);  // 触发实体销毁错误
    }
    
    // 调用实体销毁方法
    (**(code **)(*entity_ptr + 0x38))(entity_ptr);
    
    return;
}

/**
 * 更新实体状态
 * 
 * 更新游戏实体的状态，包括：
 * - 检查实体属性
 * - 更新实体组件
 * - 将实体附加到世界
 * 
 * @param world_context 世界上下文指针
 * @param entity_ptr 实体指针
 * @param update_flags 更新标志
 * @param update_priority 更新优先级
 * @param entity_mode 实体模式
 * @param force_update 是否强制更新
 * @return 更新结果
 */
uint64_t update_entity_status(int64_t world_context, int64_t *entity_ptr, int8_t update_flags, uint64_t update_priority, int8_t entity_mode, char force_update)
{
    uint64_t *entity_manager;
    int64_t entity_id;
    int64_t *entity_list;
    char entity_property;
    int property_check;
    int64_t world_entity;
    int64_t *property_list;
    void *property_vtable;
    uint64_t *entity_data;
    bool needs_update;
    uint entity_state;
    uint64_t update_result;
    
    update_result = 0xfffffffffffffffe;
    
    // 检查实体属性
    entity_property = FUN_1802eee20(*entity_ptr, &unknown_var_6976_ptr);
    if (entity_property != '\0') {
        *(int16_t *)(world_context + 0x5c40) = 0x101;
    }
    
    entity_property = FUN_1802eee20(*entity_ptr, &unknown_var_7008_ptr);
    if (entity_property != '\0') {
        *(int8_t *)(world_context + 0x5bf0) = 1;
        *(int8_t *)(world_context + 0x5c42) = 1;
    }
    
    world_entity = *entity_ptr;
    entity_id = *(int64_t *)(world_entity + 0x168);
    
    if (entity_id == 0) {
        // 处理未分配ID的实体
        entity_list = *(int64_t **)(world_context + 0x60860);
        property_list = *(int64_t **)(world_context + 0x60858);
        
        if (property_list != entity_list) {
            // 查找实体是否已存在
            do {
                if (*property_list == world_entity) break;
                property_list = property_list + 1;
            } while (property_list != entity_list);
            
            if (property_list != entity_list) {
                if (force_update != '\0') {
                    property_vtable = &system_buffer_ptr;
                    if (*(void **)(world_entity + 0x290) != (void *)0x0) {
                        property_vtable = *(void **)(world_entity + 0x290);
                    }
                    property_list = (int64_t *)SystemDataInitializer(&unknown_var_2304_ptr, property_vtable);
                }
                
                if ((int64_t *)*entity_ptr != (int64_t *)0x0) {
                    property_list = (int64_t *)(**(code **)(*(int64_t *)*entity_ptr + 0x38))();
                }
                
                return (uint64_t)property_list & 0xffffffffffffff00;
            }
        }
    }
    else {
        // 更新世界中的实体
        entity_state = 0;
        FUN_1802eb9a0(entity_id, world_entity, 0, *(int64_t *)(entity_id + 0x20) == world_context, entity_mode, 0x16);
    }
    
    // 更新实体组件
    FUN_1802eaec0(*entity_ptr, world_context, update_flags, entity_mode, update_priority, entity_state & 0xffffff00, entity_mode, 0xffffffff, update_result);
    
    // 将实体附加到世界
    FUN_1802f2240(*entity_ptr, *(uint64_t *)(world_context + 600));
    entity_ptr = (int64_t *)*entity_ptr;
    
    // 获取世界锁
    property_check = _Mtx_lock(world_context + 0x607e0);
    if (property_check != 0) {
        __Throw_C_error_std__YAXH_Z(property_check);  // 抛出错误
    }
    
    // 分配实体管理器内存
    entity_manager = (uint64_t *)(world_context + 0x60878);
    entity_id = CoreEngineMemoryPoolAllocator(GLOBAL_MEMORY_ALLOCATOR, 0x28, *(int8_t *)(world_context + 0x608a0));
    *(int64_t **)(entity_id + 0x20) = entity_ptr;
    
    // 调用实体初始化方法
    if (entity_ptr != (int64_t *)0x0) {
        (**(code **)(*entity_ptr + 0x28))(entity_ptr);
    }
    
    // 确定实体是否需要更新
    needs_update = true;
    entity_data = entity_manager;
    
    if (*(uint64_t **)(world_context + 0x60888) != (uint64_t *)0x0) {
        entity_manager = *(uint64_t **)(world_context + 0x60888);
        do {
            entity_data = entity_manager;
            needs_update = *(uint64_t *)(entity_id + 0x20) < (uint64_t)entity_data[4];
            if (needs_update) {
                entity_manager = (uint64_t *)entity_data[1];
            }
            else {
                entity_manager = (uint64_t *)*entity_data;
            }
        } while (entity_manager != (uint64_t *)0x0);
    }
    
    entity_manager = entity_data;
    
    if (needs_update) {
        if (entity_data == *(uint64_t **)(world_context + 0x60880)) goto ENTITY_UPDATE_COMPLETE;
        entity_manager = (uint64_t *)func_0x00018066b9a0(entity_data);
    }
    
    // 检查是否需要释放实体
    if (*(uint64_t *)(entity_id + 0x20) <= (uint64_t)entity_manager[4]) {
        if (*(int64_t **)(entity_id + 0x20) != (int64_t *)0x0) {
            (**(code **)(**(int64_t **)(entity_id + 0x20) + 0x38))();
        }
        CoreEngineMemoryPoolCleaner(entity_id);  // 释放资源句柄
    }
    
ENTITY_UPDATE_COMPLETE:
    // 确定更新结果
    if ((entity_data == entity_manager) || (*(uint64_t *)(entity_id + 0x20) < (uint64_t)entity_manager[4])) {
        update_result = 0;
    }
    else {
        update_result = 1;
    }
    
    // 将实体插入世界
    FUN_18066bdc0(entity_id, entity_data, entity_manager, update_result);
    
    return update_result;
}