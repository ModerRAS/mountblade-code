#!/bin/bash

# 02_core_engine.c 第二轮变量名美化脚本
# 用于处理第一轮未覆盖的变量名

# 第二轮变量名替换
declare -A VAR_REPLACEMENTS=(
    # 继续处理剩余的未美化变量名
    ["engine_unsigned_pointer_"]="engine_handle_"
    ["g_unknown_"]="g_global_"
    ["_g_data_"]="g_data_"
    ["g_unknown_180a3c3e0"]="g_global_null_handler"
    ["g_unknown_18098bcb0"]="g_global_default_handler"
    ["g_data_180c8ed60"]="g_data_resource_counter"
)

# 应用第二轮变量名替换
echo "开始第二轮美化变量名..."
for pattern in "${!VAR_REPLACEMENTS[@]}"; do
    replacement="${VAR_REPLACEMENTS[$pattern]}"
    echo "替换 $pattern -> $replacement"
    sed -i "s/\b$pattern\([0-9a-fA-F]*\)\b/$replacement\1/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
done

echo "第二轮美化完成"