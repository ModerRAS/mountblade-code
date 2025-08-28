#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part048.c - 核心引擎字符串处理和错误管理模块
// 本文件包含字符串搜索、内存管理和错误处理相关功能

// 全局变量声明
undefined8 _DAT_180bf00a8;  // 引擎配置数据
undefined8 _DAT_180c868a8;  // 核心引擎数据结构
undefined8 _DAT_180c86928;  // 错误处理系统
undefined8 _DAT_180c8ed18;  // 内存管理器
undefined8 _DAT_180bf6688;  // 字符串常量池
undefined8 UNK_180a00648;   // 错误消息指针
undefined8 UNK_180a00680;   // 系统消息指针
undefined8 UNK_180a0055c;   // 警告消息指针
undefined8 UNK_180a00688;   // 调试消息指针
undefined8 UNK_180a006b0;   // 状态消息指针
undefined8 UNK_180a3c3e0;   // 内存管理对象
undefined8 UNK_1809fdc18;   // 默认字符串
undefined8 UNK_18098bcb0;   // 空指针标记
undefined8 DAT_1809fe2c8;   // 搜索模式字符串

/**
 * 处理字符串搜索和内存管理
 * 执行复杂的字符串匹配、内存分配和错误处理操作
 * 
 * 原始实现：FUN_1800896b0
 * 简化实现：字符串搜索和内存管理处理
 */
