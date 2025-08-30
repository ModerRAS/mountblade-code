#!/bin/bash

# 网络系统代码美化脚本
# 用于替换硬编码的十六进制常量为语义化宏定义

# 定义要美化的常量替换规则
declare -A replacements=(
    # 从代码中发现的未语义化常量
    ["0x29c"]="NETWORK_SOCKET_STATE_SIZE_OFFSET"
    ["0x5b"]="NETWORK_SOCKET_CONTROL_OFFSET"
    ["0x5e"]="NETWORK_SOCKET_HANDSHAKE_TYPE_OFFSET"
    ["0x6b"]="NETWORK_SOCKET_CONNECTION_DATA_OFFSET"
    ["-0x21"]="NETWORK_SOCKET_DATA_PTR_OFFSET_NEG"
    ["-0x19"]="NETWORK_NETWORK_SOCKET_BUFFER_OFFSET_NEG"
    ["-0x39"]="NETWORK_SOCKET_TIMEOUT_OFFSET_NEG"
    ["-0x35"]="NETWORK_SOCKET_PORT_OFFSET_NEG"
    ["-0x33"]="NETWORK_SOCKET_ERROR_OFFSET_NEG"
    ["0x290"]="NETWORK_PORT_EXTENDED_OFFSET"
    ["0x8c"]="NETWORK_CONTEXT_DATA_OFFSET"
    ["0x23"]="NETWORK_CONNECTION_EXTENDED_OFFSET"
    ["0x3f8"]="NETWORK_SOCKET_CONTEXT_OFFSET"
    ["0x2d8"]="NETWORK_BUFFER_EXTENDED_OFFSET"
    ["0x57"]="NETWORK_SOCKET_SESSION_OFFSET"
    ["0x3fffffff"]="NETWORK_MAX_VALID_SIZE"
    ["0x62"]="NETWORK_LOG_TYPE_INFO"
    ["0x76"]="NETWORK_LOG_TYPE_DEBUG"
    ["0xc6"]="NETWORK_LOG_TYPE_ERROR"
    ["0x2a"]="NETWORK_STACK_OFFSET_2A"
    ["0x2b"]="NETWORK_STACK_OFFSET_2B"
    ["0x2d"]="NETWORK_STACK_OFFSET_2D"
    ["0x2e"]="NETWORK_STACK_OFFSET_2E"
    ["0x51"]="NETWORK_STACK_OFFSET_51"
    ["0x2f"]="NETWORK_CONNECTION_DATA_OFFSET_2F"
    ["0x0"]="NETWORK_CONNECTION_EXTENDED_OFFSET0"
    ["0x8"]="NETWORK_CONNECTION_EXTENDED_OFFSET8"
    ["0x378"]="NETWORK_SPECIAL_OFFSET_AUDIO_RENDER"
    ["0x77c"]="NETWORK_SPECIAL_OFFSET_AUDIO_MIXER"
    ["0x7b8"]="NETWORK_SPECIAL_OFFSET_AUDIO_BUFFER"
    ["0x6c"]="NETWORK_SPECIAL_OFFSET_AUDIO_CONFIG"
    ["0x5f"]="NETWORK_SOCKET_DATA_OFFSET"
)

# 遍历所有替换规则
for hex_value in "${!replacements[@]}"; do
    macro_name="${replacements[$hex_value]}"
    
    # 首先检查宏定义是否已存在
    if ! grep -q "#define $macro_name" /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c; then
        # 添加宏定义到文件开头
        sed -i "/^#include \"TaleWorlds.Native.Split.h\"/a\\
// 新增语义化宏定义 - 美化硬编码十六进制常量\\
#define $macro_name $hex_value" /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
        echo "添加宏定义: $macro_name = $hex_value"
    fi
    
    # 替换代码中的硬编码值（仅在非注释和非宏定义行中）
    sed -i "s/\([^a-zA-Z0-9_]\)$hex_value\([^a-zA-Z0-9_]\)/\1$macro_name\2/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
    sed -i "s/^$hex_value\([^a-zA-Z0-9_]\)/$macro_name\1/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
    sed -i "s/\([^a-zA-Z0-9_]\)$hex_value$/\1$macro_name/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
    echo "替换 $hex_value -> $macro_name"
done

echo "网络系统代码美化完成"