#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 02_core_engine_part155.c - 核心引擎模块第155部分
// 包含字符串哈希、资源管理和配置处理相关功能

// 全局变量声明
extern longlong SYSTEM_DATA_MANAGER_A;    // 主引擎上下文指针
extern uint64_t SYSTEM_DATA_MANAGER_B;   // 内存分配器上下文
extern uint global_config_6320_ptr[];        // 哈希查找表
extern uint64_t global_config_3208_ptr;    // 配置键值对 - 位置偏移
extern uint64_t global_config_3248_ptr;    // 配置键值对 - 边界检查
extern uint64_t global_config_3224_ptr;    // 配置键值对 - 材质ID
extern uint64_t global_config_3280_ptr;    // 配置键值对 - 纹理坐标
extern uint64_t global_config_3264_ptr;    // 配置键值对 - 布尔标志
extern uint64_t global_config_3320_ptr;    // 配置键值对 - 颜色值
extern uint64_t global_config_3304_ptr;    // 配置键值对 - 整数值
extern uint64_t global_config_3344_ptr;    // 配置键值对 - 浮点数值
extern char global_config_3336_ptr[];         // 字符串分隔符 "##"
extern char global_config_3384_ptr[];         // 格式化字符串 "%s %s"
extern char global_config_3360_ptr[];         // 格式化字符串 "%d %d"
extern char global_config_3416_ptr[];         // 格式化字符串 "%d"
extern char global_config_3400_ptr[];         // 格式化字符串 "%d %d"
extern char global_config_3456_ptr[];         // 格式化字符串 "%d %d"
extern char global_config_3440_ptr[];         // 格式化字符串 "%d"
extern char global_config_3496_ptr[];         // 格式化字符串 "%s"
extern char global_config_3472_ptr[];         // 格式化字符串 "%d %d"
extern char global_config_3512_ptr[];         // 格式化字符串 "%s"
extern uint64_t system_buffer_cc18;     // 换行符常量

// 外部函数声明
extern void FUN_18011da00(void *buffer, longlong size);
extern void *FUN_1801210b0(const char *str);
extern void *func_0x000180120ce0(longlong size, uint64_t context);
extern int FUN_18010cbc0(uint64_t config, uint64_t key, void *value1, void *value2);
extern void *FUN_180122210(void *buffer, const char *format, ...);
extern void *strstr(const char *haystack, const char *needle);
extern void *memcpy(void *dest, const void *src, longlong n);
extern void *FUN_18013c940(uint64_t param);

// 初始化引擎组件
void initialize_engine_component(void)
{
    // 简化实现：空函数，可能是占位符或初始化完成标志
    return;
}

// 处理字符串哈希和资源管理
longlong process_string_hash_and_resources(longlong *output_index)
{
    int *resource_buffer;
    longlong engine_context;
    uint hash_value;
    int resource_count;
    ulonglong loop_counter;
    ulonglong max_iterations;
    int current_index;
    longlong callback_context;
    
    engine_context = SYSTEM_DATA_MANAGER_A;
    max_iterations = 0;
    resource_buffer = (int *)(SYSTEM_DATA_MANAGER_A + 0x2e08);  // 资源缓冲区指针
    current_index = 0;
    *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x2e04) = 0;         // 重置计数器
    resource_count = *(int *)(engine_context + 0x2e0c);  // 获取资源数量
    
    // 处理负数资源数量
    if (resource_count < 0) {
        hash_value = resource_count / 2 + resource_count;
        max_iterations = loop_counter;
        if (0 < (int)hash_value) {
            max_iterations = (ulonglong)hash_value;
        }
        FUN_18011da00(resource_buffer, max_iterations);  // 分配资源缓冲区
    }
    
    *resource_buffer = 0;
    resource_count = current_index;
    if (*(int *)(engine_context + 0x2e0c) == 0) {
        FUN_18011da00(resource_buffer, 8);              // 分配默认大小
        resource_count = *resource_buffer;
    }
    
    *(int8_t *)((longlong)resource_count + *(longlong *)(engine_context + 0x2e10)) = 0;
    *resource_buffer = *resource_buffer + 1;
    max_iterations = loop_counter;
    
    // 遍历资源列表并执行回调
    if (0 < *(int *)(engine_context + 0x2e18)) {
        do {
            callback_context = *(longlong *)(engine_context + 0x2e20) + max_iterations;
            (**(code **)(callback_context + 0x20))(engine_context, callback_context, resource_buffer);
            hash_value = (int)loop_counter + 1;
            loop_counter = (ulonglong)hash_value;
            max_iterations = max_iterations + 0x30;     // 下一个资源条目
        } while ((int)hash_value < *(int *)(engine_context + 0x2e18));
    }
    
    // 设置输出索引
    if (output_index != (longlong *)0x0) {
        if (*(longlong *)(engine_context + 0x2e10) != 0) {
            current_index = *resource_buffer + -1;
        }
        *output_index = (longlong)current_index;
    }
    
    callback_context = 0x180c82861;
    if (*(longlong *)(engine_context + 0x2e10) != 0) {
        callback_context = *(longlong *)(engine_context + 0x2e10);
    }
    return callback_context;
}

