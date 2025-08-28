#include "TaleWorlds.Native.Split.h"

// 03_rendering_part038.c - 渲染系统高级对象管理和字符串处理模块
// 代码美化完成：包含14个核心函数，涵盖渲染对象状态更新、字符串创建与管理、渲染数据对象创建、对象创建、哈希表清理等高级渲染功能

// 函数：更新渲染对象状态
// 功能：更新渲染对象的时间戳、状态标志和批处理参数
// 参数：
//   render_context - 渲染上下文指针
//   render_params - 渲染参数
//   time_delta - 时间增量
//   batch_params - 批处理参数
void update_render_object_state(longlong render_context, undefined8 render_params, undefined8 time_delta, undefined8 batch_params)
{
    longlong state_manager;
    float time_diff;
    float current_time;
    undefined8 stack_params[13];
    longlong temp_resource;
    
    // 计算时间差值
    current_time = (float)_DAT_180c8ed30;
    time_diff = current_time * 1e-05 - *(float *)(render_context + 0x15c);
    state_manager = *(longlong *)(render_context + 0x120);
    
    // 更新状态管理器的时间相关字段
    *(float *)(state_manager + 0x2a8) = time_diff;
    *(undefined4 *)(state_manager + 0x2ac) = 0;
    *(undefined4 *)(state_manager + 0x2b0) = 0;
    *(undefined4 *)(state_manager + 0x2b4) = 0x7f7fffff;
    
    // 检查是否需要执行批处理
    if ((*(longlong *)(render_context + 0x140) - *(longlong *)(render_context + 0x138) >> 5 != 0) && (5.0 < time_diff)) {
        int batch_index = (*(int *)(render_context + 0x118) + 1) %
                         (int)(*(longlong *)(render_context + 0x100) - *(longlong *)(render_context + 0xf8) >> 3);
        
        // 执行批处理操作
        FUN_18022cd30(*(undefined8 *)(*(longlong *)(render_context + 0x120) + 0x1b8), 0,
                     *(undefined8 *)(*(longlong *)(render_context + 0xf8) + (longlong)batch_index * 8), batch_params,
                     0xfffffffffffffffe);
        FUN_18022cd30(*(undefined8 *)(*(longlong *)(render_context + 0x120) + 0x1b8), 1,
                     *(undefined8 *)
                     (*(longlong *)(render_context + 0xf8) +
                     (((longlong)batch_index + 1U) %
                     (ulonglong)(*(longlong *)(render_context + 0x100) - *(longlong *)(render_context + 0xf8) >> 3))
                     * 8));
        
        // 初始化批处理参数
        stack_params[0] = 0;
        stack_params[1] = 0;
        stack_params[2] = 0xffffffff;
        stack_params[3] = 1;
        stack_params[4] = 0;
        stack_params[5] = 0xffffffff;
        stack_params[6] = 1;
        stack_params[7] = 0;
        stack_params[8] = 0;
        stack_params[9] = 0;
        stack_params[10] = 3;
        stack_params[11] = 0;
        
        // 执行批处理
        FUN_180076c50(*(undefined8 *)(render_context + 0x120), stack_params);
        *(int *)(render_context + 0x118) = batch_index;
        *(float *)(render_context + 0x15c) = current_time * 1e-05;
        
        // 清理临时资源
        if (temp_resource != 0) {
            FUN_18064e900();
        }
    }
}

// 函数：创建渲染字符串对象
// 功能：创建并初始化渲染系统使用的字符串对象
// 参数：
//   string_obj - 字符串对象指针
//   string_data - 字符串数据
//   buffer_size - 缓冲区大小
//   flags - 标志参数
// 返回值：字符串对象指针
undefined8 *create_render_string_object(undefined8 string_obj, undefined8 *string_data, undefined8 buffer_size, undefined8 flags)
{
    *string_data = &UNK_18098bcb0;
    string_data[1] = 0;
    *(undefined4 *)(string_data + 2) = 0;
    *string_data = &UNK_1809fcc28;
    string_data[1] = string_data + 3;
    *(undefined1 *)(string_data + 3) = 0;
    *(undefined4 *)(string_data + 2) = 0x16;
    strcpy_s(string_data[1], 0x80, &DAT_180a16c38, flags, 0, 0xfffffffffffffffe);
    return string_data;
}

// 函数：清理渲染对象
// 功能：释放渲染对象占用的资源并清理内存
// 参数：
//   object_ptr - 对象指针
//   size_hint - 大小提示
//   cleanup_flags - 清理标志
//   debug_param - 调试参数
//   reserved - 保留参数
// 返回值：清理后的对象指针
undefined8 *cleanup_render_object(undefined8 *object_ptr, ulonglong size_hint, undefined8 cleanup_flags, undefined8 debug_param, undefined8 reserved)
{
    undefined8 cleanup_param;
    
    cleanup_param = 0xfffffffffffffffe;
    *object_ptr = &UNK_180a16c98;
    
    // 执行对象的清理回调
    if ((longlong *)object_ptr[0x1e] != (longlong *)0x0) {
        (**(code **)(*(longlong *)object_ptr[0x1e] + 0x38))();
    }
    
    FUN_180244780(object_ptr);
    
    // 根据标志决定是否释放内存
    if ((size_hint & 1) != 0) {
        free(object_ptr, 0xf8, cleanup_flags, debug_param, cleanup_param);
    }
    return object_ptr;
}

