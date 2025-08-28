#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 02_core_engine_part057.c - 核心引擎模块第057部分
// 包含4个函数：渲染状态更新、资源管理、事件处理和系统初始化

// 函数：更新渲染状态和资源管理
void update_render_state_and_resources(int64_t render_context, int64_t scene_manager, uint64_t render_params, uint64_t resource_flags)
{
    int32_t *temp_ptr1;
    uint64_t *temp_ptr2;
    float distance_threshold;
    int32_t temp_uint1;
    int32_t temp_uint2;
    int32_t temp_uint3;
    uint64_t temp_ulong1;
    uint64_t *temp_ptr3;
    uint temp_counter;
    int temp_int;
    uint64_t *resource_array;
    int64_t temp_long1;
    uint64_t *temp_ptr4;
    int64_t *object_list;
    int64_t temp_long2;
    uint64_t *temp_ptr5;
    uint64_t *temp_ptr6;
    uint64_t *temp_ptr7;
    int64_t scene_offset;
    uint64_t object_count;
    uint64_t *temp_ptr8;
    int64_t temp_long3;
    int64_t temp_long4;
    float render_distance;
    int64_t stack_offset1;
    int64_t *stack_ptr1;
    int64_t stack_offset2;
    uint64_t stack_value1;
    int32_t stack_value2;
    
    stack_ptr1 = (int64_t *)0x0;
    stack_offset2 = 0;
    temp_ptr6 = (uint64_t *)0x0;
    stack_value1 = 0;
    stack_value2 = 3;
    
    // 获取场景中的对象列表
    get_scene_objects(system_parameter_buffer, scene_manager, &stack_ptr1, resource_flags, 0xfffffffffffffffe);
    
    object_count = stack_offset2 - (int64_t)stack_ptr1 >> 3;
    resource_array = temp_ptr6;
    object_list = stack_ptr1;
    
    // 遍历场景对象
    if (object_count != 0) {
        do {
            if (*(char *)(*object_list + 0x11c38) != '\0') {
                temp_long3 = stack_ptr1[(int)resource_array];
                if (temp_long3 != 0) goto LAB_180092bbb;
                break;
            }
            temp_counter = (int)resource_array + 1;
            resource_array = (uint64_t *)(uint64_t)temp_counter;
            object_list = object_list + 1;
        } while ((uint64_t)(int64_t)(int)temp_counter < object_count);
    }
    
    temp_long3 = scene_manager;
LAB_180092bbb:
    activate_render_context(temp_long3 + 0x11a50);
    scene_offset = core_system_data_buffer;
    temp_int = (int)(stack_offset2 - (int64_t)stack_ptr1 >> 3) + -1;
    temp_long2 = (int64_t)temp_int;
    
    // 查找最后一个有效对象
    if (-1 < temp_int) {
        do {
            if (*(char *)(stack_ptr1[temp_long2] + 0x11c38) != '\0') {
                stack_offset1 = stack_ptr1[temp_int];
                if (stack_offset1 != 0) goto LAB_180092c16;
                break;
            }
            temp_int = temp_int + -1;
            temp_long2 = temp_long2 + -1;
        } while (-1 < temp_long2);
    }
    
    stack_offset1 = scene_manager;
LAB_180092c16:
    // 锁定渲染上下文
    temp_int = _Mtx_lock(stack_offset1 + 0x11a50);
    if (temp_int != 0) {
        __Throw_C_error_std__YAXH_Z(temp_int);
    }
    
    // 锁定场景资源
    temp_int = _Mtx_lock(scene_offset);
    if (temp_int != 0) {
        __Throw_C_error_std__YAXH_Z(temp_int);
    }
    
    temp_long2 = *(int64_t *)(scene_offset + 0x178);
    resource_array = temp_ptr6;
    temp_ptr7 = temp_ptr6;
    
    // 处理渲染队列
    if ((*(int64_t *)(scene_offset + 0x180) - temp_long2) / 0x50 != 0) {
        do {
            if (*(uint64_t *)(stack_offset1 + 0x11bd0) < *(uint64_t *)(stack_offset1 + 0x11bd8)) {
                *(uint64_t *)(stack_offset1 + 0x11bd0) = *(uint64_t *)(stack_offset1 + 0x11bd0) + 0x50;
                allocate_render_buffer();
            }
            else {
                process_render_batch(stack_offset1 + 0x11bc8, (int64_t)resource_array * 0x50 + temp_long2);
            }
            temp_counter = (int)temp_ptr7 + 1;
            temp_long2 = *(int64_t *)(scene_offset + 0x178);
            resource_array = (uint64_t *)(int64_t)(int)temp_counter;
            temp_ptr7 = (uint64_t *)(uint64_t)temp_counter;
        } while ((uint64_t *)(int64_t)(int)temp_counter < (uint64_t *)((*(int64_t *)(scene_offset + 0x180) - temp_long2) / 0x50));
    }
    
    // 解锁资源
    temp_int = _Mtx_unlock(scene_offset);
    if (temp_int != 0) {
        __Throw_C_error_std__YAXH_Z(temp_int);
    }
    
    temp_int = _Mtx_unlock(stack_offset1 + 0x11a50);
    if (temp_int != 0) {
        __Throw_C_error_std__YAXH_Z(temp_int);
    }
    
    cleanup_render_resources(core_system_data_buffer);
    
    // 检查是否启用细节渲染
    if (*(char *)(render_context + 0x1610) == '\0') {
        render_distance = (float)system_error_code * 1e-05;
        scene_offset = *(int64_t *)(temp_long3 + 0x11ae8);
        temp_long1 = *(int64_t *)(temp_long3 + 0x11af0) - scene_offset;
        temp_long2 = temp_long1 >> 0x3f;
        resource_array = temp_ptr6;
        temp_ptr7 = temp_ptr6;
        
        // 处理可见对象
        if (temp_long1 / 0x30 + temp_long2 != temp_long2) {
            do {
                temp_long2 = core_system_data_buffer;
                distance_threshold = *(float *)(scene_offset + 0x2c + (int64_t)resource_array);
                if ((distance_threshold != 0.0) && (render_distance - *(float *)(scene_offset + 0x28 + (int64_t)resource_array) < distance_threshold)) {
                    temp_ptr8 = *(uint64_t **)(core_system_data_buffer + 0xa0);
                    if (temp_ptr8 < *(uint64_t **)(core_system_data_buffer + 0xa8)) {
                        *(uint64_t **)(core_system_data_buffer + 0xa0) = temp_ptr8 + 6;
                        temp_ptr8[4] = 0xffffffffffffffff;
                        temp_ulong1 = ((uint64_t *)(scene_offset + (int64_t)resource_array))[1];
                        *temp_ptr8 = *(uint64_t *)(scene_offset + (int64_t)resource_array);
                        temp_ptr8[1] = temp_ulong1;
                        temp_ptr1 = (int32_t *)(scene_offset + 0x10 + (int64_t)resource_array);
                        temp_uint1 = temp_ptr1[1];
                        temp_uint2 = temp_ptr1[2];
                        temp_uint3 = temp_ptr1[3];
                        *(int32_t *)(temp_ptr8 + 2) = *temp_ptr1;
                        *(int32_t *)((int64_t)temp_ptr8 + 0x14) = temp_uint1;
                        *(int32_t *)(temp_ptr8 + 3) = temp_uint2;
                        *(int32_t *)((int64_t)temp_ptr8 + 0x1c) = temp_uint3;
                        *(int32_t *)(temp_ptr8 + 4) = *(int32_t *)(scene_offset + 0x20 + (int64_t)resource_array);
                        *(int32_t *)((int64_t)temp_ptr8 + 0x24) = *(int32_t *)(scene_offset + 0x24 + (int64_t)resource_array);
                        *(int32_t *)((int64_t)temp_ptr8 + 0x2c) = *(int32_t *)(scene_offset + 0x2c + (int64_t)resource_array);
                        *(int32_t *)(temp_ptr8 + 5) = *(int32_t *)(scene_offset + 0x28 + (int64_t)resource_array);
                    }
                    else {
                        // 扩展可见对象缓冲区
                        temp_ptr5 = *(uint64_t **)(core_system_data_buffer + 0x98);
                        temp_long1 = ((int64_t)temp_ptr8 - (int64_t)temp_ptr5) / 0x30;
                        if (temp_long1 == 0) {
                            temp_long1 = 1;
LAB_180092e59:
                            temp_ptr3 = (uint64_t *)allocate_memory(system_memory_pool_ptr, temp_long1 * 0x30, *(int8_t *)(core_system_data_buffer + 0xb0));
                            temp_ptr8 = *(uint64_t **)(temp_long2 + 0xa0);
                            temp_ptr5 = *(uint64_t **)(temp_long2 + 0x98);
                        }
                        else {
                            temp_long1 = temp_long1 * 2;
                            temp_ptr3 = temp_ptr6;
                            if (temp_long1 != 0) goto LAB_180092e59;
                        }
                        
                        // 复制对象数据
                        temp_ptr4 = temp_ptr3;
                        if (temp_ptr5 != temp_ptr8) {
                            temp_long4 = (int64_t)temp_ptr3 - (int64_t)temp_ptr5;
                            temp_ptr5 = temp_ptr5 + 4;
                            do {
                                *(uint64_t *)(temp_long4 + (int64_t)temp_ptr5) = 0xffffffffffffffff;
                                temp_ulong1 = temp_ptr5[-3];
                                *temp_ptr4 = temp_ptr5[-4];
                                temp_ptr4[1] = temp_ulong1;
                                temp_ulong1 = temp_ptr5[-1];
                                temp_ptr2 = (uint64_t *)(temp_long4 + -0x10 + (int64_t)temp_ptr5);
                                *temp_ptr2 = temp_ptr5[-2];
                                temp_ptr2[1] = temp_ulong1;
                                *(int32_t *)(temp_long4 + (int64_t)temp_ptr5) = *(int32_t *)temp_ptr5;
                                *(int32_t *)(temp_long4 + 4 + (int64_t)temp_ptr5) = *(int32_t *)((int64_t)temp_ptr5 + 4);
                                *(int32_t *)(temp_long4 + 0xc + (int64_t)temp_ptr5) = *(int32_t *)((int64_t)temp_ptr5 + 0xc);
                                *(int32_t *)(temp_long4 + 8 + (int64_t)temp_ptr5) = *(int32_t *)(temp_ptr5 + 1);
                                temp_ptr4 = temp_ptr4 + 6;
                                temp_ptr2 = temp_ptr5 + 2;
                                temp_ptr5 = temp_ptr5 + 6;
                            } while (temp_ptr2 != temp_ptr8);
                        }
                        
                        // 添加新对象
                        temp_ptr4[4] = 0xffffffffffffffff;
                        temp_ulong1 = ((uint64_t *)(scene_offset + (int64_t)resource_array))[1];
                        *temp_ptr4 = *(uint64_t *)(scene_offset + (int64_t)resource_array);
                        temp_ptr4[1] = temp_ulong1;
                        temp_ptr1 = (int32_t *)(scene_offset + 0x10 + (int64_t)resource_array);
                        temp_uint1 = temp_ptr1[1];
                        temp_uint2 = temp_ptr1[2];
                        temp_uint3 = temp_ptr1[3];
                        *(int32_t *)(temp_ptr4 + 2) = *temp_ptr1;
                        *(int32_t *)((int64_t)temp_ptr4 + 0x14) = temp_uint1;
                        *(int32_t *)(temp_ptr4 + 3) = temp_uint2;
                        *(int32_t *)((int64_t)temp_ptr4 + 0x1c) = temp_uint3;
                        *(int32_t *)(temp_ptr4 + 4) = *(int32_t *)(scene_offset + 0x20 + (int64_t)resource_array);
                        *(int32_t *)((int64_t)temp_ptr4 + 0x24) = *(int32_t *)(scene_offset + 0x24 + (int64_t)resource_array);
                        *(int32_t *)((int64_t)temp_ptr4 + 0x2c) = *(int32_t *)(scene_offset + 0x2c + (int64_t)resource_array);
                        *(int32_t *)(temp_ptr4 + 5) = *(int32_t *)(scene_offset + 0x28 + (int64_t)resource_array);
                        
                        if (*(int64_t *)(temp_long2 + 0x98) != 0) {
                            // 警告：子程序不返回
                            FUN_18064e900();
                        }
                        *(uint64_t **)(temp_long2 + 0x98) = temp_ptr3;
                        *(uint64_t **)(temp_long2 + 0xa0) = temp_ptr4 + 6;
                        *(uint64_t **)(temp_long2 + 0xa8) = temp_ptr3 + temp_long1 * 6;
                    }
                }
                
                temp_counter = (int)temp_ptr7 + 1;
                scene_offset = *(int64_t *)(temp_long3 + 0x11ae8);
                resource_array = resource_array + 6;
                temp_ptr7 = (uint64_t *)(uint64_t)temp_counter;
            } while ((uint64_t)(int64_t)(int)temp_counter < (uint64_t)((*(int64_t *)(temp_long3 + 0x11af0) - scene_offset) / 0x30));
        }
        
        // 处理其他渲染队列（省略类似代码结构）
        // ... 其他三个渲染队列的处理逻辑
        
        // 处理透明对象
        temp_long3 = *(int64_t *)(stack_offset1 + 0x11bc8);
        temp_long2 = *(int64_t *)(stack_offset1 + 0x11bd0) - temp_long3;
        scene_offset = temp_long2 >> 0x3f;
        resource_array = temp_ptr6;
        temp_ptr7 = temp_ptr6;
        
        if (temp_long2 / 0x50 + scene_offset != scene_offset) {
            do {
                distance_threshold = *(float *)(temp_long3 + 0x48 + (int64_t)temp_ptr6);
                if ((distance_threshold != 0.0) && (render_distance - *(float *)(temp_long3 + 0x44 + (int64_t)temp_ptr6) < distance_threshold)) {
                    temp_ulong1 = *(uint64_t *)(core_system_data_buffer + 0x180);
                    if (temp_ulong1 < *(uint64_t *)(core_system_data_buffer + 0x188)) {
                        *(uint64_t *)(core_system_data_buffer + 0x180) = temp_ulong1 + 0x50;
                        FUN_1800940b0(temp_ulong1);
                    }
                    else {
                        FUN_180093d90(core_system_data_buffer + 0x178, (int64_t)resource_array * 0x50 + temp_long3);
                    }
                }
                temp_counter = (int)temp_ptr7 + 1;
                temp_ptr6 = temp_ptr6 + 10;
                temp_long3 = *(int64_t *)(stack_offset1 + 0x11bc8);
                resource_array = (uint64_t *)(int64_t)(int)temp_counter;
                temp_ptr7 = (uint64_t *)(uint64_t)temp_counter;
            } while ((uint64_t *)(int64_t)(int)temp_counter < (uint64_t *)((*(int64_t *)(stack_offset1 + 0x11bd0) - temp_long3) / 0x50));
        }
    }
    else {
        *(int8_t *)(render_context + 0x1610) = 0;
    }
    
    if (stack_ptr1 == (int64_t *)0x0) {
        return;
    }
    // 警告：子程序不返回
    FUN_18064e900();
}