// 带索引的字符串哈希处理
longlong process_string_hash_with_index(longlong *output_index)
{
    int *resource_buffer;
    uint hash_value;
    int current_count;
    longlong result;
    ulonglong loop_counter;
    ulonglong max_iterations;
    int start_index;
    ulonglong current_offset;
    longlong engine_context;
    
    resource_buffer = (int *)(engine_context + 0x2e08);
    start_index = (int)current_offset;
    *(int *)(engine_context + 0x2e04) = start_index;
    current_count = *(int *)(engine_context + 0x2e0c);
    
    // 处理负数资源数量
    if (current_count < 0) {
        max_iterations = current_offset & 0xffffffff;
        hash_value = current_count / 2 + current_count;
        if (0 < (int)hash_value) {
            max_iterations = (ulonglong)hash_value;
        }
        FUN_18011da00(resource_buffer, max_iterations);
    }
    
    *resource_buffer = start_index;
    current_count = start_index;
    if (*(int *)(engine_context + 0x2e0c) == start_index) {
        FUN_18011da00(resource_buffer, 8);
        current_count = *resource_buffer;
    }
    
    loop_counter = current_offset & 0xffffffff;
    *(char *)((longlong)current_count + *(longlong *)(engine_context + 0x2e10)) = (char)current_offset;
    *resource_buffer = *resource_buffer + 1;
    max_iterations = current_offset;
    
    // 执行回调处理
    if (start_index < *(int *)(engine_context + 0x2e18)) {
        do {
            (**(code **)(*(longlong *)(engine_context + 0x2e20) + max_iterations + 0x20))();
            hash_value = (int)loop_counter + 1;
            loop_counter = (ulonglong)hash_value;
            max_iterations = max_iterations + 0x30;
        } while ((int)hash_value < *(int *)(engine_context + 0x2e18));
    }
    
    // 设置输出索引
    if (output_index != (longlong *)0x0) {
        if (*(ulonglong *)(engine_context + 0x2e10) != current_offset) {
            current_offset = (ulonglong)(*resource_buffer - 1);
        }
        *output_index = (longlong)(int)current_offset;
    }
    
    result = 0x180c82861;
    if (*(longlong *)(engine_context + 0x2e10) != 0) {
        result = *(longlong *)(engine_context + 0x2e10);
    }
    return result;
}

// 批量处理资源回调
longlong process_resource_callbacks_batch(void)
{
    longlong result;
    int *resource_buffer;
    int current_count;
    ulonglong current_offset;
    longlong engine_context;
    ulonglong loop_counter;
    longlong *output_index;
    
    loop_counter = current_offset;
    do {
        (**(code **)(*(longlong *)(engine_context + 0x2e20) + loop_counter + 0x20))();
        current_count = current_count + 1;
        loop_counter = loop_counter + 0x30;
    } while (current_count < *(int *)(engine_context + 0x2e18));
    
    if (output_index != (longlong *)0x0) {
        if (*(ulonglong *)(resource_buffer + 2) != current_offset) {
            current_offset = (ulonglong)(*resource_buffer - 1);
        }
        *output_index = (longlong)(int)current_offset;
    }
    
    result = 0x180c82861;
    if (*(longlong *)(engine_context + 0x2e10) != 0) {
        result = *(longlong *)(engine_context + 0x2e10);
    }
    return result;
}

// 处理单个资源回调
longlong process_single_resource_callback(void)
{
    longlong result;
    int *resource_buffer;
    ulonglong current_offset;
    longlong engine_context;
    longlong *output_index;
    
    if (output_index != (longlong *)0x0) {
        if (*(ulonglong *)(resource_buffer + 2) != current_offset) {
            current_offset = (ulonglong)(*resource_buffer - 1);
        }
        *output_index = (longlong)(int)current_offset;
    }
    
    result = 0x180c82861;
    if (*(longlong *)(engine_context + 0x2e10) != 0) {
        result = *(longlong *)(engine_context + 0x2e10);
    }
    return result;
}

// 强制处理资源回调
longlong force_process_resource_callback(void)
{
    longlong result;
    int *resource_buffer;
    ulonglong current_offset;
    longlong engine_context;
    longlong *output_index;
    
    if (*(ulonglong *)(resource_buffer + 2) != current_offset) {
        current_offset = (ulonglong)(*resource_buffer - 1);
    }
    *output_index = (longlong)(int)current_offset;
    
    result = 0x180c82861;
    if (*(longlong *)(engine_context + 0x2e10) != 0) {
        result = *(longlong *)(engine_context + 0x2e10);
    }
    return result;
}