// 函数：创建渲染数据对象
// 功能：创建渲染系统使用的数据对象，包含材质和纹理信息
// 参数：
//   data_param - 数据参数
//   data_ptr - 数据指针
//   alloc_size - 分配大小
//   init_flags - 初始化标志
// 返回值：数据对象指针
undefined8 *create_render_data_object(undefined8 data_param, undefined8 *data_ptr, undefined8 alloc_size, undefined8 init_flags)
{
    undefined8 *string_ptr;
    
    *data_ptr = &UNK_18098bcb0;
    data_ptr[1] = 0;
    *(undefined4 *)(data_ptr + 2) = 0;
    *data_ptr = &UNK_180a3c3e0;
    data_ptr[3] = 0;
    data_ptr[1] = 0;
    *(undefined4 *)(data_ptr + 2) = 0;
    
    FUN_1806277c0(data_ptr, 0x16, alloc_size, init_flags, 0, 0xfffffffffffffffe);
    string_ptr = (undefined8 *)data_ptr[1];
    
    // 设置材质标识字符串 "_ateBlgr"
    *string_ptr = 0x5f617465426c6772;
    string_ptr[1] = 0x6f74616369646e69;
    *(undefined4 *)(string_ptr + 2) = 0x69765f72;
    *(undefined2 *)((longlong)string_ptr + 0x14) = 0x7765;
    *(undefined1 *)((longlong)string_ptr + 0x16) = 0;
    
    *(undefined4 *)(data_ptr + 2) = 0x16;
    return data_ptr;
}

