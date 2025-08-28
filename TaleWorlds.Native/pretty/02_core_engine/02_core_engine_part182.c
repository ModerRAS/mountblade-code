// 02_core_engine_part182.c - 核心引擎模块第182部分
// 本文件包含7个函数，主要涉及字符串处理、错误消息生成、系统状态检查和命令解析

#include "TaleWorlds.Native.Split.h"

/**
 * 触发系统终止处理
 * 此函数调用另一个函数FUN_1808fd200()，该函数不返回，直接终止程序
 */
void trigger_system_termination(void)
{
    // 调用系统终止函数，该函数不会返回
    execute_system_terminate();
}

/**
 * 处理哈希表相关的字符串生成和错误消息
 * @param param1 参数1
 * @param output_buffer 输出缓冲区指针
 * @param param3 参数3
 * @param hash_table 哈希表指针
 * @return 返回输出缓冲区指针
 */
uint64_t *
process_hash_table_string_generation(uint64_t param1, uint64_t *output_buffer, uint64_t param3, int64_t *hash_table)
{
    int buffer_length;
    void *string_ptr;
    int32_t temp_value;
    void **buffer_ptr;
    int32_t *hash_entry;
    void *error_message;
    int entry_length;
    bool is_aligned;
    void *stack_buffer_88;
    int32_t *stack_buffer_80;
    int32_t stack_value_78;
    uint64_t stack_value_70;
    void *stack_buffer_68;
    void *stack_buffer_60;
    int stack_value_58;
    void *stack_buffer_50;
    void *stack_buffer_48;
    int64_t stack_value_40;
    int32_t stack_value_30;
    
    // 检查哈希表对齐状态
    is_aligned = (hash_table[1] - *hash_table & 0xffffffffffffffe0U) != 0x20;
    if (is_aligned) {
        // 创建哈希相关错误消息
        stack_buffer_88 = &global_resource_manager_v1;
        stack_value_70 = 0;
        stack_buffer_80 = (int32_t *)0x0;
        stack_value_78 = 0;
        hash_entry = (int32_t *)allocate_hash_entry(global_hash_manager, 0x17, 0x13, hash_table, 0, 0xfffffffffffffffe);
        *(int8_t *)hash_entry = 0;
        stack_buffer_80 = hash_entry;
        temp_value = validate_hash_entry(hash_entry);
        stack_value_70 = CONCAT44(stack_value_70._4_4_, temp_value);
        *hash_entry = 0x64616873;  // "shad"
        hash_entry[1] = 0x695f7265;  // "er_i"
        hash_entry[2] = 0x746e6564;  // "dent"
        hash_entry[3] = 0x65696669;  // "ifie"
        hash_entry[4] = 0x742e7372;  // "rs.t"
        *(int16_t *)(hash_entry + 5) = 0x7478;  // "xt"
        *(int8_t *)((int64_t)hash_entry + 0x16) = 0;
        stack_value_78 = 0x16;
        buffer_ptr = &stack_buffer_88;
    }
    else {
        buffer_ptr = (void **)create_string_buffer(&stack_buffer_48);
    }
    
    // 初始化缓冲区
    stack_buffer_68 = &global_resource_manager_v1;
    stack_buffer_50 = (void *)0x0;
    stack_buffer_60 = (void *)0x0;
    stack_value_58 = 0;
    buffer_length = *(int *)(buffer_ptr + 2);
    stack_value_58 = buffer_length;
    string_ptr = buffer_ptr[1];
    stack_buffer_60 = string_ptr;
    stack_buffer_50 = (void *)((uint64_t)*(uint *)((int64_t)buffer_ptr + 0x1c) << 0x20);
    stack_buffer_50 = buffer_ptr[3];
    *(int32_t *)(buffer_ptr + 2) = 0;
    buffer_ptr[1] = (void *)0x0;
    buffer_ptr[3] = (void *)0x0;
    
    // 清理资源
    if (is_aligned) {
        stack_buffer_88 = &global_resource_manager_v1;
        if (stack_buffer_80 != (int32_t *)0x0) {
            // 释放内存错误处理
            handle_memory_error();
        }
        stack_buffer_80 = (int32_t *)0x0;
        stack_value_70 = stack_value_70 & 0xffffffff00000000;
        stack_buffer_88 = &global_resource_manager_v2;
        buffer_ptr = (void **)0x0;
    }
    
    if (!is_aligned) {
        stack_buffer_48 = &global_resource_manager_v1;
        if (stack_value_40 != 0) {
            // 释放内存错误处理
            handle_memory_error();
        }
        stack_value_40 = 0;
        stack_value_30 = 0;
        stack_buffer_48 = &global_resource_manager_v2;
        buffer_ptr = (void **)0x0;
    }
    
    // 生成默认字符串
    error_message = &DEFAULT_STRING_VALUE;
    if (string_ptr != (void *)0x0) {
        error_message = string_ptr;
    }
    
    // 处理字符串内容
    process_string_content(buffer_ptr, error_message);
    
    // 设置输出缓冲区
    *output_buffer = &global_resource_manager_v2;
    output_buffer[1] = 0;
    *(int32_t *)(output_buffer + 2) = 0;
    *output_buffer = &global_resource_manager_v1;
    output_buffer[3] = 0;
    output_buffer[1] = 0;
    *(int32_t *)(output_buffer + 2) = 0;
    
    entry_length = *(int *)(output_buffer + 2) + 0x21;
    expand_buffer(output_buffer, entry_length);
    hash_entry = (int32_t *)((uint64_t)*(uint *)(output_buffer + 2) + output_buffer[1]);
    *hash_entry = 0x656e6f44;  // "Done"
    hash_entry[1] = 0x6f43202e;  // ". Co"
    hash_entry[2] = 0x6e69626d;  // "mbin"
    hash_entry[3] = 0x6f697461;  // "atio"
    hash_entry[4] = 0x7320736e;  // "ns "
    hash_entry[5] = 0x64657661;  // "aved"
    hash_entry[6] = 0x206f7420;  // "to "
    hash_entry[7] = 0x656c6966;  // "file"
    *(int16_t *)(hash_entry + 8) = 0x20;  // " "
    *(int *)(output_buffer + 2) = entry_length;
    
    // 复制字符串内容
    if (0 < buffer_length) {
        expand_buffer(output_buffer, entry_length + buffer_length);
        // 复制字符串到输出缓冲区
        memcpy((uint64_t)*(uint *)(output_buffer + 2) + output_buffer[1], string_ptr, (int64_t)(buffer_length + 1));
    }
    
    // 最终清理
    stack_buffer_68 = &global_resource_manager_v1;
    if (string_ptr != (void *)0x0) {
        // 释放字符串内存
        free_string_memory(string_ptr);
    }
    
    return output_buffer;
}

