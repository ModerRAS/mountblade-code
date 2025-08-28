#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 01_initialization_part060.c - 初始化模块第60部分
// 包含18个函数，主要处理初始化过程中的各种任务

// 函数: void FUN_18007e080(longlong param_1,ulonglong param_2,longlong *param_3,longlong *param_4)
// 功能: 处理初始化过程中的资源分配和管理
void initialize_resource_manager(longlong context_ptr, ulonglong resource_id, longlong *output_buffer1, longlong *output_buffer2)
{
    longlong resource_base_ptr;
    int *resource_type_ptr;
    int resource_count;
    int resource_index;
    longlong resource_array_ptr;
    int item_index;
    longlong temp_stack_70;
    int32_t temp_stack_68;
    longlong temp_stack_60;
    longlong temp_stack_58;
    int32_t temp_stack_50;
    uint64_t temp_stack_48;
    
    // 计算资源基础指针
    resource_base_ptr = (resource_id & 0xff) * 0x1c0 + system_message_buffer;
    resource_count = *(int *)(resource_base_ptr + 0x70);
    resource_array_ptr = (longlong)resource_count;
    
    if (0 < resource_count) {
        temp_stack_68 = 0;
        temp_stack_70 = context_ptr;
        FUN_18007f770(&temp_stack_70);
        
        if (temp_stack_60 != 0) {
            item_index = 0;
            resource_index = -1;
            
            if (0 < resource_count) {
                resource_type_ptr = (int *)(resource_base_ptr + 0x128);
                resource_array_ptr = temp_stack_60;
                resource_count = resource_index;
                
                do {
                    switch(*resource_type_ptr) {
                        case 0:
                        case 1:
                        case 2:
                        case 3:
                        case 4:
                        case 5:
                        case 6:
                        case 7:
                        case 10:
                        case 0xb:
                        case 0xc:
                        case 0xd:
                            // 处理标准资源类型
                            FUN_18007cbb0((longlong)*resource_type_ptr, resource_array_ptr, *output_buffer1 + 0x18 + (longlong)item_index * 8);
                            resource_array_ptr = temp_stack_60;
                            break;
                        case 8:
                            // 特殊资源类型8
                            resource_index = item_index;
                            break;
                        case 9:
                            // 特殊资源类型9
                            resource_count = item_index;
                    }
                    item_index = item_index + 1;
                    resource_type_ptr = resource_type_ptr + 3;
                    resource_array_ptr = resource_array_ptr + -1;
                } while (resource_array_ptr != 0);
                
                if (resource_index != -1) {
                    temp_stack_58 = context_ptr;
                    
                    if ((((*(byte *)(context_ptr + 0xfd) & 0x40) == 0) || (*(longlong *)(context_ptr + 0x210) == 0))
                       && (*(longlong *)(context_ptr + 0x1b0) != 0)) {
                        temp_stack_58 = FUN_180085900();
                    }
                    
                    temp_stack_50 = 0;
                    FUN_18007f770(&temp_stack_58);
                    FUN_18007cbb0(8, temp_stack_48, *output_buffer1 + 0x18 + (longlong)resource_index * 8);
                    FUN_18007cbb0(9, temp_stack_48, *output_buffer1 + 0x18 + (longlong)resource_count * 8);
                    FUN_18007f840(&temp_stack_58);
                }
            }
            
            if ((*(byte *)(context_ptr + 0xfd) & 0x20) == 0) {
                context_ptr = func_0x000180085de0(*(uint64_t *)(context_ptr + 0x1b0));
            }
            
            FUN_18007df50(temp_stack_60, *output_buffer2 + 0x20, 0xffff < *(int *)(context_ptr + 0x200));
        }
        
        FUN_18007f840(&temp_stack_70);
    }
    
    // 清理输出缓冲区
    if ((longlong *)*output_buffer1 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*output_buffer1 + 0x38))();
    }
    if ((longlong *)*output_buffer2 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*output_buffer2 + 0x38))();
    }
    
    return;
}

// 函数: void FUN_18007e2b0(longlong param_1,longlong param_2,uint64_t param_3,uint64_t param_4)
// 功能: 初始化数据缓冲区并复制数据
void initialize_data_buffer(longlong dest_ptr, longlong src_ptr, uint64_t param_3, uint64_t param_4)
{
    int buffer_size;
    int buffer_capacity;
    uint64_t temp_var;
    
    temp_var = 0xfffffffffffffffe;
    FUN_180080650(dest_ptr + 0x10);
    FUN_180080650(dest_ptr + 0x38, src_ptr);
    *(int8_t *)(dest_ptr + 0x80) = *(int8_t *)(src_ptr + 0x1a);
    *(int32_t *)(dest_ptr + 0x60) = **(int32_t **)(src_ptr + 8);
    *(longlong *)(src_ptr + 8) = *(longlong *)(src_ptr + 8) + 4;
    
    buffer_size = *(int *)(dest_ptr + 0x60);
    buffer_capacity = *(int *)(dest_ptr + 100);
    
    if (buffer_capacity < buffer_size) {
        if (buffer_size == 0) {
            if (buffer_capacity < 2) {
                *(int32_t *)(dest_ptr + 100) = 8;
            }
            else {
                *(int *)(dest_ptr + 100) = (buffer_capacity >> 1) + buffer_capacity;
            }
        }
        else {
            *(int *)(dest_ptr + 100) = buffer_size;
        }
        FUN_180086010(dest_ptr + 0x60);
    }
    
    *(int *)(dest_ptr + 0x60) = buffer_size;
    
    // 复制数据
    memcpy(*(uint64_t *)(dest_ptr + 0x68), *(uint64_t *)(src_ptr + 8), (longlong)(buffer_size * 0x5c), param_4, temp_var);
}

