#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 02_core_engine_part244.c - 核心引擎模块第244部分
// 包含10个函数，主要负责资源管理、数据结构操作和字符串处理

// 函数：清理资源管理器中的资源项
// 原始实现：void FUN_18020cae0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void cleanup_resource_manager_entries(int64_t resource_manager, uint64_t param_2, uint64_t param_3, uint64_t param_4)
{
    int64_t *entry_ptr;
    uint64_t *resource_ptr;
    int item_count;
    int64_t current_entry;
    int64_t entry_data;
    uint64_t resource_index;
    uint item_index;
    uint64_t loop_counter;
    uint64_t entry_offset;
    uint64_t cleanup_flag;
    
    cleanup_flag = 0xfffffffffffffffe;
    resource_index = 0;
    
    // 遍历资源管理器中的所有条目
    for (current_entry = *(int64_t *)(resource_manager + 8); current_entry != resource_manager; 
         current_entry = func_0x00018066bd70(current_entry)) {
        entry_data = *(int64_t *)(current_entry + 0x28);
        loop_counter = resource_index;
        entry_offset = resource_index;
        
        // 处理条目中的资源数组
        if (*(int64_t *)(current_entry + 0x30) - entry_data >> 3 != 0) {
            do {
                resource_ptr = *(uint64_t **)(entry_offset + entry_data);
                if (resource_ptr != (uint64_t *)0x0) {
                    entry_ptr = resource_ptr + 5;
                    item_count = (int)(resource_ptr[6] - *entry_ptr >> 3);
                    
                    // 清理每个资源项
                    if (0 < item_count) {
                        do {
                            cleanup_resource_item(*(uint64_t *)(*entry_ptr + resource_index * 8));
                            resource_index = resource_index + 1;
                        } while ((int64_t)resource_index < (int64_t)item_count);
                    }
                    
                    // 释放资源内存
                    deallocate_resource_memory(entry_ptr);
                    free_resource_structure(entry_ptr);
                    *resource_ptr = &EMPTY_RESOURCE_POOL;
                    
                    if (resource_ptr[1] != 0) {
                        // 警告：子程序不返回
                        trigger_resource_cleanup_error();
                    }
                    
                    resource_ptr[1] = 0;
                    *(int32_t *)(resource_ptr + 3) = 0;
                    *resource_ptr = &RESOURCE_CLEANUP_POOL;
                    // 警告：子程序不返回
                    perform_resource_cleanup(resource_ptr);
                }
                
                *(uint64_t *)(entry_offset + *(int64_t *)(current_entry + 0x28)) = 0;
                item_index = (int)loop_counter + 1;
                entry_data = *(int64_t *)(current_entry + 0x28);
                loop_counter = (uint64_t)item_index;
                entry_offset = entry_offset + 8;
            } while ((uint64_t)(int64_t)(int)item_index <
                     (uint64_t)(*(int64_t *)(current_entry + 0x30) - entry_data >> 3));
        }
        
        *(int64_t *)(current_entry + 0x30) = entry_data;
    }
    
    // 重置资源管理器状态
    resource_ptr = *(uint64_t **)(resource_manager + 0x10);
    if (resource_ptr == (uint64_t *)0x0) {
        *(int64_t *)resource_manager = resource_manager;
        *(int64_t *)(resource_manager + 8) = resource_manager;
        *(uint64_t *)(resource_manager + 0x10) = 0;
        *(int8_t *)(resource_manager + 0x18) = 0;
        *(uint64_t *)(resource_manager + 0x20) = 0;
        return;
    }
    
    process_resource_cleanup(resource_manager, *resource_ptr, param_3, param_4, cleanup_flag);
    
    if (resource_ptr[5] != 0) {
        // 警告：子程序不返回
        trigger_resource_cleanup_error();
    }
    // 警告：子程序不返回
    perform_resource_cleanup(resource_ptr);
}

