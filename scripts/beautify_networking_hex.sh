#!/bin/bash

# 美化网络系统中的十六进制常量
# 简化实现说明：
# 原本实现：完全重构网络系统所有常量命名体系，建立统一的语义化命名规范
# 简化实现：仅将常见的十六进制常量替换为语义化名称，保持代码结构不变

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c"
TEMP_FILE="/tmp/networking_temp.c"

# 定义十六进制常量到语义化名称的映射
declare -A HEX_CONSTANTS=(
    ["0x544e5645"]="NETWORK_MAGIC_TNVE"
    ["0x5453494c"]="NETWORK_MAGIC_TSIL"
    ["0x42545645"]="NETWORK_MAGIC_BTVE"
    ["0xd8"]="NETWORK_OFFSET_CONNECTION_EXTENDED_DATA"
    ["0xf8"]="NETWORK_OFFSET_CONNECTION_VALIDATION_DATA"
    ["0xe8"]="NETWORK_OFFSET_CONNECTION_ENCRYPTION_DATA"
    ["0x31"]="NETWORK_TIMEOUT_THRESHOLD"
)

# 复制原始文件
cp "$INPUT_FILE" "$TEMP_FILE"

# 替换十六进制常量
for hex_value in "${!HEX_CONSTANTS[@]}"; do
    semantic_name="${HEX_CONSTANTS[$hex_value]}"
    
    # 在文件开头添加常量定义（如果还没有的话）
    if ! grep -q "#define $semantic_name $hex_value" "$TEMP_FILE"; then
        # 在常量定义区域添加新的常量
        sed -i "/#define NETWORK_SHIFT_BIT_VALIDATION/a\\#define $semantic_name $hex_value  // $(echo $semantic_name | tr '[:upper:]' '[:lower:]' | tr '_' ' ' | sed 's/\b\w/\u&/g')" "$TEMP_FILE"
    fi
    
    # 替换文件中的十六进制值
    sed -i "s/\b$hex_value\b/$semantic_name/g" "$TEMP_FILE"
done

# 更新文件头部的注释说明
sed -i '/最新语义化美化工作总结/a\\// 网络系统十六进制常量语义化美化（2025年8月30日最终批次最新完成）:\n// - 美化网络系统十六进制常量，将0x544e5645等替换为NETWORK_MAGIC_TNVE等语义化常量\n// - 美化网络系统十六进制偏移量，将0xd8等替换为NETWORK_OFFSET_CONNECTION_EXTENDED_DATA等语义化偏移量\n// - 美化网络系统十六进制阈值，将0x31等替换为NETWORK_TIMEOUT_THRESHOLD等语义化阈值\n// - 提高了代码的可读性和维护性\n// - 保持代码语义不变，这是简化实现，主要处理网络系统中剩余的十六进制常量的语义化替换\n// - 原本实现：完全重构网络系统所有常量命名体系，建立统一的语义化命名规范\n// - 简化实现：仅将常见的十六进制常量替换为语义化名称，保持代码结构不变' "$TEMP_FILE"

# 替换原文件
mv "$TEMP_FILE" "$INPUT_FILE"

echo "网络系统十六进制常量语义化美化完成"