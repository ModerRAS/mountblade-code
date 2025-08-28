// 02_core_engine_part171.c - 核心引擎模块第171部分
// 本文件包含8个函数，主要涉及系统队列管理、资源初始化、内存分配和线程同步等功能

#include "TaleWorlds.Native.Split.h"

/**
 * 处理系统队列元素和资源管理
 * @param queue_manager 队列管理器指针
 * @param param2 参数2
 * @param param3 参数3
 * @param param4 参数4
 */
void process_system_queue_elements(longlong *queue_manager, uint64_t param2, uint64_t param3, uint64_t param4)
{
    char processing_result;
    int lock_result;
    int process_status;
    int32_t *active_elements;
    int32_t *filtered_elements;
    int32_t *pending_elements;
    longlong element_count;
    int32_t *temp_buffer;
    ulonglong total_elements;
    int32_t *current_element;
    int32_t **element_pointer;
    int32_t *buffer_start;
    longlong buffer_offset;
    int32_t *queue_stack_b0;
    int32_t *queue_stack_a8;
    int32_t *queue_stack_a0;
    int32_t queue_size_98;
    int32_t *queue_stack_90;
    int32_t *queue_stack_88;
    int32_t *queue_stack_80;
    int32_t queue_size_78;
    int32_t *queue_stack_70;
    int32_t *queue_stack_68;
    int32_t *queue_stack_60;
    int32_t queue_size_58;
    
    // 初始化处理标志和缓冲区
    uint64_t process_flag = 0xfffffffffffffffe;
    queue_stack_90 = (int32_t *)0x0;
    queue_stack_88 = (int32_t *)0x0;
    temp_buffer = (int32_t *)0x0;
    queue_stack_80 = (int32_t *)0x0;
    queue_size_78 = 3;
    queue_stack_b0 = (int32_t *)0x0;
    queue_stack_a8 = (int32_t *)0x0;
    queue_stack_a0 = (int32_t *)0x0;
    queue_size_98 = 3;
    queue_stack_70 = (int32_t *)0x0;
    queue_stack_68 = (int32_t *)0x0;
    queue_stack_60 = (int32_t *)0x0;
    queue_size_58 = 3;
    
    // 获取队列互斥锁
    lock_result = _Mtx_lock(queue_manager + 0xc);
    if (lock_result != 0) {
        __Throw_C_error_std__YAXH_Z(lock_result);
    }
    
    // 处理队列元素指针
    element_pointer = (int32_t **)(queue_manager + 0x16);
    active_elements = temp_buffer;
    current_element = temp_buffer;
    
    if (&queue_stack_70 != element_pointer) {
        buffer_start = (int32_t *)queue_manager[0x17];
        buffer_offset = *element_pointer;
        element_count = (longlong)buffer_start - (longlong)buffer_offset;
        longlong element_count_div = element_count >> 2;
        
        if (element_count_div == 0) {
            if (buffer_offset != buffer_start) {
                // 移动元素到新位置
                memmove(0, buffer_offset, element_count, param4, process_flag);
            }
            queue_stack_68 = (int32_t *)0x0;
        }
        else {
            // 分配新缓冲区并移动元素
            active_elements = (int32_t *)allocate_system_memory(system_memory_pool_ptr, element_count_div * 4, 3);
            if (buffer_offset != buffer_start) {
                // 移动元素到新缓冲区
                memmove(active_elements, buffer_offset, element_count, param4, process_flag);
            }
            queue_stack_68 = active_elements + element_count_div;
            current_element = queue_stack_68;
            queue_stack_70 = active_elements;
            queue_stack_60 = queue_stack_68;
        }
    }
    
    buffer_start = queue_stack_70;
    process_queue_elements(element_pointer, &queue_stack_b0);
    
    // 释放队列互斥锁
    lock_result = _Mtx_unlock(queue_manager + 0xc);
    if (lock_result != 0) {
        __Throw_C_error_std__YAXH_Z(lock_result);
    }
    
    // 处理队列元素
    process_status = 0;
    total_elements = (longlong)current_element - (longlong)buffer_start >> 2;
    current_element = queue_stack_88;
    buffer_start = queue_stack_a8;
    buffer_offset = queue_stack_90;
    
    if (total_elements != 0) {
        do {
            // 处理每个元素
            processing_result = (**(code **)(*queue_manager + 8))(queue_manager, *active_elements);
            if (processing_result == '\0') {
                // 元素处理成功
                if (buffer_start < queue_stack_a0) {
                    buffer_offset = buffer_start + 1;
                    *buffer_start = *active_elements;
                    queue_stack_a8 = buffer_offset;
                    goto continue_processing;
                }
                
                // 重新分配缓冲区
                element_count = (longlong)buffer_start - (longlong)queue_stack_b0;
                element_count_div = element_count >> 2;
                if (element_count_div == 0) {
                    element_count_div = 1;
                    reallocate_buffer:
                    pending_elements = (int32_t *)allocate_system_memory(system_memory_pool_ptr, element_count_div * 4, (int8_t)queue_size_98);
                }
                else {
                    element_count_div = element_count_div * 2;
                    if (element_count_div != 0) goto reallocate_buffer;
                    pending_elements = (int32_t *)0x0;
                }
                
                if (queue_stack_b0 != buffer_start) {
                    // 移动元素到新缓冲区
                    memmove(pending_elements, queue_stack_b0, element_count);
                }
                
                *pending_elements = *active_elements;
                buffer_offset = pending_elements + 1;
                if (queue_stack_b0 != (int32_t *)0x0) {
                    // 释放旧缓冲区
                    release_system_memory(queue_stack_b0);
                }
                queue_stack_a0 = pending_elements + element_count_div;
                temp_buffer = queue_stack_80;
                queue_stack_b0 = pending_elements;
                queue_stack_a8 = buffer_offset;
            }
            else {
                // 元素处理失败，放入失败队列
                buffer_offset = buffer_start;
                if (current_element < temp_buffer) {
                    queue_stack_88 = current_element + 1;
                    *current_element = *active_elements;
                    current_element = queue_stack_88;
                }
                else {
                    // 重新分配失败队列缓冲区
                    element_count_div = (longlong)current_element - (longlong)buffer_offset >> 2;
                    if (element_count_div == 0) {
                        element_count_div = 1;
                        reallocate_failure_buffer:
                        buffer_start = (int32_t *)allocate_system_memory(system_memory_pool_ptr, element_count_div * 4, 3);
                    }
                    else {
                        element_count_div = element_count_div * 2;
                        if (element_count_div != 0) goto reallocate_failure_buffer;
                        buffer_start = (int32_t *)0x0;
                    }
                    
                    if (buffer_offset != current_element) {
                        // 移动元素到新缓冲区
                        memmove(buffer_start, buffer_offset, (longlong)current_element - (longlong)buffer_offset);
                    }
                    
                    *buffer_start = *active_elements;
                    current_element = buffer_start + 1;
                    if (buffer_offset != (int32_t *)0x0) {
                        // 释放旧缓冲区
                        release_system_memory(buffer_offset);
                    }
                    queue_stack_80 = buffer_start + element_count_div;
                    temp_buffer = queue_stack_80;
                    buffer_offset = buffer_start;
                    queue_stack_90 = buffer_start;
                    queue_stack_88 = current_element;
                }
            }
            
        continue_processing:
            process_status = process_status + 1;
            active_elements = active_elements + 1;
            buffer_start = buffer_offset;
        } while ((ulonglong)(longlong)process_status < total_elements);
    }
    
    // 清理临时缓冲区
    process_status = 0;
    if (queue_stack_70 != (int32_t *)0x0) {
        release_system_memory();
    }
    
    // 处理失败队列元素
    int cleanup_result = _Mtx_lock(queue_manager + 0x1a);
    if (cleanup_result != 0) {
        __Throw_C_error_std__YAXH_Z(cleanup_result);
    }
    
    total_elements = (longlong)current_element - (longlong)buffer_offset >> 2;
    temp_buffer = buffer_offset;
    if (total_elements != 0) {
        do {
            (**(code **)(*queue_manager + 0x108))(queue_manager, *temp_buffer);
            process_status = process_status + 1;
            temp_buffer = temp_buffer + 1;
        } while ((ulonglong)(longlong)process_status < total_elements);
    }
    
    cleanup_result = _Mtx_unlock(queue_manager + 0x1a);
    if (cleanup_result != 0) {
        __Throw_C_error_std__YAXH_Z(cleanup_result);
    }
    
    // 最终清理
    if (queue_stack_b0 == (int32_t *)0x0) {
        if (buffer_offset == (int32_t *)0x0) {
            return;
        }
        release_system_memory(buffer_offset);
    }
    release_system_memory();
}