// 函数：处理资源查找和匹配
// 原始实现：void FUN_18020ccb0(uint64_t param_1,uint64_t param_2,int64_t param_3,int64_t *param_4)
void process_resource_lookup(uint64_t param_1, uint64_t param_2, int64_t search_pattern, int64_t *result_buffer)
{
    byte comparison_result;
    void *temp_ptr;
    uint64_t *resource_table;
    int match_count;
    uint search_index;
    uint64_t *current_resource;
    uint64_t *best_match;
    int64_t resource_offset;
    int64_t *resource_entry;
    int64_t entry_start;
    void *pattern_ptr;
    byte *string_ptr;
    void *resource_name;
    uint64_t *temp_resource;
    int64_t *resource_data;
    int64_t string_length;
    int64_t compare_length;
    uint64_t search_flag;
    int64_t *matched_entry;
    int iteration_count;
    uint64_t stack_temp;
    int64_t *temp_stack_ptr;
    int64_t *stack_ptr_b0;
    int64_t *stack_ptr_a8;
    int32_t temp_flag;
    int stack_var_98;
    int stack_var_94;
    int stack_var_90;
    int stack_var_8c;
    int64_t stack_var_88;
    int64_t stack_var_80;
    int64_t *stack_ptr_78;
    int64_t *stack_ptr_70;
    uint64_t *stack_ptr_68;
    uint64_t *stack_ptr_60;
    uint64_t stack_var_58;
    int64_t *stack_ptr_50;
    uint64_t *stack_ptr_48;
    
    resource_table = core_system_data_resource;
    stack_var_58 = 0xfffffffffffffffe;
    stack_ptr_68 = core_system_data_resource;
    search_flag = *system_main_module_state;
    stack_temp = param_1;
    initialize_search_context(&stack_ptr_b8);
    stack_var_8c = calculate_search_hash(search_flag, &stack_ptr_b8);
    stack_ptr_b8 = (int64_t *)&EMPTY_RESOURCE_POOL;
    
    if (stack_ptr_b0 != (int64_t *)0x0) {
        // 警告：子程序不返回
        trigger_resource_cleanup_error();
    }
    
    stack_ptr_b0 = (int64_t *)0x0;
    temp_flag = 0;
    stack_ptr_b8 = (int64_t *)&RESOURCE_CLEANUP_POOL;
    current_resource = (uint64_t *)resource_table[2];
    best_match = resource_table;
    
    // 在资源表中查找最佳匹配
    if ((uint64_t *)resource_table[2] != (uint64_t *)0x0) {
        do {
            if (*(int *)(current_resource + 4) < stack_var_8c) {
                temp_resource = (uint64_t *)*current_resource;
            }
            else {
                temp_resource = (uint64_t *)current_resource[1];
                best_match = current_resource;
            }
            current_resource = temp_resource;
        } while (temp_resource != (uint64_t *)0x0);
        
        if ((best_match != resource_table) && (*(int *)(best_match + 4) <= stack_var_8c)) {
            goto LAB_18020cd75;
        }
    }
    
    best_match = resource_table;
LAB_18020cd75:
    stack_var_90 = 0;
    match_count = (int)((int64_t)(best_match[6] - best_match[5]) >> 3);
    
    // 检查每个资源项是否匹配搜索模式
    if (0 < match_count) {
        string_length = 0;
        do {
            iteration_count = stack_var_90;
            pattern_ptr = &system_buffer_ptr;
            if (*(void **)(search_pattern + 8) != (void *)0x0) {
                pattern_ptr = *(void **)(search_pattern + 8);
            }
            
            temp_ptr = *(void **)(*(int64_t *)(best_match[5] + string_length * 8) + 8);
            resource_name = &system_buffer_ptr;
            if (temp_ptr != (void *)0x0) {
                resource_name = temp_ptr;
            }
            
            resource_offset = strstr(resource_name, pattern_ptr);
            if (resource_offset != 0) {
                string_length = *(int64_t *)(best_match[5] + (int64_t)iteration_count * 8);
                matched_entry = (int64_t *)(string_length + 0x28);
                stack_var_94 = 0;
                resource_offset = *matched_entry;
                stack_ptr_70 = matched_entry;
                
                if (*(int64_t *)(string_length + 0x30) - resource_offset >> 3 == 0) {
                    goto LAB_18020d12d;
                }
                
                stack_var_80 = 0;
                goto LAB_18020ce30;
            }
            
            stack_var_90 = iteration_count + 1;
            string_length = string_length + 1;
        } while (string_length < match_count);
    }
    
    return;
    
LAB_18020ce30:
    string_length = stack_var_80;
    resource_data = *(int64_t **)(stack_var_80 + resource_offset);
    stack_ptr_78 = resource_data;
    stack_ptr_50 = resource_data;
    
    if (resource_data != (int64_t *)0x0) {
        (**(code **)(*resource_data + 0x28))(resource_data);
    }
    
    stack_ptr_b8 = (int64_t *)0x0;
    stack_ptr_b0 = (int64_t *)0x0;
    stack_ptr_a8 = (int64_t *)0x0;
    temp_flag = 3;
    process_resource_allocation(resource_data);
    
    if (stack_ptr_b0 < stack_ptr_a8) {
        *stack_ptr_b0 = (int64_t)resource_data;
        resource_entry = stack_ptr_b0;
    }
    else {
        resource_offset = (int64_t)stack_ptr_b0 - (int64_t)stack_ptr_b8 >> 3;
        if (resource_offset == 0) {
            resource_offset = 1;
LAB_18020ceb6:
            resource_entry = (int64_t *)allocate_resource_memory(system_memory_pool_ptr);
        }
        else {
            resource_offset = resource_offset * 2;
            if (resource_offset != 0) goto LAB_18020ceb6;
            resource_entry = (int64_t *)0x0;
        }
        
        if (stack_ptr_b8 != stack_ptr_b0) {
            // 警告：子程序不返回
            memmove(resource_entry, stack_ptr_b8, (int64_t)stack_ptr_b0 - (int64_t)stack_ptr_b8);
        }
        
        *resource_entry = (int64_t)resource_data;
        if (stack_ptr_b8 != (int64_t *)0x0) {
            // 警告：子程序不返回
            trigger_resource_cleanup_error();
        }
        
        stack_ptr_a8 = resource_entry + resource_offset;
        stack_ptr_b8 = resource_entry;
    }
    
    stack_ptr_b0 = resource_entry + 1;
    stack_var_98 = 0;
    
    if ((int64_t)stack_ptr_b0 - (int64_t)stack_ptr_b8 >> 3 != 0) {
        stack_var_88 = 0;
        do {
            string_length = *result_buffer;
            if (result_buffer[1] - string_length >> 5 != 0) {
                resource_offset = *(int64_t *)(stack_var_88 + (int64_t)stack_ptr_b8) + 400;
                compare_length = allocate_resource_memory(system_memory_pool_ptr, 0x78,
                               *(int8_t *)
                                (*(int64_t *)(stack_var_88 + (int64_t)stack_ptr_b8) + 0x1b8));
                stack_ptr_48 = (uint64_t *)(compare_length + 0x20);
                *stack_ptr_48 = &RESOURCE_CLEANUP_POOL;
                *(uint64_t *)(compare_length + 0x28) = 0;
                *(int32_t *)(compare_length + 0x30) = 0;
                *stack_ptr_48 = &RESOURCE_HANDLER_TABLE;
                *(int8_t **)(compare_length + 0x28) = (int8_t *)(compare_length + 0x38);
                *(int32_t *)(compare_length + 0x30) = 0;
                *(int8_t *)(compare_length + 0x38) = 0;
                *(int32_t *)(compare_length + 0x30) = *(int32_t *)(string_length + 0x10);
                pattern_ptr = &system_buffer_ptr;
                
                if (*(void **)(string_length + 8) != (void *)0x0) {
                    pattern_ptr = *(void **)(string_length + 8);
                }
                
                stack_ptr_60 = stack_ptr_48;
                strcpy_s(*(uint64_t *)(compare_length + 0x28), 0x40, pattern_ptr);
                stack_ptr_60 = (uint64_t *)compare_length;
                string_length = process_resource_matching(resource_offset, &stack_temp, stack_ptr_48);
                
                if ((char)stack_temp == '\0') {
                    *stack_ptr_48 = &RESOURCE_CLEANUP_POOL;
                    // 警告：子程序不返回
                    release_allocated_memory(compare_length);
                }
                
                if (string_length == resource_offset) goto LAB_18020d04f;
                if (*(int *)(string_length + 0x30) == 0) goto LAB_18020d047;
                if (*(int *)(compare_length + 0x30) == 0) goto LAB_18020d04f;
                
                string_ptr = *(byte **)(string_length + 0x28);
                compare_length = *(int64_t *)(compare_length + 0x28) - (int64_t)string_ptr;
                goto LAB_18020d030;
            }
            
            stack_var_98 = stack_var_98 + 1;
            stack_var_88 = stack_var_88 + 8;
            resource_data = stack_ptr_78;
            string_length = stack_var_80;
            matched_entry = stack_ptr_70;
        } while ((uint64_t)(int64_t)stack_var_98 <
                 (uint64_t)((int64_t)stack_ptr_b0 - (int64_t)stack_ptr_b8 >> 3));
    }
    
    if (stack_ptr_b8 != (int64_t *)0x0) {
        // 警告：子程序不返回
        trigger_resource_cleanup_error();
    }
    
    if (resource_data != (int64_t *)0x0) {
        (**(code **)(*resource_data + 0x38))(resource_data);
    }
    
    stack_var_94 = stack_var_94 + 1;
    stack_var_80 = string_length + 8;
    resource_offset = *matched_entry;
    iteration_count = stack_var_90;
    
    if ((uint64_t)(matched_entry[1] - resource_offset >> 3) <= (uint64_t)(int64_t)stack_var_94) {
LAB_18020d12d:
        finalize_resource_search(stack_ptr_68, stack_var_8c, iteration_count);
        return;
    }
    
    goto LAB_18020ce30;
    
    while (string_ptr = string_ptr + 1, search_index != 0) {
LAB_18020d030:
        comparison_result = *string_ptr;
        search_index = (uint)string_ptr[compare_length];
        if (comparison_result != search_index) break;
    }
    
    if ((int)(comparison_result - search_index) < 1) {
LAB_18020d047:
        search_flag = 1;
    }
    else {
LAB_18020d04f:
        search_flag = 0;
    }
    
    // 警告：子程序不返回
    register_resource_match(compare_length, string_length, resource_offset, search_flag);
}