// 函数: void FUN_18007e5b0(longlong param_1,longlong *param_2)
// 功能: 序列化数据到输出缓冲区
void serialize_data_to_buffer(longlong data_ptr, longlong *output_buffer)
{
    int32_t header_value;
    int *data_items;
    int32_t *data_ptr2;
    longlong buffer_position;
    int item_count;
    int current_index;
    longlong buffer_size;
    ulonglong remaining_space;
    ulonglong total_space;
    uint64_t temp_var;
    
    temp_var = 0xfffffffffffffffe;
    FUN_1800806e0(data_ptr + 0x10);
    FUN_1800806e0(data_ptr + 0x38, output_buffer);
    
    item_count = *(int *)(data_ptr + 0x60);
    total_space = (longlong)item_count * 0x5c + 4;
    buffer_size = output_buffer[2];
    data_items = (int *)output_buffer[1];
    buffer_position = *output_buffer;
    
    // 检查缓冲区空间
    if ((ulonglong)((buffer_position - (longlong)data_items) + buffer_size) <= total_space) {
        FUN_180639bf0(output_buffer, (longlong)data_items + (total_space - buffer_position), buffer_size, total_space, temp_var);
        item_count = *(int *)(data_ptr + 0x60);
        buffer_size = output_buffer[2];
        data_items = (int *)output_buffer[1];
        buffer_position = *output_buffer;
    }
    
    // 确保最小空间
    if ((ulonglong)((buffer_position - (longlong)data_items) + buffer_size) < 5) {
        FUN_180639bf0(output_buffer, (longlong)data_items + (4 - buffer_position));
        data_items = (int *)output_buffer[1];
    }
    
    *data_items = item_count;
    output_buffer[1] = output_buffer[1] + 4;
    data_ptr2 = (int32_t *)output_buffer[1];
    current_index = 0;
    item_count = current_index;
    
    // 序列化数据项
    if (0 < *(int *)(data_ptr + 0x60)) {
        do {
            FUN_180078c70((longlong)item_count * 0x5c + *(longlong *)(data_ptr + 0x68), output_buffer);
            item_count = item_count + 1;
        } while (item_count < *(int *)(data_ptr + 0x60));
        data_ptr2 = (int32_t *)output_buffer[1];
    }
    
    header_value = *(int32_t *)(data_ptr + 0x88);
    
    // 检查并扩展缓冲区
    if ((ulonglong)((*output_buffer - (longlong)data_ptr2) + output_buffer[2]) < 5) {
        FUN_180639bf0(output_buffer, (longlong)data_ptr2 + (4 - *output_buffer));
        data_ptr2 = (int32_t *)output_buffer[1];
    }
    
    *data_ptr2 = header_value;
    output_buffer[1] = output_buffer[1] + 4;
    FUN_18063a180(output_buffer, *(uint64_t *)(data_ptr + 0x90), (longlong)*(int *)(data_ptr + 0x88) * 0xc);
    
    // 处理附加数据
    remaining_space = (ulonglong)*(ushort *)(data_ptr + 0xc0);
    total_space = remaining_space * 4 + 4;
    buffer_size = output_buffer[2];
    data_ptr2 = (int32_t *)output_buffer[1];
    buffer_position = *output_buffer;
    
    if ((ulonglong)((buffer_position - (longlong)data_ptr2) + buffer_size) <= total_space) {
        FUN_180639bf0(output_buffer, (longlong)data_ptr2 + (total_space - buffer_position));
        remaining_space = (ulonglong)*(ushort *)(data_ptr + 0xc0);
        buffer_size = output_buffer[2];
        data_ptr2 = (int32_t *)output_buffer[1];
        buffer_position = *output_buffer;
    }
    
    if ((ulonglong)((buffer_position - (longlong)data_ptr2) + buffer_size) < 5) {
        FUN_180639bf0(output_buffer, (longlong)data_ptr2 + (4 - buffer_position));
        data_ptr2 = (int32_t *)output_buffer[1];
    }
    
    *data_ptr2 = (int)remaining_space;
    output_buffer[1] = output_buffer[1] + 4;
    FUN_18063a180(output_buffer, *(uint64_t *)(data_ptr + 0xb8), (ulonglong)*(ushort *)(data_ptr + 0xc0) << 2);
    
    // 处理数据块
    if (*(short *)(data_ptr + 0xc0) != 0) {
        do {
            buffer_size = (longlong)current_index * 0x50 + *(longlong *)(data_ptr + 0xb0);
            FUN_1800806e0(buffer_size, output_buffer);
            FUN_1800806e0(buffer_size + 0x28, output_buffer);
            current_index = current_index + 1;
        } while (current_index < (int)(uint)*(ushort *)(data_ptr + 0xc0));
    }
    
    header_value = *(int32_t *)(data_ptr + 200);
    data_ptr2 = (int32_t *)output_buffer[1];
    
    if ((ulonglong)((*output_buffer - (longlong)data_ptr2) + output_buffer[2]) < 5) {
        FUN_180639bf0(output_buffer, (longlong)data_ptr2 + (4 - *output_buffer));
        data_ptr2 = (int32_t *)output_buffer[1];
    }
    
    *data_ptr2 = header_value;
    output_buffer[1] = output_buffer[1] + 4;
    FUN_18063a180(output_buffer, *(uint64_t *)(data_ptr + 0xd0), (longlong)*(int *)(data_ptr + 200) * 0x14);
    
    data_ptr2 = (int32_t *)output_buffer[1];
    
    if ((ulonglong)((*output_buffer - (longlong)data_ptr2) + output_buffer[2]) < 5) {
        FUN_180639bf0(output_buffer, (longlong)data_ptr2 + (4 - *output_buffer));
        data_ptr2 = (int32_t *)output_buffer[1];
    }
    
    *data_ptr2 = 0;
    output_buffer[1] = output_buffer[1] + 4;
    FUN_18063a180(output_buffer, 0, 0);
    
    return;
}