/**
 * 初始化系统资源和配置参数
 * @param resource_manager 资源管理器指针
 * @param param2 参数2
 * @param param3 参数3
 * @param param4 参数4
 * @return 初始化后的资源管理器指针
 */
uint64_t *initialize_system_resources(uint64_t *resource_manager, uint64_t param2, uint64_t param3, uint64_t param4)
{
    uint64_t init_result;
    longlong *config_pointer;
    uint64_t *stack_config_10;
    longlong *stack_config_18;
    longlong *stack_config_20;
    
    // 初始化基础配置
    *resource_manager = &system_config_base;
    resource_manager[3] = 0;
    resource_manager[4] = _guard_check_icall;
    *(int32_t *)(resource_manager + 10) = 0x3f800000;  // 1.0f
    *(uint64_t *)((longlong)resource_manager + 0x54) = 0x40000000;  // 2.0f
    *(int32_t *)((longlong)resource_manager + 0x5c) = 3;
    resource_manager[8] = 1;
    resource_manager[7] = &system_data_table;
    resource_manager[9] = 0;
    *(int32_t *)(resource_manager + 0xb) = 0;
    
    // 初始化互斥锁
    stack_config_10 = resource_manager + 0xc;
    _Mtx_init_in_situ(stack_config_10, 0x102, param3, param4, 0xfffffffffffffffe);
    
    // 初始化队列指针
    resource_manager[0x16] = 0;
    resource_manager[0x17] = 0;
    resource_manager[0x18] = 0;
    *(int32_t *)(resource_manager + 0x19) = 3;
    
    // 初始化处理队列
    stack_config_10 = resource_manager + 0x1a;
    _Mtx_init_in_situ(stack_config_10, 0x102);
    
    // 初始化失败队列
    resource_manager[0x24] = 0;
    resource_manager[0x25] = 0;
    resource_manager[0x26] = 0;
    *(int32_t *)(resource_manager + 0x27) = 3;
    
    // 初始化成功队列
    resource_manager[0x28] = 0;
    resource_manager[0x29] = 0;
    resource_manager[0x2a] = 0;
    *(int32_t *)(resource_manager + 0x2b) = 3;
    
    // 初始化缓冲区管理
    resource_manager[0x2d] = 0;
    resource_manager[0x2e] = 0;
    resource_manager[0x2f] = 0;
    *(int32_t *)(resource_manager + 0x30) = 3;
    resource_manager[0x3d] = 0;
    *(uint64_t *)((longlong)resource_manager + 0x214) = 0;
    *(int32_t *)((longlong)resource_manager + 0x21c) = 0;
    
    // 初始化渲染配置
    stack_config_10 = resource_manager + 0x44;
    *(int32_t *)(resource_manager + 0x48) = 0x3f800000;  // 1.0f
    *(uint64_t *)((longlong)resource_manager + 0x244) = 0x40000000;  // 2.0f
    *(int32_t *)((longlong)resource_manager + 0x24c) = 3;
    resource_manager[0x46] = 1;
    resource_manager[0x45] = &system_data_table;
    resource_manager[0x47] = 0;
    *(int32_t *)(resource_manager + 0x49) = 0;
    resource_manager[0x4a] = 0;
    *(int32_t *)(resource_manager + 0x4b) = 0;
    
    // 设置渲染参数
    *(uint64_t *)((longlong)resource_manager + 0x214) = 0x2ee00002ee00;
    *(int32_t *)((longlong)resource_manager + 0x21c) = 1;
    
    // 初始化渲染系统
    init_result = initialize_render_system(*(int32_t *)(resource_manager + 0x43), 
                                          *(int32_t *)((longlong)resource_manager + 0x21c),
                                          0x800, &stack_config_10);
    resource_manager[0x4a] = init_result;
    
    if ((int)stack_config_10 < 0) {
        log_system_error(&render_error_message);
        resource_manager[0x4a] = 0;
    }
    
    // 配置渲染参数
    configure_render_parameter(resource_manager[0x4a], 0xfa2, *(uint *)((longlong)resource_manager + 0x214) >> 2, &stack_config_10);
    configure_render_parameter(resource_manager[0x4a], 0xfa8, 0xfffffc18, &stack_config_10);
    configure_render_parameter(resource_manager[0x4a], 0xfa6, 1, &stack_config_10);
    configure_render_parameter(resource_manager[0x4a], 0xfb4, 0, &stack_config_10);
    configure_render_parameter(resource_manager[0x4a], 0xfaa, 10, &stack_config_10);
    configure_render_parameter(resource_manager[0x4a], 0xfac, 0, &stack_config_10);
    configure_render_parameter(resource_manager[0x4a], 0xfb6, 0xfffffc18, &stack_config_10);
    configure_render_parameter(resource_manager[0x4a], 0xfb0, 0, &stack_config_10);
    configure_render_parameter(resource_manager[0x4a], 0xfae, 0, &stack_config_10);
    
    *(int32_t *)(resource_manager + 0x4b) = 0;
    configure_render_parameter(resource_manager[0x4a], 0xfbb, resource_manager + 0x4b, &stack_config_10);
    configure_render_parameter(resource_manager[0x4a], 0xfc4, 0x10, &stack_config_10);
    configure_render_parameter(resource_manager[0x4a], 0xfc8, 5000, &stack_config_10);
    
    // 初始化状态标志
    *(int16_t *)((longlong)resource_manager + 0x161) = 0;
    *(int8_t *)(resource_manager + 0x2c) = 0;
    *(int8_t *)(resource_manager + 0x42) = 1;
    
    // 设置浮点参数
    resource_manager[0x31] = 0x3f800000;  // 1.0f
    resource_manager[0x32] = 0;
    resource_manager[0x33] = 0x3f80000000000000;  // 1.0
    resource_manager[0x34] = 0;
    *(int32_t *)(resource_manager + 0x35) = 0;
    *(int32_t *)((longlong)resource_manager + 0x1ac) = 0;
    *(int32_t *)(resource_manager + 0x36) = 0x3f800000;  // 1.0f
    *(int32_t *)((longlong)resource_manager + 0x1b4) = 0;
    *(int32_t *)(resource_manager + 0x37) = 0;
    *(int32_t *)((longlong)resource_manager + 0x1bc) = 0;
    *(int32_t *)(resource_manager + 0x38) = 0;
    *(int32_t *)((longlong)resource_manager + 0x1c4) = 0x3f800000;  // 1.0f
    *(int32_t *)(resource_manager + 0x39) = 0;
    *(int32_t *)((longlong)resource_manager + 0x1cc) = 0;
    *(int32_t *)(resource_manager + 0x3a) = 0;
    *(int32_t *)((longlong)resource_manager + 0x1d4) = 0x3f800000;  // 1.0f
    
    // 初始化资源管理器
    initialize_resource_manager(resource_manager);
    
    // 分配配置内存
    config_pointer = (longlong *)allocate_system_memory(system_memory_pool_ptr, 0x60, 8, 3);
    *config_pointer = (longlong)&system_config_table;
    *config_pointer = (longlong)&system_parameter_table;
    *(int32_t *)(config_pointer + 1) = 0;
    *config_pointer = (longlong)&system_function_table;
    stack_config_20 = config_pointer;
    initialize_system_table(config_pointer + 2);
    *config_pointer = (longlong)&system_callback_table;
    *(int32_t *)(config_pointer + 10) = 0xffffffff;
    config_pointer[0xb] = 0;
    stack_config_18 = config_pointer;
    (**(code **)(*config_pointer + 0x28))(config_pointer);
    
    // 更新配置链表
    stack_config_18 = (longlong *)resource_manager[0x3d];
    resource_manager[0x3d] = config_pointer;
    if (stack_config_18 != (longlong *)0x0) {
        (**(code **)(*stack_config_18 + 0x38))();
    }
    
    // 最终初始化
    resource_manager[0x3b] = 0;
    resource_manager[0x3c] = 0;
    if ((code *)resource_manager[3] != (code *)0x0) {
        (*(code *)resource_manager[3])(resource_manager + 1, 0, 0);
    }
    resource_manager[3] = 0;
    resource_manager[4] = _guard_check_icall;
    *(int32_t *)(resource_manager + 0x40) = 0xbf800000;  // -1.0f
    *(int32_t *)((longlong)resource_manager + 0x204) = 0xbf800000;  // -1.0f
    *(int32_t *)(resource_manager + 0x41) = 0xbf800000;  // -1.0f
    *(int32_t *)((longlong)resource_manager + 0x20c) = 0xbf800000;  // -1.0f
    *(int32_t *)(resource_manager + 5) = 0;
    resource_manager[0x3f] = 0;
    
    return resource_manager;
}

