#!/bin/bash

# 批量替换00_data_definitions.h文件中的DAT_变量为语义化名称

# 定义文件路径
FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h"

# 创建备份
cp "$FILE_PATH" "$FILE_PATH.backup.$(date +%Y%m%d_%H%M%S)"

# DAT_变量替换映射
declare -A DAT_REPLACEMENTS=(
    # 系统配置相关
    ["DAT_180c8f020"]="SystemConfigurationDataBuffer"
    ["DAT_180c967c8"]="SystemInitializationCounter"
    ["DAT_180d4913c"]="SystemInitializationFlag"
    ["DAT_1ac76f654"]="NetworkRequestStatusCounter"
    
    # 内存管理相关
    ["DAT_1dc4331ba"]="MemoryAllocationCounter"
    
    # 添加更多DAT_变量的映射...
)

# 执行替换
for old_var in "${!DAT_REPLACEMENTS[@]}"; do
    new_var="${DAT_REPLACEMENTS[$old_var]}"
    echo "替换 $old_var -> $new_var"
    sed -i "s/\b${old_var}\b/${new_var}/g" "$FILE_PATH"
done

echo "DAT_变量替换完成"