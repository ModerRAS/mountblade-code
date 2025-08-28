#include "TaleWorlds.Native.Split.h"

// 03_rendering_part037.c - 渲染系统高级资源管理和数据处理模块
// 代码美化完成：包含1个核心函数，涵盖渲染资源处理、字符串操作、哈希表管理、内存分配等高级渲染功能

// 函数：处理渲染系统的高级资源管理和数据处理
// 功能：管理渲染资源、处理字符串数据、执行哈希表操作、分配内存、处理渲染对象
// 参数：
//   param_1 - 渲染上下文指针
//   param_2 - 渲染参数
void process_rendering_advanced_resources(longlong render_context, undefined8 render_params)
{
    longlong *resource_manager;
    byte is_debug_mode;
    undefined *string_ptr;
    bool is_match;
    undefined *******hash_table_ptr;
    undefined1 status_flag;
    int loop_counter;
    undefined4 temp_value;
    uint hash_value;
    undefined1 *buffer_ptr;
    char *string_buffer;
    longlong resource_data;
    undefined8 *data_ptr;
    undefined ******data_array_ptr;
    byte *byte_ptr;
    undefined *******hash_ptr;
    undefined8 *param_ptr;
    char *temp_string;
    int string_length;
    undefined8 *resource_list;
    uint resource_count;
    undefined8 *texture_ptr;
    undefined *object_ptr;
    undefined *******texture_hash_ptr;
    undefined *******material_hash_ptr;
    uint *uint_ptr;
    longlong array_index;
    undefined8 hash_key;
    ulonglong checksum1;
    ulonglong checksum2;
    uint texture_id;
    char char_value;
    undefined1 stack_buffer[32];
    undefined1 stack_flag;
    undefined *stack_object;
    char *stack_string;
    uint stack_uint;
    undefined8 stack_param1;
    undefined *stack_ptr1;
    undefined1 *stack_ptr2;
    uint stack_uint2;
    undefined8 stack_param2;
    uint stack_uint3;
    uint stack_uint4;
    undefined8 *stack_ptr3;
    undefined8 *stack_ptr4;
    undefined8 *stack_ptr5;
    undefined4 stack_value1;
    undefined8 *stack_ptr6;
    undefined8 *stack_ptr7;
    undefined8 *stack_ptr8;
    undefined8 *stack_ptr9;
    undefined4 stack_value2;
    undefined8 *******stack_hash_ptr1;
    undefined8 *******stack_hash_ptr2;
    undefined8 *******stack_hash_ptr3;
    undefined8 stack_byte;
    longlong stack_long;
    undefined4 stack_value3;
    undefined4 stack_value4;
    undefined **stack_ptr_array;
    undefined *stack_obj_ptr;
    undefined1 *stack_buffer_ptr;
    undefined4 stack_value5;
    ulonglong stack_ulong;
    undefined1 stack_large_buffer[32];
    longlong stack_resource1;
    longlong stack_resource2;
    longlong stack_resource3;
    undefined8 stack_param3;
    undefined4 stack_value6;
    undefined8 stack_param4;
    undefined8 stack_param5;
    undefined *stack_param_ptr;
    char *stack_char_ptr;
    uint stack_char_count;
    char stack_buffer_large[136];
    ulonglong stack_checksum;
    
    // 初始化栈变量和校验和
    stack_param5 = 0xfffffffffffffffe;
    stack_checksum = _DAT_180bf00a8 ^ (ulonglong)stack_buffer;
    hash_value = 0;
    stack_value4 = 0;
    stack_resource1 = render_context;
    stack_param4 = render_params;
    stack_param5 = render_params;
    
    // 检查调试模式状态
    if (*(undefined **)*_DAT_180c8ed08 == &UNK_18098bb88) {
        char_value = *(int *)(_DAT_180c8a9c8 + 0xe0) != 0;
    }
    else {
        char_value = (**(code **)(*(undefined **)*_DAT_180c8ed08 + 0x48))();
    }
    
    // 获取时间戳或使用固定值
    if (char_value == '\0') {
        resource_count = timeGetTime();
    }
    else {
        resource_count = 0xb061;
    }
    
    // 初始化资源列表
    stack_resource2 = 0;
    stack_resource3 = 0;
    stack_param3 = 0;
    stack_value6 = 3;
    stack_uint4 = resource_count ^ 0x41c64e6d;
    
    // 初始化资源管理器
    FUN_1800b6b20(0, &stack_resource2);
    
    // 初始化渲染资源数组
    stack_ptr6 = (undefined8 *)0x0;
    stack_ptr7 = (undefined8 *)0x0;
    stack_ptr8 = (undefined8 *)0x0;
    stack_value2 = 3;
    resource_count = resource_count ^ 0x41c64e6d;
    
    // 处理渲染资源列表
    if (stack_resource3 - stack_resource2 >> 3 != 0) {
        do {
            data_ptr = (undefined8 *)0x0;
            resource_data = *(longlong *)(stack_resource2 + hash_value * 8);
            stack_param_ptr = &UNK_1809fcc28;
            stack_char_ptr = stack_buffer_large;
            stack_buffer_large[0] = '\0';
            stack_char_count = *(uint *)(resource_data + 0x20);
            string_ptr = *(undefined **)(resource_data + 0x18);
            object_ptr = &DAT_18098bc73;
            
            // 设置字符串指针
            if (string_ptr != (undefined *)0x0) {
                object_ptr = string_ptr;
            }
            
            // 复制字符串到缓冲区
            strcpy_s(stack_buffer_large, 0x80, object_ptr);
            
            // 检查资源名称匹配
            if (stack_char_count < _DAT_180bf90c0) {
            LAB_RESOURCE_MATCH_FAILED:
                is_match = false;
            }
            else {
                if (_DAT_180bf90c0 != 0) {
                    temp_string = stack_char_ptr;
                    param_ptr = data_ptr;
                    do {
                        if (*temp_string != temp_string[_DAT_180bf90b8 - (longlong)stack_char_ptr]) 
                            goto LAB_RESOURCE_MATCH_FAILED;
                        resource_count = (int)param_ptr + 1;
                        param_ptr = (undefined8 *)(ulonglong)resource_count;
                        temp_string = temp_string + 1;
                    } while (resource_count < _DAT_180bf90c0);
                }
                is_match = true;
            }
            
            // 处理匹配的资源
            if (is_match) {
                stack_object = &UNK_180a3c3e0;
                stack_param2 = 0;
                stack_string = (undefined1 *)0x0;
                stack_uint = 0;
                FUN_1806277c0(&stack_object, stack_char_count);
                temp_string = stack_string;
                
                if (0 < (int)stack_char_count) {
                    temp_string = "";
                    if (stack_char_ptr != (char *)0x0) {
                        temp_string = stack_char_ptr;
                    }
                    // 复制资源数据
                    memcpy(stack_string, temp_string, (longlong)(int)(stack_char_count + 1));
                }
                
                if (stack_char_ptr == (char *)0x0) {
                    param_ptr = (undefined8 *)(ulonglong)stack_uint;
                }
                else {
                    stack_uint = 0;
                    param_ptr = data_ptr;
                    if (stack_string != (undefined1 *)0x0) {
                        *stack_string = 0;
                        param_ptr = (undefined8 *)0x0;
                    }
                }
                
                // 添加到资源数组
                if (stack_ptr7 < stack_ptr8) {
                    stack_ptr9 = stack_ptr7;
                    *stack_ptr7 = &UNK_18098bcb0;
                    stack_ptr7[1] = 0;
                    *(undefined4 *)(stack_ptr7 + 2) = 0;
                    *stack_ptr7 = &UNK_180a3c3e0;
                    *(int *)(stack_ptr7 + 2) = (int)param_ptr;
                    stack_ptr7[1] = stack_string;
                    *(undefined4 *)((longlong)stack_ptr7 + 0x1c) = stack_param2._4_4_;
                    *(undefined4 *)(stack_ptr7 + 3) = (undefined4)stack_param2;
                    stack_uint = 0;
                    stack_param2 = 0;
                    data_ptr = stack_ptr7;
                }
                else {
                    resource_data = (longlong)stack_ptr7 - (longlong)stack_ptr6 >> 5;
                    if (resource_data == 0) {
                        resource_data = 1;
                    LAB_ALLOCATE_RESOURCE_ARRAY:
                        data_ptr = (undefined8 *)FUN_18062b420(_DAT_180c8ed18, resource_data << 5, (undefined1)stack_value2);
                    }
                    else {
                        resource_data = resource_data * 2;
                        if (resource_data != 0) goto LAB_ALLOCATE_RESOURCE_ARRAY;
                    }
                    
                    data_ptr = (undefined8 *)FUN_180059780(stack_ptr6, stack_ptr7, data_ptr);
                    texture_ptr = stack_ptr7;
                    *data_ptr = &UNK_18098bcb0;
                    data_ptr[1] = 0;
                    *(undefined4 *)(data_ptr + 2) = 0;
                    *data_ptr = &UNK_180a3c3e0;
                    *(int *)(data_ptr + 2) = (int)param_ptr;
                    data_ptr[1] = temp_string;
                    *(undefined4 *)((longlong)data_ptr + 0x1c) = stack_param2._4_4_;
                    *(undefined4 *)(data_ptr + 3) = (undefined4)stack_param2;
                    stack_uint = 0;
                    stack_string = (char *)0x0;
                    stack_param2 = 0;
                    stack_ptr9 = data_ptr;
                    
                    // 清理旧资源数组
                    for (param_ptr = stack_ptr6; param_ptr != texture_ptr; param_ptr = param_ptr + 4) {
                        (**(code **)*param_ptr)(param_ptr, 0);
                    }
                    if (stack_ptr6 != (undefined8 *)0x0) {
                        FUN_18064e900(stack_ptr6);
                    }
                    stack_ptr8 = data_ptr + resource_data * 4;
                    stack_ptr6 = data_ptr;
                }
                stack_ptr7 = data_ptr + 4;
                stack_string = (char *)0x0;
                stack_param2 = stack_param2 & 0xffffffff00000000;
                stack_object = &UNK_18098bcb0;
            }
            
            stack_param_ptr = &UNK_18098bcb0;
            hash_value = (ulonglong)((int)hash_value + 1);
            resource_count = stack_uint4;
        } while (hash_value < (ulonglong)(stack_resource3 - stack_resource2 >> 3));
    }
    
    // 初始化材质处理系统
    hash_value = 0;
    stack_ptr4 = (undefined8 *)0x0;
    stack_ptr5 = (undefined8 *)0x0;
    stack_ptr9 = (undefined8 *)0x0;
    stack_value1 = 3;
    stack_ptr3 = (undefined8 *)0x0;
    stack_ptr4 = (undefined8 *)0x0;
    stack_ptr5 = (undefined8 *)0x0;
    stack_value1 = 3;
    stack_value3 = 3;
    stack_hash_ptr1 = &stack_hash_ptr1;
    stack_hash_ptr2 = &stack_hash_ptr1;
    stack_hash_ptr3 = (undefined8 *******)0x0;
    stack_byte = 0;
    stack_long = 0;
    stack_object = &UNK_180a3c3e0;
    stack_param2 = 0;
    stack_string = (char *)0x0;
    stack_uint = 0;
    
    // 处理材质名称缓冲区
    if (0 < (int)_DAT_180bf90c0) {
        loop_counter = _DAT_180bf90c0 + 1;
        if (loop_counter < 0x10) {
            loop_counter = 0x10;
        }
        buffer_ptr = (undefined1 *)FUN_18062b420(_DAT_180c8ed18, (longlong)loop_counter, 0x13);
        *buffer_ptr = 0;
        stack_string = buffer_ptr;
        temp_value = FUN_18064e990(buffer_ptr);
        stack_param2 = CONCAT44(stack_param2._4_4_, temp_value);
        memcpy(buffer_ptr, _DAT_180bf90b8, (longlong)(int)(_DAT_180bf90c0 + 1));
    }
    
    // 初始化纹理ID
    texture_id = 1;
    stack_ptr9 = (undefined8 *)CONCAT44(stack_ptr9._4_4_, 1);
    temp_string = (char *)FUN_18062b420(_DAT_180c8ed18, 0x10, 0x13);
    *temp_string = '\0';
    stack_string = temp_string;
    hash_value = FUN_18064e990(temp_string);
    temp_string = stack_string;
    stack_param2 = CONCAT44(stack_param2._4_4_, hash_value);
    temp_string[0] = '_';
    temp_string[1] = '\0';
    stack_uint = 1;
    
    // 处理纹理路径
    if (0 < _DAT_180bf5b98) {
        if (_DAT_180bf5b98 != -1) {
            if (temp_string == (char *)0x0) {
                loop_counter = _DAT_180bf5b98 + 2;
                if (loop_counter < 0x10) {
                    loop_counter = 0x10;
                }
                temp_string = (char *)FUN_18062b420(_DAT_180c8ed18, (longlong)loop_counter, 0x13);
                *temp_string = '\0';
            }
            else {
                if (_DAT_180bf5b98 + 2U <= hash_value) goto LAB_TEXTURE_PATH_PROCESSED;
                stack_flag = 0x13;
                temp_string = (char *)FUN_18062b8b0(_DAT_180c8ed18, temp_string, _DAT_180bf5b98 + 2U, 0x10);
            }
            stack_string = temp_string;
            temp_value = FUN_18064e990(temp_string);
            stack_param2 = CONCAT44(stack_param2._4_4_, temp_value);
        }
    LAB_TEXTURE_PATH_PROCESSED:
        memcpy(temp_string + 1, _DAT_180bf5b90, (longlong)(_DAT_180bf5b98 + 1));
    }
    
    stack_uint3 = 0;
    
    // 处理材质纹理映射
    if ((longlong)stack_ptr7 - (longlong)stack_ptr6 >> 5 != 0) {
        do {
            param_ptr = stack_ptr4;
            data_ptr = (undefined8 *)0x0;
            texture_ptr = stack_ptr6 + hash_value * 4;
            resource_count = *(uint *)(texture_ptr + 2);
            
            if (resource_count < texture_id) {
            LAB_TEXTURE_NO_MATCH:
                is_match = false;
            }
            else {
                if (texture_id != 0) {
                    temp_string = temp_string;
                    resource_list = data_ptr;
                    do {
                        if (temp_string[texture_ptr[1] - (longlong)temp_string] != *temp_string) 
                            goto LAB_TEXTURE_NO_MATCH;
                        hash_value = (int)resource_list + 1;
                        resource_list = (undefined8 *)(ulonglong)hash_value;
                        temp_string = temp_string + 1;
                    } while (hash_value < texture_id);
                }
                is_match = true;
            }
            
            if (is_match) {
                if (resource_count == 0) goto LAB_TEXTURE_MATCH_FOUND;
                param_ptr = data_ptr;
                resource_list = data_ptr;
                goto LAB_TEXTURE_PROCESSING;
            }
            
            // 添加到纹理列表
            if (stack_ptr4 < stack_ptr5) {
                stack_ptr4 = stack_ptr4 + 4;
                FUN_180627ae0(param_ptr, texture_ptr);
            }
            else {
                resource_data = (longlong)stack_ptr4 - (longlong)stack_ptr3 >> 5;
                if (resource_data == 0) {
                    resource_data = 1;
                LAB_ALLOCATE_TEXTURE_ARRAY:
                    data_ptr = (undefined8 *)FUN_18062b420(_DAT_180c8ed18, resource_data << 5, (undefined1)stack_value1);
                }
                else {
                    resource_data = resource_data * 2;
                    if (resource_data != 0) goto LAB_ALLOCATE_TEXTURE_ARRAY;
                }
                
                array_index = FUN_180059780(stack_ptr3, stack_ptr4, data_ptr);
                FUN_180627ae0(array_index, texture_ptr);
                param_ptr = stack_ptr4;
                
                // 清理旧纹理数组
                for (texture_ptr = stack_ptr3; texture_ptr != param_ptr; texture_ptr = texture_ptr + 4) {
                    (**(code **)*texture_ptr)(texture_ptr, 0);
                }
                if (stack_ptr3 != (undefined8 *)0x0) {
                    FUN_18064e900(stack_ptr3);
                }
                stack_ptr5 = data_ptr + resource_data * 4;
                stack_ptr3 = data_ptr;
                stack_ptr4 = (undefined8 *)(array_index + 0x20);
            }
            stack_uint3 = stack_uint3 + 1;
            hash_value = (ulonglong)stack_uint3;
            temp_string = stack_string;
            resource_count = stack_uint4;
            texture_id = (uint)stack_ptr9;
        } while (hash_value < (ulonglong)((longlong)stack_ptr7 - (longlong)stack_ptr6 >> 5));
    }
    
    // 清理临时缓冲区
    buffer_ptr = (undefined1 *)0x0;
    FUN_18028a660(&stack_ptr4);
    resource_data = stack_resource1;
    
    // 检查渲染状态和随机数生成
    if ((((longlong)stack_ptr4 - (longlong)stack_ptr3 & 0xffffffffffffffe0U) == 0) ||
        ((stack_long != 0 &&
         (resource_count = resource_count ^ resource_count << 0xd, 
          resource_count = resource_count ^ resource_count >> 0x11,
          resource_count = resource_count ^ resource_count << 5, 
          0.15 < (float)(resource_count - 1) * 2.3283064e-10)))) {
        is_match = true;
    }
    else {
        is_match = false;
    }
    
    // 设置渲染状态标志
    if ((is_match) && (DAT_180c82860 == '\0')) {
        status_flag = 1;
    }
    else {
        status_flag = 0;
    }
    
    *(undefined1 *)(stack_resource1 + 0x130) = status_flag;
    stack_ptr1 = &UNK_180a3c3e0;
    stack_param2 = 0;
    stack_ptr2 = (undefined1 *)0x0;
    stack_uint2 = 0;
    
    // 处理渲染状态
    if (*(char *)(stack_resource1 + 0x130) == '\0') {
        resource_count = resource_count ^ resource_count << 0xd;
        resource_count = resource_count ^ resource_count >> 0x11;
        texture_ptr = stack_ptr3 +
                     (longlong)
                     (int)((ulonglong)((resource_count << 5 ^ resource_count) - 1) %
                          ((longlong)stack_ptr4 - (longlong)stack_ptr3 >> 5 & 0xffffffffU)) * 4;
        resource_count = *(uint *)(texture_ptr + 2);
        hash_value = (ulonglong)resource_count;
        
        if (texture_ptr[1] != 0) {
            FUN_1806277c0(&stack_ptr1, hash_value);
        }
        
        if (resource_count != 0) {
            memcpy(stack_ptr2, texture_ptr[1], hash_value);
        }
        
        buffer_ptr = stack_ptr2;
        stack_uint2 = 0;
        if (stack_ptr2 != (undefined1 *)0x0) {
            stack_ptr2[hash_value] = 0;
        }
        goto LAB_RENDER_STATE_PROCESSED;
    }
    
    // 处理材质哈希表
    resource_manager = (longlong *)(stack_resource1 + 0x138);
    FUN_180057110(resource_manager);
    resource_count = resource_count ^ resource_count << 0xd;
    resource_count = resource_count ^ resource_count >> 0x11;
    resource_count = resource_count ^ resource_count << 5;
    loop_counter = (int)((ulonglong)(resource_count - 1) %
                 ((longlong)stack_ptr5 - (longlong)stack_ptr4 >> 5 & 0xffffffffU));
    hash_ptr = &stack_hash_ptr1;
    hash_table_ptr = stack_hash_ptr3;
    
    // 遍历材质哈希表
    while (hash_table_ptr = hash_ptr, hash_table_ptr != (undefined8 *******)0x0) {
        if (*(int *)(hash_table_ptr + 6) == 0) {
            is_match = false;
            hash_ptr = (undefined8 *******)*hash_table_ptr;
        }
        else {
            if (*(int *)(stack_ptr4 + (longlong)loop_counter * 4 + 2) == 0) {
                is_match = true;
            }
            else {
                data_array_ptr = hash_table_ptr[5];
                array_index = stack_ptr4[(longlong)loop_counter * 4 + 1] - (longlong)data_array_ptr;
                do {
                    texture_id = (uint)*(byte *)((longlong)data_array_ptr + array_index);
                    string_length = *(byte *)data_array_ptr - texture_id;
                    if (*(byte *)data_array_ptr != texture_id) break;
                    data_array_ptr = (undefined8 *******)((longlong)data_array_ptr + 1);
                } while (texture_id != 0);
                is_match = 0 < string_length;
                if (string_length < 1) {
                    hash_ptr = (undefined8 *******)*hash_table_ptr;
                    goto LAB_HASH_TRAVERSE_CONTINUE;
                }
            }
            hash_ptr = (undefined8 *******)hash_table_ptr[1];
        }
    LAB_HASH_TRAVERSE_CONTINUE:
        hash_ptr = hash_table_ptr;
        hash_table_ptr = hash_ptr;
        if (!is_match) {
            hash_ptr = &stack_hash_ptr1;
        }
    }
    
    hash_table_ptr = &stack_hash_ptr1;
    if (stack_hash_ptr3 != (undefined8 *******)0x0) {
        hash_ptr = stack_hash_ptr3;
        do {
            if (*(int *)(stack_ptr4 + (longlong)loop_counter * 4 + 2) == 0) {
                is_match = false;
                hash_table_ptr = (undefined8 *******)hash_ptr[1];
            }
            else {
                if (*(int *)(hash_ptr + 6) == 0) {
                    is_match = true;
                }
                else {
                    byte_ptr = (byte *)stack_ptr4[(longlong)loop_counter * 4 + 1];
                    array_index = (longlong)hash_ptr[5] - (longlong)byte_ptr;
                    do {
                        texture_id = (uint)byte_ptr[array_index];
                        string_length = *byte_ptr - texture_id;
                        if (*byte_ptr != texture_id) break;
                        byte_ptr = byte_ptr + 1;
                    } while (texture_id != 0);
                    is_match = 0 < string_length;
                    if (string_length < 1) {
                        hash_table_ptr = (undefined8 *******)hash_ptr[1];
                        goto LAB_HASH_COMPARE_CONTINUE;
                    }
                }
                hash_table_ptr = (undefined8 *******)*hash_ptr;
            }
        LAB_HASH_COMPARE_CONTINUE:
            if (is_match) {
                hash_ptr = hash_table_ptr;
            }
            hash_table_ptr = hash_ptr;
            hash_ptr = hash_table_ptr;
        } while (hash_table_ptr != (undefined8 *******)0x0);
    }
    
    // 处理渲染资源队列
    for (; hash_table_ptr != hash_ptr;
        hash_table_ptr = (undefined8 *******)func_0x00018066bd70(hash_table_ptr)) {
        if (*(ulonglong *)(resource_data + 0x140) < *(ulonglong *)(resource_data + 0x148)) {
            *(ulonglong *)(resource_data + 0x140) = *(ulonglong *)(resource_data + 0x140) + 0x20;
            FUN_180627ae0();
        }
        else {
            FUN_180059820(resource_manager);
        }
    }
    
    // 处理渲染资源查找
    resource_count = resource_count ^ resource_count << 0xd;
    resource_count = resource_count ^ resource_count >> 0x11;
    texture_ptr = (undefined8 *)
                 ((longlong)
                  (int)((ulonglong)((resource_count << 5 ^ resource_count) - 1) %
                       (*(longlong *)(resource_data + 0x140) - *resource_manager >> 5 & 0xffffffffU)) * 0x20 + *resource_manager);
    resource_count = *(uint *)(texture_ptr + 2);
    
    if (texture_ptr[1] == 0) {
    LAB_RESOURCE_DATA_READY:
        if (resource_count != 0) {
            memcpy(buffer_ptr, texture_ptr[1], (ulonglong)resource_count);
        }
    }
    else if (resource_count != 0) {
        loop_counter = resource_count + 1;
        if (loop_counter < 0x10) {
            loop_counter = 0x10;
        }
        buffer_ptr = (undefined1 *)FUN_18062b420(_DAT_180c8ed18, (longlong)loop_counter, 0x13);
        *buffer_ptr = 0;
        hash_value = (ulonglong)buffer_ptr & 0xffffffffffc00000;
        
        if (hash_value == 0) {
            texture_id = 0;
        }
        else {
            resource_data = ((longlong)buffer_ptr - hash_value >> 0x10) * 0x50;
            uint_ptr = (uint *)(hash_value + ((resource_data + 0x80) - (ulonglong)*(uint *)(hash_value + resource_data + 0x84)));
            
            if ((*(byte *)((longlong)uint_ptr + 0xe) & 2) == 0) {
                texture_id = uint_ptr[7];
                if (0x3ffffff < texture_id) {
                    texture_id = *uint_ptr << 0x10;
                }
            }
            else {
                texture_id = uint_ptr[7];
                if (texture_id < 0x4000000) {
                    checksum2 = (ulonglong)texture_id;
                }
                else {
                    checksum2 = (ulonglong)*uint_ptr << 0x10;
                }
                if (0x3ffffff < texture_id) {
                    texture_id = *uint_ptr << 0x10;
                }
                texture_id = texture_id - (int)(((longlong)buffer_ptr -
                                              (hash_value + ((longlong)((longlong)uint_ptr + (-0x80 - hash_value)) / 0x50)
                                                        * 0x10000)) % checksum2);
            }
        }
        stack_param2 = CONCAT44(stack_param2._4_4_, texture_id);
        stack_ptr2 = buffer_ptr;
        goto LAB_RESOURCE_DATA_READY;
    }
    
    stack_uint2 = resource_count;
    if (buffer_ptr != (undefined1 *)0x0) {
        buffer_ptr[resource_count] = 0;
    }
    
LAB_RENDER_STATE_PROCESSED:
    resource_count = *(uint *)((longlong)texture_ptr + 0x1c);
    *(float *)(stack_resource1 + 0x15c) = (float)_DAT_180c8ed30 * 1e-05;
    stack_param2._4_4_ = resource_count;
    FUN_1800b08e0(_DAT_180c86930, stack_param4, &stack_ptr1, 1);
    stack_value4 = 1;
    stack_ptr1 = &UNK_180a3c3e0;
    
    // 清理资源
    if (buffer_ptr != (undefined1 *)0x0) {
        FUN_18064e900(buffer_ptr);
    }
    stack_ptr2 = (undefined1 *)0x0;
    stack_param2 = (ulonglong)stack_param2._4_4_ << 0x20;
    stack_ptr1 = &UNK_18098bcb0;
    stack_object = &UNK_180a3c3e0;
    
    if (temp_string != (char *)0x0) {
        FUN_18064e900(temp_string);
    }
    stack_string = (char *)0x0;
    stack_param2 = stack_param2 & 0xffffffff00000000;
    stack_object = &UNK_18098bcb0;
    FUN_180058020(&stack_hash_ptr1);
    FUN_18005d580(&stack_ptr3);
    FUN_18005d580(&stack_ptr4);
    FUN_18005d580(&stack_ptr6);
    FUN_180057830(&stack_resource2);
    FUN_1808fc050(stack_checksum ^ (ulonglong)stack_buffer);
    
    // 处理纹理名称分割
    while( true ) {
        resource_list = (undefined8 *)(ulonglong)(loop_counter + 1U);
        param_ptr = (undefined8 *)((longlong)param_ptr + 1);
        if (resource_count <= loop_counter + 1U) break;
    LAB_TEXTURE_PROCESSING:
        loop_counter = (int)resource_list;
        if (*(char *)(texture_ptr[1] + (longlong)param_ptr) == '_') goto LAB_TEXTURE_SEPARATOR_FOUND;
    }
LAB_TEXTURE_MATCH_FOUND:
    param_ptr = (undefined8 *)0xffffffffffffffff;
    loop_counter = -1;
LAB_TEXTURE_SEPARATOR_FOUND:
    texture_id = loop_counter + 1;
    if (texture_id < resource_count) {
        temp_string = (char *)((longlong)param_ptr + texture_ptr[1] + 1);
        do {
            if (*temp_string == '_') goto LAB_SECOND_SEPARATOR_FOUND;
            texture_id = texture_id + 1;
            temp_string = temp_string + 1;
        } while (texture_id < resource_count);
    }
    texture_id = 0xffffffff;
LAB_SECOND_SEPARATOR_FOUND:
    loop_counter = resource_count - 1;
    if (-1 < loop_counter) {
        resource_data = (longlong)loop_counter;
        do {
            if (*(char *)(texture_ptr[1] + resource_data) == '_') goto LAB_LAST_SEPARATOR_FOUND;
            loop_counter = loop_counter + -1;
            resource_data = resource_data + -1;
        } while (-1 < resource_data);
    }
    loop_counter = -1;
LAB_LAST_SEPARATOR_FOUND:
    FUN_180629a40(texture_ptr, &stack_ptr1, texture_id + 1, loop_counter);
    param_ptr = stack_ptr5;
    
    // 添加到材质数组
    if (stack_ptr5 < stack_ptr9) {
        stack_ptr_array = (undefined **)stack_ptr5;
        *stack_ptr5 = &UNK_18098bcb0;
        stack_ptr5[1] = 0;
        *(undefined4 *)(stack_ptr5 + 2) = 0;
        *stack_ptr5 = &UNK_180a3c3e0;
        stack_ptr5[3] = 0;
        stack_ptr5[1] = 0;
        *(undefined4 *)(stack_ptr5 + 2) = 0;
        stack_ptr5 = stack_ptr5 + 4;
        FUN_1806277c0(param_ptr, stack_uint2);
        
        if (stack_uint2 != 0) {
            memcpy(param_ptr[1], stack_ptr2, stack_uint2 + 1);
        }
        
        if (stack_ptr2 != (undefined1 *)0x0) {
            *(undefined4 *)(param_ptr + 2) = 0;
            if ((undefined1 *)param_ptr[1] != (undefined1 *)0x0) {
                *(undefined1 *)param_ptr[1] = 0;
            }
            *(undefined4 *)((longlong)param_ptr + 0x1c) = 0;
        }
    }
    else {
        resource_data = (longlong)stack_ptr5 - (longlong)stack_ptr4 >> 5;
        if (resource_data == 0) {
            resource_data = 1;
        LAB_ALLOCATE_MATERIAL_ARRAY:
            data_ptr = (undefined8 *)FUN_18062b420(_DAT_180c8ed18, resource_data << 5, (undefined1)stack_value1);
        }
        else {
            resource_data = resource_data * 2;
            if (resource_data != 0) goto LAB_ALLOCATE_MATERIAL_ARRAY;
        }
        
        array_index = FUN_180059780(stack_ptr4, stack_ptr5, data_ptr);
        FUN_180627ae0(array_index, &stack_ptr1);
        resource_list = stack_ptr5;
        
        for (param_ptr = stack_ptr4; param_ptr != resource_list; param_ptr = param_ptr + 4) {
            (**(code **)*param_ptr)(param_ptr, 0);
        }
        
        if (stack_ptr4 != (undefined8 *)0x0) {
            FUN_18064e900(stack_ptr4);
        }
        stack_ptr9 = data_ptr + resource_data * 4;
        stack_ptr4 = data_ptr;
        stack_ptr5 = (undefined8 *)(array_index + 0x20);
    }
    
    // 初始化材质对象
    stack_byte = 0;
    stack_ptr_array = &stack_obj_ptr;
    stack_obj_ptr = &UNK_180a3c3e0;
    stack_ulong = 0;
    stack_buffer_ptr = (undefined1 *)0x0;
    stack_value5 = 0;
    FUN_1806277c0(&stack_obj_ptr, stack_uint2);
    
    if (stack_uint2 != 0) {
        memcpy(stack_buffer_ptr, stack_ptr2, stack_uint2 + 1);
    }
    
    if (stack_ptr2 != (undefined1 *)0x0) {
        stack_value5 = 0;
        if (stack_buffer_ptr != (undefined1 *)0x0) {
            *stack_buffer_ptr = 0;
        }
        stack_ulong = stack_ulong & 0xffffffff;
    }
    
    FUN_180627ae0(stack_large_buffer, texture_ptr);
    resource_data = FUN_18062b420(_DAT_180c8ed18, 0x60, (undefined1)stack_value3);
    FUN_18005caa0(resource_data + 0x20, &stack_obj_ptr);
    hash_table_ptr = &stack_hash_ptr1;
    hash_ptr = stack_hash_ptr3;
    
    // 处理材质哈希表插入
    if (stack_hash_ptr3 != (undefined8 *******)0x0) {
        do {
            hash_table_ptr = hash_ptr;
            if (*(int *)(hash_table_ptr + 6) == 0) {
            LAB_HASH_INSERT_CONTINUE:
                hash_ptr = (undefined8 *******)*hash_table_ptr;
            }
            else {
                if (*(int *)(resource_data + 0x30) != 0) {
                    data_array_ptr = hash_table_ptr[5];
                    array_index = *(longlong *)(resource_data + 0x28) - (longlong)data_array_ptr;
                    do {
                        is_debug_mode = *(byte *)data_array_ptr;
                        resource_count = (uint)*(byte *)((longlong)data_array_ptr + array_index);
                        if (is_debug_mode != resource_count) break;
                        data_array_ptr = (undefined8 *******)((longlong)data_array_ptr + 1);
                    } while (resource_count != 0);
                    if ((int)(is_debug_mode - resource_count) < 1) goto LAB_HASH_INSERT_CONTINUE;
                }
                hash_ptr = (undefined8 *******)hash_table_ptr[1];
            }
        } while (hash_ptr != (undefined8 *******)0x0);
        
        if ((undefined8 ********)hash_table_ptr != &stack_hash_ptr1) {
            if (*(int *)(hash_table_ptr + 6) != 0) {
                if (*(int *)(resource_data + 0x30) == 0) goto LAB_HASH_INSERT_FINAL;
                data_array_ptr = hash_table_ptr[5];
                array_index = *(longlong *)(resource_data + 0x28) - (longlong)data_array_ptr;
                do {
                    is_debug_mode = *(byte *)data_array_ptr;
                    resource_count = (uint)*(byte *)((longlong)data_array_ptr + array_index);
                    if (is_debug_mode != resource_count) break;
                    data_array_ptr = (undefined8 *******)((longlong)data_array_ptr + 1);
                } while (resource_count != 0);
                if (0 < (int)(is_debug_mode - resource_count)) goto LAB_HASH_INSERT_FINAL;
            }
            stack_byte = 1;
        }
    }
    
LAB_HASH_INSERT_FINAL:
    FUN_18066bdc0(resource_data, hash_table_ptr, &stack_hash_ptr1, stack_byte);
}

// 简化实现说明：
// 原始实现：这是一个复杂的原始代码，包含大量的栈变量、内存操作和未定义的函数调用
// 简化实现：通过语义化命名、添加注释、重组代码结构，使其更易读和维护
// 保留核心功能：渲染资源管理、字符串处理、哈希表操作、内存分配等
// 代码文件：03_rendering_part037.c - 渲染系统高级资源管理和数据处理模块