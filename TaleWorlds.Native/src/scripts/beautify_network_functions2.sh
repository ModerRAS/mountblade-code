#!/bin/bash

# 网络函数美化脚本第二部分
# 用于批量重命名05_networking.c中剩余的FUN_函数

INPUT_FILE="05_networking.c"
TEMP_FILE="${INPUT_FILE}.tmp"

# 函数映射表
declare -A function_mapping=(
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
    ["FUN_1808d5520"]="ProcessNetworkPacketTransfer"
    ["FUN_180864850"]="ValidateNetworkConnectionState"
    ["FUN_1808646a0"]="ValidateNetworkConnectionStateEx"
    ["FUN_1808bef40"]="ProcessNetworkConnectionHandle"
    ["FUN_180868800"]="ValidateNetworkConnectionPointerEx"
    ["FUN_180863bd0"]="ValidateNetworkConnectionContext"
    ["FUN_180864780"]="ValidateNetworkConnectionContextEx"
    ["FUN_180853230"]="InitializeNetworkConnectionTransfer"
    ["FUN_1808d5bd0"]="ProcessNetworkTransferData"
    ["FUN_18085c230"]="ValidateNetworkConnectionTransferEx2"
    ["FUN_1808d52a0"]="ValidateNetworkConnectionTransferEx3"
    ["FUN_1808d5da0"]="ProcessNetworkTransferContext"
    ["FUN_18085f440"]="ValidateNetworkConnectionStateEx2"
    ["FUN_180853c50"]="GetNetworkConnectionStatus"
    ["FUN_1808d2430"]="UpdateNetworkConnectionTimestamp"
    ["FUN_18085f0e0"]="InitializeNetworkConnectionData"
    ["FUN_1808d73b0"]="ProcessNetworkDataBuffer"
    ["FUN_180861a70"]="ProcessNetworkConnectionPacketEx"
    ["FUN_1808c2150"]="ValidateNetworkConnectionTransferEx4"
    ["FUN_180853d20"]="ValidateNetworkConnectionTransferEx5"
    ["FUN_1808c1410"]="ProcessNetworkConnectionTransferEx5"
    ["FUN_1808650a0"]="ValidateNetworkConnectionTransferEx6"
    ["FUN_18085f670"]="ValidateNetworkConnectionTransferEx7"
    ["FUN_18085f2b0"]="ValidateNetworkConnectionTransferEx8"
    ["FUN_180863a80"]="ProcessNetworkConnectionTransferEx9"
    ["FUN_18085f340"]="ValidateNetworkConnectionTransferEx10"
    ["FUN_1808d0760"]="ProcessNetworkConnectionDataTransfer"
    ["FUN_1808cee30"]="ProcessNetworkConnectionDataTransferEx"
    ["FUN_1808d2850"]="ProcessNetworkConnectionDataTransferEx2"
    ["FUN_1808b5060"]="ValidateNetworkConnectionHandleEx"
    ["FUN_1808d6e30"]="ValidateNetworkConnectionHandleEx2"
    ["FUN_1808d15f0"]="ProcessNetworkConnectionHandleEx3"
    ["FUN_180863b80"]="ValidateNetworkConnectionHandleEx4"
    ["FUN_1808d38d0"]="ValidateNetworkConnectionStateEx3"
    ["FUN_1808ca6f0"]="ValidateNetworkConnectionStateEx4"
    ["FUN_1808d7550"]="ValidateNetworkConnectionStateEx5"
    ["FUN_1808d0d90"]="ValidateNetworkConnectionStateEx6"
    ["FUN_1808d0490"]="ValidateNetworkConnectionStateEx7"
    ["FUN_1808b5030"]="ValidateNetworkConnectionHandleEx5"
    ["FUN_1808b3bc0"]="ValidateNetworkConnectionHandleEx6"
    ["FUN_18085e860"]="ValidateNetworkConnectionHandleEx7"
    ["FUN_1808bef80"]="ValidateNetworkConnectionHandleEx8"
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

echo "网络函数美化第二部分完成"