// 查找或创建字符串哈希条目
uint64_t *find_or_create_hash_entry(uint64_t param_1, uint64_t param_2, byte *string_data)
{
    int32_t *entry_data;
    byte current_char;
    int hash_table_size;
    longlong engine_context;
    byte *string_ptr;
    longlong allocation_context;
    int new_capacity;
    uint hash_value;
    uint64_t hash_result;
    int current_size;
    longlong entry_offset;
    uint *hash_table_ptr;
    ulonglong search_index;
    int new_hash_size;
    uint64_t *found_entry;
    ulonglong max_search;
    uint8_t stack_data;
    
    engine_context = SYSTEM_DATA_MANAGER_A;
    hash_result = SYSTEM_DATA_MANAGER_B;
    hash_value = 0xffffffff;
    current_char = *string_data;
    string_ptr = string_data + 1;
    
    // 计算字符串哈希值
    while (current_char != 0) {
        // 处理特殊标记 "###"
        if (((current_char == 0x23) && (*string_ptr == 0x23)) && (string_ptr[1] == 0x23)) {
            hash_value = 0xffffffff;
        }
        hash_value = *(uint *)(&global_config_6320_ptr + (ulonglong)(byte)((byte)hash_value ^ current_char) * 4) ^ hash_value >> 8;
        current_char = *string_ptr;
        string_ptr = string_ptr + 1;
    }
    
    search_index = 0;
    
    // 在现有哈希表中查找
    if (*(int *)(SYSTEM_DATA_MANAGER_A + 0x2e28) != 0) {
        hash_table_ptr = (uint *)(*(longlong *)(SYSTEM_DATA_MANAGER_A + 0x2e30) + 8);
        max_search = search_index;
        do {
            if (*hash_table_ptr == ~hash_value) {
                found_entry = (uint64_t *)
                             ((longlong)(int)max_search * 0x38 + *(longlong *)(SYSTEM_DATA_MANAGER_A + 0x2e30));
                if (found_entry != (uint64_t *)0x0) {
                    return found_entry;
                }
                break;
            }
            max_search = (ulonglong)((int)max_search + 1);
            search_index = search_index + 1;
            hash_table_ptr = hash_table_ptr + 0xe;
        } while (search_index != (longlong)*(int *)(SYSTEM_DATA_MANAGER_A + 0x2e28));
    }
    
    // 检查是否需要扩容
    hash_table_size = *(int *)(SYSTEM_DATA_MANAGER_A + 0x2e2c);
    current_size = *(int *)(SYSTEM_DATA_MANAGER_A + 0x2e28);
    if (current_size == hash_table_size) {
        if (hash_table_size == 0) {
            new_capacity = 8;
        }
        else {
            new_capacity = hash_table_size / 2 + hash_table_size;
        }
        new_hash_size = current_size + 1;
        if (current_size + 1 < new_capacity) {
            new_hash_size = new_capacity;
        }
        
        // 执行扩容操作
        if (hash_table_size < new_hash_size) {
            *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + 1;
            hash_result = func_0x000180120ce0((longlong)new_hash_size * 0x38, hash_result);
            if (*(longlong *)(engine_context + 0x2e30) != 0) {
                // 复制现有数据到新分配的内存
                memcpy(hash_result, *(longlong *)(engine_context + 0x2e30), 
                       (longlong)*(int *)(engine_context + 0x2e28) * 0x38);
            }
            current_size = *(int *)(engine_context + 0x2e28);
            *(uint64_t *)(engine_context + 0x2e30) = hash_result;
            *(int *)(engine_context + 0x2e2c) = new_hash_size;
        }
    }
    
    // 创建新的哈希条目
    entry_offset = (longlong)current_size * 0x38;
    allocation_context = *(longlong *)(engine_context + 0x2e30);
    *(uint64_t *)(entry_offset + allocation_context) = 0;
    ((uint64_t *)(entry_offset + allocation_context))[1] = 0;
    found_entry = (uint64_t *)(entry_offset + 0x10 + allocation_context);
    *found_entry = 0;
    found_entry[1] = 0;
    entry_data = (int32_t *)(entry_offset + 0x20 + allocation_context);
    *entry_data = 0;
    entry_data[1] = 0;
    entry_data[2] = 0;
    entry_data[3] = 0;
    *(ulonglong *)(entry_offset + 0x30 + allocation_context) = CONCAT53(stack_data, 0xffff);
    
    hash_table_size = *(int *)(engine_context + 0x2e28);
    *(int *)(engine_context + 0x2e28) = hash_table_size + 1;
    found_entry = (uint64_t *)((longlong)hash_table_size * 0x38 + *(longlong *)(engine_context + 0x2e30));
    
    hash_result = FUN_1801210b0(string_data);
    *found_entry = hash_result;
    
    // 重新计算哈希值并存储
    hash_value = 0xffffffff;
    current_char = *string_data;
    string_ptr = string_data + 1;
    while (current_char != 0) {
        if (((current_char == 0x23) && (*string_ptr == 0x23)) && (string_ptr[1] == 0x23)) {
            hash_value = 0xffffffff;
        }
        hash_value = *(uint *)(&global_config_6320_ptr + ((ulonglong)(hash_value & 0xff) ^ (ulonglong)current_char) * 4) ^
                hash_value >> 8;
        current_char = *string_ptr;
        string_ptr = string_ptr + 1;
    }
    *(uint *)(found_entry + 1) = ~hash_value;
    return found_entry;
}