// 函数：执行资源清理操作
// 原始实现：void FUN_18020d160(int64_t param_1)
void execute_resource_cleanup(int64_t resource_context)
{
    int resource_id;
    int64_t *resource_ptr;
    int64_t *temp_ptr;
    int64_t cleanup_handler;
    int64_t *iterator_ptr;
    int64_t manager_ptr;
    uint cleanup_index;
    uint64_t loop_counter;
    uint64_t cleanup_offset;
    uint64_t array_index;
    int64_t *stack_ptr_38;
    int64_t *stack_ptr_30;
    uint64_t cleanup_flag;
    int32_t cleanup_status;
    
    cleanup_offset = 0;
    stack_ptr_38 = (int64_t *)0x0;
    stack_ptr_30 = (int64_t *)0x0;
    cleanup_flag = 0;
    cleanup_status = 3;
    
    // 初始化资源清理上下文
    initialize_cleanup_context(&stack_ptr_38, 0, *(uint64_t *)(resource_context + 0x200), 
                               *(uint64_t *)(resource_context + 0x208));
    loop_counter = cleanup_offset;
    array_index = cleanup_offset;
    
    // 处理资源数组中的每个项目
    if (*(int64_t *)(resource_context + 0x1c8) - *(int64_t *)(resource_context + 0x1c0) >> 3 != 0) {
        do {
            process_resource_item(*(uint64_t *)(array_index + *(int64_t *)(resource_context + 0x1c0)), 
                                   &stack_ptr_38);
            cleanup_index = (int)loop_counter + 1;
            loop_counter = (uint64_t)cleanup_index;
            array_index = array_index + 8;
        } while ((uint64_t)(int64_t)(int)cleanup_index <
                 (uint64_t)(*(int64_t *)(resource_context + 0x1c8) - *(int64_t *)(resource_context + 0x1c0) >> 3));
    }
    
    manager_ptr = system_cache_buffer;
    loop_counter = cleanup_offset;
    resource_ptr = stack_ptr_38;
    temp_ptr = stack_ptr_30;
    
    // 执行实际的清理操作
    if ((int64_t)stack_ptr_30 - (int64_t)stack_ptr_38 >> 3 != 0) {
        do {
            cleanup_handler = core_system_data_resource;
            if (**(char **)(*(int64_t *)(loop_counter + (int64_t)stack_ptr_38) + 0x10) != '\0') {
                resource_id = *(int *)(*(int64_t *)(loop_counter + (int64_t)stack_ptr_38) + 0x50);
                if ((resource_id != 0) && (manager_ptr != 0)) {
                    (**(code **)(manager_ptr + 0x30))(resource_id);
                }
                (**(code **)(cleanup_handler + 0x200))(resource_id);
                manager_ptr = system_cache_buffer;
                if ((resource_id != 0) && (system_cache_buffer != 0)) {
                    (**(code **)(system_cache_buffer + 0x18))(resource_id);
                    manager_ptr = system_cache_buffer;
                }
            }
            
            cleanup_index = (int)cleanup_offset + 1;
            cleanup_offset = (uint64_t)cleanup_index;
            loop_counter = loop_counter + 8;
            resource_ptr = stack_ptr_38;
            temp_ptr = stack_ptr_30;
        } while ((uint64_t)(int64_t)(int)cleanup_index <
                 (uint64_t)((int64_t)stack_ptr_30 - (int64_t)stack_ptr_38 >> 3));
    }
    
    // 清理栈上的资源
    for (; iterator_ptr = stack_ptr_30, resource_ptr != stack_ptr_30; resource_ptr = resource_ptr + 1) {
        stack_ptr_30 = temp_ptr;
        if ((int64_t *)*resource_ptr != (int64_t *)0x0) {
            (**(code **)(*(int64_t *)*resource_ptr + 0x38))();
        }
        temp_ptr = stack_ptr_30;
        stack_ptr_30 = iterator_ptr;
    }
    
    if (stack_ptr_38 == (int64_t *)0x0) {
        return;
    }
    
    stack_ptr_30 = temp_ptr;
    // 警告：子程序不返回
    trigger_resource_cleanup_error();
}

