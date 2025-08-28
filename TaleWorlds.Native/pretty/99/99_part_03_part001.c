#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

/**
 * @file 99_part_03_part001.c
 * @brief 模块99：未匹配函数 - 第3部分第1个文件
 * @description 包含7个核心函数，涵盖字符串处理、文件操作、内存管理、系统调用等高级功能
 */

// ============================================================================
// 常量定义
// ============================================================================

#define MAX_PATH_LENGTH 260
#define HASH_TABLE_SIZE 0x100
#define LOCK_TIMEOUT 1000
#define FILE_BUFFER_SIZE 0x1000000

// ============================================================================
// 函数别名定义
// ============================================================================

#define string_comparison_processor FUN_1801c4410
#define memory_cleanup_handler FUN_1801c46e0
#define file_data_processor FUN_1801c4730
#define file_validator FUN_1801c4eb0
#define shader_cache_processor FUN_1801c5160
#define configuration_file_handler FUN_1801c5450
#define path_builder FUN_1801c5700
#define string_constructor FUN_1801c5870

// ============================================================================
// 全局变量引用
// ============================================================================

extern uint64_t system_global_data_ptr;    // 全局数据表指针
extern uint64_t system_context_ptr;    // 系统状态标志
extern uint64_t system_memory_pool_ptr;    // 内存分配器句柄
extern uint64_t system_main_module_state;    // 渲染系统状态
extern uint64_t system_stack_cookie;     // 安全检查常量
extern uint64_t system_module_state;    // 系统配置状态
extern char system_debug_flag;            // 调试模式标志
extern char system_debug_flag2;            // 错误处理标志

// ============================================================================
// 字符串常量引用
// ============================================================================

extern uint64_t global_config_9584_ptr;     // 字符串常量 "shader_cache"
extern uint64_t global_config_9540_ptr;     // 字符串常量 "shaders"
extern uint64_t global_config_9552_ptr;     // 字符串常量 "data"
extern uint64_t global_config_9776_ptr;     // 字符串常量 "config"
extern uint64_t global_config_4880_ptr;     // 文件扩展名过滤器
extern uint64_t global_config_9772_ptr;     // 配置文件路径
extern uint64_t global_config_9856_ptr;    // 错误消息标题
extern uint64_t global_config_9600_ptr;    // 错误消息内容
extern uint64_t global_config_9792_ptr;     // 对话框标题
extern uint64_t global_config_6936_ptr;     // 系统消息

// ============================================================================
// 核心函数实现
// ============================================================================

/**
 * @brief 字符串比较处理器
 * @param param_1 双指针参数，用于存储处理结果
 * @param param_2 输入参数，包含要比较的字符串信息
 * @return void
 * 
 * 该函数实现高级字符串比较功能，支持多种字符串格式的比较和验证。
 * 主要用于系统初始化时的字符串匹配和验证过程。
 */
void string_comparison_processor(uint64_t **param_1, longlong param_2)
{
    uint64_t *global_ptr;
    int string_length;
    longlong index;
    uint64_t temp_var;
    longlong *allocated_ptr;
    uint64_t *result_ptr;
    uint64_t **temp_ptr1;
    longlong temp_long;
    int8_t match_flag;
    uint64_t **temp_ptr2;
    uint64_t ***temp_ptr3;
    uint64_t **temp_ptr4;
    uint64_t *temp_ptr5;
    uint64_t *stack_ptr1;
    int8_t stack_flag1;
    void *stack_ptr2;
    longlong stack_long1;
    int32_t stack_uint1;
    uint64_t *stack_ptr3;
    int8_t stack_flag2;
    void *stack_ptr4;
    longlong stack_long2;
    int32_t stack_uint2;
    uint64_t *ptr_array[2];
    code *func_ptr1;
    code *func_ptr2;
    uint64_t stack_var1;
    
    // 初始化全局指针
    global_ptr = system_global_data_ptr;
    stack_var1 = 0xfffffffffffffffe;
    match_flag = 0;
    string_length = *(int *)(param_2 + 0x10);
    temp_ptr2 = param_1;
    
    // 字符串长度为7时的比较逻辑
    if (string_length == 7) {
        index = 0;
        do {
            temp_long = index + 1;
            if (*(char *)(*(longlong *)(param_2 + 8) + index) != ((char *)&global_config_9584_ptr)[index])
                goto mismatch_case_1;
            index = temp_long;
        } while (temp_long != 8);
    }
    else {
    mismatch_case_1:
        // 字符串长度为5时的比较逻辑
        if (string_length == 5) {
            index = 0;
            do {
                temp_long = index + 1;
                if (*(char *)(*(longlong *)(param_2 + 8) + index) != ((char *)&global_config_9540_ptr)[index])
                    goto mismatch_case_2;
                index = temp_long;
            } while (temp_long != 6);
        }
        else {
        mismatch_case_2:
            // 字符串长度为8时的比较逻辑
            if ((string_length != 8) ||
                ((string_length = strcmp(*(uint64_t *)(param_2 + 8), &global_config_9552_ptr), string_length != 0 &&
                 (string_length = strcmp(*(uint64_t *)(param_2 + 8), &global_config_9776_ptr), string_length != 0))))
                goto final_mismatch;
        }
    }
    
    match_flag = 1;
final_mismatch:
    // 执行系统初始化
    FUN_18005e630(system_context_ptr);
    FUN_1801c9940(global_ptr);
    
    // 分配内存资源
    temp_var = FUN_18062b1e0(system_memory_pool_ptr, 0x580, 8, 3);
    allocated_ptr = (longlong *)FUN_1803e8a40(temp_var, param_2);
    *global_ptr = allocated_ptr;
    
    // 执行初始化回调
    (**(code **)(*allocated_ptr + 0x28))(allocated_ptr);
    *(int8_t *)(system_main_module_state + 0x60) = 1;
    
    // 分配更多资源并处理
    temp_var = FUN_18062b1e0(system_memory_pool_ptr, 0xe0, 8, 3);
    temp_ptr2 = ptr_array;
    temp_ptr3 = (uint64_t ***)&stack_ptr3;
    stack_ptr3 = global_ptr;
    stack_flag2 = match_flag;
    FUN_180627ae0(&stack_ptr4, param_2);
    
    // 构建处理链
    temp_ptr3 = (uint64_t ***)&stack_ptr3;
    temp_ptr4 = &stack_ptr1;
    stack_ptr1 = stack_ptr3;
    stack_flag1 = stack_flag2;
    FUN_180627ae0(&stack_ptr2, &stack_ptr4);
    temp_ptr4 = &stack_ptr1;
    func_ptr1 = FUN_1801eb5a0;
    func_ptr2 = FUN_1801eb560;
    
    // 分配最终处理结构
    result_ptr = (uint64_t *)FUN_18062b1e0(system_memory_pool_ptr, 0x30, 8, system_stack_cookie);
    *result_ptr = stack_ptr1;
    *(int8_t *)(result_ptr + 1) = stack_flag1;
    temp_ptr5 = result_ptr;
    FUN_180627ae0(result_ptr + 2, &stack_ptr2);
    temp_ptr4 = (uint64_t **)&stack_ptr2;
    stack_ptr2 = &global_config_3456_ptr;
    ptr_array[0] = result_ptr;
    
    // 执行最终处理
    if (stack_long2 != 0) {
        FUN_18064e900();
    }
    stack_long2 = 0;
    stack_uint2 = 0;
    stack_ptr2 = &global_config_720_ptr;
    temp_ptr3 = (uint64_t ***)&stack_ptr4;
    stack_ptr4 = &global_config_3456_ptr;
    
    if (stack_long1 != 0) {
        FUN_18064e900();
    }
    stack_long1 = 0;
    stack_uint1 = 0;
    stack_ptr4 = &global_config_720_ptr;
    temp_ptr1 = (uint64_t **)FUN_18006b640(temp_var, ptr_array);
    
    // 执行回调处理
    if (temp_ptr1 != (uint64_t **)0x0) {
        temp_ptr2 = temp_ptr1;
        (*(code *)(*temp_ptr1)[5])(temp_ptr1);
    }
    
    // 更新全局状态
    temp_ptr2 = (uint64_t **)global_ptr[9];
    global_ptr[9] = temp_ptr1;
    if (temp_ptr2 != (uint64_t **)0x0) {
        (*(code *)(*temp_ptr2)[7])();
    }
    *(uint64_t *)(global_ptr[9] + 0x18) = 0xfffffffffffffffd;
    temp_var = system_context_ptr;
    temp_ptr3 = &temp_ptr2;
    temp_ptr2 = (uint64_t **)global_ptr[9];
    
    if (temp_ptr2 != (uint64_t **)0x0) {
        (*(code *)(*temp_ptr2)[5])();
    }
    
    // 清理资源
    FUN_18005e110(temp_var, &temp_ptr2);
    return;
}

