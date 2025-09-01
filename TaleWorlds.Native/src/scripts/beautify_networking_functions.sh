#!/bin/bash

# 网络函数美化脚本
# 用于批量重命名05_networking.c中的FUN_函数

# 定义一些常见的网络函数映射
declare -A function_mappings=(
    ["FUN_1808ca940"]="GetNetworkStatusFlag"
    ["FUN_180868330"]="ValidateNetworkConnection"
    ["FUN_1808cc190"]="ProcessNetworkPacketData"
    ["FUN_1808d6650"]="HandleNetworkBufferOperation"
    ["FUN_180868970"]="CheckNetworkConnectionState"
    ["FUN_180860480"]="ProcessNetworkConnectionRequest"
    ["FUN_1808ccc40"]="InitializeNetworkTransfer"
    ["FUN_1808d6410"]="ExecuteNetworkDataTransmission"
    ["FUN_1808d84d0"]="ValidateNetworkPacketHeader"
    ["FUN_1808cc000"]="CheckNetworkDataIntegrity"
    ["FUN_18085ba10"]="GetNetworkConnectionInfo"
    ["FUN_180856ec0"]="ProcessNetworkDataStream"
    ["FUN_1808d3ee0"]="ValidateNetworkChannel"
    ["FUN_180862080"]="SendNetworkPacket"
    ["FUN_1808626e0"]="GetNetworkSystemStatus"
    ["FUN_18085ea80"]="ProcessNetworkResponse"
)

# 遍历映射并替换
for fun_name in "${!function_mappings[@]}"; do
    new_name="${function_mappings[$fun_name]}"
    echo "替换 $fun_name 为 $new_name"
    sed -i "s/$fun_name/$new_name/g" TaleWorlds.Native/src/05_networking.c
done

echo "网络函数美化完成"