// 函数：释放资源内存
// 原始实现：void FUN_18020d310(int64_t param_1)
void release_resource_memory(int64_t resource_handle)
{
    int resource_id;
    int64_t *resource_ptr;
    int64_t *temp_ptr;
    int64_t release_handler;
    int64_t *iterator_ptr;
    int64_t manager_ptr;
    uint release_index;
    uint64_t loop_counter;
    uint64_t release_offset;
    uint64_t array_index;
    int64_t *stack_ptr_38;
    int64_t *stack_ptr_30;
    uint64_t release_flag;
    int32_t release_status;
    
    release_offset = 0;
    stack_ptr_38 = (int64_t *)0x0;
    stack_ptr_30 = (int64_t *)0x0;
    release_flag = 0;
    release_status = 3;
    
    // 初始化资源释放上下文
    initialize_release_context(&stack_ptr_38, 0, *(uint64_t *)(resource_handle + 0x200), 
                              *(uint64_t *)(resource_handle + 0x208));
    loop_counter = release_offset;
    array_index = release_offset;
    
    // 处理资源数组中的每个项目
    if (*(int64_t *)(resource_handle + 0x1c8) - *(int64_t *)(resource_handle + 0x1c0) >> 3 != 0) {
        do {
            process_resource_release(*(uint64_t *)(array_index + *(int64_t *)(resource_handle + 0x1c0)), 
                                     &stack_ptr_38);
            release_index = (int)loop_counter + 1;
            loop_counter = (uint64_t)release_index;
            array_index = array_index + 8;
        } while ((uint64_t)(int64_t)(int)release_index <
                 (uint64_t)(*(int64_t *)(resource_handle + 0x1c8) - *(int64_t *)(resource_handle + 0x1c0) >> 3));
    }
    
    manager_ptr = system_cache_buffer;
    loop_counter = release_offset;
    resource_ptr = stack_ptr_38;
    temp_ptr = stack_ptr_30;
    
    // 执行实际的释放操作
    if ((int64_t)stack_ptr_30 - (int64_t)stack_ptr_38 >> 3 != 0) {
        do {
            release_handler = core_system_data_resource;
            if (**(char **)(*(int64_t *)(loop_counter + (int64_t)stack_ptr_38) + 0x10) != '\0') {
                resource_id = *(int *)(*(int64_t *)(loop_counter + (int64_t)stack_ptr_38) + 0x50);
                if ((resource_id != 0) && (manager_ptr != 0)) {
                    (**(code **)(manager_ptr + 0x30))(resource_id);
                }
                (**(code **)(release_handler + 0x178))(resource_id);
                manager_ptr = system_cache_buffer;
                if ((resource_id != 0) && (system_cache_buffer != 0)) {
                    (**(code **)(system_cache_buffer + 0x18))(resource_id);
                    manager_ptr = system_cache_buffer;
                }
            }
            
            release_index = (int)release_offset + 1;
            release_offset = (uint64_t)release_index;
            loop_counter = loop_counter + 8;
            resource_ptr = stack_ptr_38;
            temp_ptr = stack_ptr_30;
        } while ((uint64_t)(int64_t)(int)release_index <
                 (uint64_t)((int64_t)stack_ptr_30 - (int64_t)stack_ptr_38 >> 3));
    }
    
    // 清理栈上的资源
    for (; iterator_ptr = stack_ptr_30, resource_ptr != stack_ptr_30; resource_ptr = resource_ptr + 1) {
        stack_ptr_30 = temp_ptr;
        if ((int64_t *)*resource_ptr != (int64_t *)0x0) {
            (**(code **)(*(int64_t *)*resource_ptr + 0x38))();
        }
        temp_ptr = stack_ptr_30;
        stack_ptr_30 = iterator_ptr;
    }
    
    if (stack_ptr_38 == (int64_t *)0x0) {
        return;
    }
    
    stack_ptr_30 = temp_ptr;
    // 警告：子程序不返回
    trigger_resource_cleanup_error();
}

// 函数：批量处理资源操作
// 原始实现：void FUN_18020d4c0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void batch_process_resources(uint64_t param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4)
{
    uint64_t resource_item;
    uint64_t item_count;
    int64_t temp_offset;
    uint64_t *resource_ptr;
    int process_count;
    int batch_index;
    uint64_t *batch_buffer;
    int32_t batch_flag;
    uint64_t *stack_ptr_78;
    uint64_t *stack_ptr_70;
    uint64_t *stack_ptr_68;
    int32_t stack_status;
    uint64_t *stack_ptr_58;
    int64_t stack_offset;
    uint64_t stack_flag;
    int32_t stack_flag_40;
    
    stack_ptr_58 = (uint64_t *)0x0;
    stack_offset = 0;
    stack_flag = 0;
    stack_flag_40 = 3;
    
    // 初始化批量处理
    initialize_batch_processing(core_system_data_resource, &stack_ptr_58, param_3, param_4, 0, 0xfffffffffffffffe);
    batch_index = 0;
    item_count = stack_offset - (int64_t)stack_ptr_58 >> 3;
    resource_ptr = stack_ptr_58;
    
    // 处理每个资源项
    if (item_count != 0) {
        do {
            resource_item = *resource_ptr;
            stack_ptr_78 = (uint64_t *)0x0;
            stack_ptr_70 = (uint64_t *)0x0;
            stack_ptr_68 = (uint64_t *)0x0;
            stack_status = 3;
            batch_flag = 1;
            process_resource_allocation(resource_item, &stack_ptr_78);
            
            if (stack_ptr_70 < stack_ptr_68) {
                *stack_ptr_70 = resource_item;
                resource_ptr = stack_ptr_70;
            }
            else {
                temp_offset = (int64_t)stack_ptr_70 - (int64_t)stack_ptr_78 >> 3;
                if (temp_offset == 0) {
                    temp_offset = 1;
LAB_18020d5b5:
                    resource_ptr = (uint64_t *)
                            allocate_batch_memory(system_memory_pool_ptr, temp_offset * 8, (char)stack_status, param_4, batch_flag);
                }
                else {
                    temp_offset = temp_offset * 2;
                    if (temp_offset != 0) goto LAB_18020d5b5;
                    resource_ptr = (uint64_t *)0x0;
                }
                
                if (stack_ptr_78 != stack_ptr_70) {
                    // 警告：子程序不返回
                    memmove(resource_ptr, stack_ptr_78, (int64_t)stack_ptr_70 - (int64_t)stack_ptr_78);
                }
                
                *resource_ptr = resource_item;
                if (stack_ptr_78 != (uint64_t *)0x0) {
                    // 警告：子程序不返回
                    trigger_resource_cleanup_error();
                }
                
                stack_ptr_68 = resource_ptr + temp_offset;
                stack_ptr_78 = resource_ptr;
            }
            
            stack_ptr_70 = resource_ptr + 1;
            process_count = 0;
            
            if ((int64_t)stack_ptr_70 - (int64_t)stack_ptr_78 >> 3 != 0) {
                temp_offset = 0;
                do {
                    process_single_resource(*(uint64_t *)(temp_offset + (int64_t)stack_ptr_78));
                    process_count = process_count + 1;
                    temp_offset = temp_offset + 8;
                } while ((uint64_t)(int64_t)process_count <
                         (uint64_t)((int64_t)stack_ptr_70 - (int64_t)stack_ptr_78 >> 3));
            }
            
            if (stack_ptr_78 != (uint64_t *)0x0) {
                // 警告：子程序不返回
                trigger_resource_cleanup_error();
            }
            
            batch_index = batch_index + 1;
            resource_ptr = resource_ptr + 1;
        } while ((uint64_t)(int64_t)batch_index < item_count);
    }
    
    if (stack_ptr_58 == (uint64_t *)0x0) {
        return;
    }
    
    // 警告：子程序不返回
    trigger_resource_cleanup_error();
}