// 函数：创建渲染对象
// 功能：创建完整的渲染对象，包含所有必要的渲染状态和数据
// 参数：
//   render_config - 渲染配置
//   object_data - 对象数据
// 返回值：渲染对象指针
longlong create_render_object(longlong render_config, longlong object_data)
{
    int *config_ptr;
    int config_index;
    longlong *system_manager;
    longlong *prev_manager;
    undefined4 config_flags[3];
    undefined8 *config_data;
    undefined8 *object_data_ptr;
    longlong data_offset;
    undefined8 *temp_ptr;
    longlong texture_scale_x;
    longlong texture_scale_y;
    float transform_matrix[8];
    float color_matrix[8];
    undefined8 render_params[19];
    float scale_factors[8];
    undefined4 param_flags[6];
    
    // 初始化渲染参数
    render_params[16] = 0xfffffffffffffffe;
    data_offset = FUN_1800daa50();
    FUN_180094b30(data_offset, &DAT_180a16c38);
    
    // 获取系统管理器
    system_manager = *(longlong **)(_DAT_180c86938 + 0x121e0);
    if (system_manager != (longlong *)0x0) {
        (**(code **)(*system_manager + 0x28))(system_manager);
    }
    
    // 管理器切换
    prev_manager = *(longlong **)(data_offset + 0x9690);
    *(longlong **)(data_offset + 0x9690) = system_manager;
    if (prev_manager != (longlong *)0x0) {
        (**(code **)(*prev_manager + 0x38))();
    }
    
    // 清理哈希表
    system_manager = *(longlong **)(data_offset + 0x96a8);
    *(undefined8 *)(data_offset + 0x96a8) = 0;
    if (system_manager != (longlong *)0x0) {
        (**(code **)(*system_manager + 0x38))();
    }
    
    // 复制配置数据
    config_data = *(undefined8 **)(render_config + 0x24);
    *(undefined8 *)(data_offset + 0x11c18) = *(undefined8 *)(render_config + 0x1c);
    *(undefined8 *)(data_offset + 0x11c20) = config_data;
    *(undefined8 *)(data_offset + 0x11c28) = *(undefined8 *)(render_config + 0x2c);
    *(undefined2 *)(data_offset + 0x11c36) = 0x100;
    *(undefined1 *)(data_offset + 0x9a31) = 0;
    
    // 初始化对象数据
    config_index = 2;
    *(undefined4 *)(data_offset + 4) = 2;
    *(float *)(data_offset + 0x124e4) = (float)(_DAT_180c8ed30 % 1000000000) * 1e-05;
    
    // 复制配置参数
    config_data = (undefined8 *)(_DAT_180c86950 + 0x16a0);
    object_data_ptr = (undefined8 *)(data_offset + 0x30);
    
    // 批量复制配置数据
    do {
        temp_ptr = object_data_ptr;
        config_data = config_data;
        config_flags[0] = config_data[1];
        *temp_ptr = *config_data;
        temp_ptr[1] = config_flags[0];
        config_flags[0] = config_data[3];
        temp_ptr[2] = config_data[2];
        temp_ptr[3] = config_flags[0];
        config_flags[0] = config_data[5];
        temp_ptr[4] = config_data[4];
        temp_ptr[5] = config_flags[0];
        config_flags[0] = config_data[7];
        temp_ptr[6] = config_data[6];
        temp_ptr[7] = config_flags[0];
        config_flags[0] = config_data[9];
        temp_ptr[8] = config_data[8];
        temp_ptr[9] = config_flags[0];
        config_flags[0] = config_data[0xb];
        temp_ptr[10] = config_data[10];
        temp_ptr[0xb] = config_flags[0];
        config_flags[0] = config_data[0xd];
        temp_ptr[0xc] = config_data[0xc];
        temp_ptr[0xd] = config_flags[0];
        config_flags[0] = config_data[0xf];
        temp_ptr[0xe] = config_data[0xe];
        temp_ptr[0xf] = config_flags[0];
        config_index = config_index + -1;
        config_data = config_data + 0x10;
        object_data_ptr = object_data_ptr + 0x10;
    } while (config_index != 0);
    
    // 复制剩余配置
    config_flags[0] = config_data[0x11];
    temp_ptr[0x10] = config_data[0x10];
    temp_ptr[0x11] = config_flags[0];
    config_flags[0] = config_data[0x13];
    temp_ptr[0x12] = config_data[0x12];
    temp_ptr[0x13] = config_flags[0];
    config_flags[0] = config_data[0x15];
    temp_ptr[0x14] = config_data[0x14];
    temp_ptr[0x15] = config_flags[0];
    param_flags[0] = *(undefined4 *)((longlong)config_data + 0xb4);
    param_flags[1] = *(undefined4 *)(config_data + 0x17);
    param_flags[2] = *(undefined4 *)((longlong)config_data + 0xbc);
    *(undefined4 *)(temp_ptr + 0x16) = *(undefined4 *)(config_data + 0x16);
    *(undefined4 *)((longlong)temp_ptr + 0xb4) = param_flags[0];
    *(undefined4 *)(temp_ptr + 0x17) = param_flags[1];
    *(undefined4 *)((longlong)temp_ptr + 0xbc) = param_flags[2];
    
    FUN_18024b8d0(data_offset);
    
    // 检查并设置标志
    if (*(char *)(render_config + 0xdc) != '\0') {
        *(uint *)(data_offset + 4) = *(uint *)(data_offset + 4) | 0x40000;
    }
    
    *(undefined4 *)(data_offset + 0x11cf0) = 0;
    *(undefined4 *)(data_offset + 0x9a2c) = 20000;
    
    // 初始化缩放因子
    param_flags[3] = 0;
    param_flags[4] = 0;
    param_flags[5] = 0x3f800000;
    
    // 获取纹理缩放比例
    config_data = *(longlong *)(*(longlong *)(*(longlong *)(render_config + 0xf0) + 0x1b8) + 0xb8);
    texture_scale_y = (float)*(ushort *)(config_data + 0x32e) / *(float *)(_DAT_180c86950 + 0x17f0);
    texture_scale_x = (float)*(ushort *)(config_data + 0x32c) / *(float *)(_DAT_180c86950 + 0x17ec);
    
    // 计算变换矩阵
    transform_matrix[0] = texture_scale_x * 1.0 + 0.0 + 0.0;
    transform_matrix[1] = texture_scale_x * 0.0 + 0.0 + 0.0;
    transform_matrix[2] = texture_scale_x * 0.0 + 0.0 + 0.0;
    transform_matrix[3] = texture_scale_x * 0.0 + 0.0 + 0.0;
    transform_matrix[4] = texture_scale_y * 0.0 + 0.0 + 0.0;
    transform_matrix[5] = texture_scale_y * 1.0 + 0.0 + 0.0;
    transform_matrix[6] = texture_scale_y * 0.0 + 0.0 + 0.0;
    transform_matrix[7] = texture_scale_y * 0.0 + 0.0 + 0.0;
    
    // 设置颜色矩阵
    color_matrix[0] = 0;
    color_matrix[1] = 0;
    color_matrix[2] = 0x3f800000;
    color_matrix[3] = 0;
    scale_factors[0] = (1.0 - texture_scale_y) + 0.0;
    
    // 初始化渲染参数
    render_params[0] = 0;
    render_params[1] = 0xffffffff;
    render_params[2] = 0xff00;
    render_params[3] = 0;
    render_params[4] = 0xffffffffffffffff;
    render_params[5] = 0xffffffff;
    render_params[6] = 0xff;
    render_params[7] = 0xffffffff;
    render_params[8] = 0;
    render_params[9] = 0x400;
    render_params[10] = 0;
    render_params[11] = 0;
    render_params[12] = 0;
    render_params[13] = 0;
    render_params[14] = 0;
    render_params[15] = 0;
    
    // 复制变换矩阵
    scale_factors[1] = transform_matrix[0];
    scale_factors[2] = transform_matrix[1];
    scale_factors[3] = transform_matrix[2];
    scale_factors[4] = transform_matrix[3];
    scale_factors[5] = transform_matrix[4];
    scale_factors[6] = transform_matrix[5];
    scale_factors[7] = transform_matrix[6];
    
    param_flags[3] = color_matrix[0];
    param_flags[4] = color_matrix[1];
    param_flags[5] = color_matrix[2];
    param_flags[0] = color_matrix[3];
    
    FUN_180077750(*(longlong *)(render_config + 0xf0), data_offset, transform_matrix, 0, render_params);
    
    // 线程安全的对象添加
    LOCK();
    config_ptr = (int *)(object_data + 0x11a48);
    config_index = *config_ptr;
    *config_ptr = *config_ptr + 1;
    UNLOCK();
    
    *(longlong *)(object_data + 0x9a48 + (longlong)config_index * 8) = data_offset;
    config_flags[0] = *(undefined8 *)(object_data + 0x9a3c);
    *(undefined8 *)(data_offset + 0x9a34) = *(undefined8 *)(object_data + 0x9a34);
    *(undefined8 *)(data_offset + 0x9a3c) = config_flags[0];
    
    return data_offset;
}

