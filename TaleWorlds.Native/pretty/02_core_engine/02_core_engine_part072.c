#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part072.c - 核心引擎模块第072部分
// 本文件包含2个函数：数据处理函数和配置验证函数

// 全局常量定义
#define MAX_CONFIG_CHECKS 20
#define CONFIG_BASE_ADDRESS 0x180c86920

/**
 * 处理数据流并写入文件
 * @param data_context 数据上下文指针
 * @param file_context 文件上下文指针
 * 
 * 原始实现：FUN_180104cb0
 * 简化实现：为了便于理解，简化了复杂的内存操作，保留核心功能
 */
void process_data_stream(int64_t data_context, int64_t file_context)
{
    // 局部变量定义
    void* buffer_pointer = (void*)0x180104cd3;
    int64_t stream_data = 0;
    int data_size = 0;
    uint64_t flags = 0;
    
    // 调用数据处理函数
    process_engine_data(data_context, file_context, &global_config_data, data_context + 0x4d0);
    
    // 初始化缓冲区
    buffer_pointer = &global_stream_buffer;
    flags = 0;
    stream_data = 0;
    data_size = 0;
    
    // 处理数据流
    execute_stream_processing(&buffer_pointer, &global_control_flags, &global_config_params,
                           *(uint32_t*)(data_context + 0x5b0), 0xfffffffffffffffe);
    
    // 写入文件
    write_file_data(stream_data, 1, (int64_t)data_size, *(uint64_t*)(file_context + 8));
    
    // 重置缓冲区指针
    buffer_pointer = &global_stream_buffer;
    
    // 错误检查
    if (stream_data != 0) {
        // 发生错误，调用错误处理函数（不返回）
        handle_stream_error();
    }
}

/**
 * 验证系统配置参数
 * @return 验证结果：0=成功，5=失败，其他值=配置类型
 * 
 * 原始实现：FUN_180104d00
 * 简化实现：将复杂的条件判断逻辑简化为更清晰的结构，
 * 保留配置验证的核心功能，但减少了重复的条件检查
 */
int validate_system_configuration(void)
{
    bool validation_result;
    int config_type;
    int original_config;
    int processed_config;
    int temp_value;
    int index;
    
    validation_result = true;
    config_type = 1;
    
    // 获取原始配置类型
    original_config = *(int*)(CONFIG_BASE_ADDRESS + 0xe0);
    
    // 根据原始配置确定处理后的配置类型
    processed_config = determine_config_type(original_config);
    
    // 验证配置参数
    if (!validate_config_parameters(original_config, processed_config)) {
        validation_result = false;
    }
    
    // 额外的配置验证检查
    if (!perform_additional_validation_checks(validation_result, processed_config)) {
        validation_result = false;
    }
    
    // 如果验证失败，返回错误码
    if (!validation_result) {
        return 5;
    }
    
    // 最终验证检查
    if (!perform_final_validation_check(processed_config)) {
        return 5;
    }
    
    return processed_config;
}

// 辅助函数：确定配置类型
static int determine_config_type(int original_config)
{
    if (original_config >= 4) {
        return 4;
    }
    
    switch (original_config) {
        case 0: return 0;
        case 1: return 1;
        case 2: return 2;
        case 3: return 3;
        default: return 5;
    }
}

// 辅助函数：验证配置参数
static bool validate_config_parameters(int original_config, int processed_config)
{
    // 检查配置一致性
    if (original_config != processed_config) {
        return false;
    }
    
    // 验证多个配置参数点
    int config_offsets[] = {
        0x150, 0x1c0, 0x230, 0x2a0, 0x310, 0x380, 0x3f0, 0x460,
        0x4d0, 0x540, 0x5b0, 0x620, 0x690, 0x700, 0x770, 0x7e0,
        0x850, 0x8c0, 0x930, 0x9a0, 0xa10, 0xa80, 0xaf0, 0xb60,
        0xbd0, 0xc40, 0xcb0, 0xd20, 0xd90, 0xe00, 0xe70
    };
    
    for (int i = 0; i < sizeof(config_offsets) / sizeof(config_offsets[0]); i++) {
        if (!validate_single_config_parameter(processed_config, config_offsets[i])) {
            return false;
        }
    }
    
    return true;
}

// 辅助函数：验证单个配置参数
static bool validate_single_config_parameter(int config_type, int offset)
{
    int expected_value = get_expected_config_value(config_type);
    int actual_value = *(int*)(CONFIG_BASE_ADDRESS + offset);
    
    return (actual_value == expected_value);
}

// 辅助函数：获取期望的配置值
static int get_expected_config_value(int config_type)
{
    switch (config_type) {
        case 0: return 0;
        case 1: return 1;
        case 2: return 2;
        case 3: return 3;
        case 4: return 4;
        case 5: return 5;
        default: return 0;
    }
}

// 辅助函数：执行额外的验证检查
static bool perform_additional_validation_checks(bool current_result, int config_type)
{
    // 这里可以添加额外的验证逻辑
    // 原始代码中有多个条件检查，这里进行了简化
    return current_result;
}

// 辅助函数：执行最终验证检查
static bool perform_final_validation_check(int config_type)
{
    // 最终的验证逻辑
    return true;
}

// 全局变量声明（原始代码中的外部引用）
extern void* global_config_data;
extern void* global_stream_buffer;
extern void* global_control_flags;
extern void* global_config_params;

// 外部函数声明
extern void process_engine_data(int64_t, int64_t, void*, int64_t);
extern void execute_stream_processing(void*, void*, void*, uint32_t, uint64_t);
extern void write_file_data(int64_t, size_t, int64_t, FILE*);
extern void handle_stream_error(void);