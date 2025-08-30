#!/bin/bash

# 脚本：美化00_data_definitions.h中的十六进制地址常量
# 将硬编码的十六进制地址替换为语义化宏定义

# 定义常量映射关系
declare -A constants_map=(
    # 字符串处理相关地址
    ["0x180d48d24"]="SYSTEM_AUDIO_BUFFER_ADDR"
    ["0x180d4a0a8"]="SYSTEM_FLOAT_ARRAY_ADDR"
    ["0x180d4a0a4"]="SYSTEM_FLOAT_ARRAY_ADDR_2"
    ["0x180d4a0a0"]="SYSTEM_FLOAT_ARRAY_ADDR_3"
    ["0x180c2e880"]="SYSTEM_FLOAT_ARRAY_END_ADDR"
    ["0x180be5774"]="SYSTEM_STRING_LENGTH_COUNTER_ADDR"
    ["0x180be5b68"]="SYSTEM_STRING_LENGTH_COUNTER_ALT_ADDR"
    ["0x180be5770"]="SYSTEM_PERFORMANCE_COUNTER_ADDR"
    ["0x180c2ea70"]="SYSTEM_MODULE_DATA_ADDR"
    ["0x180c2e040"]="SYSTEM_GLOBAL_DATA_ADDR"
    
    # 字符串缓冲区相关地址
    ["0x180a04ee3"]="STRING_BUFFER_OFFSET_1"
    ["0x180a12dff"]="STRING_BUFFER_OFFSET_2"
    ["0x180a0794b"]="STRING_BUFFER_OFFSET_3"
    ["0x180a0ee2f"]="STRING_BUFFER_OFFSET_4"
    ["0x180a03a83"]="STRING_BUFFER_OFFSET_5"
    
    # 线程相关地址
    ["0x180768051"]="THREAD_CLEANUP_FUNCTION_1"
    ["0x180768059"]="THREAD_CLEANUP_FUNCTION_2"
    
    # 浮点常量
    ["1.5258789e-05"]="FLOAT_CONVERSION_FACTOR"
    
    # 硬编码数值
    ["0xebc"]="SYSTEM_CONSTANT_1"
    ["0x1f"]="SYSTEM_CONSTANT_2"
    ["0x3f"]="SYSTEM_CONSTANT_3"
    ["0x1fc"]="SYSTEM_CONSTANT_4"
    
    # 系统偏移量
    ["0x180000000"]="SYSTEM_BASE_ADDRESS"
    ["0x170"]="SYSTEM_MODULE_OFFSET_1"
    ["0x110"]="SYSTEM_MODULE_OFFSET_2"
    ["0x1cc"]="SYSTEM_MODULE_OFFSET_3"
    ["0x8"]="SYSTEM_POINTER_OFFSET"
)

# 备份原文件
cp /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h.backup

# 临时文件
temp_file="/tmp/00_data_definitions.h.temp"

# 首先添加新的宏定义到文件中
{
    # 读取文件到第一个常量定义之前
    awk '/^\/\/ 系统内存地址常量$/{exit} {print}' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
    
    # 添加新的常量定义
    echo "// 新增语义化常量定义 - 美化硬编码十六进制常量"
    echo "#define SYSTEM_FLOAT_ARRAY_ADDR_2 0x180d4a0a4"
    echo "#define SYSTEM_FLOAT_ARRAY_ADDR_3 0x180d4a0a0"
    echo "#define SYSTEM_GLOBAL_DATA_ADDR 0x180c2e040"
    echo "#define STRING_BUFFER_OFFSET_1 0x180a04ee3"
    echo "#define STRING_BUFFER_OFFSET_2 0x180a12dff"
    echo "#define STRING_BUFFER_OFFSET_3 0x180a0794b"
    echo "#define STRING_BUFFER_OFFSET_4 0x180a0ee2f"
    echo "#define STRING_BUFFER_OFFSET_5 0x180a03a83"
    echo "#define THREAD_CLEANUP_FUNCTION_1 0x180768051"
    echo "#define THREAD_CLEANUP_FUNCTION_2 0x180768059"
    echo "#define FLOAT_CONVERSION_FACTOR 1.5258789e-05"
    echo "#define SYSTEM_CONSTANT_1 0xebc"
    echo "#define SYSTEM_CONSTANT_2 0x1f"
    echo "#define SYSTEM_CONSTANT_3 0x3f"
    echo "#define SYSTEM_CONSTANT_4 0x1fc"
    echo "#define SYSTEM_BASE_ADDRESS 0x180000000"
    echo "#define SYSTEM_MODULE_OFFSET_1 0x170"
    echo "#define SYSTEM_MODULE_OFFSET_2 0x110"
    echo "#define SYSTEM_MODULE_OFFSET_3 0x1cc"
    echo "#define SYSTEM_POINTER_OFFSET 0x8"
    echo ""
    
    # 读取剩余部分
    awk '/^\/\/ 系统内存地址常量$/{found=1} found{print}' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
} > "$temp_file"

# 替换文件
mv "$temp_file" /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h

# 替换硬编码地址为宏定义
for hex_value in "${!constants_map[@]}"; do
    macro_name="${constants_map[$hex_value]}"
    
    # 使用sed替换文件中的硬编码地址
    sed -i "s/$hex_value/$macro_name/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
done

echo "美化完成：已将硬编码十六进制地址替换为语义化宏定义"