// 函数：清理渲染哈希表
// 功能：清理渲染系统使用的哈希表，释放相关资源
// 参数：
//   hash_table_ptr - 哈希表指针
void cleanup_render_hash_table(longlong *hash_table_ptr)
{
    byte *string_ptr1;
    byte *string_ptr2;
    int str_length1;
    int str_length2;
    uint hash_value;
    undefined8 *entry_ptr;
    longlong table_start;
    longlong table_end;
    longlong entry_offset;
    int entry_index;
    longlong entry_size;
    ulonglong table_size;
    undefined8 *cleanup_ptr;
    longlong cleanup_offset;
    
    table_end = hash_table_ptr[1];
    table_start = *hash_table_ptr;
    
    if (table_end - table_start >> 5 != 0) {
        entry_index = 1;
        entry_offset = 0;
        
        do {
            table_size = (ulonglong)entry_index;
            entry_size = entry_offset;
            str_length2 = entry_index;
            
            if (table_size < (ulonglong)(table_end - table_start >> 5)) {
                do {
                    entry_size = entry_offset + 0x20;
                    str_length1 = *(int *)(table_start + 0x10 + entry_offset);
                    str_length2 = *(int *)(entry_offset + 0x30 + table_start);
                    
                    if (str_length1 == str_length2) {
                        if (str_length1 != 0) {
                            string_ptr1 = *(byte **)(table_start + 8 + entry_offset);
                            table_end = *(longlong *)(entry_offset + 0x28 + table_start) - (longlong)string_ptr1;
                            
                            do {
                                string_ptr2 = string_ptr1 + table_end;
                                str_length2 = (uint)*string_ptr1 - (uint)*string_ptr2;
                                if (str_length2 != 0) break;
                                string_ptr1 = string_ptr1 + 1;
                            } while (*string_ptr2 != 0);
                        }
                        
                        // 处理匹配的条目
                        if (str_length2 == 0) {
                            table_end = *hash_table_ptr;
                            table_start = (hash_table_ptr[1] - table_end & 0xffffffffffffffe0U) + table_end;
                            entry_size = entry_size + table_end;
                            hash_value = *(uint *)(table_start + -0x10);
                            table_size = (ulonglong)hash_value;
                            
                            if (*(longlong *)(table_start + -0x18) != 0) {
                                FUN_1806277c0(entry_size, table_size);
                            }
                            
                            if (hash_value != 0) {
                                memcpy(*(undefined8 *)(entry_size + 8), *(undefined8 *)(table_start + -0x18), table_size);
                            }
                            
                            *(undefined4 *)(entry_size + 0x10) = 0;
                            if (*(longlong *)(entry_size + 8) != 0) {
                                *(undefined1 *)(table_size + *(longlong *)(entry_size + 8)) = 0;
                            }
                            
                            *(undefined4 *)(entry_size + 0x1c) = *(undefined4 *)(table_start + -4);
                            entry_ptr = (undefined8 *)hash_table_ptr[1];
                            table_end = *hash_table_ptr;
                            table_size = (longlong)entry_ptr - table_end >> 5;
                            table_size = table_size - 1;
                            
                            if (table_size < table_size) {
                                FUN_18025aec0(hash_table_ptr, 0xffffffffffffffff);
                            }
                            else {
                                table_start = table_size * 0x20;
                                cleanup_ptr = (undefined8 *)(table_start + table_end);
                                
                                if (cleanup_ptr != entry_ptr) {
                                    do {
                                        (**(code **)*cleanup_ptr)(cleanup_ptr, 0);
                                        cleanup_ptr = cleanup_ptr + 4;
                                    } while (cleanup_ptr != entry_ptr);
                                    table_end = *hash_table_ptr;
                                }
                                hash_table_ptr[1] = table_start + table_end;
                            }
                            str_length2 = str_length2 + -1;
                            entry_size = entry_offset;
                        }
                    }
                    else if (str_length1 == 0) {
                        // 处理空字符串条目
                        table_end = *hash_table_ptr;
                        table_start = (hash_table_ptr[1] - table_end & 0xffffffffffffffe0U) + table_end;
                        entry_size = entry_size + table_end;
                        hash_value = *(uint *)(table_start + -0x10);
                        table_size = (ulonglong)hash_value;
                        
                        if (*(longlong *)(table_start + -0x18) != 0) {
                            FUN_1806277c0(entry_size, table_size);
                        }
                        
                        if (hash_value != 0) {
                            memcpy(*(undefined8 *)(entry_size + 8), *(undefined8 *)(table_start + -0x18), table_size);
                        }
                        
                        *(undefined4 *)(entry_size + 0x10) = 0;
                        if (*(longlong *)(entry_size + 8) != 0) {
                            *(undefined1 *)(table_size + *(longlong *)(entry_size + 8)) = 0;
                        }
                        
                        *(undefined4 *)(entry_size + 0x1c) = *(undefined4 *)(table_start + -4);
                        entry_ptr = (undefined8 *)hash_table_ptr[1];
                        table_end = *hash_table_ptr;
                        table_size = (longlong)entry_ptr - table_end >> 5;
                        table_size = table_size - 1;
                        
                        if (table_size < table_size) {
                            FUN_18025aec0(hash_table_ptr, 0xffffffffffffffff);
                        }
                        else {
                            table_start = table_size * 0x20;
                            cleanup_ptr = (undefined8 *)(table_start + table_end);
                            
                            if (cleanup_ptr != entry_ptr) {
                                do {
                                    (**(code **)*cleanup_ptr)(cleanup_ptr, 0);
                                    cleanup_ptr = cleanup_ptr + 4;
                                } while (cleanup_ptr != entry_ptr);
                                table_end = *hash_table_ptr;
                            }
                            hash_table_ptr[1] = table_start + table_end;
                        }
                        str_length2 = str_length2 + -1;
                        entry_size = entry_offset;
                    }
                    
                    table_start = *hash_table_ptr;
                    str_length2 = str_length2 + 1;
                    table_end = hash_table_ptr[1];
                    entry_offset = entry_size;
                } while ((ulonglong)(longlong)str_length2 < (ulonglong)(table_end - table_start >> 5));
            }
            entry_index = entry_index + 1;
            entry_offset = entry_offset + 0x20;
        } while (table_size < (ulonglong)(table_end - table_start >> 5));
    }
}

