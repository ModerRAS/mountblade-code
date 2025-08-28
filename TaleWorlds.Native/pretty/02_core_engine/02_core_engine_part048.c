#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part048.c - 核心引擎字符串处理和错误管理模块
// 本文件包含字符串搜索、内存管理和错误处理相关功能

// 全局变量声明
uint64_t _DAT;  // 引擎配置数据
uint64_t _DAT;  // 核心引擎数据结构
uint64_t _DAT;  // 错误处理系统
uint64_t _DAT;  // 内存管理器
uint64_t _DAT;  // 字符串常量池
uint64_t unknown_var_8312_ptr;   // 错误消息指针
uint64_t unknown_var_8368_ptr;   // 系统消息指针
uint64_t unknown_var_8076_ptr;   // 警告消息指针
uint64_t unknown_var_8376_ptr;   // 调试消息指针
uint64_t unknown_var_8416_ptr;   // 状态消息指针
uint64_t system_data_buffer_ptr;   // 内存管理对象
uint64_t system_config_ptr;   // 默认字符串
uint64_t system_state_ptr;   // 空指针标记
uint64_t DAT;   // 搜索模式字符串

/**
 * 处理字符串搜索和内存管理
 * 执行复杂的字符串匹配、内存分配和错误处理操作
 * 
 * 原始实现：FUN_1800896b0
 * 简化实现：字符串搜索和内存管理处理
 */