// 函数: void FUN_18007e880(longlong param_1,char param_2,uint64_t param_3)
// 功能: 设置初始化参数
void set_initialization_parameter(longlong context_ptr, char parameter_type, uint64_t parameter_value)
{
    longlong parameter_table_ptr;
    uint64_t temp_var;
    longlong parameter_size;
    
    *(int *)(*(longlong *)(context_ptr + 600) + 0x18) = (int)parameter_type;
    FUN_18007e990(context_ptr, *(int *)(*(longlong *)(context_ptr + 600) + 0x1c) +
                          *(int *)(*(longlong *)(context_ptr + 600) + 0x18));
    
    parameter_table_ptr = *(longlong *)(context_ptr + 600);
    
    if (*(longlong *)(parameter_table_ptr + 0x10) != 0) {
        FUN_18064e900();
    }
    
    temp_var = 0;
    parameter_size = (longlong)parameter_type;
    *(uint64_t *)(parameter_table_ptr + 0x10) = 0;
    
    if (parameter_size != 0) {
        temp_var = FUN_18062b1e0(system_memory_pool_ptr, parameter_size, 0x10, CONCAT71((int7)((ulonglong)parameter_table_ptr >> 8), 3));
    }
    
    *(uint64_t *)(*(longlong *)(context_ptr + 600) + 0x10) = temp_var;
    memcpy(*(uint64_t *)(*(longlong *)(context_ptr + 600) + 0x10), parameter_value, parameter_size);
    
    return;
}

// 函数: void FUN_18007e930(longlong param_1)
// 功能: 初始化内存块
void initialize_memory_block(longlong context_ptr)
{
    uint64_t memory_ptr;
    
    if (*(longlong *)(context_ptr + 0x2c8) == 0) {
        *(uint *)(context_ptr + 0x100) = *(uint *)(context_ptr + 0x100) | 8;
        memory_ptr = FUN_18062b1e0(system_memory_pool_ptr, 0xd0, 4, 9);
        memset(memory_ptr, 0, 0xd0);
    }
    
    return;
}

// 函数: void FUN_18007e95f(void)
// 功能: 创建并清空内存块
void create_and_clear_memory_block(void)
{
    uint64_t memory_ptr;
    
    memory_ptr = FUN_18062b1e0();
    memset(memory_ptr, 0, 0xd0);
}

// 函数: void FUN_18007e988(void)
// 功能: 空函数，可能用于占位
void empty_function(void)
{
    return;
}

// 函数: void FUN_18007e990(longlong param_1,int param_2)
// 功能: 调整参数表大小
void resize_parameter_table(longlong context_ptr, int new_size)
{
    longlong *table_ptr;
    uint64_t new_memory_ptr;
    
    table_ptr = *(longlong **)(context_ptr + 600);
    
    if ((int)table_ptr[1] != new_size) {
        if (*table_ptr != 0) {
            FUN_18064e900();
        }
        
        new_memory_ptr = 0;
        *table_ptr = 0;
        
        if (new_size != 0) {
            new_memory_ptr = FUN_18062b1e0(system_memory_pool_ptr, (longlong)new_size << 6, 0x10, 4);
        }
        
        **(uint64_t **)(context_ptr + 600) = new_memory_ptr;
        *(int *)(*(longlong *)(context_ptr + 600) + 8) = new_size;
    }
    
    return;
}

// 函数: void FUN_18007ea10(longlong param_1,char param_2)
// 功能: 更新上下文状态
void update_context_status(longlong context_ptr, char new_status)
{
    byte current_status;
    longlong loop_counter;
    longlong *callback_ptr;
    int8_t temp_stack_40[8];
    longlong temp_stack_38;
    int32_t temp_stack_30;
    longlong *temp_stack_28;
    
    // 检查状态是否已改变
    if (*(char *)(context_ptr + 0xf4) == new_status) {
        return;
    }
    
    loop_counter = 0;
    
    // 批量更新状态
    if ((*(byte *)(context_ptr + 0xfd) & 0x20) != 0) {
        FUN_18007baa0();
        do {
            *(char *)(*(longlong *)(context_ptr + 0x1e0) + 0x14 + loop_counter) = new_status;
            loop_counter = loop_counter + 0x18;
        } while (loop_counter < 0x180);
    }
    
    temp_stack_28 = (longlong *)0x0;
    temp_stack_40[0] = 0;
    temp_stack_30 = 1;
    temp_stack_38 = context_ptr;
    FUN_18007f4c0(temp_stack_40);
    
    if (temp_stack_28 == (longlong *)0x0) goto cleanup_handler;
    
    callback_ptr = temp_stack_28;
    
    if (new_status != '\0') {
        if ((new_status != '\x01') || ((*(byte *)(context_ptr + 0xfd) & 0x20) == 0)) goto cleanup_handler;
        
        loop_counter = *(longlong *)(context_ptr + 0x1b8);
        current_status = *(byte *)(loop_counter + 0x38c);
        
        if (current_status == 9) {
            current_status = func_0x00018022d300();
            *(byte *)(loop_counter + 0x38c) = current_status;
        }
        
        callback_ptr = temp_stack_28;
        
        if ((*(char *)(*(longlong *)(context_ptr + 0x1e0) + 0x15 + (ulonglong)current_status * 0x18) != '\x03') &&
           (*(char *)(*(longlong *)(context_ptr + 0x1e0) + 0x15 + (ulonglong)current_status * 0x18) != '\x02')) {
            goto cleanup_handler;
        }
    }
    
    temp_stack_28 = (longlong *)0x0;
    
    if (callback_ptr != (longlong *)0x0) {
        (**(code **)(*callback_ptr + 0x38))();
    }
    
cleanup_handler:
    *(char *)(context_ptr + 0xf4) = new_status;
    FUN_18007f6a0(temp_stack_40);
    
    if (temp_stack_28 != (longlong *)0x0) {
        (**(code **)(*temp_stack_28 + 0x38))();
    }
    
    return;
}