void process_string_search_and_memory_management(void)
{
    undefined1 search_result;      // 搜索结果标志
    byte string_state;             // 字符串状态
    bool match_found;             // 匹配标志
    undefined1 *string_buffer;    // 字符串缓冲区
    char current_char;            // 当前字符
    char compare_char;            // 比较字符
    int search_index;             // 搜索索引
    ulonglong loop_counter;       // 循环计数器
    longlong data_pointer;        // 数据指针
    undefined **result_pointer;   // 结果指针
    longlong array_pointer;       // 数组指针
    byte *byte_pointer;           // 字节指针
    char *char_pointer;           // 字符指针
    undefined *temp_pointer1;      // 临时指针1
    undefined *temp_pointer2;      // 临时指针2
    longlong offset_value;        // 偏移值
    ulonglong address_value;      // 地址值
    int temp_int1;                 // 临时整数1
    longlong *long_pointer;       // 长整型指针
    undefined1 *buffer_pointer;    // 缓冲区指针
    longlong temp_long1;           // 临时长整型1
    uint *uint_pointer;           // 无符号整型指针
    undefined1 *temp_buffer1;      // 临时缓冲区1
    ulonglong temp_ulong1;        // 临时无符号长整型1
    undefined8 temp_undefined8;   // 临时未定义8字节
    uint temp_uint1;              // 临时无符号整型1
    ulonglong temp_ulong2;        // 临时无符号长整型2
    longlong temp_long2;           // 临时长整型2
    undefined4 xmm0_out;          // XMM0寄存器输出
    undefined1 stack_buffer1[32];  // 栈缓冲区1
    undefined *stack_pointer1;     // 栈指针1
    char stack_char1[4];          // 栈字符1
    uint stack_uint1;             // 栈无符号整型1
    undefined **stack_pointer2;   // 栈指针2
    undefined *stack_pointer3;     // 栈指针3
    longlong stack_long1;         // 栈长整型1
    uint stack_uint2;             // 栈无符号整型2
    ulonglong stack_ulong1;       // 栈无符号长整型1
    longlong stack_long2;         // 栈长整型2
    undefined *stack_pointer4;     // 栈指针4
    undefined1 *stack_pointer5;     // 栈指针5
    undefined4 stack_uint3;       // 栈无符号整型3
    ulonglong stack_ulong2;       // 栈无符号长整型2
    undefined *stack_pointer6;     // 栈指针6
    undefined1 *stack_pointer7;     // 栈指针7
    undefined4 stack_uint4;       // 栈无符号整型4
    ulonglong stack_ulong3;       // 栈无符号长整型3
    undefined *stack_pointer8;     // 栈指针8
    undefined1 *stack_pointer9;     // 栈指针9
    undefined4 stack_uint5;       // 栈无符号整型5
    ulonglong stack_ulong4;       // 栈无符号长整型4
    undefined *stack_pointer10;    // 栈指针10
    undefined1 *stack_pointer11;    // 栈指针11
    int stack_int1;               // 栈整型1
    ulonglong stack_ulong5;       // 栈无符号长整型5
    undefined *stack_pointer12;    // 栈指针12
    longlong stack_long3;         // 栈长整型3
    undefined4 stack_uint6;       // 栈无符号整型6
    ulonglong stack_ulong6;       // 栈无符号长整型6
    longlong stack_long4;         // 栈长整型4
    undefined *stack_pointer13;    // 栈指针13
    undefined *stack_pointer14;    // 栈指针14
    undefined4 stack_uint7;       // 栈无符号整型7
    ulonglong stack_ulong7;       // 栈无符号长整型7
    undefined *stack_pointer15;    // 栈指针15
    undefined1 *stack_pointer16;    // 栈指针16
    undefined4 stack_uint8;       // 栈无符号整型8
    undefined8 stack_undefined8;  // 栈未定义8字节
    undefined *stack_pointer17;    // 栈指针17
    undefined *stack_pointer18;    // 栈指针18
    undefined4 stack_uint9;       // 栈无符号整型9
    ulonglong stack_ulong8;       // 栈无符号长整型8
    undefined *stack_pointer19;    // 栈指针19
    undefined8 stack_undefined9;  // 栈未定义9字节
    undefined4 stack_uint10;      // 栈无符号整型10
    ulonglong stack_ulong9;       // 栈无符号长整型9
    longlong stack_long5;         // 栈长整型5
    undefined **stack_pointer20;   // 栈指针20
    longlong *stack_pointer21;    // 栈指针21
    undefined8 stack_undefined10; // 栈未定义10字节
    undefined4 stack_uint11;      // 栈无符号整型11
    undefined1 stack_byte1;       // 栈字节1
    undefined *stack_pointer_array[2]; // 栈指针数组
    code *code_pointer1;          // 代码指针1
    code *code_pointer2;          // 代码指针2
    undefined1 stack_buffer2[16];  // 栈缓冲区2
    code *code_pointer3;          // 代码指针3
    code *code_pointer4;          // 代码指针4
    undefined1 stack_buffer3[16];  // 栈缓冲区3
    code *code_pointer5;          // 代码指针5
    code *code_pointer6;          // 代码指针6
    longlong stack_long6;         // 栈长整型6
    longlong stack_long7;         // 栈长整型7
    longlong stack_long8;         // 栈长整型8
    longlong stack_long9;         // 栈长整型9
    undefined8 stack_undefined11; // 栈未定义11字节
    undefined4 stack_uint12;      // 栈无符号整型12
    undefined8 stack_undefined12; // 栈未定义12字节
    undefined **stack_pointer22;   // 栈指针22
    undefined1 stack_buffer4[16];  // 栈缓冲区4
    undefined *stack_pointer23;    // 栈指针23
    undefined1 *stack_pointer24;    // 栈指针24
    undefined4 stack_uint13;      // 栈无符号整型13
    undefined1 stack_buffer5[16];  // 栈缓冲区5
    undefined *stack_pointer_array2[5]; // 栈指针数组2
    undefined *stack_pointer25;    // 栈指针25
    undefined *stack_pointer26;    // 栈指针26
    int stack_int2;               // 栈整型2
    ulonglong stack_ulong10;      // 栈无符号长整型10
    
    // 初始化栈变量
    stack_undefined12 = 0xfffffffffffffffe;
    stack_ulong10 = _DAT_180bf00a8 ^ (ulonglong)stack_buffer1;
    temp_ulong2 = 0;
    stack_uint1 = 0;
    stack_long4 = _DAT_180c868a8;
    search_index = (int)((*(longlong *)(_DAT_180c868a8 + 0x10) - *(longlong *)(_DAT_180c868a8 + 8)) / 0x60);
    
    // 搜索匹配的字符串模式
    if (0 < search_index) {
        long_pointer = (longlong *)(*(longlong *)(_DAT_180c868a8 + 8) + 8);
        address_value = temp_ulong2;
        temp_ulong1 = temp_ulong2;
        do {
            temp_int1 = (int)temp_ulong1;
            if ((int)long_pointer[1] == 6) {
                temp_ulong1 = temp_ulong2;
                while (loop_counter = temp_ulong1 + 1, *(char *)(*long_pointer + temp_ulong1) == (&DAT_1809fd128)[temp_ulong1]) {
                    temp_ulong1 = loop_counter;
                    if (loop_counter == 7) {
                        if (temp_int1 == -1) goto error_handler;
                        stack_long7 = (longlong)
                                     (int)(*(longlong *)(_DAT_180c868a8 + 0x30) -
                                           *(longlong *)(_DAT_180c868a8 + 0x28) >> 5);
                        if (stack_long7 < 1) goto cleanup_handler;
                        stack_long5 = 0;
                        stack_long2 = (longlong)temp_int1 * 0x60;
                        offset_value = _DAT_180c868a8;
                        goto process_string_match;
                    }
                }
            }
            temp_ulong1 = (ulonglong)(temp_int1 + 1);
            address_value = address_value + 1;
            long_pointer = long_pointer + 0xc;
        } while ((longlong)address_value < (longlong)search_index);
    }
error_handler:
                    // 调用错误处理函数
    handle_error_message(_DAT_180c86928,&UNK_180a00648);
process_string_match:
    array_pointer = stack_long2;
    temp_uint1 = 0;
    temp_long2 = stack_long5 * 0x20 + *(longlong *)(offset_value + 0x28);
    temp_pointer1 = &DAT_18098bc73;
    if (_DAT_180bf6688 != (undefined *)0x0) {
        temp_pointer1 = _DAT_180bf6688;
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
        char_pointer = (char *)((longlong)(*(int *)(temp_long2 + 0x10) - (int)data_pointer) + *(longlong *)(temp_long2 + 8));
        data_pointer = (longlong)temp_pointer1 - (longlong)char_pointer;
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
        search_index = *(int *)(stack_long2 + 0x5c + *(longlong *)(offset_value + 8));
        address_value = (ulonglong)search_index;
        current_char = *(char *)(address_value + *(longlong *)(*_DAT_180c86870 + 0x8c8));
        if (current_char == '\0') {
            stack_pointer23 = &UNK_1809fdc18;
            stack_pointer24 = stack_buffer5;
            stack_buffer5[0] = 0;
            stack_uint13 = 0;
            strcpy_s(stack_buffer5,0x10,&DAT_18098bc73);
            result_pointer = &stack_pointer23;
            temp_uint1 = (uint)temp_ulong2 | 2;
        }
        else {
            result_pointer = (undefined **)create_string_buffer(stack_pointer_array2);
            temp_uint1 = (uint)temp_ulong2 | 1;
        }
        
        // 创建字符串处理对象
        stack_pointer10 = &UNK_180a3c3e0;
        stack_ulong5 = 0;
        stack_pointer11 = (undefined1 *)0x0;
        stack_int1 = 0;
        stack_uint1 = temp_uint1;
        create_string_processor(&stack_pointer10);
        string_buffer = stack_pointer11;
        
        // 复制字符串数据
        if (0 < *(int *)(result_pointer + 2)) {
            temp_pointer1 = &DAT_18098bc73;
            if (result_pointer[1] != (undefined *)0x0) {
                temp_pointer1 = result_pointer[1];
            }
                    // 复制字符串内容
            copy_string_content(string_buffer,temp_pointer1,*(int *)(result_pointer + 2) + 1);
        }
        
        // 处理字符串终止符
        if ((result_pointer[1] != (undefined *)0x0) && (stack_int1 = 0, string_buffer != (undefined1 *)0x0)) {
            *string_buffer = 0;
        }
        temp_int1 = stack_int1;
        
        // 清理字符串处理标志
        if ((temp_uint1 & 2) != 0) {
            temp_uint1 = temp_uint1 & 0xfffffffd;
            stack_pointer23 = &UNK_18098bcb0;
            stack_uint1 = temp_uint1;
        }
        if ((temp_uint1 & 1) != 0) {
            temp_uint1 = temp_uint1 & 0xfffffffe;
            stack_pointer_array2[0] = &UNK_18098bcb0;
            stack_uint1 = temp_uint1;
        }
        temp_ulong2 = (ulonglong)temp_uint1;
        
        // 创建第二个字符串处理对象
        stack_pointer13 = &UNK_180a3c3e0;
        stack_ulong7 = 0;
        stack_pointer14 = (undefined *)0x0;
        stack_uint7 = 0;
        
        // 检查索引范围
        if ((search_index < 0) ||
           (offset_value = *(longlong *)(*_DAT_180c86870 + 0x888),
           (ulonglong)(*(longlong *)(*_DAT_180c86870 + 0x890) - offset_value >> 5) <= address_value)) {
            offset_value = allocate_memory_block();
        }
        else {
            offset_value = address_value * 0x20 + offset_value;
        }
        
        // 创建第三个字符串处理对象
        stack_pointer4 = &UNK_180a3c3e0;
        stack_ulong2 = 0;
        stack_pointer5 = (undefined1 *)0x0;
        stack_uint3 = 0;
        create_string_processor(&stack_pointer4,*(undefined4 *)(offset_value + 0x10));
        array_pointer = stack_long4;
        temp_buffer1 = stack_pointer5;
        
        // 复制第二个字符串数据
        if (*(int *)(offset_value + 0x10) != 0) {
                    // 复制字符串内容
            copy_string_content(stack_pointer5,*(undefined8 *)(offset_value + 8),*(int *)(offset_value + 0x10) + 1);
        }
        
        // 处理第二个字符串终止符
        if (*(longlong *)(offset_value + 8) != 0) {
            stack_uint3 = 0;
            if (stack_pointer5 != (undefined1 *)0x0) {
                *stack_pointer5 = 0;
            }
            stack_ulong2 = stack_ulong2 & 0xffffffff;
        }
        
        // 设置字符串比较参数
        stack_pointer1 = &DAT_18098bc73;
        if (*(undefined **)(temp_long2 + 8) != (undefined *)0x0) {
            stack_pointer1 = *(undefined **)(temp_long2 + 8);
        }
        temp_pointer1 = *(undefined **)(stack_long2 + 0x28 + *(longlong *)(stack_long4 + 8));
        temp_pointer2 = &DAT_18098bc73;
        if (temp_pointer1 != (undefined *)0x0) {
            temp_pointer2 = temp_pointer1;
        }
        temp_pointer20 = &DAT_18098bc73;
        if (stack_pointer5 != (undefined1 *)0x0) {
            temp_pointer20 = stack_pointer5;
        }
        
        // 执行字符串比较
        compare_strings(&stack_pointer13,&UNK_180a00680,temp_pointer20,temp_pointer2);
        current_char = validate_string_comparison(&stack_pointer13);
        offset_value = stack_long2;
        
        // 处理字符串比较结果
        if (current_char != '\0') {
            stack_pointer3 = &UNK_180a3c3e0;
            stack_ulong1 = 0;
            stack_long3 = 0;
            stack_uint2 = 0;
            temp_pointer1 = *(undefined **)(stack_long2 + 0x28 + *(longlong *)(array_pointer + 8));
            temp_pointer2 = &DAT_18098bc73;
            if (temp_pointer1 != (undefined *)0x0) {
                temp_pointer2 = temp_pointer1;
            }
            temp_pointer20 = &DAT_18098bc73;
            if (temp_buffer1 != (undefined1 *)0x0) {
                temp_pointer20 = temp_buffer1;
            }
            setup_string_comparison(&stack_pointer3,&UNK_180a0055c,temp_pointer20,temp_pointer2);
            
            // 处理字符串替换
            if (compare_char != '\0') {
                stack_pointer8 = &UNK_180a3c3e0;
                stack_ulong9 = 0;
                stack_undefined9 = 0;
                stack_uint10 = 0;
                if (((0 < (int)stack_uint2) && (0 < temp_int1)) &&
                   (array_pointer = find_substring(stack_long3,string_buffer), array_pointer != 0)) {
                    search_index = (int)array_pointer - (int)stack_long3;
                    if (stack_uint2 < (uint)(temp_int1 + search_index)) {
                        temp_int1 = stack_uint2 - search_index;
                    }
                    address_value = temp_int1 + search_index;
                    if (address_value < stack_uint2) {
                        array_pointer = (longlong)(int)address_value;
                        do {
                            *(undefined1 *)((array_pointer - temp_int1) + stack_long3) = *(undefined1 *)(array_pointer + stack_long3);
                            address_value = address_value + 1;
                            array_pointer = array_pointer + 1;
                        } while (address_value < stack_uint2);
                    }
                    stack_uint2 = stack_uint2 - temp_int1;
                    *(undefined1 *)((ulonglong)stack_uint2 + stack_long3) = 0;
                }
                stack_undefined9 = 0;
                stack_ulong9 = stack_ulong9 & 0xffffffff00000000;
                stack_pointer8 = &UNK_18098bcb0;
            }
            
            // 执行字符串处理操作
            execute_string_operation(&stack_pointer25,temp_long2);
            array_pointer = stack_long4;
            stack_pointer17 = &UNK_180a3c3e0;
            stack_ulong8 = 0;
            stack_pointer18 = (undefined *)0x0;
            stack_uint9 = 0;
            search_result = *(undefined1 *)(offset_value + 0x58 + *(longlong *)(stack_long4 + 8));
            stack_pointer22 = &stack_pointer16;
            stack_pointer16 = &UNK_180a3c3e0;
            stack_undefined10 = 0;
            stack_pointer16 = (undefined1 *)0x0;
            stack_uint8 = 0;
            create_string_processor(&stack_pointer16,stack_int2);
            
            // 复制第三个字符串数据
            if (0 < stack_int2) {
                temp_pointer1 = &DAT_18098bc73;
                if (stack_pointer26 != (undefined *)0x0) {
                    temp_pointer1 = stack_pointer26;
                }
                    // 复制字符串内容
                copy_string_content(stack_pointer16,temp_pointer1,stack_int2 + 1);
            }
            
            // 处理第三个字符串终止符
            if ((stack_pointer26 != (undefined *)0x0) && (stack_uint8 = 0, stack_pointer16 != (undefined1 *)0x0)) {
                *stack_pointer16 = 0;
            }
            stack_pointer20 = &stack_pointer6;
            stack_pointer6 = &UNK_180a3c3e0;
            stack_ulong3 = 0;
            stack_pointer7 = (undefined1 *)0x0;
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
                if (stack_pointer7 != (undefined1 *)0x0) {
                    *stack_pointer7 = 0;
                }
                stack_ulong3 = stack_ulong3 & 0xffffffff;
            }
            
            stack_pointer1 = (undefined *)CONCAT71(stack_pointer1._1_7_,search_result);
            compare_char = process_string_data(&stack_long6,&stack_pointer6,&stack_pointer16,&stack_pointer17);
            offset_value = stack_long6;
            
            // 处理字符串数据处理结果
            if (compare_char == '\0') {
                temp_pointer1 = &DAT_18098bc73;
                if (stack_pointer18 != (undefined *)0x0) {
                    temp_pointer1 = stack_pointer18;
                }
                temp_pointer2 = &DAT_18098bc73;
                if (stack_pointer14 != (undefined *)0x0) {
                    temp_pointer2 = stack_pointer14;
                }
                log_debug_message(&UNK_180a00688,temp_pointer2,temp_pointer1);
            }
            else {
                *(undefined4 *)(stack_long6 + 4) =
                     *(undefined4 *)(stack_long2 + 0x5c + *(longlong *)(array_pointer + 8));
                update_string_data(array_pointer,stack_long6);
                process_string_operations(array_pointer + 0x48,stack_buffer4,offset_value + 0x58);
            }
            
            // 清理字符串处理对象
            stack_pointer17 = &UNK_180a3c3e0;
            if (stack_pointer18 != (undefined *)0x0) {
                    // 释放内存
                free_memory();
            }
            stack_pointer18 = (undefined *)0x0;
            stack_ulong8 = stack_ulong8 & 0xffffffff00000000;
            stack_pointer17 = &UNK_18098bcb0;
            stack_pointer25 = &UNK_18098bcb0;
            stack_pointer3 = &UNK_180a3c3e0;
            if (stack_long3 != 0) {
                    // 释放内存
                free_memory();
            }
            stack_long3 = 0;
            stack_ulong1 = stack_ulong1 & 0xffffffff00000000;
            stack_pointer3 = &UNK_18098bcb0;
        }
        
        // 清理所有字符串处理对象
        stack_pointer4 = &UNK_180a3c3e0;
        if (temp_buffer1 != (undefined1 *)0x0) {
                    // 释放内存
            free_memory(temp_buffer1);
        }
        stack_pointer5 = (undefined1 *)0x0;
        stack_ulong2 = stack_ulong2 & 0xffffffff00000000;
        stack_pointer4 = &UNK_18098bcb0;
        stack_pointer13 = &UNK_180a3c3e0;
        if (stack_pointer14 != (undefined *)0x0) {
                    // 释放内存
            free_memory();
        }
        stack_pointer14 = (undefined *)0x0;
        stack_ulong7 = stack_ulong7 & 0xffffffff00000000;
        stack_pointer13 = &UNK_18098bcb0;
        stack_pointer10 = &UNK_180a3c3e0;
        if (string_buffer != (undefined1 *)0x0) {
                    // 释放内存
            free_memory(string_buffer);
        }
        stack_pointer11 = (undefined1 *)0x0;
        stack_ulong5 = stack_ulong5 & 0xffffffff00000000;
        stack_pointer10 = &UNK_18098bcb0;
        offset_value = stack_long4;
    }
    else {
        search_index = *(int *)(stack_long2 + 0x5c + *(longlong *)(offset_value + 8));
        if ((search_index < 0) ||
           (data_pointer = *(longlong *)(*_DAT_180c86870 + 0x888),
           (ulonglong)(*(longlong *)(*_DAT_180c86870 + 0x890) - data_pointer >> 5) <=
           (ulonglong)(longlong)search_index)) {
            data_pointer = allocate_memory_block();
        }
        else {
            data_pointer = (longlong)search_index * 0x20 + data_pointer;
        }
        
        // 创建字符串缓冲区
        stack_pointer12 = &UNK_180a3c3e0;
        stack_ulong6 = 0;
        stack_pointer9 = (undefined1 *)0x0;
        stack_uint6 = 0;
        if (*(int *)(data_pointer + 0x10) != 0) {
            search_index = *(int *)(data_pointer + 0x10) + 1;
            if (search_index < 0x10) {
                search_index = 0x10;
            }
            stack_pointer9 = (undefined1 *)allocate_buffer(_DAT_180c8ed18,(longlong)search_index,0x13);
            *stack_pointer9 = 0;
            address_value = (ulonglong)stack_pointer9 & 0xffffffffffc00000;
            if (address_value != 0) {
                temp_long1 = ((longlong)stack_pointer9 - address_value >> 0x10) * 0x50 + 0x80 + address_value;
                uint_pointer = (uint *)(temp_long1 - (ulonglong)*(uint *)(temp_long1 + 4));
                if ((*(byte *)((longlong)uint_pointer + 0xe) & 2) == 0) {
                    temp_uint1 = uint_pointer[7];
                    if (0x3ffffff < temp_uint1) {
                        temp_uint1 = *uint_pointer << 0x10;
                    }
                }
                else {
                    temp_uint1 = uint_pointer[7];
                    if (temp_uint1 < 0x4000000) {
                        temp_ulong1 = (ulonglong)temp_uint1;
                    }
                    else {
                        temp_ulong1 = (ulonglong)*uint_pointer << 0x10;
                    }
                    if (0x3ffffff < temp_uint1) {
                        temp_uint1 = *uint_pointer << 0x10;
                    }
                    temp_uint1 = temp_uint1 - (int)(((longlong)stack_pointer9 -
                                                    (((longlong)((longlong)uint_pointer + (-0x80 - address_value)) / 0x50) *
                                                     0x10000 + address_value)) % temp_ulong1);
                }
            }
            stack_ulong6 = CONCAT44(stack_ulong6._4_4_,temp_uint1);
            if (*(int *)(data_pointer + 0x10) != 0) {
                    // 复制字符串内容
                copy_string_content(stack_pointer9,*(undefined8 *)(data_pointer + 8),*(int *)(data_pointer + 0x10) + 1);
            }
        }
        string_buffer = stack_pointer9;
        
        // 处理字符串终止符
        if (*(longlong *)(data_pointer + 8) != 0) {
            stack_uint6 = 0;
            if (stack_pointer9 != (undefined1 *)0x0) {
                *stack_pointer9 = 0;
            }
            stack_ulong6 = stack_ulong6 & 0xffffffff;
        }
        
        // 设置字符串处理参数
        stack_pointer12 = &UNK_180a3c3e0;
        stack_ulong6 = 0;
        stack_long3 = 0;
        stack_uint6 = 0;
        stack_pointer1 = &DAT_18098bc73;
        if (*(undefined **)(temp_long2 + 8) != (undefined *)0x0) {
            stack_pointer1 = *(undefined **)(temp_long2 + 8);
        }
        temp_pointer1 = *(undefined **)(array_pointer + 0x28 + *(longlong *)(offset_value + 8));
        temp_pointer2 = &DAT_18098bc73;
        if (temp_pointer1 != (undefined *)0x0) {
            temp_pointer2 = temp_pointer1;
        }
        temp_buffer1 = &DAT_18098bc73;
        if (stack_pointer9 != (undefined1 *)0x0) {
            temp_buffer1 = stack_pointer9;
        }
        
        // 执行字符串处理
        process_string_data(&stack_pointer12,&UNK_180a00680,temp_buffer1,temp_pointer2);
        current_char = validate_string_processing(&stack_pointer12);
        
        // 处理字符串处理结果
        if (current_char != '\0') {
            stack_pointer20 = &stack_pointer12;
            stack_pointer21 = &stack_long8;
            stack_pointer20 = (undefined **)stack_buffer3;
            stack_uint12 = 3;
            stack_undefined11 = 0;
            stack_long9 = 0;
            stack_long8 = 0;
            code_pointer2 = _guard_check_icall;
            code_pointer3 = (code *)0x0;
            code_pointer4 = _guard_check_icall;
            code_pointer5 = (code *)0x0;
            code_pointer6 = (code *)0x0;
            code_pointer1 = _guard_check_icall;
            stack_undefined10 = 0;
            stack_uint11 = *(undefined4 *)(*(longlong *)(offset_value + 8) + 0x5c + array_pointer);
            stack_byte1 = *(undefined1 *)(*(longlong *)(offset_value + 8) + 0x58 + array_pointer);
            execute_string_processing_function(&stack_pointer20);
            
            // 处理字符串处理结果
            if (stack_long9 - stack_long8 >> 3 != 0) {
                array_pointer = offset_value + 0x48;
                temp_long2 = allocate_buffer(_DAT_180c8ed18,0x40,*(undefined1 *)(offset_value + 0x70));
                setup_string_processor(temp_long2 + 0x20,&stack_pointer12);
                data_pointer = execute_string_operations(array_pointer,stack_char1,temp_long2 + 0x20);
                if (stack_char1[0] != '\0') {
                    if (data_pointer == array_pointer) goto string_comparison_failed;
                    if (*(int *)(data_pointer + 0x30) == 0) goto string_comparison_success;
                    if (*(int *)(temp_long2 + 0x30) == 0) goto string_comparison_failed;
                    byte_pointer = *(byte **)(data_pointer + 0x28);
                    offset_value = *(longlong *)(temp_long2 + 0x28) - (longlong)byte_pointer;
                    goto compare_string_bytes;
                }
                cleanup_string_processing(xmm0_out,temp_long2);
                process_string_result(offset_value,&stack_long8);
            }
            stack_pointer20 = (undefined **)stack_buffer3;
            if (code_pointer6 != (code *)0x0) {
                (*code_pointer6)(stack_buffer3,0,0);
            }
            stack_pointer20 = (undefined **)stack_buffer2;
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
        stack_pointer12 = &UNK_180a3c3e0;
        if (stack_long3 != 0) {
                    // 释放内存
            free_memory();
        }
        stack_long3 = 0;
        stack_ulong6 = stack_ulong6 & 0xffffffff00000000;
        stack_pointer12 = &UNK_18098bcb0;
        stack_pointer12 = &UNK_180a3c3e0;
        if (string_buffer != (undefined1 *)0x0) {
                    // 释放内存
            free_memory(string_buffer);
        }
        stack_pointer9 = (undefined1 *)0x0;
        stack_ulong6 = stack_ulong6 & 0xffffffff00000000;
        stack_pointer12 = &UNK_18098bcb0;
    }
    
    // 继续处理下一个字符串
    stack_long5 = stack_long5 + 1;
    if (stack_long7 <= stack_long5) {
cleanup_handler:
                    // 调用清理函数
        execute_cleanup_function(stack_ulong10 ^ (ulonglong)stack_buffer1);
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
        temp_undefined8 = 1;
    }
    else {
string_comparison_failed:
        temp_undefined8 = 0;
    }
                    // 调用字符串比较结果处理函数
    process_string_comparison_result(temp_long2,data_pointer,array_pointer,temp_undefined8);
}

