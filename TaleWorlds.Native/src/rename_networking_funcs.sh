#!/bin/bash

# 05_networking.c 函数重命名脚本
# 用于重命名 func_0x 开头的函数

echo "开始重命名 05_networking.c 中的函数..."

# 创建临时文件
temp_file="/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking_temp.c"
input_file="/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c"

# 复制原文件到临时文件
cp "$input_file" "$temp_file"

# 定义函数重命名映射
declare -A function_mapping=(
    ["func_0x00018084de30"]="GetNetworkCharAtPosition"
    ["func_0x00018085c9a0"]="InitializeNetworkConnectionParameters"
    ["func_0x0001808601d0"]="GetNetworkConnectionStatus"
    ["func_0x00018085f3d0"]="ReleaseNetworkContextPointer"
    ["func_0x00018085df50"]="ResetNetworkConnectionModule"
    ["func_0x0001808b6360"]="InitializeNetworkConnectionFlags"
    ["func_0x0001808b8910"]="ProcessNetworkPrimaryStatus"
    ["func_0x0001808b62c0"]="HandleNetworkConnectionDataTransfer"
    ["func_0x0001808c92a0"]="ProcessNetworkConnectionPacket"
    ["func_0x00018088c6e0"]="ValidateNetworkConnectionEntry"
    ["func_0x0001808d7290"]="ValidateNetworkSecurityParameter"
    ["func_0x0001808cf130"]="InitializeNetworkConnectionEndpoint"
    ["func_0x00018084e8f0"]="ProcessNetworkConnectionLookup"
)

# 执行函数重命名
for func_name in "${!function_mapping[@]}"; do
    new_name="${function_mapping[$func_name]}"
    echo "重命名函数: $func_name -> $new_name"
    
    # 使用sed进行替换
    sed -i "s/$func_name/$new_name/g" "$temp_file"
done

# 检查是否还有未重命名的函数
remaining_funcs=$(grep -n "func_0x" "$temp_file" | head -10)

if [ -n "$remaining_funcs" ]; then
    echo "警告: 仍有未重命名的函数:"
    echo "$remaining_funcs"
else
    echo "所有函数已成功重命名"
fi

# 替换原文件
mv "$temp_file" "$input_file"

echo "函数重命名完成"