void process_string_search_and_memory_management(void)
{
    int8_t search_result;      // 搜索结果标志
    byte string_state;             // 字符串状态
    bool match_found;             // 匹配标志
    int8_t *string_buffer;    // 字符串缓冲区
    char current_char;            // 当前字符
    char compare_char;            // 比较字符
    int search_index;             // 搜索索引
    uint64_t loop_counter;       // 循环计数器
    int64_t data_pointer;        // 数据指针
    void **result_pointer;   // 结果指针
    int64_t array_pointer;       // 数组指针
    byte *byte_pointer;           // 字节指针
    char *char_pointer;           // 字符指针
    void *temp_pointer1;      // 临时指针1
    void *temp_pointer2;      // 临时指针2
    int64_t offset_value;        // 偏移值
    uint64_t address_value;      // 地址值
    int temp_int1;                 // 临时整数1
    int64_t *long_pointer;       // 长整型指针
    int8_t *buffer_pointer;    // 缓冲区指针
    int64_t temp_long1;           // 临时长整型1
    uint *uint_pointer;           // 无符号整型指针
    int8_t *temp_buffer1;      // 临时缓冲区1
    uint64_t temp_ulong1;        // 临时无符号长整型1
    uint64_t temp_uint64_t;   // 临时未定义8字节
    uint temp_uint1;              // 临时无符号整型1
    uint64_t temp_ulong2;        // 临时无符号长整型2
    int64_t temp_long2;           // 临时长整型2
    int32_t xmm0_out;          // XMM0寄存器输出
    int8_t stack_buffer1[32];  // 栈缓冲区1
    void *stack_pointer1;     // 栈指针1
    char stack_char1[4];          // 栈字符1
    uint stack_uint1;             // 栈无符号整型1
    void **stack_pointer2;   // 栈指针2
    void *stack_pointer3;     // 栈指针3
    int64_t stack_long1;         // 栈长整型1
    uint stack_uint2;             // 栈无符号整型2
    uint64_t stack_ulong1;       // 栈无符号长整型1
    int64_t stack_long2;         // 栈长整型2
    void *stack_pointer4;     // 栈指针4
    int8_t *stack_pointer5;     // 栈指针5
    int32_t stack_uint3;       // 栈无符号整型3
    uint64_t stack_ulong2;       // 栈无符号长整型2
    void *stack_pointer6;     // 栈指针6
    int8_t *stack_pointer7;     // 栈指针7
    int32_t stack_uint4;       // 栈无符号整型4
    uint64_t stack_ulong3;       // 栈无符号长整型3
    void *stack_pointer8;     // 栈指针8
    int8_t *stack_pointer9;     // 栈指针9
    int32_t stack_uint5;       // 栈无符号整型5
    uint64_t stack_ulong4;       // 栈无符号长整型4
    void *stack_pointer10;    // 栈指针10
    int8_t *stack_pointer11;    // 栈指针11
    int stack_int1;               // 栈整型1
    uint64_t stack_ulong5;       // 栈无符号长整型5
    void *stack_pointer12;    // 栈指针12
    int64_t stack_long3;         // 栈长整型3
    int32_t stack_uint6;       // 栈无符号整型6
    uint64_t stack_ulong6;       // 栈无符号长整型6
    int64_t stack_long4;         // 栈长整型4
    void *stack_pointer13;    // 栈指针13
    void *stack_pointer14;    // 栈指针14
    int32_t stack_uint7;       // 栈无符号整型7
    uint64_t stack_ulong7;       // 栈无符号长整型7
    void *stack_pointer15;    // 栈指针15
    int8_t *stack_pointer16;    // 栈指针16
    int32_t stack_uint8;       // 栈无符号整型8
    uint64_t stack_uint64_t;  // 栈未定义8字节
    void *stack_pointer17;    // 栈指针17
    void *stack_pointer18;    // 栈指针18
    int32_t stack_uint9;       // 栈无符号整型9
    uint64_t stack_ulong8;       // 栈无符号长整型8
    void *stack_pointer19;    // 栈指针19
    uint64_t stack_data9;  // 栈数据9
    int32_t stack_uint10;      // 栈无符号整型10
    uint64_t stack_ulong9;       // 栈无符号长整型9
    int64_t stack_long5;         // 栈长整型5
    void **stack_pointer20;   // 栈指针20
    int64_t *stack_pointer21;    // 栈指针21
    uint64_t stack_int8_t0; // 栈未定义10字节
    int32_t stack_uint11;      // 栈无符号整型11
    int8_t stack_byte1;       // 栈字节1
    void *stack_pointer_array[2]; // 栈指针数组
    code *code_pointer1;          // 代码指针1
    code *code_pointer2;          // 代码指针2
    int8_t stack_buffer2[16];  // 栈缓冲区2
    code *code_pointer3;          // 代码指针3
    code *code_pointer4;          // 代码指针4
    int8_t stack_buffer3[16];  // 栈缓冲区3
    code *code_pointer5;          // 代码指针5
    code *code_pointer6;          // 代码指针6
    int64_t stack_long6;         // 栈长整型6
    int64_t stack_long7;         // 栈长整型7
    int64_t stack_long8;         // 栈长整型8
    int64_t stack_long9;         // 栈长整型9
    uint64_t stack_int8_t1; // 栈未定义11字节
    int32_t stack_uint12;      // 栈无符号整型12
    uint64_t stack_int8_t2; // 栈未定义12字节
    void **stack_pointer22;   // 栈指针22
    int8_t stack_buffer4[16];  // 栈缓冲区4
    void *stack_pointer23;    // 栈指针23
    int8_t *stack_pointer24;    // 栈指针24
    int32_t stack_uint13;      // 栈无符号整型13
    int8_t stack_buffer5[16];  // 栈缓冲区5
    void *stack_pointer_array2[5]; // 栈指针数组2
    void *stack_pointer25;    // 栈指针25
    void *stack_pointer26;    // 栈指针26
    int stack_int2;               // 栈整型2
    uint64_t stack_ulong10;      // 栈无符号长整型10
    
    // 初始化栈变量
    stack_int8_t2 = 0xfffffffffffffffe;
    stack_ulong10 = _DAT ^ (uint64_t)stack_buffer1;
    temp_ulong2 = 0;
    stack_uint1 = 0;
    stack_long4 = _DAT;
    search_index = (int)((*(int64_t *)(_DAT + 0x10) - *(int64_t *)(_DAT + 8)) / 0x60);
    
    // 搜索匹配的字符串模式
    if (0 < search_index) {
        long_pointer = (int64_t *)(*(int64_t *)(_DAT + 8) + 8);
        address_value = temp_ulong2;
        temp_ulong1 = temp_ulong2;
        do {
            temp_int1 = (int)temp_ulong1;
            if ((int)long_pointer[1] == 6) {
                temp_ulong1 = temp_ulong2;
                while (loop_counter = temp_ulong1 + 1, *(char *)(*long_pointer + temp_ulong1) == (&DAT)[temp_ulong1]) {
                    temp_ulong1 = loop_counter;
                    if (loop_counter == 7) {
                        if (temp_int1 == -1) goto error_handler;
                        stack_long7 = (int64_t)
                                     (int)(*(int64_t *)(_DAT + 0x30) -
                                           *(int64_t *)(_DAT + 0x28) >> 5);
                        if (stack_long7 < 1) goto cleanup_handler;
                        stack_long5 = 0;
                        stack_long2 = (int64_t)temp_int1 * 0x60;
                        offset_value = _DAT;
                        goto process_string_match;
                    }
                }
            }
            temp_ulong1 = (uint64_t)(temp_int1 + 1);
            address_value = address_value + 1;
            long_pointer = long_pointer + 0xc;
        } while ((int64_t)address_value < (int64_t)search_index);
    }
error_handler:
                    // 调用错误处理函数
    handle_error_message(_DAT,&unknown_var_8312_ptr);
process_string_match:
    array_pointer = stack_long2;
    temp_uint1 = 0;
    temp_long2 = stack_long5 * 0x20 + *(int64_t *)(offset_value + 0x28);
    temp_pointer1 = &DAT;
    if (_DAT != (void *)0x0) {
        temp_pointer1 = _DAT;
    }
    data_pointer = -1;
    do {
        data_pointer = data_pointer + 1;
    } while (temp_pointer1[data_pointer] != '\0');
    
    // 检查字符串长度
    if (*(int *)(temp_long2 + 0x10) < (int)data_pointer) {
    string_mismatch:
        match_found = false;
    }
    else {
        char_pointer = (char *)((int64_t)(*(int *)(temp_long2 + 0x10) - (int)data_pointer) + *(int64_t *)(temp_long2 + 8));
        data_pointer = (int64_t)temp_pointer1 - (int64_t)char_pointer;
        do {
            current_char = *char_pointer;
            compare_char = char_pointer[data_pointer];
            if (current_char != compare_char) break;
            char_pointer = char_pointer + 1;
        } while (compare_char != '\0');
        if (current_char != compare_char) goto string_mismatch;
        match_found = true;
    }
    
    // 处理字符串匹配结果
    if (match_found) {
        search_index = *(int *)(stack_long2 + 0x5c + *(int64_t *)(offset_value + 8));
        address_value = (uint64_t)search_index;
        current_char = *(char *)(address_value + *(int64_t *)(*_DAT + 0x8c8));
        if (current_char == '\0') {
            stack_pointer23 = &system_config_ptr;
            stack_pointer24 = stack_buffer5;
            stack_buffer5[0] = 0;
            stack_uint13 = 0;
            strcpy_s(stack_buffer5,0x10,&DAT);
            result_pointer = &stack_pointer23;
            temp_uint1 = (uint)temp_ulong2 | 2;
        }
        else {
            result_pointer = (void **)create_string_buffer(stack_pointer_array2);
            temp_uint1 = (uint)temp_ulong2 | 1;
        }
        
        // 创建字符串处理对象
        stack_pointer10 = &system_data_buffer_ptr;
        stack_ulong5 = 0;
        stack_pointer11 = (int8_t *)0x0;
        stack_int1 = 0;
        stack_uint1 = temp_uint1;
        create_string_processor(&stack_pointer10);
        string_buffer = stack_pointer11;
        
        // 复制字符串数据
        if (0 < *(int *)(result_pointer + 2)) {
            temp_pointer1 = &DAT;
            if (result_pointer[1] != (void *)0x0) {
                temp_pointer1 = result_pointer[1];
            }
                    // 复制字符串内容
            copy_string_content(string_buffer,temp_pointer1,*(int *)(result_pointer + 2) + 1);
        }
        
        // 处理字符串终止符
        if ((result_pointer[1] != (void *)0x0) && (stack_int1 = 0, string_buffer != (int8_t *)0x0)) {
            *string_buffer = 0;
        }
        temp_int1 = stack_int1;
        
        // 清理字符串处理标志
        if ((temp_uint1 & 2) != 0) {
            temp_uint1 = temp_uint1 & 0xfffffffd;
            stack_pointer23 = &system_state_ptr;
            stack_uint1 = temp_uint1;
        }
        if ((temp_uint1 & 1) != 0) {
            temp_uint1 = temp_uint1 & 0xfffffffe;
            stack_pointer_array2[0] = &system_state_ptr;
            stack_uint1 = temp_uint1;
        }
        temp_ulong2 = (uint64_t)temp_uint1;
        
        // 创建第二个字符串处理对象
        stack_pointer13 = &system_data_buffer_ptr;
        stack_ulong7 = 0;
        stack_pointer14 = (void *)0x0;
        stack_uint7 = 0;
        
        // 检查索引范围
        if ((search_index < 0) ||
           (offset_value = *(int64_t *)(*_DAT + 0x888),
           (uint64_t)(*(int64_t *)(*_DAT + 0x890) - offset_value >> 5) <= address_value)) {
            offset_value = allocate_memory_block();
        }
        else {
            offset_value = address_value * 0x20 + offset_value;
        }
        
        // 创建第三个字符串处理对象
        stack_pointer4 = &system_data_buffer_ptr;
        stack_ulong2 = 0;
        stack_pointer5 = (int8_t *)0x0;
        stack_uint3 = 0;
        create_string_processor(&stack_pointer4,*(int32_t *)(offset_value + 0x10));
        array_pointer = stack_long4;
        temp_buffer1 = stack_pointer5;
        
        // 复制第二个字符串数据
        if (*(int *)(offset_value + 0x10) != 0) {
                    // 复制字符串内容
            copy_string_content(stack_pointer5,*(uint64_t *)(offset_value + 8),*(int *)(offset_value + 0x10) + 1);
        }
        
        // 处理第二个字符串终止符
        if (*(int64_t *)(offset_value + 8) != 0) {
            stack_uint3 = 0;
            if (stack_pointer5 != (int8_t *)0x0) {
                *stack_pointer5 = 0;
            }
            stack_ulong2 = stack_ulong2 & 0xffffffff;
        }
        
        // 设置字符串比较参数
        stack_pointer1 = &DAT;
        if (*(void **)(temp_long2 + 8) != (void *)0x0) {
            stack_pointer1 = *(void **)(temp_long2 + 8);
        }
        temp_pointer1 = *(void **)(stack_long2 + 0x28 + *(int64_t *)(stack_long4 + 8));
        temp_pointer2 = &DAT;
        if (temp_pointer1 != (void *)0x0) {
            temp_pointer2 = temp_pointer1;
        }
        temp_pointer20 = &DAT;
        if (stack_pointer5 != (int8_t *)0x0) {
            temp_pointer20 = stack_pointer5;
        }
        
        // 执行字符串比较
        compare_strings(&stack_pointer13,&unknown_var_8368_ptr,temp_pointer20,temp_pointer2);
        current_char = validate_string_comparison(&stack_pointer13);
        offset_value = stack_long2;
        
        // 处理字符串比较结果
        if (current_char != '\0') {
            stack_pointer3 = &system_data_buffer_ptr;
            stack_ulong1 = 0;
            stack_long3 = 0;
            stack_uint2 = 0;
            temp_pointer1 = *(void **)(stack_long2 + 0x28 + *(int64_t *)(array_pointer + 8));
            temp_pointer2 = &DAT;
            if (temp_pointer1 != (void *)0x0) {
                temp_pointer2 = temp_pointer1;
            }
            temp_pointer20 = &DAT;
            if (temp_buffer1 != (int8_t *)0x0) {
                temp_pointer20 = temp_buffer1;
            }
            setup_string_comparison(&stack_pointer3,&unknown_var_8076_ptr,temp_pointer20,temp_pointer2);
            
            // 处理字符串替换
            if (compare_char != '\0') {
                stack_pointer8 = &system_data_buffer_ptr;
                stack_ulong9 = 0;
                stack_data9 = 0;
                stack_uint10 = 0;
                if (((0 < (int)stack_uint2) && (0 < temp_int1)) &&
                   (array_pointer = find_substring(stack_long3,string_buffer), array_pointer != 0)) {
                    search_index = (int)array_pointer - (int)stack_long3;
                    if (stack_uint2 < (uint)(temp_int1 + search_index)) {
                        temp_int1 = stack_uint2 - search_index;
                    }
                    address_value = temp_int1 + search_index;
                    if (address_value < stack_uint2) {
                        array_pointer = (int64_t)(int)address_value;
                        do {
                            *(int8_t *)((array_pointer - temp_int1) + stack_long3) = *(int8_t *)(array_pointer + stack_long3);
                            address_value = address_value + 1;
                            array_pointer = array_pointer + 1;
                        } while (address_value < stack_uint2);
                    }
                    stack_uint2 = stack_uint2 - temp_int1;
                    *(int8_t *)((uint64_t)stack_uint2 + stack_long3) = 0;
                }
                stack_data9 = 0;
                stack_ulong9 = stack_ulong9 & 0xffffffff00000000;
                stack_pointer8 = &system_state_ptr;
            }
            
            // 执行字符串处理操作
            execute_string_operation(&stack_pointer25,temp_long2);
            array_pointer = stack_long4;
            stack_pointer17 = &system_data_buffer_ptr;
            stack_ulong8 = 0;
            stack_pointer18 = (void *)0x0;
            stack_uint9 = 0;
            search_result = *(int8_t *)(offset_value + 0x58 + *(int64_t *)(stack_long4 + 8));
            stack_pointer22 = &stack_pointer16;
            stack_pointer16 = &system_data_buffer_ptr;
            stack_int8_t0 = 0;
            stack_pointer16 = (int8_t *)0x0;
            stack_uint8 = 0;
            create_string_processor(&stack_pointer16,stack_int2);
            
            // 复制第三个字符串数据
            if (0 < stack_int2) {
                temp_pointer1 = &DAT;
                if (stack_pointer26 != (void *)0x0) {
                    temp_pointer1 = stack_pointer26;
                }
                    // 复制字符串内容
                copy_string_content(stack_pointer16,temp_pointer1,stack_int2 + 1);
            }
            
            // 处理第三个字符串终止符
            if ((stack_pointer26 != (void *)0x0) && (stack_uint8 = 0, stack_pointer16 != (int8_t *)0x0)) {
                *stack_pointer16 = 0;
            }
            stack_pointer20 = &stack_pointer6;
            stack_pointer6 = &system_data_buffer_ptr;
            stack_ulong3 = 0;
            stack_pointer7 = (int8_t *)0x0;
            stack_uint4 = 0;
            create_string_processor(&stack_pointer6,stack_uint2);
            
            // 复制第四个字符串数据
            if (stack_uint2 != 0) {
                    // 复制字符串内容
                copy_string_content(stack_pointer7,stack_long3,stack_uint2 + 1);
            }
            
            // 处理第四个字符串终止符
            if (stack_long3 != 0) {
                stack_uint4 = 0;
                if (stack_pointer7 != (int8_t *)0x0) {
                    *stack_pointer7 = 0;
                }
                stack_ulong3 = stack_ulong3 & 0xffffffff;
            }
            
            stack_pointer1 = (void *)CONCAT71(stack_pointer1._1_7_,search_result);
            compare_char = process_string_data(&stack_long6,&stack_pointer6,&stack_pointer16,&stack_pointer17);
            offset_value = stack_long6;
            
            // 处理字符串数据处理结果
            if (compare_char == '\0') {
                temp_pointer1 = &DAT;
                if (stack_pointer18 != (void *)0x0) {
                    temp_pointer1 = stack_pointer18;
                }
                temp_pointer2 = &DAT;
                if (stack_pointer14 != (void *)0x0) {
                    temp_pointer2 = stack_pointer14;
                }
                log_debug_message(&unknown_var_8376_ptr,temp_pointer2,temp_pointer1);
            }
            else {
                *(int32_t *)(stack_long6 + 4) =
                     *(int32_t *)(stack_long2 + 0x5c + *(int64_t *)(array_pointer + 8));
                update_string_data(array_pointer,stack_long6);
                process_string_operations(array_pointer + 0x48,stack_buffer4,offset_value + 0x58);
            }
            
            // 清理字符串处理对象
            stack_pointer17 = &system_data_buffer_ptr;
            if (stack_pointer18 != (void *)0x0) {
                    // 释放内存
                free_memory();
            }
            stack_pointer18 = (void *)0x0;
            stack_ulong8 = stack_ulong8 & 0xffffffff00000000;
            stack_pointer17 = &system_state_ptr;
            stack_pointer25 = &system_state_ptr;
            stack_pointer3 = &system_data_buffer_ptr;
            if (stack_long3 != 0) {
                    // 释放内存
                free_memory();
            }
            stack_long3 = 0;
            stack_ulong1 = stack_ulong1 & 0xffffffff00000000;
            stack_pointer3 = &system_state_ptr;
        }
        
        // 清理所有字符串处理对象
        stack_pointer4 = &system_data_buffer_ptr;
        if (temp_buffer1 != (int8_t *)0x0) {
                    // 释放内存
            free_memory(temp_buffer1);
        }
        stack_pointer5 = (int8_t *)0x0;
        stack_ulong2 = stack_ulong2 & 0xffffffff00000000;
        stack_pointer4 = &system_state_ptr;
        stack_pointer13 = &system_data_buffer_ptr;
        if (stack_pointer14 != (void *)0x0) {
                    // 释放内存
            free_memory();
        }
        stack_pointer14 = (void *)0x0;
        stack_ulong7 = stack_ulong7 & 0xffffffff00000000;
        stack_pointer13 = &system_state_ptr;
        stack_pointer10 = &system_data_buffer_ptr;
        if (string_buffer != (int8_t *)0x0) {
                    // 释放内存
            free_memory(string_buffer);
        }
        stack_pointer11 = (int8_t *)0x0;
        stack_ulong5 = stack_ulong5 & 0xffffffff00000000;
        stack_pointer10 = &system_state_ptr;
        offset_value = stack_long4;
    }
    else {
        search_index = *(int *)(stack_long2 + 0x5c + *(int64_t *)(offset_value + 8));
        if ((search_index < 0) ||
           (data_pointer = *(int64_t *)(*_DAT + 0x888),
           (uint64_t)(*(int64_t *)(*_DAT + 0x890) - data_pointer >> 5) <=
           (uint64_t)(int64_t)search_index)) {
            data_pointer = allocate_memory_block();
        }
        else {
            data_pointer = (int64_t)search_index * 0x20 + data_pointer;
        }
        
        // 创建字符串缓冲区
        stack_pointer12 = &system_data_buffer_ptr;
        stack_ulong6 = 0;
        stack_pointer9 = (int8_t *)0x0;
        stack_uint6 = 0;
        if (*(int *)(data_pointer + 0x10) != 0) {
            search_index = *(int *)(data_pointer + 0x10) + 1;
            if (search_index < 0x10) {
                search_index = 0x10;
            }
            stack_pointer9 = (int8_t *)allocate_buffer(_DAT,(int64_t)search_index,0x13);
            *stack_pointer9 = 0;
            address_value = (uint64_t)stack_pointer9 & 0xffffffffffc00000;
            if (address_value != 0) {
                temp_long1 = ((int64_t)stack_pointer9 - address_value >> 0x10) * 0x50 + 0x80 + address_value;
                uint_pointer = (uint *)(temp_long1 - (uint64_t)*(uint *)(temp_long1 + 4));
                if ((*(byte *)((int64_t)uint_pointer + 0xe) & 2) == 0) {
                    temp_uint1 = uint_pointer[7];
                    if (0x3ffffff < temp_uint1) {
                        temp_uint1 = *uint_pointer << 0x10;
                    }
                }
                else {
                    temp_uint1 = uint_pointer[7];
                    if (temp_uint1 < 0x4000000) {
                        temp_ulong1 = (uint64_t)temp_uint1;
                    }
                    else {
                        temp_ulong1 = (uint64_t)*uint_pointer << 0x10;
                    }
                    if (0x3ffffff < temp_uint1) {
                        temp_uint1 = *uint_pointer << 0x10;
                    }
                    temp_uint1 = temp_uint1 - (int)(((int64_t)stack_pointer9 -
                                                    (((int64_t)((int64_t)uint_pointer + (-0x80 - address_value)) / 0x50) *
                                                     0x10000 + address_value)) % temp_ulong1);
                }
            }
            stack_ulong6 = CONCAT44(stack_ulong6._4_4_,temp_uint1);
            if (*(int *)(data_pointer + 0x10) != 0) {
                    // 复制字符串内容
                copy_string_content(stack_pointer9,*(uint64_t *)(data_pointer + 8),*(int *)(data_pointer + 0x10) + 1);
            }
        }
        string_buffer = stack_pointer9;
        
        // 处理字符串终止符
        if (*(int64_t *)(data_pointer + 8) != 0) {
            stack_uint6 = 0;
            if (stack_pointer9 != (int8_t *)0x0) {
                *stack_pointer9 = 0;
            }
            stack_ulong6 = stack_ulong6 & 0xffffffff;
        }
        
        // 设置字符串处理参数
        stack_pointer12 = &system_data_buffer_ptr;
        stack_ulong6 = 0;
        stack_long3 = 0;
        stack_uint6 = 0;
        stack_pointer1 = &DAT;
        if (*(void **)(temp_long2 + 8) != (void *)0x0) {
            stack_pointer1 = *(void **)(temp_long2 + 8);
        }
        temp_pointer1 = *(void **)(array_pointer + 0x28 + *(int64_t *)(offset_value + 8));
        temp_pointer2 = &DAT;
        if (temp_pointer1 != (void *)0x0) {
            temp_pointer2 = temp_pointer1;
        }
        temp_buffer1 = &DAT;
        if (stack_pointer9 != (int8_t *)0x0) {
            temp_buffer1 = stack_pointer9;
        }
        
        // 执行字符串处理
        process_string_data(&stack_pointer12,&unknown_var_8368_ptr,temp_buffer1,temp_pointer2);
        current_char = validate_string_processing(&stack_pointer12);
        
        // 处理字符串处理结果
        if (current_char != '\0') {
            stack_pointer20 = &stack_pointer12;
            stack_pointer21 = &stack_long8;
            stack_pointer20 = (void **)stack_buffer3;
            stack_uint12 = 3;
            stack_int8_t1 = 0;
            stack_long9 = 0;
            stack_long8 = 0;
            code_pointer2 = _guard_check_icall;
            code_pointer3 = (code *)0x0;
            code_pointer4 = _guard_check_icall;
            code_pointer5 = (code *)0x0;
            code_pointer6 = (code *)0x0;
            code_pointer1 = _guard_check_icall;
            stack_int8_t0 = 0;
            stack_uint11 = *(int32_t *)(*(int64_t *)(offset_value + 8) + 0x5c + array_pointer);
            stack_byte1 = *(int8_t *)(*(int64_t *)(offset_value + 8) + 0x58 + array_pointer);
            execute_string_processing_function(&stack_pointer20);
            
            // 处理字符串处理结果
            if (stack_long9 - stack_long8 >> 3 != 0) {
                array_pointer = offset_value + 0x48;
                temp_long2 = allocate_buffer(_DAT,0x40,*(int8_t *)(offset_value + 0x70));
                setup_string_processor(temp_long2 + 0x20,&stack_pointer12);
                data_pointer = execute_string_operations(array_pointer,stack_char1,temp_long2 + 0x20);
                if (stack_char1[0] != '\0') {
                    if (data_pointer == array_pointer) goto string_comparison_failed;
                    if (*(int *)(data_pointer + 0x30) == 0) goto string_comparison_success;
                    if (*(int *)(temp_long2 + 0x30) == 0) goto string_comparison_failed;
                    byte_pointer = *(byte **)(data_pointer + 0x28);
                    offset_value = *(int64_t *)(temp_long2 + 0x28) - (int64_t)byte_pointer;
                    goto compare_string_bytes;
                }
                cleanup_string_processing(xmm0_out,temp_long2);
                process_string_result(offset_value,&stack_long8);
            }
            stack_pointer20 = (void **)stack_buffer3;
            if (code_pointer6 != (code *)0x0) {
                (*code_pointer6)(stack_buffer3,0,0);
            }
            stack_pointer20 = (void **)stack_buffer2;
            if (code_pointer3 != (code *)0x0) {
                (*code_pointer3)(stack_buffer2,0,0);
            }
            stack_pointer20 = stack_pointer_array;
            if (code_pointer5 != (code *)0x0) {
                (*code_pointer5)(stack_pointer_array,0,0);
            }
            if (stack_long8 != 0) {
                    // 释放内存
                free_memory();
            }
        }
        
        // 清理字符串处理对象
        stack_pointer12 = &system_data_buffer_ptr;
        if (stack_long3 != 0) {
                    // 释放内存
            free_memory();
        }
        stack_long3 = 0;
        stack_ulong6 = stack_ulong6 & 0xffffffff00000000;
        stack_pointer12 = &system_state_ptr;
        stack_pointer12 = &system_data_buffer_ptr;
        if (string_buffer != (int8_t *)0x0) {
                    // 释放内存
            free_memory(string_buffer);
        }
        stack_pointer9 = (int8_t *)0x0;
        stack_ulong6 = stack_ulong6 & 0xffffffff00000000;
        stack_pointer12 = &system_state_ptr;
    }
    
    // 继续处理下一个字符串
    stack_long5 = stack_long5 + 1;
    if (stack_long7 <= stack_long5) {
cleanup_handler:
                    // 调用清理函数
        execute_cleanup_function(stack_ulong10 ^ (uint64_t)stack_buffer1);
    }
    goto process_string_match;
    
    // 字符串比较循环
    while (byte_pointer = byte_pointer + 1, address_value != 0) {
compare_string_bytes:
        string_state = *byte_pointer;
        address_value = (uint)byte_pointer[offset_value];
        if (string_state != address_value) break;
    }
    if ((int)(string_state - address_value) < 1) {
string_comparison_success:
        temp_uint64_t = 1;
    }
    else {
string_comparison_failed:
        temp_uint64_t = 0;
    }
                    // 调用字符串比较结果处理函数
    process_string_comparison_result(temp_long2,data_pointer,array_pointer,temp_uint64_t);
}

