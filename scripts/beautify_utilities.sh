#!/bin/bash

# 美化06_utilities.c文件中的硬编码十六进制值
# 这是简化实现，主要处理硬编码值的语义化替换

# 定义需要美化的硬编码值和对应的语义化常量
declare -A replacements=(
    ["0x8c0"]="UTILITY_THREAD_STORAGE_CLEANUP_OFFSET"
    ["0x898"]="UTILITY_THREAD_STORAGE_STATUS_OFFSET"
    ["0x9a0"]="UTILITY_THREAD_STORAGE_DATA_OFFSET"
    ["0x9a8"]="UTILITY_THREAD_STORAGE_STATE_OFFSET"
)

# 遍历所有替换规则
for hex_value in "${!replacements[@]}"; do
    constant_name="${replacements[$hex_value]}"
    
    # 检查常量是否已经定义
    if ! grep -q "#define $constant_name" /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c; then
        # 在文件头部添加常量定义
        sed -i "/^#define UTILITY_WORD_MASK_FFffffc00000/a\\
#define $constant_name $hex_value  // $(echo $constant_name | sed 's/_/ /g' | sed 's/OFFSET/offset/g' | sed 's/UTILITY/Utility/g')" /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
        echo "添加常量定义: #define $constant_name $hex_value"
    fi
    
    # 替换代码中的硬编码值
    sed -i "s/UTILITY_RESOURCE_BUFFER + $hex_value/UTILITY_RESOURCE_BUFFER + $constant_name/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
    echo "替换硬编码值: $hex_value -> $constant_name"
done

echo "06_utilities.c文件硬编码值美化完成"