#!/bin/bash

# 网络函数美化脚本
# 用于批量重命名05_networking.c中的FUN_函数

INPUT_FILE="05_networking.c"
TEMP_FILE="${INPUT_FILE}.tmp"

# 函数映射表
declare -A function_mapping=(
    ["FUN_18085b920"]="GetNetworkBufferSize"
    ["FUN_1808d3990"]="GetNetworkCurrentChar"
    ["FUN_1808cad80"]="ProcessNetworkStackData"
    ["FUN_1808ca940"]="ProcessNetworkPacketTransmission"
    ["FUN_1808b8950"]="ValidateNetworkConnectionIndex"
    ["FUN_1808bc010"]="CheckNetworkConnectionHandle"
    ["FUN_1808626e0"]="ProcessNetworkConnectionStatus"
    ["FUN_18085ea80"]="ValidateNetworkConnectionData"
    ["FUN_1808caa20"]="ProcessNetworkBufferData"
    ["FUN_180868330"]="ValidateNetworkConnectionPointer"
    ["FUN_1808cc190"]="ProcessNetworkConnectionTransfer"
    ["FUN_1808d6650"]="ValidateNetworkBufferIndex"
    ["FUN_180868970"]="CheckNetworkConnectionData"
    ["FUN_180860480"]="ProcessNetworkConnectionTransferEx"
    ["FUN_1808ccc40"]="ValidateNetworkTransferStatus"
    ["FUN_1808d6410"]="ProcessNetworkDataTransmission"
    ["FUN_1808d84d0"]="ValidateNetworkConnectionTransfer"
    ["FUN_1808cc000"]="ProcessNetworkConnectionTransferEx2"
    ["FUN_18085ba10"]="ValidateNetworkBufferCapacity"
    ["FUN_180856ec0"]="ProcessNetworkConnectionTransferEx3"
    ["FUN_1808d3ee0"]="ValidateNetworkConnectionTransferEx"
    ["FUN_180862080"]="ProcessNetworkConnectionTransferEx4"
    ["FUN_18085d7f0"]="InitializeNetworkSecurityContext"
    ["FUN_18085bb20"]="ProcessNetworkSecurityData"
    ["FUN_1808bef40"]="ProcessNetworkConnectionHandle"
    ["FUN_180868800"]="ValidateNetworkConnectionPointerEx"
    ["FUN_1808ca6f0"]="ValidateNetworkConnectionState"
    ["FUN_18085ff70"]="ValidateNetworkConnectionStateEx"
    ["FUN_180867d60"]="ProcessNetworkConnectionStateTransfer"
    ["FUN_180865800"]="ProcessNetworkConnectionStatusBuffer"
    ["FUN_180863bd0"]="ValidateNetworkConnectionContext"
    ["FUN_180864780"]="ValidateNetworkConnectionContextEx"
    ["FUN_18085f440"]="ValidateNetworkConnectionStateEx2"
    ["FUN_180853c50"]="GetNetworkConnectionStatus"
    ["FUN_1808d2430"]="UpdateNetworkConnectionTimestamp"
    ["FUN_18085f0e0"]="InitializeNetworkConnectionData"
    ["FUN_1808d73b0"]="ProcessNetworkDataBuffer"
    ["FUN_180861a70"]="ProcessNetworkConnectionPacketEx"
    ["FUN_1808c2150"]="ValidateNetworkConnectionTransferEx3"
    ["FUN_180853d20"]="ValidateNetworkConnectionTransferEx4"
    ["FUN_1808c1410"]="ProcessNetworkConnectionTransferEx5"
    ["FUN_1808650a0"]="ValidateNetworkConnectionTransferEx6"
    ["FUN_18085f670"]="ValidateNetworkConnectionTransferEx7"
    ["FUN_18085f2b0"]="ValidateNetworkConnectionTransferEx8"
    ["FUN_180863a80"]="ProcessNetworkConnectionTransferEx9"
    ["FUN_18085f340"]="ValidateNetworkConnectionTransferEx10"
    ["FUN_1808d0760"]="ProcessNetworkConnectionDataTransfer"
    ["FUN_1808cee30"]="ProcessNetworkConnectionDataTransferEx"
)

# 复制原文件
cp "$INPUT_FILE" "$TEMP_FILE"

# 执行函数名替换
for old_name in "${!function_mapping[@]}"; do
    new_name="${function_mapping[$old_name]}"
    sed -i "s/$old_name/$new_name/g" "$TEMP_FILE"
done

# 替换文件
mv "$TEMP_FILE" "$INPUT_FILE"

echo "网络函数美化完成"