/**
 * 处理字符串搜索和结果验证
 * 执行字符串搜索操作并验证结果
 * 
 * 原始实现：FUN_18008a480
 * 简化实现：字符串搜索和结果验证
 */
void process_string_search_and_validation(uint64_t search_param1, int64_t search_param2, 
                                        uint64_t search_param3, uint64_t search_param4)
{
    int64_t data_pointer1;
    int64_t data_pointer2;
    void *string_pointer;
    void *stack_pointer1;
    int8_t *stack_pointer2;
    int32_t stack_uint1;
    uint64_t stack_int8_t;
    
    data_pointer1 = _DAT;
    string_pointer = &DAT;
    if (*(void **)(search_param2 + 8) != (void *)0x0) {
        string_pointer = *(void **)(search_param2 + 8);
    }
    data_pointer2 = search_string_pattern(string_pointer,&DAT,search_param3,search_param4,0xfffffffffffffffe);
    if (data_pointer2 == 0) {
        stack_pointer1 = &system_data_buffer_ptr;
        stack_int8_t = 0;
        stack_pointer2 = (int8_t *)0x0;
        stack_uint1 = 0;
        create_string_processor(&stack_pointer1,*(int32_t *)(search_param2 + 0x10));
        
        // 复制字符串内容
        if (0 < *(int *)(search_param2 + 0x10)) {
            string_pointer = &DAT;
            if (*(void **)(search_param2 + 8) != (void *)0x0) {
                string_pointer = *(void **)(search_param2 + 8);
            }
                    // 复制字符串内容
            copy_string_content(stack_pointer2,string_pointer,*(int *)(search_param2 + 0x10) + 1);
        }
        
        // 处理字符串终止符
        if ((*(int64_t *)(search_param2 + 8) != 0) && (stack_uint1 = 0, stack_pointer2 != (int8_t *)0x0)) {
            *stack_pointer2 = 0;
        }
        
        // 执行字符串处理
        execute_string_processing(data_pointer1 + 0x28,&stack_pointer1);
        stack_pointer1 = &system_data_buffer_ptr;
        if (stack_pointer2 != (int8_t *)0x0) {
                    // 释放内存
            free_memory();
        }
    }
    else {
        log_status_message(&unknown_var_8416_ptr);
    }
    return;
}