// 函数：在资源表中查找指定项
// 原始实现：uint64_t * FUN_18020d6c0(uint64_t *param_1,int *param_2,uint64_t *param_3)
uint64_t *find_resource_in_table(uint64_t *resource_table, int *search_key, uint64_t *param_3)
{
    uint64_t *current_node;
    int64_t *result_ptr;
    uint64_t *best_match;
    int8_t search_buffer[32];
    
    current_node = (uint64_t *)resource_table[2];
    best_match = resource_table;
    
    // 在二叉树中查找最佳匹配节点
    if (current_node != (uint64_t *)0x0) {
        param_3 = resource_table;
        do {
            if (*(int *)(current_node + 4) < *search_key) {
                current_node = (uint64_t *)*current_node;
            }
            else {
                param_3 = current_node;
                current_node = (uint64_t *)current_node[1];
            }
            best_match = param_3;
        } while (current_node != (uint64_t *)0x0);
    }
    
    // 如果找到匹配项，返回结果
    if ((best_match != resource_table) && (*(int *)(best_match + 4) <= *search_key)) {
        return best_match + 5;
    }
    
    // 如果没有找到，创建新项
    result_ptr = (int64_t *)create_resource_entry(resource_table, search_buffer, param_3, best_match, search_key);
    return (uint64_t *)(*result_ptr + 0x28);
}

// 函数：创建资源表条目
// 原始实现：uint64_t *FUN_18020d730(int64_t *param_1,uint64_t *param_2,uint64_t param_3,int64_t *param_4, int *param_5)
uint64_t *create_resource_entry(int64_t *resource_table, uint64_t *param_2, uint64_t param_3, 
                                int64_t *insert_point, int *entry_key)
{
    bool insert_before;
    int key_value;
    int64_t *current_node;
    int64_t *next_node;
    int64_t new_entry;
    uint64_t insert_flag;
    
    current_node = (int64_t *)*resource_table;
    
    // 检查插入位置
    if ((insert_point == current_node) || (insert_point == resource_table)) {
        if ((resource_table[4] != 0) && (insert_point = current_node, *(int *)(current_node + 4) < *entry_key)) {
LAB_18020d79f:
            insert_flag = 0;
            goto LAB_18020d7a2;
        }
    }
    else {
        current_node = (int64_t *)func_0x00018066bd70(insert_point);
        if (((int)insert_point[4] < *entry_key) && (*entry_key < (int)current_node[4])) {
            if (*insert_point == 0) goto LAB_18020d79f;
            insert_flag = 1;
            insert_point = current_node;
LAB_18020d7a2:
            if (insert_point != (int64_t *)0x0) {
                insert_resource_entry(resource_table, param_2, insert_point, insert_flag, entry_key);
                return param_2;
            }
        }
    }
    
    // 查找合适的插入位置
    insert_before = true;
    current_node = resource_table;
    if ((int64_t *)resource_table[2] != (int64_t *)0x0) {
        next_node = (int64_t *)resource_table[2];
        do {
            current_node = next_node;
            insert_before = *entry_key < (int)current_node[4];
            if (*entry_key < (int)current_node[4]) {
                next_node = (int64_t *)current_node[1];
            }
            else {
                next_node = (int64_t *)*current_node;
            }
        } while (next_node != (int64_t *)0x0);
    }
    
    next_node = current_node;
    if (insert_before) {
        if (current_node == (int64_t *)resource_table[1]) {
            key_value = *entry_key;
            goto LAB_18020d80a;
        }
        next_node = (int64_t *)func_0x00018066b9a0(current_node);
    }
    
    key_value = *entry_key;
    if (key_value <= (int)next_node[4]) {
        *param_2 = next_node;
        return param_2;
    }
    
LAB_18020d80a:
    if ((current_node == resource_table) || (key_value < (int)current_node[4])) {
        insert_flag = 0;
    }
    else {
        insert_flag = 1;
    }
    
    // 创建新的资源条目
    new_entry = allocate_resource_memory(system_memory_pool_ptr, 0x48, (char)resource_table[5]);
    *(int *)(new_entry + 0x20) = *entry_key;
    *(uint64_t *)(new_entry + 0x28) = 0;
    *(uint64_t *)(new_entry + 0x30) = 0;
    *(uint64_t *)(new_entry + 0x38) = 0;
    *(int32_t *)(new_entry + 0x40) = 3;
    
    // 警告：子程序不返回
    link_resource_entry(new_entry, current_node, resource_table, insert_flag);
}