/**
 * 处理组合相关的字符串生成和错误消息
 * @param param1 参数1
 * @param output_buffer 输出缓冲区指针
 * @param param3 参数3
 * @param combination_data 组合数据指针
 * @return 返回输出缓冲区指针
 */
uint64_t *
process_combination_string_generation(uint64_t param1, uint64_t *output_buffer, uint64_t param3, int64_t *combination_data)
{
    int buffer_length;
    void *string_ptr;
    int32_t temp_value;
    void **buffer_ptr;
    int32_t *combination_entry;
    void *error_message;
    int entry_length;
    bool is_aligned;
    void *stack_buffer_88;
    int32_t *stack_buffer_80;
    int32_t stack_value_78;
    uint64_t stack_value_70;
    void *stack_buffer_68;
    void *stack_buffer_60;
    int stack_value_58;
    void *stack_buffer_50;
    void *stack_buffer_48;
    int64_t stack_value_40;
    int32_t stack_value_30;
    
    // 检查组合数据对齐状态
    is_aligned = (combination_data[1] - *combination_data & 0xffffffffffffffe0U) != 0x20;
    if (is_aligned) {
        // 创建组合相关错误消息
        stack_buffer_88 = &global_resource_manager_v1;
        stack_value_70 = 0;
        stack_buffer_80 = (int32_t *)0x0;
        stack_value_78 = 0;
        combination_entry = (int32_t *)allocate_combination_entry(global_combination_manager, 0x18, 0x13, combination_data, 0, 0xfffffffffffffffe);
        *(int8_t *)combination_entry = 0;
        stack_buffer_80 = combination_entry;
        temp_value = validate_combination_entry(combination_entry);
        stack_value_70 = CONCAT44(stack_value_70._4_4_, temp_value);
        *combination_entry = 0x64616873;  // "shad"
        combination_entry[1] = 0x635f7265;  // "er_c"
        combination_entry[2] = 0x69626d6f;  // "omb"
        combination_entry[3] = 0x6974616e;  // "nati"
        *(uint64_t *)(combination_entry + 4) = 0x7478742e736e6f;  // "ons.txt"
        stack_value_78 = 0x17;
        buffer_ptr = &stack_buffer_88;
    }
    else {
        buffer_ptr = (void **)create_string_buffer(&stack_buffer_48);
    }
    
    // 初始化缓冲区
    stack_buffer_68 = &global_resource_manager_v1;
    stack_buffer_50 = (void *)0x0;
    stack_buffer_60 = (void *)0x0;
    stack_value_58 = 0;
    buffer_length = *(int *)(buffer_ptr + 2);
    stack_value_58 = buffer_length;
    string_ptr = buffer_ptr[1];
    stack_buffer_60 = string_ptr;
    stack_buffer_50 = (void *)((uint64_t)*(uint *)((int64_t)buffer_ptr + 0x1c) << 0x20);
    stack_buffer_50 = buffer_ptr[3];
    *(int32_t *)(buffer_ptr + 2) = 0;
    buffer_ptr[1] = (void *)0x0;
    buffer_ptr[3] = (void *)0x0;
    
    // 清理资源
    if (is_aligned) {
        stack_buffer_88 = &global_resource_manager_v1;
        if (stack_buffer_80 != (int32_t *)0x0) {
            // 释放内存错误处理
            handle_memory_error();
        }
        stack_buffer_80 = (int32_t *)0x0;
        stack_value_70 = stack_value_70 & 0xffffffff00000000;
        stack_buffer_88 = &global_resource_manager_v2;
        buffer_ptr = (void **)0x0;
    }
    
    if (!is_aligned) {
        stack_buffer_48 = &global_resource_manager_v1;
        if (stack_value_40 != 0) {
            // 释放内存错误处理
            handle_memory_error();
        }
        stack_value_40 = 0;
        stack_value_30 = 0;
        stack_buffer_48 = &global_resource_manager_v2;
        buffer_ptr = (void **)0x0;
    }
    
    // 生成默认字符串
    error_message = &DEFAULT_STRING_VALUE;
    if (string_ptr != (void *)0x0) {
        error_message = string_ptr;
    }
    
    // 处理组合字符串内容
    process_combination_string(buffer_ptr, error_message);
    
    // 设置输出缓冲区
    *output_buffer = &global_resource_manager_v2;
    output_buffer[1] = 0;
    *(int32_t *)(output_buffer + 2) = 0;
    *output_buffer = &global_resource_manager_v1;
    output_buffer[3] = 0;
    output_buffer[1] = 0;
    *(int32_t *)(output_buffer + 2) = 0;
    
    entry_length = *(int *)(output_buffer + 2) + 0x21;
    expand_buffer(output_buffer, entry_length);
    combination_entry = (int32_t *)((uint64_t)*(uint *)(output_buffer + 2) + output_buffer[1]);
    *combination_entry = 0x656e6f44;  // "Done"
    combination_entry[1] = 0x6f43202e;  // ". Co"
    combination_entry[2] = 0x6e69626d;  // "mbin"
    combination_entry[3] = 0x6f697461;  // "atio"
    combination_entry[4] = 0x7320736e;  // "ns "
    combination_entry[5] = 0x64657661;  // "aved"
    combination_entry[6] = 0x206f7420;  // "to "
    combination_entry[7] = 0x656c6966;  // "file"
    *(int16_t *)(combination_entry + 8) = 0x20;  // " "
    *(int *)(output_buffer + 2) = entry_length;
    
    // 复制字符串内容
    if (0 < buffer_length) {
        expand_buffer(output_buffer, entry_length + buffer_length);
        // 复制字符串到输出缓冲区
        memcpy((uint64_t)*(uint *)(output_buffer + 2) + output_buffer[1], string_ptr, (int64_t)(buffer_length + 1));
    }
    
    // 最终清理
    stack_buffer_68 = &global_resource_manager_v1;
    if (string_ptr != (void *)0x0) {
        // 释放字符串内存
        free_string_memory(string_ptr);
    }
    
    return output_buffer;
}