// 使用预计算哈希值查找或创建条目
uint64_t *find_or_create_hash_entry_with_precomputed_hash(uint64_t param_1, uint64_t param_2, uint precomputed_hash, byte *string_data)
{
    int32_t *entry_data;
    byte current_char;
    int hash_table_size;
    longlong engine_context;
    byte *string_ptr;
    longlong allocation_context;
    int new_capacity;
    uint computed_hash;
    uint64_t hash_result;
    int current_size;
    longlong entry_offset;
    uint *hash_table_ptr;
    ulonglong search_index;
    int new_hash_size;
    uint64_t *found_entry;
    uint final_hash;
    ulonglong max_search;
    byte string_start;
    byte *string_start_ptr;
    uint8_t stack_data;
    
    engine_context = SYSTEM_DATA_MANAGER_A;
    hash_result = SYSTEM_DATA_MANAGER_B;
    
    // 使用预计算的哈希值进行处理
    do {
        if (((string_start == 0x23) && (*string_data == 0x23)) && (string_data[1] == 0x23)) {
            computed_hash = precomputed_hash;
        }
        current_char = *string_data;
        string_data = string_data + 1;
        computed_hash = *(uint *)(&global_config_6320_ptr + (ulonglong)(byte)((byte)computed_hash ^ string_start) * 4) ^ computed_hash >> 8;
        string_start = current_char;
    } while (current_char != 0);
    
    search_index = 0;
    
    // 在现有哈希表中查找
    if (*(int *)(SYSTEM_DATA_MANAGER_A + 0x2e28) != 0) {
        hash_table_ptr = (uint *)(*(longlong *)(SYSTEM_DATA_MANAGER_A + 0x2e30) + 8);
        max_search = search_index;
        do {
            if (*hash_table_ptr == ~computed_hash) {
                found_entry = (uint64_t *)
                             ((longlong)(int)max_search * 0x38 + *(longlong *)(SYSTEM_DATA_MANAGER_A + 0x2e30));
                if (found_entry != (uint64_t *)0x0) {
                    return found_entry;
                }
                break;
            }
            max_search = (ulonglong)((int)max_search + 1);
            search_index = search_index + 1;
            hash_table_ptr = hash_table_ptr + 0xe;
        } while (search_index != (longlong)*(int *)(SYSTEM_DATA_MANAGER_A + 0x2e28));
    }
    
    // 检查是否需要扩容
    hash_table_size = *(int *)(SYSTEM_DATA_MANAGER_A + 0x2e2c);
    current_size = *(int *)(SYSTEM_DATA_MANAGER_A + 0x2e28);
    if (current_size == hash_table_size) {
        if (hash_table_size == 0) {
            new_capacity = 8;
        }
        else {
            new_capacity = hash_table_size / 2 + hash_table_size;
        }
        new_hash_size = current_size + 1;
        if (current_size + 1 < new_capacity) {
            new_hash_size = new_capacity;
        }
        
        // 执行扩容操作
        if (hash_table_size < new_hash_size) {
            *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + 1;
            hash_result = func_0x000180120ce0((longlong)new_hash_size * 0x38, hash_result);
            if (*(longlong *)(engine_context + 0x2e30) != 0) {
                // 复制现有数据到新分配的内存
                memcpy(hash_result, *(longlong *)(engine_context + 0x2e30), 
                       (longlong)*(int *)(engine_context + 0x2e28) * 0x38);
            }
            current_size = *(int *)(engine_context + 0x2e28);
            *(uint64_t *)(engine_context + 0x2e30) = hash_result;
            *(int *)(engine_context + 0x2e2c) = new_hash_size;
        }
    }
    
    // 创建新的哈希条目
    entry_offset = (longlong)current_size * 0x38;
    allocation_context = *(longlong *)(engine_context + 0x2e30);
    *(uint64_t *)(entry_offset + allocation_context) = 0;
    ((uint64_t *)(entry_offset + allocation_context))[1] = 0;
    found_entry = (uint64_t *)(entry_offset + 0x10 + allocation_context);
    *found_entry = 0;
    found_entry[1] = 0;
    entry_data = (int32_t *)(entry_offset + 0x20 + allocation_context);
    *entry_data = 0;
    entry_data[1] = 0;
    entry_data[2] = 0;
    entry_data[3] = 0;
    *(ulonglong *)(entry_offset + 0x30 + allocation_context) = CONCAT53(stack_data, 0xffff);
    
    hash_table_size = *(int *)(engine_context + 0x2e28);
    *(int *)(engine_context + 0x2e28) = hash_table_size + 1;
    found_entry = (uint64_t *)((longlong)hash_table_size * 0x38 + *(longlong *)(engine_context + 0x2e30));
    
    hash_result = FUN_1801210b0(string_start_ptr);
    *found_entry = hash_result;
    
    // 计算最终哈希值
    final_hash = 0xffffffff;
    current_char = *string_start_ptr;
    string_ptr = string_start_ptr + 1;
    while (current_char != 0) {
        if (((current_char == 0x23) && (*string_ptr == 0x23)) && (string_ptr[1] == 0x23)) {
            final_hash = 0xffffffff;
        }
        final_hash = *(uint *)(&global_config_6320_ptr + ((ulonglong)(final_hash & 0xff) ^ (ulonglong)current_char) * 4) ^
                 final_hash >> 8;
        current_char = *string_ptr;
        string_ptr = string_ptr + 1;
    }
    *(uint *)(found_entry + 1) = ~final_hash;
    return found_entry;
}