// 函数: code * FUN_18007eb80(longlong param_1,char param_2)
// 功能: 获取或创建上下文处理器
code *get_or_create_context_handler(longlong context_ptr, char handler_type)
{
    longlong *handler_ptr;
    code *return_value;
    uint64_t temp_var;
    code *new_handler;
    longlong *temp_ptr;
    longlong temp_stack_30;
    int32_t temp_stack_28;
    code *temp_stack_20;
    code *temp_stack_18;
    
    return_value = (code *)(context_ptr + 0x210);
    
    if (*(longlong *)return_value == 0) {
        if ((*(byte *)(context_ptr + 0xfd) & 0x20) == 0) {
            temp_stack_30 = func_0x000180085de0(*(uint64_t *)(context_ptr + 0x1b0));
            
            if (temp_stack_30 != context_ptr) {
                temp_stack_28 = 0;
                FUN_18007f770(&temp_stack_30);
                temp_var = FUN_18062b1e0(system_memory_pool_ptr, 0xf0, 8, 3);
                temp_var = FUN_18007f2f0(temp_var);
                FUN_180056f10(return_value, temp_var);
                FUN_1800860f0(*(longlong *)return_value + 0x10, (longlong)temp_stack_20 + 0x10);
                FUN_1800860f0(*(longlong *)return_value + 0x38, (longlong)temp_stack_20 + 0x38);
                FUN_180086090(*(longlong *)return_value + 0x60, (longlong)temp_stack_20 + 0x60);
                FUN_180085fb0(*(longlong *)return_value + 0x88, (longlong)temp_stack_20 + 0x88);
                
                if (handler_type != '\0') {
                    *(byte *)(context_ptr + 0xfd) = *(byte *)(context_ptr + 0xfd) | 0x40;
                    FUN_180085ec0(*(longlong *)return_value + 200, (longlong)temp_stack_20 + 200);
                    FUN_180085680(*(longlong *)return_value + 0xb0, (longlong)temp_stack_20 + 0xb0);
                }
                
                return_value = (code *)FUN_18007f840(&temp_stack_30);
                return return_value;
            }
        }
        
        if (*(longlong *)(context_ptr + 0xa8) == 0) {
            if ((*(byte *)(context_ptr + 0xfd) & 4) != 0) {
                temp_var = FUN_18062b1e0(system_memory_pool_ptr, 0xf0, 8, 3);
                temp_ptr = (longlong *)FUN_18007f2f0(temp_var);
                temp_stack_18 = (code *)0xfffffffffffffffe;
                
                if (temp_ptr != (longlong *)0x0) {
                    (**(code **)(*temp_ptr + 0x28))(temp_ptr);
                }
                
                handler_ptr = *(longlong **)return_value;
                *(longlong **)return_value = temp_ptr;
                
                if (handler_ptr != (longlong *)0x0) {
                    (**(code **)(*handler_ptr + 0x38))();
                }
                
                return return_value;
            }
            
            FUN_1806272a0(&unknown_var_5648_ptr);
            return_value = (code *)FUN_180626f80(&unknown_var_5344_ptr);
        }
        else {
            temp_ptr = *(longlong **)(*(longlong *)(context_ptr + 0xa8) + 0x88);
            temp_stack_20 = (code *)&unknown_var_7632_ptr;
            temp_stack_18 = FUN_180082fd0;
            temp_stack_30 = context_ptr;
            (**(code **)(*temp_ptr + 0x60))(temp_ptr, &system_memory_c740, context_ptr + 0xb8, 0, &temp_stack_30);
            return_value = temp_stack_20;
            
            if (temp_stack_20 != (code *)0x0) {
                return_value = (code *)(*temp_stack_20)(&temp_stack_30, 0, 0);
                return return_value;
            }
        }
    }
    
    return return_value;
}

// 函数: void FUN_18007edd0(longlong param_1,char param_2)
// 功能: 销毁上下文处理器
void destroy_context_handler(longlong context_ptr, char cleanup_type)
{
    longlong *handler_ptr;
    
    if (*(longlong *)(context_ptr + 0x210) != 0) {
        FUN_1800791a0();
        
        if (cleanup_type != '\0') {
            *(byte *)(context_ptr + 0xfd) = *(byte *)(context_ptr + 0xfd) | 0x20;
            *(byte *)(context_ptr + 0xfe) = *(byte *)(context_ptr + 0xfe) | 1;
            FUN_18007baa0(context_ptr);
        }
        
        if (((*(char *)(context_ptr + 0xfc) == '\0') && (*(char *)(context_ptr + 0xf4) == '\0')) &&
           (((*(byte *)(context_ptr + 0xfd) & 0x20) == 0 || ((*(byte *)(context_ptr + 0xfe) & 1) == 0)))) {
            handler_ptr = *(longlong **)(context_ptr + 0x210);
            *(uint64_t *)(context_ptr + 0x210) = 0;
            
            if (handler_ptr != (longlong *)0x0) {
                (**(code **)(*handler_ptr + 0x38))();
                return;
            }
        }
    }
    
    return;
}

