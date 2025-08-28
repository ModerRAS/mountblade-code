#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part212.c - 核心引擎模块第212部分
// 包含2个函数：资源管理器和数据加载器

// 全局变量
static undefined8 *g_resource_manager_base = (undefined8 *)0x180c86930;
static undefined8 *g_engine_context = (undefined8 *)0x180c8a9f8;
static undefined8 *g_memory_allocator = (undefined8 *)0x180c8ed18;
static undefined8 *g_string_constants = (undefined8 *)0x18098bc73;
static undefined8 *g_null_terminator = (undefined8 *)0x1809fcc58;
static undefined8 *g_resource_header = (undefined8 *)0x18098bcb0;

/**
 * 处理资源管理器的批量操作
 * 遍历资源管理器中的所有资源，根据标志位执行相应的处理
 */
void process_resource_manager_batches(void)
{
    undefined8 *resource_ptr;
    uint resource_flags;
    undefined8 *batch_ptr;
    undefined8 *temp_ptr;
    undefined8 *new_batch;
    ulonglong current_pos;
    longlong item_count;
    ulonglong start_pos;
    longlong capacity;
    longlong offset;
    undefined *name_ptr;
    undefined *default_name;
    longlong resource_id;
    undefined1 stack_buffer[32];
    longlong context_backup1;
    longlong context_backup2;
    undefined8 *manager_ptr;
    longlong *iterator_ptr;
    longlong iterator_pos;
    undefined8 stack_guard1;
    undefined *batch_name_ptr;
    undefined1 *batch_buffer;
    undefined4 batch_id;
    undefined1 batch_storage[72];
    undefined *temp_batch_ptr;
    undefined1 *temp_name_ptr;
    undefined4 temp_id;
    undefined1 temp_storage[72];
    undefined *batch_ptr2;
    undefined1 *name_ptr2;
    undefined4 id2;
    undefined1 storage2[72];
    ulonglong stack_guard2;
    
    stack_guard1 = 0xfffffffffffffffe;
    stack_guard2 = _DAT_180bf00a8 ^ (ulonglong)stack_buffer;
    context_backup1 = g_engine_context;
    context_backup2 = g_resource_manager_base;
    iterator_ptr = *(longlong **)(g_resource_manager_base + 0xa0);
    resource_id = g_engine_context;
    
    // 检查迭代器是否有效
    if (iterator_ptr != *(longlong **)(g_resource_manager_base + 0xa8)) {
        do {
            batch_ptr = (undefined8 *)0x0;
            resource_id = *iterator_ptr;
            resource_flags = *(uint *)(resource_id + 0x328);
            iterator_pos = resource_id;
            
            // 处理标志位0x1a (第26位)
            if ((resource_flags >> 0x1a & 1) != 0) {
                batch_name_ptr = g_null_terminator;
                batch_buffer = batch_storage;
                batch_storage[0] = 0;
                batch_id = *(undefined4 *)(resource_id + 0x20);
                name_ptr = g_string_constants;
                if (*(undefined **)(resource_id + 0x18) != (undefined *)0x0) {
                    name_ptr = *(undefined **)(resource_id + 0x18);
                }
                strcpy_s(batch_storage, 0x40, name_ptr);
                
                current_pos = *(ulonglong *)(resource_id + 0x3c8);
                if (current_pos < *(ulonglong *)(resource_id + 0x3d0)) {
                    *(ulonglong *)(resource_id + 0x3c8) = current_pos + 0x58;
                    add_resource_batch(current_pos, &batch_name_ptr);
                }
                else {
                    start_pos = *(ulonglong *)(resource_id + 0x3c0);
                    capacity = (longlong)(current_pos - start_pos) / 0x58;
                    if (capacity == 0) {
                        capacity = 1;
LAB_expand_batch_array:
                        new_batch = (undefined8 *)
                                 allocate_memory(g_memory_allocator, capacity * 0x58, *(undefined1 *)(resource_id + 0x3d8));
                        current_pos = *(ulonglong *)(resource_id + 0x3c8);
                        start_pos = *(ulonglong *)(resource_id + 0x3c0);
                    }
                    else {
                        capacity = capacity * 2;
                        if (capacity != 0) goto LAB_expand_batch_array;
                    }
                    
                    temp_ptr = new_batch;
                    if (start_pos != current_pos) {
                        offset = start_pos - (longlong)new_batch;
                        do {
                            *temp_ptr = g_resource_header;
                            temp_ptr[1] = 0;
                            *(undefined4 *)(temp_ptr + 2) = 0;
                            *temp_ptr = g_null_terminator;
                            temp_ptr[1] = temp_ptr + 3;
                            *(undefined4 *)(temp_ptr + 2) = 0;
                            *(undefined1 *)(temp_ptr + 3) = 0;
                            *(undefined4 *)(temp_ptr + 2) = *(undefined4 *)(offset + 0x10 + (longlong)temp_ptr);
                            name_ptr = *(undefined **)(offset + 8 + (longlong)temp_ptr);
                            default_name = g_string_constants;
                            if (name_ptr != (undefined *)0x0) {
                                default_name = name_ptr;
                            }
                            manager_ptr = temp_ptr;
                            strcpy_s(temp_ptr[1], 0x40, default_name);
                            temp_ptr = temp_ptr + 0xb;
                            resource_id = context_backup1;
                            resource_id = iterator_pos;
                        } while (offset + (longlong)temp_ptr != current_pos);
                    }
                    add_resource_batch(temp_ptr, &batch_name_ptr);
                    
                    // 清理旧的批处理数据
                    resource_ptr = *(undefined8 **)(resource_id + 0x3c8);
                    temp_ptr = *(undefined8 **)(resource_id + 0x3c0);
                    if (temp_ptr != resource_ptr) {
                        do {
                            (**(code **)*temp_ptr)(temp_ptr, 0);
                            temp_ptr = temp_ptr + 0xb;
                        } while (temp_ptr != resource_ptr);
                        temp_ptr = *(undefined8 **)(resource_id + 0x3c0);
                    }
                    if (temp_ptr != (undefined8 *)0x0) {
                        free_memory(temp_ptr);
                    }
                    *(undefined8 **)(resource_id + 0x3c0) = new_batch;
                    *(undefined8 **)(resource_id + 0x3c8) = temp_ptr + 0xb;
                    *(undefined8 **)(resource_id + 0x3d0) = new_batch + capacity * 0xb;
                }
                batch_name_ptr = g_resource_header;
                resource_flags = *(uint *)(resource_id + 0x328);
            }
            
            // 处理标志位0x1b (第27位)
            batch_ptr = (undefined8 *)0x0;
            if ((resource_flags >> 0x1b & 1) != 0) {
                temp_batch_ptr = g_null_terminator;
                temp_name_ptr = temp_storage;
                temp_storage[0] = 0;
                temp_id = *(undefined4 *)(resource_id + 0x20);
                name_ptr = g_string_constants;
                if (*(undefined **)(resource_id + 0x18) != (undefined *)0x0) {
                    name_ptr = *(undefined **)(resource_id + 0x18);
                }
                strcpy_s(temp_storage, 0x40, name_ptr);
                
                current_pos = *(ulonglong *)(resource_id + 1000);
                if (current_pos < *(ulonglong *)(resource_id + 0x3f0)) {
                    *(ulonglong *)(resource_id + 1000) = current_pos + 0x58;
                    add_resource_batch(current_pos, &temp_batch_ptr);
                }
                else {
                    start_pos = *(ulonglong *)(resource_id + 0x3e0);
                    capacity = (longlong)(current_pos - start_pos) / 0x58;
                    if (capacity == 0) {
                        capacity = 1;
LAB_expand_temp_array:
                        new_batch = (undefined8 *)
                                 allocate_memory(g_memory_allocator, capacity * 0x58, *(undefined1 *)(resource_id + 0x3f8));
                        current_pos = *(ulonglong *)(resource_id + 1000);
                        start_pos = *(ulonglong *)(resource_id + 0x3e0);
                    }
                    else {
                        capacity = capacity * 2;
                        if (capacity != 0) goto LAB_expand_temp_array;
                    }
                    
                    temp_ptr = new_batch;
                    if (start_pos != current_pos) {
                        offset = start_pos - (longlong)new_batch;
                        do {
                            *temp_ptr = g_resource_header;
                            temp_ptr[1] = 0;
                            *(undefined4 *)(temp_ptr + 2) = 0;
                            *temp_ptr = g_null_terminator;
                            temp_ptr[1] = temp_ptr + 3;
                            *(undefined4 *)(temp_ptr + 2) = 0;
                            *(undefined1 *)(temp_ptr + 3) = 0;
                            *(undefined4 *)(temp_ptr + 2) = *(undefined4 *)(offset + 0x10 + (longlong)temp_ptr);
                            name_ptr = *(undefined **)(offset + 8 + (longlong)temp_ptr);
                            default_name = g_string_constants;
                            if (name_ptr != (undefined *)0x0) {
                                default_name = name_ptr;
                            }
                            manager_ptr = temp_ptr;
                            strcpy_s(temp_ptr[1], 0x40, default_name);
                            temp_ptr = temp_ptr + 0xb;
                            resource_id = context_backup1;
                            resource_id = iterator_pos;
                        } while (offset + (longlong)temp_ptr != current_pos);
                    }
                    add_resource_batch(temp_ptr, &temp_batch_ptr);
                    
                    // 清理临时数据
                    resource_ptr = *(undefined8 **)(resource_id + 1000);
                    temp_ptr = *(undefined8 **)(resource_id + 0x3e0);
                    if (temp_ptr != resource_ptr) {
                        do {
                            (**(code **)*temp_ptr)(temp_ptr, 0);
                            temp_ptr = temp_ptr + 0xb;
                        } while (temp_ptr != resource_ptr);
                        temp_ptr = *(undefined8 **)(resource_id + 0x3e0);
                    }
                    if (temp_ptr != (undefined8 *)0x0) {
                        free_memory(temp_ptr);
                    }
                    *(undefined8 **)(resource_id + 0x3e0) = new_batch;
                    *(undefined8 **)(resource_id + 1000) = temp_ptr + 0xb;
                    *(undefined8 **)(resource_id + 0x3f0) = new_batch + capacity * 0xb;
                }
                temp_batch_ptr = g_resource_header;
                resource_flags = *(uint *)(resource_id + 0x328);
            }
            
            // 处理标志位0x1c (第28位)
            batch_ptr = (undefined8 *)0x0;
            if ((resource_flags >> 0x1c & 1) != 0) {
                batch_ptr2 = g_null_terminator;
                name_ptr2 = storage2;
                storage2[0] = 0;
                id2 = *(undefined4 *)(resource_id + 0x20);
                name_ptr = g_string_constants;
                if (*(undefined **)(resource_id + 0x18) != (undefined *)0x0) {
                    name_ptr = *(undefined **)(resource_id + 0x18);
                }
                strcpy_s(storage2, 0x40, name_ptr);
                
                current_pos = *(ulonglong *)(resource_id + 0x428);
                if (current_pos < *(ulonglong *)(resource_id + 0x430)) {
                    *(ulonglong *)(resource_id + 0x428) = current_pos + 0x58;
                    add_resource_batch(current_pos, &batch_ptr2);
                }
                else {
                    start_pos = *(ulonglong *)(resource_id + 0x420);
                    capacity = (longlong)(current_pos - start_pos) / 0x58;
                    if (capacity == 0) {
                        capacity = 1;
LAB_expand_storage_array:
                        new_batch = (undefined8 *)
                                 allocate_memory(g_memory_allocator, capacity * 0x58, *(undefined1 *)(resource_id + 0x438));
                        current_pos = *(ulonglong *)(resource_id + 0x428);
                        start_pos = *(ulonglong *)(resource_id + 0x420);
                    }
                    else {
                        capacity = capacity * 2;
                        if (capacity != 0) goto LAB_expand_storage_array;
                    }
                    
                    temp_ptr = new_batch;
                    if (start_pos != current_pos) {
                        offset = start_pos - (longlong)new_batch;
                        do {
                            *temp_ptr = g_resource_header;
                            temp_ptr[1] = 0;
                            *(undefined4 *)(temp_ptr + 2) = 0;
                            *temp_ptr = g_null_terminator;
                            temp_ptr[1] = temp_ptr + 3;
                            *(undefined4 *)(temp_ptr + 2) = 0;
                            *(undefined1 *)(temp_ptr + 3) = 0;
                            *(undefined4 *)(temp_ptr + 2) = *(undefined4 *)(offset + 0x10 + (longlong)temp_ptr);
                            name_ptr = *(undefined **)(offset + 8 + (longlong)temp_ptr);
                            default_name = g_string_constants;
                            if (name_ptr != (undefined *)0x0) {
                                default_name = name_ptr;
                            }
                            manager_ptr = temp_ptr;
                            strcpy_s(temp_ptr[1], 0x40, default_name);
                            temp_ptr = temp_ptr + 0xb;
                            resource_id = context_backup1;
                            resource_id = iterator_pos;
                        } while (offset + (longlong)temp_ptr != current_pos);
                    }
                    add_resource_batch(temp_ptr, &batch_ptr2);
                    
                    // 清理存储数据
                    resource_ptr = *(undefined8 **)(resource_id + 0x428);
                    temp_ptr = *(undefined8 **)(resource_id + 0x420);
                    if (temp_ptr != resource_ptr) {
                        do {
                            (**(code **)*temp_ptr)(temp_ptr, 0);
                            temp_ptr = temp_ptr + 0xb;
                        } while (temp_ptr != resource_ptr);
                        temp_ptr = *(undefined8 **)(resource_id + 0x420);
                    }
                    if (temp_ptr != (undefined8 *)0x0) {
                        free_memory(temp_ptr);
                    }
                    *(undefined8 **)(resource_id + 0x420) = new_batch;
                    *(undefined8 **)(resource_id + 0x428) = temp_ptr + 0xb;
                    *(undefined8 **)(resource_id + 0x430) = new_batch + capacity * 0xb;
                }
                batch_ptr2 = g_resource_header;
                resource_flags = *(uint *)(resource_id + 0x328);
            }
            
            // 处理标志位0x14 (第20位)
            batch_ptr = (undefined8 *)0x0;
            if ((resource_flags >> 0x14 & 1) != 0) {
                batch_ptr = g_null_terminator;
                batch_buffer = batch_storage;
                batch_storage[0] = 0;
                batch_id = *(undefined4 *)(resource_id + 0x20);
                name_ptr = g_string_constants;
                if (*(undefined **)(resource_id + 0x18) != (undefined *)0x0) {
                    name_ptr = *(undefined **)(resource_id + 0x18);
                }
                strcpy_s(batch_storage, 0x40, name_ptr);
                
                current_pos = *(ulonglong *)(resource_id + 0x448);
                if (current_pos < *(ulonglong *)(resource_id + 0x450)) {
                    *(ulonglong *)(resource_id + 0x448) = current_pos + 0x58;
                    add_resource_batch(current_pos, &batch_ptr);
                }
                else {
                    start_pos = *(ulonglong *)(resource_id + 0x440);
                    capacity = (longlong)(current_pos - start_pos) / 0x58;
                    if (capacity == 0) {
                        iterator_pos = 1;
LAB_expand_final_array:
                        capacity = iterator_pos;
                        new_batch = (undefined8 *)
                                 allocate_memory(g_memory_allocator, iterator_pos * 0x58, *(undefined1 *)(resource_id + 0x458));
                        current_pos = *(ulonglong *)(resource_id + 0x448);
                        start_pos = *(ulonglong *)(resource_id + 0x440);
                    }
                    else {
                        capacity = capacity * 2;
                        iterator_pos = capacity;
                        if (capacity != 0) goto LAB_expand_final_array;
                    }
                    
                    temp_ptr = new_batch;
                    if (start_pos != current_pos) {
                        offset = start_pos - (longlong)new_batch;
                        do {
                            *temp_ptr = g_resource_header;
                            temp_ptr[1] = 0;
                            *(undefined4 *)(temp_ptr + 2) = 0;
                            *temp_ptr = g_null_terminator;
                            temp_ptr[1] = temp_ptr + 3;
                            *(undefined4 *)(temp_ptr + 2) = 0;
                            *(undefined1 *)(temp_ptr + 3) = 0;
                            *(undefined4 *)(temp_ptr + 2) = *(undefined4 *)((longlong)temp_ptr + offset + 0x10);
                            name_ptr = *(undefined **)((longlong)temp_ptr + offset + 8);
                            default_name = g_string_constants;
                            if (name_ptr != (undefined *)0x0) {
                                default_name = name_ptr;
                            }
                            manager_ptr = temp_ptr;
                            strcpy_s(temp_ptr[1], 0x40, default_name);
                            temp_ptr = temp_ptr + 0xb;
                            resource_id = context_backup1;
                            capacity = iterator_pos;
                        } while ((longlong)temp_ptr + offset != current_pos);
                    }
                    add_resource_batch(temp_ptr, &batch_ptr);
                    
                    // 清理最终数据
                    resource_ptr = *(undefined8 **)(resource_id + 0x448);
                    temp_ptr = *(undefined8 **)(resource_id + 0x440);
                    if (temp_ptr != resource_ptr) {
                        do {
                            (**(code **)*temp_ptr)(temp_ptr, 0);
                            temp_ptr = temp_ptr + 0xb;
                        } while (temp_ptr != resource_ptr);
                        temp_ptr = *(undefined8 **)(resource_id + 0x440);
                    }
                    if (temp_ptr != (undefined8 *)0x0) {
                        free_memory(temp_ptr);
                    }
                    *(undefined8 **)(resource_id + 0x440) = new_batch;
                    *(undefined8 **)(resource_id + 0x448) = temp_ptr + 0xb;
                    *(undefined8 **)(resource_id + 0x450) = new_batch + capacity * 0xb;
                }
                batch_ptr = g_resource_header;
            }
            
            iterator_ptr = iterator_ptr + 1;
        } while (iterator_ptr != *(longlong **)(context_backup2 + 0xa8));
    }
    
    // 清理并返回
    cleanup_resource_manager(stack_guard2 ^ (ulonglong)stack_buffer);
}