// 函数：合并渲染哈希表
// 功能：合并两个渲染哈希表，处理重复条目
// 参数：
//   table1_end - 第一个哈希表结束位置
//   table2_start - 第二个哈希表开始位置
void merge_render_hash_tables(longlong table1_end, longlong table2_start)
{
    byte *string_ptr1;
    byte *string_ptr2;
    int str_length1;
    int str_length2;
    uint hash_value;
    undefined8 *entry_ptr;
    longlong table_start;
    longlong table_end;
    longlong entry_offset;
    int entry_index;
    longlong entry_size;
    ulonglong table_size;
    undefined8 *cleanup_ptr;
    longlong cleanup_offset;
    undefined8 *source_table;
    undefined8 *dest_table;
    
    // 初始化源表和目标表指针
    *(undefined8 *)(table2_start + 0x10) = source_table;
    *(undefined8 *)(table2_start + 0x18) = dest_table;
    *(undefined8 *)(table2_start + 0x20) = table_start;
    *(undefined8 *)(table2_start + -0x10) = table_end;
    *(undefined8 *)(table2_start + -0x18) = entry_ptr;
    *(undefined8 *)(table2_start + -0x20) = entry_index;
    *(undefined8 *)(table2_start + -0x28) = entry_size;
    
    entry_index = 1;
    entry_size = 0;
    
    do {
        table_size = (ulonglong)entry_index;
        entry_offset = entry_size;
        str_length2 = entry_index;
        
        if (table_size < (ulonglong)(table1_end - table2_start >> 5)) {
            do {
                entry_size = entry_offset + 0x20;
                str_length1 = *(int *)(table2_start + 0x10 + entry_size);
                str_length2 = *(int *)(entry_size + 0x30 + table2_start);
                
                if (str_length1 == str_length2) {
                    if (str_length1 != 0) {
                        string_ptr1 = *(byte **)(table2_start + 8 + entry_size);
                        table_end = *(longlong *)(entry_size + 0x28 + table2_start) - (longlong)string_ptr1;
                        
                        do {
                            string_ptr2 = string_ptr1 + table_end;
                            str_length2 = (uint)*string_ptr1 - (uint)*string_ptr2;
                            if (str_length2 != 0) break;
                            string_ptr1 = string_ptr1 + 1;
                        } while (*string_ptr2 != 0);
                    }
                    
                    // 处理匹配的条目
                    if (str_length2 == 0) {
                        table_end = *dest_table;
                        table_start = (dest_table[1] - table_end & 0xffffffffffffffe0U) + table_end;
                        entry_size = entry_size + table_end;
                        hash_value = *(uint *)(table_start + -0x10);
                        table_size = (ulonglong)hash_value;
                        
                        if (*(longlong *)(table_start + -0x18) != 0) {
                            FUN_1806277c0(entry_size, table_size);
                        }
                        
                        if (hash_value != 0) {
                            memcpy(*(undefined8 *)(entry_size + 8), *(undefined8 *)(table_start + -0x18), table_size);
                        }
                        
                        *(undefined4 *)(entry_size + 0x10) = 0;
                        if (*(longlong *)(entry_size + 8) != 0) {
                            *(undefined1 *)(table_size + *(longlong *)(entry_size + 8)) = 0;
                        }
                        
                        *(undefined4 *)(entry_size + 0x1c) = *(undefined4 *)(table_start + -4);
                        entry_ptr = (undefined8 *)dest_table[1];
                        table_end = *dest_table;
                        table_size = (longlong)entry_ptr - table_end >> 5;
                        table_size = table_size - 1;
                        
                        if (table_size < table_size) {
                            FUN_18025aec0();
                        }
                        else {
                            table_start = table_size * 0x20;
                            cleanup_ptr = (undefined8 *)(table_start + table_end);
                            
                            if (cleanup_ptr != entry_ptr) {
                                do {
                                    (**(code **)*cleanup_ptr)(cleanup_ptr, 0);
                                    cleanup_ptr = cleanup_ptr + 4;
                                } while (cleanup_ptr != entry_ptr);
                                table_end = *dest_table;
                            }
                            dest_table[1] = table_start + table_end;
                        }
                        str_length2 = str_length2 + -1;
                        entry_size = entry_offset;
                    }
                }
                else if (str_length1 == 0) {
                    // 处理空字符串条目
                    table_end = *dest_table;
                    table_start = (dest_table[1] - table_end & 0xffffffffffffffe0U) + table_end;
                    entry_size = entry_size + table_end;
                    hash_value = *(uint *)(table_start + -0x10);
                    table_size = (ulonglong)hash_value;
                    
                    if (*(longlong *)(table_start + -0x18) != 0) {
                        FUN_1806277c0(entry_size, table_size);
                    }
                    
                    if (hash_value != 0) {
                        memcpy(*(undefined8 *)(entry_size + 8), *(undefined8 *)(table_start + -0x18), table_size);
                    }
                    
                    *(undefined4 *)(entry_size + 0x10) = 0;
                    if (*(longlong *)(entry_size + 8) != 0) {
                        *(undefined1 *)(table_size + *(longlong *)(entry_size + 8)) = 0;
                    }
                    
                    *(undefined4 *)(entry_size + 0x1c) = *(undefined4 *)(table_start + -4);
                    entry_ptr = (undefined8 *)dest_table[1];
                    table_end = *dest_table;
                    table_size = (longlong)entry_ptr - table_end >> 5;
                    table_size = table_size - 1;
                    
                    if (table_size < table_size) {
                        FUN_18025aec0();
                    }
                    else {
                        table_start = table_size * 0x20;
                        cleanup_ptr = (undefined8 *)(table_start + table_end);
                        
                        if (cleanup_ptr != entry_ptr) {
                            do {
                                (**(code **)*cleanup_ptr)(cleanup_ptr, 0);
                                cleanup_ptr = cleanup_ptr + 4;
                            } while (cleanup_ptr != entry_ptr);
                            table_end = *dest_table;
                        }
                        dest_table[1] = table_start + table_end;
                    }
                    str_length2 = str_length2 + -1;
                    entry_size = entry_offset;
                }
                
                table2_start = *dest_table;
                str_length2 = str_length2 + 1;
                table1_end = dest_table[1];
                entry_offset = entry_size;
            } while ((ulonglong)(longlong)str_length2 < (ulonglong)(table1_end - table2_start >> 5));
        }
        entry_index = entry_index + 1;
        entry_size = entry_size + 0x20;
        if ((ulonglong)(table1_end - table2_start >> 5) <= table_size) {
            return;
        }
    } while (true);
}