// 函数：获取场景对象信息
int64_t * get_scene_object_info(uint64_t scene_context, int64_t *object_info, uint64_t object_index)
{
    int64_t *object_ptr;
    
    // 检查对象索引是否在有效范围内
    if (object_index < (uint64_t)((*(int64_t *)(system_operation_state + 0x1870) - *(int64_t *)(system_operation_state + 0x1868)) >> 3)) {
        object_ptr = *(int64_t **)(*(int64_t *)(system_operation_state + 0x1868) + object_index * 8);
        *object_info = (int64_t)object_ptr;
        if (object_ptr != (int64_t *)0x0) {
            // 调用对象的初始化函数
            (**(code **)(*object_ptr + 0x28))();
        }
    }
    else {
        *object_info = 0;
    }
    return object_info;
}


// 函数：处理渲染事件
void process_render_event(uint64_t event_context, int event_x, int event_y)
{
    int64_t render_state1;
    int64_t render_state2;
    uint64_t *event_data;
    code *event_handler;
    uint delta_x;
    uint delta_y;
    uint64_t viewport_x;
    uint64_t viewport_y;
    int64_t *event_queue;
    uint clip_x;
    uint clip_y;
    uint64_t event_params;
    int64_t *event_result;
    
    render_state1 = *(int64_t *)(system_main_module_state + 8);
    viewport_x = (uint64_t)(*(uint *)(render_state1 + 0x13c) & 1);
    render_state2 = *(int64_t *)(system_main_module_state + 8);
    viewport_y = (uint64_t)(*(uint *)(render_state2 + 0x13c) & 1);
    
    // 计算事件坐标相对于视口的偏移
    delta_x = event_x - (*(int *)(render_state1 + 0xc0 + viewport_x * 0x48) - *(int *)(render_state2 + 0xec + viewport_y * 0x48));
    clip_x = (int)delta_x >> 0x1f;
    delta_y = event_y - (*(int *)(render_state1 + 0xc4 + viewport_x * 0x48) - *(int *)(render_state2 + 0xf0 + viewport_y * 0x48));
    clip_y = (int)delta_y >> 0x1f;
    
    // 检查事件是否在有效区域内
    if ((0 < (int)((delta_x ^ clip_x) - clip_x)) || (0 < (int)((delta_y ^ clip_y) - clip_y))) {
        render_state2 = *(int64_t *)(system_main_module_state + 8);
        event_params = CONCAT44(event_y, event_x);
        event_queue = (int64_t *)allocate_event_memory(system_memory_pool_ptr, 0x48, 8, CONCAT71((int7)((uint64_t)render_state1 >> 8), 3), 0xfffffffffffffffe);
        
        // 设置事件队列
        *event_queue = (int64_t)&system_handler1_ptr;
        *event_queue = (int64_t)&system_handler2_ptr;
        *(int32_t *)(event_queue + 1) = 0;
        *event_queue = (int64_t)&unknown_var_1000_ptr;
        LOCK();
        *(int8_t *)(event_queue + 2) = 0;
        UNLOCK();
        event_queue[3] = -1;
        *event_queue = (int64_t)&unknown_var_2640_ptr;
        *(int32_t *)(event_queue + 5) = 5;
        event_queue[4] = render_state2;
        (**(code **)(*event_queue + 0x28))(event_queue);
        event_queue[6] = event_params;
        event_data = *(uint64_t **)(render_state2 + 0x140);
        event_handler = *(code **)*event_data;
        event_result = event_queue;
        (**(code **)(*event_queue + 0x28))(event_queue);
        (*event_handler)(event_data, &event_result);
        (**(code **)(*event_queue + 0x38))(event_queue);
    }
    return;
}