// 函数：扩展资源表容量
// 原始实现：void FUN_18020d8a0(int64_t *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
void expand_resource_table(int64_t *resource_table, uint64_t *new_entry, uint64_t param_3, uint64_t param_4)
{
    uint64_t *table_end;
    int64_t *current_ptr;
    uint64_t *table_start;
    uint64_t *copy_ptr;
    int64_t copy_offset;
    uint64_t *new_table;
    int64_t table_size;
    int64_t old_capacity;
    int64_t new_capacity;
    uint64_t *table_ptr;
    
    table_ptr = (uint64_t *)resource_table[1];
    table_start = (uint64_t *)*resource_table;
    old_capacity = (int64_t)table_ptr - (int64_t)table_start >> 5;
    new_table = (uint64_t *)0x0;
    
    if (old_capacity == 0) {
        old_capacity = 1;
    }
    else {
        old_capacity = old_capacity * 2;
        if (old_capacity == 0) goto LAB_18020d911;
    }
    
    new_table = (uint64_t *)
            allocate_table_memory(system_memory_pool_ptr, old_capacity << 5, (char)resource_table[3], param_4, 0xfffffffffffffffe);
    table_ptr = (uint64_t *)resource_table[1];
    table_start = (uint64_t *)*resource_table;
    
LAB_18020d911:
    copy_ptr = new_table;
    
    // 复制现有数据到新表
    if (table_start != table_ptr) {
        copy_offset = (int64_t)new_table - (int64_t)table_start;
        table_start = table_start + 2;
        do {
            *copy_ptr = table_start[-2];
            *(int32_t *)(copy_offset + -8 + (int64_t)table_start) = *(int32_t *)(table_start + -1);
            *(uint64_t *)(copy_offset + (int64_t)table_start) = *table_start;
            *table_start = 0;
            *(uint64_t *)(copy_offset + 8 + (int64_t)table_start) = table_start[1];
            copy_ptr = copy_ptr + 4;
            table_end = table_start + 2;
            table_start = table_start + 4;
        } while (table_end != table_ptr);
    }
    
    // 添加新条目
    *copy_ptr = *new_entry;
    *(int32_t *)(copy_ptr + 1) = *(int32_t *)(new_entry + 1);
    current_ptr = (int64_t *)new_entry[2];
    copy_ptr[2] = current_ptr;
    
    if (current_ptr != (int64_t *)0x0) {
        (**(code **)(*current_ptr + 0x28))();
    }
    
    copy_ptr[3] = new_entry[3];
    table_size = resource_table[1];
    old_capacity = *resource_table;
    
    // 清理旧表数据
    if (old_capacity != table_size) {
        do {
            if (*(int64_t **)(old_capacity + 0x10) != (int64_t *)0x0) {
                (**(code **)(**(int64_t **)(old_capacity + 0x10) + 0x38))();
            }
            old_capacity = old_capacity + 0x20;
        } while (old_capacity != table_size);
        old_capacity = *resource_table;
    }
    
    if (old_capacity == 0) {
        *resource_table = (int64_t)new_table;
        resource_table[1] = (int64_t)(copy_ptr + 4);
        resource_table[2] = (int64_t)(new_table + old_capacity * 4);
        return;
    }
    
    // 警告：子程序不返回
    trigger_resource_cleanup_error(old_capacity);
}

// 函数：插入资源表条目
// 原始实现：void FUN_18020da10(int64_t param_1,uint64_t param_2,int64_t param_3,uint64_t param_4, int *param_5)
void insert_resource_entry(int64_t resource_table, uint64_t param_2, int64_t insert_point, 
                          uint64_t insert_flag, int *entry_key)
{
    int64_t new_entry;
    int32_t insert_before;
    
    if ((((char)insert_flag == '\0') && (insert_point != resource_table)) && 
        (*(int *)(insert_point + 0x20) <= *entry_key)) {
        insert_before = 1;
    }
    else {
        insert_before = 0;
    }
    
    // 创建新条目
    new_entry = allocate_resource_memory(system_memory_pool_ptr, 0x48, *(int8_t *)(resource_table + 0x28), 
                                        insert_flag, 0xfffffffffffffffe);
    *(int *)(new_entry + 0x20) = *entry_key;
    *(uint64_t *)(new_entry + 0x28) = 0;
    *(uint64_t *)(new_entry + 0x30) = 0;
    *(uint64_t *)(new_entry + 0x38) = 0;
    *(int32_t *)(new_entry + 0x40) = 3;
    
    // 警告：子程序不返回
    link_resource_entry(new_entry, insert_point, resource_table, insert_before);
}

// 函数：处理资源索引范围
// 原始实现：void FUN_18020dae0(uint param_1,int param_2,int64_t *param_3)
void process_resource_index_range(uint start_index, int end_index, int64_t *resource_manager)
{
    int64_t hash_offset;
    int64_t *resource_entry;
    uint64_t hash_index;
    uint current_index;
    uint64_t page_index;
    uint64_t process_flag;
    uint64_t stack_temp;
    int8_t stack_flag;
    uint64_t process_data;
    int64_t *stack_ptr;
    uint64_t stack_flag_28;
    int16_t stack_flag_20;
    
    if ((int)start_index < end_index) {
        page_index = (uint64_t)start_index;
        do {
            hash_index = (uint64_t)((uint)page_index & 0xfff);
            hash_offset = (page_index >> 0xc) * 8;
            resource_entry = *(int64_t **)(*(int64_t *)(*resource_manager + 8 + hash_offset) + hash_index * 0x30);
            process_flag = 0xffffffffffffffff;
            stack_temp = 0;
            stack_flag = 0;
            stack_ptr = resource_entry;
            
            if (resource_entry != (int64_t *)0x0) {
                (**(code **)(*resource_entry + 0x28))(resource_entry);
            }
            
            stack_flag_28 = 0;
            stack_flag_20 = 1;
            *(byte *)(resource_entry + 0x5d) = *(byte *)(resource_entry + 0x5d) | 0x80;
            process_data = 0;
            
            // 处理资源项
            process_resource_data(&process_flag,
                                 *(uint64_t *)(*(int64_t *)(*resource_manager + 8 + hash_offset) + 8 + hash_index * 0x30));
            (**(code **)(*resource_entry + 0x38))(resource_entry);
            current_index = (uint)page_index + 1;
            page_index = (uint64_t)current_index;
        } while ((int)current_index < end_index);
    }
    
    return;
}