// 函数：空函数（占位符）
// 功能：空函数，用于预留接口
void empty_render_function(void)
{
    return;
}

// 函数：初始化渲染数组
// 功能：初始化渲染系统使用的数组结构
// 参数：
//   array_ptr - 数组指针
//   start_index - 起始索引
//   end_index - 结束索引
//   buffer_ptr - 缓冲区指针
//   element_size - 元素大小
void init_render_array(int *array_ptr, int start_index, int end_index, longlong buffer_ptr, int element_size)
{
    uint array_size;
    undefined1 alignment_data[16];
    uint current_index;
    int remaining_size;
    longlong *array_data;
    longlong data_offset;
    int loop_index;
    undefined1 temp_data[16];
    undefined1 matrix_data[16];
    undefined1 vector_data[16];
    
    alignment_data = _DAT_180a3f750;
    array_size = element_size - 1;
    current_index = 0;
    
    // 批量初始化数组元素
    if (((0 < (int)array_size) && (current_index = 0, 3 < array_size)) && (1 < _DAT_180bf00b0)) {
        uint aligned_size = array_size & 0x80000003;
        if ((int)aligned_size < 0) {
            aligned_size = (aligned_size - 1 | 0xfffffffc) + 1;
        }
        
        array_data = (longlong *)(buffer_ptr + 0x28);
        loop_index = 0;
        
        do {
            int next_index = loop_index + 2;
            temp_data._8_8_ = 0;
            temp_data._0_8_ = alignment_data._0_8_;
            current_index = loop_index + 4;
            matrix_data._0_4_ = loop_index + alignment_data._0_4_ + 1;
            matrix_data._4_4_ = loop_index + alignment_data._4_4_ + 1;
            matrix_data._8_4_ = loop_index;
            matrix_data._12_4_ = loop_index;
            temp_data = pmovsxdq(temp_data, matrix_data);
            
            array_data[-4] = temp_data._0_8_ * 0x10 + buffer_ptr;
            array_data[-2] = temp_data._8_8_ + buffer_ptr;
            
            vector_data._8_8_ = 0;
            vector_data._0_8_ = alignment_data._0_8_;
            matrix_data._0_4_ = next_index + alignment_data._0_4_ + 1;
            matrix_data._4_4_ = next_index + alignment_data._4_4_ + 1;
            matrix_data._8_4_ = next_index;
            matrix_data._12_4_ = next_index;
            temp_data = pmovsxdq(vector_data, matrix_data);
            
            *array_data = temp_data._0_8_ * 0x10 + buffer_ptr;
            array_data[2] = temp_data._8_8_ + buffer_ptr;
            array_data = array_data + 8;
            loop_index = current_index;
        } while (current_index < (int)(array_size - aligned_size));
    }
    
    data_offset = (longlong)current_index;
    loop_index = current_index;
    
    // 处理剩余元素
    if (data_offset < (int)array_size) {
        remaining_size = (int)array_size - data_offset;
        loop_index = current_index + (int)remaining_size;
        array_data = (longlong *)(data_offset * 0x10 + 8 + buffer_ptr);
        
        do {
            current_index = current_index + 1;
            *array_data = (longlong)current_index * 0x10 + buffer_ptr;
            remaining_size = remaining_size + -1;
            array_data = array_data + 2;
        } while (remaining_size != 0);
    }
    
    // 设置数组结束标记
    *(undefined8 *)(buffer_ptr + 8 + (longlong)loop_index * 0x10) = 0;
    *array_ptr = start_index;
    array_ptr[1] = end_index;
    array_ptr[5] = element_size;
    array_ptr[3] = 1;
    array_ptr[4] = 0;
    *(longlong *)(array_ptr + 8) = buffer_ptr;
    *(int **)(array_ptr + 6) = array_ptr + 10;
    array_ptr[2] = (element_size + -1 + start_index) / element_size;
    *(short *)(array_ptr + 0xe) = (short)start_index;
    *(int **)(array_ptr + 0xc) = array_ptr + 0xe;
    *(undefined2 *)((longlong)array_ptr + 0x3a) = 0xffff;
    *(undefined2 *)(array_ptr + 10) = 0;
    *(undefined2 *)((longlong)array_ptr + 0x2a) = 0;
    array_ptr[0x10] = 0;
    array_ptr[0x11] = 0;
}