/**
 * 处理图形相关的字符串生成和错误消息
 * @param param1 参数1
 * @param output_buffer 输出缓冲区指针
 * @param param3 参数3
 * @param graphics_data 图形数据指针
 * @return 返回输出缓冲区指针
 */
uint64_t *
process_graphics_string_generation(uint64_t param1, uint64_t *output_buffer, uint64_t param3, int64_t *graphics_data)
{
    int64_t data_start;
    uint64_t *message_ptr;
    
    data_start = *graphics_data;
    if ((((graphics_data[1] - data_start >> 5 == 0) || (*(int *)(data_start + 0x10) != 1)) ||
        (**(char **)(data_start + 8) != '0')) || ((*(char **)(data_start + 8))[1] != '\0')) {
        // 设置图形错误标志
        *(int8_t *)(global_graphics_manager + 0x1f0) = 1;
        *output_buffer = &global_resource_manager_v2;
        output_buffer[1] = 0;
        *(int32_t *)(output_buffer + 2) = 0;
        *output_buffer = &global_resource_manager_v1;
        output_buffer[3] = 0;
        output_buffer[1] = 0;
        *(int32_t *)(output_buffer + 2) = 0;
        
        // 生成图形错误消息
        expand_buffer(output_buffer, 0x19, 0, graphics_data, 0, 0xfffffffffffffffe);
        message_ptr = (uint64_t *)output_buffer[1];
        *message_ptr = 0x206574696e617247;  // "Graphics "
        message_ptr[1] = 0x6e696d6165727473;  // "training "
        message_ptr[2] = 0x6465737561702067;  // "guas des"
        *(int16_t *)(message_ptr + 3) = 0x2e;  // "."
        *(int32_t *)(output_buffer + 2) = 0x19;
    }
    else {
        // 清除图形错误标志
        *(int8_t *)(global_graphics_manager + 0x1f0) = 0;
        *output_buffer = &global_resource_manager_v2;
        output_buffer[1] = 0;
        *(int32_t *)(output_buffer + 2) = 0;
        *output_buffer = &global_resource_manager_v1;
        output_buffer[3] = 0;
        output_buffer[1] = 0;
        *(int32_t *)(output_buffer + 2) = 0;
        
        // 生成图形成功消息
        expand_buffer(output_buffer, 0x1c, 0, graphics_data, 0, 0xfffffffffffffffe);
        message_ptr = (uint64_t *)output_buffer[1];
        *message_ptr = 0x206574696e617247;  // "Graphics "
        message_ptr[1] = 0x6e696d6165727473;  // "training "
        message_ptr[2] = 0x7561702d6e752067;  // "g un-paus"
        *(int32_t *)(message_ptr + 3) = 0x2e646573;  // "sed."
        *(int8_t *)((int64_t)message_ptr + 0x1c) = 0;
        *(int32_t *)(output_buffer + 2) = 0x1c;
    }
    
    return output_buffer;
}

