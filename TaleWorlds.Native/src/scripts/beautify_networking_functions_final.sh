#!/bin/bash

# 网络系统函数名美化脚本
# 用于批量替换05_networking.c文件中的FUN_函数名为有意义的名称

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 定义函数名映射关系
declare -A function_map=(
    # 从注释中提取的已重命名的函数
    ["FUN_1808624a0"]="ProcessNetworkConnectionStateManager"
    ["FUN_1808616bc"]="NetworkConnectionErrorHandler"
    ["FUN_180862080"]="ProcessNetworkConnectionCleanup"
    ["FUN_18085ba10"]="GetNetworkConnectionFlags"
    ["FUN_1808c7260"]="ValidateNetworkConnectionStatus"
    ["FUN_180856ec0"]="InitializeNetworkConnectionBuffer"
    ["FUN_1808d3ee0"]="ValidateNetworkConnectionData"
    ["FUN_1808d5520"]="ProcessNetworkPacketTransfer"
    ["FUN_180864850"]="GetNetworkConnectionErrorCode"
    ["FUN_1808646a0"]="ResetNetworkConnectionError"
    ["FUN_180863bd0"]="InitializeNetworkSecurityBuffer"
    ["FUN_180864780"]="ValidateNetworkSecurityContext"
    ["FUN_180853230"]="ProcessNetworkAuthentication"
    ["FUN_1808d5bd0"]="GetNetworkSecurityContext"
    ["FUN_18085c230"]="ValidateNetworkPacketData"
    ["FUN_1808d52a0"]="ProcessNetworkDataValidation"
    ["FUN_1808d5da0"]="FinalizeNetworkSecurityCheck"
    ["FUN_18085f0e0"]="InitializeNetworkConnection"
    ["FUN_1808538a0"]="ValidateNetworkConnectionHandle"
    ["FUN_1808d73b0"]="SetNetworkConnectionParameter"
    ["FUN_1808c2150"]="ProcessNetworkConnectionRequest"
    ["FUN_180853d20"]="ValidateNetworkRequestData"
    ["FUN_1808c1410"]="FinalizeNetworkConnection"
    ["FUN_1808650a0"]="CheckNetworkConnectionStatus"
    ["FUN_18085f670"]="GetNetworkConnectionInfo"
    ["FUN_180853c50"]="GetNetworkConnectionProtocol"
    ["FUN_1808d2430"]="UpdateNetworkConnectionTimestamp"
    ["FUN_18085f2b0"]="ValidateNetworkConnectionState"
    ["FUN_180863a80"]="ProcessNetworkConnectionData"
    ["FUN_18085f340"]="FinalizeNetworkConnectionSetup"
    ["FUN_1808d0760"]="ProcessNetworkPacketRouting"
    ["FUN_1808cee30"]="EncryptNetworkPacketData"
    ["FUN_1808d2850"]="ValidateNetworkPacketChecksum"
    ["FUN_1808b5060"]="InitializeNetworkPacketTransfer"
    ["FUN_1808d6e30"]="ValidateNetworkTransferStatus"
    ["FUN_1808d15f0"]="ProcessNetworkDataTransfer"
    ["FUN_180865800"]="GetNetworkConnectionAttribute"
    ["FUN_1808ca6f0"]="ValidateNetworkProtocolVersion"
    ["FUN_18085ff70"]="CheckNetworkProtocolCompatibility"
    ["FUN_180867d60"]="InitializeNetworkProtocolHandler"
    ["FUN_1808b83b0"]="ProcessNetworkProtocolData"
    ["FUN_1808538a0"]="ValidateNetworkProtocolHandle"
    ["FUN_1808b8130"]="SetupNetworkProtocolConnection"
    ["FUN_1808b9030"]="FinalizeNetworkProtocolSetup"
    ["FUN_18085f440"]="GetNetworkConnectionStatus"
    ["FUN_18085d7f0"]="InitializeNetworkSecurityManager"
    ["FUN_18085bb20"]="SetupNetworkSecurityParameters"
    ["FUN_1808bef40"]="ProcessNetworkConnectionEvent"
    ["FUN_180868800"]="ValidateNetworkConnectionEvent"
    ["FUN_1808538a0"]="ProcessNetworkConnectionEvent"
    ["FUN_180863a80"]="HandleNetworkConnectionData"
    ["FUN_18085f670"]="GetNetworkConnectionDetails"
    ["FUN_180853c50"]="GetNetworkProtocolInformation"
    ["FUN_1808d2430"]="UpdateNetworkTimestamp"
    ["FUN_18085f0e0"]="SetupNetworkConnectionParameters"
    ["FUN_1808538a0"]="ValidateNetworkParameters"
    ["FUN_1808d73b0"]="SetNetworkParameter"
    ["FUN_1808c2150"]="ProcessNetworkRequest"
    ["FUN_180853d20"]="ValidateNetworkRequest"
    ["FUN_1808c1410"]="FinalizeNetworkSetup"
    ["FUN_1808650a0"]="CheckNetworkStatus"
    ["FUN_18085f670"]="GetNetworkInfo"
)

# 遍历映射关系，执行替换
for old_name in "${!function_map[@]}"; do
    new_name="${function_map[$old_name]}"
    echo "替换: $old_name -> $new_name"
    sed -i "s/$old_name/$new_name/g" 05_networking.c
done

echo "函数名替换完成"