/**
 * 加载和处理资源数据
 * 从文件中读取资源数据并进行处理
 * 
 * @param param_1 资源管理器实例
 * @param param_2 数据缓冲区
 */
void load_and_process_resource_data(undefined8 param_1, longlong param_2)
{
    byte stream_status;
    undefined4 read_result;
    int str_length;
    uint comparison_result;
    undefined8 *resource_data;
    longlong data_offset;
    longlong *stream_ptr;
    longlong file_handle;
    byte *file_data;
    int buffer_size;
    undefined *resource_name;
    longlong name_length;
    undefined8 allocation_size;
    undefined4 extraout_XMM0_Da;
    undefined1 stack_guard[32];
    char file_buffer[8];
    undefined *path_ptr;
    undefined1 *name_buffer;
    int name_size;
    ulonglong name_capacity;
    undefined *temp_ptr;
    undefined8 *data_ptr;
    undefined4 data_size;
    ulonglong data_capacity;
    undefined8 stack_guard2;
    undefined1 *buffer_ptr;
    int buffer_offset;
    longlong stream_params[3];
    undefined1 temp_buffer[8];
    undefined1 line_buffer[120];
    longlong line_length;
    undefined1 line_storage[104];
    undefined *resource_ptr;
    undefined *resource_type;
    undefined4 resource_id;
    undefined file_data_buffer[520];
    undefined *resource_array[68];
    char path_buffer[128];
    ulonglong final_guard;
    
    stack_guard2 = 0xfffffffffffffffe;
    final_guard = _DAT_180bf00a8 ^ (ulonglong)stack_guard;
    
    // 初始化数据结构
    initialize_data_structure(param_2, *(undefined8 *)(param_2 + 0x10));
    *(longlong *)param_2 = param_2;
    *(longlong *)(param_2 + 8) = param_2;
    allocation_size = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined1 *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
    
    // 设置默认路径
    path_ptr = &UNK_180a3c3e0;
    name_capacity = 0;
    data_ptr = (undefined8 *)0x0;
    data_size = 0;
    
    // 分配资源数据缓冲区
    resource_data = (undefined8 *)allocate_memory(g_memory_allocator, 0x43, 0x13);
    *(undefined1 *)resource_data = 0;
    data_ptr = resource_data;
    read_result = get_memory_size(resource_data);
    name_capacity = CONCAT44(name_capacity._4_4_, read_result);
    
    // 设置资源数据内容
    *resource_data = 0x6f4d2f4553414224;  // "$BASE/Mo"
    resource_data[1] = 0x614e2f73656c7564;  // "dules/Na"
    resource_data[2] = 0x646f4d2f65766974;  // "tive/Mod"
    resource_data[3] = 0x2f61746144656c75;  // "ule/Data/"
    *(undefined4 *)(resource_data + 4) = 0x65726f43;  // "Core"
    *(undefined4 *)((longlong)resource_data + 0x24) = 0x656d6147;  // "Game"
    *(undefined4 *)(resource_data + 5) = 0x65666552;  // "Refe"
    *(undefined4 *)((longlong)resource_data + 0x2c) = 0x636e6572;  // "renc"
    *(undefined4 *)(resource_data + 6) = 0x612f7365;  // "es/a"
    *(undefined4 *)((longlong)resource_data + 0x34) = 0x736f6d74;  // "tmot"
    *(undefined4 *)(resource_data + 7) = 0x72656870;  // "pher"
    *(undefined4 *)((longlong)resource_data + 0x3c) = 0x742e7365;  // "est.t"
    *(undefined2 *)(resource_data + 8) = 0x7478;  // "xt"
    *(undefined1 *)((longlong)resource_data + 0x42) = 0;
    data_size = 0x42;
    
    // 初始化文件流
    initialize_file_stream(stream_params);
    data_offset = parse_resource_path(resource_array, &path_ptr);
    
    // 获取资源名称
    resource_name = g_string_constants;
    if (*(undefined **)(data_offset + 8) != (undefined *)0x0) {
        resource_name = *(undefined **)(data_offset + 8);
    }
    
    resource_ptr = &UNK_180a009c8;
    resource_type = file_data_buffer;
    resource_id = 0;
    file_data_buffer[0] = 0;
    
    if (resource_name != (undefined *)0x0) {
        data_offset = -1;
        do {
            data_offset = data_offset + 1;
        } while (resource_name[data_offset] != '\0');
        resource_id = (undefined4)data_offset;
        strcpy_s(file_data_buffer, 0x200);
    }
    
    resource_array[0] = g_resource_header;
    resource_name = g_string_constants;
    if (resource_type != (undefined *)0x0) {
        resource_name = resource_type;
    }
    
    data_offset = open_resource_stream(temp_buffer, resource_name, 1);
    if (data_offset == 0) {
        set_stream_error_state((longlong)stream_params + (longlong)*(int *)(stream_params[0] + 4), 2);
    }
    else {
        clear_stream_error_state((longlong)stream_params + (longlong)*(int *)(stream_params[0] + 4), 0);
    }
    
    if (line_length != 0) {
        stream_ptr = (longlong *)
                 read_file_line(stream_params, file_buffer, 0x80);
        stream_status = *(byte *)((longlong)*(int *)(*stream_ptr + 4) + 0x10 + (longlong)stream_ptr);
        
        while ((stream_status & 6) == 0) {
            path_ptr = &UNK_180a3c3e0;
            name_capacity = 0;
            name_buffer = (undefined1 *)0x0;
            name_size = 0;
            data_offset = -1;
            do {
                file_handle = data_offset;
                data_offset = file_handle + 1;
            } while (file_buffer[file_handle + 1] != '\0');
            
            if ((int)(file_handle + 1) != 0) {
                buffer_size = (int)file_handle + 2;
                str_length = buffer_size;
                if (buffer_size < 0x10) {
                    str_length = 0x10;
                }
                name_buffer = (undefined1 *)allocate_memory(g_memory_allocator, (longlong)str_length, 0x13);
                *name_buffer = 0;
                read_result = get_memory_size(name_buffer);
                name_capacity = CONCAT44(name_capacity._4_4_, read_result);
                memcpy(name_buffer, file_buffer, buffer_size);
            }
            
            name_size = 0;
            parse_resource_name(&path_ptr);
            
            if (name_size != 0) {
                data_offset = allocate_memory(g_memory_allocator, 0x40, *(undefined1 *)(param_2 + 0x28));
                copy_resource_data(data_offset + 0x20, &path_ptr);
                file_handle = find_resource_by_name(param_2, file_buffer, data_offset + 0x20);
                
                if (file_buffer[0] != '\0') {
                    if (file_handle == param_2) goto LAB_compare_resources;
                    if (*(int *)(file_handle + 0x30) == 0) goto LAB_resource_not_found;
                    if (*(int *)(data_offset + 0x30) == 0) goto LAB_compare_resources;
                    file_data = *(byte **)(file_handle + 0x28);
                    name_length = *(longlong *)(data_offset + 0x28) - (longlong)file_data;
                    goto LAB_compare_data;
                }
                release_resource_memory(extraout_XMM0_Da, data_offset);
            }
            
            path_ptr = &UNK_180a3c3e0;
            if (name_buffer != (undefined1 *)0x0) {
                free_memory(name_buffer);
            }
            name_buffer = (undefined1 *)0x0;
            name_capacity = name_capacity & 0xffffffff00000000;
            path_ptr = g_resource_header;
            
            stream_ptr = (longlong *)
                     read_file_line(stream_params, file_buffer, 0x80);
            stream_status = *(byte *)((longlong)*(int *)(*stream_ptr + 4) + 0x10 + (longlong)stream_ptr);
        }
        
        data_offset = check_stream_status(temp_buffer);
        if (data_offset == 0) {
            set_stream_error_state((longlong)stream_params + (longlong)*(int *)(stream_params[0] + 4), 2);
        }
    }
    
    resource_ptr = g_resource_header;
    buffer_ptr = line_storage;
    *(undefined **)((longlong)stream_params + (longlong)*(int *)(stream_params[0] + 4)) = &UNK_180a03ad8;
    *(int *)((longlong)&buffer_offset + (longlong)*(int *)(stream_params[0] + 4)) =
         *(int *)(stream_params[0] + 4) + -0xb8;
    
    cleanup_resource_stream(temp_buffer);
    destroy_file_stream(line_buffer);
    destroy_file_stream(line_storage);
    
    path_ptr = &UNK_180a3c3e0;
    if (data_ptr != (undefined8 *)0x0) {
        free_memory(data_ptr);
    }
    data_ptr = (undefined8 *)0x0;
    name_capacity = name_capacity & 0xffffffff00000000;
    path_ptr = g_resource_header;
    
    cleanup_resource_manager(final_guard ^ (ulonglong)stack_guard);
    
    // 资源比较循环
    while (file_data = file_data + 1, comparison_result != 0) {
LAB_compare_data:
        stream_status = *file_data;
        comparison_result = (uint)file_data[name_length];
        if (stream_status != comparison_result) break;
    }
    
    if ((int)(stream_status - comparison_result) < 1) {
LAB_resource_not_found:
        allocation_size = 1;
    }
LAB_compare_resources:
    finalize_resource_loading(data_offset, file_handle, param_2, allocation_size);
}