/**
 * 释放系统资源
 * @param resource_ptr 资源指针
 * @param flags 释放标志
 * @return 释放后的资源指针
 */
uint64_t release_system_resources(uint64_t resource_ptr, ulonglong flags)
{
    cleanup_system_resources();
    if ((flags & 1) != 0) {
        free(resource_ptr, 0x260);
    }
    return resource_ptr;
}

/**
 * 清理系统队列和资源
 * @param queue_context 队列上下文指针
 */
void cleanup_system_queue(longlong queue_context)
{
    int *reference_count;
    uint64_t *queue_ptr;
    longlong cleanup_offset;
    ulonglong memory_mask;
    
    perform_system_cleanup();
    if ((1 < *(ulonglong *)(queue_context + 0x10)) &&
        (queue_ptr = *(uint64_t **)(queue_context + 8), queue_ptr != (uint64_t *)0x0)) {
        
        memory_mask = (ulonglong)queue_ptr & 0xffffffffffc00000;
        if (memory_mask != 0) {
            cleanup_offset = memory_mask + 0x80 + ((longlong)queue_ptr - memory_mask >> 0x10) * 0x50;
            cleanup_offset = cleanup_offset - (ulonglong)*(uint *)(cleanup_offset + 4);
            
            if ((*(void ***)(memory_mask + 0x70) == &ExceptionList) && (*(char *)(cleanup_offset + 0xe) == '\0')) {
                *queue_ptr = *(uint64_t *)(cleanup_offset + 0x20);
                *(uint64_t **)(cleanup_offset + 0x20) = queue_ptr;
                reference_count = (int *)(cleanup_offset + 0x18);
                *reference_count = *reference_count - 1;
                if (*reference_count == 0) {
                    perform_final_cleanup();
                    return;
                }
            }
            else {
                handle_memory_cleanup(memory_mask, CONCAT71(0xff000000, *(void ***)(memory_mask + 0x70) == &ExceptionList),
                                   queue_ptr, memory_mask, 0xfffffffffffffffe);
            }
        }
        return;
    }
    return;
}

