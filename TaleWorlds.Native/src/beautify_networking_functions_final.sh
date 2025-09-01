#!/bin/bash

# 批量替换05_networking.c中的FUN_函数为语义化名称

INPUT_FILE="05_networking.c"
TEMP_FILE="${INPUT_FILE}.tmp"

# 创建函数名映射
declare -A function_mapping=(
    ["FUN_1808624a0"]="GetNetworkHandleStatus"
    ["FUN_180860480"]="ProcessNetworkConnectionValidation"
    ["FUN_1808ccc40"]="CheckNetworkSystemAvailability"
    ["FUN_1808d6410"]="ValidateNetworkConnectionParameters"
    ["FUN_1808d84d0"]="ProcessNetworkDataValidation"
    ["FUN_1808cc000"]="HandleNetworkDataTransfer"
    ["FUN_180856ec0"]="ProcessNetworkPacketTransmission"
    ["FUN_1808d3ee0"]="ValidateNetworkPacketIntegrity"
    ["FUN_180862080"]="UpdateNetworkConnectionStatus"
    ["FUN_1808616bc"]="NetworkConnectionErrorHandler"
    ["FUN_18085ba10"]="GetNetworkConnectionFlags"
    ["FUN_1808c7260"]="SetNetworkConnectionParameters"
    ["FUN_180863bd0"]="CheckNetworkConnectionState"
    ["FUN_180864780"]="ValidateNetworkConnectionHandle"
    ["FUN_180853230"]="ProcessNetworkConnectionRequest"
    ["FUN_1808d5bd0"]="GetNetworkContextData"
    ["FUN_18085c230"]="ProcessNetworkPacketData"
    ["FUN_1808d52a0"]="HandleNetworkPacketTransfer"
    ["FUN_1808d5da0"]="FinalizeNetworkConnection"
    ["FUN_18085d7f0"]="InitializeNetworkSecurityContext"
    ["FUN_18085bb20"]="SetupNetworkConnectionParameters"
    ["FUN_1808bef40"]="ProcessNetworkConnectionCallback"
    ["FUN_180868800"]="GetNetworkConnectionFlagsEx"
    ["FUN_180864850"]="ValidateNetworkConnectionContextEx"
    ["FUN_1808646a0"]="CheckNetworkConnectionAvailability"
)

# 复制原文件到临时文件
cp "$INPUT_FILE" "$TEMP_FILE"

# 批量替换函数名
for old_name in "${!function_mapping[@]}"; do
    new_name="${function_mapping[$old_name]}"
    echo "替换 $old_name -> $new_name"
    sed -i "s/$old_name/$new_name/g" "$TEMP_FILE"
done

# 替换文件
mv "$TEMP_FILE" "$INPUT_FILE"

echo "05_networking.c 文件中的 FUN_ 函数名替换完成"