// 创建新的哈希条目
uint64_t *create_new_hash_entry(void)
{
    int32_t *entry_data;
    byte current_char;
    int hash_table_size;
    longlong engine_context;
    byte *string_ptr;
    longlong allocation_context;
    int new_capacity;
    uint computed_hash;
    uint64_t hash_result;
    int current_size;
    longlong entry_offset;
    uint *hash_table_ptr;
    ulonglong search_index;
    int new_hash_size;
    uint64_t *found_entry;
    uint final_hash;
    ulonglong max_search;
    byte *string_start_ptr;
    uint8_t stack_data;
    
    engine_context = SYSTEM_DATA_MANAGER_A;
    hash_result = SYSTEM_DATA_MANAGER_B;
    search_index = 0;
    
    // 在现有哈希表中查找
    if (*(int *)(SYSTEM_DATA_MANAGER_A + 0x2e28) != 0) {
        hash_table_ptr = (uint *)(*(longlong *)(SYSTEM_DATA_MANAGER_A + 0x2e30) + 8);
        max_search = search_index;
        do {
            if (*hash_table_ptr == ~computed_hash) {
                found_entry = (uint64_t *)
                             ((longlong)(int)max_search * 0x38 + *(longlong *)(SYSTEM_DATA_MANAGER_A + 0x2e30));
                if (found_entry != (uint64_t *)0x0) {
                    return found_entry;
                }
                break;
            }
            max_search = (ulonglong)((int)max_search + 1);
            search_index = search_index + 1;
            hash_table_ptr = hash_table_ptr + 0xe;
        } while (search_index != (longlong)*(int *)(SYSTEM_DATA_MANAGER_A + 0x2e28));
    }
    
    // 检查是否需要扩容
    hash_table_size = *(int *)(SYSTEM_DATA_MANAGER_A + 0x2e2c);
    current_size = *(int *)(SYSTEM_DATA_MANAGER_A + 0x2e28);
    if (current_size == hash_table_size) {
        if (hash_table_size == 0) {
            new_capacity = 8;
        }
        else {
            new_capacity = hash_table_size / 2 + hash_table_size;
        }
        new_hash_size = current_size + 1;
        if (current_size + 1 < new_capacity) {
            new_hash_size = new_capacity;
        }
        
        // 执行扩容操作
        if (hash_table_size < new_hash_size) {
            *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + 1;
            hash_result = func_0x000180120ce0((longlong)new_hash_size * 0x38, hash_result);
            if (*(longlong *)(engine_context + 0x2e30) != 0) {
                // 复制现有数据到新分配的内存
                memcpy(hash_result, *(longlong *)(engine_context + 0x2e30), 
                       (longlong)*(int *)(engine_context + 0x2e28) * 0x38);
            }
            current_size = *(int *)(engine_context + 0x2e28);
            *(uint64_t *)(engine_context + 0x2e30) = hash_result;
            *(int *)(engine_context + 0x2e2c) = new_hash_size;
        }
    }
    
    // 创建新的哈希条目
    entry_offset = (longlong)current_size * 0x38;
    allocation_context = *(longlong *)(engine_context + 0x2e30);
    *(uint64_t *)(entry_offset + allocation_context) = 0;
    ((uint64_t *)(entry_offset + allocation_context))[1] = 0;
    found_entry = (uint64_t *)(entry_offset + 0x10 + allocation_context);
    *found_entry = 0;
    found_entry[1] = 0;
    entry_data = (int32_t *)(entry_offset + 0x20 + allocation_context);
    *entry_data = 0;
    entry_data[1] = 0;
    entry_data[2] = 0;
    entry_data[3] = 0;
    *(ulonglong *)(entry_offset + 0x30 + allocation_context) = CONCAT53(stack_data, 0xffff);
    
    hash_table_size = *(int *)(engine_context + 0x2e28);
    *(int *)(engine_context + 0x2e28) = hash_table_size + 1;
    found_entry = (uint64_t *)((longlong)hash_table_size * 0x38 + *(longlong *)(engine_context + 0x2e30));
    
    hash_result = FUN_1801210b0(string_start_ptr);
    *found_entry = hash_result;
    
    // 计算最终哈希值
    final_hash = 0xffffffff;
    current_char = *string_start_ptr;
    string_ptr = string_start_ptr + 1;
    while (current_char != 0) {
        if (((current_char == 0x23) && (*string_ptr == 0x23)) && (string_ptr[1] == 0x23)) {
            final_hash = 0xffffffff;
        }
        final_hash = *(uint *)(&global_config_6320_ptr + ((ulonglong)(final_hash & 0xff) ^ (ulonglong)current_char) * 4) ^
                 final_hash >> 8;
        current_char = *string_ptr;
        string_ptr = string_ptr + 1;
    }
    *(uint *)(found_entry + 1) = ~final_hash;
    return found_entry;
}

// 处理配置参数并设置到目标结构体
void process_configuration_parameters(uint64_t param_1, uint64_t param_2, longlong target_struct, uint64_t config_data)
{
    int parse_result;
    float float_value1;
    float float_value2;
    int32_t temp_array[4];
    float temp_float1;
    float temp_float2;
    int temp_int_array[2];
    
    // 解析位置偏移参数
    parse_result = FUN_18010cbc0(config_data, &global_config_3208_ptr, &temp_float1, &temp_float2);
    if (parse_result == 2) {
        *(float *)(target_struct + 0xc) = temp_float1;
        *(float *)(target_struct + 0x10) = temp_float2;
        return;
    }
    
    // 解析边界检查参数
    parse_result = FUN_18010cbc0(config_data, &global_config_3248_ptr, &temp_float1, &temp_float2);
    if (parse_result == 2) {
        if (temp_float1 <= *(float *)(SYSTEM_DATA_MANAGER_A + 0x163c)) {
            temp_float1 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x163c);
        }
        float_value2 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1640);
        if (*(float *)(SYSTEM_DATA_MANAGER_A + 0x1640) <= temp_float2) {
            float_value2 = temp_float2;
        }
        *(float *)(target_struct + 0x14) = temp_float1;
        *(float *)(target_struct + 0x18) = float_value2;
        return;
    }
    
    // 解析材质ID参数
    parse_result = FUN_18010cbc0(config_data, &global_config_3224_ptr, temp_array);
    if (parse_result == 1) {
        *(int32_t *)(target_struct + 0x24) = temp_array[0];
        return;
    }
    
    // 解析纹理坐标参数
    parse_result = FUN_18010cbc0(config_data, &global_config_3280_ptr, &temp_float1, &temp_float2);
    if (parse_result == 2) {
        *(float *)(target_struct + 0x1c) = temp_float1;
        *(float *)(target_struct + 0x20) = temp_float2;
        return;
    }
    
    // 解析布尔标志参数
    parse_result = FUN_18010cbc0(config_data, &global_config_3264_ptr, temp_int_array);
    if (parse_result == 1) {
        *(bool *)(target_struct + 0x32) = temp_int_array[0] != 0;
        return;
    }
    
    // 解析颜色值参数
    parse_result = FUN_18010cbc0(config_data, &global_config_3320_ptr, temp_array, temp_int_array);
    if (parse_result == 2) {
        *(int32_t *)(target_struct + 0x28) = temp_array[0];
        *(int16_t *)(target_struct + 0x30) = (int16_t)temp_int_array[0];
        return;
    }
    
    // 解析整数值参数
    parse_result = FUN_18010cbc0(config_data, &global_config_3304_ptr, temp_array);
    if (parse_result == 1) {
        *(int32_t *)(target_struct + 0x28) = temp_array[0];
        *(int16_t *)(target_struct + 0x30) = 0xffff;
        return;
    }
    
    // 解析浮点数值参数
    parse_result = FUN_18010cbc0(config_data, &global_config_3344_ptr, temp_array);
    if (parse_result == 1) {
        *(int32_t *)(target_struct + 0x2c) = temp_array[0];
    }
    return;
}