/**
 * 清理失败队列资源
 * @param failure_queue 失败队列指针
 */
void cleanup_failure_queue(longlong failure_queue)
{
    int *reference_count;
    longlong element_ptr;
    uint64_t *queue_ptr;
    longlong cleanup_offset;
    ulonglong queue_size;
    ulonglong memory_mask;
    ulonglong element_index;
    
    queue_size = *(ulonglong *)(failure_queue + 0x10);
    element_ptr = *(longlong *)(failure_queue + 8);
    element_index = 0;
    
    if (queue_size != 0) {
        do {
            element_ptr = *(longlong *)(element_ptr + element_index * 8);
            if (element_ptr != 0) {
                release_system_memory(element_ptr);
            }
            *(uint64_t *)(element_ptr + element_index * 8) = 0;
            element_index = element_index + 1;
        } while (element_index < queue_size);
        queue_size = *(ulonglong *)(failure_queue + 0x10);
    }
    
    *(uint64_t *)(failure_queue + 0x18) = 0;
    if ((1 < queue_size) && (queue_ptr = *(uint64_t **)(failure_queue + 8), queue_ptr != (uint64_t *)0x0)) {
        memory_mask = (ulonglong)queue_ptr & 0xffffffffffc00000;
        if (memory_mask != 0) {
            cleanup_offset = memory_mask + 0x80 + ((longlong)queue_ptr - memory_mask >> 0x10) * 0x50;
            cleanup_offset = cleanup_offset - (ulonglong)*(uint *)(cleanup_offset + 4);
            
            if ((*(void ***)(memory_mask + 0x70) == &ExceptionList) && (*(char *)(cleanup_offset + 0xe) == '\0')) {
                *queue_ptr = *(uint64_t *)(cleanup_offset + 0x20);
                *(uint64_t **)(cleanup_offset + 0x20) = queue_ptr;
                reference_count = (int *)(cleanup_offset + 0x18);
                *reference_count = *reference_count - 1;
                if (*reference_count == 0) {
                    perform_final_cleanup();
                    return;
                }
            }
            else {
                handle_memory_cleanup(memory_mask, CONCAT71(0xff000000, *(void ***)(memory_mask + 0x70) == &ExceptionList),
                                   queue_ptr, memory_mask, 0xfffffffffffffffe);
            }
        }
        return;
    }
    return;
}

