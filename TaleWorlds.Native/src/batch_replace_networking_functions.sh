#!/bin/bash

# 批量替换网络文件中的FUN_函数
cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 定义函数映射
declare -A function_mapping=(
    ["FUN_1808b79f0"]="ValidateNetworkConnectionInfo"
    ["FUN_18085e990"]="ProcessNetworkConnectionValidation"
    ["FUN_180867990"]="SendNetworkDataPacket"
    ["FUN_1808d5bd0"]="InitializeNetworkPacket"
    ["FUN_1808d74e0"]="FinalizeNetworkPacket"
    ["FUN_180860480"]="InitializeNetworkConnection"
    ["FUN_180863930"]="ProcessNetworkConnectionSetup"
    ["FUN_1808c7260"]="ProcessNetworkPacketTransfer"
    ["FUN_1808592c0"]="HandleNetworkDataProcessing"
    ["FUN_1808d2430"]="ValidateNetworkConnectionState"
    ["FUN_1808ca6f0"]="InitializeNetworkSubsystem"
    ["FUN_18085f670"]="ConfigureNetworkConnection"
    ["FUN_1808d9380"]="SetupNetworkProtocolHandler"
    ["FUN_1808624a0"]="FinalizeNetworkConnection"
)

# 遍历所有映射并替换
for old_func in "${!function_mapping[@]}"; do
    new_func="${function_mapping[$old_func]}"
    echo "替换 $old_func -> $new_func"
    sed -i "s/$old_func/$new_func/g" 05_networking.c
done

echo "批量替换完成"