// 处理引擎资源数据并格式化输出
void process_engine_resources_and_format_output(longlong engine_context, uint64_t *format_params, int *output_buffer)
{
    float position_x;
    float position_y;
    short texture_index;
    uint64_t *resource_entry;
    longlong resource_offset;
    int *hash_table_ptr;
    ulonglong hash_index;
    longlong string_match;
    int resource_count;
    ulonglong loop_counter;
    ulonglong max_iterations;
    longlong callback_offset;
    ulonglong iteration_count;
    ulonglong search_index;
    uint current_uint;
    ulonglong max_search;
    
    search_index = 0;
    resource_count = 0;
    max_search = search_index;
    max_iterations = search_index;
    
    // 处理活动资源
    if (*(int *)(engine_context + 0x1aa0) != 0) {
        do {
            resource_entry = *(uint64_t **)(max_search + *(longlong *)(engine_context + 0x1aa8));
            if ((*(uint *)((longlong)resource_entry + 0xc) & 0x100) == 0) {
                if (*(int *)(resource_entry + 0x5c) == -1) {
                    hash_index = search_index;
                    if (*(int *)(SYSTEM_DATA_MANAGER_A + 0x2e28) != 0) {
                        hash_table_ptr = (int *)(*(longlong *)(SYSTEM_DATA_MANAGER_A + 0x2e30) + 8);
                        iteration_count = search_index;
                        max_iterations = search_index;
                        do {
                            if (*hash_table_ptr == *(int *)(resource_entry + 1)) {
                                hash_index = (longlong)(int)max_iterations * 0x38 + *(longlong *)(SYSTEM_DATA_MANAGER_A + 0x2e30);
                                break;
                            }
                            max_iterations = (ulonglong)((int)max_iterations + 1);
                            iteration_count = iteration_count + 1;
                            hash_table_ptr = hash_table_ptr + 0xe;
                        } while (iteration_count != (longlong)*(int *)(SYSTEM_DATA_MANAGER_A + 0x2e28));
                    }
                }
                else {
                    hash_index = (longlong)*(int *)(resource_entry + 0x5c) * 0x38 + *(longlong *)(engine_context + 0x2e30);
                }
                
                // 创建新的资源条目
                if (hash_index == 0) {
                    hash_index = FUN_18013c940(*resource_entry);
                    *(int *)(resource_entry + 0x5c) =
                         (int)((longlong)(hash_index - *(longlong *)(engine_context + 0x2e30)) / 0x38);
                }
                
                // 填充资源数据
                position_x = *(float *)(resource_entry + 8);
                position_y = *(float *)((longlong)resource_entry + 0x34);
                *(float *)(hash_index + 0x10) = *(float *)((longlong)resource_entry + 0x44) - *(float *)(resource_entry + 7);
                *(float *)(hash_index + 0xc) = position_x - position_y;
                *(uint64_t *)(hash_index + 0x14) = resource_entry[10];
                *(int32_t *)(hash_index + 0x24) = *(int32_t *)(resource_entry + 6);
                *(uint64_t *)(hash_index + 0x1c) = *(uint64_t *)((longlong)resource_entry + 0x34);
                *(int32_t *)(hash_index + 0x28) = *(int32_t *)(resource_entry + 0x83);
                *(int32_t *)(hash_index + 0x2c) = *(int32_t *)((longlong)resource_entry + 0x14);
                *(int16_t *)(hash_index + 0x30) = *(int16_t *)(resource_entry + 0x86);
                *(int8_t *)(hash_index + 0x32) = *(int8_t *)((longlong)resource_entry + 0xb2);
            }
            current_uint = (int)max_iterations + 1;
            max_search = max_search + 8;
            max_iterations = (ulonglong)current_uint;
        } while (current_uint != *(uint *)(engine_context + 0x1aa0));
    }
    
    // 设置输出缓冲区大小
    if (*(longlong *)(output_buffer + 2) != 0) {
        resource_count = *output_buffer + -1;
    }
    FUN_18011da00(output_buffer, *(int *)(engine_context + 0x2e28) * 0x60 + resource_count);
    
    max_search = search_index;
    
    // 格式化输出资源数据
    if (*(int *)(engine_context + 0x2e28) != 0) {
        do {
            resource_offset = *(longlong *)(engine_context + 0x2e30);
            callback_offset = *(longlong *)(max_search + resource_offset);
            string_match = strstr(callback_offset, &global_config_3336_ptr);
            if (string_match != 0) {
                callback_offset = string_match;
            }
            FUN_180122210(output_buffer, &global_config_3384_ptr, *format_params, callback_offset);
            resource_count = *(int *)(max_search + 0x24 + resource_offset);
            if ((resource_count != 0) && (resource_count != 0x11111111)) {
                FUN_180122210(output_buffer, &global_config_3360_ptr, (int)*(float *)(max_search + 0x1c + resource_offset),
                              (int)*(float *)(max_search + 0x20 + resource_offset));
                FUN_180122210(output_buffer, &global_config_3416_ptr, *(int32_t *)(max_search + 0x24 + resource_offset));
            }
            position_x = *(float *)(max_search + 0xc + resource_offset);
            if (((position_x != 0.0) || (*(float *)(max_search + 0x10 + resource_offset) != 0.0)) ||
               (*(int *)(max_search + 0x24 + resource_offset) == 0x11111111)) {
                FUN_180122210(output_buffer, &global_config_3400_ptr, (int)position_x, (int)*(float *)(max_search + 0x10 + resource_offset));
            }
            position_x = *(float *)(max_search + 0x14 + resource_offset);
            if ((position_x != 0.0) || (*(float *)(max_search + 0x18 + resource_offset) != 0.0)) {
                FUN_180122210(output_buffer, &global_config_3456_ptr, (int)position_x, (int)*(float *)(max_search + 0x18 + resource_offset));
            }
            FUN_180122210(output_buffer, &global_config_3440_ptr, *(int8_t *)(max_search + 0x32 + resource_offset));
            resource_count = *(int *)(max_search + 0x28 + resource_offset);
            if (resource_count != 0) {
                texture_index = *(short *)(max_search + 0x30 + resource_offset);
                if (texture_index == -1) {
                    FUN_180122210(output_buffer, &global_config_3496_ptr);
                }
                else {
                    FUN_180122210(output_buffer, &global_config_3472_ptr, resource_count, (int)texture_index);
                }
                if (*(int *)(max_search + 0x2c + resource_offset) != 0) {
                    FUN_180122210(output_buffer, &global_config_3512_ptr);
                }
            }
            FUN_180122210(output_buffer, &system_buffer_cc18);
            current_uint = (int)search_index + 1;
            search_index = (ulonglong)current_uint;
            max_search = max_search + 0x38;
        } while (current_uint != *(uint *)(engine_context + 0x2e28));
    }
    return;
}