/**
 * 清理成功队列资源
 * @param success_queue 成功队列指针
 */
void cleanup_success_queue(longlong success_queue)
{
    int *reference_count;
    uint64_t *queue_ptr;
    longlong cleanup_offset;
    ulonglong memory_mask;
    
    perform_system_cleanup();
    if ((1 < *(ulonglong *)(success_queue + 0x10)) &&
        (queue_ptr = *(uint64_t **)(success_queue + 8), queue_ptr != (uint64_t *)0x0)) {
        
        memory_mask = (ulonglong)queue_ptr & 0xffffffffffc00000;
        if (memory_mask != 0) {
            cleanup_offset = memory_mask + 0x80 + ((longlong)queue_ptr - memory_mask >> 0x10) * 0x50;
            cleanup_offset = cleanup_offset - (ulonglong)*(uint *)(cleanup_offset + 4);
            
            if ((*(void ***)(memory_mask + 0x70) == &ExceptionList) && (*(char *)(cleanup_offset + 0xe) == '\0')) {
                *queue_ptr = *(uint64_t *)(cleanup_offset + 0x20);
                *(uint64_t **)(cleanup_offset + 0x20) = queue_ptr;
                reference_count = (int *)(cleanup_offset + 0x18);
                *reference_count = *reference_count - 1;
                if (*reference_count == 0) {
                    perform_final_cleanup();
                    return;
                }
            }
            else {
                handle_memory_cleanup(memory_mask, CONCAT71(0xff000000, *(void ***)(memory_mask + 0x70) == &ExceptionList),
                                   queue_ptr, memory_mask, 0xfffffffffffffffe);
            }
        }
        return;
    }
    return;
}