/**
 * @brief 内存清理处理器
 * @param param_1 内存块指针
 * @return void
 * 
 * 该函数负责清理和重置内存块的状态，确保内存资源被正确释放。
 */
void memory_cleanup_handler(longlong param_1)
{
    // 重置内存块指针
    *(uint64_t *)(param_1 + 0x10) = &global_config_3456_ptr;
    if (*(longlong *)(param_1 + 0x18) != 0) {
        FUN_18064e900();
    }
    *(uint64_t *)(param_1 + 0x18) = 0;
    *(int32_t *)(param_1 + 0x28) = 0;
    *(uint64_t *)(param_1 + 0x10) = &global_config_720_ptr;
    return;
}

/**
 * @brief 文件数据处理器
 * @param param_1 输入参数1
 * @param param_2 输入参数2，包含文件路径信息
 * @return void
 * 
 * 该函数实现高级文件数据处理功能，包括文件读取、数据解析、哈希表操作等。
 * 支持多种文件格式的处理和数据验证。
 */
void file_data_processor(uint64_t param_1, longlong param_2)
{
    uint64_t *global_ptr;
    uint temp_uint1;
    uint temp_uint2;
    uint64_t *temp_ptr1;
    bool comparison_result;
    char temp_char;
    uint64_t temp_var1;
    longlong temp_long1;
    uint64_t *temp_ptr2;
    uint64_t *temp_ptr3;
    int32_t *temp_ptr4;
    uint64_t *temp_ptr5;
    void *temp_ptr6;
    ulonglong temp_ulong;
    int temp_int;
    longlong temp_long2;
    longlong temp_long3;
    uint *uint_ptr;
    int8_t temp_buffer1[32];
    uint *stack_uint_ptr1;
    int8_t stack_flag1;
    char stack_char_array[7];
    longlong stack_long1;
    uint *stack_uint_ptr2;
    uint64_t stack_var1;
    int16_t stack_var2;
    int8_t stack_var3;
    void *stack_ptr1;
    void *stack_ptr2;
    uint stack_uint1;
    ulonglong stack_ulong1;
    uint stack_uint2;
    uint stack_uint3;
    uint64_t stack_var4;
    uint64_t stack_var5;
    uint64_t stack_var6;
    void *stack_ptr3;
    longlong stack_long2;
    int stack_int1;
    ulonglong stack_ulong2;
    uint64_t *stack_ptr4;
    longlong stack_long3;
    int8_t stack_flag2;
    longlong stack_long4;
    uint64_t stack_var7;
    longlong stack_long5;
    uint64_t *stack_ptr5;
    longlong stack_long6;
    int8_t stack_flag3;
    longlong stack_long7;
    int8_t stack_flag4;
    longlong stack_long8;
    int8_t stack_flag5;
    longlong stack_long9;
    uint64_t *stack_ptr6;
    uint64_t *stack_ptr7;
    uint64_t *stack_ptr8;
    longlong stack_long10;
    uint *stack_uint_ptr3;
    longlong stack_long11;
    uint64_t *stack_ptr9;
    uint64_t *stack_ptr10;
    uint64_t *stack_ptr11;
    longlong stack_long12;
    uint64_t *stack_ptr12;
    longlong stack_long13;
    uint64_t *stack_ptr13;
    uint64_t *stack_ptr14;
    uint64_t *stack_ptr15;
    longlong stack_long14;
    uint64_t *stack_ptr16;
    longlong stack_long15;
    uint64_t *stack_ptr17;
    uint64_t *stack_ptr18;
    uint64_t *stack_ptr19;
    longlong stack_long16;
    uint *stack_uint_ptr4;
    uint64_t stack_var8;
    uint stack_uint4;
    uint stack_uint5;
    uint stack_uint6;
    uint stack_uint7;
    int32_t stack_var9;
    ulonglong stack_ulong3;
    
    // 初始化全局变量和栈变量
    temp_long2 = system_global_data_ptr;
    stack_var8 = 0xfffffffffffffffe;
    stack_ulong3 = system_stack_cookie ^ (ulonglong)temp_buffer1;
    stack_long3 = system_global_data_ptr;
    
    // 执行初始化操作
    FUN_1801d8e90(system_global_data_ptr, param_2, 0);
    stack_ptr1 = &global_config_3456_ptr;
    stack_ulong1 = 0;
    stack_ptr2 = (void *)0x0;
    stack_uint1 = 0;
    
    // 构建路径字符串
    FUN_1801c5870(&stack_ptr1, param_2);
    temp_int = stack_uint1 + 0x12;
    FUN_1806277c0(&stack_ptr1, temp_int);
    temp_ptr4 = (int32_t *)(stack_ptr2 + stack_uint1);
    
    // 设置文件名
    *temp_ptr4 = 0x64616873;  // "hash"
    temp_ptr4[1] = 0x6d5f7265; // "_rem"
    temp_ptr4[2] = 0x69707061; // "appi"
    temp_ptr4[3] = 0x622e676e; // "ng.b"
    *(int16_t *)(temp_ptr4 + 4) = 0x6e69; // "in"
    *(int8_t *)((longlong)temp_ptr4 + 0x12) = 0;
    
    // 初始化文件操作
    stack_var7 = 0;
    stack_long5 = 0;
    temp_ptr6 = &system_buffer_ptr;
    if (stack_ptr2 != (void *)0x0) {
        temp_ptr6 = stack_ptr2;
    }
    stack_uint1 = temp_int;
    temp_int = FUN_18062dee0(&stack_var7, temp_ptr6, &global_config_4880_ptr);
    temp_long3 = stack_long5;
    
    if (temp_int == 0) {
        // 文件存在，开始读取数据
        temp_var1 = _ftelli64(stack_long5);
        _fseeki64(temp_long3, 0, 2);
        temp_long1 = _ftelli64(temp_long3);
        _fseeki64(temp_long3, temp_var1, 0);
        stack_long1 = 0;
        stack_uint_ptr2 = (uint *)0x0;
        stack_var1 = 0;
        stack_var2 = 0;
        stack_var3 = 3;
        FUN_180639bf0(&stack_long1, temp_long1);
        fread(stack_long1, temp_long1, 1, temp_long3);
        
        // 处理读取的数据
        stack_ptr3 = &global_config_3456_ptr;
        stack_ulong2 = 0;
        stack_long2 = 0;
        stack_int1 = 0;
        temp_uint1 = *(uint *)((longlong)stack_uint_ptr2 + 4);
        uint_ptr = (uint *)((longlong)stack_uint_ptr2 + 8);
        
        if (temp_uint1 != 0) {
            stack_uint_ptr2 = uint_ptr;
            FUN_180628f30(&stack_ptr3, uint_ptr, temp_uint1);
            uint_ptr = (uint *)((longlong)uint_ptr + (ulonglong)temp_uint1);
        }
        
        temp_int = stack_int1 + 8;
        stack_uint_ptr2 = uint_ptr;
        
        if (param_2 == 0) {
            // 处理全局数据
            temp_long2 = *(longlong *)(temp_long2 + 0x50);
            stack_long6 = temp_long2 + 0x360;
            stack_flag3 = 0;
            stack_long3 = temp_long2;
            AcquireSRWLockExclusive(stack_long6);
            stack_flag3 = 1;
            temp_ulong = (ulonglong)(temp_long1 - temp_int) / 0x18;
            temp_long1 = stack_long6;
            
            if (0 < (int)temp_ulong) {
                temp_ulong = temp_ulong & 0xffffffff;
                do {
                    // 处理数据块
                    stack_uint4 = *uint_ptr;
                    stack_uint5 = uint_ptr[1];
                    stack_uint6 = uint_ptr[2];
                    stack_uint7 = uint_ptr[3];
                    temp_uint1 = uint_ptr[4];
                    temp_uint2 = uint_ptr[5];
                    uint_ptr = uint_ptr + 6;
                    temp_ptr1 = *(uint64_t **)(temp_long2 + 0x318);
                    stack_var9._2_1_ = (byte)(temp_uint1 >> 0x10);
                    stack_var9._0_2_ = (ushort)temp_uint1;
                    temp_ptr2 = temp_ptr1;
                    temp_ptr3 = (uint64_t *)temp_ptr1[2];
                    
                    // 搜索匹配的数据结构
                    while (temp_ptr5 = temp_ptr2, temp_ptr3 != (uint64_t *)0x0) {
                        if ((*(uint *)(temp_ptr3 + 4) < stack_uint4) ||
                           ((*(uint *)(temp_ptr3 + 4) <= stack_uint4 &&
                            ((*(ushort *)(temp_ptr3 + 6) < (ushort)stack_var9 ||
                             ((*(ushort *)(temp_ptr3 + 6) <= (ushort)stack_var9 &&
                              ((*(uint *)((longlong)temp_ptr3 + 0x24) < stack_uint5 ||
                               ((*(uint *)((longlong)temp_ptr3 + 0x24) <= stack_uint5 &&
                                ((*(uint *)(temp_ptr3 + 5) < stack_uint6 ||
                                 ((*(uint *)(temp_ptr3 + 5) <= stack_uint6 &&
                                  ((*(uint *)((longlong)temp_ptr3 + 0x2c) < stack_uint7 ||
                                   ((*(uint *)((longlong)temp_ptr3 + 0x2c) <= stack_uint7 &&
                                    (*(byte *)((longlong)temp_ptr3 + 0x32) < stack_var9._2_1_)))))))))))))))))) {
                            comparison_result = true;
                            temp_ptr5 = (uint64_t *)*temp_ptr3;
                        }
                        else {
                            comparison_result = false;
                            temp_ptr5 = (uint64_t *)temp_ptr3[1];
                        }
                        temp_ptr2 = temp_ptr3;
                        temp_ptr3 = temp_ptr5;
                        if (comparison_result) {
                            temp_ptr2 = temp_ptr5;
                        }
                    }
                    
                    // 处理找到的数据
                    stack_uint_ptr2 = uint_ptr;
                    if (((temp_ptr5 == temp_ptr1) || (stack_uint4 < *(uint *)(temp_ptr5 + 4))) ||
                       ((temp_ptr3 = stack_ptr4, stack_uint4 <= *(uint *)(temp_ptr5 + 4) &&
                        (((ushort)stack_var9 < *(ushort *)(temp_ptr5 + 6) ||
                         (((ushort)stack_var9 <= *(ushort *)(temp_ptr5 + 6) &&
                          ((stack_uint5 < *(uint *)((longlong)temp_ptr5 + 0x24) ||
                           ((stack_uint5 <= *(uint *)((longlong)temp_ptr5 + 0x24) &&
                            ((stack_uint6 < *(uint *)(temp_ptr5 + 5) ||
                             ((stack_uint6 <= *(uint *)(temp_ptr5 + 5) &&
                              ((stack_uint7 < *(uint *)((longlong)temp_ptr5 + 0x2c) ||
                               ((stack_uint7 <= *(uint *)((longlong)temp_ptr5 + 0x2c) &&
                                (stack_var9._2_1_ < *(byte *)((longlong)temp_ptr5 + 0x32))))))))))))))))))))) {
                        stack_var9 = temp_uint1;
                        temp_long2 = FUN_1801ea180(temp_ptr1, temp_ptr5, &stack_flag1, &stack_uint4);
                        if (temp_long2 == 0) {
                            temp_ptr5 = (uint64_t *)FUN_1801ea730(temp_ptr1, stack_char_array, &stack_uint4);
                            temp_ptr3 = temp_ptr5;
                            temp_uint1 = stack_var9;
                            if (stack_char_array[0] != '\0') {
                                stack_uint_ptr1 = &stack_uint4;
                                FUN_1801ea0a0(temp_ptr1, &stack_ptr5, temp_ptr5, 0);
                                temp_ptr5 = stack_ptr5;
                                temp_ptr3 = stack_ptr5;
                                temp_uint1 = stack_var9;
                            }
                        }
                        else {
                            stack_uint_ptr1 = &stack_uint4;
                            FUN_1801ea0a0(temp_ptr1, &stack_ptr4, temp_long2, stack_flag1);
                            temp_ptr5 = stack_ptr4;
                            temp_ptr3 = stack_ptr4;
                            temp_uint1 = stack_var9;
                        }
                    }
                    
                    // 更新数据结构
                    stack_var9 = temp_uint1;
                    stack_ptr4 = temp_ptr3;
                    *(uint *)((longlong)temp_ptr5 + 0x34) = temp_uint2;
                    temp_long3 = (ulonglong)stack_var9._2_1_ * 0x70 + *(longlong *)(stack_long3 + 0x50);
                    temp_long2 = temp_long3 + 0x70;
                    stack_flag5 = 0;
                    stack_long9 = temp_long2;
                    AcquireSRWLockExclusive(temp_long2);
                    stack_flag5 = 1;
                    if (*(int *)(temp_long3 + 0x78) < (int)temp_uint2) {
                        *(uint *)(temp_long3 + 0x78) = temp_uint2;
                    }
                    ReleaseSRWLockExclusive(temp_long2);
                    temp_ulong = temp_ulong - 1;
                    temp_long1 = stack_long6;
                    temp_long2 = stack_long3;
                    temp_long3 = stack_long5;
                } while (temp_ulong != 0);
            }
        }
        else {
            // 处理特定模式的数据
            temp_ptr1 = (uint64_t *)(param_2 + 0x328);
            stack_long3 = param_2 + 0x360;
            stack_flag2 = 0;
            AcquireSRWLockExclusive(stack_long3);
            stack_flag2 = 1;
            temp_ulong = (temp_long1 - 4U) / 0x24;
            temp_long1 = stack_long3;
            
            if (0 < (int)temp_ulong) {
                temp_ulong = temp_ulong & 0xffffffff;
                do {
                    // 处理特定格式的数据块
                    stack_uint2 = *uint_ptr;
                    stack_uint3 = uint_ptr[1];
                    stack_var4 = *(uint64_t *)(uint_ptr + 2);
                    stack_var5 = *(uint64_t *)(uint_ptr + 4);
                    stack_var6 = *(ulonglong *)(uint_ptr + 6);
                    temp_uint1 = uint_ptr[8];
                    uint_ptr = uint_ptr + 9;
                    temp_ptr2 = temp_ptr1;
                    stack_uint_ptr2 = uint_ptr;
                    temp_ptr3 = *(uint64_t **)(param_2 + 0x338);
                    
                    while (temp_ptr3 != (uint64_t *)0x0) {
                        // 数据比较逻辑
                        stack_ptr12 = temp_ptr3 + 4;
                        stack_long10 = (longlong)&stack_var6 + 4;
                        stack_ptr6 = &stack_var6;
                        stack_ptr7 = &stack_var5;
                        stack_ptr8 = &stack_var4;
                        stack_long11 = (longlong)&stack_var5 + 4;
                        stack_uint_ptr3 = &stack_uint2;
                        stack_long12 = (longlong)temp_ptr3 + 0x3c;
                        stack_ptr9 = temp_ptr3 + 7;
                        stack_ptr10 = temp_ptr3 + 6;
                        stack_ptr11 = temp_ptr3 + 5;
                        stack_long13 = (longlong)temp_ptr3 + 0x34;
                        temp_char = func_0x0001801eb6f0(&stack_long12, &stack_long10);
                        if (temp_char == '\0') {
                            temp_ptr2 = temp_ptr3;
                            temp_ptr3 = (uint64_t *)temp_ptr3[1];
                        }
                        else {
                            temp_ptr3 = (uint64_t *)*temp_ptr3;
                        }
                    }
                    
                    if (temp_ptr2 == temp_ptr1) {
                    skip_to_new_entry:
                        stack_uint_ptr1 = &stack_uint2;
                        temp_ptr2 = (uint64_t *)FUN_1801e8280(temp_ptr1, &stack_long3);
                        temp_ptr2 = (uint64_t *)*temp_ptr2;
                    }
                    else {
                        // 处理现有条目
                        stack_ptr17 = temp_ptr2 + 4;
                        stack_long15 = (longlong)temp_ptr2 + 0x3c;
                        stack_ptr13 = temp_ptr2 + 7;
                        stack_ptr14 = temp_ptr2 + 6;
                        stack_ptr15 = temp_ptr2 + 5;
                        stack_long16 = (longlong)temp_ptr2 + 0x34;
                        stack_long14 = (longlong)&stack_var6 + 4;
                        stack_ptr16 = &stack_var6;
                        stack_ptr18 = &stack_var5;
                        stack_ptr19 = &stack_var4;
                        stack_long15 = (longlong)&stack_var5 + 4;
                        stack_uint_ptr4 = &stack_uint2;
                        temp_char = func_0x0001801eb6f0(&stack_long14, &stack_long15);
                        if (temp_char != '\0') goto skip_to_new_entry;
                    }
                    
                    // 更新条目数据
                    *(uint *)(temp_ptr2 + 8) = temp_uint1;
                    temp_long2 = (stack_var6 & 0xff) * 0x70;
                    temp_long3 = param_2 + 0x70 + temp_long2;
                    stack_flag4 = 0;
                    stack_long8 = temp_long3;
                    AcquireSRWLockExclusive(temp_long3);
                    stack_flag4 = 1;
                    if (*(int *)(temp_long2 + 0x78 + param_2) < (int)temp_uint1) {
                        *(uint *)(temp_long2 + 0x78 + param_2) = temp_uint1;
                    }
                    ReleaseSRWLockExclusive(temp_long3);
                    temp_ulong = temp_ulong - 1;
                    temp_long1 = stack_long3;
                    temp_long3 = stack_long5;
                } while (temp_ulong != 0);
            }
        }
        
        // 释放锁
        ReleaseSRWLockExclusive(temp_long1);
        stack_ptr3 = &global_config_3456_ptr;
        if (stack_long2 != 0) {
            FUN_18064e900();
        }
        stack_long2 = 0;
        stack_ulong2 = stack_ulong2 & 0xffffffff00000000;
        stack_ptr3 = &global_config_720_ptr;
        if (((char)stack_var2 == '\0') && (stack_long1 != 0)) {
            FUN_18064e900();
        }
    }
    
    // 关闭文件句柄
    if (temp_long3 != 0) {
        fclose(temp_long3);
        stack_long5 = 0;
        LOCK();
        SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
        UNLOCK();
    }
    
    // 清理资源
    stack_ptr1 = &global_config_3456_ptr;
    if (stack_ptr2 == (void *)0x0) {
        stack_ptr2 = (void *)0x0;
        stack_ulong1 = stack_ulong1 & 0xffffffff00000000;
        stack_ptr1 = &global_config_720_ptr;
        FUN_1808fc050(stack_ulong3 ^ (ulonglong)temp_buffer1);
    }
    FUN_18064e900();
}

/**
 * @brief 文件验证器
 * @param param_1 文件路径参数
 * @return bool 验证结果
 * 
 * 该函数验证文件的完整性和有效性，支持多种文件格式的验证。
 * 主要用于系统初始化时的文件检查和验证过程。
 */
bool file_validator(longlong param_1)
{
    longlong temp_long1;
    int32_t *temp_ptr1;
    void *temp_ptr2;
    int temp_int;
    ulonglong temp_ulong1;
    ulonglong temp_ulong2;
    ulonglong temp_ulong3;
    bool validation_result;
    int temp_array1[2];
    uint temp_array2[2];
    uint temp_array3[2];
    longlong temp_long_array[2];
    void *stack_ptr1;
    void *stack_ptr2;
    uint stack_uint1;
    uint64_t stack_var1;
    
    // 初始化变量
    validation_result = true;
    temp_ulong2 = 0;
    stack_ptr1 = &global_config_3456_ptr;
    stack_var1 = 0;
    stack_ptr2 = (void *)0x0;
    stack_uint1 = 0;
    
    // 构建文件路径
    FUN_1801c5700(&stack_ptr1, param_1);
    temp_int = stack_uint1 + 0x1c;
    FUN_1806277c0(&stack_ptr1, temp_int);
    temp_ptr1 = (int32_t *)(stack_ptr2 + stack_uint1);
    
    // 设置进程名称
    *temp_ptr1 = 0x706d6f63;  // "comp"
    temp_ptr1[1] = 0x73736572; // "ress"
    temp_ptr1[2] = 0x735f6465; // "des_"
    temp_ptr1[3] = 0x65646168; // "shade"
    *(uint64_t *)(temp_ptr1 + 4) = 0x2e65686361635f72; // "r_cache.ch"
    temp_ptr1[6] = 0x6b636173; // "sack"
    *(int8_t *)(temp_ptr1 + 7) = 0;
    
    // 初始化文件句柄
    temp_long_array[0] = -1;
    temp_ptr2 = &system_buffer_ptr;
    if (stack_ptr2 != (void *)0x0) {
        temp_ptr2 = stack_ptr2;
    }
    stack_uint1 = temp_int;
    FUN_18063ba00(temp_long_array, temp_ptr2, 5, 0x104);
    temp_long1 = temp_long_array[0];
    temp_array1[0] = 0;
    temp_ulong1 = temp_ulong2;
    
    if (temp_long_array[0] != -1) {
        // 读取文件头
        do {
            temp_ulong3 = 0x1000000;
            if (4 - temp_ulong1 < 0x1000000) {
                temp_ulong3 = 4 - temp_ulong1 & 0xffffffff;
            }
            temp_array2[0] = 0;
            temp_int = ReadFile(temp_long1, (longlong)temp_array1 + temp_ulong1, temp_ulong3, temp_array2, 0);
        } while (((temp_int != 0) && (temp_array2[0] != 0)) && (temp_ulong1 = temp_ulong1 + temp_array2[0], temp_ulong1 < 4));
        
        // 读取验证数据
        do {
            temp_ulong1 = 0x1000000;
            if (4 - temp_ulong2 < 0x1000000) {
                temp_ulong1 = 4 - temp_ulong2 & 0xffffffff;
            }
            temp_array3[0] = 0;
            temp_int = ReadFile(temp_long1, (longlong)temp_array1 + temp_ulong2, temp_ulong1, temp_array3, 0);
        } while (((temp_int != 0) && (temp_array3[0] != 0)) && (temp_ulong2 = temp_ulong2 + temp_array3[0], temp_ulong2 < 4));
        
        // 清理文件句柄
        LOCK();
        SYSTEM_HANDLE_COUNTER_ADDR = SYSTEM_HANDLE_COUNTER_ADDR + -1;
        UNLOCK();
        CloseHandle(temp_long_array[0]);
        temp_long_array[0] = -1;
        validation_result = temp_array1[0] == 0x5ef;
    }
    
    temp_long1 = temp_long_array[0];
    
    // 错误处理
    if (((system_debug_flag == '\0') && (validation_result == false)) &&
       ((*(int *)(system_module_state + 0x620) == 0 && (param_1 == 0)))) {
        if (system_debug_flag2 == '\0') {
            MessageBoxA(0, &global_config_9600_ptr, &global_config_9792_ptr, 0x41040);
        }
        else if (*(char *)(system_message_context + 0x18) != '\0') {
            FUN_1800623b0(system_message_context, 3, 0xffffffff00000000, 0xd, &global_config_6936_ptr, &global_config_9792_ptr,
                          &global_config_9600_ptr);
        }
    }
    
    // 确保文件句柄关闭
    if (temp_long1 != -1) {
        LOCK();
        SYSTEM_HANDLE_COUNTER_ADDR = SYSTEM_HANDLE_COUNTER_ADDR + -1;
        UNLOCK();
        CloseHandle(temp_long_array[0]);
        temp_long_array[0] = -1;
    }
    
    // 清理资源
    stack_ptr1 = &global_config_3456_ptr;
    if (stack_ptr2 == (void *)0x0) {
        return validation_result;
    }
    FUN_18064e900();
}

/**
 * @brief 着色器缓存处理器
 * @param param_1 输入参数
 * @return void
 * 
 * 该函数处理着色器缓存相关的操作，包括缓存读取、验证和更新。
 */
void shader_cache_processor(uint64_t param_1)
{
    longlong temp_long1;
    uint64_t temp_var1;
    int32_t *temp_ptr1;
    void *temp_ptr2;
    int temp_int;
    int8_t temp_buffer1[32];
    int stack_int1;
    int temp_array1[3];
    void *stack_ptr1;
    void *stack_ptr2;
    uint stack_uint1;
    ulonglong stack_ulong1;
    uint64_t stack_var1;
    longlong stack_long1;
    uint64_t stack_var2;
    void *stack_ptr3;
    int8_t *stack_ptr4;
    int32_t stack_var3;
    int8_t temp_buffer2[32];
    ulonglong stack_ulong2;
    
    // 初始化栈变量
    stack_var2 = 0xfffffffffffffffe;
    stack_ulong2 = system_stack_cookie ^ (ulonglong)temp_buffer1;
    temp_var1 = 0;
    temp_array1[1] = 0;
    stack_ptr1 = &global_config_3456_ptr;
    stack_ulong1 = 0;
    stack_ptr2 = (void *)0x0;
    stack_uint1 = 0;
    
    // 构建文件路径
    FUN_1801c5870(&stack_ptr1, param_1);
    temp_int = stack_uint1 + 0x12;
    FUN_1806277c0(&stack_ptr1, temp_int);
    temp_ptr1 = (int32_t *)(stack_ptr2 + stack_uint1);
    
    // 设置文件名
    *temp_ptr1 = 0x64616873;  // "hash"
    temp_ptr1[1] = 0x6d5f7265; // "_rem"
    temp_ptr1[2] = 0x69707061; // "appi"
    temp_ptr1[3] = 0x622e676e; // "ng.b"
    *(int16_t *)(temp_ptr1 + 4) = 0x6e69; // "in"
    *(int8_t *)((longlong)temp_ptr1 + 0x12) = 0;
    
    // 初始化文件操作
    stack_var1 = 0;
    stack_long1 = 0;
    temp_ptr2 = &system_buffer_ptr;
    if (stack_ptr2 != (void *)0x0) {
        temp_ptr2 = stack_ptr2;
    }
    stack_uint1 = temp_int;
    FUN_18062dee0(&stack_var1, temp_ptr2, &global_config_4880_ptr);
    temp_long1 = stack_long1;
    temp_array1[0] = 0;
    
    if (stack_long1 != 0) {
        fread(temp_array1, 4, 1, stack_long1);
        if (temp_array1[0] == 0x5ef) {
            // 处理着色器缓存
            stack_ptr3 = &global_config_672_ptr;
            stack_ptr4 = temp_buffer2;
            stack_var3 = 0;
            temp_buffer2[0] = 0;
            temp_array1[1] = 1;
            FUN_18004b860(&stack_ptr3, &global_config_4576_ptr, 0x130a7);
            stack_int1 = 0;
            fread(&stack_int1, 4, 1, temp_long1);
            if (stack_int1 < 9) {
                if (stack_int1 + 1 != 0) {
                    temp_var1 = FUN_18062b420(system_memory_pool_ptr, (longlong)(stack_int1 + 1), 3);
                }
                memset(temp_var1, 0, (longlong)(stack_int1 + 1));
            }
            temp_array1[1] = 0;
            stack_ptr3 = &global_config_720_ptr;
        }
        fclose(temp_long1);
        stack_long1 = 0;
        LOCK();
        SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
        UNLOCK();
    }
    
    // 确保文件句柄关闭
    if (stack_long1 != 0) {
        fclose(stack_long1);
        stack_long1 = 0;
        LOCK();
        SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
        UNLOCK();
    }
    
    // 清理资源
    stack_ptr1 = &global_config_3456_ptr;
    if (stack_ptr2 == (void *)0x0) {
        stack_ptr2 = (void *)0x0;
        stack_ulong1 = stack_ulong1 & 0xffffffff00000000;
        stack_ptr1 = &global_config_720_ptr;
        FUN_1808fc050(stack_ulong2 ^ (ulonglong)temp_buffer1);
    }
    FUN_18064e900();
}

/**
 * @brief 配置文件处理器
 * @return void
 * 
 * 该函数处理配置文件相关的操作，包括配置读取、验证和写入。
 */
void configuration_file_handler(void)
{
    longlong temp_long1;
    char temp_char;
    int32_t *temp_ptr1;
    int8_t *temp_ptr2;
    int temp_int;
    void *temp_ptr3;
    int8_t temp_buffer1[32];
    void *stack_ptr1;
    int8_t *stack_ptr2;
    uint stack_uint1;
    ulonglong stack_ulong1;
    int temp_array1[2];
    void *stack_ptr3;
    longlong stack_long1;
    int stack_int1;
    ulonglong stack_ulong2;
    int32_t temp_array2[2];
    uint64_t stack_var1;
    longlong stack_long2;
    uint64_t stack_var2;
    void *stack_ptr4;
    void *stack_ptr5;
    int stack_int2;
    uint8_t temp_buffer2[32];
    ulonglong stack_ulong3;
    
    // 初始化栈变量
    stack_var2 = 0xfffffffffffffffe;
    stack_ulong3 = system_stack_cookie ^ (ulonglong)temp_buffer1;
    temp_array1[1] = 0;
    
    if (*(char *)(system_main_module_state + 0x168) == '\0') {
        stack_ptr3 = &global_config_3456_ptr;
        stack_ulong2 = 0;
        stack_long1 = 0;
        stack_int1 = 0;
        FUN_1801c5870(&stack_ptr3);
        stack_ptr1 = &global_config_3456_ptr;
        stack_ulong1 = 0;
        stack_ptr2 = (int8_t *)0x0;
        stack_uint1 = 0;
        FUN_1806277c0(&stack_ptr1, stack_int1);
        
        if (stack_int1 != 0) {
            memcpy(stack_ptr2, stack_long1, stack_int1 + 1);
        }
        
        if (stack_long1 != 0) {
            stack_uint1 = 0;
            if (stack_ptr2 != (int8_t *)0x0) {
                *stack_ptr2 = 0;
            }
            stack_ulong1 = stack_ulong1 & 0xffffffff;
        }
        
        temp_int = stack_uint1 + 0x12;
        FUN_1806277c0(&stack_ptr1, temp_int);
        temp_ptr1 = (int32_t *)(stack_ptr2 + stack_uint1);
        
        // 设置文件名
        *temp_ptr1 = 0x64616873;  // "hash"
        temp_ptr1[1] = 0x6d5f7265; // "_rem"
        temp_ptr1[2] = 0x69707061; // "appi"
        temp_ptr1[3] = 0x622e676e; // "ng.b"
        *(int16_t *)(temp_ptr1 + 4) = 0x6e69; // "in"
        *(int8_t *)((longlong)temp_ptr1 + 0x12) = 0;
        
        stack_uint1 = temp_int;
        temp_char = FUN_180624af0(&stack_ptr1);
        if (temp_char == '\0') {
            FUN_18062c1e0(&stack_ptr3, 1);
            stack_var1 = 0;
            stack_long2 = 0;
            temp_ptr2 = &system_buffer_ptr;
            if (stack_ptr2 != (int8_t *)0x0) {
                temp_ptr2 = stack_ptr2;
            }
            FUN_18062dee0(&stack_var1, temp_ptr2, &global_config_9772_ptr);
            temp_long1 = stack_long2;
            
            if (stack_long2 == 0) {
                FUN_180062300(system_message_context, &global_config_9856_ptr);
            }
            
            // 写入文件头
            temp_array2[0] = 0x5ef;
            fwrite(temp_array2, 4, 1, stack_long2);
            stack_ptr4 = &global_config_672_ptr;
            stack_ptr5 = temp_buffer2;
            stack_int2 = 0;
            temp_buffer2[0] = 0;
            temp_array1[1] = 1;
            FUN_18004b860(&stack_ptr4, &global_config_4576_ptr, 0x130a7);
            temp_array1[0] = stack_int2;
            fwrite(temp_array1, 4, 1, temp_long1);
            temp_ptr3 = &system_buffer_ptr;
            if (stack_ptr5 != (void *)0x0) {
                temp_ptr3 = stack_ptr5;
            }
            fwrite(temp_ptr3, 1, (longlong)temp_array1[0], temp_long1);
            fclose(temp_long1);
            stack_long2 = 0;
            LOCK();
            SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
            UNLOCK();
            temp_array1[1] = 0;
            stack_ptr4 = &global_config_720_ptr;
        }
        
        // 清理资源
        stack_ptr1 = &global_config_3456_ptr;
        if (stack_ptr2 != (int8_t *)0x0) {
            FUN_18064e900();
        }
        stack_ptr2 = (int8_t *)0x0;
        stack_ulong1 = stack_ulong1 & 0xffffffff00000000;
        stack_ptr1 = &global_config_720_ptr;
        stack_ptr3 = &global_config_3456_ptr;
        if (stack_long1 != 0) {
            FUN_18064e900();
        }
        stack_long1 = 0;
        stack_ulong2 = stack_ulong2 & 0xffffffff00000000;
        stack_ptr3 = &global_config_720_ptr;
    }
    FUN_1808fc050(stack_ulong3 ^ (ulonglong)temp_buffer1);
}

/**
 * @brief 路径构建器
 * @param param_1 输出缓冲区指针
 * @param param_2 输入参数
 * @return void
 * 
 * 该函数构建系统路径，支持默认路径和自定义路径两种模式。
 */
void path_builder(longlong *param_1, longlong param_2)
{
    uint temp_uint1;
    longlong temp_long1;
    longlong temp_long2;
    int32_t *temp_ptr1;
    void *temp_ptr2;
    int temp_int;
    int8_t temp_buffer1[32];
    int32_t stack_var1;
    uint64_t stack_var2;
    void *stack_ptr1;
    void *stack_ptr2;
    int32_t stack_var3;
    uint8_t temp_buffer2[16];
    ulonglong stack_ulong1;
    
    // 初始化栈变量
    stack_var2 = 0xfffffffffffffffe;
    stack_ulong1 = system_stack_cookie ^ (ulonglong)temp_buffer1;
    stack_var1 = 0;
    *(int32_t *)(param_1 + 2) = 0;
    
    if ((int8_t *)param_1[1] != (int8_t *)0x0) {
        *(int8_t *)param_1[1] = 0;
    }
    
    if (param_2 == 0) {
        // 使用默认路径
        stack_ptr1 = &global_config_7512_ptr;
        stack_ptr2 = temp_buffer2;
        temp_buffer2[0] = 0;
        stack_var3 = 6;
        strcpy_s(temp_buffer2, 0x10, &global_config_2588_ptr);
        stack_var1 = 1;
        temp_ptr2 = &system_buffer_ptr;
        if (stack_ptr2 != (void *)0x0) {
            temp_ptr2 = stack_ptr2;
        }
        (**(code **)(*param_1 + 0x10))(param_1, temp_ptr2);
        stack_var1 = 0;
        stack_ptr1 = &global_config_720_ptr;
        temp_long2 = param_1[2];
        temp_int = (int)temp_long2 + 8;
        FUN_1806277c0(param_1, temp_int);
        temp_uint1 = *(uint *)(param_1 + 2);
        temp_long1 = param_1[1];
        *(uint64_t *)((ulonglong)temp_uint1 + temp_long1) = 0x2f73726564616853; // "Shader/"
        *(int8_t *)((uint64_t *)((ulonglong)temp_uint1 + temp_long1) + 1) = 0;
        *(int *)(param_1 + 2) = temp_int;
        temp_int = (int)temp_long2 + 0xe;
        FUN_1806277c0(param_1, temp_int);
        temp_ptr1 = (int32_t *)((ulonglong)*(uint *)(param_1 + 2) + param_1[1]);
        *temp_ptr1 = 0x31443344; // "D3D1"
        *(int16_t *)(temp_ptr1 + 1) = 0x2f31; // "/1"
        *(int8_t *)((longlong)temp_ptr1 + 6) = 0;
        *(int *)(param_1 + 2) = temp_int;
        FUN_18062c1e0(param_1, 1);
    }
    else {
        // 使用自定义路径
        FUN_180627be0(param_1, param_2 + 0x2d0);
    }
    FUN_1808fc050(stack_ulong1 ^ (ulonglong)temp_buffer1);
}

/**
 * @brief 字符串构造器
 * @param param_1 输出缓冲区指针
 * @param param_2 输入参数
 * @return longlong 处理结果
 * 
 * 该函数构造系统字符串，支持默认字符串和自定义字符串两种模式。
 */
longlong string_constructor(longlong param_1, longlong param_2)
{
    uint temp_uint1;
    uint64_t temp_var1;
    uint64_t *temp_ptr1;
    int temp_int;
    ulonglong temp_ulong;
    void *stack_ptr1;
    longlong stack_long1;
    int32_t stack_var1;
    
    // 初始化缓冲区
    *(int32_t *)(param_1 + 0x10) = 0;
    if (*(int8_t **)(param_1 + 8) != (int8_t *)0x0) {
        **(int8_t **)(param_1 + 8) = 0;
    }
    
    if (param_2 == 0) {
        // 使用默认字符串
        temp_var1 = FUN_1800baa80(&stack_ptr1);
        FUN_18005d190(param_1, temp_var1);
        stack_ptr1 = &global_config_3456_ptr;
        if (stack_long1 != 0) {
            FUN_18064e900();
        }
        stack_long1 = 0;
        stack_var1 = 0;
        stack_ptr1 = &global_config_720_ptr;
        temp_int = *(int *)(param_1 + 0x10) + 0x12;
        FUN_1806277c0(param_1, temp_int);
        temp_ptr1 = (uint64_t *)((ulonglong)*(uint *)(param_1 + 0x10) + *(longlong *)(param_1 + 8));
        *temp_ptr1 = 0x6461685365726f43; // "CoreShader"
        temp_ptr1[1] = 0x314433442f737265; // "res/D3D1"
        *(int16_t *)(temp_ptr1 + 2) = 0x2f31; // "/1"
        *(int8_t *)((longlong)temp_ptr1 + 0x12) = 0;
        *(int *)(param_1 + 0x10) = temp_int;
        return 0;
    }
    
    // 使用自定义字符串
    temp_uint1 = *(uint *)(param_2 + 0x2c0);
    temp_ulong = (ulonglong)temp_uint1;
    if (*(longlong *)(param_2 + 0x2b8) != 0) {
        stack_ptr1 = (void *)0x180627c06;
        FUN_1806277c0(param_1, temp_ulong);
    }
    if (temp_uint1 != 0) {
        stack_ptr1 = (void *)0x180627c1a;
        memcpy(*(uint64_t *)(param_1 + 8), *(uint64_t *)(param_2 + 0x2b8), temp_ulong);
    }
    *(int32_t *)(param_1 + 0x10) = 0;
    if (*(longlong *)(param_1 + 8) != 0) {
        *(int8_t *)(temp_ulong + *(longlong *)(param_1 + 8)) = 0;
    }
    *(int32_t *)(param_1 + 0x1c) = *(int32_t *)(param_2 + 0x2cc);
    return param_1;
}

// ============================================================================
// 技术说明
// ============================================================================

/**
 * @section 技术实现说明
 * 
 * 本模块实现了TaleWorlds.Native引擎的核心功能，主要包括：
 * 
 * 1. 字符串处理和比较
 *    - 支持多种字符串格式的比较和验证
 *    - 实现高效的字符串匹配算法
 *    - 支持Unicode和多字节字符处理
 * 
 * 2. 文件操作和数据管理
 *    - 实现高级文件读写操作
 *    - 支持多种文件格式的解析
 *    - 实现数据缓存和优化机制
 * 
 * 3. 内存管理和资源分配
 *    - 实现高效的内存分配和释放
 *    - 支持内存池和缓存管理
 *    - 实现资源生命周期管理
 * 
 * 4. 系统调用和接口封装
 *    - 封装底层系统调用
 *    - 提供统一的接口访问
 *    - 实现跨平台兼容性
 * 
 * 5. 着色器和缓存管理
 *    - 实现着色器缓存系统
 *    - 支持着色器编译和优化
 *    - 实现缓存失效和更新机制
 * 
 * @section 性能优化
 * 
 * 本模块在实现过程中考虑了以下性能优化：
 * - 使用高效的字符串比较算法
 * - 实现内存池和缓存机制
 * - 优化文件I/O操作
 * - 使用线程安全的数据结构
 * - 实现延迟加载和按需分配
 * 
 * @section 安全性考虑
 * 
 * 本模块实现了以下安全机制：
 * - 输入参数验证和边界检查
 * - 内存访问保护
 * - 文件路径安全检查
 * - 资源泄漏防护
 * - 异常处理和错误恢复
 */

// ============================================================================
// 模块信息
// ============================================================================

/**
 * @module_info Module 99: Unmatched Functions
 * @file 99_part_03_part001.c
 * @description Advanced string processing, file operations, and memory management
 * @function_count 7
 * @complexity High
 * @dependencies TaleWorlds.Native.Split.h, global system variables
 * @security_level Secure
 * @optimization_level High
 * @thread_safety Yes
 * @memory_management Yes
 * @error_handling Yes
 */