// 处理引擎资源数据的优化版本
void process_engine_resources_optimized(uint64_t param_1)
{
    float position_x;
    float position_y;
    short texture_index;
    uint64_t *resource_entry;
    longlong resource_offset;
    int *hash_table_ptr;
    ulonglong hash_index;
    longlong string_match;
    int resource_count;
    ulonglong loop_counter;
    ulonglong max_iterations;
    longlong callback_offset;
    ulonglong iteration_count;
    uint current_uint;
    ulonglong current_offset;
    int output_count;
    uint64_t *format_params;
    int *output_buffer;
    longlong engine_context;
    uint64_t extra_output;
    uint64_t temp_result;
    
    current_offset = loop_counter & 0xffffffff;
    do {
        resource_entry = *(uint64_t **)(current_offset + *(longlong *)(engine_context + 0x1aa8));
        if ((*(uint *)((longlong)resource_entry + 0xc) & 0x100) == 0) {
            if (*(int *)(resource_entry + 0x5c) == -1) {
                max_iterations = loop_counter & 0xffffffff;
                hash_index = loop_counter;
                if (*(int *)(SYSTEM_DATA_MANAGER_A + 0x2e28) != 0) {
                    hash_table_ptr = (int *)(*(longlong *)(SYSTEM_DATA_MANAGER_A + 0x2e30) + 8);
                    iteration_count = loop_counter;
                    do {
                        if (*hash_table_ptr == *(int *)(resource_entry + 1)) {
                            hash_index = (longlong)(int)max_iterations * 0x38 + *(longlong *)(SYSTEM_DATA_MANAGER_A + 0x2e30);
                            break;
                        }
                        max_iterations = (ulonglong)((int)max_iterations + 1);
                        iteration_count = iteration_count + 1;
                        hash_table_ptr = hash_table_ptr + 0xe;
                    } while (iteration_count != (longlong)*(int *)(SYSTEM_DATA_MANAGER_A + 0x2e28));
                }
            }
            else {
                hash_index = (longlong)*(int *)(resource_entry + 0x5c) * 0x38 + *(longlong *)(engine_context + 0x2e30);
            }
            
            // 创建新的资源条目
            if (hash_index == 0) {
                hash_index = FUN_18013c940(*resource_entry);
                *(int *)(resource_entry + 0x5c) =
                     (int)((longlong)(hash_index - *(longlong *)(engine_context + 0x2e30)) / 0x38);
            }
            
            // 填充资源数据
            position_x = *(float *)(resource_entry + 8);
            position_y = *(float *)((longlong)resource_entry + 0x34);
            *(float *)(hash_index + 0x10) = *(float *)((longlong)resource_entry + 0x44) - *(float *)(resource_entry + 7);
            *(float *)(hash_index + 0xc) = position_x - position_y;
            *(uint64_t *)(hash_index + 0x14) = resource_entry[10];
            *(int32_t *)(hash_index + 0x24) = *(int32_t *)(resource_entry + 6);
            param_1 = *(uint64_t *)((longlong)resource_entry + 0x34);
            *(uint64_t *)(hash_index + 0x1c) = param_1;
            *(int32_t *)(hash_index + 0x28) = *(int32_t *)(resource_entry + 0x83);
            *(int32_t *)(hash_index + 0x2c) = *(int32_t *)((longlong)resource_entry + 0x14);
            *(int16_t *)(hash_index + 0x30) = *(int16_t *)(resource_entry + 0x86);
            *(int8_t *)(hash_index + 0x32) = *(int8_t *)((longlong)resource_entry + 0xb2);
        }
        output_count = output_count + 1;
        current_offset = current_offset + 8;
        if (output_count == *(int *)(engine_context + 0x1aa0)) {
            resource_count = (int)loop_counter;
            if (*(ulonglong *)(output_buffer + 2) != loop_counter) {
                resource_count = *output_buffer + -1;
            }
            FUN_18011da00(param_1, *(int *)(engine_context + 0x2e28) * 0x60 + resource_count);
            current_offset = loop_counter;
            if (*(int *)(engine_context + 0x2e28) != (int)loop_counter) {
                do {
                    resource_offset = *(longlong *)(engine_context + 0x2e30);
                    callback_offset = *(longlong *)(current_offset + resource_offset);
                    string_match = strstr(callback_offset, &global_config_3336_ptr);
                    if (string_match != 0) {
                        callback_offset = string_match;
                    }
                    temp_result = FUN_180122210(extra_output, &global_config_3384_ptr, *format_params, callback_offset);
                    resource_count = *(int *)(current_offset + 0x24 + resource_offset);
                    if ((resource_count != 0) && (resource_count != 0x11111111)) {
                        temp_result = FUN_180122210(temp_result, &global_config_3360_ptr, (int)*(float *)(current_offset + 0x1c + resource_offset),
                                                   (int)*(float *)(current_offset + 0x20 + resource_offset));
                        FUN_180122210(temp_result, &global_config_3416_ptr, *(int32_t *)(current_offset + 0x24 + resource_offset));
                    }
                    position_x = *(float *)(current_offset + 0xc + resource_offset);
                    if (((position_x != 0.0) || (*(float *)(current_offset + 0x10 + resource_offset) != 0.0)) ||
                       (*(int *)(current_offset + 0x24 + resource_offset) == 0x11111111)) {
                        FUN_180122210(position_x, &global_config_3400_ptr, (int)position_x, (int)*(float *)(current_offset + 0x10 + resource_offset));
                    }
                    position_x = *(float *)(current_offset + 0x14 + resource_offset);
                    hash_index = (ulonglong)(uint)position_x;
                    if ((position_x != 0.0) || (*(float *)(current_offset + 0x18 + resource_offset) != 0.0)) {
                        hash_index = FUN_180122210(hash_index, &global_config_3456_ptr, (int)position_x,
                                                  (int)*(float *)(current_offset + 0x18 + resource_offset));
                    }
                    temp_result = FUN_180122210(hash_index, &global_config_3440_ptr, *(int8_t *)(current_offset + 0x32 + resource_offset));
                    resource_count = *(int *)(current_offset + 0x28 + resource_offset);
                    if (resource_count != 0) {
                        texture_index = *(short *)(current_offset + 0x30 + resource_offset);
                        if (texture_index == -1) {
                            temp_result = FUN_180122210(temp_result, &global_config_3496_ptr);
                        }
                        else {
                            temp_result = FUN_180122210(temp_result, &global_config_3472_ptr, resource_count, (int)texture_index);
                        }
                        if (*(int *)(current_offset + 0x2c + resource_offset) != 0) {
                            temp_result = FUN_180122210(temp_result, &global_config_3512_ptr);
                        }
                    }
                    FUN_180122210(temp_result, &system_buffer_cc18);
                    current_uint = (int)loop_counter + 1;
                    loop_counter = (ulonglong)current_uint;
                    current_offset = current_offset + 0x38;
                } while (current_uint != *(uint *)(engine_context + 0x2e28));
            }
            return;
        }
    } while( true );
}