// 函数：处理资源块范围
// 原始实现：void FUN_18020dc20(int param_1,int param_2,int64_t *param_3)
void process_resource_block_range(int start_block, int end_block, int64_t *resource_manager)
{
    uint64_t *resource_table;
    int64_t block_offset;
    int64_t block_count;
    uint64_t process_flag;
    uint64_t stack_flag_48;
    uint64_t stack_flag_40;
    int8_t stack_flag_38;
    uint64_t stack_flag_30;
    int64_t *resource_entry;
    uint64_t stack_flag_18;
    int16_t stack_flag_10;
    
    process_flag = 0xfffffffffffffffe;
    resource_table = (uint64_t *)*resource_manager;
    block_offset = (int64_t)start_block;
    
    if (block_offset < end_block) {
        block_count = block_offset << 5;
        block_offset = end_block - block_offset;
        do {
            resource_entry = *(int64_t **)(block_count + 0x10 + *(int64_t *)*resource_table);
            stack_flag_48 = 0xffffffffffffffff;
            stack_flag_40 = 0;
            stack_flag_38 = 0;
            
            if (resource_entry != (int64_t *)0x0) {
                (**(code **)(*resource_entry + 0x28))();
            }
            
            stack_flag_18 = 0;
            stack_flag_10 = 1;
            *(byte *)(resource_entry + 0x5d) = *(byte *)(resource_entry + 0x5d) | 0x80;
            stack_flag_30 = 0;
            
            // 处理资源块
            process_resource_block(&stack_flag_48, *(uint64_t *)(*(int64_t *)*resource_table + block_count), 
                                   resource_table[1], *(uint64_t *)(*(int64_t *)*resource_table + 0x18 + block_count), 
                                   0, resource_table[2], process_flag);
            
            if (resource_entry != (int64_t *)0x0) {
                (**(code **)(*resource_entry + 0x38))();
            }
            
            block_count = block_count + 0x20;
            block_offset = block_offset + -1;
        } while (block_offset != 0);
    }
    
    return;
}

// 函数：处理资源管理器操作
// 原始实现：int64_t FUN_18020dd10(int64_t *param_1,int64_t *param_2,int param_3)
int64_t process_manager_operation(int64_t *manager_ptr, int64_t *data_ptr, int operation_type)
{
    uint64_t *resource_data;
    uint64_t temp_value;
    uint64_t *new_resource;
    
    if (operation_type == 3) {
        return 0x180c038d0;
    }
    
    if (operation_type == 4) {
        return *manager_ptr;
    }
    
    if (operation_type == 0) {
        if (*manager_ptr != 0) {
            // 警告：子程序不返回
            trigger_resource_cleanup_error();
        }
    }
    else {
        if (operation_type == 1) {
            new_resource = (uint64_t *)allocate_resource_structure(system_memory_pool_ptr, 0x18, 8, system_allocation_flags, 0xfffffffffffffffe);
            resource_data = (uint64_t *)*data_ptr;
            temp_value = resource_data[1];
            *new_resource = *resource_data;
            new_resource[1] = temp_value;
            new_resource[2] = resource_data[2];
            *manager_ptr = (int64_t)new_resource;
            return 0;
        }
        
        if (operation_type == 2) {
            *manager_ptr = *data_ptr;
            *data_ptr = 0;
            return 0;
        }
    }
    
    return 0;
}

// 函数：格式化资源信息输出
// 原始实现：void FUN_18020ddf0(uint64_t param_1,int64_t param_2)
void format_resource_info_output(uint64_t output_handle, int64_t resource_info)
{
    int64_t string_length;
    void *format_ptr;
    int8_t output_buffer[32];
    int8_t *output_ptr;
    int32_t output_length;
    int32_t output_length_808;
    int8_t *output_buffer_7f8;
    void **output_ptr_7f0;
    uint64_t output_flag_7e8;
    int output_var_7dc;
    void *output_ptr_7d8;
    int8_t temp_buffer_7d0[8];
    int8_t output_buffer_7c8[152];
    int8_t output_buffer_730[104];
    int8_t output_buffer_6c8[16];
    void *output_ptr_6b8;
    int8_t *output_ptr_6b0;
    int32_t output_length_6a8;
    int8_t output_buffer_6a0[264];
    void *output_ptr_598;
    int8_t *output_ptr_590;
    int32_t output_length_588;
    int8_t output_buffer_580[264];
    void *output_array[68];
    int8_t output_buffer_258[560];
    uint64_t security_cookie;
    
    output_flag_7e8 = 0xfffffffffffffffe;
    security_cookie = GET_SECURITY_COOKIE() ^ (uint64_t)output_buffer;
    output_length_808 = 0;
    output_ptr_6b8 = &unknown_var_2008_ptr;
    output_ptr_6b0 = output_buffer_6a0;
    output_length_6a8 = 0;
    output_buffer_6a0[0] = 0;
    
    // 处理资源信息字符串
    if (resource_info != 0) {
        string_length = -1;
        do {
            string_length = string_length + 1;
        } while (*(char *)(resource_info + string_length) != '\0');
        output_length_6a8 = (int32_t)string_length;
        strcpy_s(output_buffer_6a0, 0x100, resource_info);
    }
    
    string_length = format_output_data(output_array, &output_ptr_6b8);
    output_ptr_598 = &unknown_var_2008_ptr;
    output_ptr_590 = output_buffer_580;
    output_buffer_580[0] = 0;
    output_length_588 = *(int32_t *)(string_length + 0x10);
    format_ptr = &system_buffer_ptr;
    
    if (*(void **)(string_length + 8) != (void *)0x0) {
        format_ptr = *(void **)(string_length + 8);
    }
    
    strcpy_s(output_buffer_580, 0x100, format_ptr);
    output_array[0] = &system_state_ptr;
    output_ptr_6b8 = &system_state_ptr;
    output_length = 0x118;
    output_ptr = output_buffer_258;
    
    // 转换为宽字符
    MultiByteToWideChar(0xfde9, 0, output_ptr_590, 0xffffffff);
    output_ptr_7d8 = &unknown_var_2368_ptr;
    initialize_output_stream(output_buffer_730);
    output_length_808 = 1;
    
    // 设置输出流
    setup_output_stream(&output_ptr_7d8, temp_buffer_7d0, 0, 0);
    *(void **)(temp_buffer_7d0 + (int64_t)*(int *)(output_ptr_7d8 + 4) + -8) = &unknown_var_2384_ptr;
    *(int *)((int64_t)&output_var_7dc + (int64_t)*(int *)(output_ptr_7d8 + 4)) =
         *(int *)(output_ptr_7d8 + 4) + -0xa8;
    format_output_string(temp_buffer_7d0);
    string_length = write_output_data(temp_buffer_7d0, output_buffer_258, 0x12);
    
    if (string_length == 0) {
        set_output_stream_state(temp_buffer_7d0 + (int64_t)*(int *)(output_ptr_7d8 + 4) + -8, 2);
    }
    
    output_ptr_7f0 = &output_ptr_7d8;
    output_buffer_7f8 = (int8_t *)0x0;
    output_ptr = (int8_t *)((uint64_t)output_ptr & 0xffffffff00000000);
    format_resource_name(output_buffer_6c8, &output_buffer_7f8, output_handle, 0);
    string_length = flush_output_stream(temp_buffer_7d0);
    
    if (string_length == 0) {
        set_output_stream_state(temp_buffer_7d0 + (int64_t)*(int *)(output_ptr_7d8 + 4) + -8, 2);
    }
    
    output_buffer_7f8 = output_buffer_730;
    *(void **)(temp_buffer_7d0 + (int64_t)*(int *)(output_ptr_7d8 + 4) + -8) = &unknown_var_2384_ptr;
    *(int *)((int64_t)&output_var_7dc + (int64_t)*(int *)(output_ptr_7d8 + 4)) =
         *(int *)(output_ptr_7d8 + 4) + -0xa8;
    finalize_output_stream(temp_buffer_7d0);
    cleanup_output_stream(output_buffer_7c8);
    cleanup_input_stream(output_buffer_730);
    output_ptr_598 = &system_state_ptr;
    
    // 警告：子程序不返回
    cleanup_security_cookie(security_cookie ^ (uint64_t)output_buffer);
}

