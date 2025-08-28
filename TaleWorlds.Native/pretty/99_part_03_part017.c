#include "TaleWorlds.Native.Split.h"

/**
 * 99_part_03_part017.c - 通用工具函数模块
 * 
 * 本模块包含4个数据处理函数，主要用于：
 * 1. 数据批量处理和比较
 * 2. 数据结构遍历和操作
 * 3. 内存管理和资源清理
 * 4. 字符串处理和匹配
 */

// 常量定义
#define MAX_COMPARISON_DEPTH 0x34
#define BUFFER_SIZE_INCREMENT 4
#define NULL_POINTER (void *)0x0
#define MAX_ULONG_VALUE 0xffffffffffffffff
#define INVALID_HANDLE 0xfffffffffffffffe

// 数据结构偏移量定义
#define DATA_OFFSET_0x38 0x38
#define DATA_OFFSET_0x40 0x40
#define DATA_OFFSET_0x100 0x100
#define DATA_OFFSET_0x1b8 0x1b8
#define DATA_OFFSET_0x3c8 0x3c8
#define NODE_OFFSET_0x28 0x28
#define NODE_OFFSET_0x38 0x38
#define NODE_OFFSET_0x41 0x41

// 标志位定义
#define FLAG_0x400000 0x400000
#define FLAG_ACTIVE 1

// 函数别名映射
#define ProcessDataBatch FUN_1801db810
#define ProcessDataWithCallback FUN_1801db831
#define EmptyFunction FUN_1801db9b8
#define ProcessAdvancedData FUN_1801db9d0

/**
 * 批量数据处理函数
 * 
 * 功能：对指定范围内的数据进行批量处理和比较操作
 * 
 * @param data_context 数据上下文指针，包含处理所需的各种数据结构
 * @param start_index 起始索引
 * @param end_index 结束索引
 */