/**
 * 处理字符串搜索和结果验证
 * 执行字符串搜索操作并验证结果
 * 
 * 原始实现：FUN_18008a480
 * 简化实现：字符串搜索和结果验证
 */
void process_string_search_and_validation(undefined8 search_param1, longlong search_param2, 
                                        undefined8 search_param3, undefined8 search_param4)
{
    longlong data_pointer1;
    longlong data_pointer2;
    undefined *string_pointer;
    undefined *stack_pointer1;
    undefined1 *stack_pointer2;
    undefined4 stack_uint1;
    undefined8 stack_undefined1;
    
    data_pointer1 = _DAT_180c868a8;
    string_pointer = &DAT_18098bc73;
    if (*(undefined **)(search_param2 + 8) != (undefined *)0x0) {
        string_pointer = *(undefined **)(search_param2 + 8);
    }
    data_pointer2 = search_string_pattern(string_pointer,&DAT_1809fe2c8,search_param3,search_param4,0xfffffffffffffffe);
    if (data_pointer2 == 0) {
        stack_pointer1 = &UNK_180a3c3e0;
        stack_undefined1 = 0;
        stack_pointer2 = (undefined1 *)0x0;
        stack_uint1 = 0;
        create_string_processor(&stack_pointer1,*(undefined4 *)(search_param2 + 0x10));
        
        // 复制字符串内容
        if (0 < *(int *)(search_param2 + 0x10)) {
            string_pointer = &DAT_18098bc73;
            if (*(undefined **)(search_param2 + 8) != (undefined *)0x0) {
                string_pointer = *(undefined **)(search_param2 + 8);
            }
                    // 复制字符串内容
            copy_string_content(stack_pointer2,string_pointer,*(int *)(search_param2 + 0x10) + 1);
        }
        
        // 处理字符串终止符
        if ((*(longlong *)(search_param2 + 8) != 0) && (stack_uint1 = 0, stack_pointer2 != (undefined1 *)0x0)) {
            *stack_pointer2 = 0;
        }
        
        // 执行字符串处理
        execute_string_processing(data_pointer1 + 0x28,&stack_pointer1);
        stack_pointer1 = &UNK_180a3c3e0;
        if (stack_pointer2 != (undefined1 *)0x0) {
                    // 释放内存
            free_memory();
        }
    }
    else {
        log_status_message(&UNK_180a006b0);
    }
    return;
}