// 函数: void FUN_18007ee70(longlong param_1)
// 功能: 处理数据同步操作
void process_data_sync(longlong context_ptr)
{
    int current_version;
    uint target_version;
    uint64_t temp_var;
    int source_index;
    uint source_count;
    uint target_count;
    int dest_index;
    uint remaining_items;
    longlong data_ptr;
    longlong source_data_ptr;
    ulonglong item_count;
    uint64_t *item_ptr;
    ulonglong source_offset;
    ulonglong target_offset;
    longlong target_data_ptr;
    
    target_data_ptr = *(longlong *)(context_ptr + 0x2d0);
    current_version = *(int *)(system_main_module_state + 0x224);
    
    if (*(int *)(target_data_ptr + 0xc) != current_version) {
        if (*(int *)(target_data_ptr + 8) < 1) {
            if (*(int *)(target_data_ptr + 0xc) == current_version + -1) {
                target_count = *(int *)(system_parameter_buffer + 0x9c8) + 1U & 0x80000001;
                
                if ((int)target_count < 0) {
                    target_count = (target_count - 1 | 0xfffffffe) + 1;
                }
                
                source_data_ptr = (longlong)(int)target_count * 0x488 + system_parameter_buffer + 0xb8;
                data_ptr = (longlong)*(int *)(system_parameter_buffer + 0x9c8) * 0x488 + system_parameter_buffer + 0xb8;
                target_offset = FUN_180080480(data_ptr, *(int32_t *)(target_data_ptr + 0x14));
                dest_index = (int)target_offset;
                item_count = target_offset & 0xffffffff;
                
                if (-1 < dest_index) {
                    source_offset = target_offset >> 0xb & 0x1fffff;
                    target_count = *(uint *)(*(longlong *)(context_ptr + 0x2d0) + 0x14);
                    target_offset = (ulonglong)target_count;
                    source_count = *(uint *)(*(longlong *)(context_ptr + 0x2d0) + 0x18);
                    remaining_items = (uint)source_offset;
                    
                    if (remaining_items == target_count + dest_index >> 0xb) {
                        target_count = source_count >> 0xb;
                        
                        if (target_count == source_count + target_count >> 0xb) {
                            memcpy(*(longlong *)(data_ptr + 8 + source_offset * 8) + (ulonglong)(dest_index + remaining_items * -0x800) * 8,
                                   *(longlong *)(source_data_ptr + 8 + (ulonglong)target_count * 8) +
                                   (ulonglong)(source_count + target_count * -0x800) * 8, (longlong)(int)target_count << 3);
                        }
                    }
                    
                    if (0 < (int)target_count) {
                        do {
                            source_index = (int)item_count;
                            remaining_items = (source_count - dest_index) + source_index;
                            target_count = remaining_items >> 0xb;
                            source_offset = item_count >> 0xb;
                            item_count = (ulonglong)(source_index + 1);
                            
                            *(uint64_t *)(*(longlong *)(data_ptr + 8 + source_offset * 8) +
                                           (ulonglong)(uint)(source_index + (int)source_offset * -0x800) * 8) =
                                *(uint64_t *)(*(longlong *)(source_data_ptr + 8 + (ulonglong)target_count * 8) +
                                               (ulonglong)(remaining_items + target_count * -0x800) * 8);
                            
                            target_offset = target_offset - 1;
                        } while (target_offset != 0);
                    }
                    
                    *(int *)(*(longlong *)(context_ptr + 0x2d0) + 0x18) = dest_index;
                    *(int *)(*(longlong *)(context_ptr + 0x2d0) + 0xc) = current_version;
                }
            }
            else {
                *(int32_t *)(target_data_ptr + 0x14) = 0;
            }
        }
        else {
            target_data_ptr = (longlong)*(int *)(system_parameter_buffer + 0x9c8) * 0x488 + system_parameter_buffer + 0xb8;
            remaining_items = FUN_180080480(target_data_ptr);
            source_count = remaining_items >> 0xb;
            target_count = *(uint *)(*(uint64_t **)(context_ptr + 0x2d0) + 1);
            target_offset = (ulonglong)target_count;
            item_ptr = (uint64_t *)**(uint64_t **)(context_ptr + 0x2d0);
            
            if (source_count == target_count + remaining_items >> 0xb) {
                memcpy(*(longlong *)(target_data_ptr + 8 + (ulonglong)source_count * 8) +
                       (ulonglong)(remaining_items + source_count * -0x800) * 8, item_ptr, (ulonglong)target_count << 3);
            }
            
            source_count = remaining_items;
            
            if (target_count != 0) {
                do {
                    temp_var = *item_ptr;
                    item_ptr = item_ptr + 1;
                    *(uint64_t *)(*(longlong *)(target_data_ptr + 8 + (ulonglong)(source_count >> 0xb) * 8) +
                                   (ulonglong)(source_count + (source_count >> 0xb) * -0x800) * 8) = temp_var;
                    target_offset = target_offset - 1;
                    source_count = source_count + 1;
                } while (target_offset != 0);
            }
            
            *(int32_t *)(*(longlong *)(context_ptr + 0x2d0) + 0x14) =
                 *(int32_t *)(*(longlong *)(context_ptr + 0x2d0) + 8);
            *(uint *)(*(longlong *)(context_ptr + 0x2d0) + 0x18) = remaining_items;
            *(int *)(*(longlong *)(context_ptr + 0x2d0) + 0xc) = current_version;
        }
    }
    
    return;
}