// 辅助函数声明
void handle_error_message(uint64_t error_system, uint64_t message_pointer);
int64_t allocate_memory_block(void);
void create_string_processor(void *processor_object, ...);
void copy_string_content(int8_t *dest, void *src, int64_t length);
void compare_strings(void *result, void *pattern, void *str1, void *str2);
char validate_string_comparison(void *comparison_result);
void setup_string_comparison(void *processor, void *pattern, void *str1, void *str2);
char *find_substring(char *haystack, char *needle);
void execute_string_operation(void *result, void *source);
void update_string_data(int64_t pointer, void *data);
void process_string_operations(int64_t pointer, void *buffer, int64_t offset);
void free_memory(void *pointer);
void log_debug_message(void *message, void *param1, void *param2);
int64_t search_string_pattern(void *source, void *pattern, void *param1, void *param2, uint64_t flags);
void log_status_message(void *message);
void setup_string_processor(void *processor, void *source);
int64_t execute_string_operations(int64_t pointer, void *buffer, void *source);
void cleanup_string_processing(int32_t xmm0_out, int64_t pointer);
void process_string_result(int64_t pointer, void *result);
void execute_string_processing_function(void **function_pointer);
void process_string_comparison_result(int64_t param1, int64_t param2, int64_t param3, uint64_t result);