#!/bin/bash

# 网络模块函数名美化脚本 - 扩展版本
# 用于批量重命名05_networking.c中的函数名

FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c"

# 定义函数映射 - 扩展版本
declare -A function_mappings=(
    # 已处理的函数（跳过）
    # ["FUN_180895236"]="GetNetworkConnectionHandle"
    # ["FUN_180895345"]="ValidateNetworkConnectionStatus"
    # ["FUN_180895bb0"]="ProcessNetworkPacketData"
    # ["FUN_180895c60"]="HandleNetworkConnectionRequest"
    
    # 核心网络函数
    ["FUN_180895c8b"]="ValidateConnectionParameters"
    ["FUN_180895cf1"]="ProcessNetworkDataTransfer"
    ["FUN_180895d16"]="GetNetworkContextHandle"
    ["FUN_180895d30"]="InitializeNetworkContext"
    ["FUN_180895d62"]="ValidateNetworkPacket"
    ["FUN_180895d9c"]="ProcessNetworkStatusUpdate"
    ["FUN_180895f44"]="HandleNetworkDataProcessing"
    ["FUN_180896027"]="GetNetworkOperationStatus"
    ["FUN_180896040"]="ProcessNetworkConnection"
    ["FUN_180896064"]="ValidateNetworkData"
    ["FUN_18089611f"]="GetNetworkSecurityHandle"
    
    # 网络连接处理函数
    ["FUN_180896c10"]="ProcessNetworkConnectionData"
    ["FUN_1808974f4"]="InitializeNetworkSystem"
    ["FUN_180897560"]="SetupNetworkProtocol"
    ["FUN_1808975a6"]="ConfigureNetworkSettings"
    ["FUN_180897644"]="StartNetworkListener"
    ["FUN_1808976b0"]="InitializeNetworkBuffers"
    ["FUN_180897859"]="ProcessNetworkFloatParameter"
    ["FUN_180897afe"]="ValidateNetworkMemory"
    ["FUN_180897b0e"]="CheckNetworkAvailability"
    ["FUN_180897b16"]="VerifyNetworkIntegrity"
    
    # 网络状态管理函数
    ["FUN_180897dd3"]="GetNetworkStatusHandle"
    ["FUN_18089802e"]="ResetNetworkConnection"
    ["FUN_1808986b0"]="ProcessNetworkPacket"
    ["FUN_180898790"]="HandleNetworkRequest"
    ["FUN_180898b65"]="ValidateNetworkPacketEx"
    ["FUN_180898bc0"]="ProcessNetworkPacketEx"
    ["FUN_180898c86"]="GetNetworkErrorCode"
    ["FUN_180898d31"]="HandleNetworkPacketError"
    ["FUN_180898d4d"]="GetNetworkConnectionInfo"
    ["FUN_180898d60"]="ProcessNetworkRequestEx"
    
    # 网络数据流处理函数
    ["FUN_180898d84"]="ValidateNetworkConnection"
    ["FUN_180898e56"]="GetNetworkSecurityInfo"
    ["FUN_180898e70"]="ProcessNetworkSecurity"
    ["FUN_180898ef0"]="HandleNetworkDataFlow"
    ["FUN_180898f40"]="ProcessNetworkDataStream"
    ["FUN_180898fc0"]="ValidateNetworkPacketStream"
    ["FUN_180899040"]="ProcessNetworkPacketStream"
    ["FUN_180899090"]="HandleNetworkPacketStream"
    ["FUN_180899180"]="ProcessNetworkDataStreamEx"
    ["FUN_180899220"]="ValidateNetworkDataStream"
    ["FUN_18089923e"]="GetNetworkStreamHandle"
    ["FUN_1808992c4"]="InitializeNetworkStream"
    ["FUN_1808992f0"]="ProcessNetworkStream"
    ["FUN_180899360"]="ValidateNetworkStream"
    ["FUN_1808993e0"]="HandleNetworkStreamData"
    
    # 网络协议处理函数
    ["FUN_180899650"]="ProcessNetworkStreamEx"
    ["FUN_180899740"]="ValidateNetworkStreamEx"
    ["FUN_180899763"]="GetNetworkStreamInfo"
    ["FUN_180899790"]="InitializeNetworkProtocol"
    ["FUN_180899799"]="SetupNetworkProtocol"
    ["FUN_1808997b0"]="ProcessNetworkProtocol"
    ["FUN_1808997f0"]="HandleNetworkProtocol"
    ["FUN_180899816"]="GetNetworkProtocolInfo"
    ["FUN_180899891"]="ValidateNetworkProtocol"
    ["FUN_1808998a0"]="ProcessNetworkProtocolEx"
    ["FUN_180899950"]="HandleNetworkProtocolStream"
    ["FUN_1808999c1"]="ValidateNetworkProtocolStream"
    ["FUN_180899ae6"]="ProcessNetworkProtocolData"
)

# 应用函数映射
for old_name in "${!function_mappings[@]}"; do
    new_name="${function_mappings[$old_name]}"
    
    echo "正在处理: $old_name -> $new_name"
    
    # 替换函数定义和调用
    sed -i "s/\b$old_name\b/$new_name/g" "$FILE_PATH"
    
    echo "✓ 已重命名: $old_name -> $new_name"
done

echo "批量函数重命名完成！"
echo "注意：文档注释需要手动添加到重命名的函数上。"