/**
 * 处理网络相关的字符串生成和错误消息
 * @param param1 参数1
 * @param output_buffer 输出缓冲区指针
 * @param param3 参数3
 * @param network_data 网络数据指针
 * @return 返回输出缓冲区指针
 */
uint64_t *
process_network_string_generation(uint64_t param1, uint64_t *output_buffer, uint64_t param3, int64_t *network_data)
{
    int64_t data_end;
    int64_t data_start;
    int32_t *short_message;
    uint64_t *long_message;
    
    data_end = network_data[1];
    data_start = *network_data;
    output_buffer[1] = 0;
    *(int32_t *)(output_buffer + 2) = 0;
    *output_buffer = &global_resource_manager_v2;
    
    if ((uint64_t)(data_end - data_start >> 5) < 2) {
        // 生成网络错误消息
        *output_buffer = &global_resource_manager_v1;
        output_buffer[3] = 0;
        output_buffer[1] = 0;
        *(int32_t *)(output_buffer + 2) = 0;
        expand_buffer(output_buffer, 0x14, param3, network_data, 0, 0xfffffffffffffffe);
        long_message = (uint64_t *)output_buffer[1];
        *long_message = 0x777420736465654e;  // "Need twos "
        long_message[1] = 0x656d75677261206f;  // "o grammar "
        *(int32_t *)(long_message + 2) = 0x2e73746e;  // "nts."
        *(int8_t *)((int64_t)long_message + 0x14) = 0;
        *(int32_t *)(output_buffer + 2) = 0x14;
    }
    else {
        // 生成简短消息
        *output_buffer = &global_resource_manager_v1;
        output_buffer[3] = 0;
        output_buffer[1] = 0;
        *(int32_t *)(output_buffer + 2) = 0;
        expand_buffer(output_buffer, 4, param3, network_data, 0, 0xfffffffffffffffe);
        short_message = (int32_t *)output_buffer[1];
        *short_message = 0x656e6f44;  // "Done"
        *(int8_t *)(short_message + 1) = 0;
        *(int32_t *)(output_buffer + 2) = 4;
    }
    
    return output_buffer;
}