// 函数：处理渲染数组
// 功能：处理渲染系统中的数组数据，应用变换和填充操作
// 参数：
//   array_size - 数组大小
//   transform_data - 变换数据
//   fill_data - 填充数据
//   buffer_ptr - 缓冲区指针
void process_render_array(int array_size, undefined8 transform_data, undefined8 fill_data, longlong buffer_ptr)
{
    int current_index;
    uint processed_size;
    longlong *array_data;
    int remaining_size;
    longlong data_offset;
    int start_index;
    int end_index;
    int element_size;
    undefined8 fill_value;
    undefined1 transform_vector[16];
    undefined1 matrix_data[16];
    undefined1 vector_data[16];
    
    processed_size = array_size & 0x80000003;
    if ((int)processed_size < 0) {
        processed_size = (processed_size - 1 | 0xfffffffc) + 1;
    }
    
    array_data = (longlong *)(buffer_ptr + 0x28);
    
    do {
        current_index = start_index;
        int next_index = start_index + 2;
        transform_vector._8_8_ = 0;
        transform_vector._0_8_ = fill_data;
        int matrix_index = (int)(fill_data >> 0x20);
        start_index = start_index + 4;
        matrix_data._0_4_ = start_index + (int)fill_data + 1;
        matrix_data._4_4_ = start_index + matrix_index + 1;
        matrix_data._8_4_ = start_index;
        matrix_data._12_4_ = start_index;
        transform_vector = pmovsxdq(transform_vector, matrix_data);
        
        array_data[-4] = transform_vector._0_8_ * 0x10 + buffer_ptr;
        array_data[-2] = transform_vector._8_8_ + transform_data;
        
        vector_data._8_8_ = 0;
        vector_data._0_8_ = fill_data;
        matrix_data._0_4_ = next_index + (int)fill_data + 1;
        matrix_data._4_4_ = next_index + matrix_index + 1;
        matrix_data._8_4_ = next_index;
        matrix_data._12_4_ = next_index;
        transform_vector = pmovsxdq(vector_data, matrix_data);
        
        *array_data = transform_vector._0_8_ * 0x10 + buffer_ptr;
        array_data[2] = transform_vector._8_8_ + transform_data;
        array_data = array_data + 8;
    } while (start_index < (int)(array_size - processed_size));
    
    data_offset = (longlong)start_index;
    if (data_offset < array_size) {
        current_index = start_index + 1;
        remaining_size = array_size - data_offset;
        start_index = start_index + (int)remaining_size;
        array_data = (longlong *)(data_offset * 0x10 + 8 + buffer_ptr);
        
        do {
            data_offset = (longlong)current_index;
            current_index = current_index + 1;
            *array_data = data_offset * 0x10 + buffer_ptr;
            remaining_size = remaining_size + -1;
            array_data = array_data + 2;
        } while (remaining_size != 0);
    }
    
    *(undefined8 *)(buffer_ptr + 8 + (longlong)start_index * 0x10) = fill_value;
}