// 格式化资源数据输出
void format_resource_data_output(int32_t output_buffer)
{
    short texture_index;
    longlong resource_offset;
    longlong string_match;
    int resource_count;
    longlong engine_context;
    uint current_uint;
    ulonglong current_offset;
    uint64_t *format_params;
    int *output_ptr;
    longlong context_ptr;
    int32_t temp_result;
    float position_x;
    uint64_t temp_output;
    
    resource_count = (int)current_offset;
    if (*(ulonglong *)(output_ptr + 2) != current_offset) {
        resource_count = *output_ptr + -1;
    }
    FUN_18011da00(output_buffer, *(int *)(context_ptr + 0x2e28) * 0x60 + resource_count);
    current_offset = current_offset;
    
    // 格式化输出资源数据
    if (*(int *)(context_ptr + 0x2e28) != (int)current_offset) {
        do {
            resource_offset = *(longlong *)(context_ptr + 0x2e30);
            string_match = *(longlong *)(current_offset + resource_offset);
            resource_offset = strstr(string_match, &global_config_3336_ptr);
            if (resource_offset != 0) {
                string_match = resource_offset;
            }
            temp_result = FUN_180122210(temp_output, &global_config_3384_ptr, *format_params, string_match);
            resource_count = *(int *)(current_offset + 0x24 + resource_offset);
            if ((resource_count != 0) && (resource_count != 0x11111111)) {
                temp_result = FUN_180122210(temp_result, &global_config_3360_ptr, (int)*(float *)(current_offset + 0x1c + resource_offset),
                                          (int)*(float *)(current_offset + 0x20 + resource_offset));
                FUN_180122210(temp_result, &global_config_3416_ptr, *(int32_t *)(current_offset + 0x24 + resource_offset));
            }
            position_x = *(float *)(current_offset + 0xc + resource_offset);
            if (((position_x != 0.0) || (*(float *)(current_offset + 0x10 + resource_offset) != 0.0)) ||
               (*(int *)(current_offset + 0x24 + resource_offset) == 0x11111111)) {
                FUN_180122210(position_x, &global_config_3400_ptr, (int)position_x, (int)*(float *)(current_offset + 0x10 + resource_offset));
            }
            position_x = *(float *)(current_offset + 0x14 + resource_offset);
            if ((position_x != 0.0) || (*(float *)(current_offset + 0x18 + resource_offset) != 0.0)) {
                position_x = (float)FUN_180122210(position_x, &global_config_3456_ptr, (int)position_x,
                                             (int)*(float *)(current_offset + 0x18 + resource_offset));
            }
            temp_result = FUN_180122210(position_x, &global_config_3440_ptr, *(int8_t *)(current_offset + 0x32 + resource_offset));
            resource_count = *(int *)(current_offset + 0x28 + resource_offset);
            if (resource_count != 0) {
                texture_index = *(short *)(current_offset + 0x30 + resource_offset);
                if (texture_index == -1) {
                    temp_result = FUN_180122210(temp_result, &global_config_3496_ptr);
                }
                else {
                    temp_result = FUN_180122210(temp_result, &global_config_3472_ptr, resource_count, (int)texture_index);
                }
                if (*(int *)(current_offset + 0x30 + resource_offset) != 0) {
                    temp_result = FUN_180122210(temp_result, &global_config_3512_ptr);
                }
            }
            FUN_180122210(temp_result, &system_buffer_cc18);
            current_uint = (int)current_offset + 1;
            current_offset = (ulonglong)current_uint;
            current_offset = current_offset + 0x38;
        } while (current_uint != *(uint *)(context_ptr + 0x2e28));
    }
    return;
}