/**
 * 清理缓冲区资源
 * @param buffer_queue 缓冲区队列指针
 */
void cleanup_buffer_queue(longlong buffer_queue)
{
    int *reference_count;
    longlong element_ptr;
    uint64_t *queue_ptr;
    longlong cleanup_offset;
    ulonglong queue_size;
    ulonglong memory_mask;
    ulonglong element_index;
    
    queue_size = *(ulonglong *)(buffer_queue + 0x10);
    element_ptr = *(longlong *)(buffer_queue + 8);
    element_index = 0;
    
    if (queue_size != 0) {
        do {
            element_ptr = *(longlong *)(element_ptr + element_index * 8);
            if (element_ptr != 0) {
                release_system_memory(element_ptr);
            }
            *(uint64_t *)(element_ptr + element_index * 8) = 0;
            element_index = element_index + 1;
        } while (element_index < queue_size);
        queue_size = *(ulonglong *)(buffer_queue + 0x10);
    }
    
    *(uint64_t *)(buffer_queue + 0x18) = 0;
    if ((1 < queue_size) && (queue_ptr = *(uint64_t **)(buffer_queue + 8), queue_ptr != (uint64_t *)0x0)) {
        memory_mask = (ulonglong)queue_ptr & 0xffffffffffc00000;
        if (memory_mask != 0) {
            cleanup_offset = memory_mask + 0x80 + ((longlong)queue_ptr - memory_mask >> 0x10) * 0x50;
            cleanup_offset = cleanup_offset - (ulonglong)*(uint *)(cleanup_offset + 4);
            
            if ((*(void ***)(memory_mask + 0x70) == &ExceptionList) && (*(char *)(cleanup_offset + 0xe) == '\0')) {
                *queue_ptr = *(uint64_t *)(cleanup_offset + 0x20);
                *(uint64_t **)(cleanup_offset + 0x20) = queue_ptr;
                reference_count = (int *)(cleanup_offset + 0x18);
                *reference_count = *reference_count - 1;
                if (*reference_count == 0) {
                    perform_final_cleanup();
                    return;
                }
            }
            else {
                handle_memory_cleanup(memory_mask, CONCAT71(0xff000000, *(void ***)(memory_mask + 0x70) == &ExceptionList),
                                   queue_ptr, memory_mask, 0xfffffffffffffffe);
            }
        }
        return;
    }
    return;
}