// 函数：填充渲染数组
// 功能：用指定值填充渲染数组
// 参数：
//   array_size - 数组大小
//   fill_value - 填充值
//   unused_param - 未使用参数
//   buffer_ptr - 缓冲区指针
void fill_render_array(int array_size, undefined8 fill_value, undefined8 unused_param, longlong buffer_ptr)
{
    longlong *array_data;
    int current_index;
    longlong data_offset;
    int remaining_size;
    int start_index;
    int end_index;
    int element_size;
    
    data_offset = (longlong)start_index;
    if (data_offset < array_size) {
        current_index = start_index + 1;
        remaining_size = array_size - data_offset;
        start_index = start_index + (int)remaining_size;
        array_data = (longlong *)(data_offset * 0x10 + 8 + buffer_ptr);
        
        do {
            data_offset = (longlong)current_index;
            current_index = current_index + 1;
            *array_data = data_offset * 0x10 + buffer_ptr;
            remaining_size = remaining_size + -1;
            array_data = array_data + 2;
        } while (remaining_size != 0);
    }
    
    *(undefined8 *)(buffer_ptr + 8 + (longlong)start_index * 0x10) = fill_value;
    *array_data = end_index;
    array_data[1] = start_index;
    array_data[5] = element_size;
    array_data[3] = 1;
    array_data[4] = 0;
    *(longlong *)(array_data + 8) = buffer_ptr;
    *(int **)(array_data + 6) = array_data + 10;
    array_data[2] = (element_size + -1 + end_index) / element_size;
    *(short *)(array_data + 0xe) = (short)end_index;
    *(int **)(array_data + 0xc) = array_data + 0xe;
    *(undefined2 *)((longlong)array_data + 0x3a) = 0xffff;
    *(short *)(array_data + 10) = (short)fill_value;
    *(short *)((longlong)array_data + 0x2a) = (short)fill_value;
    *(undefined8 *)(array_data + 0x10) = fill_value;
}

// 函数：计算渲染索引
// 功能：计算渲染系统中的索引值
// 参数：
//   data_param - 数据参数
//   index_array - 索引数组
//   start_pos - 起始位置
//   range_size - 范围大小
//   result_ptr - 结果指针
// 返回值：计算得到的索引值
uint calculate_render_index(undefined8 data_param, ushort *index_array, int start_pos, int range_size, int *result_ptr)
{
    ushort current_value;
    uint index_value;
    uint max_index;
    int loop_index;
    uint range_end;
    ushort *value_ptr;
    int accumulated_value;
    int current_pos;
    
    index_value = 0;
    loop_index = 0;
    accumulated_value = 0;
    
    if ((int)(uint)*index_array < start_pos + range_size) {
        do {
            max_index = (uint)index_array[1];
            if (index_value < index_array[1]) {
                value_ptr = *(ushort **)(index_array + 4);
                accumulated_value = (max_index - index_value) * accumulated_value;
                current_value = *value_ptr;
                index_value = (uint)current_value;
                max_index = max_index;
                
                if ((int)(uint)*index_array < start_pos) {
                    accumulated_value = accumulated_value + ((uint)current_value - start_pos);
                }
                else {
                    accumulated_value = accumulated_value + ((uint)current_value - (uint)*index_array);
                }
            }
            else {
                value_ptr = *(ushort **)(index_array + 4);
                max_index = (uint)*value_ptr;
                accumulated_value = range_size - accumulated_value;
                
                if ((int)((max_index - *index_array) + accumulated_value) <= range_size) {
                    accumulated_value = max_index - *index_array;
                }
                accumulated_value = accumulated_value + accumulated_value;
                accumulated_value = (index_value - max_index) * accumulated_value;
            }
            loop_index = loop_index + accumulated_value;
            index_array = value_ptr;
        } while ((int)max_index < start_pos + range_size);
        *result_ptr = loop_index;
    }
    else {
        *result_ptr = 0;
    }
    return index_value;
}

// 函数：处理渲染索引
// 功能：处理渲染系统中的索引数据
// 返回值：处理后的索引值
uint process_render_index(void)
{
    ushort current_value;
    uint index_value;
    uint max_index;
    int loop_index;
    uint range_end;
    ushort *value_ptr;
    int accumulated_value;
    int start_index;
    int end_index;
    int range_size;
    int *result_ptr;
    
    do {
        max_index = (uint)value_ptr[1];
        if ((int)range_end < (int)(uint)value_ptr[1]) {
            value_ptr = *(ushort **)(value_ptr + 4);
            accumulated_value = (max_index - range_end) * start_index;
            current_value = *value_ptr;
            index_value = (uint)current_value;
            max_index = max_index;
            
            if ((int)(uint)*value_ptr < loop_index) {
                start_index = start_index + ((uint)current_value - loop_index);
            }
            else {
                start_index = start_index + ((uint)current_value - (uint)*value_ptr);
            }
        }
        else {
            value_ptr = *(ushort **)(value_ptr + 4);
            max_index = (uint)*value_ptr;
            accumulated_value = range_size - start_index;
            
            if ((int)((max_index - *value_ptr) + start_index) <= range_size) {
                accumulated_value = max_index - *value_ptr;
            }
            start_index = start_index + accumulated_value;
            accumulated_value = (range_end - max_index) * accumulated_value;
        }
        end_index = end_index + accumulated_value;
        value_ptr = value_ptr;
    } while ((int)max_index < start_index);
    *result_ptr = end_index;
    return range_end;
}

// 函数：获取渲染数据
// 功能：获取渲染系统中的数据值
// 返回值：渲染数据值
undefined4 get_render_data(void)
{
    undefined4 data_value;
    undefined4 *result_ptr;
    
    *result_ptr = data_value;
    return data_value;
}

// 简化实现说明：
// 原始实现：这是一个复杂的反编译代码，包含大量的栈变量、内存操作和未定义的函数调用
// 简化实现：通过语义化命名、添加注释、重组代码结构，使其更易读和维护
// 保留核心功能：渲染对象状态更新、字符串处理、渲染数据对象创建、对象创建、哈希表清理等
// 代码文件：03_rendering_part038.c - 渲染系统高级对象管理和字符串处理模块