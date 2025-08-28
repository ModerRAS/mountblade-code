#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part244.c - 核心引擎模块第244部分
// 包含10个函数，主要负责资源管理、数据结构操作和字符串处理

// 函数：清理资源管理器中的资源项
// 原始实现：void FUN_18020cae0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void cleanup_resource_manager_entries(longlong resource_manager, undefined8 param_2, undefined8 param_3, undefined8 param_4)
{
    longlong *entry_ptr;
    undefined8 *resource_ptr;
    int item_count;
    longlong current_entry;
    longlong entry_data;
    ulonglong resource_index;
    uint item_index;
    ulonglong loop_counter;
    ulonglong entry_offset;
    undefined8 cleanup_flag;
    
    cleanup_flag = 0xfffffffffffffffe;
    resource_index = 0;
    
    // 遍历资源管理器中的所有条目
    for (current_entry = *(longlong *)(resource_manager + 8); current_entry != resource_manager; 
         current_entry = func_0x00018066bd70(current_entry)) {
        entry_data = *(longlong *)(current_entry + 0x28);
        loop_counter = resource_index;
        entry_offset = resource_index;
        
        // 处理条目中的资源数组
        if (*(longlong *)(current_entry + 0x30) - entry_data >> 3 != 0) {
            do {
                resource_ptr = *(undefined8 **)(entry_offset + entry_data);
                if (resource_ptr != (undefined8 *)0x0) {
                    entry_ptr = resource_ptr + 5;
                    item_count = (int)(resource_ptr[6] - *entry_ptr >> 3);
                    
                    // 清理每个资源项
                    if (0 < item_count) {
                        do {
                            cleanup_resource_item(*(undefined8 *)(*entry_ptr + resource_index * 8));
                            resource_index = resource_index + 1;
                        } while ((longlong)resource_index < (longlong)item_count);
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
                    *(undefined4 *)(resource_ptr + 3) = 0;
                    *resource_ptr = &RESOURCE_CLEANUP_POOL;
                    // 警告：子程序不返回
                    perform_resource_cleanup(resource_ptr);
                }
                
                *(undefined8 *)(entry_offset + *(longlong *)(current_entry + 0x28)) = 0;
                item_index = (int)loop_counter + 1;
                entry_data = *(longlong *)(current_entry + 0x28);
                loop_counter = (ulonglong)item_index;
                entry_offset = entry_offset + 8;
            } while ((ulonglong)(longlong)(int)item_index <
                     (ulonglong)(*(longlong *)(current_entry + 0x30) - entry_data >> 3));
        }
        
        *(longlong *)(current_entry + 0x30) = entry_data;
    }
    
    // 重置资源管理器状态
    resource_ptr = *(undefined8 **)(resource_manager + 0x10);
    if (resource_ptr == (undefined8 *)0x0) {
        *(longlong *)resource_manager = resource_manager;
        *(longlong *)(resource_manager + 8) = resource_manager;
        *(undefined8 *)(resource_manager + 0x10) = 0;
        *(undefined1 *)(resource_manager + 0x18) = 0;
        *(undefined8 *)(resource_manager + 0x20) = 0;
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
// 原始实现：void FUN_18020ccb0(undefined8 param_1,undefined8 param_2,longlong param_3,longlong *param_4)
void process_resource_lookup(undefined8 param_1, undefined8 param_2, longlong search_pattern, longlong *result_buffer)
{
    byte comparison_result;
    undefined *temp_ptr;
    undefined8 *resource_table;
    int match_count;
    uint search_index;
    undefined8 *current_resource;
    undefined8 *best_match;
    longlong resource_offset;
    longlong *resource_entry;
    longlong entry_start;
    undefined *pattern_ptr;
    byte *string_ptr;
    undefined *resource_name;
    undefined8 *temp_resource;
    longlong *resource_data;
    longlong string_length;
    longlong compare_length;
    undefined8 search_flag;
    longlong *matched_entry;
    int iteration_count;
    undefined8 stack_temp;
    longlong *temp_stack_ptr;
    longlong *stack_ptr_b0;
    longlong *stack_ptr_a8;
    undefined4 temp_flag;
    int stack_var_98;
    int stack_var_94;
    int stack_var_90;
    int stack_var_8c;
    longlong stack_var_88;
    longlong stack_var_80;
    longlong *stack_ptr_78;
    longlong *stack_ptr_70;
    undefined8 *stack_ptr_68;
    undefined8 *stack_ptr_60;
    undefined8 stack_var_58;
    longlong *stack_ptr_50;
    undefined8 *stack_ptr_48;
    
    resource_table = _DAT_180c868e8;
    stack_var_58 = 0xfffffffffffffffe;
    stack_ptr_68 = _DAT_180c868e8;
    search_flag = *_DAT_180c86870;
    stack_temp = param_1;
    initialize_search_context(&stack_ptr_b8);
    stack_var_8c = calculate_search_hash(search_flag, &stack_ptr_b8);
    stack_ptr_b8 = (longlong *)&EMPTY_RESOURCE_POOL;
    
    if (stack_ptr_b0 != (longlong *)0x0) {
        // 警告：子程序不返回
        trigger_resource_cleanup_error();
    }
    
    stack_ptr_b0 = (longlong *)0x0;
    temp_flag = 0;
    stack_ptr_b8 = (longlong *)&RESOURCE_CLEANUP_POOL;
    current_resource = (undefined8 *)resource_table[2];
    best_match = resource_table;
    
    // 在资源表中查找最佳匹配
    if ((undefined8 *)resource_table[2] != (undefined8 *)0x0) {
        do {
            if (*(int *)(current_resource + 4) < stack_var_8c) {
                temp_resource = (undefined8 *)*current_resource;
            }
            else {
                temp_resource = (undefined8 *)current_resource[1];
                best_match = current_resource;
            }
            current_resource = temp_resource;
        } while (temp_resource != (undefined8 *)0x0);
        
        if ((best_match != resource_table) && (*(int *)(best_match + 4) <= stack_var_8c)) {
            goto LAB_18020cd75;
        }
    }
    
    best_match = resource_table;
LAB_18020cd75:
    stack_var_90 = 0;
    match_count = (int)((longlong)(best_match[6] - best_match[5]) >> 3);
    
    // 检查每个资源项是否匹配搜索模式
    if (0 < match_count) {
        string_length = 0;
        do {
            iteration_count = stack_var_90;
            pattern_ptr = &DAT_18098bc73;
            if (*(undefined **)(search_pattern + 8) != (undefined *)0x0) {
                pattern_ptr = *(undefined **)(search_pattern + 8);
            }
            
            temp_ptr = *(undefined **)(*(longlong *)(best_match[5] + string_length * 8) + 8);
            resource_name = &DAT_18098bc73;
            if (temp_ptr != (undefined *)0x0) {
                resource_name = temp_ptr;
            }
            
            resource_offset = strstr(resource_name, pattern_ptr);
            if (resource_offset != 0) {
                string_length = *(longlong *)(best_match[5] + (longlong)iteration_count * 8);
                matched_entry = (longlong *)(string_length + 0x28);
                stack_var_94 = 0;
                resource_offset = *matched_entry;
                stack_ptr_70 = matched_entry;
                
                if (*(longlong *)(string_length + 0x30) - resource_offset >> 3 == 0) {
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
    resource_data = *(longlong **)(stack_var_80 + resource_offset);
    stack_ptr_78 = resource_data;
    stack_ptr_50 = resource_data;
    
    if (resource_data != (longlong *)0x0) {
        (**(code **)(*resource_data + 0x28))(resource_data);
    }
    
    stack_ptr_b8 = (longlong *)0x0;
    stack_ptr_b0 = (longlong *)0x0;
    stack_ptr_a8 = (longlong *)0x0;
    temp_flag = 3;
    process_resource_allocation(resource_data);
    
    if (stack_ptr_b0 < stack_ptr_a8) {
        *stack_ptr_b0 = (longlong)resource_data;
        resource_entry = stack_ptr_b0;
    }
    else {
        resource_offset = (longlong)stack_ptr_b0 - (longlong)stack_ptr_b8 >> 3;
        if (resource_offset == 0) {
            resource_offset = 1;
LAB_18020ceb6:
            resource_entry = (longlong *)allocate_resource_memory(_DAT_180c8ed18);
        }
        else {
            resource_offset = resource_offset * 2;
            if (resource_offset != 0) goto LAB_18020ceb6;
            resource_entry = (longlong *)0x0;
        }
        
        if (stack_ptr_b8 != stack_ptr_b0) {
            // 警告：子程序不返回
            memmove(resource_entry, stack_ptr_b8, (longlong)stack_ptr_b0 - (longlong)stack_ptr_b8);
        }
        
        *resource_entry = (longlong)resource_data;
        if (stack_ptr_b8 != (longlong *)0x0) {
            // 警告：子程序不返回
            trigger_resource_cleanup_error();
        }
        
        stack_ptr_a8 = resource_entry + resource_offset;
        stack_ptr_b8 = resource_entry;
    }
    
    stack_ptr_b0 = resource_entry + 1;
    stack_var_98 = 0;
    
    if ((longlong)stack_ptr_b0 - (longlong)stack_ptr_b8 >> 3 != 0) {
        stack_var_88 = 0;
        do {
            string_length = *result_buffer;
            if (result_buffer[1] - string_length >> 5 != 0) {
                resource_offset = *(longlong *)(stack_var_88 + (longlong)stack_ptr_b8) + 400;
                compare_length = allocate_resource_memory(_DAT_180c8ed18, 0x78,
                               *(undefined1 *)
                                (*(longlong *)(stack_var_88 + (longlong)stack_ptr_b8) + 0x1b8));
                stack_ptr_48 = (undefined8 *)(compare_length + 0x20);
                *stack_ptr_48 = &RESOURCE_CLEANUP_POOL;
                *(undefined8 *)(compare_length + 0x28) = 0;
                *(undefined4 *)(compare_length + 0x30) = 0;
                *stack_ptr_48 = &RESOURCE_HANDLER_TABLE;
                *(undefined1 **)(compare_length + 0x28) = (undefined1 *)(compare_length + 0x38);
                *(undefined4 *)(compare_length + 0x30) = 0;
                *(undefined1 *)(compare_length + 0x38) = 0;
                *(undefined4 *)(compare_length + 0x30) = *(undefined4 *)(string_length + 0x10);
                pattern_ptr = &DAT_18098bc73;
                
                if (*(undefined **)(string_length + 8) != (undefined *)0x0) {
                    pattern_ptr = *(undefined **)(string_length + 8);
                }
                
                stack_ptr_60 = stack_ptr_48;
                strcpy_s(*(undefined8 *)(compare_length + 0x28), 0x40, pattern_ptr);
                stack_ptr_60 = (undefined8 *)compare_length;
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
                compare_length = *(longlong *)(compare_length + 0x28) - (longlong)string_ptr;
                goto LAB_18020d030;
            }
            
            stack_var_98 = stack_var_98 + 1;
            stack_var_88 = stack_var_88 + 8;
            resource_data = stack_ptr_78;
            string_length = stack_var_80;
            matched_entry = stack_ptr_70;
        } while ((ulonglong)(longlong)stack_var_98 <
                 (ulonglong)((longlong)stack_ptr_b0 - (longlong)stack_ptr_b8 >> 3));
    }
    
    if (stack_ptr_b8 != (longlong *)0x0) {
        // 警告：子程序不返回
        trigger_resource_cleanup_error();
    }
    
    if (resource_data != (longlong *)0x0) {
        (**(code **)(*resource_data + 0x38))(resource_data);
    }
    
    stack_var_94 = stack_var_94 + 1;
    stack_var_80 = string_length + 8;
    resource_offset = *matched_entry;
    iteration_count = stack_var_90;
    
    if ((ulonglong)(matched_entry[1] - resource_offset >> 3) <= (ulonglong)(longlong)stack_var_94) {
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
// 原始实现：void FUN_18020d160(longlong param_1)
void execute_resource_cleanup(longlong resource_context)
{
    int resource_id;
    longlong *resource_ptr;
    longlong *temp_ptr;
    longlong cleanup_handler;
    longlong *iterator_ptr;
    longlong manager_ptr;
    uint cleanup_index;
    ulonglong loop_counter;
    ulonglong cleanup_offset;
    ulonglong array_index;
    longlong *stack_ptr_38;
    longlong *stack_ptr_30;
    undefined8 cleanup_flag;
    undefined4 cleanup_status;
    
    cleanup_offset = 0;
    stack_ptr_38 = (longlong *)0x0;
    stack_ptr_30 = (longlong *)0x0;
    cleanup_flag = 0;
    cleanup_status = 3;
    
    // 初始化资源清理上下文
    initialize_cleanup_context(&stack_ptr_38, 0, *(undefined8 *)(resource_context + 0x200), 
                               *(undefined8 *)(resource_context + 0x208));
    loop_counter = cleanup_offset;
    array_index = cleanup_offset;
    
    // 处理资源数组中的每个项目
    if (*(longlong *)(resource_context + 0x1c8) - *(longlong *)(resource_context + 0x1c0) >> 3 != 0) {
        do {
            process_resource_item(*(undefined8 *)(array_index + *(longlong *)(resource_context + 0x1c0)), 
                                   &stack_ptr_38);
            cleanup_index = (int)loop_counter + 1;
            loop_counter = (ulonglong)cleanup_index;
            array_index = array_index + 8;
        } while ((ulonglong)(longlong)(int)cleanup_index <
                 (ulonglong)(*(longlong *)(resource_context + 0x1c8) - *(longlong *)(resource_context + 0x1c0) >> 3));
    }
    
    manager_ptr = _DAT_180c8f008;
    loop_counter = cleanup_offset;
    resource_ptr = stack_ptr_38;
    temp_ptr = stack_ptr_30;
    
    // 执行实际的清理操作
    if ((longlong)stack_ptr_30 - (longlong)stack_ptr_38 >> 3 != 0) {
        do {
            cleanup_handler = _DAT_180c8a9c0;
            if (**(char **)(*(longlong *)(loop_counter + (longlong)stack_ptr_38) + 0x10) != '\0') {
                resource_id = *(int *)(*(longlong *)(loop_counter + (longlong)stack_ptr_38) + 0x50);
                if ((resource_id != 0) && (manager_ptr != 0)) {
                    (**(code **)(manager_ptr + 0x30))(resource_id);
                }
                (**(code **)(cleanup_handler + 0x200))(resource_id);
                manager_ptr = _DAT_180c8f008;
                if ((resource_id != 0) && (_DAT_180c8f008 != 0)) {
                    (**(code **)(_DAT_180c8f008 + 0x18))(resource_id);
                    manager_ptr = _DAT_180c8f008;
                }
            }
            
            cleanup_index = (int)cleanup_offset + 1;
            cleanup_offset = (ulonglong)cleanup_index;
            loop_counter = loop_counter + 8;
            resource_ptr = stack_ptr_38;
            temp_ptr = stack_ptr_30;
        } while ((ulonglong)(longlong)(int)cleanup_index <
                 (ulonglong)((longlong)stack_ptr_30 - (longlong)stack_ptr_38 >> 3));
    }
    
    // 清理栈上的资源
    for (; iterator_ptr = stack_ptr_30, resource_ptr != stack_ptr_30; resource_ptr = resource_ptr + 1) {
        stack_ptr_30 = temp_ptr;
        if ((longlong *)*resource_ptr != (longlong *)0x0) {
            (**(code **)(*(longlong *)*resource_ptr + 0x38))();
        }
        temp_ptr = stack_ptr_30;
        stack_ptr_30 = iterator_ptr;
    }
    
    if (stack_ptr_38 == (longlong *)0x0) {
        return;
    }
    
    stack_ptr_30 = temp_ptr;
    // 警告：子程序不返回
    trigger_resource_cleanup_error();
}

// 函数：释放资源内存
// 原始实现：void FUN_18020d310(longlong param_1)
void release_resource_memory(longlong resource_handle)
{
    int resource_id;
    longlong *resource_ptr;
    longlong *temp_ptr;
    longlong release_handler;
    longlong *iterator_ptr;
    longlong manager_ptr;
    uint release_index;
    ulonglong loop_counter;
    ulonglong release_offset;
    ulonglong array_index;
    longlong *stack_ptr_38;
    longlong *stack_ptr_30;
    undefined8 release_flag;
    undefined4 release_status;
    
    release_offset = 0;
    stack_ptr_38 = (longlong *)0x0;
    stack_ptr_30 = (longlong *)0x0;
    release_flag = 0;
    release_status = 3;
    
    // 初始化资源释放上下文
    initialize_release_context(&stack_ptr_38, 0, *(undefined8 *)(resource_handle + 0x200), 
                              *(undefined8 *)(resource_handle + 0x208));
    loop_counter = release_offset;
    array_index = release_offset;
    
    // 处理资源数组中的每个项目
    if (*(longlong *)(resource_handle + 0x1c8) - *(longlong *)(resource_handle + 0x1c0) >> 3 != 0) {
        do {
            process_resource_release(*(undefined8 *)(array_index + *(longlong *)(resource_handle + 0x1c0)), 
                                     &stack_ptr_38);
            release_index = (int)loop_counter + 1;
            loop_counter = (ulonglong)release_index;
            array_index = array_index + 8;
        } while ((ulonglong)(longlong)(int)release_index <
                 (ulonglong)(*(longlong *)(resource_handle + 0x1c8) - *(longlong *)(resource_handle + 0x1c0) >> 3));
    }
    
    manager_ptr = _DAT_180c8f008;
    loop_counter = release_offset;
    resource_ptr = stack_ptr_38;
    temp_ptr = stack_ptr_30;
    
    // 执行实际的释放操作
    if ((longlong)stack_ptr_30 - (longlong)stack_ptr_38 >> 3 != 0) {
        do {
            release_handler = _DAT_180c8a9c0;
            if (**(char **)(*(longlong *)(loop_counter + (longlong)stack_ptr_38) + 0x10) != '\0') {
                resource_id = *(int *)(*(longlong *)(loop_counter + (longlong)stack_ptr_38) + 0x50);
                if ((resource_id != 0) && (manager_ptr != 0)) {
                    (**(code **)(manager_ptr + 0x30))(resource_id);
                }
                (**(code **)(release_handler + 0x178))(resource_id);
                manager_ptr = _DAT_180c8f008;
                if ((resource_id != 0) && (_DAT_180c8f008 != 0)) {
                    (**(code **)(_DAT_180c8f008 + 0x18))(resource_id);
                    manager_ptr = _DAT_180c8f008;
                }
            }
            
            release_index = (int)release_offset + 1;
            release_offset = (ulonglong)release_index;
            loop_counter = loop_counter + 8;
            resource_ptr = stack_ptr_38;
            temp_ptr = stack_ptr_30;
        } while ((ulonglong)(longlong)(int)release_index <
                 (ulonglong)((longlong)stack_ptr_30 - (longlong)stack_ptr_38 >> 3));
    }
    
    // 清理栈上的资源
    for (; iterator_ptr = stack_ptr_30, resource_ptr != stack_ptr_30; resource_ptr = resource_ptr + 1) {
        stack_ptr_30 = temp_ptr;
        if ((longlong *)*resource_ptr != (longlong *)0x0) {
            (**(code **)(*(longlong *)*resource_ptr + 0x38))();
        }
        temp_ptr = stack_ptr_30;
        stack_ptr_30 = iterator_ptr;
    }
    
    if (stack_ptr_38 == (longlong *)0x0) {
        return;
    }
    
    stack_ptr_30 = temp_ptr;
    // 警告：子程序不返回
    trigger_resource_cleanup_error();
}

// 函数：批量处理资源操作
// 原始实现：void FUN_18020d4c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void batch_process_resources(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4)
{
    undefined8 resource_item;
    ulonglong item_count;
    longlong temp_offset;
    undefined8 *resource_ptr;
    int process_count;
    int batch_index;
    undefined8 *batch_buffer;
    undefined4 batch_flag;
    undefined8 *stack_ptr_78;
    undefined8 *stack_ptr_70;
    undefined8 *stack_ptr_68;
    undefined4 stack_status;
    undefined8 *stack_ptr_58;
    longlong stack_offset;
    undefined8 stack_flag;
    undefined4 stack_flag_40;
    
    stack_ptr_58 = (undefined8 *)0x0;
    stack_offset = 0;
    stack_flag = 0;
    stack_flag_40 = 3;
    
    // 初始化批量处理
    initialize_batch_processing(_DAT_180c868e8, &stack_ptr_58, param_3, param_4, 0, 0xfffffffffffffffe);
    batch_index = 0;
    item_count = stack_offset - (longlong)stack_ptr_58 >> 3;
    resource_ptr = stack_ptr_58;
    
    // 处理每个资源项
    if (item_count != 0) {
        do {
            resource_item = *resource_ptr;
            stack_ptr_78 = (undefined8 *)0x0;
            stack_ptr_70 = (undefined8 *)0x0;
            stack_ptr_68 = (undefined8 *)0x0;
            stack_status = 3;
            batch_flag = 1;
            process_resource_allocation(resource_item, &stack_ptr_78);
            
            if (stack_ptr_70 < stack_ptr_68) {
                *stack_ptr_70 = resource_item;
                resource_ptr = stack_ptr_70;
            }
            else {
                temp_offset = (longlong)stack_ptr_70 - (longlong)stack_ptr_78 >> 3;
                if (temp_offset == 0) {
                    temp_offset = 1;
LAB_18020d5b5:
                    resource_ptr = (undefined8 *)
                            allocate_batch_memory(_DAT_180c8ed18, temp_offset * 8, (char)stack_status, param_4, batch_flag);
                }
                else {
                    temp_offset = temp_offset * 2;
                    if (temp_offset != 0) goto LAB_18020d5b5;
                    resource_ptr = (undefined8 *)0x0;
                }
                
                if (stack_ptr_78 != stack_ptr_70) {
                    // 警告：子程序不返回
                    memmove(resource_ptr, stack_ptr_78, (longlong)stack_ptr_70 - (longlong)stack_ptr_78);
                }
                
                *resource_ptr = resource_item;
                if (stack_ptr_78 != (undefined8 *)0x0) {
                    // 警告：子程序不返回
                    trigger_resource_cleanup_error();
                }
                
                stack_ptr_68 = resource_ptr + temp_offset;
                stack_ptr_78 = resource_ptr;
            }
            
            stack_ptr_70 = resource_ptr + 1;
            process_count = 0;
            
            if ((longlong)stack_ptr_70 - (longlong)stack_ptr_78 >> 3 != 0) {
                temp_offset = 0;
                do {
                    process_single_resource(*(undefined8 *)(temp_offset + (longlong)stack_ptr_78));
                    process_count = process_count + 1;
                    temp_offset = temp_offset + 8;
                } while ((ulonglong)(longlong)process_count <
                         (ulonglong)((longlong)stack_ptr_70 - (longlong)stack_ptr_78 >> 3));
            }
            
            if (stack_ptr_78 != (undefined8 *)0x0) {
                // 警告：子程序不返回
                trigger_resource_cleanup_error();
            }
            
            batch_index = batch_index + 1;
            resource_ptr = resource_ptr + 1;
        } while ((ulonglong)(longlong)batch_index < item_count);
    }
    
    if (stack_ptr_58 == (undefined8 *)0x0) {
        return;
    }
    
    // 警告：子程序不返回
    trigger_resource_cleanup_error();
}

// 函数：在资源表中查找指定项
// 原始实现：undefined8 * FUN_18020d6c0(undefined8 *param_1,int *param_2,undefined8 *param_3)
undefined8 *find_resource_in_table(undefined8 *resource_table, int *search_key, undefined8 *param_3)
{
    undefined8 *current_node;
    longlong *result_ptr;
    undefined8 *best_match;
    undefined1 search_buffer[32];
    
    current_node = (undefined8 *)resource_table[2];
    best_match = resource_table;
    
    // 在二叉树中查找最佳匹配节点
    if (current_node != (undefined8 *)0x0) {
        param_3 = resource_table;
        do {
            if (*(int *)(current_node + 4) < *search_key) {
                current_node = (undefined8 *)*current_node;
            }
            else {
                param_3 = current_node;
                current_node = (undefined8 *)current_node[1];
            }
            best_match = param_3;
        } while (current_node != (undefined8 *)0x0);
    }
    
    // 如果找到匹配项，返回结果
    if ((best_match != resource_table) && (*(int *)(best_match + 4) <= *search_key)) {
        return best_match + 5;
    }
    
    // 如果没有找到，创建新项
    result_ptr = (longlong *)create_resource_entry(resource_table, search_buffer, param_3, best_match, search_key);
    return (undefined8 *)(*result_ptr + 0x28);
}

// 函数：创建资源表条目
// 原始实现：undefined8 *FUN_18020d730(longlong *param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4, int *param_5)
undefined8 *create_resource_entry(longlong *resource_table, undefined8 *param_2, undefined8 param_3, 
                                longlong *insert_point, int *entry_key)
{
    bool insert_before;
    int key_value;
    longlong *current_node;
    longlong *next_node;
    longlong new_entry;
    undefined8 insert_flag;
    
    current_node = (longlong *)*resource_table;
    
    // 检查插入位置
    if ((insert_point == current_node) || (insert_point == resource_table)) {
        if ((resource_table[4] != 0) && (insert_point = current_node, *(int *)(current_node + 4) < *entry_key)) {
LAB_18020d79f:
            insert_flag = 0;
            goto LAB_18020d7a2;
        }
    }
    else {
        current_node = (longlong *)func_0x00018066bd70(insert_point);
        if (((int)insert_point[4] < *entry_key) && (*entry_key < (int)current_node[4])) {
            if (*insert_point == 0) goto LAB_18020d79f;
            insert_flag = 1;
            insert_point = current_node;
LAB_18020d7a2:
            if (insert_point != (longlong *)0x0) {
                insert_resource_entry(resource_table, param_2, insert_point, insert_flag, entry_key);
                return param_2;
            }
        }
    }
    
    // 查找合适的插入位置
    insert_before = true;
    current_node = resource_table;
    if ((longlong *)resource_table[2] != (longlong *)0x0) {
        next_node = (longlong *)resource_table[2];
        do {
            current_node = next_node;
            insert_before = *entry_key < (int)current_node[4];
            if (*entry_key < (int)current_node[4]) {
                next_node = (longlong *)current_node[1];
            }
            else {
                next_node = (longlong *)*current_node;
            }
        } while (next_node != (longlong *)0x0);
    }
    
    next_node = current_node;
    if (insert_before) {
        if (current_node == (longlong *)resource_table[1]) {
            key_value = *entry_key;
            goto LAB_18020d80a;
        }
        next_node = (longlong *)func_0x00018066b9a0(current_node);
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
    new_entry = allocate_resource_memory(_DAT_180c8ed18, 0x48, (char)resource_table[5]);
    *(int *)(new_entry + 0x20) = *entry_key;
    *(undefined8 *)(new_entry + 0x28) = 0;
    *(undefined8 *)(new_entry + 0x30) = 0;
    *(undefined8 *)(new_entry + 0x38) = 0;
    *(undefined4 *)(new_entry + 0x40) = 3;
    
    // 警告：子程序不返回
    link_resource_entry(new_entry, current_node, resource_table, insert_flag);
}

// 函数：扩展资源表容量
// 原始实现：void FUN_18020d8a0(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)
void expand_resource_table(longlong *resource_table, undefined8 *new_entry, undefined8 param_3, undefined8 param_4)
{
    undefined8 *table_end;
    longlong *current_ptr;
    undefined8 *table_start;
    undefined8 *copy_ptr;
    longlong copy_offset;
    undefined8 *new_table;
    longlong table_size;
    longlong old_capacity;
    longlong new_capacity;
    undefined8 *table_ptr;
    
    table_ptr = (undefined8 *)resource_table[1];
    table_start = (undefined8 *)*resource_table;
    old_capacity = (longlong)table_ptr - (longlong)table_start >> 5;
    new_table = (undefined8 *)0x0;
    
    if (old_capacity == 0) {
        old_capacity = 1;
    }
    else {
        old_capacity = old_capacity * 2;
        if (old_capacity == 0) goto LAB_18020d911;
    }
    
    new_table = (undefined8 *)
            allocate_table_memory(_DAT_180c8ed18, old_capacity << 5, (char)resource_table[3], param_4, 0xfffffffffffffffe);
    table_ptr = (undefined8 *)resource_table[1];
    table_start = (undefined8 *)*resource_table;
    
LAB_18020d911:
    copy_ptr = new_table;
    
    // 复制现有数据到新表
    if (table_start != table_ptr) {
        copy_offset = (longlong)new_table - (longlong)table_start;
        table_start = table_start + 2;
        do {
            *copy_ptr = table_start[-2];
            *(undefined4 *)(copy_offset + -8 + (longlong)table_start) = *(undefined4 *)(table_start + -1);
            *(undefined8 *)(copy_offset + (longlong)table_start) = *table_start;
            *table_start = 0;
            *(undefined8 *)(copy_offset + 8 + (longlong)table_start) = table_start[1];
            copy_ptr = copy_ptr + 4;
            table_end = table_start + 2;
            table_start = table_start + 4;
        } while (table_end != table_ptr);
    }
    
    // 添加新条目
    *copy_ptr = *new_entry;
    *(undefined4 *)(copy_ptr + 1) = *(undefined4 *)(new_entry + 1);
    current_ptr = (longlong *)new_entry[2];
    copy_ptr[2] = current_ptr;
    
    if (current_ptr != (longlong *)0x0) {
        (**(code **)(*current_ptr + 0x28))();
    }
    
    copy_ptr[3] = new_entry[3];
    table_size = resource_table[1];
    old_capacity = *resource_table;
    
    // 清理旧表数据
    if (old_capacity != table_size) {
        do {
            if (*(longlong **)(old_capacity + 0x10) != (longlong *)0x0) {
                (**(code **)(**(longlong **)(old_capacity + 0x10) + 0x38))();
            }
            old_capacity = old_capacity + 0x20;
        } while (old_capacity != table_size);
        old_capacity = *resource_table;
    }
    
    if (old_capacity == 0) {
        *resource_table = (longlong)new_table;
        resource_table[1] = (longlong)(copy_ptr + 4);
        resource_table[2] = (longlong)(new_table + old_capacity * 4);
        return;
    }
    
    // 警告：子程序不返回
    trigger_resource_cleanup_error(old_capacity);
}

// 函数：插入资源表条目
// 原始实现：void FUN_18020da10(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4, int *param_5)
void insert_resource_entry(longlong resource_table, undefined8 param_2, longlong insert_point, 
                          undefined8 insert_flag, int *entry_key)
{
    longlong new_entry;
    undefined4 insert_before;
    
    if ((((char)insert_flag == '\0') && (insert_point != resource_table)) && 
        (*(int *)(insert_point + 0x20) <= *entry_key)) {
        insert_before = 1;
    }
    else {
        insert_before = 0;
    }
    
    // 创建新条目
    new_entry = allocate_resource_memory(_DAT_180c8ed18, 0x48, *(undefined1 *)(resource_table + 0x28), 
                                        insert_flag, 0xfffffffffffffffe);
    *(int *)(new_entry + 0x20) = *entry_key;
    *(undefined8 *)(new_entry + 0x28) = 0;
    *(undefined8 *)(new_entry + 0x30) = 0;
    *(undefined8 *)(new_entry + 0x38) = 0;
    *(undefined4 *)(new_entry + 0x40) = 3;
    
    // 警告：子程序不返回
    link_resource_entry(new_entry, insert_point, resource_table, insert_before);
}

// 函数：处理资源索引范围
// 原始实现：void FUN_18020dae0(uint param_1,int param_2,longlong *param_3)
void process_resource_index_range(uint start_index, int end_index, longlong *resource_manager)
{
    longlong hash_offset;
    longlong *resource_entry;
    ulonglong hash_index;
    uint current_index;
    ulonglong page_index;
    undefined8 process_flag;
    undefined8 stack_temp;
    undefined1 stack_flag;
    undefined8 process_data;
    longlong *stack_ptr;
    undefined8 stack_flag_28;
    undefined2 stack_flag_20;
    
    if ((int)start_index < end_index) {
        page_index = (ulonglong)start_index;
        do {
            hash_index = (ulonglong)((uint)page_index & 0xfff);
            hash_offset = (page_index >> 0xc) * 8;
            resource_entry = *(longlong **)(*(longlong *)(*resource_manager + 8 + hash_offset) + hash_index * 0x30);
            process_flag = 0xffffffffffffffff;
            stack_temp = 0;
            stack_flag = 0;
            stack_ptr = resource_entry;
            
            if (resource_entry != (longlong *)0x0) {
                (**(code **)(*resource_entry + 0x28))(resource_entry);
            }
            
            stack_flag_28 = 0;
            stack_flag_20 = 1;
            *(byte *)(resource_entry + 0x5d) = *(byte *)(resource_entry + 0x5d) | 0x80;
            process_data = 0;
            
            // 处理资源项
            process_resource_data(&process_flag,
                                 *(undefined8 *)(*(longlong *)(*resource_manager + 8 + hash_offset) + 8 + hash_index * 0x30));
            (**(code **)(*resource_entry + 0x38))(resource_entry);
            current_index = (uint)page_index + 1;
            page_index = (ulonglong)current_index;
        } while ((int)current_index < end_index);
    }
    
    return;
}

// 函数：处理资源块范围
// 原始实现：void FUN_18020dc20(int param_1,int param_2,longlong *param_3)
void process_resource_block_range(int start_block, int end_block, longlong *resource_manager)
{
    undefined8 *resource_table;
    longlong block_offset;
    longlong block_count;
    undefined8 process_flag;
    undefined8 stack_flag_48;
    undefined8 stack_flag_40;
    undefined1 stack_flag_38;
    undefined8 stack_flag_30;
    longlong *resource_entry;
    undefined8 stack_flag_18;
    undefined2 stack_flag_10;
    
    process_flag = 0xfffffffffffffffe;
    resource_table = (undefined8 *)*resource_manager;
    block_offset = (longlong)start_block;
    
    if (block_offset < end_block) {
        block_count = block_offset << 5;
        block_offset = end_block - block_offset;
        do {
            resource_entry = *(longlong **)(block_count + 0x10 + *(longlong *)*resource_table);
            stack_flag_48 = 0xffffffffffffffff;
            stack_flag_40 = 0;
            stack_flag_38 = 0;
            
            if (resource_entry != (longlong *)0x0) {
                (**(code **)(*resource_entry + 0x28))();
            }
            
            stack_flag_18 = 0;
            stack_flag_10 = 1;
            *(byte *)(resource_entry + 0x5d) = *(byte *)(resource_entry + 0x5d) | 0x80;
            stack_flag_30 = 0;
            
            // 处理资源块
            process_resource_block(&stack_flag_48, *(undefined8 *)(*(longlong *)*resource_table + block_count), 
                                   resource_table[1], *(undefined8 *)(*(longlong *)*resource_table + 0x18 + block_count), 
                                   0, resource_table[2], process_flag);
            
            if (resource_entry != (longlong *)0x0) {
                (**(code **)(*resource_entry + 0x38))();
            }
            
            block_count = block_count + 0x20;
            block_offset = block_offset + -1;
        } while (block_offset != 0);
    }
    
    return;
}

// 函数：处理资源管理器操作
// 原始实现：longlong FUN_18020dd10(longlong *param_1,longlong *param_2,int param_3)
longlong process_manager_operation(longlong *manager_ptr, longlong *data_ptr, int operation_type)
{
    undefined8 *resource_data;
    undefined8 temp_value;
    undefined8 *new_resource;
    
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
            new_resource = (undefined8 *)allocate_resource_structure(_DAT_180c8ed18, 0x18, 8, DAT_180bf65bc, 0xfffffffffffffffe);
            resource_data = (undefined8 *)*data_ptr;
            temp_value = resource_data[1];
            *new_resource = *resource_data;
            new_resource[1] = temp_value;
            new_resource[2] = resource_data[2];
            *manager_ptr = (longlong)new_resource;
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
// 原始实现：void FUN_18020ddf0(undefined8 param_1,longlong param_2)
void format_resource_info_output(undefined8 output_handle, longlong resource_info)
{
    longlong string_length;
    undefined *format_ptr;
    undefined1 output_buffer[32];
    undefined1 *output_ptr;
    undefined4 output_length;
    undefined4 output_length_808;
    undefined1 *output_buffer_7f8;
    undefined **output_ptr_7f0;
    undefined8 output_flag_7e8;
    int output_var_7dc;
    undefined *output_ptr_7d8;
    undefined1 temp_buffer_7d0[8];
    undefined1 output_buffer_7c8[152];
    undefined1 output_buffer_730[104];
    undefined1 output_buffer_6c8[16];
    undefined *output_ptr_6b8;
    undefined1 *output_ptr_6b0;
    undefined4 output_length_6a8;
    undefined1 output_buffer_6a0[264];
    undefined *output_ptr_598;
    undefined1 *output_ptr_590;
    undefined4 output_length_588;
    undefined1 output_buffer_580[264];
    undefined *output_array[68];
    undefined1 output_buffer_258[560];
    ulonglong security_cookie;
    
    output_flag_7e8 = 0xfffffffffffffffe;
    security_cookie = _DAT_180bf00a8 ^ (ulonglong)output_buffer;
    output_length_808 = 0;
    output_ptr_6b8 = &UNK_1809feda8;
    output_ptr_6b0 = output_buffer_6a0;
    output_length_6a8 = 0;
    output_buffer_6a0[0] = 0;
    
    // 处理资源信息字符串
    if (resource_info != 0) {
        string_length = -1;
        do {
            string_length = string_length + 1;
        } while (*(char *)(resource_info + string_length) != '\0');
        output_length_6a8 = (undefined4)string_length;
        strcpy_s(output_buffer_6a0, 0x100, resource_info);
    }
    
    string_length = format_output_data(output_array, &output_ptr_6b8);
    output_ptr_598 = &UNK_1809feda8;
    output_ptr_590 = output_buffer_580;
    output_buffer_580[0] = 0;
    output_length_588 = *(undefined4 *)(string_length + 0x10);
    format_ptr = &DAT_18098bc73;
    
    if (*(undefined **)(string_length + 8) != (undefined *)0x0) {
        format_ptr = *(undefined **)(string_length + 8);
    }
    
    strcpy_s(output_buffer_580, 0x100, format_ptr);
    output_array[0] = &UNK_18098bcb0;
    output_ptr_6b8 = &UNK_18098bcb0;
    output_length = 0x118;
    output_ptr = output_buffer_258;
    
    // 转换为宽字符
    MultiByteToWideChar(0xfde9, 0, output_ptr_590, 0xffffffff);
    output_ptr_7d8 = &UNK_180a01620;
    initialize_output_stream(output_buffer_730);
    output_length_808 = 1;
    
    // 设置输出流
    setup_output_stream(&output_ptr_7d8, temp_buffer_7d0, 0, 0);
    *(undefined **)(temp_buffer_7d0 + (longlong)*(int *)(output_ptr_7d8 + 4) + -8) = &UNK_180a01630;
    *(int *)((longlong)&output_var_7dc + (longlong)*(int *)(output_ptr_7d8 + 4)) =
         *(int *)(output_ptr_7d8 + 4) + -0xa8;
    format_output_string(temp_buffer_7d0);
    string_length = write_output_data(temp_buffer_7d0, output_buffer_258, 0x12);
    
    if (string_length == 0) {
        set_output_stream_state(temp_buffer_7d0 + (longlong)*(int *)(output_ptr_7d8 + 4) + -8, 2);
    }
    
    output_ptr_7f0 = &output_ptr_7d8;
    output_buffer_7f8 = (undefined1 *)0x0;
    output_ptr = (undefined1 *)((ulonglong)output_ptr & 0xffffffff00000000);
    format_resource_name(output_buffer_6c8, &output_buffer_7f8, output_handle, 0);
    string_length = flush_output_stream(temp_buffer_7d0);
    
    if (string_length == 0) {
        set_output_stream_state(temp_buffer_7d0 + (longlong)*(int *)(output_ptr_7d8 + 4) + -8, 2);
    }
    
    output_buffer_7f8 = output_buffer_730;
    *(undefined **)(temp_buffer_7d0 + (longlong)*(int *)(output_ptr_7d8 + 4) + -8) = &UNK_180a01630;
    *(int *)((longlong)&output_var_7dc + (longlong)*(int *)(output_ptr_7d8 + 4)) =
         *(int *)(output_ptr_7d8 + 4) + -0xa8;
    finalize_output_stream(temp_buffer_7d0);
    cleanup_output_stream(output_buffer_7c8);
    cleanup_input_stream(output_buffer_730);
    output_ptr_598 = &UNK_18098bcb0;
    
    // 警告：子程序不返回
    cleanup_security_cookie(security_cookie ^ (ulonglong)output_buffer);
}

/*
 * 全局变量和常量定义
 * 
 * 简化实现说明：
 * - UNK_180a3c3e0 -> EMPTY_RESOURCE_POOL (空资源池)
 * - UNK_18098bcb0 -> RESOURCE_CLEANUP_POOL (资源清理池)
 * - UNK_1809fcc58 -> RESOURCE_HANDLER_TABLE (资源处理表)
 * - DAT_18098bc73 -> EMPTY_STRING_BUFFER (空字符串缓冲区)
 * - _DAT_180c868e8 -> GLOBAL_RESOURCE_TABLE (全局资源表)
 * - _DAT_180c86870 -> GLOBAL_RESOURCE_FLAG (全局资源标志)
 * - _DAT_180c8f008 -> RESOURCE_MANAGER_PTR (资源管理器指针)
 * - _DAT_180c8a9c0 -> RESOURCE_CLEANUP_HANDLER (资源清理处理器)
 * - _DAT_180c8ed18 -> MEMORY_ALLOCATOR (内存分配器)
 * - _DAT_180bf00a8 -> SECURITY_COOKIE (安全cookie)
 * - DAT_180bf65bc -> DEFAULT_RESOURCE_DATA (默认资源数据)
 * 
 * 函数名称映射：
 * - FUN_18020d310 -> cleanup_resource_item (清理资源项)
 * - func_0x00018066bd70 -> get_next_resource_entry (获取下一个资源条目)
 * - FUN_1800b8500 -> deallocate_resource_memory (释放资源内存)
 * - FUN_180057830 -> free_resource_structure (释放资源结构)
 * - FUN_18064e900 -> trigger_resource_cleanup_error (触发资源清理错误)
 * - FUN_180179f00 -> process_resource_cleanup (处理资源清理)
 * - FUN_1806279c0 -> initialize_search_context (初始化搜索上下文)
 * - FUN_180141820 -> calculate_search_hash (计算搜索哈希)
 * - FUN_1802e8c60 -> process_resource_allocation (处理资源分配)
 * - FUN_18062b420 -> allocate_resource_memory (分配资源内存)
 * - FUN_1800590b0 -> process_resource_matching (处理资源匹配)
 * - FUN_18066bdc0 -> register_resource_match (注册资源匹配)
 * - FUN_18020b790 -> finalize_resource_search (完成资源搜索)
 * - FUN_1802f5440 -> initialize_cleanup_context (初始化清理上下文)
 * - FUN_1802f1890 -> process_resource_item (处理资源项)
 * - FUN_18020c8f0 -> initialize_batch_processing (初始化批量处理)
 * - FUN_1802f1930 -> process_single_resource (处理单个资源)
 * - FUN_18020da10 -> insert_resource_entry (插入资源条目)
 * - FUN_18062b1e0 -> allocate_resource_structure (分配资源结构)
 * - FUN_18020d8a0 -> expand_resource_table (扩展资源表)
 * - FUN_18066b9a0 -> get_previous_resource_entry (获取前一个资源条目)
 * - FUN_1803bb5f0 -> process_resource_data (处理资源数据)
 * - FUN_1803ba550 -> process_resource_block (处理资源块)
 * - FUN_180624440 -> format_output_data (格式化输出数据)
 * - FUN_1800a1310 -> format_resource_name (格式化资源名称)
 * - FUN_18009ec20 -> format_output_string (格式化输出字符串)
 * - FUN_18009ec80 -> write_output_data (写入输出数据)
 * - FUN_1800a19c0 -> flush_output_stream (刷新输出流)
 * - FUN_1808fc050 -> cleanup_security_cookie (清理安全cookie)
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