// 函数: void FUN_18007eea1(longlong param_1,int param_2,int param_3)
// 功能: 批量处理数据更新
void process_batch_data_update(longlong data_ptr, int batch_size, int version_id)
{
    uint source_index;
    uint64_t temp_var;
    int dest_index;
    uint source_count;
    uint target_count;
    int source_offset;
    uint remaining_items;
    longlong target_data_ptr;
    ulonglong item_count;
    uint64_t *item_ptr;
    ulonglong source_offset_val;
    ulonglong target_offset_val;
    longlong source_data_ptr;
    
    if (batch_size < 1) {
        if (version_id == source_offset + -1) {
            target_count = *(int *)(system_parameter_buffer + 0x9c8) + 1U & 0x80000001;
            
            if ((int)target_count < 0) {
                target_count = (target_count - 1 | 0xfffffffe) + 1;
            }
            
            source_data_ptr = (longlong)(int)target_count * 0x488 + system_parameter_buffer + 0xb8;
            target_data_ptr = (longlong)*(int *)(system_parameter_buffer + 0x9c8) * 0x488 + system_parameter_buffer + 0xb8;
            target_offset_val = FUN_180080480(target_data_ptr, *(int32_t *)(data_ptr + 0x14));
            dest_index = (int)target_offset_val;
            item_count = target_offset_val & 0xffffffff;
            
            if (-1 < dest_index) {
                source_offset_val = target_offset_val >> 0xb & 0x1fffff;
                target_count = *(uint *)(*(longlong *)(source_offset + 0x2d0) + 0x14);
                target_offset_val = (ulonglong)target_count;
                source_index = *(uint *)(*(longlong *)(source_offset + 0x2d0) + 0x18);
                remaining_items = (uint)source_offset_val;
                
                if (remaining_items == target_count + dest_index >> 0xb) {
                    target_count = source_index >> 0xb;
                    
                    if (target_count == source_index + target_count >> 0xb) {
                        memcpy(*(longlong *)(target_data_ptr + 8 + source_offset_val * 8) +
                               (ulonglong)(dest_index + remaining_items * -0x800) * 8,
                               *(longlong *)(source_data_ptr + 8 + (ulonglong)target_count * 8) +
                               (ulonglong)(source_index + target_count * -0x800) * 8, (longlong)(int)target_count << 3);
                    }
                }
                
                if (0 < (int)target_count) {
                    do {
                        source_offset = (int)item_count;
                        remaining_items = (source_index - dest_index) + source_offset;
                        target_count = remaining_items >> 0xb;
                        source_offset_val = item_count >> 0xb;
                        item_count = (ulonglong)(source_offset + 1);
                        
                        *(uint64_t *)(*(longlong *)(target_data_ptr + 8 + source_offset_val * 8) +
                                       (ulonglong)(uint)(source_offset + (int)source_offset_val * -0x800) * 8) =
                            *(uint64_t *)(*(longlong *)(source_data_ptr + 8 + (ulonglong)target_count * 8) +
                                           (ulonglong)(remaining_items + target_count * -0x800) * 8);
                        
                        target_offset_val = target_offset_val - 1;
                    } while (target_offset_val != 0);
                }
                
                *(int *)(*(longlong *)(source_offset + 0x2d0) + 0x18) = dest_index;
                *(int *)(*(longlong *)(source_offset + 0x2d0) + 0xc) = source_offset;
            }
        }
        else {
            *(int32_t *)(data_ptr + 0x14) = 0;
        }
    }
    else {
        target_data_ptr = (longlong)*(int *)(system_parameter_buffer + 0x9c8) * 0x488 + system_parameter_buffer + 0xb8;
        remaining_items = FUN_180080480(target_data_ptr);
        source_index = remaining_items >> 0xb;
        target_count = *(uint *)(*(uint64_t **)(source_offset + 0x2d0) + 1);
        target_offset_val = (ulonglong)target_count;
        item_ptr = (uint64_t *)**(uint64_t **)(source_offset + 0x2d0);
        
        if (source_index == target_count + remaining_items >> 0xb) {
            memcpy(*(longlong *)(target_data_ptr + 8 + (ulonglong)source_index * 8) +
                   (ulonglong)(remaining_items + source_index * -0x800) * 8, item_ptr, (ulonglong)target_count << 3);
        }
        
        source_index = remaining_items;
        
        if (target_count != 0) {
            do {
                temp_var = *item_ptr;
                item_ptr = item_ptr + 1;
                *(uint64_t *)(*(longlong *)(target_data_ptr + 8 + (ulonglong)(source_index >> 0xb) * 8) +
                               (ulonglong)(source_index + (source_index >> 0xb) * -0x800) * 8) = temp_var;
                target_offset_val = target_offset_val - 1;
                source_index = source_index + 1;
            } while (target_offset_val != 0);
        }
        
        *(int32_t *)(*(longlong *)(source_offset + 0x2d0) + 0x14) =
             *(int32_t *)(*(longlong *)(source_offset + 0x2d0) + 8);
        *(uint *)(*(longlong *)(source_offset + 0x2d0) + 0x18) = remaining_items;
        *(int *)(*(longlong *)(source_offset + 0x2d0) + 0xc) = source_offset;
    }
    
    return;
}