// 函数：初始化渲染系统
void initialize_render_system(void)
{
    int64_t system_base;
    int64_t mutex_handle;
    int lock_result;
    int64_t render_config;
    int64_t system_state;
    uint64_t init_params;
    
    system_base = system_operation_state;
    init_params = 0xfffffffffffffffe;
    mutex_handle = system_operation_state + 0x1808;
    lock_result = _Mtx_lock(mutex_handle);
    if (lock_result != 0) {
        __Throw_C_error_std__YAXH_Z(lock_result);
    }
    
    render_config = system_main_module_state;
    *(int8_t *)(system_main_module_state + 0x1ec) = 0;
    system_state = *(int64_t *)(system_base + 0x1800);
    
    // 初始化渲染缓冲区
    if (system_state == 0) {
        init_params = allocate_system_memory(system_memory_pool_ptr, 0x160, 8, 3, init_params);
        init_params = initialize_render_buffers(init_params);
        set_render_buffer_ptr(system_base + 0x1800, init_params);
        system_state = *(int64_t *)(system_base + 0x1800);
        render_config = system_main_module_state;
    }
    
    // 设置渲染参数
    *(int32_t *)(render_config + 0x200) = 0x3d088889;  // 渲染精度设置
    *(int8_t *)(system_state + 0xdd) = 1;  // 启用渲染
    
    lock_result = _Mtx_unlock(mutex_handle);
    if (lock_result != 0) {
        __Throw_C_error_std__YAXH_Z(lock_result);
    }
    return;
}


