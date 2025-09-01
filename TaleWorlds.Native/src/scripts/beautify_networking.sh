#!/bin/bash

# 美化网络模块代码中的FUN_函数名
# 这个脚本将05_networking.c文件中的FUN_函数名替换为语义化名称

FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c"

# 备份原始文件
cp "$FILE_PATH" "$FILE_PATH.backup_$(date +%Y%m%d_%H%M%S)"

# FUN_函数名替换映射
declare -A FUNCTION_REPLACEMENTS=(
    ["FUN_18085d7f0"]="ReleaseNetworkConnectionResources"
    ["FUN_18085bb20"]="ProcessNetworkPacketTransmissionEx"
    ["FUN_1808bef40"]="ValidateNetworkConnectionHandleEx"
    ["FUN_180868800"]="CheckNetworkConnectionFlags"
    ["FUN_18085ff70"]="ValidateNetworkConnectionState"
    ["FUN_180867d60"]="InitializeNetworkConnectionData"
    ["FUN_1808b83b0"]="ProcessNetworkConnectionDataEx"
    ["FUN_1808538a0"]="ValidateNetworkConnectionHandleEx"
    ["FUN_1808b8130"]="CheckNetworkConnectionStatus"
    ["FUN_1808b9030"]="ValidateNetworkPacketData"
    ["FUN_18085f0e0"]="GetNetworkConnectionIndex"
    ["FUN_1808d73b0"]="SendNetworkPacketDataEx"
    ["FUN_1808c2150"]="ValidateNetworkConnectionContextEx"
    ["FUN_180853d20"]="CheckNetworkConnectionValidity"
    ["FUN_1808c1410"]="ProcessNetworkConnectionRequestEx"
    ["FUN_1808650a0"]="ValidateNetworkConnectionSecurity"
    ["FUN_1808d0760"]="ProcessNetworkDataBuffer"
    ["FUN_1808cee30"]="EncryptNetworkPacketData"
    ["FUN_1808d2850"]="SetupNetworkConnectionParametersEx"
    ["FUN_1808b5060"]="InitializeNetworkConnectionStack"
    ["FUN_1808d6e30"]="ValidateNetworkConnectionStack"
    ["FUN_1808d15f0"]="ProcessNetworkPacketBuffer"
    ["FUN_1808d38d0"]="CheckNetworkConnectionIntegrityEx"
    ["FUN_18085f2b0"]="GetNetworkConnectionStatus"
    ["FUN_1808d7550"]="ValidateNetworkPacketHandle"
    ["FUN_1808d0d90"]="ProcessNetworkConnectionBuffer"
    ["FUN_1808b5030"]="InitializeNetworkParameterStack"
    ["FUN_1808b3bc0"]="ValidateNetworkParameterData"
    ["FUN_18085e860"]="ProcessNetworkParameterValidation"
    ["FUN_1808bef80"]="SendNetworkStatusUpdate"
    ["FUN_1808c7f30"]="GetNetworkConnectionParameter"
    ["FUN_1808d74e0"]="ValidateNetworkParameter"
    ["FUN_1808b42b0"]="InitializeNetworkFlags"
    ["FUN_180851ba0"]="ProcessNetworkFlags"
    ["FUN_18085d650"]="ValidateNetworkBufferAccess"
    ["FUN_180867280"]="ProcessNetworkConnectionTransfer"
    ["FUN_180849120"]="ValidateNetworkIndex"
    ["FUN_180866550"]="TransmitNetworkPacket"
    ["FUN_180865e20"]="ValidateNetworkTransfer"
    ["FUN_180866d00"]="InitializeNetworkConnectionState"
    ["FUN_180840100"]="CleanupNetworkStack"
    ["FUN_180866fe0"]="ProcessNetworkConnectionSetup"
    ["FUN_18084dc20"]="InitializeNetworkConnectionHandle"
    ["FUN_1808676f0"]="ProcessNetworkConnectionIteration"
)

# 遍历所有替换映射
for old_name in "${!FUNCTION_REPLACEMENTS[@]}"; do
    new_name="${FUNCTION_REPLACEMENTS[$old_name]}"
    
    # 使用sed进行替换，处理函数调用和函数定义
    sed -i "s/\b$old_name\b/$new_name/g" "$FILE_PATH"
    
    echo "替换 $old_name -> $new_name"
done

echo "函数名替换完成！"