/**
 * 处理系统消息和事件
 * @param system_handle 系统句柄
 * @param message_data 消息数据指针
 * @param event_flag 事件标志
 */
void process_system_message(uint64_t system_handle, longlong message_data, int8_t event_flag)
{
    byte *message_ptr;
    uint message_size;
    int compare_result;
    int string_compare;
    bool message_found;
    longlong *system_table;
    byte *string_ptr;
    int string_length;
    ulonglong table_index;
    longlong message_offset;
    ulonglong table_end;
    void *log_prefix;
    longlong log_buffer;
    uint log_size;
    int32_t log_code;
    void *log_message;
    longlong message_buffer;
    uint buffer_size;
    uint64_t message_flags;
    int8_t message_type;
    
    system_table = core_system_data_buffer;
    log_message = &system_log_prefix;
    message_flags = 0;
    message_buffer = 0;
    buffer_size = 0;
    message_size = *(uint *)(message_data + 0x10);
    table_index = (ulonglong)message_size;
    
    if (*(longlong *)(message_data + 8) != 0) {
        allocate_log_buffer(&log_message, table_index);
    }
    
    if (message_size != 0) {
        memcpy(message_buffer, *(uint64_t *)(message_data + 8), table_index);
    }
    
    if (message_buffer != 0) {
        *(int8_t *)(table_index + message_buffer) = 0;
    }
    
    message_flags = CONCAT44(*(int32_t *)(message_data + 0x1c), (int32_t)message_flags);
    message_found = false;
    table_index = system_table[0x25];
    table_end = system_table[0x24];
    buffer_size = message_size;
    message_type = event_flag;
    
    if (table_end != table_index) {
        compare_result = *(int *)(message_data + 0x10);
        do {
            string_compare = *(int *)(table_end + 0x10);
            string_length = compare_result;
            if (string_compare == compare_result) {
                if (string_compare != 0) {
                    string_ptr = *(byte **)(table_end + 8);
                    message_offset = *(longlong *)(message_data + 8) - (longlong)string_ptr;
                    do {
                        message_ptr = string_ptr + message_offset;
                        string_length = (uint)*string_ptr - (uint)*message_ptr;
                        if (string_length != 0) break;
                        string_ptr = string_ptr + 1;
                    } while (*message_ptr != 0);
                }
                
                if (string_length == 0) {
                    message_found = true;
                }
            }
            else if (string_compare == 0) {
                if (string_length == 0) {
                    message_found = true;
                }
            }
            table_end = table_end + 0x28;
        } while (table_end != table_index);
        
        if (message_found) {
            goto message_processed;
        }
    }
    
    if (table_index < (ulonglong)system_table[0x26]) {
        system_table[0x25] = table_index + 0x28;
        free_message_buffer(table_index);
        *(int8_t *)(table_index + 0x20) = message_type;
    }
    else {
        process_message_queue(system_table + 0x24, &log_message);
    }
    
message_processed:
    finalize_message_processing();
    if (0 < *(int *)(message_data + 0x10)) {
        allocate_log_buffer(&log_prefix, log_size + *(int *)(message_data + 0x10));
        memcpy((ulonglong)log_size + log_buffer, *(uint64_t *)(message_data + 8),
               (longlong)(*(int *)(message_data + 0x10) + 1));
    }
    
    (**(code **)(*system_table + 0x40))(system_table, &log_prefix, event_flag);
    log_prefix = &system_log_prefix;
    
    if (log_buffer == 0) {
        log_buffer = 0;
        log_code = 0;
        log_prefix = &system_cleanup_log;
        log_message = &system_log_prefix;
        if (message_buffer == 0) {
            return;
        }
        release_system_memory();
    }
    release_system_memory();
}