// 辅助函数声明
void handle_error_message(undefined8 error_system, undefined8 message_pointer);
longlong allocate_memory_block(void);
void create_string_processor(undefined *processor_object, ...);
void copy_string_content(undefined1 *dest, undefined *src, longlong length);
void compare_strings(undefined *result, undefined *pattern, undefined *str1, undefined *str2);
char validate_string_comparison(undefined *comparison_result);
void setup_string_comparison(undefined *processor, undefined *pattern, undefined *str1, undefined *str2);
char *find_substring(char *haystack, char *needle);
void execute_string_operation(undefined *result, undefined *source);
void update_string_data(longlong pointer, undefined *data);
void process_string_operations(longlong pointer, undefined *buffer, longlong offset);
void free_memory(void *pointer);
void log_debug_message(undefined *message, undefined *param1, undefined *param2);
longlong search_string_pattern(undefined *source, undefined *pattern, undefined *param1, undefined *param2, undefined8 flags);
void log_status_message(undefined *message);
void setup_string_processor(undefined *processor, undefined *source);
longlong execute_string_operations(longlong pointer, undefined *buffer, undefined *source);
void cleanup_string_processing(undefined4 xmm0_out, longlong pointer);
void process_string_result(longlong pointer, undefined *result);
void execute_string_processing_function(undefined **function_pointer);
void process_string_comparison_result(longlong param1, longlong param2, longlong param3, undefined8 result);