/*
 * 全局变量和常量定义
 * 
 * 简化实现说明：
 * - unknown_var_3456 -> EMPTY_RESOURCE_POOL (空资源池)
 * - system_state_ptr -> RESOURCE_CLEANUP_POOL (资源清理池)
 * - unknown_var_3480 -> RESOURCE_HANDLER_TABLE (资源处理表)
 * - system_buffer_ptr -> EMPTY_STRING_BUFFER (空字符串缓冲区)
 * - core_system_data_resource -> GLOBAL_RESOURCE_TABLE (全局资源表)
 * - system_main_module_state -> GLOBAL_RESOURCE_FLAG (全局资源标志)
 * - system_cache_buffer -> RESOURCE_MANAGER_PTR (资源管理器指针)
 * - core_system_data_resource -> RESOURCE_CLEANUP_HANDLER (资源清理处理器)
 * - system_memory_pool_ptr -> MEMORY_ALLOCATOR (内存分配器)
 * - GET_SECURITY_COOKIE() -> SECURITY_COOKIE (安全cookie)
 * - system_allocation_flags -> DEFAULT_RESOURCE_DATA (默认资源数据)
 * 
 * 函数名称映射：
 * - FUN_18020d310 -> cleanup_resource_item (清理资源项)
 * - func_0x00018066bd70 -> get_next_resource_entry (获取下一个资源条目)
 * - FUN_1800b8500 -> deallocate_resource_memory (释放资源内存)
 * - FUN_180057830 -> free_resource_structure (释放资源结构)
 * - CoreEngine_MemoryPoolManager -> trigger_resource_cleanup_error (触发资源清理错误)
 * - FUN_180179f00 -> process_resource_cleanup (处理资源清理)
 * - FUN_1806279c0 -> initialize_search_context (初始化搜索上下文)
 * - FUN_180141820 -> calculate_search_hash (计算搜索哈希)
 * - FUN_1802e8c60 -> process_resource_allocation (处理资源分配)
 * - CoreMemoryPoolAllocator -> allocate_resource_memory (分配资源内存)
 * - FUN_1800590b0 -> process_resource_matching (处理资源匹配)
 * - FUN_18066bdc0 -> register_resource_match (注册资源匹配)
 * - FUN_18020b790 -> finalize_resource_search (完成资源搜索)
 * - FUN_1802f5440 -> initialize_cleanup_context (初始化清理上下文)
 * - FUN_1802f1890 -> process_resource_item (处理资源项)
 * - FUN_18020c8f0 -> initialize_batch_processing (初始化批量处理)
 * - FUN_1802f1930 -> process_single_resource (处理单个资源)
 * - FUN_18020da10 -> insert_resource_entry (插入资源条目)
 * - CoreMemoryPoolReallocator -> allocate_resource_structure (分配资源结构)
 * - FUN_18020d8a0 -> expand_resource_table (扩展资源表)
 * - FUN_18066b9a0 -> get_previous_resource_entry (获取前一个资源条目)
 * - FUN_1803bb5f0 -> process_resource_data (处理资源数据)
 * - FUN_1803ba550 -> process_resource_block (处理资源块)
 * - FUN_180624440 -> format_output_data (格式化输出数据)
 * - FUN_1800a1310 -> format_resource_name (格式化资源名称)
 * - FUN_18009ec20 -> format_output_string (格式化输出字符串)
 * - FUN_18009ec80 -> write_output_data (写入输出数据)
 * - FUN_1800a19c0 -> flush_output_stream (刷新输出流)
 * - SystemSecurityChecker -> cleanup_security_cookie (清理安全cookie)
 * 
 * 标准库函数：
 * - strstr -> 字符串查找
 * - strcpy_s -> 安全字符串复制
 * - memmove -> 内存移动
 * - MultiByteToWideChar -> 多字节转宽字符
 * 
 * C++标准库函数：
 * - __0__basic_ios_DU__char_traits_D_std___std__IEAA_XZ -> 初始化基本IO流
 * - __0__basic_ostream_DU__char_traits_D_std___std__QEAA_PEAV__basic_streambuf_DU__char_traits_D_std___1__N_Z -> 设置输出流缓冲区
 * - _setstate___basic_ios_DU__char_traits_D_std___std__QEAAXH_N_Z -> 设置IO流状态
 * - __1__basic_ostream_DU__char_traits_D_std___std__UEAA_XZ -> 清理输出流
 * - __1__basic_ios_DU__char_traits_D_std___std__UEAA_XZ -> 清理输入流
 */