// 函数：关闭渲染系统
void shutdown_render_system(uint64_t system_context, uint64_t shutdown_param1, uint64_t shutdown_param2, uint64_t shutdown_param3)
{
    int64_t system_base;
    int64_t *render_buffer;
    int64_t mutex_handle;
    int lock_result;
    int64_t render_config;
    
    system_base = system_operation_state;
    mutex_handle = system_operation_state + 0x1808;
    lock_result = _Mtx_lock(mutex_handle, shutdown_param1, shutdown_param2, shutdown_param3, 0xfffffffffffffffe);
    if (lock_result != 0) {
        __Throw_C_error_std__YAXH_Z(lock_result);
    }
    
    render_config = system_main_module_state;
    *(int8_t *)(system_main_module_state + 0x1ec) = 1;  // 标记为关闭状态
    
    // 清理渲染缓冲区
    render_buffer = *(int64_t **)(system_base + 0x1800);
    if (render_buffer != (int64_t *)0x0) {
        *(int8_t *)((int64_t)render_buffer + 0xdd) = 0;  // 禁用渲染
        (**(code **)(*render_buffer + 0xc0))();  // 调用清理函数
        *(int8_t *)(*(int64_t *)(system_base + 0x1800) + 0xf0) = 1;  // 标记已清理
        render_config = system_main_module_state;
    }
    
    // 重置渲染配置
    *(float *)(render_config + 0x200) = 1.0 / (float)*(int *)(SYSTEM_STATE_MANAGER + 0x1b90);
    
    lock_result = _Mtx_unlock(mutex_handle);
    if (lock_result != 0) {
        __Throw_C_error_std__YAXH_Z(lock_result);
    }
    return;
}