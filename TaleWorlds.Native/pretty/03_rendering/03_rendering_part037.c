#include "TaleWorlds.Native.Split.h"

// 03_rendering_part037.c - 渲染系统高级资源管理和字符串处理模块
// 包含1个核心函数，涵盖资源管理、字符串处理、哈希表操作和异常处理等功能

/* 常量定义 */
#define MAX_STRING_LENGTH 0x80
#define MIN_ALLOCATION_SIZE 0x10
#define HASH_TABLE_INITIAL_SIZE 3
#define MEMORY_ALIGNMENT_0X13 0x13
#define MEMORY_ALIGNMENT_0X10 0x10
#define RESOURCE_BLOCK_SIZE 0x20
#define FLOAT_SCALE_FACTOR 1e-05f
#define RANDOM_SEED_XOR 0x41c64e6d
#define INFINITE_UINT 0xffffffff

/* 函数别名定义 */
#define process_rendering_resources FUN_180288f30
#define allocate_rendering_memory FUN_18062b420
#define free_rendering_memory FUN_18064e900
#define copy_string_data FUN_1806277c0
#define resize_string_buffer FUN_18062b8b0
#define get_string_hash FUN_18064e990
#define initialize_resource_array FUN_180059780
#define cleanup_resource_array FUN_18005d580
#define process_resource_entry FUN_180627ae0
#define get_time_value FUN_1800b6b20
#define generate_random_hash FUN_1800b08e0
#define find_resource_in_hash FUN_180057110
#define add_resource_to_hash FUN_180059820
#define initialize_string_resource FUN_18005caa0
#define finalize_resource_processing FUN_18066bdc0
#define traverse_resource_list FUN_18028a660

/**
 * 处理渲染系统资源管理和字符串处理
 * 这是一个高级函数，负责处理渲染资源的动态分配、字符串处理、哈希表管理
 * @param render_context 渲染上下文指针，包含渲染状态和资源信息
 * @param resource_param 资源参数，用于标识要处理的资源类型
 */