/**
 * 处理多元素字符串拼接
 * @param param1 参数1
 * @param output_buffer 输出缓冲区指针
 * @param param3 参数3
 * @param element_data 元素数据指针
 * @return 返回输出缓冲区指针
 */
uint64_t *
process_multi_element_string_concat(uint64_t param1, uint64_t *output_buffer, uint64_t param3, int64_t *element_data)
{
    int64_t element_start;
    int32_t *result_ptr;
    int64_t data_start;
    uint element_count;
    uint64_t buffer_offset;
    uint64_t temp_offset;
    int64_t data_end;
    uint64_t loop_counter;
    uint64_t element_size;
    void *stack_buffer_48;
    uint64_t stack_buffer_40;
    uint stack_buffer_38;
    uint64_t stack_buffer_30;
    uint64_t total_size;
    
    total_size = 0;
    stack_buffer_48 = &global_resource_manager_v1;
    stack_buffer_30 = 0;
    stack_buffer_40 = 0;
    stack_buffer_38 = 0;
    data_end = element_data[1];
    data_start = *element_data;
    buffer_offset = total_size;
    temp_offset = total_size;
    loop_counter = total_size;
    element_size = total_size;
    
    // 处理多个元素
    if (data_end - data_start >> 5 != 0) {
        do {
            element_start = element_size + data_start;
            if (0 < *(int *)(element_start + 0x10)) {
                expand_buffer(&stack_buffer_48, (int)total_size + *(int *)(element_start + 0x10));
                // 复制元素内容到缓冲区
                memcpy(stack_buffer_38 + stack_buffer_40, *(uint64_t *)(element_start + 8),
                       (int64_t)(*(int *)(element_start + 0x10) + 1));
            }
            
            // 添加分隔符
            if (buffer_offset != (data_end - data_start >> 5) - 1U) {
                element_count = (int)total_size + 1;
                total_size = (uint64_t)element_count;
                expand_buffer(&stack_buffer_48, total_size);
                *(int16_t *)(stack_buffer_38 + stack_buffer_40) = 0x20;  // 空格
                data_end = element_data[1];
                data_start = *element_data;
                temp_offset = stack_buffer_40;
                stack_buffer_38 = element_count;
            }
            
            element_count = (int)loop_counter + 1;
            buffer_offset = (int64_t)(int)element_count;
            loop_counter = (uint64_t)element_count;
            element_size = element_size + 0x20;
        } while ((uint64_t)(int64_t)(int)element_count < (uint64_t)(data_end - data_start >> 5));
    }
    
    // 设置输出缓冲区
    *output_buffer = &global_resource_manager_v2;
    output_buffer[1] = 0;
    *(int32_t *)(output_buffer + 2) = 0;
    *output_buffer = &global_resource_manager_v1;
    output_buffer[3] = 0;
    output_buffer[1] = 0;
    *(int32_t *)(output_buffer + 2) = 0;
    expand_buffer(output_buffer, 4);
    result_ptr = (int32_t *)output_buffer[1];
    *result_ptr = 0x656e6f44;  // "Done"
    *(int8_t *)(result_ptr + 1) = 0;
    *(int32_t *)(output_buffer + 2) = 4;
    
    // 清理资源
    stack_buffer_48 = &global_resource_manager_v1;
    if (temp_offset == 0) {
        return output_buffer;
    }
    
    // 释放缓冲区内存
    free_buffer_memory(temp_offset);
}

/**
 * 处理选项相关的字符串生成
 * @param param1 参数1
 * @param output_buffer 输出缓冲区指针
 * @param param3 参数3
 * @param option_data 选项数据指针
 * @return 返回输出缓冲区指针
 */