void ProcessDataBatch(longlong *data_context, int start_index, int end_index)
{
    undefined8 *node_root;
    ulonglong current_index;
    bool comparison_result;
    undefined8 *current_node;
    undefined8 *next_node;
    longlong data_pointer;
    undefined8 *target_node;
    undefined8 *search_node;
    longlong *data_array;
    int item_index;
    int array_position;
    ulonglong array_size;
    uint data_value;
    ulonglong temp_value;
    longlong base_address;
    longlong end_address;
    
    current_index = (ulonglong)start_index;
    if (start_index < end_index) {
        data_array = (longlong *)*data_context;
        base_address = current_index * 4;
        array_size = data_array[1] - *data_array >> 3;
        
        do {
            item_index = 0;
            if (array_size != 0) {
                data_pointer = *data_array;
                end_address = 0;
                do {
                    array_size = *(ulonglong *)(data_pointer + end_address);
                    node_root = (undefined8 *)data_context[4];
                    data_value = *(uint *)(*(longlong *)data_context[1] + base_address);
                    array_position = (int)(data_array[1] - data_pointer >> 3) * (int)current_index + item_index;
                    temp_value = *(ulonglong *)data_context[5];
                    target_node = (undefined8 *)node_root[2];
                    search_node = node_root;
                    
                    if (target_node == (undefined8 *)0x0) {
                        goto LAB_1801db948;
                    }
                    else {
                        do {
                            // 复杂的比较逻辑：比较多个字段来确定节点顺序
                            if (((ulonglong)target_node[4] < temp_value) ||
                                (((ulonglong)target_node[4] <= temp_value &&
                                 (((ulonglong)target_node[5] < array_size ||
                                  (((ulonglong)target_node[5] <= array_size &&
                                   ((*(uint *)(target_node + 6) < data_value ||
                                    ((*(uint *)(target_node + 6) <= data_value &&
                                     (*(ushort *)((longlong)target_node + MAX_COMPARISON_DEPTH) < 
                                      (ushort)*(byte *)data_context[2]))))))))))) {
                                next_node = (undefined8 *)*target_node;
                                comparison_result = true;
                            }
                            else {
                                next_node = (undefined8 *)target_node[1];
                                comparison_result = false;
                            }
                            
                            current_node = target_node;
                            if (comparison_result) {
                                current_node = search_node;
                            }
                            search_node = current_node;
                            target_node = next_node;
                        } while (next_node != (undefined8 *)0x0);
                        
                        // 检查是否需要插入新节点
                        if (((current_node == node_root) || (temp_value < (ulonglong)current_node[4])) ||
                            ((temp_value <= (ulonglong)current_node[4] &&
                             ((array_size < (ulonglong)current_node[5] ||
                              ((array_size <= (ulonglong)current_node[5] &&
                               ((data_value < *(uint *)(current_node + 6) ||
                                ((data_value <= *(uint *)(current_node + 6) &&
                                 ((ushort)*(byte *)data_context[2] < 
                                  *(ushort *)((longlong)current_node + MAX_COMPARISON_DEPTH)))))))))))) {
                            goto LAB_1801db948;
                        }
                    }
                    
LAB_1801db948:
                    item_index = item_index + 1;
                    end_address = end_address + 8;
                    *(bool *)((longlong)array_position + *(longlong *)data_context[3]) = current_node == node_root;
                    data_array = (longlong *)*data_context;
                    data_pointer = *data_array;
                    array_size = data_array[1] - data_pointer >> 3;
                } while ((ulonglong)(longlong)item_index < array_size);
            }
            
            data_value = (int)current_index + 1;
            current_index = (ulonglong)data_value;
            base_address = base_address + BUFFER_SIZE_INCREMENT;
        } while ((int)data_value < end_index);
    }
    return;
}

/**
 * 带回调的数据处理函数
 * 
 * 功能：处理数据并在满足条件时调用回调函数
 * 
 * @param callback_context 回调函数上下文
 * @param data_pointer 数据指针
 * @param max_iterations 最大迭代次数
 */
void ProcessDataWithCallback(undefined8 callback_context, undefined8 data_pointer, int max_iterations)
{
    undefined8 *node_root;
    ulonglong current_index;
    bool comparison_result;
    longlong register_rax;
    undefined8 *current_node;
    undefined8 *next_node;
    longlong data_base;
    undefined8 *target_node;
    undefined8 *search_node;
    undefined8 register_rbx;
    int item_index;
    undefined8 register_rbp;
    int array_position;
    undefined8 register_rsi;
    undefined8 register_rdi;
    ulonglong array_size;
    longlong *data_array;
    uint data_value;
    ulonglong register_r12;
    undefined8 register_r13;
    longlong offset_value;
    undefined8 *register_r14;
    undefined8 register_r15;
    longlong end_address;
    int stack_param;
    
    // 寄存器保存
    *(undefined8 *)(register_rax + 8) = register_rbx;
    *(undefined8 *)(register_rax + 0x10) = register_rbp;
    *(undefined8 *)(register_rax + 0x20) = register_rsi;
    
    data_base = data_array[1];
    end_address = *data_array;
    *(undefined8 *)(register_rax + -0x18) = register_rdi;
    *(undefined8 *)(register_rax + -0x20) = register_r13;
    offset_value = register_r12 * 4;
    *(undefined8 *)(register_rax + -0x28) = register_r15;
    
    array_size = data_base - end_address >> 3;
    
    do {
        item_index = 0;
        if (array_size != 0) {
            data_base = *data_array;
            end_address = 0;
            do {
                array_size = *(ulonglong *)(data_base + end_address);
                node_root = (undefined8 *)register_r14[4];
                data_value = *(uint *)(*(longlong *)register_r14[1] + offset_value);
                array_position = (int)(data_array[1] - data_base >> 3) * (int)register_r12 + item_index;
                current_index = *(ulonglong *)register_r14[5];
                target_node = (undefined8 *)node_root[2];
                search_node = node_root;
                
                if (target_node == (undefined8 *)0x0) {
LAB_1801db948:
                    current_node = node_root;
                }
                else {
                    do {
                        // 复杂的比较逻辑：比较多个字段来确定节点顺序
                        if (((ulonglong)target_node[4] < current_index) ||
                            (((ulonglong)target_node[4] <= current_index &&
                             (((ulonglong)target_node[5] < array_size ||
                              (((ulonglong)target_node[5] <= array_size &&
                               ((*(uint *)(target_node + 6) < data_value ||
                                ((*(uint *)(target_node + 6) <= data_value &&
                                 (*(ushort *)((longlong)target_node + MAX_COMPARISON_DEPTH) < 
                                  (ushort)*(byte *)register_r14[2]))))))))))) {
                            next_node = (undefined8 *)*target_node;
                            comparison_result = true;
                        }
                        else {
                            next_node = (undefined8 *)target_node[1];
                            comparison_result = false;
                        }
                        
                        current_node = target_node;
                        if (comparison_result) {
                            current_node = search_node;
                        }
                        search_node = current_node;
                        target_node = next_node;
                    } while (next_node != (undefined8 *)0x0);
                    
                    // 检查是否需要插入新节点
                    if (((current_node == node_root) || (current_index < (ulonglong)current_node[4])) ||
                        ((current_index <= (ulonglong)current_node[4] &&
                         ((array_size < (ulonglong)current_node[5] ||
                          ((array_size <= (ulonglong)current_node[5] &&
                           ((data_value < *(uint *)(current_node + 6) ||
                            ((data_value <= *(uint *)(current_node + 6) &&
                             ((ushort)*(byte *)register_r14[2] < 
                              *(ushort *)((longlong)current_node + MAX_COMPARISON_DEPTH)))))))))))) {
                        goto LAB_1801db948;
                    }
                }
                
                item_index = item_index + 1;
                end_address = end_address + 8;
                *(bool *)((longlong)array_position + *(longlong *)register_r14[3]) = current_node == node_root;
                data_array = (longlong *)*register_r14;
                data_base = *data_array;
                array_size = data_array[1] - data_base >> 3;
                max_iterations = stack_param;
            } while ((ulonglong)(longlong)item_index < array_size);
        }
        
        data_value = (int)register_r12 + 1;
        register_r12 = (ulonglong)data_value;
        offset_value = offset_value + BUFFER_SIZE_INCREMENT;
        if (max_iterations <= (int)data_value) {
            return;
        }
    } while( true );
}

/**
 * 空函数（占位符）
 * 
 * 功能：这是一个空的占位符函数，可能用于调试或未来扩展
 */
void EmptyFunction(void)
{
    return;
}

/**
 * 高级数据处理函数
 * 
 * 功能：执行复杂的数据处理操作，包括内存管理、字符串处理和结构体操作
 * 
 * @param param_1 参数1：上下文信息
 * @param param_2 参数2：数据结构指针
 * @param param_3 参数3：处理选项
 * @param param_4 参数4：附加参数
 */
void ProcessAdvancedData(undefined8 param_1, undefined8 *param_2, undefined8 param_3, undefined8 param_4)
{
    byte byte_value;
    longlong data_address;
    bool comparison_result;
    ulonglong loop_counter;
    byte *string_pointer;
    int string_length;
    longlong *data_array;
    undefined *temp_pointer;
    undefined8 *current_node;
    undefined8 *next_node;
    undefined8 *search_node;
    undefined8 *target_node;
    longlong offset_value;
    ulonglong temp_ulong;
    uint data_value;
    ulonglong max_iterations;
    int stack_index;
    undefined *stack_pointer_d0;
    byte *stack_string_c8;
    int stack_int_c0;
    ulonglong stack_ulong_b8;
    longlong *stack_long_b0;
    undefined *stack_pointer_a8;
    longlong stack_long_a0;
    undefined4 stack_int_90;
    undefined2 stack_short_88;
    longlong *stack_long_80;
    longlong stack_long_78;
    undefined8 stack_ulong_70;
    undefined4 stack_int_68;
    undefined8 stack_ulong_60;
    undefined **stack_pointer_58;
    longlong *stack_long_50;
    undefined1 stack_buffer_48 [16];
    
    // 初始化栈变量
    stack_ulong_60 = INVALID_HANDLE;
    stack_long_80 = (longlong *)0x0;
    stack_long_78 = 0;
    stack_ulong_70 = 0;
    stack_int_68 = 3;
    
    // 调用初始化函数
    FUN_1800b7eb0(0, &stack_long_80, param_3, param_4, 0);
    
    stack_index = 0;
    temp_ulong = stack_long_78 - (longlong)stack_long_80 >> 3;
    data_array = stack_long_80;
    
    if (temp_ulong != 0) {
        do {
            loop_counter = 0;
            data_address = *data_array;
            offset_value = *(longlong *)(data_address + DATA_OFFSET_0x38);
            max_iterations = loop_counter;
            stack_long_b0 = data_array;
            
            if (*(longlong *)(data_address + DATA_OFFSET_0x40) - offset_value >> 4 != 0) {
                do {
                    // 检查标志位
                    if ((*(uint *)(*(longlong *)(loop_counter + offset_value) + DATA_OFFSET_0x100) & FLAG_0x400000) != 0) {
                        offset_value = *(longlong *)(*(longlong *)(loop_counter + offset_value) + DATA_OFFSET_0x1b8);
                        stack_pointer_d0 = &UNK_180a3c3e0;
                        stack_ulong_b8 = 0;
                        stack_string_c8 = (byte *)0x0;
                        stack_int_c0 = 0;
                        
                        // 调用处理函数
                        FUN_1806277c0(&stack_pointer_d0, *(undefined4 *)(offset_value + 0x20));
                        
                        // 字符串处理
                        if (0 < *(int *)(offset_value + 0x20)) {
                            temp_pointer = &DAT_18098bc73;
                            if (*(undefined **)(offset_value + 0x18) != (undefined *)0x0) {
                                temp_pointer = *(undefined **)(offset_value + 0x18);
                            }
                            // 复制字符串数据
                            memcpy(stack_string_c8, temp_pointer, (longlong)(*(int *)(offset_value + 0x20) + 1));
                        }
                        
                        // 字符串终止符处理
                        if ((*(longlong *)(offset_value + 0x18) != 0) && (stack_int_c0 = 0, stack_string_c8 != (byte *)0x0)) {
                            *stack_string_c8 = 0;
                        }
                        
                        // 节点搜索和处理
                        search_node = (undefined8 *)param_2[2];
                        target_node = param_2;
                        
                        if (search_node == (undefined8 *)0x0) {
LAB_1801dbba7:
                            current_node = param_2;
                        }
                        else {
                            do {
                                if (stack_int_c0 == 0) {
                                    comparison_result = false;
                                    next_node = (undefined8 *)search_node[1];
                                }
                                else {
                                    if (*(int *)(search_node + 6) == 0) {
                                        comparison_result = true;
                                    }
                                    else {
                                        string_pointer = stack_string_c8;
                                        do {
                                            data_value = (uint)string_pointer[search_node[5] - (longlong)stack_string_c8];
                                            string_length = *string_pointer - data_value;
                                            if (*string_pointer != data_value) break;
                                            string_pointer = string_pointer + 1;
                                        } while (data_value != 0);
                                        comparison_result = 0 < string_length;
                                        if (string_length < 1) {
                                            next_node = (undefined8 *)search_node[1];
                                            goto LAB_1801dbb6a;
                                        }
                                    }
                                    next_node = (undefined8 *)*search_node;
                                }
LAB_1801dbb6a:
                                current_node = search_node;
                                if (comparison_result) {
                                    current_node = target_node;
                                }
                                target_node = current_node;
                                search_node = next_node;
                            } while (next_node != (undefined8 *)0x0);
                            
                            if (current_node == param_2) goto LAB_1801dbba7;
                            if (*(int *)(current_node + 6) != 0) {
                                if (stack_int_c0 != 0) {
                                    string_pointer = (byte *)current_node[5];
                                    offset_value = (longlong)stack_string_c8 - (longlong)string_pointer;
                                    do {
                                        byte_value = *string_pointer;
                                        data_value = (uint)string_pointer[offset_value];
                                        if (byte_value != data_value) break;
                                        string_pointer = string_pointer + 1;
                                    } while (data_value != 0);
                                    if ((int)(byte_value - data_value) < 1) goto LAB_1801dbbaa;
                                }
                                goto LAB_1801dbba7;
                            }
                        }
LAB_1801dbbaa:
                        if (current_node != param_2) goto LAB_1801dbcca;
                        
                        // 清理和重新初始化
                        FUN_180627ae0(&stack_pointer_a8, &stack_pointer_d0);
                        stack_short_88 = 0;
                        FUN_1801eac40(param_2, stack_buffer_48);
                        stack_pointer_58 = &stack_pointer_a8;
                        stack_pointer_a8 = &UNK_180a3c3e0;
                        
                        if (stack_long_a0 != 0) {
                            FUN_18064e900();
                        }
                        
                        stack_long_a0 = 0;
                        stack_int_90 = 0;
                        stack_pointer_a8 = &UNK_18098bcb0;
                        
                        // 重新搜索节点
                        search_node = (undefined8 *)param_2[2];
                        target_node = param_2;
                        
                        if (search_node == (undefined8 *)0x0) {
LAB_1801dbcc7:
                            current_node = param_2;
                        }
                        else {
                            do {
                                if (stack_int_c0 == 0) {
                                    comparison_result = false;
                                    next_node = (undefined8 *)search_node[1];
                                }
                                else {
                                    if (*(int *)(search_node + 6) == 0) {
                                        comparison_result = true;
                                    }
                                    else {
                                        string_pointer = stack_string_c8;
                                        do {
                                            data_value = (uint)string_pointer[search_node[5] - (longlong)stack_string_c8];
                                            string_length = *string_pointer - data_value;
                                            if (*string_pointer != data_value) break;
                                            string_pointer = string_pointer + 1;
                                        } while (data_value != 0);
                                        comparison_result = 0 < string_length;
                                        if (string_length < 1) {
                                            next_node = (undefined8 *)search_node[1];
                                            goto LAB_1801dbc87;
                                        }
                                    }
                                    next_node = (undefined8 *)*search_node;
                                }
LAB_1801dbc87:
                                current_node = search_node;
                                if (comparison_result) {
                                    current_node = target_node;
                                }
                                target_node = current_node;
                                search_node = next_node;
                            } while (next_node != (undefined8 *)0x0);
                            
                            if (current_node == param_2) goto LAB_1801dbcc7;
                            if (*(int *)(current_node + 6) != 0) {
                                if (stack_int_c0 != 0) {
                                    string_pointer = (byte *)current_node[5];
                                    offset_value = (longlong)stack_string_c8 - (longlong)string_pointer;
                                    do {
                                        byte_value = *string_pointer;
                                        data_value = (uint)string_pointer[offset_value];
                                        if (byte_value != data_value) break;
                                        string_pointer = string_pointer + 1;
                                    } while (data_value != 0);
                                    if ((int)(byte_value - data_value) < 1) goto LAB_1801dbcca;
                                }
                                goto LAB_1801dbcc7;
                            }
                        }
LAB_1801dbcca:
                        // 最终处理
                        data_array = *(longlong **)(*(longlong *)(data_address + DATA_OFFSET_0x3c8) + 0x20);
                        stack_long_50 = data_array;
                        
                        if (data_array == (longlong *)0x0) {
                            *(undefined1 *)((longlong)current_node + NODE_OFFSET_0x41) = FLAG_ACTIVE;
                        }
                        else {
                            // 调用节点处理函数
                            (**(code **)(*data_array + NODE_OFFSET_0x28))(data_array);
                            (**(code **)(*data_array + NODE_OFFSET_0x38))(data_array);
                            *(undefined1 *)(current_node + 8) = FLAG_ACTIVE;
                        }
                        
                        // 清理栈变量
                        stack_pointer_d0 = &UNK_180a3c3e0;
                        if (stack_string_c8 != (byte *)0x0) {
                            FUN_18064e900();
                        }
                        stack_string_c8 = (byte *)0x0;
                        stack_ulong_b8 = stack_ulong_b8 & 0xffffffff00000000;
                        stack_pointer_d0 = &UNK_18098bcb0;
                    }
                    
                    data_value = (int)max_iterations + 1;
                    loop_counter = loop_counter + 0x10;
                    offset_value = *(longlong *)(data_address + DATA_OFFSET_0x38);
                    max_iterations = (ulonglong)data_value;
                } while ((ulonglong)(longlong)(int)data_value <
                         (ulonglong)(*(longlong *)(data_address + DATA_OFFSET_0x40) - offset_value >> 4));
            }
            
            stack_index = stack_index + 1;
            stack_long_b0 = stack_long_b0 + 1;
            data_array = stack_long_b0;
        } while ((ulonglong)(longlong)stack_index < temp_ulong);
    }
    
    // 最终清理
    if (stack_long_80 != (longlong *)0x0) {
        FUN_18064e900(stack_long_80);
    }
    return;
}

/**
 * 全局变量和外部引用声明
 * 
 * 注意：这些全局变量在编译时可能与其他符号重叠
 */
// WARNING: Globals starting with '_' overlap smaller symbols at the same address