void process_rendering_resources(longlong render_context, uint64_t resource_param)
{
    longlong *resource_ptr;
    byte byte_val;
    void *ptr_val;
    bool bool_result;
    uint64_t *******resource_array_ptr;
    int8_t flag_val;
    int int_val;
    int32_t uint_val;
    uint uint_result;
    int8_t *byte_ptr;
    char *char_ptr;
    longlong long_val;
    uint64_t *mem_ptr;
    uint64_t ******array_ptr;
    byte *byte_array_ptr;
    uint64_t *******nested_array_ptr;
    uint64_t *temp_mem_ptr;
    char *temp_char_ptr;
    int temp_int;
    uint64_t *resource_block;
    uint temp_uint;
    uint64_t *alloc_ptr;
    void *undefined_ptr;
    uint64_t *******hash_table_ptr;
    uint64_t *******temp_hash_ptr;
    uint *uint_ptr;
    longlong temp_long;
    uint64_t temp_var;
    ulonglong hash_val1;
    ulonglong hash_val2;
    uint string_length;
    char char_val;
    int8_t stack_buffer1[32];
    int8_t stack_val1;
    void *stack_ptr1;
    char *stack_char_ptr;
    uint stack_uint1;
    uint64_t stack_int8_t;
    void *stack_ptr2;
    int8_t *stack_byte_ptr;
    uint stack_uint2;
    uint64_t stack_int16_t;
    uint stack_uint3;
    uint stack_uint4;
    uint64_t *stack_mem_ptr1;
    uint64_t *stack_mem_ptr2;
    uint64_t *stack_mem_ptr3;
    int32_t stack_uint5;
    uint64_t *stack_resource_ptr1;
    uint64_t *stack_resource_ptr2;
    uint64_t *stack_resource_ptr3;
    int32_t stack_uint6;
    uint64_t *stack_resource_ptr4;
    uint64_t *stack_resource_ptr5;
    uint64_t *stack_resource_ptr6;
    uint64_t *stack_resource_ptr7;
    int32_t stack_uint7;
    uint64_t *******stack_hash_ptr1;
    uint64_t *******stack_hash_ptr2;
    uint64_t *******stack_hash_ptr3;
    uint64_t stack_hash_id3;
    longlong stack_long1;
    int32_t stack_uint8;
    int32_t stack_uint9;
    void **stack_ptr_array;
    void *stack_ptr3;
    int8_t *stack_byte_ptr2;
    int32_t stack_uint10;
    ulonglong stack_ulong1;
    int8_t stack_buffer2[32];
    longlong stack_long2;
    longlong stack_long3;
    longlong stack_long4;
    uint64_t stack_int32_t;
    int32_t stack_uint11;
    uint64_t stack_resource_id5;
    uint64_t stack_resource_id6;
    uint64_t stack_resource_id7;
    void *stack_ptr4;
    char *stack_char_ptr2;
    uint stack_uint12;
    char stack_buffer3[136];
    ulonglong stack_guard;
    
    // 初始化栈保护和变量
    stack_resource_id6 = INFINITE_UINT;
    stack_guard = _DAT ^ (ulonglong)stack_buffer1;
    hash_val1 = 0;
    stack_uint9 = 0;
    stack_long2 = render_context;
    stack_resource_id5 = resource_param;
    stack_uint64_t = resource_param;
    
    // 检查系统状态并确定时间值
    if (*(void **)*_DAT == &UNK_18098bb88) {
        char_val = *(int *)(_DAT + 0xe0) != 0;
    }
    else {
        char_val = (**(code **)(*(void **)*_DAT + 0x48))();
    }
    
    // 根据系统状态设置时间值
    if (char_val == '\0') {
        uint_result = timeGetTime();
    }
    else {
        uint_result = 0xb061;
    }
    
    // 初始化资源处理状态
    stack_long3 = 0;
    stack_long4 = 0;
    stack_int32_t = 0;
    stack_uint11 = 3;
    stack_uint4 = uint_result ^ RANDOM_SEED_XOR;
    
    // 初始化资源数组
    get_time_value(0, &stack_long3);
    stack_resource_ptr1 = (uint64_t *)0x0;
    stack_resource_ptr2 = (uint64_t *)0x0;
    stack_resource_ptr3 = (uint64_t *)0x0;
    stack_uint6 = 3;
    uint_result = uint_result ^ RANDOM_SEED_XOR;
    
    // 处理资源列表中的每个条目
    if (stack_long4 - stack_long3 >> 3 != 0) {
        do {
            mem_ptr = (uint64_t *)0x0;
            long_val = *(longlong *)(stack_long3 + hash_val1 * 8);
            stack_ptr4 = &UNK_1809fcc28;
            stack_char_ptr2 = stack_buffer3;
            stack_buffer3[0] = '\0';
            stack_uint12 = *(uint *)(long_val + 0x20);
            ptr_val = *(void **)(long_val + 0x18);
            undefined_ptr = &DAT;
            
            // 获取资源名称
            if (ptr_val != (void *)0x0) {
                undefined_ptr = ptr_val;
            }
            strcpy_s(stack_buffer3, MAX_STRING_LENGTH, undefined_ptr);
            
            // 检查字符串长度是否符合要求
            if (stack_uint12 < _DAT) {
            LAB_string_length_check:
                bool_result = false;
            }
            else {
                if (_DAT != 0) {
                    temp_char_ptr = stack_char_ptr2;
                    temp_mem_ptr = mem_ptr;
                    do {
                        if (*temp_char_ptr != temp_char_ptr[_DAT - (longlong)stack_char_ptr2]) 
                            goto LAB_string_length_check;
                        uint_result = (int)temp_mem_ptr + 1;
                        temp_mem_ptr = (uint64_t *)(ulonglong)uint_result;
                        temp_char_ptr = temp_char_ptr + 1;
                    } while (uint_result < _DAT);
                }
                bool_result = true;
            }
            
            // 处理符合要求的资源
            if (bool_result) {
                stack_ptr1 = &UNK_180a3c3e0;
                stack_int8_t = 0;
                stack_char_ptr = (int8_t *)0x0;
                stack_uint1 = 0;
                copy_string_data(&stack_ptr1, stack_uint12);
                temp_char_ptr = stack_char_ptr;
                
                // 复制字符串数据
                if (0 < (int)stack_uint12) {
                    temp_char_ptr = "";
                    if (stack_char_ptr2 != (char *)0x0) {
                        temp_char_ptr = stack_char_ptr2;
                    }
                    memcpy(stack_char_ptr, temp_char_ptr, (longlong)(int)(stack_uint12 + 1));
                }
                
                // 处理字符串指针
                if (stack_char_ptr2 == (char *)0x0) {
                    temp_mem_ptr = (uint64_t *)(ulonglong)stack_uint1;
                }
                else {
                    stack_uint1 = 0;
                    temp_mem_ptr = mem_ptr;
                    if (stack_char_ptr != (int8_t *)0x0) {
                        *stack_char_ptr = 0;
                        temp_mem_ptr = (uint64_t *)0x0;
                    }
                }
                
                // 添加到资源数组
                if (stack_resource_ptr2 < stack_resource_ptr3) {
                    stack_resource_ptr4 = stack_resource_ptr2;
                    *stack_resource_ptr2 = &UNK_18098bcb0;
                    stack_resource_ptr2[1] = 0;
                    *(int32_t *)(stack_resource_ptr2 + 2) = 0;
                    *stack_resource_ptr2 = &UNK_180a3c3e0;
                    *(int *)(stack_resource_ptr2 + 2) = (int)temp_mem_ptr;
                    stack_resource_ptr2[1] = stack_char_ptr;
                    *(int32_t *)((longlong)stack_resource_ptr2 + 0x1c) = stack_int8_t._4_4_;
                    *(int32_t *)(stack_resource_ptr2 + 3) = (int32_t)stack_int8_t;
                    stack_uint1 = 0;
                    stack_int8_t = 0;
                    resource_block = stack_resource_ptr2;
                }
                else {
                    // 扩展资源数组
                    long_val = (longlong)stack_resource_ptr2 - (longlong)stack_resource_ptr1 >> 5;
                    if (long_val == 0) {
                        long_val = 1;
                    LAB_expand_resource_array:
                        mem_ptr = (uint64_t *)allocate_rendering_memory(_DAT, long_val << 5, (int8_t)stack_uint6);
                    }
                    else {
                        long_val = long_val * 2;
                        if (long_val != 0) goto LAB_expand_resource_array;
                    }
                    
                    // 重新分配资源数组
                    resource_block = (uint64_t *)initialize_resource_array(stack_resource_ptr1, stack_resource_ptr2, mem_ptr);
                    temp_mem_ptr = stack_resource_ptr2;
                    *resource_block = &UNK_18098bcb0;
                    resource_block[1] = 0;
                    *(int32_t *)(resource_block + 2) = 0;
                    *resource_block = &UNK_180a3c3e0;
                    *(int *)(resource_block + 2) = (int)temp_mem_ptr;
                    resource_block[1] = temp_char_ptr;
                    *(int32_t *)((longlong)resource_block + 0x1c) = stack_int8_t._4_4_;
                    *(int32_t *)(resource_block + 3) = (int32_t)stack_int8_t;
                    stack_uint1 = 0;
                    stack_char_ptr = (char *)0x0;
                    stack_int8_t = 0;
                    stack_resource_ptr4 = resource_block;
                    
                    // 清理旧的资源数组
                    for (temp_mem_ptr = stack_resource_ptr1; temp_mem_ptr != temp_mem_ptr; temp_mem_ptr = temp_mem_ptr + 4) {
                        (**(code **)*temp_mem_ptr)(temp_mem_ptr, 0);
                    }
                    if (stack_resource_ptr1 != (uint64_t *)0x0) {
                        free_rendering_memory(stack_resource_ptr1);
                    }
                    stack_resource_ptr3 = mem_ptr + long_val * 4;
                    stack_resource_ptr1 = mem_ptr;
                }
                stack_resource_ptr2 = resource_block + 4;
                stack_char_ptr = (char *)0x0;
                stack_int8_t = stack_int8_t & 0xffffffff00000000;
                stack_ptr1 = &UNK_18098bcb0;
            }
            stack_ptr4 = &UNK_18098bcb0;
            hash_val1 = (ulonglong)((int)hash_val1 + 1);
            uint_result = stack_uint4;
        } while (hash_val1 < (ulonglong)(stack_long4 - stack_long3 >> 3));
    }
    
    // 初始化哈希表处理
    hash_val1 = 0;
    stack_resource_ptr5 = (uint64_t *)0x0;
    stack_resource_ptr6 = (uint64_t *)0x0;
    stack_resource_ptr7 = (uint64_t *)0x0;
    stack_uint7 = 3;
    stack_mem_ptr1 = (uint64_t *)0x0;
    stack_mem_ptr2 = (uint64_t *)0x0;
    stack_mem_ptr3 = (uint64_t *)0x0;
    stack_uint5 = 3;
    stack_uint8 = 3;
    stack_hash_ptr1 = &stack_hash_ptr1;
    stack_hash_ptr2 = &stack_hash_ptr1;
    stack_hash_ptr3 = (uint64_t *******)0x0;
    stack_uint32_t = 0;
    stack_long1 = 0;
    stack_ptr1 = &UNK_180a3c3e0;
    stack_int8_t = 0;
    stack_char_ptr = (char *)0x0;
    stack_uint1 = 0;
    
    // 分配字符串缓冲区
    if (0 < (int)_DAT) {
        int_val = _DAT + 1;
        if (int_val < MIN_ALLOCATION_SIZE) {
            int_val = MIN_ALLOCATION_SIZE;
        }
        byte_ptr = (int8_t *)allocate_rendering_memory(_DAT, (longlong)int_val, MEMORY_ALIGNMENT_0X13);
        *byte_ptr = 0;
        stack_char_ptr = byte_ptr;
        uint_val = get_string_hash(byte_ptr);
        stack_int8_t = CONCAT44(stack_int8_t._4_4_, uint_val);
        memcpy(byte_ptr, _DAT, (longlong)(int)(_DAT + 1));
    }
    
    // 初始化字符串处理
    string_length = 1;
    stack_resource_ptr4 = (uint64_t *)CONCAT44(stack_resource_ptr4._4_4_, 1);
    char_ptr = (char *)allocate_rendering_memory(_DAT, 0x10, MEMORY_ALIGNMENT_0X13);
    *char_ptr = '\0';
    stack_char_ptr = char_ptr;
    uint_result = get_string_hash(char_ptr);
    temp_char_ptr = stack_char_ptr;
    stack_int8_t = CONCAT44(stack_int8_t._4_4_, uint_result);
    char_ptr[0] = '_';
    char_ptr[1] = '\0';
    stack_uint1 = 1;
    
    // 处理附加字符串数据
    if (0 < _DAT) {
        if (_DAT != -1) {
            if (char_ptr == (char *)0x0) {
                int_val = _DAT + 2;
                if (int_val < MIN_ALLOCATION_SIZE) {
                    int_val = MIN_ALLOCATION_SIZE;
                }
                char_ptr = (char *)allocate_rendering_memory(_DAT, (longlong)int_val, MEMORY_ALIGNMENT_0X13);
                *char_ptr = '\0';
            }
            else {
                if (_DAT + 2U <= uint_result) goto LAB_string_copy;
                stack_val1 = MEMORY_ALIGNMENT_0X13;
                char_ptr = (char *)resize_string_buffer(_DAT, char_ptr, _DAT + 2U, 0x10);
            }
            stack_char_ptr = char_ptr;
            uint_val = get_string_hash(char_ptr);
            stack_int8_t = CONCAT44(stack_int8_t._4_4_, uint_val);
        }
    LAB_string_copy:
        memcpy(char_ptr + 1, _DAT, (longlong)(_DAT + 1));
    }
    
    // 处理资源哈希表
    stack_uint3 = 0;
    if ((longlong)stack_resource_ptr2 - (longlong)stack_resource_ptr1 >> 5 != 0) {
        do {
            temp_mem_ptr = stack_mem_ptr2;
            resource_block = (uint64_t *)0x0;
            alloc_ptr = stack_resource_ptr1 + hash_val1 * 4;
            uint_result = *(uint *)(alloc_ptr + 2);
            
            // 检查字符串长度
            if (uint_result < string_length) {
            LAB_string_length_check2:
                bool_result = false;
            }
            else {
                if (string_length != 0) {
                    char_ptr = temp_char_ptr;
                    temp_mem_ptr = resource_block;
                    do {
                        if (char_ptr[alloc_ptr[1] - (longlong)temp_char_ptr] != *char_ptr) 
                            goto LAB_string_length_check2;
                        uint_result = (int)temp_mem_ptr + 1;
                        temp_mem_ptr = (uint64_t *)(ulonglong)uint_result;
                        char_ptr = char_ptr + 1;
                    } while (uint_result < string_length);
                }
                bool_result = true;
            }
            
            // 处理匹配的资源
            if (bool_result) {
                if (uint_result == 0) goto LAB_resource_found;
                temp_mem_ptr = resource_block;
                temp_mem_ptr = resource_block;
                goto LAB_resource_processing;
            }
            
            // 添加到哈希表
            if (stack_mem_ptr2 < stack_mem_ptr3) {
                stack_mem_ptr2 = stack_mem_ptr2 + 4;
                process_resource_entry(temp_mem_ptr, alloc_ptr);
            }
            else {
                // 扩展哈希表
                long_val = (longlong)stack_mem_ptr2 - (longlong)stack_mem_ptr1 >> 5;
                if (long_val == 0) {
                    long_val = 1;
                LAB_expand_hash_table:
                    resource_block = (uint64_t *)allocate_rendering_memory(_DAT, long_val << 5, (int8_t)stack_uint5);
                }
                else {
                    long_val = long_val * 2;
                    if (long_val != 0) goto LAB_expand_hash_table;
                }
                
                temp_long = initialize_resource_array(stack_mem_ptr1, stack_mem_ptr2, resource_block);
                process_resource_entry(temp_long, alloc_ptr);
                temp_mem_ptr = stack_mem_ptr2;
                
                // 清理旧的哈希表
                for (alloc_ptr = stack_mem_ptr1; alloc_ptr != temp_mem_ptr; alloc_ptr = alloc_ptr + 4) {
                    (**(code **)*alloc_ptr)(alloc_ptr, 0);
                }
                if (stack_mem_ptr1 != (uint64_t *)0x0) {
                    free_rendering_memory(stack_mem_ptr1);
                }
                stack_mem_ptr3 = resource_block + long_val * 4;
                stack_mem_ptr1 = resource_block;
                stack_mem_ptr2 = (uint64_t *)(temp_long + 0x20);
            }
            stack_uint3 = stack_uint3 + 1;
            hash_val1 = (ulonglong)stack_uint3;
            char_ptr = stack_char_ptr;
            uint_result = stack_uint4;
            string_length = (uint)stack_resource_ptr4;
        } while (hash_val1 < (ulonglong)((longlong)stack_resource_ptr2 - (longlong)stack_resource_ptr1 >> 5));
    }
    
    // 清理临时变量
    byte_ptr = (int8_t *)0x0;
    traverse_resource_list(&stack_resource_ptr5);
    long_val = stack_long2;
    
    // 随机数生成和条件检查
    if ((((longlong)stack_mem_ptr2 - (longlong)stack_mem_ptr1 & 0xffffffffffffffe0U) == 0) ||
        ((stack_long1 != 0 &&
          (uint_result = uint_result ^ uint_result << 0xd, uint_result = uint_result ^ uint_result >> 0x11,
          uint_result = uint_result ^ uint_result << 5, 0.15 < (float)(uint_result - 1) * 2.3283064e-10)))) {
        bool_result = true;
    }
    else {
        bool_result = false;
    }
    
    // 设置渲染上下文状态
    if ((bool_result) && (DAT == '\0')) {
        flag_val = 1;
    }
    else {
        flag_val = 0;
    }
    *(int8_t *)(stack_long2 + 0x130) = flag_val;
    
    // 处理资源查找
    stack_ptr2 = &UNK_180a3c3e0;
    stack_int16_t = 0;
    stack_byte_ptr = (int8_t *)0x0;
    stack_uint2 = 0;
    
    if (*(char *)(stack_long2 + 0x130) == '\0') {
        uint_result = uint_result ^ uint_result << 0xd;
        uint_result = uint_result ^ uint_result >> 0x11;
        alloc_ptr = stack_mem_ptr1 +
                  (longlong)
                  (int)((ulonglong)((uint_result << 5 ^ uint_result) - 1) %
                       ((longlong)stack_mem_ptr2 - (longlong)stack_mem_ptr1 >> 5 & 0xffffffffU)) * 4;
        uint_result = *(uint *)(alloc_ptr + 2);
        hash_val1 = (ulonglong)uint_result;
        
        // 复制资源数据
        if (alloc_ptr[1] != 0) {
            copy_string_data(&stack_ptr2, hash_val1);
        }
        if (uint_result != 0) {
            memcpy(stack_byte_ptr, alloc_ptr[1], hash_val1);
        }
        byte_ptr = stack_byte_ptr;
        stack_uint2 = 0;
        if (stack_byte_ptr != (int8_t *)0x0) {
            stack_byte_ptr[hash_val1] = 0;
        }
        goto LAB_resource_processing_complete;
    }
    
    // 处理资源哈希查找
    resource_ptr = (longlong *)(stack_long2 + 0x138);
    find_resource_in_hash(resource_ptr);
    uint_result = uint_result ^ uint_result << 0xd;
    uint_result = uint_result ^ uint_result >> 0x11;
    uint_result = uint_result ^ uint_result << 5;
    int_val = (int)((ulonglong)(uint_result - 1) %
                 ((longlong)stack_resource_ptr6 - (longlong)stack_resource_ptr5 >> 5 & 0xffffffffU));
    
    // 遍历哈希表查找资源
    hash_table_ptr = &stack_hash_ptr1;
    nested_array_ptr = stack_hash_ptr3;
    while (resource_array_ptr = hash_table_ptr, nested_array_ptr != (uint64_t *******)0x0) {
        if (*(int *)(nested_array_ptr + 6) == 0) {
            bool_result = false;
            temp_hash_ptr = (uint64_t *******)*nested_array_ptr;
        }
        else {
            if (*(int *)(stack_resource_ptr5 + (longlong)int_val * 4 + 2) == 0) {
                bool_result = true;
            }
            else {
                array_ptr = nested_array_ptr[5];
                temp_long = stack_resource_ptr5[(longlong)int_val * 4 + 1] - (longlong)array_ptr;
                do {
                    uint_result = (uint)*(byte *)((longlong)array_ptr + temp_long);
                    temp_int = *(byte *)array_ptr - uint_result;
                    if (*(byte *)array_ptr != uint_result) break;
                    array_ptr = (uint64_t ******)((longlong)array_ptr + 1);
                } while (uint_result != 0);
                bool_result = 0 < temp_int;
                if (temp_int < 1) {
                    temp_hash_ptr = (uint64_t *******)*nested_array_ptr;
                    goto LAB_hash_traversal_complete;
                }
            }
            temp_hash_ptr = (uint64_t *******)nested_array_ptr[1];
        }
    LAB_hash_traversal_complete:
        hash_table_ptr = nested_array_ptr;
        nested_array_ptr = temp_hash_ptr;
        if (!bool_result) {
            hash_table_ptr = resource_array_ptr;
        }
    }
    
    // 继续哈希表遍历
    nested_array_ptr = &stack_hash_ptr1;
    if (stack_hash_ptr3 != (uint64_t *******)0x0) {
        temp_hash_ptr = stack_hash_ptr3;
        do {
            if (*(int *)(stack_resource_ptr5 + (longlong)int_val * 4 + 2) == 0) {
                bool_result = false;
                temp_hash_ptr = (uint64_t *******)temp_hash_ptr[1];
            }
            else {
                if (*(int *)(temp_hash_ptr + 6) == 0) {
                    bool_result = true;
                }
                else {
                    byte_array_ptr = (byte *)stack_resource_ptr5[(longlong)int_val * 4 + 1];
                    temp_long = (longlong)temp_hash_ptr[5] - (longlong)byte_array_ptr;
                    do {
                        uint_result = (uint)byte_array_ptr[temp_long];
                        temp_int = *byte_array_ptr - uint_result;
                        if (*byte_array_ptr != uint_result) break;
                        byte_array_ptr = byte_array_ptr + 1;
                    } while (uint_result != 0);
                    bool_result = 0 < temp_int;
                    if (temp_int < 1) {
                        temp_hash_ptr = (uint64_t *******)temp_hash_ptr[1];
                        goto LAB_hash_comparison_complete;
                    }
                }
                temp_hash_ptr = (uint64_t *******)*temp_hash_ptr;
            }
        LAB_hash_comparison_complete:
            if (bool_result) {
                temp_hash_ptr = nested_array_ptr;
            }
            nested_array_ptr = temp_hash_ptr;
            temp_hash_ptr = (uint64_t *******)temp_hash_ptr;
        } while (temp_hash_ptr != (uint64_t *******)0x0);
    }
    
    // 处理找到的资源
    for (; nested_array_ptr != resource_array_ptr;
        nested_array_ptr = (uint64_t *******)func_0x00018066bd70(nested_array_ptr)) {
        if (*(ulonglong *)(long_val + 0x140) < *(ulonglong *)(long_val + 0x148)) {
            *(ulonglong *)(long_val + 0x140) = *(ulonglong *)(long_val + 0x140) + 0x20;
            process_resource_entry();
        }
        else {
            add_resource_to_hash(resource_ptr);
        }
    }
    
    // 最终资源处理
    uint_result = uint_result ^ uint_result << 0xd;
    uint_result = uint_result ^ uint_result >> 0x11;
    alloc_ptr = (uint64_t *)
                ((longlong)
                 (int)((ulonglong)((uint_result << 5 ^ uint_result) - 1) %
                      (*(longlong *)(long_val + 0x140) - *resource_ptr >> 5 & 0xffffffffU)) * 0x20 + *resource_ptr);
    uint_result = *(uint *)(alloc_ptr + 2);
    
    // 复制最终资源数据
    if (alloc_ptr[1] == 0) {
    LAB_final_resource_copy:
        if (uint_result != 0) {
            memcpy(byte_ptr, alloc_ptr[1], (ulonglong)uint_result);
        }
    }
    else if (uint_result != 0) {
        int_val = uint_result + 1;
        if (int_val < MIN_ALLOCATION_SIZE) {
            int_val = MIN_ALLOCATION_SIZE;
        }
        byte_ptr = (int8_t *)allocate_rendering_memory(_DAT, (longlong)int_val, MEMORY_ALIGNMENT_0X13);
        *byte_ptr = 0;
        hash_val1 = (ulonglong)byte_ptr & 0xffffffffffc00000;
        
        // 计算内存对齐偏移
        if (hash_val1 == 0) {
            uint_result = 0;
        }
        else {
            long_val = ((longlong)byte_ptr - hash_val1 >> 0x10) * 0x50;
            uint_ptr = (uint *)(hash_val1 + ((long_val + 0x80) - (ulonglong)*(uint *)(hash_val1 + long_val + 0x84)));
            if ((*(byte *)((longlong)uint_ptr + 0xe) & 2) == 0) {
                uint_result = uint_ptr[7];
                if (0x3ffffff < uint_result) {
                    uint_result = *uint_ptr << 0x10;
                }
            }
            else {
                uint_result = uint_ptr[7];
                if (uint_result < 0x4000000) {
                    hash_val2 = (ulonglong)uint_result;
                }
                else {
                    hash_val2 = (ulonglong)*uint_ptr << 0x10;
                }
                if (0x3ffffff < uint_result) {
                    uint_result = *uint_ptr << 0x10;
                }
                uint_result = uint_result - (int)(((longlong)byte_ptr -
                                                (hash_val1 + ((longlong)((longlong)uint_ptr + (-0x80 - hash_val1)) / 0x50)
                                                          * 0x10000)) % hash_val2);
            }
        }
        stack_int16_t = CONCAT44(stack_int16_t._4_4_, uint_result);
        stack_byte_ptr = byte_ptr;
        goto LAB_final_resource_copy;
    }
    stack_uint2 = uint_result;
    if (byte_ptr != (int8_t *)0x0) {
        byte_ptr[uint_result] = 0;
    }
    
LAB_resource_processing_complete:
    // 设置渲染参数
    uint_result = *(uint *)((longlong)alloc_ptr + 0x1c);
    *(float *)(stack_long2 + 0x15c) = (float)_DAT * FLOAT_SCALE_FACTOR;
    stack_int16_t._4_4_ = uint_result;
    
    // 生成随机哈希值
    generate_random_hash(_DAT, stack_resource_id5, &stack_ptr2, 1);
    stack_uint9 = 1;
    stack_ptr2 = &UNK_180a3c3e0;
    
    // 清理内存
    if (byte_ptr != (int8_t *)0x0) {
        free_rendering_memory(byte_ptr);
    }
    stack_byte_ptr = (int8_t *)0x0;
    stack_int16_t = (ulonglong)stack_int16_t._4_4_ << 0x20;
    stack_ptr2 = &UNK_18098bcb0;
    stack_ptr1 = &UNK_180a3c3e0;
    
    if (char_ptr != (char *)0x0) {
        free_rendering_memory(char_ptr);
    }
    stack_char_ptr = (char *)0x0;
    stack_int8_t = stack_int8_t & 0xffffffff00000000;
    stack_ptr1 = &UNK_18098bcb0;
    
    // 清理所有资源数组
    FUN_180058020(&stack_hash_ptr1);
    cleanup_resource_array(&stack_mem_ptr1);
    cleanup_resource_array(&stack_resource_ptr5);
    cleanup_resource_array(&stack_resource_ptr1);
    FUN_180057830(&stack_long3);
    
    // 栈保护清理
    FUN_1808fc050(stack_guard ^ (ulonglong)stack_buffer1);
    
    // 处理字符串分割和资源标记
    while (true) {
        temp_mem_ptr = (uint64_t *)(ulonglong)(int_val + 1U);
        alloc_ptr = (uint64_t *)((longlong)alloc_ptr + 1);
        if (uint_result <= int_val + 1U) break;
    LAB_resource_processing:
        int_val = (int)temp_mem_ptr;
        if (*(char *)(alloc_ptr[1] + (longlong)alloc_ptr) == '_') goto LAB_resource_separator_found;
    }
    
LAB_resource_found:
    alloc_ptr = (uint64_t *)0xffffffffffffffff;
    int_val = -1;
    
LAB_resource_separator_found:
    uint_result = int_val + 1;
    if (uint_result < uint_result) {
        temp_char_ptr = (char *)((longlong)alloc_ptr + alloc_ptr[1] + 1);
        do {
            if (*temp_char_ptr == '_') goto LAB_separator_position_found;
            uint_result = uint_result + 1;
            temp_char_ptr = temp_char_ptr + 1;
        } while (uint_result < uint_result);
    }
    uint_result = INFINITE_UINT;
    
LAB_separator_position_found:
    int_val = uint_result - 1;
    if (-1 < int_val) {
        long_val = (longlong)int_val;
        do {
            if (*(char *)(alloc_ptr[1] + long_val) == '_') goto LAB_final_separator_found;
            int_val = int_val + -1;
            long_val = long_val + -1;
        } while (-1 < long_val);
    }
    int_val = -1;
    
LAB_final_separator_found:
    // 处理分割后的资源名称
    FUN_180629a40(alloc_ptr, &stack_ptr2, uint_result + 1, int_val);
    alloc_ptr = stack_resource_ptr6;
    
    // 添加到资源列表
    if (stack_resource_ptr6 < stack_resource_ptr7) {
        stack_ptr_array = (void **)stack_resource_ptr6;
        *stack_resource_ptr6 = &UNK_18098bcb0;
        stack_resource_ptr6[1] = 0;
        *(int32_t *)(stack_resource_ptr6 + 2) = 0;
        *stack_resource_ptr6 = &UNK_180a3c3e0;
        stack_resource_ptr6[3] = 0;
        stack_resource_ptr6[1] = 0;
        *(int32_t *)(stack_resource_ptr6 + 2) = 0;
        stack_resource_ptr6 = stack_resource_ptr6 + 4;
        copy_string_data(alloc_ptr, stack_uint2);
        
        if (stack_uint2 != 0) {
            memcpy(alloc_ptr[1], stack_byte_ptr, stack_uint2 + 1);
        }
        if (stack_byte_ptr != (int8_t *)0x0) {
            *(int32_t *)(alloc_ptr + 2) = 0;
            if ((int8_t *)alloc_ptr[1] != (int8_t *)0x0) {
                *(int8_t *)alloc_ptr[1] = 0;
            }
            *(int32_t *)((longlong)alloc_ptr + 0x1c) = 0;
        }
    }
    else {
        // 扩展资源列表
        long_val = (longlong)stack_resource_ptr6 - (longlong)stack_resource_ptr5 >> 5;
        if (long_val == 0) {
            long_val = 1;
        LAB_expand_resource_list:
            resource_block = (uint64_t *)allocate_rendering_memory(_DAT, long_val << 5, (int8_t)stack_uint7);
        }
        else {
            long_val = long_val * 2;
            if (long_val != 0) goto LAB_expand_resource_list;
        }
        
        temp_long = initialize_resource_array(stack_resource_ptr5, stack_resource_ptr6, resource_block);
        process_resource_entry(temp_long, &stack_ptr2);
        temp_mem_ptr = stack_resource_ptr6;
        
        // 清理旧的资源列表
        for (alloc_ptr = stack_resource_ptr5; alloc_ptr != temp_mem_ptr; alloc_ptr = alloc_ptr + 4) {
            (**(code **)*alloc_ptr)(alloc_ptr, 0);
        }
        if (stack_resource_ptr5 != (uint64_t *)0x0) {
            free_rendering_memory(stack_resource_ptr5);
        }
        stack_resource_ptr7 = resource_block + long_val * 4;
        stack_resource_ptr5 = resource_block;
        stack_resource_ptr6 = (uint64_t *)(temp_long + 0x20);
    }
    
    // 最终资源处理和哈希表更新
    temp_var = 0;
    stack_ptr_array = &stack_ptr3;
    stack_ptr3 = &UNK_180a3c3e0;
    stack_ulong1 = 0;
    stack_byte_ptr2 = (int8_t *)0x0;
    stack_uint10 = 0;
    copy_string_data(&stack_ptr3, stack_uint2);
    
    if (stack_uint2 != 0) {
        memcpy(stack_byte_ptr2, stack_byte_ptr, stack_uint2 + 1);
    }
    if (stack_byte_ptr != (int8_t *)0x0) {
        stack_uint10 = 0;
        if (stack_byte_ptr2 != (int8_t *)0x0) {
            *stack_byte_ptr2 = 0;
        }
        stack_ulong1 = stack_ulong1 & 0xffffffff;
    }
    
    // 处理资源条目
    process_resource_entry(stack_buffer2, alloc_ptr);
    long_val = allocate_rendering_memory(_DAT, 0x60, (int8_t)stack_uint8);
    initialize_string_resource(long_val + 0x20, &stack_ptr3);
    
    // 更新哈希表
    nested_array_ptr = &stack_hash_ptr1;
    hash_table_ptr = stack_hash_ptr3;
    if (stack_hash_ptr3 != (uint64_t *******)0x0) {
        do {
            nested_array_ptr = hash_table_ptr;
            if (*(int *)(nested_array_ptr + 6) == 0) {
            LAB_hash_cleanup:
                hash_table_ptr = (uint64_t *******)*nested_array_ptr;
            }
            else {
                if (*(int *)(long_val + 0x30) != 0) {
                    array_ptr = nested_array_ptr[5];
                    temp_long = *(longlong *)(long_val + 0x28) - (longlong)array_ptr;
                    do {
                        byte_val = *(byte *)array_ptr;
                        uint_result = (uint)*(byte *)((longlong)array_ptr + temp_long);
                        if (byte_val != uint_result) break;
                        array_ptr = (uint64_t ******)((longlong)array_ptr + 1);
                    } while (uint_result != 0);
                    if ((int)(byte_val - uint_result) < 1) goto LAB_hash_cleanup;
                }
                hash_table_ptr = (uint64_t *******)nested_array_ptr[1];
            }
        } while (hash_table_ptr != (uint64_t *******)0x0);
        
        if ((uint64_t ********)nested_array_ptr != &stack_hash_ptr1) {
            if (*(int *)(nested_array_ptr + 6) != 0) {
                if (*(int *)(long_val + 0x30) == 0) goto LAB_final_hash_processing;
                array_ptr = nested_array_ptr[5];
                temp_long = *(longlong *)(long_val + 0x28) - (longlong)array_ptr;
                do {
                    byte_val = *(byte *)array_ptr;
                    uint_result = (uint)*(byte *)((longlong)array_ptr + temp_long);
                    if (byte_val != uint_result) break;
                    array_ptr = (uint64_t *******)((longlong)array_ptr + 1);
                } while (uint_result != 0);
                if (0 < (int)(byte_val - uint_result)) goto LAB_final_hash_processing;
            }
            temp_var = 1;
        }
    }
    
LAB_final_hash_processing:
    // 完成资源处理
    finalize_resource_processing(long_val, nested_array_ptr, &stack_hash_ptr1, temp_var);
}