uint64_t *
process_option_string_generation(uint64_t param1, uint64_t *output_buffer, uint64_t param3, int64_t *option_data)
{
    int32_t *short_result;
    uint64_t *long_result;
    uint option_value;
    int32_t temp_value;
    
    option_value = atoi(*(uint64_t *)(*option_data + 8));
    if (option_value < 5) {
        // 处理小数值选项
        process_low_value_option(temp_value, option_value);
        *output_buffer = &global_resource_manager_v2;
        output_buffer[1] = 0;
        *(int32_t *)(output_buffer + 2) = 0;
        *output_buffer = &global_resource_manager_v1;
        output_buffer[3] = 0;
        output_buffer[1] = 0;
        *(int32_t *)(output_buffer + 2) = 0;
        expand_buffer(output_buffer, 4);
        short_result = (int32_t *)output_buffer[1];
        *short_result = 0x656e6f44;  // "Done"
        *(int8_t *)(short_result + 1) = 0;
        *(int32_t *)(output_buffer + 2) = 4;
    }
    else {
        // 处理大数值选项，生成详细选项信息
        *output_buffer = &global_resource_manager_v2;
        output_buffer[1] = 0;
        *(int32_t *)(output_buffer + 2) = 0;
        *output_buffer = &global_resource_manager_v1;
        output_buffer[3] = 0;
        output_buffer[1] = 0;
        *(int32_t *)(output_buffer + 2) = 0;
        expand_buffer(output_buffer, 0x43);
        long_result = (uint64_t *)output_buffer[1];
        *long_result = 0x3a736e6f6974704f;  // "Options: "
        long_result[1] = 0x726556202d203020;  // " 0 - Ver"
        long_result[2] = 0x31202c776f4c2079;  // "y Low, 1"
        long_result[3] = 0x202c776f4c202d20;  // " - Low, "
        long_result[4] = 0x6964654d202d2032;  // "2 - Med"
        long_result[5] = 0x202d2033202c6d75;  // "um, 3 - "
        long_result[6] = 0x2034202c68676948;  // "High, 4"
        long_result[7] = 0x482079726556202d;  // " - High"
        *(int32_t *)(long_result + 8) = 0x686769;  // "igh"
        *(int32_t *)(output_buffer + 2) = 0x43;
    }
    
    return output_buffer;
}

/**
 * 处理命令序列执行
 * @param param1 参数1指针
 * @param output_buffer 输出缓冲区指针
 * @param param3 参数3
 * @param param4 参数4
 * @return 返回输出缓冲区指针
 */
uint64_t *
process_command_sequence(uint64_t *param1, uint64_t *output_buffer, uint64_t param3, uint64_t param4)
{
    uint64_t *command_ptr;
    int command_length;
    uint option_count;
    uint64_t buffer_size;
    uint64_t temp_offset;
    uint64_t *command_start;
    uint64_t *command_end;
    
    buffer_size = 0;
    *output_buffer = &global_resource_manager_v2;
    output_buffer[1] = 0;
    *(int32_t *)(output_buffer + 2) = 0;
    *output_buffer = &global_resource_manager_v1;
    output_buffer[3] = 0;
    output_buffer[1] = 0;
    *(int32_t *)(output_buffer + 2) = 0;
    
    // 获取命令序列
    get_command_sequence(*param1, &command_start, param3, param4, 1, 0xfffffffffffffffe);
    process_command_range(command_start, command_end, 0);
    
    temp_offset = buffer_size;
    command_ptr = command_start;
    
    // 处理命令序列中的每个命令
    if ((int64_t)command_end - (int64_t)command_start >> 5 != 0) {
        do {
            command_length = *(int *)(temp_offset + 0x10 + (int64_t)command_start);
            if (0 < command_length) {
                expand_buffer(output_buffer, *(int *)(output_buffer + 2) + command_length);
                // 复制命令内容到输出缓冲区
                memcpy((uint64_t)*(uint *)(output_buffer + 2) + output_buffer[1],
                       *(uint64_t *)(temp_offset + 8 + (int64_t)command_start),
                       (int64_t)(*(int *)(temp_offset + 0x10 + (int64_t)command_start) + 1));
            }
            
            // 添加分隔符
            command_length = *(int *)(output_buffer + 2) + 1;
            expand_buffer(output_buffer, command_length);
            *(int16_t *)((uint64_t)*(uint *)(output_buffer + 2) + output_buffer[1]) = 10;  // 换行符
            *(int *)(output_buffer + 2) = command_length;
            
            option_count = (int)buffer_size + 1;
            buffer_size = (uint64_t)option_count;
            temp_offset = temp_offset + 0x20;
            command_ptr = command_start;
        } while ((uint64_t)(int64_t)(int)option_count <
                 (uint64_t)((int64_t)command_end - (int64_t)command_start >> 5));
    }
    
    // 执行命令
    for (; command_ptr != command_end; command_ptr = command_ptr + 4) {
        (**(code **)*command_ptr)(command_ptr, 0);
    }
    
    // 清理资源
    if (command_start != (uint64_t *)0x0) {
        // 释放命令序列内存
        free_command_sequence();
    }
    
    return output_buffer;
}