// 函数: void FUN_18007ef9a(longlong param_1,longlong param_2)
// 功能: 处理数据块复制操作
void process_data_block_copy(longlong source_ptr, longlong target_ptr)
{
    uint source_version;
    int dest_index;
    uint target_version;
    int source_index;
    ulonglong item_count;
    uint remaining_items;
    uint block_size;
    longlong data_block_ptr;
    ulonglong target_offset;
    ulonglong source_offset;
    longlong source_block_ptr;
    
    target_version = *(int *)(target_ptr + 0x910) + 1U & 0x80000001;
    
    if ((int)target_version < 0) {
        target_version = (target_version - 1 | 0xfffffffe) + 1;
    }
    
    source_block_ptr = (longlong)(int)target_version * 0x488 + target_ptr;
    target_ptr = (longlong)*(int *)(target_ptr + 0x910) * 0x488 + target_ptr;
    item_count = FUN_180080480(target_ptr, *(int32_t *)(source_ptr + 0x14));
    dest_index = (int)item_count;
    target_offset = item_count & 0xffffffff;
    
    if (-1 < dest_index) {
        source_offset = item_count >> 0xb & 0x1fffff;
        target_version = *(uint *)(*(longlong *)(source_offset + 0x2d0) + 0x14);
        item_count = (ulonglong)target_version;
        source_version = *(uint *)(*(longlong *)(source_offset + 0x2d0) + 0x18);
        block_size = (uint)source_offset;
        
        if (block_size == target_version + dest_index >> 0xb) {
            remaining_items = source_version >> 0xb;
            
            if (remaining_items == source_version + target_version >> 0xb) {
                memcpy(*(longlong *)(target_ptr + 8 + source_offset * 8) + (ulonglong)(dest_index + block_size * -0x800) * 8,
                       *(longlong *)(source_block_ptr + 8 + (ulonglong)remaining_items * 8) +
                       (ulonglong)(source_version + remaining_items * -0x800) * 8, (longlong)(int)target_version << 3);
            }
        }
        
        if (0 < (int)target_version) {
            do {
                source_index = (int)target_offset;
                block_size = (source_version - dest_index) + source_index;
                target_version = block_size >> 0xb;
                source_offset = target_offset >> 0xb;
                target_offset = (ulonglong)(source_index + 1);
                
                *(uint64_t *)(*(longlong *)(target_ptr + 8 + source_offset * 8) +
                               (ulonglong)(uint)(source_index + (int)source_offset * -0x800) * 8) =
                    *(uint64_t *)(*(longlong *)(source_block_ptr + 8 + (ulonglong)target_version * 8) +
                                   (ulonglong)(block_size + target_version * -0x800) * 8);
                
                item_count = item_count - 1;
            } while (item_count != 0);
        }
        
        *(int *)(*(longlong *)(source_offset + 0x2d0) + 0x18) = dest_index;
        *(int32_t *)(*(longlong *)(source_offset + 0x2d0) + 0xc) = source_index;
    }
    
    return;
}

// 函数: void FUN_18007f0b5(void)
// 功能: 空函数，用于占位
void placeholder_function_1(void)
{
    return;
}

// 函数: void FUN_18007f0bf(void)
// 功能: 空函数，用于占位
void placeholder_function_2(void)
{
    return;
}

// 函数: void FUN_18007f0ca(longlong param_1)
// 功能: 重置数据计数器
void reset_data_counter(longlong data_ptr)
{
    *(int32_t *)(data_ptr + 0x14) = 0;
    return;
}