/**
 * 处理系统事件和通知
 * @param system_handle 系统句柄
 * @param event_data 事件数据指针
 * @param notification_type 通知类型
 */
void process_system_event(uint64_t system_handle, longlong event_data, int8_t notification_type)
{
    byte *event_ptr;
    uint event_size;
    int compare_result;
    int string_compare;
    ulonglong table_index;
    longlong *system_table;
    byte *string_ptr;
    int string_length;
    longlong event_offset;
    ulonglong table_end;
    void *log_prefix;
    longlong log_buffer;
    uint log_size;
    int32_t log_code;
    void *log_message;
    longlong event_buffer;
    uint buffer_size;
    uint64_t event_flags;
    int8_t event_type;
    
    system_table = core_system_data_buffer;
    log_message = &system_log_prefix;
    event_flags = 0;
    event_buffer = 0;
    buffer_size = 0;
    event_size = *(uint *)(event_data + 0x10);
    table_index = (ulonglong)event_size;
    
    if (*(longlong *)(event_data + 8) != 0) {
        allocate_log_buffer(&log_message, table_index);
    }
    
    if (event_size != 0) {
        memcpy(event_buffer, *(uint64_t *)(event_data + 8), table_index);
    }
    
    if (event_buffer != 0) {
        *(int8_t *)(table_index + event_buffer) = 0;
    }
    
    event_flags = CONCAT44(*(int32_t *)(event_data + 0x1c), (int32_t)event_flags);
    table_index = system_table[0x28];
    table_end = system_table[0x29];
    buffer_size = event_size;
    event_type = notification_type;
    
    if (table_index != table_end) {
        compare_result = *(int *)(event_data + 0x10);
        do {
            string_compare = *(int *)(table_index + 0x10);
            string_length = compare_result;
            if (string_compare == compare_result) {
                if (string_compare != 0) {
                    string_ptr = *(byte **)(table_index + 8);
                    event_offset = *(longlong *)(event_data + 8) - (longlong)string_ptr;
                    do {
                        event_ptr = string_ptr + event_offset;
                        string_length = (uint)*string_ptr - (uint)*event_ptr;
                        if (string_length != 0) break;
                        string_ptr = string_ptr + 1;
                    } while (*event_ptr != 0);
                }
                
                if (string_length == 0) {
                    goto event_processed;
                }
            }
            else if (string_compare == 0) {
                if (string_length == 0) {
                    goto event_processed;
                }
            }
            table_index = table_index + 0x28;
        } while (table_index != table_end);
    }
    
    if (table_end < (ulonglong)system_table[0x2a]) {
        system_table[0x29] = table_end + 0x28;
        free_message_buffer(table_end);
        *(int8_t *)(table_end + 0x20) = event_type;
    }
    else {
        process_message_queue(system_table + 0x28, &log_message);
    }
    
event_processed:
    finalize_event_processing();
    if (0 < *(int *)(event_data + 0x10)) {
        allocate_log_buffer(&log_prefix, log_size + *(int *)(event_data + 0x10));
        memcpy((ulonglong)log_size + log_buffer, *(uint64_t *)(event_data + 8),
               (longlong)(*(int *)(event_data + 0x10) + 1));
    }
    
    (**(code **)(*system_table + 0x40))(system_table, &log_prefix, notification_type);
    log_prefix = &system_log_prefix;
    
    if (log_buffer == 0) {
        log_buffer = 0;
        log_code = 0;
        log_prefix = &system_cleanup_log;
        log_message = &system_log_prefix;
        if (event_buffer == 0) {
            return;
        }
        release_system_memory();
    }
    release_system_memory();
}

/**
 * 执行资源管理器清理
 * @param resource_manager 资源管理器指针
 */
void cleanup_resource_manager(longlong resource_manager)
{
    int lock_result;
    
    lock_result = _Mtx_lock(resource_manager + 0xd0);
    if (lock_result != 0) {
        __Throw_C_error_std__YAXH_Z(lock_result);
    }
    
    perform_system_cleanup(resource_manager + 0x30);
    
    lock_result = _Mtx_unlock(resource_manager + 0xd0);
    if (lock_result != 0) {
        __Throw_C_error_std__YAXH_Z(lock_result);
    }
    
    return;
}