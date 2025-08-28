#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part047.c - 核心引擎模块第47部分
// 包含6个函数，主要处理游戏对象管理、字符串比较和内存操作

/**
 * 处理游戏对象的状态更新和事件触发
 * @param game_context 游戏上下文指针
 * @param event_type 事件类型标志
 */
void process_game_object_updates(void* game_context, unsigned char event_type)
{
    void** object_table;
    longlong* object_array;
    char result_flag;
    int object_count;
    longlong* temp_ptr;
    longlong offset_value;
    longlong* iterator_ptr;
    longlong base_address;
    longlong* object_data;
    longlong data_value;
    longlong loop_counter;
    longlong object_limit;
    unsigned char* name_buffer;
    void* temp_void_ptr;
    void* name_ptr;
    void* default_name;
    longlong stack_value;
    unsigned char temp_stack_buffer[32];
    unsigned char stack_flag;
    int processed_count;
    longlong* stack_object_ptr;
    longlong stack_offset;
    void* stack_buffer_ptr;
    unsigned char* stack_name_ptr;
    unsigned int stack_name_length;
    unsigned longlong stack_hash_value;
    void* stack_temp_ptr;
    unsigned char* stack_string_ptr;
    unsigned int stack_string_length;
    unsigned longlong stack_string_hash;
    void* stack_buffer2_ptr;
    void* stack_buffer3_ptr;
    unsigned int stack_buffer_length;
    unsigned longlong stack_buffer_hash;
    unsigned int stack_temp_value;
    longlong stack_long_value;
    longlong stack_reserved;
    void* stack_reserved_ptr;
    longlong stack_data_value;
    unsigned int stack_data_length;
    unsigned longlong stack_data_hash;
    unsigned longlong reserved_space[3];
    unsigned longlong check_value;
    
    object_array = global_object_table;
    reserved_space[0] = 0xfffffffffffffffe;
    check_value = global_hash_seed ^ (unsigned longlong)temp_stack_buffer;
    loop_counter = 0;
    stack_object_ptr = global_object_table;
    processed_count = 0;
    object_count = (int)((global_object_table[2] - global_object_table[1]) / 0x60);
    object_limit = (longlong)object_count;
    stack_flag = event_type;
    stack_long_value = object_limit;
    
    // 第一个循环：处理对象状态更新
    if (0 < object_count) {
        do {
            offset_value = object_array[1];
            object_count = *(int *)(offset_value + 0x5c + loop_counter);
            if ((object_count < 0) ||
                (data_value = *(longlong *)(*global_engine_base + 0x888),
                 (unsigned longlong)(*(longlong *)(*global_engine_base + 0x890) - data_value >> 5) <=
                 (unsigned longlong)(longlong)object_count)) {
                data_value = allocate_memory_block();
            }
            else {
                data_value = (longlong)object_count * 0x20 + data_value;
            }
            
            // 处理对象名称
            stack_temp_ptr = &global_string_buffer;
            stack_string_hash = 0;
            stack_string_ptr = (unsigned char*)0x0;
            stack_string_length = 0;
            initialize_string_buffer(&stack_temp_ptr, *(unsigned int*)(data_value + 0x10));
            
            if (*(int *)(data_value + 0x10) != 0) {
                // 警告：子函数不返回
                memcpy(stack_string_ptr, *(void**)(data_value + 8), *(int *)(data_value + 0x10) + 1);
            }
            
            if (*(longlong *)(data_value + 8) != 0) {
                stack_string_length = 0;
                if (stack_string_ptr != (unsigned char*)0x0) {
                    *stack_string_ptr = 0;
                }
                stack_string_hash = stack_string_hash & 0xffffffff;
            }
            
            // 构建对象路径
            stack_reserved_ptr = &global_string_buffer;
            stack_data_hash = 0;
            stack_data_value = 0;
            stack_data_length = 0;
            temp_void_ptr = *(void**)(offset_value + 0x28 + loop_counter);
            default_name = &default_object_name;
            if (temp_void_ptr != (void*)0x0) {
                default_name = temp_void_ptr;
            }
            
            name_ptr = &default_object_name;
            if (stack_string_ptr != (unsigned char*)0x0) {
                name_ptr = stack_string_ptr;
            }
            
            construct_object_path(&stack_reserved_ptr, &global_path_prefix, name_ptr, default_name);
            result_flag = validate_object_path(&stack_reserved_ptr);
            if (result_flag != '\0') {
                register_object_event(&stack_reserved_ptr);
            }
            
            stack_reserved_ptr = &global_string_buffer;
            if (stack_data_value != 0) {
                // 警告：子函数不返回
                cleanup_memory_management();
            }
            stack_data_value = 0;
            stack_data_hash = stack_data_hash & 0xffffffff00000000;
            stack_reserved_ptr = &global_cleanup_buffer;
            stack_temp_ptr = &global_string_buffer;
            
            if (stack_string_ptr != (unsigned char*)0x0) {
                // 警告：子函数不返回
                cleanup_memory_management();
            }
            stack_string_ptr = (unsigned char*)0x0;
            stack_string_hash = stack_string_hash & 0xffffffff00000000;
            stack_temp_ptr = &global_cleanup_buffer;
            loop_counter = loop_counter + 0x60;
            object_limit = object_limit + -1;
        } while (object_limit != 0);
    }
    
    // 第二个循环：触发对象事件
    loop_counter = stack_long_value;
    stack_temp_value = 0;
    if (0 < stack_long_value) {
        stack_reserved = 0;
        do {
            offset_value = stack_reserved;
            data_value = stack_reserved * 0x60;
            object_limit = object_array[1];
            object_count = *(int *)(object_limit + 0x5c + data_value);
            stack_offset = data_value;
            
            if ((object_count < 0) ||
                (base_address = *(longlong *)(*global_engine_base + 0x888),
                 (unsigned longlong)(*(longlong *)(*global_engine_base + 0x890) - base_address >> 5) <=
                 (unsigned longlong)(longlong)object_count)) {
                base_address = allocate_memory_block();
            }
            else {
                base_address = (longlong)object_count * 0x20 + base_address;
            }
            
            // 处理事件触发
            stack_buffer_ptr = &global_string_buffer;
            stack_buffer_hash = 0;
            stack_name_ptr = (unsigned char*)0x0;
            stack_name_length = 0;
            initialize_string_buffer(&stack_buffer_ptr, *(unsigned int*)(base_address + 0x10));
            
            if (*(int *)(base_address + 0x10) != 0) {
                // 警告：子函数不返回
                memcpy(stack_name_ptr, *(void**)(base_address + 8), *(int *)(base_address + 0x10) + 1);
            }
            
            if (*(longlong *)(base_address + 8) != 0) {
                stack_name_length = 0;
                if (stack_name_ptr != (unsigned char*)0x0) {
                    *stack_name_ptr = 0;
                }
                stack_buffer_hash = stack_buffer_hash & 0xffffffff;
            }
            
            // 触发对象回调
            stack_buffer2_ptr = &global_string_buffer;
            stack_buffer_hash = 0;
            stack_buffer3_ptr = (void*)0x0;
            stack_buffer_length = 0;
            temp_void_ptr = *(void**)(object_limit + 0x28 + data_value);
            default_name = &default_object_name;
            if (temp_void_ptr != (void*)0x0) {
                default_name = temp_void_ptr;
            }
            
            name_ptr = &default_object_name;
            if (stack_name_ptr != (unsigned char*)0x0) {
                name_ptr = stack_name_ptr;
            }
            
            trigger_object_callback(&stack_buffer2_ptr, &global_callback_prefix, name_ptr, default_name);
            result_flag = execute_callback_handler(&stack_buffer2_ptr);
            if (result_flag != '\0') {
                temp_void_ptr = (void**)*object_array;
                if (temp_void_ptr != (void**)0x0) {
                    ((void(**)(void*, void*))(*temp_void_ptr))(temp_void_ptr, &stack_buffer_ptr);
                }
                processed_count = processed_count + 1;
                reserved_space[1] = 0;
                reserved_space[2] = 0;
                reserved_space[3] = 0;
                stack_temp_value = 3;
                temp_void_ptr = &default_object_name;
                if (stack_buffer3_ptr != (void*)0x0) {
                    temp_void_ptr = stack_buffer3_ptr;
                }
                // 警告：子函数不返回
                log_object_event(global_event_logger, &global_event_target, temp_void_ptr);
            }
            
            stack_buffer2_ptr = &global_string_buffer;
            if (stack_buffer3_ptr != (void*)0x0) {
                // 警告：子函数不返回
                cleanup_memory_management();
            }
            stack_buffer3_ptr = (void*)0x0;
            stack_buffer_hash = stack_buffer_hash & 0xffffffff00000000;
            stack_buffer2_ptr = &global_cleanup_buffer;
            stack_buffer_ptr = &global_string_buffer;
            
            if (stack_name_ptr != (unsigned char*)0x0) {
                // 警告：子函数不返回
                cleanup_memory_management();
            }
            stack_name_ptr = (unsigned char*)0x0;
            stack_buffer_hash = stack_buffer_hash & 0xffffffff00000000;
            stack_buffer_ptr = &global_cleanup_buffer;
            stack_reserved = offset_value + 1;
        } while (stack_reserved < loop_counter);
        
        if (processed_count != 0) goto event_triggered;
    }
    
    finalize_object_processing(&global_finalization_target);
    
event_triggered:
    iterator_ptr = (longlong*)object_array[0x17];
    if (iterator_ptr != object_array + 0x16) {
        do {
            object_limit = 0;
            loop_counter = iterator_ptr[4];
            object_count = (int)(*(longlong*)(loop_counter + 0x188) - *(longlong*)(loop_counter + 0x180) >> 3);
            if (0 < object_count) {
                do {
                    object_array = *(longlong**)(*(longlong*)(loop_counter + 0x180) + object_limit * 8);
                    ((void(**)(void*))(*object_array + 0x60))(object_array);
                    temp_ptr = (longlong*)((void(**)(void*))(*object_array + 8))(object_array);
                    
                    // 检查对象类型标识符
                    if ((((((((*temp_ptr == 0x4c7adebd3eba3679 && (temp_ptr[1] == 0x335e32f621f13486)) ||
                            ((temp_ptr = (longlong*)((void(**)(void*))(*object_array + 8))(object_array),
                             *temp_ptr == 0x4f1969021db01393 && (temp_ptr[1] == 0x170783397ab3ba83)))) ||
                           ((temp_ptr = (longlong*)((void(**)(void*))(*object_array + 8))(object_array),
                            *temp_ptr == 0x4bea197ca08f8b97 && (temp_ptr[1] == 0x4e83ae6c84535bb9)))) ||
                          ((temp_ptr = (longlong*)((void(**)(void*))(*object_array + 8))(object_array),
                           *temp_ptr == 0x4432818ecab5ba7b && (temp_ptr[1] == -0x3f47266e1dfcc872)))) ||
                         ((((temp_ptr = (longlong*)((void(**)(void*))(*object_array + 8))(object_array),
                            *temp_ptr == 0x45bedd9a6de14d67 && (temp_ptr[1] == 0x51ddd8c381026394)) ||
                           ((temp_ptr = (longlong*)((void(**)(void*))(*object_array + 8))(object_array),
                            *temp_ptr == 0x4ef0785fcc373411 && (temp_ptr[1] == 0x3645b254cfd5a295)))) ||
                          ((temp_ptr = (longlong*)((void(**)(void*))(*object_array + 8))(object_array),
                           *temp_ptr == 0x4ff90344b46528df && (temp_ptr[1] == -0x3c033b29f31c0d80)))))) ||
                         ((temp_ptr = (longlong*)((void(**)(void*))(*object_array + 8))(object_array),
                          *temp_ptr == 0x45ddeabbc635a3d5 && (temp_ptr[1] == 0x136119e457aa3e88)))) &&
                        ((temp_void_ptr = (void**)object_array[4], temp_void_ptr != (void**)0x0 && (object_array[6] != -1))))
                    {
                        offset_value = runtime_cast_to_void(temp_void_ptr);
                        ((void(**)(void*, int))(*temp_void_ptr))(temp_void_ptr, 0);
                        if (offset_value != 0) {
                            // 警告：子函数不返回
                            cleanup_memory_management(offset_value);
                        }
                        object_array[4] = 0;
                    }
                    object_limit = object_limit + 1;
                } while (object_limit < object_count);
            }
            iterator_ptr = (longlong*)iterate_object_list(iterator_ptr);
        } while (iterator_ptr != stack_object_ptr + 0x16);
    }
    // 警告：子函数不返回
    log_object_event(global_event_logger, &global_event_finalizer);
}

/**
 * 比较对象名称字符串
 * @param object_ptr 对象指针
 * @return 比较结果，true表示匹配
 */
bool compare_object_names(longlong* object_ptr)
{
    byte char_diff;
    bool is_match;
    void** current_node;
    void** next_node;
    byte* name_ptr;
    uint char_value;
    longlong object_base;
    void** temp_node_ptr;
    int comparison_result;
    void** result_node;
    byte* stack_name_ptr;
    int stack_param;
    
    object_base = *object_ptr;
    temp_node_ptr = (void**)(object_base + 0x48);
    initialize_string_comparator();
    current_node = *(void***)(object_base + 0x58);
    result_node = temp_node_ptr;
    
    if (current_node != (void**)0x0) {
        do {
            if (stack_param == 0) {
                is_match = false;
                next_node = (void**)current_node[1];
            }
            else {
                if (*(int*)(current_node + 6) == 0) {
                    is_match = true;
                }
                else {
                    name_ptr = stack_name_ptr;
                    do {
                        char_value = (uint)name_ptr[current_node[5] - (longlong)stack_name_ptr];
                        comparison_result = *name_ptr - char_value;
                        if (*name_ptr != char_value) break;
                        name_ptr = name_ptr + 1;
                    } while (char_value != 0);
                    is_match = 0 < comparison_result;
                    if (comparison_result < 1) {
                        next_node = (void**)current_node[1];
                        goto comparison_done;
                    }
                }
                next_node = (void**)*current_node;
            }
comparison_done:
            result_node = current_node;
            if (is_match) {
                result_node = temp_node_ptr;
            }
            temp_node_ptr = result_node;
            current_node = next_node;
        } while (next_node != (void**)0x0);
        
        if (result_node != temp_node_ptr) {
            if (*(int*)(result_node + 6) == 0) goto match_found;
            if (stack_param != 0) {
                name_ptr = (byte*)result_node[5];
                object_base = (longlong)stack_name_ptr - (longlong)name_ptr;
                do {
                    char_diff = *name_ptr;
                    char_value = (uint)name_ptr[object_base];
                    if (char_diff != char_value) break;
                    name_ptr = name_ptr + 1;
                } while (char_value != 0);
                if ((int)(char_diff - char_value) < 1) goto match_found;
            }
        }
    }
    result_node = temp_node_ptr;
match_found:
    if (stack_name_ptr == (byte*)0x0) {
        return result_node == temp_node_ptr;
    }
    // 警告：子函数不返回
    cleanup_memory_management();
}

/**
 * 查找对象并返回其句柄
 * @param object_ptr 对象指针
 * @param search_key 搜索键值
 * @return 对象句柄或错误代码
 */
unsigned longlong find_object_handle(longlong* object_ptr, void* search_key)
{
    byte char_diff;
    bool is_match;
    bool handle_found;
    longlong* current_obj;
    longlong* result_obj;
    unsigned longlong handle_value;
    byte* name_ptr;
    uint char_value;
    longlong object_base;
    longlong* search_result;
    int comparison_result;
    longlong* temp_obj;
    longlong* next_obj;
    char align_padding[8];
    byte* stack_name_ptr;
    int stack_param;
    void* stack_buffer;
    longlong stack_value;
    unsigned int stack_flag;
    
    object_base = *object_ptr;
    search_result = (longlong*)(object_base + 0x48);
    initialize_string_comparator();
    handle_found = false;
    temp_obj = *(longlong**)(object_base + 0x58);
    current_obj = search_result;
    
    if (temp_obj == (longlong*)0x0) {
search_complete:
        result_obj = search_result;
    }
    else {
        do {
            if (stack_param == 0) {
                is_match = false;
                next_obj = (longlong*)temp_obj[1];
            }
            else {
                if ((int)temp_obj[6] == 0) {
                    is_match = true;
                }
                else {
                    name_ptr = stack_name_ptr;
                    do {
                        char_value = (uint)name_ptr[temp_obj[5] - (longlong)stack_name_ptr];
                        comparison_result = *name_ptr - char_value;
                        if (*name_ptr != char_value) break;
                        name_ptr = name_ptr + 1;
                    } while (char_value != 0);
                    is_match = 0 < comparison_result;
                    if (comparison_result < 1) {
                        next_obj = (longlong*)temp_obj[1];
                        goto search_match;
                    }
                }
                next_obj = (longlong*)*temp_obj;
            }
search_match:
            result_obj = temp_obj;
            if (is_match) {
                result_obj = current_obj;
            }
            current_obj = result_obj;
            temp_obj = next_obj;
        } while (next_obj != (longlong*)0x0);
        
        if (result_obj == search_result) goto search_complete;
        if ((int)result_obj[6] != 0) {
            if (stack_param != 0) {
                name_ptr = (byte*)result_obj[5];
                object_base = (longlong)stack_name_ptr - (longlong)name_ptr;
                do {
                    char_diff = *name_ptr;
                    char_value = (uint)name_ptr[object_base];
                    if (char_diff != char_value) break;
                    name_ptr = name_ptr + 1;
                } while (char_value != 0);
                if ((int)(char_diff - char_value) < 1) goto search_found;
            }
            goto search_complete;
        }
    }
search_found:
    if (result_obj == search_result) {
        object_base = object_ptr[1];
        initialize_search_context(&stack_buffer, search_key);
        handle_found = true;
        result_obj = (longlong*)create_object_handle(object_base, align_padding, &stack_buffer);
        if (*result_obj == object_base) {
            is_match = true;
            goto handle_result;
        }
    }
    is_match = false;
handle_result:
    if (handle_found) {
        stack_buffer = &global_string_buffer;
        if (stack_value != 0) {
            // 警告：子函数不返回
            cleanup_memory_management();
        }
        stack_value = 0;
        stack_flag = 0;
        stack_buffer = &global_cleanup_buffer;
    }
    
    if (stack_name_ptr != (byte*)0x0) {
        // 警告：子函数不返回
        cleanup_memory_management();
    }
    
    if (is_match) {
        temp_obj = *(longlong**)*object_ptr;
        if (temp_obj == (longlong*)0x0) {
            handle_value = ((unsigned long long)*object_ptr >> 8) | 1;
        }
        else {
            handle_value = ((unsigned long long(*)(void*, void*))(*temp_obj[8]))(temp_obj, search_key);
        }
    }
    else {
        handle_value = (unsigned long long)result_obj & 0xffffffffffffff00;
    }
    return handle_value;
}

/**
 * 执行对象的析构函数序列
 * @param object_ptr 对象指针
 * @param param1 参数1
 * @param param2 参数2
 * @param param3 参数3
 */
void execute_object_destructors(longlong object_ptr, void* param1, void* param2, void* param3)
{
    // 调用不同级别的析构函数
    if (*(void**)(object_ptr + 0x70) != (void*)0x0) {
        ((void(**)(void*, int, int, void*, unsigned long long))(*(void**)(object_ptr + 0x70)))
            (object_ptr + 0x60, 0, 0, param3, 0xfffffffffffffffe);
    }
    if (*(void**)(object_ptr + 0x50) != (void*)0x0) {
        ((void(**)(void*, int, int))(*(void**)(object_ptr + 0x50)))
            (object_ptr + 0x40, 0, 0);
    }
    if (*(void**)(object_ptr + 0x30) != (void*)0x0) {
        ((void(**)(void*, int, int))(*(void**)(object_ptr + 0x30)))
            (object_ptr + 0x20, 0, 0);
    }
    return;
}

/**
 * 初始化全局对象表
 */
void initialize_global_object_table(void)
{
    uint name_length;
    longlong engine_base;
    longlong table_base;
    char success_flag;
    int entry_count;
    unsigned long long hash_value;
    unsigned long long entry_offset;
    longlong entry_address;
    unsigned long long entry_hash;
    longlong entry_limit;
    unsigned long long current_offset;
    longlong* object_table;
    void** name_buffer_ptr;
    unsigned long long table_address;
    void* name_buffer;
    longlong stack_value;
    uint stack_flags;
    unsigned long long stack_hash;
    unsigned char temp_stack_buffer[32];
    void** stack_buffer_ptr;
    unsigned long long stack_address;
    void* stack_temp_ptr;
    longlong stack_long_value;
    uint stack_entry_count;
    unsigned char name_buffer2[32];
    unsigned char reserved_buffer[4];
    int stack_index;
    unsigned long long stack_data;
    
    table_base = global_object_table;
    stack_address = 0xfffffffffffffffe;
    stack_data = global_hash_seed ^ (unsigned long long)temp_stack_buffer;
    engine_base = *global_engine_base;
    hash_value = 0;
    entry_count = (int)(*(longlong*)(engine_base + 0x8b0) - *(longlong*)(engine_base + 0x8a8) >> 5);
    entry_limit = (longlong)entry_count;
    entry_offset = hash_value;
    
    if (0 < entry_count) {
        do {
            name_buffer_ptr = &global_string_buffer;
            stack_hash = 0;
            stack_long_value = 0;
            stack_entry_count = 0;
            stack_buffer_ptr = &name_buffer;
            name_buffer = &global_name_buffer;
            stack_temp_ptr = name_buffer2;
            stack_flags = 0;
            name_buffer2[0] = 0;
            reserved_buffer[0] = 0;
            stack_index = 0xffffffff;
            
            entry_address = *(longlong*)(engine_base + 0x8a8) + entry_offset;
            name_length = *(uint*)(entry_address + 0x10);
            entry_hash = (unsigned long long)name_length;
            
            if (*(longlong*)(entry_address + 8) != 0) {
                initialize_string_buffer(&name_buffer_ptr, entry_hash);
            }
            
            if (name_length != 0) {
                // 警告：子函数不返回
                memcpy(stack_long_value, *(void**)(entry_address + 8), entry_hash);
            }
            
            if (stack_long_value != 0) {
                *(unsigned char*)(entry_hash + stack_long_value) = 0;
            }
            
            stack_hash = ((unsigned int)*(unsigned int*)(entry_address + 0x1c) << 16) | (unsigned int)stack_hash;
            stack_entry_count = name_length;
            stack_index = (int)hash_value;
            success_flag = register_object_entry(hash_value, &name_buffer, reserved_buffer);
            
            if (success_flag != '\0') {
                entry_hash = *(unsigned long long*)(table_base + 0x10);
                if (entry_hash < *(unsigned long long*)(table_base + 0x18)) {
                    *(unsigned long long*)(table_base + 0x10) = entry_hash + 0x60;
                    name_buffer_ptr = (void**)entry_hash;
                    initialize_object_entry(entry_hash);
                    setup_object_entry(entry_hash + 0x20, &name_buffer);
                    *(unsigned char*)(entry_hash + 0x58) = reserved_buffer[0];
                    *(int*)(entry_hash + 0x5c) = stack_index;
                }
                else {
                    expand_object_table(table_base + 8, &name_buffer_ptr);
                }
            }
            
            name_buffer = &global_cleanup_buffer;
            stack_buffer_ptr = &name_buffer_ptr;
            name_buffer_ptr = &global_string_buffer;
            
            if (stack_long_value != 0) {
                // 警告：子函数不返回
                cleanup_memory_management();
            }
            stack_long_value = 0;
            stack_hash = stack_hash & 0xffffffff00000000;
            name_buffer_ptr = &global_cleanup_buffer;
            hash_value = (unsigned long long)((int)hash_value + 1);
            entry_limit = entry_limit + -1;
            entry_offset = entry_offset + 0x20;
        } while (entry_limit != 0);
    }
    // 警告：子函数不返回
    finalize_initialization(stack_data ^ (unsigned long long)temp_stack_buffer);
}

/**
 * 重置对象缓冲区
 * @param buffer_ptr 缓冲区指针
 */
void reset_object_buffer(void** buffer_ptr)
{
    buffer_ptr[4] = &global_cleanup_buffer;
    *buffer_ptr = &global_string_buffer;
    if (buffer_ptr[1] != 0) {
        // 警告：子函数不返回
        cleanup_memory_management();
    }
    buffer_ptr[1] = 0;
    *(unsigned int*)(buffer_ptr + 3) = 0;
    *buffer_ptr = &global_cleanup_buffer;
    return;
}

// 警告：移除不可达的代码块
// 警告：全局变量'_'与相同地址的较小符号重叠