// 函数: void FUN_18007f0e0(longlong param_1,longlong param_2,int param_3)
// 功能: 初始化数据数组
void initialize_data_array(longlong context_ptr, longlong data_ptr, int array_size)
{
    int *source_ptr;
    uint64_t *dest_ptr;
    uint64_t *temp_ptr;
    uint64_t *alloc_ptr;
    uint item_index;
    int *loop_ptr;
    longlong offset;
    ulonglong total_items;
    longlong array_base_ptr;
    uint64_t *current_ptr;
    
    total_items = (ulonglong)array_size;
    
    if (**(longlong **)(context_ptr + 0x2d0) != 0) {
        FUN_18064e900();
    }
    
    alloc_ptr = (uint64_t *)0x0;
    **(longlong **)(context_ptr + 0x2d0) = 0;
    
    if (0 < array_size) {
        dest_ptr = alloc_ptr;
        
        if (array_size != 0) {
            dest_ptr = (uint64_t *)FUN_18062b420(system_memory_pool_ptr, total_items * 8, 3);
            temp_ptr = dest_ptr;
            current_ptr = alloc_ptr;
            
            do {
                item_index = (int)current_ptr + 1;
                current_ptr = (uint64_t *)(ulonglong)item_index;
                *temp_ptr = 0;
                temp_ptr = temp_ptr + 1;
            } while ((ulonglong)(longlong)(int)item_index < total_items);
        }
        
        **(uint64_t **)(context_ptr + 0x2d0) = dest_ptr;
        
        if (3 < (longlong)total_items) {
            offset = -8 - data_ptr;
            array_base_ptr = (total_items - 4 >> 2) + 1;
            alloc_ptr = (uint64_t *)(offset * 4);
            loop_ptr = (int *)(data_ptr + 8);
            
            do {
                source_ptr = loop_ptr + 8;
                *(float *)((longlong)loop_ptr + **(longlong **)(context_ptr + 0x2d0) + offset) = (float)loop_ptr[-2];
                *(int *)((longlong)loop_ptr + **(longlong **)(context_ptr + 0x2d0) + 4 + offset) = loop_ptr[-1];
                *(float *)((longlong)loop_ptr + **(longlong **)(context_ptr + 0x2d0) + 8 + offset) = (float)*loop_ptr;
                *(int *)((longlong)loop_ptr + **(longlong **)(context_ptr + 0x2d0) + 0xc + offset) = loop_ptr[1];
                *(float *)((**(longlong **)(context_ptr + 0x2d0) - data_ptr) + -0x18 + (longlong)source_ptr) = (float)loop_ptr[2];
                *(int *)((longlong)loop_ptr + **(longlong **)(context_ptr + 0x2d0) + 0x14 + offset) = loop_ptr[3];
                *(float *)((**(longlong **)(context_ptr + 0x2d0) - data_ptr) + -0x10 + (longlong)source_ptr) = (float)loop_ptr[4];
                *(int *)((longlong)loop_ptr + **(longlong **)(context_ptr + 0x2d0) + 0x1c + offset) = loop_ptr[5];
                array_base_ptr = array_base_ptr + -1;
                loop_ptr = source_ptr;
            } while (array_base_ptr != 0);
        }
        
        for (; (longlong)alloc_ptr < (longlong)total_items; alloc_ptr = (uint64_t *)((longlong)alloc_ptr + 1)) {
            *(float *)(**(longlong **)(context_ptr + 0x2d0) + (longlong)alloc_ptr * 8) = (float)*(int *)(data_ptr + (longlong)alloc_ptr * 8);
            *(int32_t *)(**(longlong **)(context_ptr + 0x2d0) + 4 + (longlong)alloc_ptr * 8) = *(int32_t *)(data_ptr + 4 + (longlong)alloc_ptr * 8);
        }
        
        *(int *)(*(longlong *)(context_ptr + 0x2d0) + 8) = array_size;
        return;
    }
    
    *(int *)(*(longlong *)(context_ptr + 0x2d0) + 8) = array_size;
    return;
}

// 函数: void FUN_18007f11f(void)
// 功能: 优化数据数组初始化
void optimized_initialize_data_array(void)
{
    int *source_ptr;
    ulonglong *dest_ptr;
    ulonglong *temp_ptr;
    ulonglong context_offset;
    longlong data_offset;
    longlong context_ptr;
    uint item_index;
    int *loop_ptr;
    longlong offset;
    ulonglong total_items;
    longlong array_base_ptr;
    ulonglong source_value;
    longlong loop_counter;
    bool is_zero_flag;
    
    if (is_zero_flag) {
        dest_ptr = (ulonglong *)(context_offset & 0xffffffff);
    }
    else {
        dest_ptr = (ulonglong *)FUN_18062b420(system_memory_pool_ptr, total_items * 8, 3);
        source_value = context_offset & 0xffffffff;
        temp_ptr = dest_ptr;
        
        do {
            item_index = (int)source_value + 1;
            source_value = (ulonglong)item_index;
            *temp_ptr = context_offset;
            temp_ptr = temp_ptr + 1;
        } while ((ulonglong)(longlong)(int)item_index < total_items);
    }
    
    **(longlong **)(context_ptr + 0x2d0) = (longlong)dest_ptr;
    
    if (3 < (longlong)total_items) {
        offset = -8 - data_offset;
        array_base_ptr = (total_items - 4 >> 2) + 1;
        context_offset = array_base_ptr * 4;
        loop_ptr = (int *)(data_offset + 8);
        
        do {
            source_ptr = loop_ptr + 8;
            *(float *)((longlong)loop_ptr + **(longlong **)(context_ptr + 0x2d0) + offset) = (float)loop_ptr[-2];
            *(int *)((longlong)loop_ptr + **(longlong **)(context_ptr + 0x2d0) + 4 + offset) = loop_ptr[-1];
            *(float *)((longlong)loop_ptr + **(longlong **)(context_ptr + 0x2d0) + 8 + offset) = (float)*loop_ptr;
            *(int *)((longlong)loop_ptr + **(longlong **)(context_ptr + 0x2d0) + 0xc + offset) = loop_ptr[1];
            *(float *)((**(longlong **)(context_ptr + 0x2d0) - data_offset) + -0x18 + (longlong)source_ptr) = (float)loop_ptr[2];
            *(int *)((longlong)loop_ptr + **(longlong **)(context_ptr + 0x2d0) + 0x14 + offset) = loop_ptr[3];
            *(float *)((**(longlong **)(context_ptr + 0x2d0) - data_offset) + -0x10 + (longlong)source_ptr) = (float)loop_ptr[4];
            *(int *)((longlong)loop_ptr + **(longlong **)(context_ptr + 0x2d0) + 0x1c + offset) = loop_ptr[5];
            array_base_ptr = array_base_ptr + -1;
            loop_ptr = source_ptr;
        } while (array_base_ptr != 0);
    }
    
    for (; (longlong)context_offset < (longlong)total_items; context_offset = context_offset + 1) {
        *(float *)(**(longlong **)(context_ptr + 0x2d0) + context_offset * 8) = (float)*(int *)(data_offset + context_offset * 8);
        *(int32_t *)(**(longlong **)(context_ptr + 0x2d0) + 4 + context_offset * 8) = *(int32_t *)(data_offset + 4 + context_offset * 8);
    }
    
    *(int *)(*(longlong *)(context_ptr + 0x2d0) + 8) = (int)total_items;
    return;
}